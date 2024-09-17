// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemGlobals.h"
#include "GSMAbilitySystemGlobals.generated.h"

/**
 * 
 */
UCLASS()
class GASMAGICIAN_API UGSMAbilitySystemGlobals : public UAbilitySystemGlobals
{
	GENERATED_BODY()
	
public:
	static UGSMAbilitySystemGlobals& GSMGet()
	{
		return dynamic_cast<UGSMAbilitySystemGlobals&>(Get());
	}
	/** Should allocate a project specific GameplayEffectContext struct. Caller is responsible for deallocation */
	virtual FGameplayEffectContext* AllocGameplayEffectContext() const override;
	
	
};
