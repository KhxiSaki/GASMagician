// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilityTasks/GSMPlayAnimAndWaitForAnimNotify.h"
#include "GameFramework/Character.h"
#include "AbilitySystemComponent.h"
#include "AbilitySystemGlobals.h"
#include "Animation/AnimMontage.h"
#include "Animation/AnimSequence.h"
#include "AbilitySystemLog.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(GSMPlayAnimAndWaitForAnimNotify)

UGSMPlayAnimAndWaitForAnimNotify::UGSMPlayAnimAndWaitForAnimNotify(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	bStopWhenAbilityEnds = true;
}

void UGSMPlayAnimAndWaitForAnimNotify::OnMontageBlendingOut(UAnimMontage* Montage, bool bInterrupted)
{
	if (Montage && Ability && Ability->GetCurrentMontage() == Montage)
	{
		if (Montage->GetFirstAnimReference() == AnimSequenceToPlay)
		{
			if (UAbilitySystemComponent* ASC = AbilitySystemComponent.Get())
			{
				ASC->ClearAnimatingAbility(Ability);
			}

			// Reset AnimRootMotionTranslationScale
			ACharacter* Character = Cast<ACharacter>(GetAvatarActor());
			if (Character && (Character->GetLocalRole() == ROLE_Authority ||
							  (Character->GetLocalRole() == ROLE_AutonomousProxy && Ability->GetNetExecutionPolicy() == EGameplayAbilityNetExecutionPolicy::LocalPredicted)))
			{
				Character->SetAnimRootMotionTranslationScale(1.f);
			}

		}
	}

	if (bInterrupted)
	{
		if (ShouldBroadcastAbilityTaskDelegates())
		{
			OnInterrupted.Broadcast();
		}
	}
	else
	{
		if (ShouldBroadcastAbilityTaskDelegates())
		{
			OnBlendOut.Broadcast();
		}
	}
}

void UGSMPlayAnimAndWaitForAnimNotify::OnMontageBlendedIn(UAnimMontage* Montage)
{
	if (ShouldBroadcastAbilityTaskDelegates())
	{
		OnBlendIn.Broadcast();
	}
}

void UGSMPlayAnimAndWaitForAnimNotify::OnMontageInterrupted()
{
	if (StopPlayingMontage())
	{
		// Let the BP handle the interrupt as well
		if (ShouldBroadcastAbilityTaskDelegates())
		{
			OnInterrupted.Broadcast();
		}
	}
}

void UGSMPlayAnimAndWaitForAnimNotify::OnMontageEnded(UAnimMontage* Montage, bool bInterrupted)
{
	if (!bInterrupted)
	{
		if (ShouldBroadcastAbilityTaskDelegates())
		{
			OnCompleted.Broadcast();
		}
	}

	EndTask();
}

UGSMPlayAnimAndWaitForAnimNotify* UGSMPlayAnimAndWaitForAnimNotify::CreatePlayAnimAndWaitProxy(
	UGameplayAbility* OwningAbility,
	FName TaskInstanceName, 
	UAnimSequence* AnimSequence, 
	FName SlotName, 
	float BlendInTime, 
	float BlendOutTime, 
	float InPlayRate,
	float StartTimeSeconds /*= 0.0f*/, 
	bool bStopWhenAbilityEnds /*= true*/, 
	float AnimRootMotionTranslationScale /*= 1.f*/,
	FName AnimNotifyName)
{
	UGSMPlayAnimAndWaitForAnimNotify* MyObj = NewAbilityTask<UGSMPlayAnimAndWaitForAnimNotify>(OwningAbility, TaskInstanceName);
	MyObj->AnimSequenceToPlay = AnimSequence;
	MyObj->SlotName = SlotName;
	MyObj->BlendInTime = BlendInTime;
	MyObj->BlendOutTime = BlendOutTime;
	MyObj->PlayRate = InPlayRate;
	MyObj->AnimRootMotionTranslationScale = AnimRootMotionTranslationScale;
	MyObj->bStopWhenAbilityEnds = bStopWhenAbilityEnds;
	MyObj->StartTimeSeconds = StartTimeSeconds;
	MyObj->AnimNotifyName = AnimNotifyName;
	return MyObj;
}

