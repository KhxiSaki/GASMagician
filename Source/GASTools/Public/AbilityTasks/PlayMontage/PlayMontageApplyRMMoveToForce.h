// Copyright (c) CreationArtStudios 2021 Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "Abilities/Tasks/AbilityTask.h"
#include "Animation/AnimInstance.h"
#include "Abilities/Tasks/AbilityTask_ApplyRootMotion_Base.h"
#include "PlayMontageApplyRMMoveToForce.generated.h"

class UCharacterMovementComponent;
class UCurveVector;
class UGameplayTasksComponent;
enum class ERootMotionFinishVelocityMode : uint8;

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FPlayMontageApplyRootMotionMoveToForceDelegate);

class AActor;

/**
 *	Applies force to character's movement
 */
UCLASS()
class GASTOOLS_API UPlayMontageApplyRMMoveToForce : public UAbilityTask_ApplyRootMotion_Base
{
	GENERATED_UCLASS_BODY()

		UPROPERTY(BlueprintAssignable)
		FPlayMontageApplyRootMotionMoveToForceDelegate	OnCompleted;

	UPROPERTY(BlueprintAssignable)
		FPlayMontageApplyRootMotionMoveToForceDelegate	OnBlendOut;

	UPROPERTY(BlueprintAssignable)
		FPlayMontageApplyRootMotionMoveToForceDelegate	OnInterrupted;

	UPROPERTY(BlueprintAssignable)
		FPlayMontageApplyRootMotionMoveToForceDelegate	OnCancelled;

		UPROPERTY(BlueprintAssignable)
			FPlayMontageApplyRootMotionMoveToForceDelegate OnTimedOut;

	UPROPERTY(BlueprintAssignable)
		FPlayMontageApplyRootMotionMoveToForceDelegate OnTimedOutAndDestinationReached;

	UFUNCTION()
		void OnMontageBlendingOut(UAnimMontage* Montage, bool bInterrupted);

	UFUNCTION()
		void OnMontageInterrupted();

	UFUNCTION()
		void OnMontageEnded(UAnimMontage* Montage, bool bInterrupted);

	/** Apply force to character's movement */
	UFUNCTION(BlueprintCallable, Category = "Ability|Tasks", meta = (HidePin = "OwningAbility", DefaultToSelf = "OwningAbility", BlueprintInternalUseOnly = "TRUE"))
		static UPlayMontageApplyRMMoveToForce* PlayMontageApplyRootMotionMoveToForce(UGameplayAbility* OwningAbility, FName TaskInstanceName, FVector TargetLocation, float Duration, bool bSetNewMovementMode, EMovementMode MovementMode, bool bRestrictSpeedToExpected, UCurveVector* PathOffsetCurve, ERootMotionFinishVelocityMode VelocityOnFinishMode, FVector SetVelocityOnFinish, float ClampVelocityOnFinish, UAnimMontage* MontageToPlay, float Rate = 1.f, FName StartSection = NAME_None, bool bStopWhenAbilityEnds = true, float AnimRootMotionTranslationScale = 1.f, float StartTimeSeconds = 0.f);

	/** Tick function for this task, if bTickingTask == true */
	virtual void TickTask(float DeltaTime) override;
	virtual void Activate() override;

	/** Called when the ability is asked to cancel from an outside node. What this means depends on the individual task. By default, this does nothing other than ending the task. */
	virtual void ExternalCancel() override;

	virtual FString GetDebugString() const override;
	virtual void PreDestroyFromReplication() override;
	virtual void OnDestroy(bool AbilityIsEnding) override;

protected:

	virtual void SharedInitAndApply() override;

protected:
	/** Checks if the ability is playing a montage and stops that montage, returns true if a montage was stopped, false if not. */
	bool StopPlayingMontage();

	FOnMontageBlendingOutStarted BlendingOutDelegate;
	FOnMontageEnded MontageEndedDelegate;
	FDelegateHandle InterruptedHandle;

	UPROPERTY()
		UAnimMontage* MontageToPlay;

	UPROPERTY()
		float Rate;

	UPROPERTY()
		FName StartSection;

	UPROPERTY()
		float AnimRootMotionTranslationScale;

	UPROPERTY()
		float StartTimeSeconds;

	UPROPERTY()
		bool bStopWhenAbilityEnds;
	UPROPERTY(Replicated)
		FVector StartLocation;

	UPROPERTY(Replicated)
		FVector TargetLocation;

	UPROPERTY(Replicated)
		float Duration;

	UPROPERTY(Replicated)
		bool bSetNewMovementMode;

	UPROPERTY(Replicated)
		TEnumAsByte<EMovementMode> NewMovementMode;

	/** If enabled, we limit velocity to the initial expected velocity to go distance to the target over Duration.
	 *  This prevents cases of getting really high velocity the last few frames of the root motion if you were being blocked by
	 *  collision. Disabled means we do everything we can to velocity during the move to get to the TargetLocation. */
	UPROPERTY(Replicated)
		bool bRestrictSpeedToExpected;

	UPROPERTY(Replicated)
		UCurveVector* PathOffsetCurve;

	EMovementMode PreviousMovementMode;
	
};
