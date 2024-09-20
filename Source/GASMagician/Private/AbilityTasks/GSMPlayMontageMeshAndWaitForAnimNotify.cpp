// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilityTasks/GSMPlayMontageMeshAndWaitForAnimNotify.h"
#include "Animation/AnimMontage.h"
#include "GameFramework/Character.h"
#include "AbilitySystemComponent.h"
#include "AbilitySystemLog.h"
#include "AbilitySystemGlobals.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(GSMPlayMontageMeshAndWaitForAnimNotify)

static bool GUseAggressivePlayMontageMeshAndWaitForAnimNotifyEndTask = true;
static FAutoConsoleVariableRef CVarAggressivePlayMontageMeshAndWaitForAnimNotifyEndTask(TEXT("GASMagician.PlayMontageMeshAndWaitForAnimNotify.AggressiveEndTask"), GUseAggressivePlayMontageMeshAndWaitForAnimNotifyEndTask, TEXT("This should be set to true in order to avoid multiple callbacks off an AbilityTask_PlayMontageAndWait node"));

static bool GPlayMontageMeshAndWaitForAnimNotifyFireInterruptOnAnimEndInterrupt = true;
static FAutoConsoleVariableRef CVarPlayMontageMeshAndWaitForAnimNotifyFireInterruptOnAnimEndInterrupt(TEXT("GASMagician.PlayMontageMeshAndWaitForAnimNotify.FireInterruptOnAnimEndInterrupt"), GPlayMontageMeshAndWaitForAnimNotifyFireInterruptOnAnimEndInterrupt, TEXT("This is a fix that will cause AbilityTask_PlayMontageAndWait to fire its Interrupt event if the underlying AnimInstance ends in an interrupted"));

UGSMPlayMontageMeshAndWaitForAnimNotify::UGSMPlayMontageMeshAndWaitForAnimNotify(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	Rate = 1.f;
	bStopWhenAbilityEnds = true;
}

void UGSMPlayMontageMeshAndWaitForAnimNotify::OnMontageBlendingOut(UAnimMontage* Montage, bool bInterrupted)
{
	const bool bPlayingThisMontage = (Montage == MontageToPlay) && Ability && Ability->GetCurrentMontage() == MontageToPlay;
	if (bPlayingThisMontage)
	{
		// Reset AnimRootMotionTranslationScale
		ACharacter* Character = Cast<ACharacter>(GetAvatarActor());
		if (Character && (Character->GetLocalRole() == ROLE_Authority ||
							(Character->GetLocalRole() == ROLE_AutonomousProxy && Ability->GetNetExecutionPolicy() == EGameplayAbilityNetExecutionPolicy::LocalPredicted)))
		{
			Character->SetAnimRootMotionTranslationScale(1.f);
		}
	}

	if (bPlayingThisMontage && (bInterrupted || !bAllowInterruptAfterBlendOut))
	{
		if (UAbilitySystemComponent* ASC = AbilitySystemComponent.Get())
		{
			ASC->ClearAnimatingAbility(Ability);
		}
	}

	if (ShouldBroadcastAbilityTaskDelegates())
	{
		if (bInterrupted)
		{
            bAllowInterruptAfterBlendOut = false;
			OnInterrupted.Broadcast();

			if (GUseAggressivePlayMontageMeshAndWaitForAnimNotifyEndTask)
			{
				EndTask();
			}
		}
		else
		{
			OnBlendOut.Broadcast();
		}
	}
}

void UGSMPlayMontageMeshAndWaitForAnimNotify::OnMontageBlendedIn(UAnimMontage* Montage)
{
	if (ShouldBroadcastAbilityTaskDelegates())
	{
		OnBlendedIn.Broadcast();
	}
}

void UGSMPlayMontageMeshAndWaitForAnimNotify::OnMontageInterrupted()
{
	// Call the new function
	OnGameplayAbilityCancelled();
}

void UGSMPlayMontageMeshAndWaitForAnimNotify::OnGameplayAbilityCancelled()
{
	if (StopPlayingMontage() || bAllowInterruptAfterBlendOut)
	{
		// Let the BP handle the interrupt as well
		if (ShouldBroadcastAbilityTaskDelegates())
		{
			bAllowInterruptAfterBlendOut = false;
			OnInterrupted.Broadcast();
		}
	}

	if (GUseAggressivePlayMontageMeshAndWaitForAnimNotifyEndTask)
	{
		EndTask();
	}
}

