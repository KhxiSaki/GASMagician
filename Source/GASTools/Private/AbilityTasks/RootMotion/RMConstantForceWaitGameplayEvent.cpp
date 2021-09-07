// Copyright (c) CreationArtStudios 2021 Inc. All Rights Reserved.


#include "AbilityTasks/RootMotion/RMConstantForceWaitGameplayEvent.h"
#include "GameFramework/RootMotionSource.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "AbilitySystemComponent.h"
#include "AbilitySystemGlobals.h"
#include "Net/UnrealNetwork.h"

URMConstantForceWaitGameplayEvent::URMConstantForceWaitGameplayEvent(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	StrengthOverTime = nullptr;
}

URMConstantForceWaitGameplayEvent* URMConstantForceWaitGameplayEvent::ApplyRootMotionConstantForceAndWaitGameplayEvent
(
	UGameplayAbility* OwningAbility,
	FName TaskInstanceName,
	FVector WorldDirection,
	float Strength,
	float Duration,
	bool bIsAdditive,
	UCurveFloat* StrengthOverTime,
	ERootMotionFinishVelocityMode VelocityOnFinishMode,
	FVector SetVelocityOnFinish,
	float ClampVelocityOnFinish,
	bool bEnableGravity,
	FGameplayTag Tag, 
	AActor* OptionalExternalTarget, 
	bool OnlyTriggerOnce, 
	bool OnlyMatchExact
)
{
	UAbilitySystemGlobals::NonShipping_ApplyGlobalAbilityScaler_Duration(Duration);

	URMConstantForceWaitGameplayEvent* MyTask = NewAbilityTask<URMConstantForceWaitGameplayEvent>(OwningAbility, TaskInstanceName);

	MyTask->ForceName = TaskInstanceName;
	MyTask->WorldDirection = WorldDirection.GetSafeNormal();
	MyTask->Strength = Strength;
	MyTask->Duration = Duration;
	MyTask->bIsAdditive = bIsAdditive;
	MyTask->StrengthOverTime = StrengthOverTime;
	MyTask->FinishVelocityMode = VelocityOnFinishMode;
	MyTask->FinishSetVelocity = SetVelocityOnFinish;
	MyTask->FinishClampVelocity = ClampVelocityOnFinish;
	MyTask->bEnableGravity = bEnableGravity;
	MyTask->SharedInitAndApply();
	MyTask->Tag = Tag;
	MyTask->SetExternalTarget(OptionalExternalTarget);
	MyTask->OnlyTriggerOnce = OnlyTriggerOnce;
	MyTask->OnlyMatchExact = OnlyMatchExact;

	return MyTask;
}

void URMConstantForceWaitGameplayEvent::Activate()
{
	UAbilitySystemComponent* ASC = GetTargetASC();
	if (ASC)
	{
		if (OnlyMatchExact)
		{
			MyHandle = ASC->GenericGameplayEventCallbacks.FindOrAdd(Tag).AddUObject(this, &URMConstantForceWaitGameplayEvent::GameplayEventCallback);
		}
		else
		{
			MyHandle = ASC->AddGameplayEventTagContainerDelegate(FGameplayTagContainer(Tag), FGameplayEventTagMulticastDelegate::FDelegate::CreateUObject(this, &URMConstantForceWaitGameplayEvent::GameplayEventContainerCallback));
		}
	}

	Super::Activate();
}

void URMConstantForceWaitGameplayEvent::GameplayEventCallback(const FGameplayEventData* Payload)
{
	GameplayEventContainerCallback(Tag, Payload);
}

void URMConstantForceWaitGameplayEvent::GameplayEventContainerCallback(FGameplayTag MatchingTag, const FGameplayEventData* Payload)
{
	if (ShouldBroadcastAbilityTaskDelegates())
	{
		FGameplayEventData TempPayload = *Payload;
		TempPayload.EventTag = MatchingTag;
		EventReceived.Broadcast(MoveTemp(TempPayload));
	}
	if (OnlyTriggerOnce)
	{
		EndTask();
	}
}

void URMConstantForceWaitGameplayEvent::SetExternalTarget(AActor* Actor)
{
	if (Actor)
	{
		UseExternalTarget = true;
		OptionalExternalTarget = UAbilitySystemGlobals::GetAbilitySystemComponentFromActor(Actor);
	}
}

UAbilitySystemComponent* URMConstantForceWaitGameplayEvent::GetTargetASC()
{
	if (UseExternalTarget)
	{
		return OptionalExternalTarget;
	}

	return AbilitySystemComponent;
}

