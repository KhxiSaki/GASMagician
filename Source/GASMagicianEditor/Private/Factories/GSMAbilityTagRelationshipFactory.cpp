// Copyright (c) CreationArtStudios 2024 Inc. All Rights Reserved.


#include "Factories/GSMAbilityTagRelationshipFactory.h"
#include "GSMAbilityTagRelationshipMapping.h"

UGSMAbilityTagRelationshipFactory::UGSMAbilityTagRelationshipFactory()
{
	SupportedClass = UGSMAbilityTagRelationshipMapping::StaticClass();
	bCreateNew = true;
}

UObject* UGSMAbilityTagRelationshipFactory::FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn)
{
	return NewObject<UGSMAbilityTagRelationshipMapping>(InParent, Class, Name, Flags, Context);
}