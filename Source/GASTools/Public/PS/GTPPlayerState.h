// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "AbilitySystemInterface.h"
#include "GameplayEffectTypes.h"
#include "GTPPlayerState.generated.h"

/**
 * 
 */
UCLASS()
class GASTOOLS_API AGTPPlayerState : public APlayerState, public IAbilitySystemInterface
{
	GENERATED_BODY()

public:
	AGTPPlayerState();

	// Implement IAbilitySystemInterface
	class UAbilitySystemComponent* GetAbilitySystemComponent() const override;

	class UGTPAttributeSet* GetGTPAttributeSet() const;

protected:

	UPROPERTY()
		class UGTPAbilitySystemComponent* AbilitySystemComponent;

	UPROPERTY()
		class UGTPAttributeSet* GTPAttributeSet;
};