void URMConstantForceWaitGameplayEvent::SharedInitAndApply()
{
	if (AbilitySystemComponent->AbilityActorInfo->MovementComponent.IsValid())
	{
		MovementComponent = Cast<UCharacterMovementComponent>(AbilitySystemComponent->AbilityActorInfo->MovementComponent.Get());
		StartTime = GetWorld()->GetTimeSeconds();
		EndTime = StartTime + Duration;

		if (MovementComponent)
		{
			ForceName = ForceName.IsNone() ? FName("AbilityTaskApplyRootMotionConstantForce") : ForceName;
			TSharedPtr<FRootMotionSource_ConstantForce> ConstantForce = MakeShared<FRootMotionSource_ConstantForce>();
			ConstantForce->InstanceName = ForceName;
			ConstantForce->AccumulateMode = bIsAdditive ? ERootMotionAccumulateMode::Additive : ERootMotionAccumulateMode::Override;
			ConstantForce->Priority = 5;
			ConstantForce->Force = WorldDirection * Strength;
			ConstantForce->Duration = Duration;
			ConstantForce->StrengthOverTime = StrengthOverTime;
			ConstantForce->FinishVelocityParams.Mode = FinishVelocityMode;
			ConstantForce->FinishVelocityParams.SetVelocity = FinishSetVelocity;
			ConstantForce->FinishVelocityParams.ClampVelocity = FinishClampVelocity;
			if (bEnableGravity)
			{
				ConstantForce->Settings.SetFlag(ERootMotionSourceSettingsFlags::IgnoreZAccumulate);
			}
			RootMotionSourceID = MovementComponent->ApplyRootMotionSource(ConstantForce);

			if (Ability)
			{
				Ability->SetMovementSyncPoint(ForceName);
			}
		}
	}
	else
	{
		ABILITY_LOG(Warning, TEXT("URMConstantForceWaitGameplayEvent called in Ability %s with null MovementComponent; Task Instance Name %s."),
			Ability ? *Ability->GetName() : TEXT("NULL"),
			*InstanceName.ToString());
	}
}

void URMConstantForceWaitGameplayEvent::TickTask(float DeltaTime)
{
	if (bIsFinished)
	{
		return;
	}

	Super::TickTask(DeltaTime);

	AActor* MyActor = GetAvatarActor();
	if (MyActor)
	{
		const bool bTimedOut = HasTimedOut();
		const bool bIsInfiniteDuration = Duration < 0.f;

		if (!bIsInfiniteDuration && bTimedOut)
		{
			// Task has finished
			bIsFinished = true;
			if (!bIsSimulating)
			{
				MyActor->ForceNetUpdate();
				if (ShouldBroadcastAbilityTaskDelegates())
				{
					OnFinish.Broadcast(FGameplayEventData());
				}
				EndTask();
			}
		}
	}
	else
	{
		bIsFinished = true;
		EndTask();
	}
}

void URMConstantForceWaitGameplayEvent::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(URMConstantForceWaitGameplayEvent, WorldDirection);
	DOREPLIFETIME(URMConstantForceWaitGameplayEvent, Strength);
	DOREPLIFETIME(URMConstantForceWaitGameplayEvent, Duration);
	DOREPLIFETIME(URMConstantForceWaitGameplayEvent, bIsAdditive);
	DOREPLIFETIME(URMConstantForceWaitGameplayEvent, StrengthOverTime);
	DOREPLIFETIME(URMConstantForceWaitGameplayEvent, bEnableGravity);
}

void URMConstantForceWaitGameplayEvent::PreDestroyFromReplication()
{
	bIsFinished = true;
	EndTask();
}

void URMConstantForceWaitGameplayEvent::OnDestroy(bool AbilityIsEnding)
{
	UAbilitySystemComponent* ASC = GetTargetASC();
	if (ASC && MyHandle.IsValid())
	{
		if (OnlyMatchExact)
		{
			ASC->GenericGameplayEventCallbacks.FindOrAdd(Tag).Remove(MyHandle);
		}
		else
		{
			ASC->RemoveGameplayEventTagContainerDelegate(FGameplayTagContainer(Tag), MyHandle);
		}

	}

	if (MovementComponent)
	{
		TSharedPtr<FRootMotionSource> RootMotionSource = MovementComponent->GetRootMotionSourceByID(RootMotionSourceID);
		TSharedPtr<FRootMotionSource_ConstantForce> ConstantForce = StaticCastSharedPtr<FRootMotionSource_ConstantForce>(RootMotionSource);
		if (ConstantForce.IsValid())
		{
			ConstantForce->StrengthOverTime = nullptr; // Manually clear to fix race condition with GC & root motion removal.
		}

		MovementComponent->RemoveRootMotionSourceByID(RootMotionSourceID);
	}

	Super::OnDestroy(AbilityIsEnding);
}
