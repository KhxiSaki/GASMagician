// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "GameFramework/Pawn.h"
#include "AbilitySystemInterface.h"
#include "GameplayCueInterface.h"
#include "GameplayTagAssetInterface.h"
#include "GSMModularPawn.generated.h"

class UGSMAbilitySystemComponent;
class UObject;

/** Minimal class that supports extension by game feature plugins */
UCLASS(Blueprintable)
class GASMAGICIAN_API AGSMModularPawn : public APawn, public IAbilitySystemInterface, public IGameplayCueInterface, public IGameplayTagAssetInterface
{
	GENERATED_BODY()

public:
	AGSMModularPawn(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	//~ Begin AActor interface
	virtual void PreInitializeComponents() override;
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
	virtual void PossessedBy(AController* NewController) override;
	virtual void OnRep_PlayerState() override;
	//~ End AActor interface

	//~ Begin IAbilitySystemInterface overrides
	virtual class UAbilitySystemComponent* GetAbilitySystemComponent() const override;
	//~ End IAbilitySystemInterface overrides

	//~ Begin IGameplayTagAssetInterface overrides
	virtual void GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const override;
	virtual bool HasMatchingGameplayTag(FGameplayTag TagToCheck) const override;
	virtual bool HasAllMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const override;
	virtual bool HasAnyMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const override;
	//~ End IGameplayTagAssetInterface overrides

protected:
	UPROPERTY()
	TObjectPtr<UGSMAbilitySystemComponent> AbilitySystemComponent;
};
