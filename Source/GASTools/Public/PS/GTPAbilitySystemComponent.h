// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemComponent.h"
#include "GTPAbilitySystemComponent.generated.h"

class UGTPGameplayAbility;


/**
 * 
 */
UCLASS()
class GASTOOLS_API UGTPAbilitySystemComponent : public UAbilitySystemComponent
{
	GENERATED_BODY()

public:
	// Constructors and overrides
	UGTPAbilitySystemComponent();

	/** Returns a list of currently active ability instances that match the tags */
	void GetActiveAbilitiesWithTags(const FGameplayTagContainer& GameplayTagContainer, TArray<UGTPGameplayAbility*>& ActiveAbilities);

	/** Version of function in AbilitySystemGlobals that returns correct type */
	static UGTPAbilitySystemComponent* GetAbilitySystemComponentFromActor(const AActor* Actor, bool LookForComponent = false);

	/* Gameplay Effect Utilities */
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Abilities")
		FGameplayAbilitySpecHandle GTPFindAbilitySpecHandleForClass(TSubclassOf<UGameplayAbility> AbilityClass, UObject* OptionalSourceObject = nullptr);

	/** Returns the total duration of a gameplay effect */
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Abilities", Meta = (DisplayName = "GTPGetGameplayEffectDuration"))
		float GTPGetGameplayEffectDuration(FActiveGameplayEffectHandle Handle) const;

	/** Return start time and total duration of a gameplay effect */
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Abilities", Meta = (DisplayName = "GTPGetGameplayEffectStartTimeAndDuration"))
		void GTPGetGameplayEffectStartTimeAndDuration(FActiveGameplayEffectHandle Handle, float& StartEffectTime, float& Duration) const;

	/** Returns the sum of StackCount of all gameplay effects that pass query */
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Abilities", Meta = (DisplayName = "GTPGetAggregatedStackCount"))
		int32 GTPGetAggregatedStackCount(const FGameplayEffectQuery& Query);

	/** Returns current stack count of an already applied GE */
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Abilities", Meta = (DisplayName = "GTPGetCurrentStackCountFromActiveGameplayEffectHandle"))
		int32 GTPGetCurrentStackCountFromActiveGameplayEffectHandle(FActiveGameplayEffectHandle Handle) const;

	/** Returns current stack count of an already applied GE, but given the ability spec handle that was granted by the GE */
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Abilities", Meta = (DisplayName = "GTPGetCurrentStackCountFromGameplayAbilitySpecHandle"))
		int32 GTPGetCurrentStackCountFromGameplayAbilitySpecHandle(FGameplayAbilitySpecHandle Handle) const;

	/** Gets the GE Handle of the GE that granted the passed in Ability */
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Abilities", Meta = (DisplayName = "GTPFindActiveGameplayEffectHandle"))
		FActiveGameplayEffectHandle GTPFindActiveGameplayEffectHandle(FGameplayAbilitySpecHandle Handle) const;

	/* Gameplay Effect Utilities */

	/* Gameplay Tags Utilities */

		// Exposes AddLooseGameplayTag to Blueprint. This tag is *not* replicated.
	UFUNCTION(BlueprintCallable, Category = "Abilities", Meta = (DisplayName = "GTPAddLooseGameplayTag"))
		void GTPAddLooseGameplayTag(const FGameplayTag& GameplayTag, int32 Count = 1);

	// Exposes AddLooseGameplayTags to Blueprint. These tags are *not* replicated.
	UFUNCTION(BlueprintCallable, Category = "Abilities", Meta = (DisplayName = "GTPAddLooseGameplayTags"))
		void GTPAddLooseGameplayTags(const FGameplayTagContainer& GameplayTags, int32 Count = 1);

	// Exposes RemoveLooseGameplayTag to Blueprint. This tag is *not* replicated.
	UFUNCTION(BlueprintCallable, Category = "Abilities", Meta = (DisplayName = "GTPRemoveLooseGameplayTag"))
		void GTPRemoveLooseGameplayTag(const FGameplayTag& GameplayTag, int32 Count = 1);

	// Exposes RemoveLooseGameplayTags to Blueprint. These tags are *not* replicated.
	UFUNCTION(BlueprintCallable, Category = "Abilities", Meta = (DisplayName = "GTPRemoveLooseGameplayTags"))
		void GTPRemoveLooseGameplayTags(const FGameplayTagContainer& GameplayTags, int32 Count = 1);