void UGSMPlayMontageMeshAndWaitForAnimNotify::OnMontageEnded(UAnimMontage* Montage, bool bInterrupted)
{
	if (!bInterrupted)
	{
		if (ShouldBroadcastAbilityTaskDelegates())
		{
			OnCompleted.Broadcast();
		}
	}
	else if(bAllowInterruptAfterBlendOut && GPlayMontageMeshAndWaitForAnimNotifyFireInterruptOnAnimEndInterrupt)
	{
		if (ShouldBroadcastAbilityTaskDelegates())
		{
			OnInterrupted.Broadcast();
		}
	}

	EndTask();
}

UGSMPlayMontageMeshAndWaitForAnimNotify* UGSMPlayMontageMeshAndWaitForAnimNotify::CreatePlayMontageAndWaitProxy(UGameplayAbility* OwningAbility,
	FName TaskInstanceName, UAnimMontage *MontageToPlay, USkeletalMeshComponent* SkeletalMeshComponent, float Rate, FName StartSection, bool bStopWhenAbilityEnds, float AnimRootMotionTranslationScale, float StartTimeSeconds, bool bAllowInterruptAfterBlendOut,
	FName AnimNotifyName)
{

	UAbilitySystemGlobals::NonShipping_ApplyGlobalAbilityScaler_Rate(Rate);

	UGSMPlayMontageMeshAndWaitForAnimNotify* MyObj = NewAbilityTask<UGSMPlayMontageMeshAndWaitForAnimNotify>(OwningAbility, TaskInstanceName);
	MyObj->MontageToPlay = MontageToPlay;
	MyObj->SkeletalMeshComponent = SkeletalMeshComponent;
	MyObj->Rate = Rate;
	MyObj->StartSection = StartSection;
	MyObj->AnimRootMotionTranslationScale = AnimRootMotionTranslationScale;
	MyObj->bStopWhenAbilityEnds = bStopWhenAbilityEnds;
	MyObj->bAllowInterruptAfterBlendOut = bAllowInterruptAfterBlendOut;
	MyObj->StartTimeSeconds = StartTimeSeconds;
	MyObj->AnimNotifyName = AnimNotifyName;
	return MyObj;
}

