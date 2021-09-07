// Copyright (c) CreationArtStudios 2021 Inc. All Rights Reserved.

#pragma once

// ----------------------------------------------------------------------------------------------------------------
// This header is for Ability-specific structures and enums that are shared across a project
// Every game will probably need a file like this to handle their extensions to the system
// This file is a good place for subclasses of FGameplayEffectContext and FGameplayAbilityTargetData
// ----------------------------------------------------------------------------------------------------------------


#include "CoreMinimal.h"
#include "GameplayEffectTypes.h"
#include "Abilities/GameplayAbilityTargetTypes.h"
#include "GTPAbilityTypes.generated.h"

class UGTPAbilitySystemComponent;
class UGameplayEffect;
class UGTPTargetType;

USTRUCT()
struct GASTOOLS_API FGTPGameplayEffectContext : public FGameplayEffectContext
{
	GENERATED_USTRUCT_BODY()

public:

	virtual FGameplayAbilityTargetDataHandle GetTargetData()
	{
		return TargetData;
	}

	virtual void AddTargetData(const FGameplayAbilityTargetDataHandle& TargetDataHandle)
	{
		TargetData.Append(TargetDataHandle);
	}

	/**
	* Functions that subclasses of FGameplayEffectContext need to override
	*/

	virtual UScriptStruct* GetScriptStruct() const override
	{
		return FGTPGameplayEffectContext::StaticStruct();
	}

	virtual FGTPGameplayEffectContext* Duplicate() const override
	{
		FGTPGameplayEffectContext* NewContext = new FGTPGameplayEffectContext();
		*NewContext = *this;
		NewContext->AddActors(Actors);
		if (GetHitResult())
		{
			// Does a deep copy of the hit result
			NewContext->AddHitResult(*GetHitResult(), true);
		}
		// Shallow copy of TargetData, is this okay?
		NewContext->TargetData.Append(TargetData);
		return NewContext;
	}

	virtual bool NetSerialize(FArchive& Ar, class UPackageMap* Map, bool& bOutSuccess) override;

protected:
	FGameplayAbilityTargetDataHandle TargetData;
};

template<>
struct TStructOpsTypeTraits<FGTPGameplayEffectContext> : public TStructOpsTypeTraitsBase2<FGTPGameplayEffectContext>
{
	enum
	{
		WithNetSerializer = true,
		WithCopy = true		// Necessary so that TSharedPtr<FHitResult> Data is copied around
	};
};


/**
 * Struct defining a list of gameplay effects, a tag, and targeting info
 * These containers are defined statically in blueprints or assets and then turn into Specs at runtime
 */
USTRUCT(BlueprintType)
struct FGTPGameplayEffectContainer
{
	GENERATED_BODY()

public:
	FGTPGameplayEffectContainer() {}

	/** Sets the way that targeting happens */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = GameplayEffectContainer)
		TSubclassOf<UGTPTargetType> TargetType;

	/** List of gameplay effects to apply to the targets */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = GameplayEffectContainer)
		TArray<TSubclassOf<UGameplayEffect>> TargetGameplayEffectClasses;
};

/** A "processed" version of GTGameplayEffectContainer that can be passed around and eventually applied */
USTRUCT(BlueprintType)
struct FGTPGameplayEffectContainerSpec
{
	GENERATED_BODY()

public:
	FGTPGameplayEffectContainerSpec() {}

	/** Computed target data */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = GameplayEffectContainer)
		FGameplayAbilityTargetDataHandle TargetData;

	/** List of gameplay effects to apply to the targets */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = GameplayEffectContainer)
		TArray<FGameplayEffectSpecHandle> TargetGameplayEffectSpecs;

	/** Returns true if this has any valid effect specs */
	bool HasValidEffects() const;

	/** Returns true if this has any valid targets */
	bool HasValidTargets() const;

	/** Adds new targets to target data */
	void AddTargets(const TArray<FHitResult>& HitResults, const TArray<AActor*>& TargetActors);

	/** Clears target data */
	void ClearTargets();
};