	UFUNCTION(BlueprintCallable, Category = "Abilities", Meta = (DisplayName = "GTPSetLooseGameplayTagCount"))
		void GTPSetLooseGameplayTagCount(const FGameplayTag& GameplayTag, int32 NewCount);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Abilities", Meta = (DisplayName = "GTPHasMatchingGameplayTag"))
		bool GTPHasMatchingGameplayTag(FGameplayTag TagToCheck) const;

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Abilities", Meta = (DisplayName = "GTPHasAllMatchingGameplayTags"))
		bool GTPHasAllMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const;

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Abilities", Meta = (DisplayName = "GTPHasAnyMatchingGameplayTags"))
		bool GTPHasAnyMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const;

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Abilities", Meta = (DisplayName = "GTPGetOwnedGameplayTags"))
		void GTPGetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const;

	// Exposes GetTagCount to Blueprint
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Abilities", Meta = (DisplayName = "GTPGetTagCount", ScriptName = "GTPGetTagCount"))
		int32 GTPGetTagCount(FGameplayTag TagToCheck) const;

	/** Forcibly sets the number of instances of a given tag */
	UFUNCTION(BlueprintCallable, Category = "Abilities", Meta = (DisplayName = "GTPSetTagMapCount"))
		void GTPSetTagMapCount(const FGameplayTag& Tag, int32 NewCount);

	/** Update the number of instances of a given tag and calls callback */
	UFUNCTION(BlueprintCallable, Category = "Abilities", Meta = (DisplayName = "GTPUpdateTagMapFromTag"))
		void GTPUpdateTagMapFromTag(const FGameplayTag& BaseTag, int32 CountDelta);

	/** Update the number of instances of a given tag and calls callback */
	UFUNCTION(BlueprintCallable, Category = "Abilities", Meta = (DisplayName = "GTPUpdateTagMapFromTagContainer"))
		void GTPUpdateTagMapFromTagContainer(const FGameplayTagContainer& Container, int32 CountDelta);

	/** Fills TagContainer with BlockedAbilityTags */
	UFUNCTION(BlueprintCallable, Category = "Abilities", Meta = (DisplayName = "GTPGetBlockedAbilityTags"))
		void GTPGetBlockedAbilityTags(FGameplayTagContainer& TagContainer) const;

	/* Gameplay Tags Utilities */

	/*  Ability Batching */

		// Attempts to activate the given ability handle and batch all RPCs into one. This will only batch all RPCs that happen
		// in one frame. Best case scenario we batch ActivateAbility, SendTargetData, and EndAbility into one RPC instead of three.
		// Worst case we batch ActivateAbility and SendTargetData into one RPC instead of two and call EndAbility later in a separate
		// RPC. If we can't batch SendTargetData or EndAbility with ActivateAbility because they don't happen in the same frame due to
		// latent ability tasks for example, then batching doesn't help and we should just activate normally.
		// Single shots (semi auto fire) combine ActivateAbility, SendTargetData, and EndAbility into one RPC instead of three.
		// Full auto shots combine ActivateAbility and SendTargetData into one RPC instead of two for the first bullet. Each subsequent
		// bullet is one RPC for SendTargetData. We then send one final RPC for the EndAbility when we're done firing.
	UFUNCTION(BlueprintCallable, Category = "Abilities")
		virtual bool GTPBatchRPCTryActivateAbility(FGameplayAbilitySpecHandle InAbilityHandle, bool EndAbilityImmediately);

	// Turn on RPC batching in ASC. Off by default.
	virtual bool ShouldDoServerAbilityRPCBatch() const override { return true; }

	/* Ability Batching */

	/* GameplayCue Utilities */

	UFUNCTION(BlueprintCallable, Category = "GameplayCue", Meta = (AutoCreateRefTerm = "GameplayCueParameters", GameplayTagFilter = "GameplayCue"))
		void GTPExecuteGameplayCueLocal(const FGameplayTag GameplayCueTag, const FGameplayCueParameters& GameplayCueParameters);

	UFUNCTION(BlueprintCallable, Category = "GameplayCue", Meta = (AutoCreateRefTerm = "GameplayCueParameters", GameplayTagFilter = "GameplayCue"))
		void GTPAddGameplayCueLocal(const FGameplayTag GameplayCueTag, const FGameplayCueParameters& GameplayCueParameters);

	/** Add gameplaycue for minimal replication mode. Should only be called in paths that would replicate gameplaycues in other ways (through GE for example) if not in minimal replication mode */
	UFUNCTION(BlueprintCallable, Category = "Abilities")
		void GTPAddGameplayCue_MinimalReplication(const FGameplayTag GameplayCueTag, FGameplayEffectContextHandle EffectContext);

