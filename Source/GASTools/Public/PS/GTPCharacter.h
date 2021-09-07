// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AbilitySystemInterface.h"
#include "GameplayTagContainer.h"
#include "GameplayEffectTypes.h"
#include "GTPCharacter.generated.h"

class UGameplayAbility;
class UGameplayEffect;
class UGTPAbilitySystemComponent;

UCLASS()
class GASTOOLS_API AGTPCharacter : public ACharacter, public IAbilitySystemInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AGTPCharacter(const class FObjectInitializer& ObjectInitializer);

	// Implement IAbilitySystemInterface
	virtual class UAbilitySystemComponent* GetAbilitySystemComponent() const override;

	UFUNCTION(BlueprintPure, BlueprintCallable)
	class UGTPAttributeSet* GetGTPAttributeSet() const;

	/**
 * Attempts to activate all abilities that match the specified tags
 * Returns true if it thinks it activated, but it may return false positives due to failure later in activation.
 * If bAllowRemoteActivation is true, it will remotely activate local/server abilities, if false it will only try to locally activate the ability
 */
	UFUNCTION(BlueprintCallable, Category = "Abilities")
		bool ActivateAbilitiesWithTags(FGameplayTagContainer AbilityTags, bool bAllowRemoteActivation = true);

	/** Returns a list of active abilities matching the specified tags. This only returns if the ability is currently running */
	UFUNCTION(BlueprintCallable, Category = "Abilities")
		void GetActiveAbilitiesWithTags(FGameplayTagContainer AbilityTags, TArray<UGTPGameplayAbility*>& ActiveAbilities);

	/** Returns total time and remaining time for cooldown tags. Returns false if no active cooldowns found */
	UFUNCTION(BlueprintCallable, Category = "Abilities")
		bool GetCooldownRemainingForTag(FGameplayTagContainer CooldownTags, float& TimeRemaining, float& CooldownDuration);

	UFUNCTION(BlueprintCallable, Category = Combat)
		void GTPGrantAbility(TSubclassOf<class UGameplayAbility> NewAbility);

	UFUNCTION(BlueprintCallable, Category = Combat)
		void GTPRemoveAbility(TSubclassOf<class UGameplayAbility> Ability);

/* Attribute */

	//Health Change
	void OnPSHealthChange(const FOnAttributeChangeData& Data);
	UFUNCTION(BlueprintImplementableEvent)
		void HealthChanged(float OldValue, float NewValue);

	//Energy Change
	void OnPSEnergyChange(const FOnAttributeChangeData& Data);
	UFUNCTION(BlueprintImplementableEvent)
		void EnergyChanged(float OldValue, float NewValue);

	//Mana Change
	void OnPSManaChange(const FOnAttributeChangeData& Data);
	UFUNCTION(BlueprintImplementableEvent)
		void ManaChanged(float OldValue, float NewValue);

	UFUNCTION(BlueprintImplementableEvent, Category = "Damage")
		void CalculatePSUpdatedDamage(float OriginalDamage, const UGTPAttributeSet* SourceAttributes, FGameplayTagContainer EffectTags, float& NewDamage, bool& IsCritical);

	void SetupAttributeChangeDelegates();

	UFUNCTION(BlueprintImplementableEvent, Category = Combat)
		void OnPSTakeDamage(AGTPCharacter* WhoAttackedMe, float DamageAmount, bool IsCritical);
	UFUNCTION(BlueprintImplementableEvent, Category = Combat)
		void OnPSInflictDamage(AGTPCharacter* WhoWasDamaged, float DamageAmount, bool IsCritical);

/* Attribute */
protected:
	// Reference to the ASC. It will live on the PlayerState or here if the character doesn't have a PlayerState.
	UPROPERTY()
		class UGTPAbilitySystemComponent* AbilitySystemComponent;

	// Reference to the AttributeSetBase. It will live on the PlayerState or here if the character doesn't have a PlayerState.
	UPROPERTY()
		class UGTPAttributeSet* GTPAttributeSet;

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	// Only called on the Server. Calls before Server's AcknowledgePossession.
	virtual void PossessedBy(AController* NewController) override;

	// Client only
	virtual void OnRep_PlayerState() override;
	virtual void OnRep_Controller() override;
	virtual void PostInitializeComponents() override;
};
