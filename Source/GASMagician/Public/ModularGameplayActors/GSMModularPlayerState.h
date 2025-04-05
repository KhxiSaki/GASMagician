// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "GameFramework/PlayerState.h"
#include "AbilitySystemInterface.h"
#include "GSMModularPlayerState.generated.h"

namespace EEndPlayReason { enum Type : int; }

class UGSMAbilitySystemComponent;
class UObject;

/** Minimal class that supports extension by game feature plugins */
UCLASS(Blueprintable)
class GASMAGICIAN_API AGSMModularPlayerState : public APlayerState, public IAbilitySystemInterface
{
	GENERATED_BODY()

public:
	AGSMModularPlayerState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	// Implement IAbilitySystemInterface
	class UAbilitySystemComponent* GetAbilitySystemComponent() const override;

	
	//~ Begin AActor interface
	virtual void PreInitializeComponents() override;
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
	virtual void Reset() override;
	//~ End AActor interface

protected:
	UPROPERTY(Category = AbilitySystem, VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UGSMAbilitySystemComponent> AbilitySystemComponent;
	
	//~ Begin APlayerState interface
	virtual void CopyProperties(APlayerState* PlayerState);
	//~ End APlayerState interface
};
