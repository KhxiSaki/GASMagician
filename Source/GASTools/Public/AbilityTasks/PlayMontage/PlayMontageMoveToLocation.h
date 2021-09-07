// Copyright (c) CreationArtStudios 2021 Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "Animation/AnimInstance.h"
#include "Abilities/Tasks/AbilityTask.h"
#include "PlayMontageMoveToLocation.generated.h"

class UCurveFloat;
class UCurveVector;
class UGameplayTasksComponent;

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FPlayMontageMoveToLocationDelegate);

class AActor;
class UPrimitiveComponent;
class UGameplayTasksComponent;

/**
 *	TODO:
 *		-Implement replicated time so that this can work as a simulated task for Join In Progress clients.
 */


 /**
  *	Move to a location, ignoring clipping, over a given length of time. Ends when the TargetLocation is reached.
  *	This will RESET your character's current movement mode! If you wish to maintain PHYS_Flying or PHYS_Custom, you must
  *	reset it on completion.!
  */
UCLASS()
class GASTOOLS_API UPlayMontageMoveToLocation : public UAbilityTask
{
	GENERATED_UCLASS_BODY()

		UPROPERTY(BlueprintAssignable)
		FPlayMontageMoveToLocationDelegate	OnCompleted;

	UPROPERTY(BlueprintAssignable)
		FPlayMontageMoveToLocationDelegate	OnBlendOut;

	UPROPERTY(BlueprintAssignable)
		FPlayMontageMoveToLocationDelegate	OnInterrupted;

	UPROPERTY(BlueprintAssignable)
		FPlayMontageMoveToLocationDelegate	OnCancelled;

		UPROPERTY(BlueprintAssignable)
			FPlayMontageMoveToLocationDelegate		OnTargetLocationReached;

		UFUNCTION()
			void OnMontageBlendingOut(UAnimMontage* Montage, bool bInterrupted);

		UFUNCTION()
			void OnMontageInterrupted();

		UFUNCTION()
			void OnMontageEnded(UAnimMontage* Montage, bool bInterrupted);

	virtual void InitSimulatedTask(UGameplayTasksComponent& InGameplayTasksComponent) override;

	/** Move to the specified location, using the vector curve (range 0 - 1) if specified, otherwise the float curve (range 0 - 1) or fallback to linear interpolation */
	UFUNCTION(BlueprintCallable, Category = "Ability|Tasks", meta = (HidePin = "OwningAbility", DefaultToSelf = "OwningAbility", BlueprintInternalUseOnly = "TRUE"))
		static UPlayMontageMoveToLocation* PlayMontageMoveToLocation(UGameplayAbility* OwningAbility, FName TaskInstanceName, FVector Location, float Duration, UCurveFloat* OptionalInterpolationCurve, UCurveVector* OptionalVectorInterpolationCurve, UAnimMontage* MontageToPlay, float Rate = 1.f, FName StartSection = NAME_None, bool bStopWhenAbilityEnds = true, float AnimRootMotionTranslationScale = 1.f, float StartTimeSeconds = 0.f);

	virtual void Activate() override;
	/**Called when the ability is asked to cancel from an outside node.What this means depends on the individual task.By default, this does nothing other than ending the task.*/
		virtual void ExternalCancel() override;

	virtual FString GetDebugString() const override;
	/** Tick function for this task, if bTickingTask == true */
	virtual void TickTask(float DeltaTime) override;

	virtual void OnDestroy(bool AbilityIsEnding) override;

protected:

	bool bIsFinished;

	UPROPERTY(Replicated)
		FVector StartLocation;

	//FVector 

	UPROPERTY(Replicated)
		FVector TargetLocation;

	UPROPERTY(Replicated)
		float DurationOfMovement;


	float TimeMoveStarted;

	float TimeMoveWillEnd;

	UPROPERTY(Replicated)
		UCurveFloat* LerpCurve;

	UPROPERTY(Replicated)
		UCurveVector* LerpCurveVector;

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
};
