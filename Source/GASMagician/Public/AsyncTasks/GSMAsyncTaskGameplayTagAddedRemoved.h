// Copyright 2020 Dan Kestranek.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "AbilitySystemComponent.h"
#include "GameplayTagContainer.h"
#include "GSMAsyncTaskGameplayTagAddedRemoved.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAsyncOnGameplayTagAddedRemoved, FGameplayTag, Tag);

/**
 * Blueprint node to automatically register a listener for FGameplayTags added and removed.
 * Useful to use in Blueprint/UMG.
 */
UCLASS(BlueprintType, meta = (ExposedAsyncProxy = AsyncTask))
class GASMAGICIAN_API UGSMAsyncTaskGameplayTagAddedRemoved : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()
	
public:
	UPROPERTY(BlueprintAssignable)
	FAsyncOnGameplayTagAddedRemoved OnTagAdded;

	UPROPERTY(BlueprintAssignable)
	FAsyncOnGameplayTagAddedRemoved OnTagRemoved;

	// Listens for FGameplayTags added and removed.
	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true"))
	static UGSMAsyncTaskGameplayTagAddedRemoved* ListenForGameplayTagAddedOrRemoved(UAbilitySystemComponent* AbilitySystemComponent, FGameplayTagContainer Tags);

	// You must call this function manually when you want the AsyncTask to end.
	// For UMG Widgets, you would call it in the Widget's Destruct event.
	UFUNCTION(BlueprintCallable)
	void EndTask();

protected:
	UPROPERTY()
	TObjectPtr<UAbilitySystemComponent> ASC;

	FGameplayTagContainer Tags;

	virtual void TagChanged(const FGameplayTag Tag, int32 NewCount);
};
