// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PS/GTPAbilityTypes.h"
#include "GTPFunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class GASTOOLS_API UGTPFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:

	/** Checks if spec has any effects */
	UFUNCTION(BlueprintPure, Category = Ability)
		static bool GTDoesEffectContainerSpecHaveEffects(const FGTPGameplayEffectContainerSpec& ContainerSpec);

	// Clears spec's targets
	UFUNCTION(BlueprintCallable, Category = "Ability|Container")
		static void GTClearEffectContainerSpecTargets(UPARAM(ref) FGTPGameplayEffectContainerSpec& ContainerSpec);

	/** Checks if spec has any targets */
	UFUNCTION(BlueprintPure, Category = Ability)
		static bool GTDoesEffectContainerSpecHaveTargets(const FGTPGameplayEffectContainerSpec& ContainerSpec);

	/** Adds targets to a copy of the passed in effect container spec and returns it */
	UFUNCTION(BlueprintCallable, Category = Ability, meta = (AutoCreateRefTerm = "HitResults,TargetActors"))
		static FGTPGameplayEffectContainerSpec GTAddTargetsToEffectContainerSpec(const FGTPGameplayEffectContainerSpec& ContainerSpec, const TArray<FHitResult>& HitResults, const TArray<AActor*>& TargetActors);

	/** Applies container spec that was made from an ability */
	UFUNCTION(BlueprintCallable, Category = Ability)
		static TArray<FActiveGameplayEffectHandle> GTApplyExternalEffectContainerSpec(const FGTPGameplayEffectContainerSpec& ContainerSpec);

	/**
	* FGTGameplayEffectContext
	*/

	// Returns TargetData
	UFUNCTION(BlueprintCallable, Category = "Ability|EffectContext", Meta = (DisplayName = "GetTargetData"))
		static FGameplayAbilityTargetDataHandle GTEffectContextGetTargetData(FGameplayEffectContextHandle EffectContext);

	// Adds TargetData
	UFUNCTION(BlueprintCallable, Category = "Ability|EffectContext", Meta = (DisplayName = "AddTargetData"))
		static void GTEffectContextAddTargetData(FGameplayEffectContextHandle EffectContextHandle, const FGameplayAbilityTargetDataHandle& TargetData);


	/**
	* FGameplayAbilityTargetDataHandle
	*/
	UFUNCTION(BlueprintCallable, Category = "Ability|TargetData")
		static void GTClearTargetData(UPARAM(ref) FGameplayAbilityTargetDataHandle& TargetData);
};
