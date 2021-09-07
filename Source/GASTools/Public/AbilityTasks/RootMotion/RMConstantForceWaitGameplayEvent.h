// Copyright (c) CreationArtStudios 2021 Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "Abilities/Tasks/AbilityTask.h"
#include "GameplayTagContainer.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "Abilities/Tasks/AbilityTask_ApplyRootMotion_Base.h"
#include "RMConstantForceWaitGameplayEvent.generated.h"

class UCharacterMovementComponent;
class UCurveFloat;
class UGameplayTasksComponent;
class UAbilitySystemComponent;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FApplyRootMotionConstantForceAndWaitGameplayEventDelegate, FGameplayEventData, Payload);

class AActor;

/**
 *	Applies force to character's movement
 */
UCLASS()
class GASTOOLS_API URMConstantForceWaitGameplayEvent : public UAbilityTask_ApplyRootMotion_Base
{
	GENERATED_UCLASS_BODY()

		UPROPERTY(BlueprintAssignable)
		FApplyRootMotionConstantForceAndWaitGameplayEventDelegate	EventReceived;

		UPROPERTY(BlueprintAssignable)
			FApplyRootMotionConstantForceAndWaitGameplayEventDelegate OnFinish;

	/** Apply force to character's movement */
	UFUNCTION(BlueprintCallable, Category = "Ability|Tasks", meta = (HidePin = "OwningAbility", DefaultToSelf = "OwningAbility", BlueprintInternalUseOnly = "TRUE"))
		static URMConstantForceWaitGameplayEvent* ApplyRootMotionConstantForceAndWaitGameplayEvent
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
			FGameplayTag EventTag, 
			AActor* OptionalExternalTarget = nullptr, 
			bool OnlyTriggerOnce = false, 
			bool OnlyMatchExact = true
		);

	/** Tick function for this task, if bTickingTask == true */
	virtual void TickTask(float DeltaTime) override;
	void SetExternalTarget(AActor* Actor);
	virtual void Activate() override;

	virtual void GameplayEventCallback(const FGameplayEventData* Payload);
	virtual void GameplayEventContainerCallback(FGameplayTag MatchingTag, const FGameplayEventData* Payload);
	UAbilitySystemComponent* GetTargetASC();
	virtual void PreDestroyFromReplication() override;
	virtual void OnDestroy(bool AbilityIsEnding) override;

protected:

	virtual void SharedInitAndApply() override;

protected:

	UPROPERTY(Replicated)
		FVector WorldDirection;

	UPROPERTY(Replicated)
		float Strength;

	UPROPERTY(Replicated)
		float Duration;

	UPROPERTY(Replicated)
		bool bIsAdditive;
	FGameplayTag Tag;

	UPROPERTY()
		UAbilitySystemComponent* OptionalExternalTarget;

	bool UseExternalTarget;
	bool OnlyTriggerOnce;
	bool OnlyMatchExact;

	FDelegateHandle MyHandle;
	/**
	 *  Strength of the force over time
	 *  Curve Y is 0 to 1 which is percent of full Strength parameter to apply
	 *  Curve X is 0 to 1 normalized time if this force has a limited duration (Duration > 0), or
	 *          is in units of seconds if this force has unlimited duration (Duration < 0)
	 */
	UPROPERTY(Replicated)
		UCurveFloat* StrengthOverTime;

	UPROPERTY(Replicated)
		bool bEnableGravity;
	
};