	/** Remove gameplaycue for minimal replication mode. Should only be called in paths that would replicate gameplaycues in other ways (through GE for example) if not in minimal replication mode */
	UFUNCTION(BlueprintCallable, Category = "Abilities")
		void GTPRemoveGameplayCue_MinimalReplication(const FGameplayTag GameplayCueTag);

	/** Removes any GameplayCue added on its own, i.e. not as part of a GameplayEffect. */
	UFUNCTION(BlueprintCallable, Category = "Abilities")
		void GTPRemoveAllGameplayCues();

	UFUNCTION(BlueprintCallable, Category = "GameplayCue", Meta = (AutoCreateRefTerm = "GameplayCueParameters", GameplayTagFilter = "GameplayCue"))
		void GTPRemoveGameplayCueLocal(const FGameplayTag GameplayCueTag, const FGameplayCueParameters& GameplayCueParameters);

	/* GameplayCue Utilities */

	/* Ability Blocking */

		/**
		 * Called from ability activation or native code, will apply the correct ability blocking tags and cancel existing abilities. Subclasses can override the behavior
		 * @param AbilityTags The tags of the ability that has block and cancel flags
		 * @param RequestingAbility The gameplay ability requesting the change, can be NULL for native events
		 * @param bEnableBlockTags If true will enable the block tags, if false will disable the block tags
		 * @param BlockTags What tags to block
		 * @param bExecuteCancelTags If true will cancel abilities matching tags
		 * @param CancelTags what tags to cancel
		 */
	UFUNCTION(BlueprintCallable, Category = "Abilities")
		void GTPApplyAbilityBlockAndCancelTags(const FGameplayTagContainer& AbilityTags, UGameplayAbility* RequestingAbility, bool bEnableBlockTags, const FGameplayTagContainer& BlockTags, bool bExecuteCancelTags, const FGameplayTagContainer& CancelTags);

	/** Returns true if any passed in tags are blocked */
	UFUNCTION(BlueprintCallable, Category = "Abilities")
		bool GTPAreAbilityTagsBlocked(const FGameplayTagContainer& Tags) const;

	/** Block or cancel blocking for specific ability tags */
	UFUNCTION(BlueprintCallable, Category = "Abilities")
		void GTPBlockAbilitiesWithTags(const FGameplayTagContainer& Tags);

	/** UnBlock or cancel blocking for specific ability tags */
	UFUNCTION(BlueprintCallable, Category = "Abilities")
		void GTPUnBlockAbilitiesWithTags(const FGameplayTagContainer& Tags);

	/** Block or cancel blocking for specific input IDs */
	UFUNCTION(BlueprintCallable, Category = "Abilities")
		void GTPBlockAbilityByInputID(int32 InputID);

	/** Block or cancel blocking for specific input IDs */
	UFUNCTION(BlueprintCallable, Category = "Abilities")
		void GTPUnBlockAbilityByInputID(int32 InputID);

	/* Ability Blocking */

	/* AbilitySpec */

		/** Returns an ability spec from a handle. If modifying call MarkAbilitySpecDirty */
	UFUNCTION(BlueprintCallable, Category = "Abilities")
		FGameplayAbilitySpec GTPFindAbilitySpecFromHandle(FGameplayAbilitySpecHandle Handle);

	/** Returns an ability spec from a GE handle. If modifying call MarkAbilitySpecDirty */
	UFUNCTION(BlueprintCallable, Category = "Abilities")
		FGameplayAbilitySpec GTPFindAbilitySpecFromGEHandle(FActiveGameplayEffectHandle Handle);

	/** Returns an ability spec from a handle. If modifying call MarkAbilitySpecDirty */
	UFUNCTION(BlueprintCallable, Category = "Abilities")
		FGameplayAbilitySpec GTPFindAbilitySpecFromInputID(int32 InputID);

	/* AbilitySpec */

		/** Retrieves the EffectContext of the GameplayEffect of the active GameplayEffect. */
	UFUNCTION(BlueprintCallable, Category = "Abilities")
		FGameplayEffectContextHandle GTPGetEffectContextFromActiveGEHandle(FActiveGameplayEffectHandle Handle);

	/** Call to mark that an ability spec has been modified */
	UFUNCTION(BlueprintCallable, Category = "Abilities")
		void GTPMarkAbilitySpecDirty(FGameplayAbilitySpec& Spec, bool WasAddOrRemove = false);
};
