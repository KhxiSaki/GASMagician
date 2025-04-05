// Fill out your copyright notice in the Description page of Project Settings.


#include "Components/GSMAbilitySystemComponent.h"
#include "GSMAbilityTagRelationshipMapping.h"
#include "Animations/GSMAnimInstance.h"
#include "GSMGameplayAbility.h"
#include "GameplayTagResponseTable.h"
#include "GSMGameplayLog.h"

UGSMAbilitySystemComponent::UGSMAbilitySystemComponent(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

void UGSMAbilitySystemComponent::InitAbilityActorInfo(AActor* InOwnerActor, AActor* InAvatarActor)
{
	FGameplayAbilityActorInfo* ActorInfo = AbilityActorInfo.Get();
    	check(ActorInfo);
    	check(InOwnerActor);
    
    	const bool bHasNewPawnAvatar = Cast<APawn>(InAvatarActor) && (InAvatarActor != ActorInfo->AvatarActor);
    
    	Super::InitAbilityActorInfo(InOwnerActor, InAvatarActor);

	if (bHasNewPawnAvatar)
    {
		if (AbilityActorInfo->AnimInstance == nullptr)
		{
			AbilityActorInfo->AnimInstance = AbilityActorInfo->GetAnimInstance();
		}

		if (UGSMAnimInstance* TopAnimInststance = Cast<UGSMAnimInstance>(AbilityActorInfo->AnimInstance))
		{
			TopAnimInststance->InitializeWithAbilitySystem(this);
		}

		if (AbilityActorInfo->SkeletalMeshComponent.IsValid())
		{
			const USkeletalMeshComponent* SkeletalMeshComponent = AbilityActorInfo->SkeletalMeshComponent.Get();

			const TArray<UAnimInstance*>& AnimLayers = SkeletalMeshComponent->GetLinkedAnimInstances();
			for (UAnimInstance* AnimLayer : AnimLayers)
			{
				if (UGSMAnimInstance* GSMAnimLayer = Cast<UGSMAnimInstance>(AnimLayer))
				{
					GSMAnimLayer->InitializeWithAbilitySystem(this);
				}
			}
		}

		if (UGameInstance* GameInstance = InOwnerActor->GetGameInstance())
		{
			// Sign up for possess/unpossess events so that we can update the cached AbilityActorInfo accordingly
			GameInstance->GetOnPawnControllerChanged().AddDynamic(this, &UGSMAbilitySystemComponent::OnPawnControllerChanged);
		}

#if ENGINE_MAJOR_VERSION == 5 && ENGINE_MINOR_VERSION >= 5
		// Notify all abilities that a new pawn avatar has been set
		for (const FGameplayAbilitySpec& AbilitySpec : ActivatableAbilities.Items)
		{
			PRAGMA_DISABLE_DEPRECATION_WARNINGS
			ensureMsgf(AbilitySpec.Ability && AbilitySpec.Ability->GetInstancingPolicy() != EGameplayAbilityInstancingPolicy::NonInstanced, TEXT("InitAbilityActorInfo: All Abilities should be Instanced (NonInstanced is being deprecated due to usability issues)."));
			PRAGMA_ENABLE_DEPRECATION_WARNINGS
	
			TArray<UGameplayAbility*> Instances = AbilitySpec.GetAbilityInstances();
			for (UGameplayAbility* AbilityInstance : Instances)
			{
				UGSMGameplayAbility* GSMAbilityInstance = Cast<UGSMGameplayAbility>(AbilityInstance);
				if (GSMAbilityInstance)
				{
					// Ability instances may be missing for replays
					GSMAbilityInstance->OnPawnAvatarSet();
				}
			}
		}
#else
		// Notify all abilities that a new pawn avatar has been set
		for (const FGameplayAbilitySpec& AbilitySpec : ActivatableAbilities.Items)
		{
			UGSMGameplayAbility* GSMAbilityCDO = Cast<UGSMGameplayAbility>(AbilitySpec.Ability);
			if (!GSMAbilityCDO)
			{
				continue;
			}
        
			if (GSMAbilityCDO->GetInstancingPolicy() != EGameplayAbilityInstancingPolicy::NonInstanced)
			{
				TArray<UGameplayAbility*> Instances = AbilitySpec.GetAbilityInstances();
				for (UGameplayAbility* AbilityInstance : Instances)
				{
					UGSMGameplayAbility* GSMAbilityInstance = Cast<UGSMGameplayAbility>(AbilityInstance);
					if (GSMAbilityInstance)
					{
						GSMAbilityInstance->OnPawnAvatarSet();
					}
				}
			}
			else
			{
				GSMAbilityCDO->OnPawnAvatarSet();
			}
		}
#endif
		GiveToAbilitySystem(this, &GrantedHandles);
		TryActivateAbilitiesOnSpawn();
	}
	
}

void UGSMAbilitySystemComponent::TryActivateAbilitiesOnSpawn()
{
	ABILITYLIST_SCOPE_LOCK();
	for (const FGameplayAbilitySpec& AbilitySpec : ActivatableAbilities.Items)
	{
		if (const UGSMGameplayAbility* GSMAbilityCDO = Cast<UGSMGameplayAbility>(AbilitySpec.Ability))
		{
			GSMAbilityCDO->TryActivateAbilityOnSpawn(AbilityActorInfo.Get(), AbilitySpec);
		}
	}
}

void UGSMAbilitySystemComponent::BeginDestroy()
{
	if (AbilityActorInfo && AbilityActorInfo->OwnerActor.IsValid())
	{
		if (UGameInstance* GameInstance = AbilityActorInfo->OwnerActor->GetGameInstance())
		{
			GameInstance->GetOnPawnControllerChanged().RemoveAll(this);
		}
	}

	GrantedHandles.TakeFromAbilitySystem(this);
	if (!CharacterGameplayTags.IsEmpty())
	{
		RemoveLooseGameplayTags(CharacterGameplayTags);
	}
	Super::BeginDestroy();
}

void UGSMAbilitySystemComponent::OnPawnControllerChanged(APawn* Pawn, AController* NewController)
{
	if (AbilityActorInfo && AbilityActorInfo->OwnerActor == Pawn && AbilityActorInfo->PlayerController != NewController)
	{
		// Reinit the cached ability actor info (specifically the player controller)
		AbilityActorInfo->InitFromActor(AbilityActorInfo->OwnerActor.Get(), AbilityActorInfo->AvatarActor.Get(), this);
	}
}

void UGSMAbilitySystemComponent::ApplyAbilityBlockAndCancelTags(const FGameplayTagContainer& AbilityTags, UGameplayAbility* RequestingAbility, bool bEnableBlockTags, const FGameplayTagContainer& BlockTags, bool bExecuteCancelTags, const FGameplayTagContainer& CancelTags)
{
	FGameplayTagContainer ModifiedBlockTags = BlockTags;
	FGameplayTagContainer ModifiedCancelTags = CancelTags;

	if (TagRelationshipMapping)
	{
		// Use the mapping to expand the ability tags into block and cancel tag
		TagRelationshipMapping->GetAbilityTagsToBlockAndCancel(AbilityTags, &ModifiedBlockTags, &ModifiedCancelTags);
	}

	Super::ApplyAbilityBlockAndCancelTags(AbilityTags, RequestingAbility, bEnableBlockTags, ModifiedBlockTags, bExecuteCancelTags, ModifiedCancelTags);

	//@TODO: Apply any special logic like blocking input or movement
}


void UGSMAbilitySystemComponent::GetAdditionalActivationTagRequirements(const FGameplayTagContainer& AbilityTags, FGameplayTagContainer& OutActivationRequired, FGameplayTagContainer& OutActivationBlocked) const
{
	if (TagRelationshipMapping)
	{
		TagRelationshipMapping->GetRequiredAndBlockedActivationTags(AbilityTags, &OutActivationRequired, &OutActivationBlocked);
	}
}

void UGSMAbilitySystemComponent::SetTagRelationshipMapping(UGSMAbilityTagRelationshipMapping* NewMapping)
{
	TagRelationshipMapping = NewMapping;
}


void UGSMAbilitySystemComponent::GetAbilityTargetData(const FGameplayAbilitySpecHandle AbilityHandle, FGameplayAbilityActivationInfo ActivationInfo, FGameplayAbilityTargetDataHandle& OutTargetDataHandle)
{
	TSharedPtr<FAbilityReplicatedDataCache> ReplicatedData = AbilityTargetDataMap.Find(FGameplayAbilitySpecHandleAndPredictionKey(AbilityHandle, ActivationInfo.GetActivationPredictionKey()));
	if (ReplicatedData.IsValid())
	{
		OutTargetDataHandle = ReplicatedData->TargetData;
	}
}


void UGSMAbilitySystemComponent::GiveToAbilitySystem(UGSMAbilitySystemComponent* InASC,
	FGSMAbilitySet_GrantedHandles* OutGrantedHandles, UObject* SourceObject) const
{
	check(InASC);

	if (!InASC->IsOwnerActorAuthoritative())
	{
		// Must be authoritative to give or take ability sets.
		return;
	}

	// Grant the attribute sets.
	for (int32 SetIndex = 0; SetIndex < GrantedAttributes.Num(); ++SetIndex)
	{
		const FGSMAbilitySet_AttributeSet& SetToGrant = GrantedAttributes[SetIndex];

		if (!IsValid(SetToGrant.AttributeSet))
		{
			UE_LOG(LogGASMagician, Error, TEXT("GrantedAttributes[%d] on ability set [%s] is not valid"), SetIndex, *GetNameSafe(this));
			continue;
		}

		UAttributeSet* NewSet = NewObject<UAttributeSet>(InASC->GetOwner(), SetToGrant.AttributeSet);
		if (NewSet)
		{
			InASC->AddAttributeSetSubobject(NewSet);

			if (OutGrantedHandles)
			{
				OutGrantedHandles->AddAttributeSet(NewSet);
			}
		}
	}
	
	// Grant the gameplay abilities.
	for (int32 AbilityIndex = 0; AbilityIndex < GrantedGameplayAbilities.Num(); ++AbilityIndex)
	{
		const FGSMAbilitySet_GameplayAbility& AbilityToGrant = GrantedGameplayAbilities[AbilityIndex];

		if (!IsValid(AbilityToGrant.Ability))
		{
			UE_LOG(LogGASMagician, Error, TEXT("GrantedGameplayAbilities[%d] on ability set [%s] is not valid."), AbilityIndex, *GetNameSafe(this));
			continue;
		}

		UGSMGameplayAbility* AbilityCDO = AbilityToGrant.Ability->GetDefaultObject<UGSMGameplayAbility>();

		if (AbilityCDO)
		{
			FGameplayAbilitySpec AbilitySpec(AbilityCDO, AbilityToGrant.AbilityLevel);
			AbilitySpec.SourceObject = SourceObject;
			//AbilitySpec.DynamicAbilityTags.AddTag(AbilityToGrant.InputTag);

			const FGameplayAbilitySpecHandle AbilitySpecHandle = InASC->GiveAbility(AbilitySpec);
		
			if (OutGrantedHandles)
			{
				OutGrantedHandles->AddAbilitySpecHandle(AbilitySpecHandle);
			}
		}
	}

	// Grant the gameplay effects.
	for (int32 EffectIndex = 0; EffectIndex < GrantedGameplayEffects.Num(); ++EffectIndex)
	{
		const FGSMAbilitySet_GameplayEffect& EffectToGrant = GrantedGameplayEffects[EffectIndex];

		if (!IsValid(EffectToGrant.GameplayEffect))
		{
			UE_LOG(LogGASMagician, Error, TEXT("GrantedGameplayEffects[%d] on ability set [%s] is not valid"), EffectIndex, *GetNameSafe(this));
			continue;
		}

		
		const UGameplayEffect* GameplayEffect = EffectToGrant.GameplayEffect->GetDefaultObject<UGameplayEffect>();
		
			const FActiveGameplayEffectHandle GameplayEffectHandle = InASC->ApplyGameplayEffectToSelf(GameplayEffect, EffectToGrant.EffectLevel, InASC->MakeEffectContext());

			if (OutGrantedHandles)
			{
				OutGrantedHandles->AddGameplayEffectHandle(GameplayEffectHandle);
			}
		
	}

	//Grant the ability sets
	for (const TObjectPtr<UGSMAbilitySet>& AbilitySetEntry : GrantedAbilitySets)
	{
		if (const UGSMAbilitySet* AbilitySet = AbilitySetEntry)
		{
			AbilitySetEntry->GiveToAbilitySystem(InASC, OutGrantedHandles);
		}
	}

	//Apply Dynamic Tags
	if (!CharacterGameplayTags.IsEmpty())
	{
		InASC->AddLooseGameplayTags(CharacterGameplayTags);
		//AddDynamicTagGameplayEffect(CharacterGameplayTags);
	}

	//Apply TagResponse Tables
	for (const TObjectPtr<UGameplayTagReponseTable>& TagResponseTablesEntry : TagResponseTables)
	{
		if (const UGameplayTagReponseTable* ResponseTable = TagResponseTablesEntry)
		{
			TagResponseTablesEntry->RegisterResponseForEvents(InASC);
		}
	}
}