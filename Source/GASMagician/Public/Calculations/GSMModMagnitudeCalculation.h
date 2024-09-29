// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayModMagnitudeCalculation.h"
#include "GSMModMagnitudeCalculation.generated.h"

/**
 * 
 */
UCLASS()
class GASMAGICIAN_API UGSMModMagnitudeCalculation : public UGameplayModMagnitudeCalculation
{
	GENERATED_BODY()
	
public:

	/**
	 * Determines if the spec has capture specs with valid captures for all of the specified definitions.
	 * 
	 * @param InCaptureDefsToCheck	Capture definitions to check for
	 * 
	 * @return True if the container has valid capture attributes for all of the specified definitions, false if it does not
	 */
	UFUNCTION(BlueprintCallable, Category="GASMagician")
	bool HasValidCapturedAttributes(const FGameplayEffectSpec& Spec, const TArray<FGameplayEffectAttributeCaptureDefinition>& InCaptureDefsToCheck) const;
	
	/**
	 * Helper function to attempt to calculate the duration of the spec from its GE definition
	 * 
	 * @param OutDefDuration	Computed duration of the spec from its GE definition; Not the actual duration of the spec
	 * 
	 * @return True if the calculation was successful, false if it was not
	 */
	UFUNCTION(BlueprintCallable, Category="GASMagician")
	bool AttemptCalculateDurationFromDef(const FGameplayEffectSpec& Spec, float& OutDefDuration) const;

	UFUNCTION(BlueprintCallable, Category="GASMagician")
	float GetDuration(const FGameplayEffectSpec& Spec) const;

	UFUNCTION(BlueprintCallable, Category="GASMagician")
	float GetPeriod(const FGameplayEffectSpec& Spec) const;

	/** Returns the stack count for this GE spec. */
	UFUNCTION(BlueprintCallable, Category="GASMagician")
	int32 GetStackCount(const FGameplayEffectSpec& Spec) const;

	UFUNCTION(BlueprintCallable, Category="GASMagician")
	FGameplayEffectContextHandle GetContextFromEffectSpec(const FGameplayEffectSpec& Spec) const;

	/** Appends all tags granted by this gameplay effect spec */
	UFUNCTION(BlueprintCallable, Category="GASMagician")
	void GetAllGrantedTags(const FGameplayEffectSpec& Spec, FGameplayTagContainer& OutContainer) const;

	/** Appends all blocked ability tags granted by this gameplay effect spec */
	UFUNCTION(BlueprintCallable, Category="GASMagician")
	void GetAllBlockedAbilityTags(const FGameplayEffectSpec& Spec, FGameplayTagContainer& OutContainer) const;

	/** Appends all tags that apply to this gameplay effect spec */
	UFUNCTION(BlueprintCallable, Category="GASMagician")
	void GetAllAssetTags(const FGameplayEffectSpec& Spec, FGameplayTagContainer& OutContainer) const;
	
	/**
	 * Get the computed magnitude of the modifier on the spec with the specified index
	 * 
	 * @param ModifierIndx			Modifier to get
	 * @param bFactorInStackCount	If true, the calculation will include the stack count
	 * 
	 * @return Computed magnitude
	 */
	UFUNCTION(BlueprintCallable, Category="GASMagician")
	float GetModifierMagnitude(const FGameplayEffectSpec& Spec, int32 ModifierIdx, bool bFactorInStackCount) const;
	
	
};
