// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "GameFramework/PlayerController.h"

#include "GSMModularPlayerController.generated.h"

class UObject;

/** Minimal class that supports extension by game feature plugins */
UCLASS(Blueprintable)
class GASMAGICIAN_API AGSMModularPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	AGSMModularPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	//~ Begin AActor interface
	virtual void PreInitializeComponents() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
	//~ End AActor interface

	//~ Begin APlayerController interface
	virtual void ReceivedPlayer() override;
	virtual void PlayerTick(float DeltaTime) override;
	virtual void OnPossess(APawn* InPawn) override;
	//~ End APlayerController interface

	
};
