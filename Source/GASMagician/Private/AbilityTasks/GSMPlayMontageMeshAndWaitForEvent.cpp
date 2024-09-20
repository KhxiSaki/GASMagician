// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilityTasks/GSMPlayMontageMeshAndWaitForEvent.h"
#include "Animation/AnimMontage.h"
#include "GameFramework/Character.h"
#include "AbilitySystemComponent.h"
#include "AbilitySystemLog.h"
#include "AbilitySystemGlobals.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(GSMPlayMontageMeshAndWaitForEvent)

static bool GUseAggressivePlayMontageMeshAndWaitForEventEndTask = true;
static FAutoConsoleVariableRef CVarAggressivePlayMontageMeshAndWaitForEventEndTask(TEXT("GASMagician.PlayMontageMeshAndWaitForEvent.AggressiveEndTask"), GUseAggressivePlayMontageMeshAndWaitForEventEndTask, TEXT("This should be set to true in order to avoid multiple callbacks off an AbilityTask_PlayMontageAndWait node"));

static bool GPlayMontageMeshAndWaitForEventFireInterruptOnAnimEndInterrupt = true;
static FAutoConsoleVariableRef CVarPlayMontageMeshAndWaitForEventFireInterruptOnAnimEndInterrupt(TEXT("GASMagician.PlayMontageMeshAndWaitForEvent.FireInterruptOnAnimEndInterrupt"), GPlayMontageMeshAndWaitForEventFireInterruptOnAnimEndInterrupt, TEXT("This is a fix that will cause AbilityTask_PlayMontageAndWait to fire its Interrupt event if the underlying AnimInstance ends in an interrupted"));

UGSMPlayMontageMeshAndWaitForEvent::UGSMPlayMontageMeshAndWaitForEvent(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

void UGSMPlayMontageMeshAndWaitForEvent::OnMontageBlendingOut(UAnimMontage* Montage, bool bInterrupted)
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
			OnInterrupted.Broadcast(FGameplayTag::EmptyTag, FGameplayEventData());

			if (GUseAggressivePlayMontageMeshAndWaitForEventEndTask)
			{
				EndTask();
			}
		}
		else
		{
			OnBlendOut.Broadcast(FGameplayTag::EmptyTag, FGameplayEventData());
		}
	}
}

void UGSMPlayMontageMeshAndWaitForEvent::OnMontageBlendedIn(UAnimMontage* Montage)
{
	if (ShouldBroadcastAbilityTaskDelegates())
	{
		OnBlendedIn.Broadcast(FGameplayTag::EmptyTag, FGameplayEventData());
	}
}

void UGSMPlayMontageMeshAndWaitForEvent::OnMontageInterrupted()
{
	// Call the new function
	OnGameplayAbilityCancelled();
}

void UGSMPlayMontageMeshAndWaitForEvent::OnGameplayAbilityCancelled()
{
	if (StopPlayingMontage() || bAllowInterruptAfterBlendOut)
	{
		// Let the BP handle the interrupt as well
		if (ShouldBroadcastAbilityTaskDelegates())
		{
			bAllowInterruptAfterBlendOut = false;
			OnInterrupted.Broadcast(FGameplayTag::EmptyTag, FGameplayEventData());
		}
	}

	if (GUseAggressivePlayMontageMeshAndWaitForEventEndTask)
	{
		EndTask();
	}
}

void UGSMPlayMontageMeshAndWaitForEvent::OnMontageEnded(UAnimMontage* Montage, bool bInterrupted)
{
	if (!bInterrupted)
	{
		if (ShouldBroadcastAbilityTaskDelegates())
		{
			OnCompleted.Broadcast(FGameplayTag::EmptyTag, FGameplayEventData());
		}
	}
	else if(bAllowInterruptAfterBlendOut && GPlayMontageMeshAndWaitForEventFireInterruptOnAnimEndInterrupt)
	{
		if (ShouldBroadcastAbilityTaskDelegates())
		{
			OnInterrupted.Broadcast(FGameplayTag::EmptyTag, FGameplayEventData());
		}
	}

	EndTask();
}

void UGSMPlayMontageMeshAndWaitForEvent::OnGameplayEvent(FGameplayTag EventTag, const FGameplayEventData* Payload)
{
	if (ShouldBroadcastAbilityTaskDelegates())
	{
		FGameplayEventData TempData = *Payload;
		TempData.EventTag = EventTag;

		EventReceived.Broadcast(EventTag, TempData);
	}
}

