// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/Async/AbilityAsync.h"
#include "AbilityAsync_EffectStackChanged.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnGameplayEffectStackChanged, FGameplayTag, EffectGameplayTag, FActiveGameplayEffectHandle, Handle, int32, NewStackCount, int32, OldStackCount);

/**
 * 
 */
UCLASS()
class GASMAGICIAN_API UAbilityAsync_EffectStackChanged : public UAbilityAsync
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintAssignable)
	FOnGameplayEffectStackChanged OnGameplayEffectStackChange;

	UFUNCTION(BlueprintCallable, Category = "Ability|Tasks", meta = (DefaultToSelf = "TargetActor", BlueprintInternalUseOnly = "TRUE"))
	static UAbilityAsync_EffectStackChanged* WaitForGameplayEffectStackChange(AActor* TargetActor, FGameplayTag EffectGameplayTag);

protected:

	virtual void Activate() override;
	virtual void EndAction() override;

	FDelegateHandle MyHandle;
	FGameplayTag EffectGameplayTag;

	FActiveGameplayEffectHandle ActiveEffectHandle;

	virtual void OnActiveGameplayEffectAddedCallback(UAbilitySystemComponent* Target, const FGameplayEffectSpec& SpecApplied, FActiveGameplayEffectHandle ActiveHandle);
	virtual void OnRemoveGameplayEffectCallback(const FActiveGameplayEffect& EffectRemoved);

	virtual void GameplayEffectStackChanged(FActiveGameplayEffectHandle EffectHandle, int32 NewStackCount, int32 PreviousStackCount);
};
