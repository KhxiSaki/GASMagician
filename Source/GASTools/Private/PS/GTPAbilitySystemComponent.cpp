// Fill out your copyright notice in the Description page of Project Settings.


#include "PS/GTPAbilitySystemComponent.h"
#include "PS/GTPGameplayAbility.h"
#include "AbilitySystemGlobals.h"
#include "GameplayCueManager.h"

UGTPAbilitySystemComponent::UGTPAbilitySystemComponent()
{

}

void UGTPAbilitySystemComponent::GetActiveAbilitiesWithTags(const FGameplayTagContainer& GameplayTagContainer, TArray<UGTPGameplayAbility*>& ActiveAbilities)
{
	TArray<FGameplayAbilitySpec*> AbilitiesToActivate;
	GetActivatableGameplayAbilitySpecsByAllMatchingTags(GameplayTagContainer, AbilitiesToActivate, false);

	// Iterate the list of all ability specs
	for (FGameplayAbilitySpec* Spec : AbilitiesToActivate)
	{
		// Iterate all instances on this ability spec
		TArray<UGameplayAbility*> AbilityInstances = Spec->GetAbilityInstances();

		for (UGameplayAbility* ActiveAbility : AbilityInstances)
		{
			ActiveAbilities.Add(Cast<UGTPGameplayAbility>(ActiveAbility));
		}
	}
}

UGTPAbilitySystemComponent* UGTPAbilitySystemComponent::GetAbilitySystemComponentFromActor(const AActor* Actor, bool LookForComponent)
{
	return Cast<UGTPAbilitySystemComponent>(UAbilitySystemGlobals::GetAbilitySystemComponentFromActor(Actor, LookForComponent));
}

int32 UGTPAbilitySystemComponent::GTPGetTagCount(FGameplayTag TagToCheck) const
{
	return GetTagCount(TagToCheck);
}

FGameplayAbilitySpecHandle UGTPAbilitySystemComponent::GTPFindAbilitySpecHandleForClass(TSubclassOf<UGameplayAbility> AbilityClass, UObject* OptionalSourceObject)
{
	ABILITYLIST_SCOPE_LOCK();
	for (FGameplayAbilitySpec& Spec : ActivatableAbilities.Items)
	{
		TSubclassOf<UGameplayAbility> SpecAbilityClass = Spec.Ability->GetClass();
		if (SpecAbilityClass == AbilityClass)
		{
			if (!OptionalSourceObject || (OptionalSourceObject && Spec.SourceObject == OptionalSourceObject))
			{
				return Spec.Handle;
			}
		}
	}

	return FGameplayAbilitySpecHandle();
}

void UGTPAbilitySystemComponent::GTPAddLooseGameplayTag(const FGameplayTag& GameplayTag, int32 Count)
{
	AddLooseGameplayTag(GameplayTag, Count);
}

void UGTPAbilitySystemComponent::GTPAddLooseGameplayTags(const FGameplayTagContainer& GameplayTags, int32 Count)
{
	AddLooseGameplayTags(GameplayTags, Count);
}

void UGTPAbilitySystemComponent::GTPRemoveLooseGameplayTag(const FGameplayTag& GameplayTag, int32 Count)
{
	RemoveLooseGameplayTag(GameplayTag, Count);
}

void UGTPAbilitySystemComponent::GTPRemoveLooseGameplayTags(const FGameplayTagContainer& GameplayTags, int32 Count)
{
	RemoveLooseGameplayTags(GameplayTags, Count);
}

void UGTPAbilitySystemComponent::GTPSetLooseGameplayTagCount(const FGameplayTag& GameplayTag, int32 NewCount)
{
	SetLooseGameplayTagCount(GameplayTag, NewCount);
}

int32 UGTPAbilitySystemComponent::GTPGetAggregatedStackCount(const FGameplayEffectQuery& Query)
{
	return GetAggregatedStackCount(Query);
}

float UGTPAbilitySystemComponent::GTPGetGameplayEffectDuration(FActiveGameplayEffectHandle Handle) const
{
	return GetGameplayEffectDuration(Handle);
}

void UGTPAbilitySystemComponent::GTPGetGameplayEffectStartTimeAndDuration(FActiveGameplayEffectHandle Handle, float& StartEffectTime, float& Duration) const
{
	return GetGameplayEffectStartTimeAndDuration(Handle, StartEffectTime, Duration);
}

