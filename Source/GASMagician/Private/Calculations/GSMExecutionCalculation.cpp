// Fill out your copyright notice in the Description page of Project Settings.


#include "Calculations/GSMExecutionCalculation.h"

#include "AbilitySystemComponent.h"


FGameplayModifierEvaluatedData UGSMExecutionCalculation::K2_Execute_Implementation(
	const FGameplayEffectCustomExecutionParameters& ExecutionParameters) const
{
	for (const FGameplayEffectAttributeCaptureDefinition& CurrentCapture : RelevantAttributesToCapture)
	{
		return FGameplayModifierEvaluatedData();
	}
	return FGameplayModifierEvaluatedData();
}

float UGSMExecutionCalculation::K2_GetCapturedAttributeMagnitude(const FGameplayEffectCustomExecutionParameters& ExecutionParameters,
                                                                 FGameplayAttribute Attribute, const FGameplayTagContainer& SourceTags, const FGameplayTagContainer& TargetTags) const
{
	float Magnitude = 0.0f;
	
	if(Attribute.IsValid())
	{
		for (const FGameplayEffectAttributeCaptureDefinition& CurrentCapture : RelevantAttributesToCapture)
		{
			if (CurrentCapture.AttributeToCapture == Attribute)
			{
				FAggregatorEvaluateParameters EvaluationParameters;

				EvaluationParameters.SourceTags = &SourceTags;
				EvaluationParameters.TargetTags = &TargetTags;
			
				ExecutionParameters.AttemptCalculateCapturedAttributeMagnitude(CurrentCapture, EvaluationParameters, Magnitude);
			}
		}
	}

	return Magnitude;
}

float UGSMExecutionCalculation::K2_GetCapturedAttributeMagnitudeWithBase(const FGameplayEffectCustomExecutionParameters& ExecutionParameters,
	FGameplayAttribute Attribute, float InBaseValue, const FGameplayTagContainer& SourceTags, const FGameplayTagContainer& TargetTags) const
{
	float Magnitude = 0.0f;
	
	if(Attribute.IsValid())
	{
		for (const FGameplayEffectAttributeCaptureDefinition& CurrentCapture : RelevantAttributesToCapture)
		{
			if (CurrentCapture.AttributeToCapture == Attribute)
			{
				FAggregatorEvaluateParameters EvaluationParameters;

				EvaluationParameters.SourceTags = &SourceTags;
				EvaluationParameters.TargetTags = &TargetTags;
			
				ExecutionParameters.AttemptCalculateCapturedAttributeMagnitudeWithBase(CurrentCapture, EvaluationParameters, InBaseValue, Magnitude);
			}
		}
	}

	return Magnitude;
}

float UGSMExecutionCalculation::K2_GetCapturedAttributeMagnitudeBaseValue(const FGameplayEffectCustomExecutionParameters& ExecutionParameters,
	FGameplayAttribute Attribute) const
{
	float Magnitude = 0.0f;
	
	if(Attribute.IsValid())
	{
		for (const FGameplayEffectAttributeCaptureDefinition& CurrentCapture : RelevantAttributesToCapture)
		{
			if (CurrentCapture.AttributeToCapture == Attribute)
			{
				ExecutionParameters.AttemptCalculateCapturedAttributeBaseValue(CurrentCapture, Magnitude);
			}
		}
	}

	return Magnitude;
}

float UGSMExecutionCalculation::K2_GetCapturedAttributeBonusMagnitude(const FGameplayEffectCustomExecutionParameters& ExecutionParameters,
	FGameplayAttribute Attribute, const FGameplayTagContainer& SourceTags, const FGameplayTagContainer& TargetTags) const
{
	float Magnitude = 0.0f;
	
	if(Attribute.IsValid())
	{
		for (const FGameplayEffectAttributeCaptureDefinition& CurrentCapture : RelevantAttributesToCapture)
		{
			if (CurrentCapture.AttributeToCapture == Attribute)
			{
				FAggregatorEvaluateParameters EvaluationParameters;

				EvaluationParameters.SourceTags = &SourceTags;
				EvaluationParameters.TargetTags = &TargetTags;
			
				ExecutionParameters.AttemptCalculateCapturedAttributeBonusMagnitude(CurrentCapture, EvaluationParameters, Magnitude);
			}
		}
	}

	return Magnitude;
}

float UGSMExecutionCalculation::K2_GetTransientAggregatorMagnitude(const FGameplayEffectCustomExecutionParameters& ExecutionParameters,
	const FGameplayTag& AggregatorIdentifier, const FGameplayTagContainer& SourceTags, const FGameplayTagContainer& TargetTags) const
{
	float Magnitude = 0.0f;

	if(AggregatorIdentifier.IsValid())
	{
		FAggregatorEvaluateParameters EvaluationParameters;

		EvaluationParameters.SourceTags = &SourceTags;
		EvaluationParameters.TargetTags = &TargetTags;
			
		ExecutionParameters.AttemptCalculateTransientAggregatorMagnitude(AggregatorIdentifier, EvaluationParameters, Magnitude);
	
		return Magnitude;
	}
	return 0.0f;
}

