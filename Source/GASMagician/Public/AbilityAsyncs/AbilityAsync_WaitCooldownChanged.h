// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/Async/AbilityAsync.h"
#include "AbilityAsync_WaitCooldownChanged.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnCooldownChanged, FGameplayTag, CooldownTag, float, TimeRemaining, float, Duration);
/**
 * 
 */
UCLASS()
class GASMAGICIAN_API UAbilityAsync_WaitCooldownChanged : public UAbilityAsync
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
	FOnCooldownChanged OnCooldownBegin;

	UPROPERTY(BlueprintAssignable)
	FOnCooldownChanged OnCooldownEnd;

	// Listens for changes (Begin and End) to cooldown GameplayEffects based on the cooldown tag.
	// UseServerCooldown determines if the Sever's cooldown is returned in addition to the local predicted cooldown.
	// If using ServerCooldown, TimeRemaining and Duration will return -1 to signal local predicted cooldown has begun.
	UFUNCTION(BlueprintCallable, Category = "Ability|Tasks", meta = (DefaultToSelf = "TargetActor", BlueprintInternalUseOnly = "TRUE"))
	static UAbilityAsync_WaitCooldownChanged* WaitForCooldownChange(AActor* TargetActor, FGameplayTagContainer CooldownTags, bool UseServerCooldown);

protected:

	virtual void Activate() override;
	virtual void EndAction() override;

	FGameplayTagContainer CooldownTags;

	bool UseServerCooldown;

	virtual void OnActiveGameplayEffectAddedCallback(UAbilitySystemComponent* Target, const FGameplayEffectSpec& SpecApplied, FActiveGameplayEffectHandle ActiveHandle);
	virtual void CooldownTagChanged(const FGameplayTag CooldownTag, int32 NewCount);

	bool GetCooldownRemainingForTag(FGameplayTagContainer CooldownTags, float& TimeRemaining, float& CooldownDuration);
	FDelegateHandle MyHandle;
};
