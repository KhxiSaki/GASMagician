// Copyright (c) CreationArtStudios 2021 Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "Animation/AnimInstance.h"
#include "Abilities/Tasks/AbilityTask.h"
#include "Abilities/Tasks/AbilityTask_ApplyRootMotion_Base.h"
#include "PlayMontageApplyRMJumpForce.generated.h"

class UCharacterMovementComponent;
class UCurveFloat;
class UCurveVector;
class UGameplayTasksComponent;

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FPlayMontageApplyRootMotionJumpForceDelegate);

class AActor;

/**
 *	Applies force to character's movement
 */

UCLASS()
class GASTOOLS_API UPlayMontageApplyRMJumpForce : public UAbilityTask_ApplyRootMotion_Base
{
	GENERATED_UCLASS_BODY()

		UPROPERTY(BlueprintAssignable)
		FPlayMontageApplyRootMotionJumpForceDelegate	OnCompleted;

	UPROPERTY(BlueprintAssignable)
		FPlayMontageApplyRootMotionJumpForceDelegate	OnBlendOut;

	UPROPERTY(BlueprintAssignable)
		FPlayMontageApplyRootMotionJumpForceDelegate	OnInterrupted;

	UPROPERTY(BlueprintAssignable)
		FPlayMontageApplyRootMotionJumpForceDelegate	OnCancelled;

		UPROPERTY(BlueprintAssignable)
			FPlayMontageApplyRootMotionJumpForceDelegate OnFinish;

	UPROPERTY(BlueprintAssignable)
		FPlayMontageApplyRootMotionJumpForceDelegate OnLanded;

	UFUNCTION()
		void OnMontageBlendingOut(UAnimMontage* Montage, bool bInterrupted);

	UFUNCTION()
		void OnMontageInterrupted();

	UFUNCTION()
		void OnMontageEnded(UAnimMontage* Montage, bool bInterrupted);

	UFUNCTION(BlueprintCallable, Category = "Ability|Tasks")
		void Finish();

	UFUNCTION()
		void OnLandedCallback(const FHitResult& Hit);

	/** Apply force to character's movement */
	UFUNCTION(BlueprintCallable, Category = "Ability|Tasks", meta = (HidePin = "OwningAbility", DefaultToSelf = "OwningAbility", BlueprintInternalUseOnly = "TRUE"))
		static UPlayMontageApplyRMJumpForce* PlayMontageApplyRootMotionJumpForce(UGameplayAbility* OwningAbility, FName TaskInstanceName, FRotator Rotation, float Distance, float Height, float Duration, float MinimumLandedTriggerTime,
			bool bFinishOnLanded, ERootMotionFinishVelocityMode VelocityOnFinishMode, FVector SetVelocityOnFinish, float ClampVelocityOnFinish, UCurveVector* PathOffsetCurve, UCurveFloat* TimeMappingCurve, UAnimMontage* MontageToPlay, float Rate = 1.f, FName StartSection = NAME_None, bool bStopWhenAbilityEnds = true, float AnimRootMotionTranslationScale = 1.f, float StartTimeSeconds = 0.f);

	virtual void Activate() override;

	/** Tick function for this task, if bTickingTask == true */
	virtual void TickTask(float DeltaTime) override;
	/** Called when the ability is asked to cancel from an outside node. What this means depends on the individual task. By default, this does nothing other than ending the task. */
	virtual void ExternalCancel() override;

	virtual FString GetDebugString() const override;
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
