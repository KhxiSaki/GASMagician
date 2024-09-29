// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "GSMCommonUserWidget.generated.h"

class UAbilitySystemComponent;
/**
 * 
 */
UCLASS()
class GASMAGICIAN_API UGSMCommonUserWidget : public UCommonUserWidget
{
	GENERATED_BODY()
	
protected:

	virtual void NativeConstruct() override;
	virtual void NativeDestruct() override;
	
	
};
