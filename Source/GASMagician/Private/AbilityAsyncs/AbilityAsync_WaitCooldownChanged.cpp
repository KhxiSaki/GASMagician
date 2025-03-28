// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilityAsyncs/AbilityAsync_WaitCooldownChanged.h"

#include "AbilitySystemComponent.h"

UAbilityAsync_WaitCooldownChanged * UAbilityAsync_WaitCooldownChanged::WaitForCooldownChange(AActor* TargetActor, FGameplayTagContainer InCooldownTags, bool InUseServerCooldown)
{
	UAbilityAsync_WaitCooldownChanged* MyObj = NewObject<UAbilityAsync_WaitCooldownChanged>();
	MyObj->SetAbilityActor(TargetActor);
	MyObj->CooldownTags = InCooldownTags;
	MyObj->UseServerCooldown = InUseServerCooldown;

	if (InCooldownTags.Num() < 1)
	{
		MyObj->EndAction();
		return nullptr;
	}
	
	return MyObj;
}

void UAbilityAsync_WaitCooldownChanged::Activate()
{
	Super::Activate();
	if(UAbilitySystemComponent* ASC = GetAbilitySystemComponent())
	{
		ASC->OnActiveGameplayEffectAddedDelegateToSelf.AddUObject(this, &UAbilityAsync_WaitCooldownChanged::OnActiveGameplayEffectAddedCallback);
		TArray<FGameplayTag> CooldownTagArray;
		CooldownTags.GetGameplayTagArray(CooldownTagArray);
		for (FGameplayTag CooldownTag : CooldownTagArray)
		{
			ASC->RegisterGameplayTagEvent(CooldownTag, EGameplayTagEventType::NewOrRemoved).AddUObject(this, &UAbilityAsync_WaitCooldownChanged::CooldownTagChanged);
		}
	}
}

void UAbilityAsync_WaitCooldownChanged::EndAction()
{
	if(UAbilitySystemComponent* ASC = GetAbilitySystemComponent())
	{
		ASC->OnActiveGameplayEffectAddedDelegateToSelf.RemoveAll(this);

		TArray<FGameplayTag> CooldownTagArray;
		CooldownTags.GetGameplayTagArray(CooldownTagArray);

		for (FGameplayTag CooldownTag : CooldownTagArray)
		{
			ASC->RegisterGameplayTagEvent(CooldownTag, EGameplayTagEventType::NewOrRemoved).RemoveAll(this);
		}
	}
}

void UAbilityAsync_WaitCooldownChanged::OnActiveGameplayEffectAddedCallback(UAbilitySystemComponent * Target, const FGameplayEffectSpec & SpecApplied, FActiveGameplayEffectHandle ActiveHandle)
{
	FGameplayTagContainer AssetTags;
	SpecApplied.GetAllAssetTags(AssetTags);
	
	FGameplayTagContainer GrantedTags;
	SpecApplied.GetAllGrantedTags(GrantedTags);

	TArray<FGameplayTag> CooldownTagArray;
	CooldownTags.GetGameplayTagArray(CooldownTagArray);
	if(UAbilitySystemComponent* ASC = GetAbilitySystemComponent())
	{
		for (FGameplayTag CooldownTag : CooldownTagArray)
		{
			if (AssetTags.HasTagExact(CooldownTag) || GrantedTags.HasTagExact(CooldownTag))
			{
				float TimeRemaining = 0.0f;
				float Duration = 0.0f;
				// Expecting cooldown tag to always be first tag
				FGameplayTagContainer CooldownTagContainer(GrantedTags.GetByIndex(0));
				GetCooldownRemainingForTag(CooldownTagContainer, TimeRemaining, Duration);

				if (ASC->GetOwnerRole() == ROLE_Authority)
				{
					// Player is Server
					OnCooldownBegin.Broadcast(CooldownTag, TimeRemaining, Duration);
				}
				else if (!UseServerCooldown && SpecApplied.GetContext().GetAbilityInstance_NotReplicated())
				{
					// Client using predicted cooldown
					OnCooldownBegin.Broadcast(CooldownTag, TimeRemaining, Duration);
				}
				else if (UseServerCooldown && SpecApplied.GetContext().GetAbilityInstance_NotReplicated() == nullptr)
				{
					// Client using Server's cooldown. This is Server's corrective cooldown GE.
					OnCooldownBegin.Broadcast(CooldownTag, TimeRemaining, Duration);
				}
				else if (UseServerCooldown && SpecApplied.GetContext().GetAbilityInstance_NotReplicated())
				{
					// Client using Server's cooldown but this is predicted cooldown GE.
					// This can be useful to gray out abilities until Server's cooldown comes in.
					OnCooldownBegin.Broadcast(CooldownTag, -1.0f, -1.0f);
				}
			}
		}
	}
}

void UAbilityAsync_WaitCooldownChanged::CooldownTagChanged(const FGameplayTag CooldownTag, int32 NewCount)
{
	if (NewCount == 0)
	{
		OnCooldownEnd.Broadcast(CooldownTag, -1.0f, -1.0f);
	}
}

bool UAbilityAsync_WaitCooldownChanged::GetCooldownRemainingForTag(FGameplayTagContainer InCooldownTags, float & TimeRemaining, float & CooldownDuration)
{
	if(UAbilitySystemComponent* ASC = GetAbilitySystemComponent())
	{
		if (CooldownTags.Num() > 0)
		{
			TimeRemaining = 0.f;
			CooldownDuration = 0.f;

			FGameplayEffectQuery const Query = FGameplayEffectQuery::MakeQuery_MatchAnyOwningTags(InCooldownTags);
			TArray< TPair<float, float> > DurationAndTimeRemaining = ASC->GetActiveEffectsTimeRemainingAndDuration(Query);
			if (DurationAndTimeRemaining.Num() > 0)
			{
				int32 BestIdx = 0;
				float LongestTime = DurationAndTimeRemaining[0].Key;
				for (int32 Idx = 1; Idx < DurationAndTimeRemaining.Num(); ++Idx)
				{
					if (DurationAndTimeRemaining[Idx].Key > LongestTime)
					{
						LongestTime = DurationAndTimeRemaining[Idx].Key;
						BestIdx = Idx;
					}
				}

				TimeRemaining = DurationAndTimeRemaining[BestIdx].Key;
				CooldownDuration = DurationAndTimeRemaining[BestIdx].Value;

				return true;
			}
		}
	}
	return false;
}