int32 UGTPAbilitySystemComponent::GTPGetCurrentStackCountFromActiveGameplayEffectHandle(FActiveGameplayEffectHandle Handle) const
{
	return GetCurrentStackCount(Handle);
}

int32 UGTPAbilitySystemComponent::GTPGetCurrentStackCountFromGameplayAbilitySpecHandle(FGameplayAbilitySpecHandle Handle) const
{
	return GetCurrentStackCount(Handle);
}

FActiveGameplayEffectHandle UGTPAbilitySystemComponent::GTPFindActiveGameplayEffectHandle(FGameplayAbilitySpecHandle Handle) const
{
	return FindActiveGameplayEffectHandle(Handle);
}

bool UGTPAbilitySystemComponent::GTPHasMatchingGameplayTag(FGameplayTag TagToCheck) const
{
	return GameplayTagCountContainer.HasMatchingGameplayTag(TagToCheck);
}

bool UGTPAbilitySystemComponent::GTPHasAllMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const
{
	return GameplayTagCountContainer.HasAllMatchingGameplayTags(TagContainer);
}

bool UGTPAbilitySystemComponent::GTPHasAnyMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const
{
	return GameplayTagCountContainer.HasAnyMatchingGameplayTags(TagContainer);
}

void UGTPAbilitySystemComponent::GTPGetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const
{
	TagContainer.AppendTags(GameplayTagCountContainer.GetExplicitGameplayTags());
}

void UGTPAbilitySystemComponent::GTPSetTagMapCount(const FGameplayTag& Tag, int32 NewCount)
{
	SetTagMapCount(Tag, NewCount);
}

void UGTPAbilitySystemComponent::GTPUpdateTagMapFromTag(const FGameplayTag& BaseTag, int32 CountDelta)
{
	UpdateTagMap(BaseTag, CountDelta);
}

void UGTPAbilitySystemComponent::GTPUpdateTagMapFromTagContainer(const FGameplayTagContainer& Container, int32 CountDelta)
{
	UpdateTagMap(Container, CountDelta);
}

void UGTPAbilitySystemComponent::GTPGetBlockedAbilityTags(FGameplayTagContainer& TagContainer) const
{
	GetBlockedAbilityTags(TagContainer);
}

bool UGTPAbilitySystemComponent::GTPBatchRPCTryActivateAbility(FGameplayAbilitySpecHandle InAbilityHandle, bool EndAbilityImmediately)
{
	bool AbilityActivated = false;
	if (InAbilityHandle.IsValid())
	{
		FScopedServerAbilityRPCBatcher GSAbilityRPCBatcher(this, InAbilityHandle);
		AbilityActivated = TryActivateAbility(InAbilityHandle, true);

		if (EndAbilityImmediately)
		{
			FGameplayAbilitySpec* AbilitySpec = FindAbilitySpecFromHandle(InAbilityHandle);
			if (AbilitySpec)
			{
				UGTPGameplayAbility* GTAbility = Cast<UGTPGameplayAbility>(AbilitySpec->GetPrimaryInstance());
				GTAbility->ExternalEndAbility();
			}
		}

		return AbilityActivated;
	}

	return AbilityActivated;
}

void UGTPAbilitySystemComponent::GTPExecuteGameplayCueLocal(const FGameplayTag GameplayCueTag, const FGameplayCueParameters& GameplayCueParameters)
{
	UAbilitySystemGlobals::Get().GetGameplayCueManager()->HandleGameplayCue(GetOwner(), GameplayCueTag, EGameplayCueEvent::Type::Executed, GameplayCueParameters);
}

void UGTPAbilitySystemComponent::GTPAddGameplayCueLocal(const FGameplayTag GameplayCueTag, const FGameplayCueParameters& GameplayCueParameters)
{
	UAbilitySystemGlobals::Get().GetGameplayCueManager()->HandleGameplayCue(GetOwner(), GameplayCueTag, EGameplayCueEvent::Type::OnActive, GameplayCueParameters);
	UAbilitySystemGlobals::Get().GetGameplayCueManager()->HandleGameplayCue(GetOwner(), GameplayCueTag, EGameplayCueEvent::Type::WhileActive, GameplayCueParameters);
}

