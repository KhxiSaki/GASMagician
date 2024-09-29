// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/GSMCommonUserWidget.h"

#include "AbilitySystemComponent.h"
#include "AbilitySystemGlobals.h"

void UGSMCommonUserWidget::NativeConstruct()
{
	Super::NativeConstruct();
	if(UAbilitySystemComponent* ASC = UAbilitySystemGlobals::GetAbilitySystemComponentFromActor(GetOwningPlayerPawn()))
	{
		//ASC->AbilityActivatedCallbacks.Add(this, &UGSMCommonUserWidget::OnActivate);
		//ASC->AbilityFailedCallbacks.Add(this, &UGSMCommonUserWidget::OnDeactivate);
		//ASC->OnActiveGameplayEffectAddedDelegateToSelf.Add(this, &UGSMCommonUserWidget::OnGameplayEffectAdded);
		//ASC->OnAnyGameplayEffectRemovedDelegate().Add(this, &UGSMCommonUserWidget::OnAnyGameplayEffectRemoved);
	}
}

void UGSMCommonUserWidget::NativeDestruct()
{
	Super::NativeDestruct();
}
