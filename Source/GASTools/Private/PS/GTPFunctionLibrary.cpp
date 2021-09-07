// Fill out your copyright notice in the Description page of Project Settings.


#include "PS/GTPFunctionLibrary.h"


bool UGTPFunctionLibrary::GTDoesEffectContainerSpecHaveEffects(const FGTPGameplayEffectContainerSpec& ContainerSpec)
{
	return ContainerSpec.HasValidEffects();
}

bool UGTPFunctionLibrary::GTDoesEffectContainerSpecHaveTargets(const FGTPGameplayEffectContainerSpec& ContainerSpec)
{
	return ContainerSpec.HasValidTargets();
}

void UGTPFunctionLibrary::GTClearEffectContainerSpecTargets(FGTPGameplayEffectContainerSpec& ContainerSpec)
{
	ContainerSpec.ClearTargets();
}

FGTPGameplayEffectContainerSpec UGTPFunctionLibrary::GTAddTargetsToEffectContainerSpec(const FGTPGameplayEffectContainerSpec& ContainerSpec, const TArray<FHitResult>& HitResults, const TArray<AActor*>& TargetActors)
{
	FGTPGameplayEffectContainerSpec NewSpec = ContainerSpec;
	NewSpec.AddTargets(HitResults, TargetActors);
	return NewSpec;
}

TArray<FActiveGameplayEffectHandle> UGTPFunctionLibrary::GTApplyExternalEffectContainerSpec(const FGTPGameplayEffectContainerSpec& ContainerSpec)
{
	TArray<FActiveGameplayEffectHandle> AllEffects;

	// Iterate list of gameplay effects
	for (const FGameplayEffectSpecHandle& SpecHandle : ContainerSpec.TargetGameplayEffectSpecs)
	{
		if (SpecHandle.IsValid())
		{
			// If effect is valid, iterate list of targets and apply to all
			for (TSharedPtr<FGameplayAbilityTargetData> Data : ContainerSpec.TargetData.Data)
			{
				AllEffects.Append(Data->ApplyGameplayEffectSpec(*SpecHandle.Data.Get()));
			}
		}
	}
	return AllEffects;
}



FGameplayAbilityTargetDataHandle UGTPFunctionLibrary::GTEffectContextGetTargetData(FGameplayEffectContextHandle EffectContextHandle)
{
	FGTPGameplayEffectContext* EffectContext = static_cast<FGTPGameplayEffectContext*>(EffectContextHandle.Get());

	if (EffectContext)
	{
		return EffectContext->GetTargetData();
	}

	return FGameplayAbilityTargetDataHandle();
}

void UGTPFunctionLibrary::GTEffectContextAddTargetData(FGameplayEffectContextHandle EffectContextHandle, const FGameplayAbilityTargetDataHandle& TargetData)
{
	FGTPGameplayEffectContext* EffectContext = static_cast<FGTPGameplayEffectContext*>(EffectContextHandle.Get());

	if (EffectContext)
	{
		EffectContext->AddTargetData(TargetData);
	}
}

void UGTPFunctionLibrary::GTClearTargetData(FGameplayAbilityTargetDataHandle& TargetData)
{
	TargetData.Clear();
}