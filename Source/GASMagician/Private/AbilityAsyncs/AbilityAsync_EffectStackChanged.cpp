// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilityAsyncs/AbilityAsync_EffectStackChanged.h"

#include "AbilitySystemComponent.h"


UAbilityAsync_EffectStackChanged* UAbilityAsync_EffectStackChanged::WaitForGameplayEffectStackChange(AActor* TargetActor,
                                                                                                     FGameplayTag EffectGameplayTag)
{
	UAbilityAsync_EffectStackChanged* MyObj = NewObject<UAbilityAsync_EffectStackChanged>();
	MyObj->SetAbilityActor(TargetActor);
	MyObj->EffectGameplayTag = EffectGameplayTag;

	if (!EffectGameplayTag.IsValid())
	{
		MyObj->EndAction();
		return nullptr;
	}
	
	return MyObj;
}

void UAbilityAsync_EffectStackChanged::Activate()
{
	if(UAbilitySystemComponent* ASC = GetAbilitySystemComponent())
	{
		ASC->OnActiveGameplayEffectAddedDelegateToSelf.AddUObject(this, &UAbilityAsync_EffectStackChanged::OnActiveGameplayEffectAddedCallback);
		ASC->OnAnyGameplayEffectRemovedDelegate().AddUObject(this, &UAbilityAsync_EffectStackChanged::OnRemoveGameplayEffectCallback);
	}
}

void UAbilityAsync_EffectStackChanged::EndAction()
{
	Super::EndAction();
	
	if(UAbilitySystemComponent* ASC = GetAbilitySystemComponent())
	{
		ASC->OnActiveGameplayEffectAddedDelegateToSelf.RemoveAll(this);
		ASC->OnAnyGameplayEffectRemovedDelegate().RemoveAll(this);
		
		if(ActiveEffectHandle.IsValid())
		{
			ASC->OnGameplayEffectStackChangeDelegate(ActiveEffectHandle)->RemoveAll(this);
		}
	}
}


void UAbilityAsync_EffectStackChanged::OnActiveGameplayEffectAddedCallback(UAbilitySystemComponent * Target, const FGameplayEffectSpec & SpecApplied, FActiveGameplayEffectHandle ActiveHandle)
{
	FGameplayTagContainer AssetTags;
	SpecApplied.GetAllAssetTags(AssetTags);

	FGameplayTagContainer GrantedTags;
	SpecApplied.GetAllGrantedTags(GrantedTags);
	if(UAbilitySystemComponent* ASC = GetAbilitySystemComponent())
	{
		if (AssetTags.HasTagExact(EffectGameplayTag) || GrantedTags.HasTagExact(EffectGameplayTag))
		{
			ASC->OnGameplayEffectStackChangeDelegate(ActiveHandle)->AddUObject(this, &UAbilityAsync_EffectStackChanged::GameplayEffectStackChanged);
			OnGameplayEffectStackChange.Broadcast(EffectGameplayTag, ActiveHandle, 1, 0);
			ActiveEffectHandle = ActiveHandle;
		}
	}
}

void UAbilityAsync_EffectStackChanged::OnRemoveGameplayEffectCallback(const FActiveGameplayEffect & EffectRemoved)
{
	FGameplayTagContainer AssetTags;
	EffectRemoved.Spec.GetAllAssetTags(AssetTags);

	FGameplayTagContainer GrantedTags;
	EffectRemoved.Spec.GetAllGrantedTags(GrantedTags);

	if (AssetTags.HasTagExact(EffectGameplayTag) || GrantedTags.HasTagExact(EffectGameplayTag))
	{
		OnGameplayEffectStackChange.Broadcast(EffectGameplayTag, EffectRemoved.Handle, 0, 1);
	}
}

void UAbilityAsync_EffectStackChanged::GameplayEffectStackChanged(FActiveGameplayEffectHandle EffectHandle, int32 NewStackCount, int32 PreviousStackCount)
{
	OnGameplayEffectStackChange.Broadcast(EffectGameplayTag, EffectHandle, NewStackCount, PreviousStackCount);
}