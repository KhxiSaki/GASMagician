// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Animation/AnimInstance.h"
#include "GameplayEffectTypes.h" // for FGameplayTagBlueprintPropertyMap
#include "UObject/UObjectGlobals.h"

#include "GSMAnimInstance.generated.h"

class UAbilitySystemComponent;
class UObject;

UCLASS(Config = Game)
class UGSMAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

public:
	//~ Begin UAnimInstance interface
	virtual void NativeInitializeAnimation() override;
	//~ End UAnimInstance interface

	void InitializeWithAbilitySystem(UAbilitySystemComponent* AbilityComponent);

	UFUNCTION(BlueprintImplementableEvent, Category="GASMagician", DisplayName = "Initialize with Ability System (GAS Magician)")
	void ReceiveAbilitySystem(UAbilitySystemComponent* AbilitySystem);

protected:
	UPROPERTY(EditDefaultsOnly, Category="GASMagician")
	FGameplayTagBlueprintPropertyMap GameplayTagPropertyMap;

#if WITH_EDITOR
	virtual EDataValidationResult IsDataValid(class FDataValidationContext& Context) const override;
#endif // WITH_EDITOR
};