UGSMPlayMontageMeshAndWaitForEvent* UGSMPlayMontageMeshAndWaitForEvent::CreatePlayMontageAndWaitProxy(UGameplayAbility* OwningAbility,
	FName TaskInstanceName, UAnimMontage *MontageToPlay, USkeletalMeshComponent* SkeletalMeshComponent, FGameplayTagContainer EventTags, float Rate, FName StartSection, bool bStopWhenAbilityEnds, float AnimRootMotionTranslationScale, float StartTimeSeconds, bool bAllowInterruptAfterBlendOut)
{

	UAbilitySystemGlobals::NonShipping_ApplyGlobalAbilityScaler_Rate(Rate);

	UGSMPlayMontageMeshAndWaitForEvent* MyObj = NewAbilityTask<UGSMPlayMontageMeshAndWaitForEvent>(OwningAbility, TaskInstanceName);
	MyObj->MontageToPlay = MontageToPlay;
	MyObj->SkeletalMeshComponent = SkeletalMeshComponent;
	MyObj->EventTags = EventTags;
	MyObj->Rate = Rate;
	MyObj->StartSection = StartSection;
	MyObj->AnimRootMotionTranslationScale = AnimRootMotionTranslationScale;
	MyObj->bStopWhenAbilityEnds = bStopWhenAbilityEnds;
	MyObj->bAllowInterruptAfterBlendOut = bAllowInterruptAfterBlendOut;
	MyObj->StartTimeSeconds = StartTimeSeconds;
	
	return MyObj;
}

void UGSMPlayMontageMeshAndWaitForEvent::Activate()
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

					// Bind to event callback
					EventHandle = ASC->AddGameplayEventTagContainerDelegate(EventTags, FGameplayEventTagMulticastDelegate::FDelegate::CreateUObject(this, &UGSMPlayMontageMeshAndWaitForEvent::OnGameplayEvent));

					InterruptedHandle = Ability->OnGameplayAbilityCancelled.AddUObject(this, &UGSMPlayMontageMeshAndWaitForEvent::OnGameplayAbilityCancelled);

					BlendedInDelegate.BindUObject(this, &UGSMPlayMontageMeshAndWaitForEvent::OnMontageBlendedIn);
					AnimInstance->Montage_SetBlendedInDelegate(BlendedInDelegate, MontageToPlay);

					BlendingOutDelegate.BindUObject(this, &UGSMPlayMontageMeshAndWaitForEvent::OnMontageBlendingOut);
					AnimInstance->Montage_SetBlendingOutDelegate(BlendingOutDelegate, MontageToPlay);

					MontageEndedDelegate.BindUObject(this, &UGSMPlayMontageMeshAndWaitForEvent::OnMontageEnded);
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
				ABILITY_LOG(Warning, TEXT("UGSMPlayMontageMeshAndWaitForEvent call to PlayMontage failed!"));
			}
		}
	}
	else
	{
		ABILITY_LOG(Warning, TEXT("UGSMPlayMontageMeshAndWaitForEvent called on invalid AbilitySystemComponent"));
	}

	if (!bPlayedMontage)
	{
		ABILITY_LOG(Warning, TEXT("UGSMPlayMontageMeshAndWaitForEvent called in Ability %s failed to play montage %s; Task Instance Name %s."), *Ability->GetName(), *GetNameSafe(MontageToPlay),*InstanceName.ToString());
		if (ShouldBroadcastAbilityTaskDelegates())
		{
			OnCancelled.Broadcast(FGameplayTag::EmptyTag, FGameplayEventData());
		}
	}

	SetWaitingOnAvatar();
}

void UGSMPlayMontageMeshAndWaitForEvent::ExternalCancel()
{
	if (ShouldBroadcastAbilityTaskDelegates())
	{
		OnCancelled.Broadcast(FGameplayTag::EmptyTag, FGameplayEventData());
	}
	Super::ExternalCancel();
}

void UGSMPlayMontageMeshAndWaitForEvent::OnDestroy(bool AbilityEnded)
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

	if (UAbilitySystemComponent* ASC = AbilitySystemComponent.Get())
	{
		ASC->RemoveGameplayEventTagContainerDelegate(EventTags, EventHandle);
	}
	Super::OnDestroy(AbilityEnded);

}

bool UGSMPlayMontageMeshAndWaitForEvent::StopPlayingMontage()
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

FString UGSMPlayMontageMeshAndWaitForEvent::GetDebugString() const
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

	return FString::Printf(TEXT("UGSMPlayMontageMeshAndWaitForEvent. MontageToPlay: %s  (Currently Playing): %s"), *GetNameSafe(MontageToPlay), *GetNameSafe(PlayingMontage));
}





