// Copyright 2020 Dan Kestranek.


#include "AsyncTasks/GSMAsyncTaskEffectStackChanged.h"

UGSMAsyncTaskEffectStackChanged * UGSMAsyncTaskEffectStackChanged::ListenForGameplayEffectStackChange(UAbilitySystemComponent * AbilitySystemComponent, FGameplayTag InEffectGameplayTag)
{
	UGSMAsyncTaskEffectStackChanged* ListenForGameplayEffectStackChange = NewObject<UGSMAsyncTaskEffectStackChanged>();
	ListenForGameplayEffectStackChange->ASC = AbilitySystemComponent;
	ListenForGameplayEffectStackChange->EffectGameplayTag = InEffectGameplayTag;

	if (!IsValid(AbilitySystemComponent) || !InEffectGameplayTag.IsValid())
	{
		ListenForGameplayEffectStackChange->EndTask();
		return nullptr;
	}

	AbilitySystemComponent->OnActiveGameplayEffectAddedDelegateToSelf.AddUObject(ListenForGameplayEffectStackChange, &UGSMAsyncTaskEffectStackChanged::OnActiveGameplayEffectAddedCallback);
	AbilitySystemComponent->OnAnyGameplayEffectRemovedDelegate().AddUObject(ListenForGameplayEffectStackChange, &UGSMAsyncTaskEffectStackChanged::OnRemoveGameplayEffectCallback);

	return ListenForGameplayEffectStackChange;
}

void UGSMAsyncTaskEffectStackChanged::EndTask()
{
	if (IsValid(ASC))
	{
		ASC->OnActiveGameplayEffectAddedDelegateToSelf.RemoveAll(this);
		ASC->OnAnyGameplayEffectRemovedDelegate().RemoveAll(this);
		
		if(ActiveEffectHandle.IsValid())
		{
			ASC->OnGameplayEffectStackChangeDelegate(ActiveEffectHandle)->RemoveAll(this);
		}
	}

	SetReadyToDestroy();
	MarkAsGarbage();
}

void UGSMAsyncTaskEffectStackChanged::OnActiveGameplayEffectAddedCallback(UAbilitySystemComponent * Target, const FGameplayEffectSpec & SpecApplied, FActiveGameplayEffectHandle ActiveHandle)
{
	FGameplayTagContainer AssetTags;
	SpecApplied.GetAllAssetTags(AssetTags);

	FGameplayTagContainer GrantedTags;
	SpecApplied.GetAllGrantedTags(GrantedTags);

	if (AssetTags.HasTagExact(EffectGameplayTag) || GrantedTags.HasTagExact(EffectGameplayTag))
	{
		ASC->OnGameplayEffectStackChangeDelegate(ActiveHandle)->AddUObject(this, &UGSMAsyncTaskEffectStackChanged::GameplayEffectStackChanged);
		OnGameplayEffectStackChange.Broadcast(EffectGameplayTag, ActiveHandle, 1, 0);
		ActiveEffectHandle = ActiveHandle;
	}
}

void UGSMAsyncTaskEffectStackChanged::OnRemoveGameplayEffectCallback(const FActiveGameplayEffect & EffectRemoved)
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

void UGSMAsyncTaskEffectStackChanged::GameplayEffectStackChanged(FActiveGameplayEffectHandle EffectHandle, int32 NewStackCount, int32 PreviousStackCount)
{
	OnGameplayEffectStackChange.Broadcast(EffectGameplayTag, EffectHandle, NewStackCount, PreviousStackCount);
}
