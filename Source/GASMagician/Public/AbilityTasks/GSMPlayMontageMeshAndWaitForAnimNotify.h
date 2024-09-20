// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/Tasks/AbilityTask.h"
#include "GSMPlayMontageMeshAndWaitForAnimNotify.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FMontageMeshWaitForAnimNotifyDelegate);
/**
 * 
 */
UCLASS()
class GASMAGICIAN_API UGSMPlayMontageMeshAndWaitForAnimNotify : public UAbilityTask
{
	GENERATED_BODY()
public:
	UGSMPlayMontageMeshAndWaitForAnimNotify(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	UPROPERTY(BlueprintAssignable)
	FMontageMeshWaitForAnimNotifyDelegate	OnCompleted;

	UPROPERTY(BlueprintAssignable)
	FMontageMeshWaitForAnimNotifyDelegate	OnBlendedIn;

	UPROPERTY(BlueprintAssignable)
	FMontageMeshWaitForAnimNotifyDelegate	OnBlendOut;

	UPROPERTY(BlueprintAssignable)
	FMontageMeshWaitForAnimNotifyDelegate	OnInterrupted;

	UPROPERTY(BlueprintAssignable)
	FMontageMeshWaitForAnimNotifyDelegate	OnCancelled;

	UPROPERTY(BlueprintAssignable)
	FMontageMeshWaitForAnimNotifyDelegate	OnAnimNotify;
	
	UFUNCTION()
	void OnMontageBlendedIn(UAnimMontage* Montage);

	UFUNCTION()
	void OnMontageBlendingOut(UAnimMontage* Montage, bool bInterrupted);

	UE_DEPRECATED(5.3, "Please use OnGameplayAbilityCancelled instead. This function naming implied the Montage was already interrupted (instead, we are about to interrupt it).")
	UFUNCTION()
	void OnMontageInterrupted();

	/** Callback function for when the owning Gameplay Ability is cancelled */
	UFUNCTION()
	void OnGameplayAbilityCancelled();

	UFUNCTION()
	void OnMontageEnded(UAnimMontage* Montage, bool bInterrupted);

	UFUNCTION()
	void OnAnimationNotifyBeginReceived(FName NotifyName, const FBranchingPointNotifyPayload& BranchingPointPayload);

	/** 
	 * Start playing an animation montage on the avatar actor and wait for it to finish
	 * If StopWhenAbilityEnds is true, this montage will be aborted if the ability ends normally. It is always stopped when the ability is explicitly cancelled.
	 * On normal execution, OnBlendOut is called when the montage is blending out, and OnCompleted when it is completely done playing
	 * OnInterrupted is called if another montage overwrites this, and OnCancelled is called if the ability or task is cancelled
	 *
	 * @param TaskInstanceName Set to override the name of this task, for later querying
	 * @param MontageToPlay The montage to play on the character
	 * @param SkeletalMeshComponent
	 * @param Rate Change to play the montage faster or slower
	 * @param StartSection If not empty, named montage section to start from
	 * @param bStopWhenAbilityEnds If true, this montage will be aborted if the ability ends normally. It is always stopped when the ability is explicitly cancelled
	 * @param AnimRootMotionTranslationScale Change to modify size of root motion or set to 0 to block it entirely
	 * @param StartTimeSeconds Starting time offset in montage, this will be overridden by StartSection if that is also set
	 * @param bAllowInterruptAfterBlendOut If true, you can receive OnInterrupted after an OnBlendOut started (otherwise OnInterrupted will not fire when interrupted, but you will not get OnComplete).
	 * @param AnimNotifyName
	 */
	UFUNCTION(BlueprintCallable, Category="Ability|Tasks", meta = (DisplayName="PlayMontageMeshAndWaitForAnimNotify",
		HidePin = "OwningAbility", DefaultToSelf = "OwningAbility", BlueprintInternalUseOnly = "TRUE"))
	static UGSMPlayMontageMeshAndWaitForAnimNotify* CreatePlayMontageAndWaitProxy(UGameplayAbility* OwningAbility,
		FName TaskInstanceName, UAnimMontage* MontageToPlay, USkeletalMeshComponent* SkeletalMeshComponent, float Rate = 1.f, FName StartSection = NAME_None, bool bStopWhenAbilityEnds = true, float AnimRootMotionTranslationScale = 1.f, float StartTimeSeconds = 0.f, bool bAllowInterruptAfterBlendOut = false,
		FName AnimNotifyName = NAME_None);

	virtual void Activate() override;

	/** Called when the ability is asked to cancel from an outside node. What this means depends on the individual task. By default, this does nothing other than ending the task. */
	virtual void ExternalCancel() override;

	virtual FString GetDebugString() const override;

protected:

	virtual void OnDestroy(bool AbilityEnded) override;

	/** Checks if the ability is playing a montage and stops that montage, returns true if a montage was stopped, false if not. */
	bool StopPlayingMontage();

	FOnMontageBlendedInEnded BlendedInDelegate;
	FOnMontageBlendingOutStarted BlendingOutDelegate;
	FOnMontageEnded MontageEndedDelegate;
	FDelegateHandle InterruptedHandle;
	FPlayMontageAnimNotifyDelegate AnimNotifyDelegate;
	
	UPROPERTY()
	TObjectPtr<UAnimMontage> MontageToPlay;

	UPROPERTY()
	TObjectPtr<USkeletalMeshComponent> SkeletalMeshComponent;
	
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

	UPROPERTY()
	bool bAllowInterruptAfterBlendOut;
	
	UPROPERTY()
	FName AnimNotifyName;
};
