// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayCueManager.h"
#include "GSMGameplayAbilitiesSettings.h"
#include "GSMGameplayCueManager.generated.h"

class UGSMGameplayAbilitiesSettings;
/**
 * 
 */
UCLASS()
class GASMAGICIAN_API UGSMGameplayCueManager : public UGameplayCueManager
{
	GENERATED_BODY()
	
	virtual bool ShouldAsyncLoadRuntimeObjectLibraries() const override
	{
		const UGSMGameplayAbilitiesSettings* GSMSettings = GetDefault<UGSMGameplayAbilitiesSettings>();
		if(GSMSettings->bEnabledAutomaticLoadingOfGameplayCue)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	
	
};
