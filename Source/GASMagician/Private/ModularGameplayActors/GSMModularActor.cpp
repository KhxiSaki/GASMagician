// Fill out your copyright notice in the Description page of Project Settings.


#include "ModularGameplayActors/GSMModularActor.h"

#include "Components/GSMAbilitySystemComponent.h"
#include "Components/GameFrameworkComponentManager.h"


// Sets default values
AGSMModularActor::AGSMModularActor(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	PrimaryActorTick.bCanEverTick = false;
	bReplicates = true;

	// Create ability system component, and set it to be explicitly replicated
	AbilitySystemComponent = ObjectInitializer.CreateDefaultSubobject<UGSMAbilitySystemComponent>(this, TEXT("AbilitySystemComponent"));
	AbilitySystemComponent->SetIsReplicated(true);

	// Minimal mode means GameplayEffects are not replicated to anyone. Only GameplayTags and Attributes are replicated to clients.
	AbilitySystemComponent->SetReplicationMode(EGameplayEffectReplicationMode::Minimal);

}

void AGSMModularActor::PreInitializeComponents()
{
	Super::PreInitializeComponents();

	UGameFrameworkComponentManager::AddGameFrameworkComponentReceiver(this);
}

void AGSMModularActor::BeginPlay()
{
	UGameFrameworkComponentManager::SendGameFrameworkComponentExtensionEvent(this, UGameFrameworkComponentManager::NAME_GameActorReady);

	Super::BeginPlay();
	
	if(AbilitySystemComponent)
	{
		AbilitySystemComponent->InitAbilityActorInfo(this, this);
	}
}

void AGSMModularActor::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	UGameFrameworkComponentManager::RemoveGameFrameworkComponentReceiver(this);

	Super::EndPlay(EndPlayReason);
}

UAbilitySystemComponent* AGSMModularActor::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}


void AGSMModularActor::GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const
{
	if (const UGSMAbilitySystemComponent* ASC = Cast<UGSMAbilitySystemComponent>(GetAbilitySystemComponent()))
	{
		ASC->GetOwnedGameplayTags(TagContainer);
	}
}

bool AGSMModularActor::HasMatchingGameplayTag(FGameplayTag TagToCheck) const
{
	if (const UGSMAbilitySystemComponent* ASC = Cast<UGSMAbilitySystemComponent>(GetAbilitySystemComponent()))
	{
		return ASC->HasMatchingGameplayTag(TagToCheck);
	}

	return false;
}

bool AGSMModularActor::HasAllMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const
{
	if (const UGSMAbilitySystemComponent* ASC = Cast<UGSMAbilitySystemComponent>(GetAbilitySystemComponent()))
	{
		return ASC->HasAllMatchingGameplayTags(TagContainer);
	}

	return false;
}

bool AGSMModularActor::HasAnyMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const
{
	if (const UGSMAbilitySystemComponent* ASC = Cast<UGSMAbilitySystemComponent>(GetAbilitySystemComponent()))
	{
		return ASC->HasAnyMatchingGameplayTags(TagContainer);
	}

	return false;
}