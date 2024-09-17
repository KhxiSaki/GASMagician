// Fill out your copyright notice in the Description page of Project Settings.


#include "GSMAbilitySystemGlobals.h"

#include "GSMGameplayEffectTypes.h"


FGameplayEffectContext* UGSMAbilitySystemGlobals::AllocGameplayEffectContext() const
{
	return new FGSMGameplayEffectContext();
}

