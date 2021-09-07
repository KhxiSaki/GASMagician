// Copyright (c) CreationArtStudios 2021 Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "Abilities/Tasks/AbilityTask.h"
#include "GameplayTagContainer.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "Abilities/Tasks/AbilityTask_ApplyRootMotion_Base.h"
#include "RMJumpForceWaitGameplayEvent.generated.h"

class UCharacterMovementComponent;
class UCurveFloat;
class UCurveVector;
class UGameplayTasksComponent;
class UAbilitySystemComponent;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FApplyRootMotionJumpForceAndWaitGameplayEventDelegate, FGameplayEventData, Payload);

class AActor;

/**
 *	Applies force to character's movement
 */
UCLASS()
class GASTOOLS_API URMJumpForceWaitGameplayEvent : public UAbilityTask_ApplyRootMotion_Base
{
	GENERATED_UCLASS_BODY()


		UPROPERTY(BlueprintAssignable)
		FApplyRootMotionJumpForceAndWaitGameplayEventDelegate OnFinish;

	UPROPERTY(BlueprintAssignable)
		FApplyRootMotionJumpForceAndWaitGameplayEventDelegate OnLanded;

	UPROPERTY(BlueprintAssignable)
		FApplyRootMotionJumpForceAndWaitGameplayEventDelegate	EventReceived;

	UFUNCTION(BlueprintCallable, Category = "Ability|Tasks")
		void Finish();

	UFUNCTION()
		void OnLandedCallback(const FHitResult& Hit);

	/** Apply force to character's movement */
	UFUNCTION(BlueprintCallable, Category = "Ability|Tasks", meta = (HidePin = "OwningAbility", DefaultToSelf = "OwningAbility", BlueprintInternalUseOnly = "TRUE"))
		static URMJumpForceWaitGameplayEvent* ApplyRootMotionJumpForceAndWaitGameplayEvent(UGameplayAbility* OwningAbility, FName TaskInstanceName, FRotator Rotation, float Distance, float Height, float Duration, float MinimumLandedTriggerTime,
			bool bFinishOnLanded, ERootMotionFinishVelocityMode VelocityOnFinishMode, FVector SetVelocityOnFinish, float ClampVelocityOnFinish, UCurveVector* PathOffsetCurve, UCurveFloat* TimeMappingCurve, FGameplayTag EventTag, AActor* OptionalExternalTarget = nullptr, bool OnlyTriggerOnce = false, bool OnlyMatchExact = true);

	void SetExternalTarget(AActor* Actor);

	UAbilitySystemComponent* GetTargetASC();

	virtual void Activate() override;

	virtual void GameplayEventCallback(const FGameplayEventData* Payload);
	virtual void GameplayEventContainerCallback(FGameplayTag MatchingTag, const FGameplayEventData* Payload);


	/** Tick function for this task, if bTickingTask == true */
	virtual void TickTask(float DeltaTime) override;

	virtual void PreDestroyFromReplication() override;
	virtual void OnDestroy(bool AbilityIsEnding) override;

protected:

	virtual void SharedInitAndApply() override;

	/**
	* Work-around for OnLanded being called during bClientUpdating in movement replay code
	* Don't want to trigger our Landed logic during a replay, so we wait until next frame
	* If we don't, we end up removing root motion from a replay root motion set instead
	* of the real one
	*/
	void TriggerLanded();

protected:

	UPROPERTY(Replicated)
		FRotator Rotation;

	UPROPERTY(Replicated)
		float Distance;

	UPROPERTY(Replicated)
		float Height;

	UPROPERTY(Replicated)
		float Duration;

	UPROPERTY(Replicated)
		float MinimumLandedTriggerTime;

	UPROPERTY(Replicated)
		bool bFinishOnLanded;

	UPROPERTY(Replicated)
		UCurveVector* PathOffsetCurve;

	FGameplayTag Tag;

	UPROPERTY()
		UAbilitySystemComponent* OptionalExternalTarget;

	bool UseExternalTarget;
	bool OnlyTriggerOnce;
	bool OnlyMatchExact;

	FDelegateHandle MyHandle;
	/**
	 *  Maps real time to movement fraction curve to affect the speed of the
	 *  movement through the path
	 *  Curve X is 0 to 1 normalized real time (a fraction of the duration)
	 *  Curve Y is 0 to 1 is what percent of the move should be at a given X
	 *  Default if unset is a 1:1 correspondence
	 */
	UPROPERTY(Replicated)
		UCurveFloat* TimeMappingCurve;

	bool bHasLanded;
	
};
