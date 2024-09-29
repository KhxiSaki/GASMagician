// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayEffectExecutionCalculation.h"
#include "GSMExecutionCalculation.generated.h"

/**
 * 
 */
UCLASS()
class GASMAGICIAN_API UGSMExecutionCalculation : public UGameplayEffectExecutionCalculation
{
	GENERATED_BODY()
	
public:
	
	UFUNCTION(BlueprintNativeEvent, Category="GASMagician", meta=(DisplayName="Execute (GAS Magician)"))
	FGameplayModifierEvaluatedData K2_Execute(const FGameplayEffectCustomExecutionParameters& ExecutionParameters) const;
	
	UFUNCTION(BlueprintCallable, BlueprintPure = false, Category="GASMagician", meta=(DisplayName="Get Captured Attribute Magnitude", ScriptName="GetCapturedAttributeMagnitude"))
	float K2_GetCapturedAttributeMagnitude(const FGameplayEffectCustomExecutionParameters& ExecutionParameters, FGameplayAttribute Attribute, const FGameplayTagContainer& SourceTags, const FGameplayTagContainer& TargetTags) const;

	UFUNCTION(BlueprintCallable, BlueprintPure = false, Category="GASMagician", meta=(DisplayName="Get Captured Attribute Magnitude With Base", ScriptName="GetCapturedAttributeMagnitudeWithBase"))
	float K2_GetCapturedAttributeMagnitudeWithBase(const FGameplayEffectCustomExecutionParameters& ExecutionParameters, FGameplayAttribute Attribute, float InBaseValue, const FGameplayTagContainer& SourceTags, const FGameplayTagContainer& TargetTags) const;

	UFUNCTION(BlueprintCallable, BlueprintPure = false, Category="GASMagician", meta=(DisplayName="Get Captured Attribute Magnitude Base Value", ScriptName="GetCapturedAttributeMagnitudeBaseValue"))
	float K2_GetCapturedAttributeMagnitudeBaseValue(const FGameplayEffectCustomExecutionParameters& ExecutionParameters, FGameplayAttribute Attribute) const;

	UFUNCTION(BlueprintCallable, BlueprintPure = false, Category="GASMagician", meta=(DisplayName="Get Captured Attribute Bonus Magnitude", ScriptName="GetCapturedAttributeBonusMagnitude"))
	float K2_GetCapturedAttributeBonusMagnitude(const FGameplayEffectCustomExecutionParameters& ExecutionParameters, FGameplayAttribute Attribute, const FGameplayTagContainer& SourceTags, const FGameplayTagContainer& TargetTags) const;

	UFUNCTION(BlueprintCallable, BlueprintPure = false, Category="GASMagician", meta=(DisplayName="Get Transient Aggregator Magnitude", ScriptName="GetTransientAggregatorMagnitude"))
	float K2_GetTransientAggregatorMagnitude(const FGameplayEffectCustomExecutionParameters& ExecutionParameters, const FGameplayTag& AggregatorIdentifier, const FGameplayTagContainer& SourceTags, const FGameplayTagContainer& TargetTags) const;

	UFUNCTION(BlueprintCallable, BlueprintPure = false, Category="GASMagician", meta=(DisplayName="Get Transient Aggregator Magnitude With Base", ScriptName="GetTransientAggregatorMagnitudeWithBase"))
	float K2_GetTransientAggregatorMagnitudeWithBase(const FGameplayEffectCustomExecutionParameters& ExecutionParameters, const FGameplayTag& AggregatorIdentifier, float BaseValue, const FGameplayTagContainer& SourceTags, const FGameplayTagContainer& TargetTags) const;

	UFUNCTION(BlueprintCallable, BlueprintPure = false, Category="GASMagician", meta=(DisplayName="Get Transient Aggregator Base Value", ScriptName="GetTransientAggregatorBaseValue"))
	float K2_GetTransientAggregatorBaseValue(const FGameplayEffectCustomExecutionParameters& ExecutionParameters, const FGameplayTag& AggregatorIdentifier) const;

	UFUNCTION(BlueprintCallable, BlueprintPure = false, Category="GASMagician", meta=(DisplayName="Get Transient Aggregator Bonus Magnitude", ScriptName="GetTransientAggregatorBonusMagnitude"))
	float K2_GetTransientAggregatorBonusMagnitude(const FGameplayEffectCustomExecutionParameters& ExecutionParameters, const FGameplayTag& AggregatorIdentifier, const FGameplayTagContainer& SourceTags, const FGameplayTagContainer& TargetTags) const;
	
