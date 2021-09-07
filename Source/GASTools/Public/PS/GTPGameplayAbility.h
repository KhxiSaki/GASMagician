// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h"
#include "PS/GTPAbilityTypes.h"
#include "GTPGameplayAbility.generated.h"

/**
 * 
 */
UCLASS()
class GASTOOLS_API UGTPGameplayAbility : public UGameplayAbility
{
	GENERATED_BODY()
public:
	// Constructor and overrides
	UGTPGameplayAbility();

	/** Map of gameplay tags to gameplay effect containers */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = GameplayEffects)
		TMap<FGameplayTag, FGTPGameplayEffectContainer> EffectContainerMap;

	/** Make gameplay effect container spec to be applied later, using the passed in container */
	UFUNCTION(BlueprintCallable, Category = Ability, meta = (AutoCreateRefTerm = "EventData"))
		virtual FGTPGameplayEffectContainerSpec GTMakeEffectContainerSpecFromContainer(const FGTPGameplayEffectContainer& Container, const FGameplayEventData& EventData, int32 OverrideGameplayLevel = -1);

	/** Search for and make a gameplay effect container spec to be applied later, from the EffectContainerMap */
	UFUNCTION(BlueprintCallable, Category = Ability, meta = (AutoCreateRefTerm = "EventData"))
		virtual FGTPGameplayEffectContainerSpec GTMakeEffectContainerSpec(FGameplayTag ContainerTag, const FGameplayEventData& EventData, int32 OverrideGameplayLevel = -1);

	/** Applies a gameplay effect container spec that was previously created */
	UFUNCTION(BlueprintCallable, Category = Ability)
		virtual TArray<FActiveGameplayEffectHandle> GTApplyEffectContainerSpec(const FGTPGameplayEffectContainerSpec& ContainerSpec);

	/** Applies a gameplay effect container, by creating and then applying the spec */
	UFUNCTION(BlueprintCallable, Category = Ability, meta = (AutoCreateRefTerm = "EventData"))
		virtual TArray<FActiveGameplayEffectHandle> GTApplyEffectContainer(FGameplayTag ContainerTag, const FGameplayEventData& EventData, int32 OverrideGameplayLevel = -1);

	// Expose GetSourceObject to Blueprint. Retrieves the SourceObject associated with this ability. Callable on non instanced abilities.
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Ability", meta = (DisplayName = "GTGetSourceObject"))
		UObject* GTGetSourceObject(FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo& ActorInfo) const;

	// Attempts to activate the given ability handle and batch all RPCs into one. This will only batch all RPCs that happen
	// in one frame. Best case scenario we batch ActivateAbility, SendTargetData, and EndAbility into one RPC instead of three.
	UFUNCTION(BlueprintCallable, Category = "Ability")
		virtual bool GTBatchRPCTryActivateAbility(FGameplayAbilitySpecHandle InAbilityHandle, bool EndAbilityImmediately);

	// Same as calling K2_EndAbility. Meant for use with batching system to end the ability externally.
	virtual void ExternalEndAbility();
	virtual bool CanActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayTagContainer* SourceTags = nullptr, const FGameplayTagContainer* TargetTags = nullptr, OUT FGameplayTagContainer* OptionalRelevantTags = nullptr) const override;

	virtual bool CheckCost(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, OUT FGameplayTagContainer* OptionalRelevantTags = nullptr) const override;
	// Allows C++ and Blueprint abilities to override how cost is checked in case they don't use a GE like weapon ammo
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Ability")
		bool GTCheckCost(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo& ActorInfo) const;
	virtual bool GTCheckCost_Implementation(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo& ActorInfo) const;

	virtual void ApplyCost(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo) const override;
	// Allows C++ and Blueprint abilities to override how cost is applied in case they don't use a GE like weapon ammo
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Ability")
		void GTApplyCost(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo& ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo) const;
	virtual void GTApplyCost_Implementation(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo& ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo) const {};

	/** Returns the gameplay effect used to determine cooldown */
	UFUNCTION(BlueprintPure, Category = "Ability")
		UGameplayEffect* GTGetCooldownGameplayEffect() const;

	/** Returns the gameplay effect used to apply cost */
	UFUNCTION(BlueprintPure, Category = "Ability")
		UGameplayEffect* GTGetCostGameplayEffect() const;

	/** Returns true if this ability is blocking other abilities */
	UFUNCTION(BlueprintPure, Category = "Ability")
		bool GTIsBlockingOtherAbilities() const;

	/** Returns true if an an ability should be activated */
	UFUNCTION(BlueprintCallable, Category = "Ability")
		bool GTShouldActivateAbility(ENetRole Role) const;

};
