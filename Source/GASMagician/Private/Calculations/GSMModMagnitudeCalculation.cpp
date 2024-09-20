// Fill out your copyright notice in the Description page of Project Settings.


#include "Calculations/GSMModMagnitudeCalculation.h"

bool UGSMModMagnitudeCalculation::HasValidCapturedAttributes(const FGameplayEffectSpec& Spec,
														  const TArray<FGameplayEffectAttributeCaptureDefinition>& InCaptureDefsToCheck) const
{
	return Spec.HasValidCapturedAttributes(InCaptureDefsToCheck);
}

bool UGSMModMagnitudeCalculation::AttemptCalculateDurationFromDef(const FGameplayEffectSpec& Spec, float& OutDefDuration) const
{
	return Spec.AttemptCalculateDurationFromDef(OutDefDuration);
}

float UGSMModMagnitudeCalculation::GetDuration(const FGameplayEffectSpec& Spec) const
{
	return Spec.GetDuration();
}

float UGSMModMagnitudeCalculation::GetPeriod(const FGameplayEffectSpec& Spec) const
{
	return Spec.GetPeriod();
}

int32 UGSMModMagnitudeCalculation::GetStackCount(const FGameplayEffectSpec& Spec) const
{
	return Spec.GetStackCount();
}

FGameplayEffectContextHandle UGSMModMagnitudeCalculation::GetContextFromEffectSpec(const FGameplayEffectSpec& Spec) const
{
	return Spec.GetContext();
}

void UGSMModMagnitudeCalculation::GetAllGrantedTags(const FGameplayEffectSpec& Spec, FGameplayTagContainer& OutContainer) const
{
	Spec.GetAllGrantedTags(OutContainer);
}

void UGSMModMagnitudeCalculation::GetAllBlockedAbilityTags(const FGameplayEffectSpec& Spec, FGameplayTagContainer& OutContainer) const
{
	Spec.GetAllBlockedAbilityTags(OutContainer);
}

void UGSMModMagnitudeCalculation::GetAllAssetTags(const FGameplayEffectSpec& Spec, FGameplayTagContainer& OutContainer) const
{
	Spec.GetAllAssetTags(OutContainer);
}

float UGSMModMagnitudeCalculation::GetModifierMagnitude(const FGameplayEffectSpec& Spec, int32 ModifierIdx, bool bFactorInStackCount) const
{
	return Spec.GetModifierMagnitude(ModifierIdx, bFactorInStackCount);
}



