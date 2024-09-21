// Copyright (c) CreationArtStudios 2024 Inc. All Rights Reserved.


#include "Factories/GSMAbilitySetFactory.h"
#include "GSMAbilitySet.h"

UGSMAbilitySetFactory::UGSMAbilitySetFactory()
{
	SupportedClass = UGSMAbilitySet::StaticClass();
	bCreateNew = true;
}

UObject* UGSMAbilitySetFactory::FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn)
{
	return NewObject<UGSMAbilitySet>(InParent, Class, Name, Flags, Context);
}