	UFUNCTION(BlueprintCallable, Category="GASMagician")
	const UAbilitySystemComponent* GetTargetAbilitySystemComponent(const FGameplayEffectCustomExecutionParameters& ExecutionParameters);

	UFUNCTION(BlueprintCallable, Category="GASMagician")
	const UAbilitySystemComponent* GetSourceAbilitySystemComponent(const FGameplayEffectCustomExecutionParameters& ExecutionParameters);

	UFUNCTION(BlueprintCallable, Category="GASMagician")
	AActor* GetSourceActor(const FGameplayEffectCustomExecutionParameters& ExecutionParameters);

	UFUNCTION(BlueprintCallable, Category="GASMagician")
	const FGameplayEffectSpec& GetOwningSpec(const FGameplayEffectCustomExecutionParameters& ExecutionParameters) const;
	
	UFUNCTION(BlueprintPure, Category="GASMagician")
	AActor* GetTargetActor(const FGameplayEffectCustomExecutionParameters& ExecutionParameters);
	
/**
	 * Copies and returns the source aggregated tags from a Gameplay Effect Spec
	 *
	 * @param EffectSpec The Gameplay Effect Spec to get the info from
	 * 
	 * @return Gameplay Tag Container with the copied tags. The container will be empty if no captured source tags exist.
	 */
	UFUNCTION(BlueprintCallable, BlueprintPure = false, Category="GASMagician")
	FGameplayTagContainer GetSourceAggregatedTags(const FGameplayEffectCustomExecutionParameters& ExecutionParameters) const;

	/**
	 * Returns the source actor tags from a Gameplay Effect Spec
	 *
	 * @param EffectSpec The Gameplay Effect Spec to get the info from
	 * 
	 * @return Gameplay Tag Container with the copied tags. The container will be empty if no captured source tags exist.
	 */
	UFUNCTION(BlueprintCallable, Category="GASMagician")
	const FGameplayTagContainer& GetSourceActorTags(const FGameplayEffectCustomExecutionParameters& ExecutionParameters) const;

	/**
	 * Returns the source spec tags from a Gameplay Effect Spec
	 *
	 * @param EffectSpec The Gameplay Effect Spec to get the info from
	 * 
	 * @return Gameplay Tag Container with the copied tags. The container will be empty if no captured source tags exist.
	 */
	UFUNCTION(BlueprintCallable, Category="GASMagician")
	const FGameplayTagContainer& GetSourceSpecTags(const FGameplayEffectCustomExecutionParameters& ExecutionParameters) const;

	/**
	 * Copies and returns the target aggregated tags from a Gameplay Effect Spec
	 *
	 * @param EffectSpec The Gameplay Effect Spec to get the info from
	 * 
	 * @return Gameplay Tag Container with the copied tags. The container will be empty if no captured source tags exist.
	 */
	UFUNCTION(BlueprintCallable, BlueprintPure = false, Category="GASMagician")
	FGameplayTagContainer GetTargetAggregatedTags(const FGameplayEffectCustomExecutionParameters& ExecutionParameters) const;

	/**
	 * Returns the target actor tags from a Gameplay Effect Spec
	 * Useful for Modifier Magnitude Calculations
	 *
	 * @param EffectSpec The Gameplay Effect Spec to get the info from
	 * 
	 * @return Gameplay Tag Container with the copied tags. The container will be empty if no captured source tags exist.
	 */
	UFUNCTION(BlueprintCallable, Category="GASMagician")
	const FGameplayTagContainer& GetTargetActorTags(const FGameplayEffectCustomExecutionParameters& ExecutionParameters) const;

	/**
	 * Returns the target spec tags from a Gameplay Effect Spec
	 * Useful for Modifier Magnitude Calculations
	 *
	 * @param EffectSpec The Gameplay Effect Spec to get the info from
	 * 
	 * @return Gameplay Tag Container with the copied tags. The container will be empty if no captured source tags exist.
	 */
	UFUNCTION(BlueprintCallable, Category="GASMagician")
	const FGameplayTagContainer& GetTargetSpecTags(const FGameplayEffectCustomExecutionParameters& ExecutionParameters) const;

protected:

	virtual void Execute_Implementation(const FGameplayEffectCustomExecutionParameters& ExecutionParams, FGameplayEffectCustomExecutionOutput& OutExecutionOutput) const override;
};
