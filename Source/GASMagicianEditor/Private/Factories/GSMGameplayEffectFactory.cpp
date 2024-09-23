// Copyright (c) CreationArtStudios 2024 Inc. All Rights Reserved.


#include "Factories/GSMGameplayEffectFactory.h"
#include "GameplayEffect.h"

UGSMGameplayEffectFactory::UGSMGameplayEffectFactory()
{
	SupportedClass = UGameplayEffect::StaticClass();
	bCreateNew = true;
}

UObject* UGSMGameplayEffectFactory::FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn)
{
	return NewObject<UGameplayEffect>(InParent, Class, Name, Flags, Context);
}