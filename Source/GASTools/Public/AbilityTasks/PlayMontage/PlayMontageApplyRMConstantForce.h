// Copyright (c) CreationArtStudios 2021 Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/Tasks/AbilityTask.h"
#include "UObject/ObjectMacros.h"
#include "Animation/AnimInstance.h"
#include "Abilities/Tasks/AbilityTask_ApplyRootMotion_Base.h"
#include "PlayMontageApplyRMConstantForce.generated.h"


class UCharacterMovementComponent;
class UCurveFloat;
class UGameplayTasksComponent;

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FPlayMontageApplyRootMotionConstantForceDelegate);

class AActor;

/**
 *	Applies force to character's movement
 */
UCLASS()
class GASTOOLS_API UPlayMontageApplyRMConstantForce : public UAbilityTask_ApplyRootMotion_Base
{
	GENERATED_UCLASS_BODY()

		UPROPERTY(BlueprintAssignable)
		FPlayMontageApplyRootMotionConstantForceDelegate	OnCompleted;

	UPROPERTY(BlueprintAssignable)
		FPlayMontageApplyRootMotionConstantForceDelegate	OnBlendOut;

	UPROPERTY(BlueprintAssignable)
		FPlayMontageApplyRootMotionConstantForceDelegate	OnInterrupted;

	UPROPERTY(BlueprintAssignable)
		FPlayMontageApplyRootMotionConstantForceDelegate	OnCancelled;

		UPROPERTY(BlueprintAssignable)
			FPlayMontageApplyRootMotionConstantForceDelegate OnFinish;

		UFUNCTION()
			void OnMontageBlendingOut(UAnimMontage* Montage, bool bInterrupted);

		UFUNCTION()
			void OnMontageInterrupted();

		UFUNCTION()
			void OnMontageEnded(UAnimMontage* Montage, bool bInterrupted);

	/** Apply force to character's movement */
	UFUNCTION(BlueprintCallable, Category = "Ability|Tasks", meta = (HidePin = "OwningAbility", DefaultToSelf = "OwningAbility", BlueprintInternalUseOnly = "TRUE"))
		static UPlayMontageApplyRMConstantForce* PlayMontageApplyRootMotionConstantForce
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
			bool bEnableGravity, UAnimMontage* MontageToPlay, float Rate = 1.f, FName StartSection = NAME_None, bool bStopWhenAbilityEnds = true, float AnimRootMotionTranslationScale = 1.f, float StartTimeSeconds = 0.f
		);

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
		FVector WorldDirection;

	UPROPERTY(Replicated)
		float Strength;

	UPROPERTY(Replicated)
		float Duration;

	UPROPERTY(Replicated)
		bool bIsAdditive;

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
