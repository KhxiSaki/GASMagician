// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "AbilitySystemInterface.h"
#include "GameFramework/Character.h"
#include "GSMModularCharacter.generated.h"

class UGSMAbilitySystemComponent;
class UObject;

/** Minimal class that supports extension by game feature plugins */
UCLASS(Blueprintable)
class GASMAGICIAN_API AGSMModularCharacter : public ACharacter, public IAbilitySystemInterface
{
	GENERATED_BODY()

public:
	AGSMModularCharacter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	// Implement IAbilitySystemInterface
	virtual class UAbilitySystemComponent* GetAbilitySystemComponent() const override;
	
	//~ Begin AActor Interface
	virtual void PreInitializeComponents() override;
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
	// Only called on the Server. Calls before Server's AcknowledgePossession.
	virtual void PossessedBy(AController* NewController) override;
	virtual void OnRep_PlayerState() override;
	virtual void OnRep_Controller() override;
	//~ End AActor Interface

	UFUNCTION(BlueprintImplementableEvent, Category = "Damage")
	void CalculateUpdatedDamage(float OriginalDamage, const UGSMAttributeSet* SourceAttributes, FGameplayTagContainer EffectTags, float& NewDamage);

	UFUNCTION(BlueprintImplementableEvent, Category = Combat)
	void OnDeath();
	UFUNCTION(BlueprintImplementableEvent, Category = Combat)
	void OnTakeDamage(AGSMModularCharacter* WhoAttackedMe, float DamageAmount);
	UFUNCTION(BlueprintImplementableEvent, Category = Combat)
	void OnInflictDamage(AGSMModularCharacter* WhoWasDamaged, float DamageAmount);

protected:

	UPROPERTY()
	class UGSMAbilitySystemComponent* AbilitySystemComponent;
};
