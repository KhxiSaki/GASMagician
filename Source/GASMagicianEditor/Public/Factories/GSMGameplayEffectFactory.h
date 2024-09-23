// Copyright (c) CreationArtStudios 2024 Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Factories/Factory.h"
#include "GSMGameplayEffectFactory.generated.h"

/**
 * 
 */
UCLASS()
class GASMAGICIANEDITOR_API UGSMGameplayEffectFactory : public UFactory
{
	GENERATED_BODY()
	
public:
	UGSMGameplayEffectFactory();
	UObject* FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn);
};
