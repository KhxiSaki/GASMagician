// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/Tasks/AbilityTask.h"
#include "GSMPlayAnimAndWaitForAnimNotify.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FPlayAnimWaitForAnimNotifySimpleDelegate);

class UAnimSequence;
/**
 * 
 */
UCLASS()
class GASMAGICIAN_API UGSMPlayAnimAndWaitForAnimNotify : public UAbilityTask
{
GENERATED_BODY()

public:
	UGSMPlayAnimAndWaitForAnimNotify(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	
	UPROPERTY(BlueprintAssignable)
	FPlayAnimWaitForAnimNotifySimpleDelegate	OnCompleted;

	UPROPERTY(BlueprintAssignable)
	FPlayAnimWaitForAnimNotifySimpleDelegate	OnBlendOut;

	UPROPERTY(BlueprintAssignable)
	FPlayAnimWaitForAnimNotifySimpleDelegate	OnBlendIn;

	UPROPERTY(BlueprintAssignable)
	FPlayAnimWaitForAnimNotifySimpleDelegate	OnInterrupted;

	UPROPERTY(BlueprintAssignable)
	FPlayAnimWaitForAnimNotifySimpleDelegate	OnCancelled;

	UPROPERTY(BlueprintAssignable)
	FPlayAnimWaitForAnimNotifySimpleDelegate	OnAnimNotify;
	
	UFUNCTION()
	void OnMontageBlendedIn(UAnimMontage* Montage);

	UFUNCTION()
	void OnMontageBlendingOut(UAnimMontage* Montage, bool bInterrupted);

	UFUNCTION()
	void OnMontageInterrupted();

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
	 * @param Rate Change to play the montage faster or slower
	 * @param StartSection If not empty, named montage section to start from
	 * @param bStopWhenAbilityEnds If true, this montage will be aborted if the ability ends normally. It is always stopped when the ability is explicitly cancelled
	 * @param AnimRootMotionTranslationScale Change to modify size of root motion or set to 0 to block it entirely
	 * @param StartTimeSeconds Starting time offset in montage, this will be overridden by StartSection if that is also set
	 * @param AnimNotifyName
	 */
	UFUNCTION(BlueprintCallable, Category="Ability|Tasks", meta = (DisplayName="PlayAnimAndWaitForAnimNotify",
		HidePin = "OwningAbility", DefaultToSelf = "OwningAbility", BlueprintInternalUseOnly = "TRUE"))
	static UGSMPlayAnimAndWaitForAnimNotify* CreatePlayAnimAndWaitProxy(UGameplayAbility* OwningAbility,
		FName TaskInstanceName, UAnimSequence* AnimSequence, FName SlotName = NAME_None, float BlendInTime = 0.25f, float BlendOutTime = 0.25f, float InPlayRate = 1.0f, float StartTimeSeconds = 0.0f, bool bStopWhenAbilityEnds = true, float AnimRootMotionTranslationScale = 1.0f,
		FName AnimNotifyName = NAME_None);

	virtual void Activate() override;

	/** Called when the ability is asked to cancel from an outside node. What this means depends on the individual task. By default, this does nothing other than ending the task. */
	virtual void ExternalCancel() override;

	virtual FString GetDebugString() const override;

protected:

	virtual void OnDestroy(bool AbilityEnded) override;

	/** Checks if the ability is playing a montage and stops that montage, returns true if a montage was stopped, false if not. */
	bool StopPlayingMontage();

	FOnMontageBlendingOutStarted BlendingOutDelegate;
	FOnMontageBlendedInEnded BlendedInDelegate;
	FOnMontageEnded MontageEndedDelegate;
	FDelegateHandle InterruptedHandle;
	FPlayMontageAnimNotifyDelegate AnimNotifyDelegate;
	
	UPROPERTY()
	TObjectPtr<UAnimSequence> AnimSequenceToPlay;

	FName SlotName = NAME_None;
	float BlendInTime = 0.25f;
	float BlendOutTime = 0.25f;
	float PlayRate = 1.0f;
	float AnimRootMotionTranslationScale = 1.0f;
	float StartTimeSeconds = 0.0f;
	bool bStopWhenAbilityEnds = true;
	UPROPERTY()
	FName AnimNotifyName;
};
