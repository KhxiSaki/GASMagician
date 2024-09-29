// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h"
#include "GSMGameplayEffectContainer.h"
#include "GSMGameplayAbility.generated.h"

/**
 * EGSMAbilityActivationPolicy
 *
 *	Defines how an ability is meant to activate.
 */
UENUM(BlueprintType)
enum class EGSMAbilityActivationPolicy : uint8
{
	// Try to activate the ability when the input is triggered.
	OnInputTriggered,

	// Continually try to activate the ability while the input is active.
	WhileInputActive,

	// Try to activate the ability when an avatar is assigned.
	OnSpawn
};

class UGSMAbilityCost;
class UGSMAbilityCooldown;
/**
 * 
 */
UCLASS()
class GASMAGICIAN_API UGSMGameplayAbility : public UGameplayAbility
{
	GENERATED_BODY()
	
	
public:
	UGSMGameplayAbility(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	// Targeting
	
	/** Map of gameplay tags to gameplay effect containers */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "GASMagician")
	TMap<FGameplayTag, FGSMGameplayEffectContainer> EffectContainerMap;

	/** Make gameplay effect container spec to be applied later, using the passed in container */
	UFUNCTION(BlueprintCallable, Category = "GASMagician", meta=(AutoCreateRefTerm = "EventData"))
	virtual FGSMGameplayEffectContainerSpec MakeEffectContainerSpecFromContainer(const FGSMGameplayEffectContainer& Container, const FGameplayEventData& EventData, int32 OverrideGameplayLevel = -1);

	/** Search for and make a gameplay effect container spec to be applied later, from the EffectContainerMap */
	UFUNCTION(BlueprintCallable, Category = "GASMagician", meta = (AutoCreateRefTerm = "EventData"))
	virtual FGSMGameplayEffectContainerSpec MakeEffectContainerSpec(FGameplayTag ContainerTag, const FGameplayEventData& EventData, int32 OverrideGameplayLevel = -1);

	/** Applies a gameplay effect container spec that was previously created */
	UFUNCTION(BlueprintCallable, Category = "GASMagician")
	virtual TArray<FActiveGameplayEffectHandle> ApplyEffectContainerSpec(const FGSMGameplayEffectContainerSpec& ContainerSpec);

	/** Applies a gameplay effect container, by creating and then applying the spec */
	UFUNCTION(BlueprintCallable, Category = "GASMagician", meta = (AutoCreateRefTerm = "EventData"))
	virtual TArray<FActiveGameplayEffectHandle> ApplyEffectContainer(FGameplayTag ContainerTag, const FGameplayEventData& EventData, int32 OverrideGameplayLevel = -1);

	UFUNCTION(BlueprintCallable, Category = "GASMagician")
	FGameplayAbilityTargetDataHandle MakeGameplayAbilityTargetDataHandleFromActorArray(const TArray<AActor*> TargetActors);

	UFUNCTION(BlueprintCallable, Category = "GASMagician")
	FGameplayAbilityTargetDataHandle MakeGameplayAbilityTargetDataHandleFromHitResults(const TArray<FHitResult> HitResults);
	
	EGSMAbilityActivationPolicy GetActivationPolicy() const { return ActivationPolicy; }
	
	void TryActivateAbilityOnSpawn(const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilitySpec& Spec) const;
	virtual void OnPawnAvatarSet();
protected:
// Defines how this ability is meant to activate.
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "GASMagician|Ability Activation")
	EGSMAbilityActivationPolicy ActivationPolicy;

	// Additional costs that must be paid to activate this ability
	UPROPERTY(EditDefaultsOnly, Instanced, Category = "GASMagician|Costs")
	TArray<TObjectPtr<UGSMAbilityCost>> AdditionalCosts;

	// Additional costs that must be paid to activate this ability
	UPROPERTY(EditDefaultsOnly, Instanced, Category = "GASMagician|Cooldowns")
	TArray<TObjectPtr<UGSMAbilityCooldown>> AdditionalCooldowns;

	//~UGameplayAbility interface
	virtual void OnGiveAbility(const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilitySpec& Spec) override;
    virtual void OnRemoveAbility(const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilitySpec& Spec) override;
    virtual bool CheckCost(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, OUT FGameplayTagContainer* OptionalRelevantTags = nullptr) const override;
	virtual void ApplyCost(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo) const override;
	virtual bool CheckCooldown(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, FGameplayTagContainer* OptionalRelevantTags) const override;
	virtual void ApplyCooldown(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo) const override;
	virtual bool DoesAbilitySatisfyTagRequirements(const UAbilitySystemComponent& AbilitySystemComponent, const FGameplayTagContainer* SourceTags = nullptr, const FGameplayTagContainer* TargetTags = nullptr, OUT FGameplayTagContainer* OptionalRelevantTags = nullptr) const override;
	//~End of UGameplayAbility interface
	
	/** Called when this ability is granted to the ability system component. */
	UFUNCTION(BlueprintImplementableEvent, Category = "GASMagician", DisplayName = "OnAbilityAdded")
	void K2_OnAbilityAdded();

	/** Called when this ability is removed from the ability system component. */
	UFUNCTION(BlueprintImplementableEvent, Category = "GASMagician", DisplayName = "OnAbilityRemoved")
	void K2_OnAbilityRemoved();

	/** Called when the ability system is initialized with a pawn avatar. */
	UFUNCTION(BlueprintImplementableEvent, Category = "GASMagician", DisplayName = "OnPawnAvatarSet")
	void K2_OnPawnAvatarSet();
};
