// Fill out your copyright notice in the Description page of Project Settings.


#include "PS/GTPGameplayAbility.h"
#include "PS/GTPAbilitySystemComponent.h"
#include "PS/GTPTargetTypes.h"
#include "AbilitySystemComponent.h"
#include "PS/GTPCharacter.h"

UGTPGameplayAbility::UGTPGameplayAbility()
{
	// Default to Instance Per Actor
	InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
}

FGTPGameplayEffectContainerSpec UGTPGameplayAbility::GTMakeEffectContainerSpecFromContainer(const FGTPGameplayEffectContainer& Container, const FGameplayEventData& EventData, int32 OverrideGameplayLevel)
{
	// First figure out our actor info
	FGTPGameplayEffectContainerSpec ReturnSpec;
	AActor* OwningActor = GetOwningActorFromActorInfo();
	AGTPCharacter* OwningCharacter = Cast<AGTPCharacter>(OwningActor);
	UGTPAbilitySystemComponent* OwningASC = UGTPAbilitySystemComponent::GetAbilitySystemComponentFromActor(OwningActor);

	if (OwningASC)
	{
		// If we have a target type, run the targeting logic. This is optional, targets can be added later
		if (Container.TargetType.Get())
		{
			TArray<FHitResult> HitResults;
			TArray<AActor*> TargetActors;
			const UGTPTargetType* TargetTypeCDO = Container.TargetType.GetDefaultObject();
			AActor* AvatarActor = GetAvatarActorFromActorInfo();
			TargetTypeCDO->GetTargets(OwningCharacter, AvatarActor, EventData, HitResults, TargetActors);
			ReturnSpec.AddTargets(HitResults, TargetActors);
		}

		// If we don't have an override level, use the default on the ability itself
		if (OverrideGameplayLevel == INDEX_NONE)
		{
			OverrideGameplayLevel = OverrideGameplayLevel = this->GetAbilityLevel(); //OwningASC->GetDefaultAbilityLevel();
		}

		// Build GameplayEffectSpecs for each applied effect
		for (const TSubclassOf<UGameplayEffect>& EffectClass : Container.TargetGameplayEffectClasses)
		{
			ReturnSpec.TargetGameplayEffectSpecs.Add(MakeOutgoingGameplayEffectSpec(EffectClass, OverrideGameplayLevel));
		}
	}
	return ReturnSpec;
}

FGTPGameplayEffectContainerSpec UGTPGameplayAbility::GTMakeEffectContainerSpec(FGameplayTag ContainerTag, const FGameplayEventData& EventData, int32 OverrideGameplayLevel)
{
	FGTPGameplayEffectContainer* FoundContainer = EffectContainerMap.Find(ContainerTag);

	if (FoundContainer)
	{
		return GTMakeEffectContainerSpecFromContainer(*FoundContainer, EventData, OverrideGameplayLevel);
	}
	return FGTPGameplayEffectContainerSpec();
}

TArray<FActiveGameplayEffectHandle> UGTPGameplayAbility::GTApplyEffectContainerSpec(const FGTPGameplayEffectContainerSpec& ContainerSpec)
{
	TArray<FActiveGameplayEffectHandle> AllEffects;

	// Iterate list of effect specs and apply them to their target data
	for (const FGameplayEffectSpecHandle& SpecHandle : ContainerSpec.TargetGameplayEffectSpecs)
	{
		AllEffects.Append(K2_ApplyGameplayEffectSpecToTarget(SpecHandle, ContainerSpec.TargetData));
	}
	return AllEffects;
}

TArray<FActiveGameplayEffectHandle> UGTPGameplayAbility::GTApplyEffectContainer(FGameplayTag ContainerTag, const FGameplayEventData& EventData, int32 OverrideGameplayLevel)
{
	FGTPGameplayEffectContainerSpec Spec = GTMakeEffectContainerSpec(ContainerTag, EventData, OverrideGameplayLevel);
	return GTApplyEffectContainerSpec(Spec);
}

UObject* UGTPGameplayAbility::GTGetSourceObject(FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo& ActorInfo) const
{
	return GetSourceObject(Handle, &ActorInfo);
}

bool UGTPGameplayAbility::GTBatchRPCTryActivateAbility(FGameplayAbilitySpecHandle InAbilityHandle, bool EndAbilityImmediately)
{
	UGTPAbilitySystemComponent* GTASC = Cast<UGTPAbilitySystemComponent>(GetAbilitySystemComponentFromActorInfo());
	if (GTASC)
	{
		return GTASC->GTPBatchRPCTryActivateAbility(InAbilityHandle, EndAbilityImmediately);
	}

	return false;
}

void UGTPGameplayAbility::ExternalEndAbility()
{
	check(CurrentActorInfo);

	bool bReplicateEndAbility = true;
	bool bWasCancelled = false;
	EndAbility(CurrentSpecHandle, CurrentActorInfo, CurrentActivationInfo, bReplicateEndAbility, bWasCancelled);
}

bool UGTPGameplayAbility::CanActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayTagContainer* SourceTags, const FGameplayTagContainer* TargetTags, OUT FGameplayTagContainer* OptionalRelevantTags) const
{

	return Super::CanActivateAbility(Handle, ActorInfo, SourceTags, TargetTags, OptionalRelevantTags);
}

bool UGTPGameplayAbility::CheckCost(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, OUT FGameplayTagContainer* OptionalRelevantTags) const
{
	return Super::CheckCost(Handle, ActorInfo, OptionalRelevantTags) && GTCheckCost(Handle, *ActorInfo);
}

bool UGTPGameplayAbility::GTCheckCost_Implementation(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo& ActorInfo) const
{
	return true;
}

void UGTPGameplayAbility::ApplyCost(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo) const
{
	GTApplyCost(Handle, *ActorInfo, ActivationInfo);
	Super::ApplyCost(Handle, ActorInfo, ActivationInfo);
}

UGameplayEffect* UGTPGameplayAbility::GTGetCooldownGameplayEffect() const
{
	return GetCooldownGameplayEffect();
}

UGameplayEffect* UGTPGameplayAbility::GTGetCostGameplayEffect() const
{
	return GetCostGameplayEffect();
}

bool UGTPGameplayAbility::GTIsBlockingOtherAbilities() const
{
	return IsBlockingOtherAbilities();
}

bool UGTPGameplayAbility::GTShouldActivateAbility(ENetRole Role) const
{
	return ShouldActivateAbility(Role);
}


