// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilityTasks/GSMPlayMontageMeshAndWait.h"
#include "Animation/AnimMontage.h"
#include "GameFramework/Character.h"
#include "AbilitySystemComponent.h"
#include "AbilitySystemLog.h"
#include "AbilitySystemGlobals.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(GSMPlayMontageMeshAndWait)

static bool GUseAggressivePlayMontageMeshAndWaitEndTask = true;
static FAutoConsoleVariableRef CVarAggressivePlayMontageMeshAndWaitEndTask(TEXT("GASMagician.PlayMontageMeshAndWait.AggressiveEndTask"), GUseAggressivePlayMontageMeshAndWaitEndTask, TEXT("This should be set to true in order to avoid multiple callbacks off an PlayMontageMeshAndWait node"));

static bool GPlayMontageMeshAndWaitFireInterruptOnAnimEndInterrupt = true;
static FAutoConsoleVariableRef CVarPlayMontageMeshAndWaitFireInterruptOnAnimEndInterrupt(TEXT("GASMagician.PlayMontageMeshAndWait.FireInterruptOnAnimEndInterrupt"), GPlayMontageMeshAndWaitFireInterruptOnAnimEndInterrupt, TEXT("This is a fix that will cause PlayMontageMeshAndWait to fire its Interrupt event if the underlying AnimInstance ends in an interrupted"));

UGSMPlayMontageMeshAndWait::UGSMPlayMontageMeshAndWait(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

void UGSMPlayMontageMeshAndWait::OnMontageBlendingOut(UAnimMontage* Montage, bool bInterrupted)
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

			if (GUseAggressivePlayMontageMeshAndWaitEndTask)
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

void UGSMPlayMontageMeshAndWait::OnMontageBlendedIn(UAnimMontage* Montage)
{
	if (ShouldBroadcastAbilityTaskDelegates())
	{
		OnBlendedIn.Broadcast();
	}
}

void UGSMPlayMontageMeshAndWait::OnMontageInterrupted()
{
	// Call the new function
	OnGameplayAbilityCancelled();
}

void UGSMPlayMontageMeshAndWait::OnGameplayAbilityCancelled()
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

	if (GUseAggressivePlayMontageMeshAndWaitEndTask)
	{
		EndTask();
	}
}

void UGSMPlayMontageMeshAndWait::OnMontageEnded(UAnimMontage* Montage, bool bInterrupted)
{
	if (!bInterrupted)
	{
		if (ShouldBroadcastAbilityTaskDelegates())
		{
			OnCompleted.Broadcast();
		}
	}
	else if(bAllowInterruptAfterBlendOut && GPlayMontageMeshAndWaitFireInterruptOnAnimEndInterrupt)
	{
		if (ShouldBroadcastAbilityTaskDelegates())
		{
			OnInterrupted.Broadcast();
		}
	}

	EndTask();
}

UGSMPlayMontageMeshAndWait* UGSMPlayMontageMeshAndWait::CreatePlayMontageAndWaitProxy(UGameplayAbility* OwningAbility,
	FName TaskInstanceName, UAnimMontage *MontageToPlay, USkeletalMeshComponent* SkeletalMeshComponent, float Rate, FName StartSection, bool bStopWhenAbilityEnds, float AnimRootMotionTranslationScale, float StartTimeSeconds, bool bAllowInterruptAfterBlendOut)
{

	UAbilitySystemGlobals::NonShipping_ApplyGlobalAbilityScaler_Rate(Rate);

	UGSMPlayMontageMeshAndWait* MyObj = NewAbilityTask<UGSMPlayMontageMeshAndWait>(OwningAbility, TaskInstanceName);
	MyObj->MontageToPlay = MontageToPlay;
	MyObj->SkeletalMeshComponent = SkeletalMeshComponent;
	MyObj->Rate = Rate;
	MyObj->StartSection = StartSection;
	MyObj->AnimRootMotionTranslationScale = AnimRootMotionTranslationScale;
	MyObj->bStopWhenAbilityEnds = bStopWhenAbilityEnds;
	MyObj->bAllowInterruptAfterBlendOut = bAllowInterruptAfterBlendOut;
	MyObj->StartTimeSeconds = StartTimeSeconds;
	
	return MyObj;
}

void UGSMPlayMontageMeshAndWait::Activate()
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

					InterruptedHandle = Ability->OnGameplayAbilityCancelled.AddUObject(this, &UGSMPlayMontageMeshAndWait::OnGameplayAbilityCancelled);

					BlendedInDelegate.BindUObject(this, &UGSMPlayMontageMeshAndWait::OnMontageBlendedIn);
					AnimInstance->Montage_SetBlendedInDelegate(BlendedInDelegate, MontageToPlay);

					BlendingOutDelegate.BindUObject(this, &UGSMPlayMontageMeshAndWait::OnMontageBlendingOut);
					AnimInstance->Montage_SetBlendingOutDelegate(BlendingOutDelegate, MontageToPlay);

					MontageEndedDelegate.BindUObject(this, &UGSMPlayMontageMeshAndWait::OnMontageEnded);
					AnimInstance->Montage_SetEndDelegate(MontageEndedDelegate, MontageToPlay);

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
				ABILITY_LOG(Warning, TEXT("UAbilityTask_PlayMontageAndWait call to PlayMontage failed!"));
			}
		}
	}
	else
	{
		ABILITY_LOG(Warning, TEXT("UAbilityTask_PlayMontageAndWait called on invalid AbilitySystemComponent"));
	}

	if (!bPlayedMontage)
	{
		ABILITY_LOG(Warning, TEXT("UAbilityTask_PlayMontageAndWait called in Ability %s failed to play montage %s; Task Instance Name %s."), *Ability->GetName(), *GetNameSafe(MontageToPlay),*InstanceName.ToString());
		if (ShouldBroadcastAbilityTaskDelegates())
		{
			OnCancelled.Broadcast();
		}
	}

	SetWaitingOnAvatar();
}

void UGSMPlayMontageMeshAndWait::ExternalCancel()
{
	if (ShouldBroadcastAbilityTaskDelegates())
	{
		OnCancelled.Broadcast();
	}
	Super::ExternalCancel();
}

void UGSMPlayMontageMeshAndWait::OnDestroy(bool AbilityEnded)
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
	Super::OnDestroy(AbilityEnded);

}

bool UGSMPlayMontageMeshAndWait::StopPlayingMontage()
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

FString UGSMPlayMontageMeshAndWait::GetDebugString() const
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

	return FString::Printf(TEXT("PlayMontageAndWait. MontageToPlay: %s  (Currently Playing): %s"), *GetNameSafe(MontageToPlay), *GetNameSafe(PlayingMontage));
}