float UGSMExecutionCalculation::K2_GetTransientAggregatorMagnitudeWithBase(const FGameplayEffectCustomExecutionParameters& ExecutionParameters,
	const FGameplayTag& AggregatorIdentifier, float BaseValue, const FGameplayTagContainer& SourceTags, const FGameplayTagContainer& TargetTags) const
{
	float Magnitude = 0.0f;

	if(AggregatorIdentifier.IsValid())
	{
		FAggregatorEvaluateParameters EvaluationParameters;

		EvaluationParameters.SourceTags = &SourceTags;
		EvaluationParameters.TargetTags = &TargetTags;
			
		ExecutionParameters.AttemptCalculateTransientAggregatorMagnitudeWithBase(AggregatorIdentifier, EvaluationParameters, BaseValue, Magnitude);
	
		return Magnitude;
	}
	return 0.0f;
}

float UGSMExecutionCalculation::K2_GetTransientAggregatorBaseValue(const FGameplayEffectCustomExecutionParameters& ExecutionParameters,
	const FGameplayTag& AggregatorIdentifier) const
{
	float Magnitude = 0.0f;

	if(AggregatorIdentifier.IsValid())
	{
		ExecutionParameters.AttemptCalculateTransientAggregatorBaseValue(AggregatorIdentifier, Magnitude);
	
		return Magnitude;
	}
	return 0.0f;
}

float UGSMExecutionCalculation::K2_GetTransientAggregatorBonusMagnitude(const FGameplayEffectCustomExecutionParameters& ExecutionParameters,
	const FGameplayTag& AggregatorIdentifier, const FGameplayTagContainer& SourceTags, const FGameplayTagContainer& TargetTags) const
{
	float Magnitude = 0.0f;

	if(AggregatorIdentifier.IsValid())
	{
		FAggregatorEvaluateParameters EvaluationParameters;

		EvaluationParameters.SourceTags = &SourceTags;
		EvaluationParameters.TargetTags = &TargetTags;
			
		ExecutionParameters.AttemptCalculateTransientAggregatorBonusMagnitude(AggregatorIdentifier, EvaluationParameters, Magnitude);
	
		return Magnitude;
	}
	return 0.0f;
}

const UAbilitySystemComponent* UGSMExecutionCalculation::GetTargetAbilitySystemComponent(
	const FGameplayEffectCustomExecutionParameters& ExecutionParameters)
{
	return ExecutionParameters.GetTargetAbilitySystemComponent();
}

const UAbilitySystemComponent* UGSMExecutionCalculation::GetSourceAbilitySystemComponent(
	const FGameplayEffectCustomExecutionParameters& ExecutionParameters)
{
	return ExecutionParameters.GetSourceAbilitySystemComponent();
}

AActor* UGSMExecutionCalculation::GetSourceActor(const FGameplayEffectCustomExecutionParameters& ExecutionParameters)
{
	return ExecutionParameters.GetSourceAbilitySystemComponent()->GetAvatarActor();
}

const FGameplayEffectSpec& UGSMExecutionCalculation::GetOwningSpec(const FGameplayEffectCustomExecutionParameters& ExecutionParameters) const
{
	return ExecutionParameters.GetOwningSpec();
}

AActor* UGSMExecutionCalculation::GetTargetActor(const FGameplayEffectCustomExecutionParameters& ExecutionParameters)
{
	return ExecutionParameters.GetTargetAbilitySystemComponent()->GetAvatarActor();
}

FGameplayTagContainer UGSMExecutionCalculation::GetSourceAggregatedTags(const FGameplayEffectCustomExecutionParameters& ExecutionParameters) const
{
	const FGameplayTagContainer* Tags = ExecutionParameters.GetOwningSpec().CapturedSourceTags.GetAggregatedTags();

	if (Tags)
	{
		return *Tags;
	}

	return FGameplayTagContainer();
}

const FGameplayTagContainer& UGSMExecutionCalculation::GetSourceActorTags(const FGameplayEffectCustomExecutionParameters& ExecutionParameters) const
{
	return ExecutionParameters.GetOwningSpec().CapturedSourceTags.GetActorTags();
}

const FGameplayTagContainer& UGSMExecutionCalculation::GetSourceSpecTags(const FGameplayEffectCustomExecutionParameters& ExecutionParameters) const
{
	return ExecutionParameters.GetOwningSpec().CapturedSourceTags.GetSpecTags();
}

FGameplayTagContainer UGSMExecutionCalculation::GetTargetAggregatedTags(const FGameplayEffectCustomExecutionParameters& ExecutionParameters) const
{
	const FGameplayTagContainer* Tags = ExecutionParameters.GetOwningSpec().CapturedTargetTags.GetAggregatedTags();

	if (Tags)
	{
		return *Tags;
	}

	return FGameplayTagContainer();
}

const FGameplayTagContainer& UGSMExecutionCalculation::GetTargetActorTags(const FGameplayEffectCustomExecutionParameters& ExecutionParameters) const
{
	return ExecutionParameters.GetOwningSpec().CapturedTargetTags.GetActorTags();
}

const FGameplayTagContainer& UGSMExecutionCalculation::GetTargetSpecTags(const FGameplayEffectCustomExecutionParameters& ExecutionParameters) const
{
	return ExecutionParameters.GetOwningSpec().CapturedTargetTags.GetSpecTags();
}

void UGSMExecutionCalculation::Execute_Implementation(const FGameplayEffectCustomExecutionParameters& ExecutionParams,
	FGameplayEffectCustomExecutionOutput& OutExecutionOutput) const
{
	Super::Execute_Implementation(ExecutionParams, OutExecutionOutput);

	const FGameplayModifierEvaluatedData EvaluatedData = K2_Execute(ExecutionParams);
	OutExecutionOutput.AddOutputModifier(EvaluatedData);
}
