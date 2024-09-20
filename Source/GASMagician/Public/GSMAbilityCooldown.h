// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameplayAbilitySpec.h"
#include "Abilities/GameplayAbility.h"
#include "GSMAbilityCooldown.generated.h"

class UGSMGameplayAbility;

/**
 * UGSMAbilityCooldown
 *
 * Base class for cooldowns that a GSMGameplayAbility has.
 */
UCLASS(DefaultToInstanced, EditInlineNew, Abstract, Blueprintable)
class GASMAGICIAN_API UGSMAbilityCooldown : public UObject
{
	GENERATED_BODY()

public:
	UGSMAbilityCooldown()
	{
	}

	/** Checks cooldown. returns true if we can be used again. False if not */
	virtual bool CheckCooldown(const UGSMGameplayAbility* Ability, const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, FGameplayTagContainer* OptionalRelevantTags) const
	{
		return true;
	}

	/** Applies CooldownGameplayEffect to the target */
	virtual void ApplyCooldown(const UGSMGameplayAbility* Ability, const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo)
	{
	}

	/** If true, this cost should only be applied if this ability hits successfully */
	bool ShouldOnlyApplyCooldownOnHit() const { return bOnlyApplyCooldownOnHit; }

protected:
	/** If true, this cost should only be applied if this ability hits successfully */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Costs)
	bool bOnlyApplyCooldownOnHit = false;
};
