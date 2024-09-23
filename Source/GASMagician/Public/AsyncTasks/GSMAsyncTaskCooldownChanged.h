// Copyright 2020 Dan Kestranek.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "AbilitySystemComponent.h"
#include "GameplayTagContainer.h"
#include "GSMAsyncTaskCooldownChanged.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FAsyncOnCooldownChanged, FGameplayTag, CooldownTag, float, TimeRemaining, float, Duration);

/**
 * Blueprint node to automatically register a listener for changes (Begin and End) to an array of Cooldown tags.
 * Useful to use in UI.
 */
UCLASS(BlueprintType, meta = (ExposedAsyncProxy = AsyncTask))
class GASMAGICIAN_API UGSMAsyncTaskCooldownChanged : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()
	
public:
	UPROPERTY(BlueprintAssignable)
	FAsyncOnCooldownChanged OnCooldownBegin;

	UPROPERTY(BlueprintAssignable)
	FAsyncOnCooldownChanged OnCooldownEnd;

	// Listens for changes (Begin and End) to cooldown GameplayEffects based on the cooldown tag.
	// UseServerCooldown determines if the Sever's cooldown is returned in addition to the local predicted cooldown.
	// If using ServerCooldown, TimeRemaining and Duration will return -1 to signal local predicted cooldown has begun.
	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true"))
	static UGSMAsyncTaskCooldownChanged* ListenForCooldownChange(UAbilitySystemComponent* AbilitySystemComponent, FGameplayTagContainer CooldownTags, bool UseServerCooldown);

	// You must call this function manually when you want the AsyncTask to end.
	// For UMG Widgets, you would call it in the Widget's Destruct event.
	UFUNCTION(BlueprintCallable)
	void EndTask();

protected:
	UPROPERTY()
	TObjectPtr<UAbilitySystemComponent> ASC;

	FGameplayTagContainer CooldownTags;

	bool UseServerCooldown;

	virtual void OnActiveGameplayEffectAddedCallback(UAbilitySystemComponent* Target, const FGameplayEffectSpec& SpecApplied, FActiveGameplayEffectHandle ActiveHandle);
	virtual void CooldownTagChanged(const FGameplayTag CooldownTag, int32 NewCount);

	bool GetCooldownRemainingForTag(FGameplayTagContainer CooldownTags, float& TimeRemaining, float& CooldownDuration);
};