void UGSMPlayAnimAndWaitForAnimNotify::Activate()
{
	if (Ability == nullptr)
	{
		return;
	}

	bool bPlayedMontage = false;

	if (UAbilitySystemComponent* ASC = AbilitySystemComponent.Get())
	{
		const FGameplayAbilityActorInfo* ActorInfo = Ability->GetCurrentActorInfo();
		UAnimInstance* AnimInstance = ActorInfo->GetAnimInstance();
		if (AnimInstance != nullptr)
		{
			UAnimMontage* NewDynamicMontage = ASC->PlaySlotAnimationAsDynamicMontage(Ability, Ability->GetCurrentActivationInfo(), AnimSequenceToPlay, SlotName, BlendInTime, BlendOutTime, PlayRate, StartTimeSeconds);
			if (NewDynamicMontage)
			{
				
				// Playing a montage could potentially fire off a callback into game code which could kill this ability! Early out if we are  pending kill.
				if (ShouldBroadcastAbilityTaskDelegates() == false)
				{
					return;
				}

				InterruptedHandle = Ability->OnGameplayAbilityCancelled.AddUObject(this, &UGSMPlayAnimAndWaitForAnimNotify::OnMontageInterrupted);

				BlendingOutDelegate.BindUObject(this, &UGSMPlayAnimAndWaitForAnimNotify::OnMontageBlendingOut);
				AnimInstance->Montage_SetBlendingOutDelegate(BlendingOutDelegate, NewDynamicMontage);

				BlendedInDelegate.BindUObject(this, &UGSMPlayAnimAndWaitForAnimNotify::OnMontageBlendedIn);
				AnimInstance->Montage_SetBlendedInDelegate(BlendedInDelegate, NewDynamicMontage);

				MontageEndedDelegate.BindUObject(this, &UGSMPlayAnimAndWaitForAnimNotify::OnMontageEnded);
				AnimInstance->Montage_SetEndDelegate(MontageEndedDelegate, NewDynamicMontage);

				if (AnimNotifyName != NAME_None)
				{
					AnimInstance->OnPlayMontageNotifyBegin.AddDynamic(this, &UGSMPlayAnimAndWaitForAnimNotify::OnAnimationNotifyBeginReceived);
				}

				ACharacter* Character = Cast<ACharacter>(GetAvatarActor());
				if (Character && (Character->GetLocalRole() == ROLE_Authority ||
								  (Character->GetLocalRole() == ROLE_AutonomousProxy && Ability->GetNetExecutionPolicy() == EGameplayAbilityNetExecutionPolicy::LocalPredicted)))
				{
					Character->SetAnimRootMotionTranslationScale(AnimRootMotionTranslationScale);
				}

				bPlayedMontage = true;
			}
		}
		else
		{
			ABILITY_LOG(Warning, TEXT("UGSMPlayAnimAndWaitForAnimNotify call to PlayMontage failed!"));
		}
	}
	else
	{
		ABILITY_LOG(Warning, TEXT("UGSMPlayAnimAndWaitForAnimNotify called on invalid AbilitySystemComponent"));
	}

	if (!bPlayedMontage)
	{
		ABILITY_LOG(Warning, TEXT("UGSMPlayAnimAndWaitForAnimNotify called in Ability %s failed to play dynamic montage %s; Task Instance Name %s."), *Ability->GetName(), *GetNameSafe(AnimSequenceToPlay),*InstanceName.ToString());
		if (ShouldBroadcastAbilityTaskDelegates())
		{
			OnCancelled.Broadcast();
		}
	}

	SetWaitingOnAvatar();
}

void UGSMPlayAnimAndWaitForAnimNotify::ExternalCancel()
{
	if (ShouldBroadcastAbilityTaskDelegates())
	{
		OnCancelled.Broadcast();
	}
	Super::ExternalCancel();
}

