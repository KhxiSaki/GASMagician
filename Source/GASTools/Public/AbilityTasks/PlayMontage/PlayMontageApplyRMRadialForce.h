// Copyright (c) CreationArtStudios 2021 Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "Abilities/Tasks/AbilityTask.h"
#include "Abilities/Tasks/AbilityTask_ApplyRootMotion_Base.h"
#include "PlayMontageApplyRMRadialForce.generated.h"

class UCharacterMovementComponent;
class UCurveFloat;
class UGameplayTasksComponent;
enum class ERootMotionFinishVelocityMode : uint8;

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FPlayMontageApplyRootMotionRadialForceDelegate);

class AActor;

/**
 *	Applies force to character's movement
 */
UCLASS()
class GASTOOLS_API UPlayMontageApplyRMRadialForce : public UAbilityTask_ApplyRootMotion_Base
{
	GENERATED_UCLASS_BODY()

		UPROPERTY(BlueprintAssignable)
		FPlayMontageApplyRootMotionRadialForceDelegate	OnCompleted;

	UPROPERTY(BlueprintAssignable)
		FPlayMontageApplyRootMotionRadialForceDelegate	OnBlendOut;

	UPROPERTY(BlueprintAssignable)
		FPlayMontageApplyRootMotionRadialForceDelegate	OnInterrupted;

	UPROPERTY(BlueprintAssignable)
		FPlayMontageApplyRootMotionRadialForceDelegate	OnCancelled;

		UPROPERTY(BlueprintAssignable)
			FPlayMontageApplyRootMotionRadialForceDelegate OnFinish;

		UFUNCTION()
			void OnMontageBlendingOut(UAnimMontage* Montage, bool bInterrupted);

		UFUNCTION()
			void OnMontageInterrupted();

		UFUNCTION()
			void OnMontageEnded(UAnimMontage* Montage, bool bInterrupted);

	/** Apply force to character's movement */
	UFUNCTION(BlueprintCallable, Category = "Ability|Tasks", meta = (HidePin = "OwningAbility", DefaultToSelf = "OwningAbility", BlueprintInternalUseOnly = "TRUE"))
		static UPlayMontageApplyRMRadialForce* PlayMontageApplyRootMotionRadialForce(UGameplayAbility* OwningAbility, FName TaskInstanceName, FVector Location, AActor* LocationActor, float Strength, float Duration, float Radius, bool bIsPush, bool bIsAdditive, bool bNoZForce, UCurveFloat* StrengthDistanceFalloff, UCurveFloat* StrengthOverTime, bool bUseFixedWorldDirection, FRotator FixedWorldDirection, ERootMotionFinishVelocityMode VelocityOnFinishMode, FVector SetVelocityOnFinish, float ClampVelocityOnFinish, UAnimMontage* MontageToPlay, float Rate = 1.f, FName StartSection = NAME_None, bool bStopWhenAbilityEnds = true, float AnimRootMotionTranslationScale = 1.f, float StartTimeSeconds = 0.f);

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
		FVector Location;

	UPROPERTY(Replicated)
		AActor* LocationActor;

	UPROPERTY(Replicated)
		float Strength;

	UPROPERTY(Replicated)
		float Duration;

	UPROPERTY(Replicated)
		float Radius;

	UPROPERTY(Replicated)
		bool bIsPush;

	UPROPERTY(Replicated)
		bool bIsAdditive;

	UPROPERTY(Replicated)
		bool bNoZForce;

	/**
	 *  Strength of the force over distance to Location
	 *  Curve Y is 0 to 1 which is percent of full Strength parameter to apply
	 *  Curve X is 0 to 1 normalized distance (0 = 0cm, 1 = what Strength % at Radius units out)
	 */
	UPROPERTY(Replicated)
		UCurveFloat* StrengthDistanceFalloff;

	/**
	 *  Strength of the force over time
	 *  Curve Y is 0 to 1 which is percent of full Strength parameter to apply
	 *  Curve X is 0 to 1 normalized time if this force has a limited duration (Duration > 0), or
	 *          is in units of seconds if this force has unlimited duration (Duration < 0)
	 */
	UPROPERTY(Replicated)
		UCurveFloat* StrengthOverTime;

	UPROPERTY(Replicated)
		bool bUseFixedWorldDirection;

	UPROPERTY(Replicated)
		FRotator FixedWorldDirection;
	
};
