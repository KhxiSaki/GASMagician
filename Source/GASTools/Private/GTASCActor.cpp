// Fill out your copyright notice in the Description page of Project Settings.


#include "GTASCActor.h"
#include "AbilitySystemComponent.h"

// Sets default values
AGTASCActor::AGTASCActor()
{
	PrimaryActorTick.bCanEverTick = false;
	bReplicates = true;

	// Create ability system component, and set it to be explicitly replicated
	AbilitySystemComponent = CreateDefaultSubobject<UAbilitySystemComponent>(TEXT("AbilitySystemComponent"));
	AbilitySystemComponent->SetIsReplicated(true);

	// Minimal mode means GameplayEffects are not replicated to anyone. Only GameplayTags and Attributes are replicated to clients.
	AbilitySystemComponent->SetReplicationMode(EGameplayEffectReplicationMode::Minimal);
}

UAbilitySystemComponent* AGTASCActor::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}

// Called when the game starts or when spawned
void AGTASCActor::BeginPlay()
{
	Super::BeginPlay();

	AbilitySystemComponent->InitAbilityActorInfo(this, this);
}
// Called every frame
void AGTASCActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