void UGSMPlayAnimAndWaitForAnimNotify::OnDestroy(bool AbilityEnded)
{
	// Note: Clearing montage end delegate isn't necessary since its not a multicast and will be cleared when the next montage plays.
	// (If we are destroyed, it will detect this and not do anything)

	// This delegate, however, should be cleared as it is a multicast
	if (Ability)
	{
		Ability->OnGameplayAbilityCancelled.Remove(InterruptedHandle);
		if (AbilityEnded && bStopWhenAbilityEnds)
		{
			StopPlayingMontage();
		}
	}

	const FGameplayAbilityActorInfo* ActorInfo = Ability->GetCurrentActorInfo();
	if (!ActorInfo)
	{
		Super::OnDestroy(AbilityEnded);
		return;
	}

	UAnimInstance* AnimInstance = ActorInfo->GetAnimInstance();

	if (AnimInstance != nullptr)
	{
		AnimInstance->OnPlayMontageNotifyBegin.RemoveDynamic(this, &UGSMPlayAnimAndWaitForAnimNotify::OnAnimationNotifyBeginReceived);
	}
	
	Super::OnDestroy(AbilityEnded);

}

void UGSMPlayAnimAndWaitForAnimNotify::OnAnimationNotifyBeginReceived(FName NotifyName, const FBranchingPointNotifyPayload& BranchingPointPayload)
{
	if (NotifyName == AnimNotifyName)
	{
		OnAnimNotify.Broadcast();
	}
}

bool UGSMPlayAnimAndWaitForAnimNotify::StopPlayingMontage()
{
	if (Ability == nullptr)
	{
		return false;
	}

	const FGameplayAbilityActorInfo* ActorInfo = Ability->GetCurrentActorInfo();
	if (ActorInfo == nullptr)
	{
		return false;
	}

	UAnimInstance* AnimInstance = ActorInfo->GetAnimInstance();
	if (AnimInstance == nullptr)
	{
		return false;
	}

	// Check if the montage is still playing
	// The ability would have been interrupted, in which case we should automatically stop the montage
	UAbilitySystemComponent* ASC = AbilitySystemComponent.Get();
	if (ASC && Ability)
	{
		const UAnimMontage* Montage = ASC->GetCurrentMontage();
		if (ASC->GetAnimatingAbility() == Ability && Montage && Montage->IsDynamicMontage() && Montage->GetFirstAnimReference() == AnimSequenceToPlay)
		{
			// Unbind delegates so they don't get called as well
			FAnimMontageInstance* MontageInstance = AnimInstance->GetActiveInstanceForMontage(Montage);
			if (MontageInstance)
			{
				MontageInstance->OnMontageBlendingOutStarted.Unbind();
				MontageInstance->OnMontageBlendedInEnded.Unbind();
				MontageInstance->OnMontageEnded.Unbind();
			}

			ASC->CurrentMontageStop();
			return true;
		}
	}

	return false;
}

FString UGSMPlayAnimAndWaitForAnimNotify::GetDebugString() const
{
	UAnimMontage* PlayingMontage = nullptr;
	if (Ability)
	{
		const FGameplayAbilityActorInfo* ActorInfo = Ability->GetCurrentActorInfo();
		UAnimInstance* AnimInstance = ActorInfo->GetAnimInstance();

		if (AnimInstance != nullptr)
		{
			PlayingMontage = AnimInstance->GetCurrentActiveMontage();
		}
	}

	if(PlayingMontage)
	{
		return FString::Printf(TEXT("UGSMPlayAnimAndWaitForAnimNotify. AnimSequenceToPlay: %s Currently Playing: %s IsDynamic: %d AnimSequence: %s"), 
			*GetNameSafe(AnimSequenceToPlay), *GetNameSafe(PlayingMontage), PlayingMontage->IsDynamicMontage(), *GetNameSafe(PlayingMontage->GetFirstAnimReference()));
	}
	else
	{
		return FString::Printf(TEXT("UGSMPlayAnimAndWaitForAnimNotify. AnimSequenceToPlay: %s  (Currently Playing): None"), *GetNameSafe(AnimSequenceToPlay));
	}
	
}




