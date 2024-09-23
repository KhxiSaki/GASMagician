// Copyright 2020 Dan Kestranek.


#include "AsyncTasks/GSMAsyncTaskGameplayTagAddedRemoved.h"

UGSMAsyncTaskGameplayTagAddedRemoved* UGSMAsyncTaskGameplayTagAddedRemoved::ListenForGameplayTagAddedOrRemoved(UAbilitySystemComponent * AbilitySystemComponent, FGameplayTagContainer InTags)
{
	UGSMAsyncTaskGameplayTagAddedRemoved* ListenForGameplayTagAddedRemoved = NewObject<UGSMAsyncTaskGameplayTagAddedRemoved>();
	ListenForGameplayTagAddedRemoved->ASC = AbilitySystemComponent;
	ListenForGameplayTagAddedRemoved->Tags = InTags;

	if (!IsValid(AbilitySystemComponent) || InTags.Num() < 1)
	{
		ListenForGameplayTagAddedRemoved->EndTask();
		return nullptr;
	}

	TArray<FGameplayTag> TagArray;
	InTags.GetGameplayTagArray(TagArray);
	
	for (FGameplayTag Tag : TagArray)
	{
		AbilitySystemComponent->RegisterGameplayTagEvent(Tag, EGameplayTagEventType::NewOrRemoved).AddUObject(ListenForGameplayTagAddedRemoved, &UGSMAsyncTaskGameplayTagAddedRemoved::TagChanged);
	}

	return ListenForGameplayTagAddedRemoved;
}

void UGSMAsyncTaskGameplayTagAddedRemoved::EndTask()
{
	if (IsValid(ASC))
	{
		TArray<FGameplayTag> TagArray;
		Tags.GetGameplayTagArray(TagArray);

		for (FGameplayTag Tag : TagArray)
		{
			ASC->RegisterGameplayTagEvent(Tag, EGameplayTagEventType::NewOrRemoved).RemoveAll(this);
		}
	}

	SetReadyToDestroy();
}

void UGSMAsyncTaskGameplayTagAddedRemoved::TagChanged(const FGameplayTag Tag, int32 NewCount)
{
	if (NewCount > 0)
	{
		OnTagAdded.Broadcast(Tag);
	}
	else
	{
		OnTagRemoved.Broadcast(Tag);
	}
}
