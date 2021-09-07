// Copyright (c) CreationArtStudios 2021 Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "PS/GTPAbilityTypes.h"
#include "GTPTargetTypes.generated.h"

class AGTPCharacter;
class AActor;
struct FGameplayEventData;

/**
 * Class that is used to determine targeting for abilities
 * It is meant to be blueprinted to run target logic
 * This does not subclass GameplayAbilityTargetActor because this class is never instanced into the world
 * This can be used as a basis for a game-specific targeting blueprint
 * If your targeting is more complicated you may need to instance into the world once or as a pooled actor
 */
UCLASS(Blueprintable, meta = (ShowWorldContextPin))
class GASTOOLS_API UGTPTargetType : public UObject
{
	GENERATED_BODY()

public:
	// Constructor and overrides
	UGTPTargetType() {}

	/** Called to determine targets to apply gameplay effects to */
	UFUNCTION(BlueprintNativeEvent)
		void GetTargets(AGTPCharacter* TargetingCharacter, AActor* TargetingActor, FGameplayEventData EventData, TArray<FHitResult>& OutHitResults, TArray<AActor*>& OutActors) const;
};

/** Trivial target type that uses the owner */
UCLASS(NotBlueprintable)
class GASTOOLS_API UGTPTargetType_UseOwner : public UGTPTargetType
{
	GENERATED_BODY()

public:
	// Constructor and overrides
	UGTPTargetType_UseOwner() {}

	/** Uses the passed in event data */
	virtual void GetTargets_Implementation(AGTPCharacter* TargetingCharacter, AActor* TargetingActor, FGameplayEventData EventData, TArray<FHitResult>& OutHitResults, TArray<AActor*>& OutActors) const override;
};

/** Trivial target type that pulls the target out of the event data */
UCLASS(NotBlueprintable)
class GASTOOLS_API UGTPTargetType_UseEventData : public UGTPTargetType
{
	GENERATED_BODY()

public:
	// Constructor and overrides
	UGTPTargetType_UseEventData() {}

	/** Uses the passed in event data */
	virtual void GetTargets_Implementation(AGTPCharacter* TargetingCharacter, AActor* TargetingActor, FGameplayEventData EventData, TArray<FHitResult>& OutHitResults, TArray<AActor*>& OutActors) const override;
};
