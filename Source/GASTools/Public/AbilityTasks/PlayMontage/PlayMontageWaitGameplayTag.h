// Copyright (c) CreationArtStudios 2021 Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "GameplayTagContainer.h"
#include "Animation/AnimInstance.h"
#include "Abilities/Tasks/AbilityTask_WaitGameplayTagBase.h"
#include "PlayMontageWaitGameplayTag.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FPlayMontageWaitGameplayTagDelegate);
UCLASS()
class GASTOOLS_API UPlayMontageWaitGameplayTagAdded : public UAbilityTask_WaitGameplayTag
{
	GENERATED_UCLASS_BODY()

		UPROPERTY(BlueprintAssignable)
		FPlayMontageWaitGameplayTagDelegate	OnCompleted;

	UPROPERTY(BlueprintAssignable)
		FPlayMontageWaitGameplayTagDelegate	OnBlendOut;

	UPROPERTY(BlueprintAssignable)
		FPlayMontageWaitGameplayTagDelegate	OnInterrupted;

	UPROPERTY(BlueprintAssignable)
		FPlayMontageWaitGameplayTagDelegate	OnCancelled;

		UPROPERTY(BlueprintAssignable)
			FPlayMontageWaitGameplayTagDelegate	Added;

		UFUNCTION()
			void OnMontageBlendingOut(UAnimMontage* Montage, bool bInterrupted);

		UFUNCTION()
			void OnMontageInterrupted();

		UFUNCTION()
			void OnMontageEnded(UAnimMontage* Montage, bool bInterrupted);

	/**
	 * 	Wait until the specified gameplay tag is Added. By default this will look at the owner of this ability. OptionalExternalTarget can be set to make this look at another actor's tags for changes.
	 *  If the tag is already present when this task is started, it will immediately broadcast the Added event. It will keep listening as long as OnlyTriggerOnce = false.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ability|Tasks", meta = (HidePin = "OwningAbility", DefaultToSelf = "OwningAbility", BlueprintInternalUseOnly = "TRUE"))
		static UPlayMontageWaitGameplayTagAdded* PlayMontageWaitGameplayTagAdd(UGameplayAbility* OwningAbility, FGameplayTag Tag, FName TaskInstanceName, UAnimMontage* MontageToPlay, float Rate = 1.f, FName StartSection = NAME_None, bool bStopWhenAbilityEnds = true, float AnimRootMotionTranslationScale = 1.f, float StartTimeSeconds = 0.f, AActor* InOptionalExternalTarget = nullptr, bool OnlyTriggerOnce = false);

	virtual void Activate() override;

	virtual void GameplayTagCallback(const FGameplayTag Tag, int32 NewCount) override;
	/** Called when the ability is asked to cancel from an outside node. What this means depends on the individual task. By default, this does nothing other than ending the task. */
	virtual void ExternalCancel() override;

	virtual FString GetDebugString() const override;

private:

	virtual void OnDestroy(bool AbilityEnded) override;

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

UCLASS()
class GASTOOLS_API UPlayMontageWaitGameplayTagRemoved : public UAbilityTask_WaitGameplayTag
{
	GENERATED_UCLASS_BODY()

		UPROPERTY(BlueprintAssignable)
		FPlayMontageWaitGameplayTagDelegate	OnCompleted;

	UPROPERTY(BlueprintAssignable)
		FPlayMontageWaitGameplayTagDelegate	OnBlendOut;

	UPROPERTY(BlueprintAssignable)
		FPlayMontageWaitGameplayTagDelegate	OnInterrupted;

	UPROPERTY(BlueprintAssignable)
		FPlayMontageWaitGameplayTagDelegate	OnCancelled;

		UPROPERTY(BlueprintAssignable)
			FPlayMontageWaitGameplayTagDelegate	Removed;

		UFUNCTION()
			void OnMontageBlendingOut(UAnimMontage* Montage, bool bInterrupted);

		UFUNCTION()
			void OnMontageInterrupted();

		UFUNCTION()
			void OnMontageEnded(UAnimMontage* Montage, bool bInterrupted);

	/**
	 * 	Wait until the specified gameplay tag is Removed. By default this will look at the owner of this ability. OptionalExternalTarget can be set to make this look at another actor's tags for changes.
	 *  If the tag is not present when this task is started, it will immediately broadcast the Removed event. It will keep listening as long as OnlyTriggerOnce = false.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ability|Tasks", meta = (HidePin = "OwningAbility", DefaultToSelf = "OwningAbility", BlueprintInternalUseOnly = "TRUE"))
		static UPlayMontageWaitGameplayTagRemoved* PlayMontageWaitGameplayTagRemove(UGameplayAbility* OwningAbility, FGameplayTag Tag, FName TaskInstanceName, UAnimMontage* MontageToPlay, float Rate = 1.f, FName StartSection = NAME_None, bool bStopWhenAbilityEnds = true, float AnimRootMotionTranslationScale = 1.f, float StartTimeSeconds = 0.f, AActor* InOptionalExternalTarget = nullptr, bool OnlyTriggerOnce = false);

	virtual void Activate() override;

	virtual void GameplayTagCallback(const FGameplayTag Tag, int32 NewCount) override;
	/** Called when the ability is asked to cancel from an outside node. What this means depends on the individual task. By default, this does nothing other than ending the task. */
	virtual void ExternalCancel() override;

	virtual FString GetDebugString() const override;

private:

	virtual void OnDestroy(bool AbilityEnded) override;

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