void UGTPAbilitySystemComponent::GTPAddGameplayCue_MinimalReplication(const FGameplayTag GameplayCueTag, FGameplayEffectContextHandle EffectContext)
{
	AddGameplayCue_MinimalReplication(GameplayCueTag, EffectContext);
}

void UGTPAbilitySystemComponent::GTPRemoveGameplayCue_MinimalReplication(const FGameplayTag GameplayCueTag)
{
	RemoveGameplayCue_MinimalReplication(GameplayCueTag);
}

void UGTPAbilitySystemComponent::GTPRemoveAllGameplayCues()
{
	RemoveAllGameplayCues();
}

void UGTPAbilitySystemComponent::GTPRemoveGameplayCueLocal(const FGameplayTag GameplayCueTag, const FGameplayCueParameters& GameplayCueParameters)
{
	UAbilitySystemGlobals::Get().GetGameplayCueManager()->HandleGameplayCue(GetOwner(), GameplayCueTag, EGameplayCueEvent::Type::Removed, GameplayCueParameters);
}

void UGTPAbilitySystemComponent::GTPApplyAbilityBlockAndCancelTags(const FGameplayTagContainer& AbilityTags, UGameplayAbility* RequestingAbility, bool bEnableBlockTags, const FGameplayTagContainer& BlockTags, bool bExecuteCancelTags, const FGameplayTagContainer& CancelTags)
{
	ApplyAbilityBlockAndCancelTags(AbilityTags, RequestingAbility, bEnableBlockTags, BlockTags, bExecuteCancelTags, CancelTags);
}

bool UGTPAbilitySystemComponent::GTPAreAbilityTagsBlocked(const FGameplayTagContainer& Tags) const
{
	return AreAbilityTagsBlocked(Tags);
}

void UGTPAbilitySystemComponent::GTPBlockAbilitiesWithTags(const FGameplayTagContainer& Tags)
{
	BlockAbilitiesWithTags(Tags);
}

void UGTPAbilitySystemComponent::GTPUnBlockAbilitiesWithTags(const FGameplayTagContainer& Tags)
{
	UnBlockAbilitiesWithTags(Tags);
}

void UGTPAbilitySystemComponent::GTPBlockAbilityByInputID(int32 InputID)
{
	BlockAbilityByInputID(InputID);
}

void UGTPAbilitySystemComponent::GTPUnBlockAbilityByInputID(int32 InputID)
{
	UnBlockAbilityByInputID(InputID);
}

FGameplayAbilitySpec UGTPAbilitySystemComponent::GTPFindAbilitySpecFromHandle(FGameplayAbilitySpecHandle Handle)
{
	ABILITYLIST_SCOPE_LOCK();

	for (FGameplayAbilitySpec& Spec : ActivatableAbilities.Items)
	{
		if (Spec.Handle == Handle)
		{
			return Spec;
		}
	}

	return nullptr;
}

FGameplayAbilitySpec UGTPAbilitySystemComponent::GTPFindAbilitySpecFromGEHandle(FActiveGameplayEffectHandle Handle)
{
	ABILITYLIST_SCOPE_LOCK();
	for (FGameplayAbilitySpec& Spec : ActivatableAbilities.Items)
	{
		if (Spec.GameplayEffectHandle == Handle)
		{
			return Spec;
		}
	}
	return nullptr;
}

FGameplayAbilitySpec UGTPAbilitySystemComponent::GTPFindAbilitySpecFromInputID(int32 InputID)
{
	if (InputID != INDEX_NONE)
	{
		for (FGameplayAbilitySpec& Spec : ActivatableAbilities.Items)
		{
			if (Spec.InputID == InputID)
			{
				return Spec;
			}
		}
	}
	return nullptr;
}

FGameplayEffectContextHandle UGTPAbilitySystemComponent::GTPGetEffectContextFromActiveGEHandle(FActiveGameplayEffectHandle Handle)
{
	FActiveGameplayEffect* ActiveGE = ActiveGameplayEffects.GetActiveGameplayEffect(Handle);
	if (ActiveGE)
	{
		return ActiveGE->Spec.GetEffectContext();
	}

	return FGameplayEffectContextHandle();
}

void UGTPAbilitySystemComponent::GTPMarkAbilitySpecDirty(FGameplayAbilitySpec& Spec, bool WasAddOrRemove)
{
	MarkAbilitySpecDirty(Spec, WasAddOrRemove);
}


