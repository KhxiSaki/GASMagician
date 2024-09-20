// Fill out your copyright notice in the Description page of Project Settings.


#include "Libraries/GSMGameplayStatics.h"



bool UGSMGameplayStatics::DoesEffectContainerSpecHaveEffects(const FGSMGameplayEffectContainerSpec& ContainerSpec)
{
	return ContainerSpec.HasValidEffects();
}

bool UGSMGameplayStatics::DoesEffectContainerSpecHaveTargets(const FGSMGameplayEffectContainerSpec& ContainerSpec)
{
	return ContainerSpec.HasValidTargets();
}
void UGSMGameplayStatics::AddTargetsToEffectContainerSpec(FGSMGameplayEffectContainerSpec& ContainerSpec, const TArray<FGameplayAbilityTargetDataHandle>& TargetData, const TArray<FHitResult>& HitResults, const TArray<AActor*>& TargetActors)
{
	ContainerSpec.AddTargets(TargetData, HitResults, TargetActors);
}

TArray<FActiveGameplayEffectHandle> UGSMGameplayStatics::ApplyExternalEffectContainerSpec(const FGSMGameplayEffectContainerSpec& ContainerSpec)
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

void UGSMGameplayStatics::ClearEffectContainerSpecTargets(FGSMGameplayEffectContainerSpec& ContainerSpec)
{
	ContainerSpec.ClearTargets();
}