void UGSMPlayMontageMeshAndWaitForAnimNotify::Activate()
{
	if (Ability == nullptr)
	{
		return;
	}

	bool bPlayedMontage = false;

	if (UAbilitySystemComponent* ASC = AbilitySystemComponent.Get())
	{
		const FGameplayAbilityActorInfo* ActorInfo = Ability->GetCurrentActorInfo();
		UAnimInstance* AnimInstance;
		if (SkeletalMeshComponent)
		{ 
			AnimInstance = SkeletalMeshComponent->GetAnimInstance();

			float Duration = AnimInstance->Montage_Play(MontageToPlay, Rate);
			if (Duration > 0)
			{
				bPlayedMontage = true;
			}
		}
		else
		{
			AnimInstance = ActorInfo->GetAnimInstance();
			if (AnimInstance != nullptr)
			{
				if (ASC->PlayMontage(Ability, Ability->GetCurrentActivationInfo(), MontageToPlay, Rate, StartSection, StartTimeSeconds) > 0.f)
				{
					// Playing a montage could potentially fire off a callback into game code which could kill this ability! Early out if we are  pending kill.
					if (ShouldBroadcastAbilityTaskDelegates() == false)
					{
						return;
					}

					InterruptedHandle = Ability->OnGameplayAbilityCancelled.AddUObject(this, &UGSMPlayMontageMeshAndWaitForAnimNotify::OnGameplayAbilityCancelled);

					BlendedInDelegate.BindUObject(this, &UGSMPlayMontageMeshAndWaitForAnimNotify::OnMontageBlendedIn);
					AnimInstance->Montage_SetBlendedInDelegate(BlendedInDelegate, MontageToPlay);

					BlendingOutDelegate.BindUObject(this, &UGSMPlayMontageMeshAndWaitForAnimNotify::OnMontageBlendingOut);
					AnimInstance->Montage_SetBlendingOutDelegate(BlendingOutDelegate, MontageToPlay);

					MontageEndedDelegate.BindUObject(this, &UGSMPlayMontageMeshAndWaitForAnimNotify::OnMontageEnded);
					AnimInstance->Montage_SetEndDelegate(MontageEndedDelegate, MontageToPlay);

					if (AnimNotifyName != NAME_None)
					{
						AnimInstance->OnPlayMontageNotifyBegin.AddDynamic(this, &UGSMPlayMontageMeshAndWaitForAnimNotify::OnAnimationNotifyBeginReceived);
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
				ABILITY_LOG(Warning, TEXT("UGSMPlayMontageMeshAndWaitForAnimNotify call to PlayMontage failed!"));
			}
		}
	}
	else
	{
		ABILITY_LOG(Warning, TEXT("UGSMPlayMontageMeshAndWaitForAnimNotify called on invalid AbilitySystemComponent"));
	}

	if (!bPlayedMontage)
	{
		ABILITY_LOG(Warning, TEXT("UGSMPlayMontageMeshAndWaitForAnimNotify called in Ability %s failed to play montage %s; Task Instance Name %s."), *Ability->GetName(), *GetNameSafe(MontageToPlay),*InstanceName.ToString());
		if (ShouldBroadcastAbilityTaskDelegates())
		{
			OnCancelled.Broadcast();
		}
	}

	SetWaitingOnAvatar();
}

void UGSMPlayMontageMeshAndWaitForAnimNotify::ExternalCancel()
{
	if (ShouldBroadcastAbilityTaskDelegates())
	{
		OnCancelled.Broadcast();
	}
	Super::ExternalCancel();
}

void UGSMPlayMontageMeshAndWaitForAnimNotify::OnDestroy(bool AbilityEnded)
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

	UAnimInstance* AnimInstance;
	if (SkeletalMeshComponent)
	{
		AnimInstance = SkeletalMeshComponent->GetAnimInstance();
	}
	else
	{
		AnimInstance = ActorInfo->GetAnimInstance();
	}

	if (AnimInstance != nullptr)
	{
		AnimInstance->OnPlayMontageNotifyBegin.RemoveDynamic(this, &UGSMPlayMontageMeshAndWaitForAnimNotify::OnAnimationNotifyBeginReceived);
	}
	Super::OnDestroy(AbilityEnded);

}

void UGSMPlayMontageMeshAndWaitForAnimNotify::OnAnimationNotifyBeginReceived(FName NotifyName, const FBranchingPointNotifyPayload& BranchingPointPayload)
{
	if (NotifyName == AnimNotifyName)
	{
		OnAnimNotify.Broadcast();
	}
}

bool UGSMPlayMontageMeshAndWaitForAnimNotify::StopPlayingMontage()
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

	UAnimInstance* AnimInstance;
	if (SkeletalMeshComponent)
	{
		AnimInstance = SkeletalMeshComponent->GetAnimInstance();
	}
	else
	{
		AnimInstance = ActorInfo->GetAnimInstance();
	}
	
	if (AnimInstance == nullptr)
	{
		return false;
	}

	// Check if the montage is still playing
	// The ability would have been interrupted, in which case we should automatically stop the montage
	UAbilitySystemComponent* ASC = AbilitySystemComponent.Get();
	if (ASC && Ability)
	{
		if (ASC->GetAnimatingAbility() == Ability
			&& ASC->GetCurrentMontage() == MontageToPlay)
		{
			// Unbind delegates so they don't get called as well
			FAnimMontageInstance* MontageInstance = AnimInstance->GetActiveInstanceForMontage(MontageToPlay);
			if (MontageInstance)
			{
				MontageInstance->OnMontageBlendedInEnded.Unbind();
				MontageInstance->OnMontageBlendingOutStarted.Unbind();
				MontageInstance->OnMontageEnded.Unbind();
			}

			ASC->CurrentMontageStop();
			return true;
		}
	}

	return false;
}

FString UGSMPlayMontageMeshAndWaitForAnimNotify::GetDebugString() const
{
	UAnimMontage* PlayingMontage = nullptr;
	if (Ability)
	{
		const FGameplayAbilityActorInfo* ActorInfo = Ability->GetCurrentActorInfo();
		UAnimInstance* AnimInstance;
		if (SkeletalMeshComponent)
		{
			AnimInstance = SkeletalMeshComponent->GetAnimInstance();
		}
		else
		{
			AnimInstance = ActorInfo->GetAnimInstance();
		}		

		if (AnimInstance != nullptr)
		{
			PlayingMontage = AnimInstance->Montage_IsActive(MontageToPlay) ? ToRawPtr(MontageToPlay) : AnimInstance->GetCurrentActiveMontage();
		}
	}

	return FString::Printf(TEXT("UGSMPlayMontageMeshAndWaitForAnimNotify. MontageToPlay: %s  (Currently Playing): %s"), *GetNameSafe(MontageToPlay), *GetNameSafe(PlayingMontage));
}





