// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemComponent.h"
#include "GSMAbilitySet.h"
#include "GSMAbilitySystemComponent.generated.h"

class UGameplayTagReponseTable;
class UGSMAbilityTagRelationshipMapping;
/**
 * 
 */
UCLASS()
class GASMAGICIAN_API UGSMAbilitySystemComponent : public UAbilitySystemComponent
{
	GENERATED_BODY()
	
	
public:
	UGSMAbilitySystemComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	
	//~ Begin UAbilitySystemComponent interface
	virtual void InitAbilityActorInfo(AActor* InOwnerActor, AActor* InAvatarActor) override;
	//~ End UAbilitySystemComponent interface

	//~ Begin UObject interface
	virtual void BeginDestroy() override;
	//~ End UObject interface

/** Gets the ability target data associated with the given ability handle and activation info */
	void GetAbilityTargetData(const FGameplayAbilitySpecHandle AbilityHandle, FGameplayAbilityActivationInfo ActivationInfo, FGameplayAbilityTargetDataHandle& OutTargetDataHandle);

/** Sets the current tag relationship mapping, if null it will clear it out */
	void SetTagRelationshipMapping(UGSMAbilityTagRelationshipMapping* NewMapping);
	
	/** Looks at ability tags and gathers additional required and blocking tags */
	void GetAdditionalActivationTagRequirements(const FGameplayTagContainer& AbilityTags, FGameplayTagContainer& OutActivationRequired, FGameplayTagContainer& OutActivationBlocked) const;

protected:

	void TryActivateAbilitiesOnSpawn();
	void GrantDefaultAbilitiesAndAttributes();

	UFUNCTION() // UFunction to be able to bind with dynamic delegate
	void OnPawnControllerChanged(APawn* Pawn, AController* NewController);
	virtual void ApplyAbilityBlockAndCancelTags(const FGameplayTagContainer& AbilityTags, UGameplayAbility* RequestingAbility, bool bEnableBlockTags, const FGameplayTagContainer& BlockTags, bool bExecuteCancelTags, const FGameplayTagContainer& CancelTags) override;

	// Gameplay abilities to grant when this ability set is granted.
	UPROPERTY(EditDefaultsOnly, Category = "GASMagician|Gameplay Abilities", meta=(TitleProperty=Ability))
	TArray<FGSMAbilitySet_GameplayAbility> GrantedGameplayAbilities;

	// Gameplay effects to grant when this ability set is granted.
	UPROPERTY(EditDefaultsOnly, Category = "GASMagician|Gameplay Effects", meta=(TitleProperty=GameplayEffect))
	TArray<FGSMAbilitySet_GameplayEffect> GrantedGameplayEffects;

	// Attribute sets to grant when this ability set is granted.
	UPROPERTY(EditDefaultsOnly, Category = "GASMagician|Attribute Sets", meta=(TitleProperty=AttributeSet))
	TArray<FGSMAbilitySet_AttributeSet> GrantedAttributes;

	UPROPERTY(EditDefaultsOnly, Category = "GASMagician|Ability Sets", meta=(TitleProperty=AbilitySet))
	TArray<TObjectPtr<UGSMAbilitySet>> GrantedAbilitySets;

	// If set, this table is used to look up tag relationships for activate and cancel
	UPROPERTY(EditDefaultsOnly, Category = "GASMagician|TagRelationship", meta=(TitleProperty=TagRelationship))
	TObjectPtr<UGSMAbilityTagRelationshipMapping> TagRelationshipMapping;

	UPROPERTY(EditDefaultsOnly, Category = "GASMagician|GameplayTags", meta=(TitleProperty= GameplayTags))
	FGameplayTagContainer CharacterGameplayTags;
	
	UPROPERTY(EditDefaultsOnly, Category = "GASMagician|GameplayTags", meta=(TitleProperty= GameplayTags))
	TArray<TObjectPtr<UGameplayTagReponseTable>> TagResponseTables;

	FGSMAbilitySet_GrantedHandles GrantedHandles;
	// Grants the ability set to the specified ability system component.
	// The returned handles can be used later to take away anything that was granted.
	void GiveToAbilitySystem(UGSMAbilitySystemComponent* InASC, FGSMAbilitySet_GrantedHandles* OutGrantedHandles, UObject* SourceObject = nullptr) const;
	
};
