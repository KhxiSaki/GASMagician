// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Components/PawnComponent.h"
#include "EnhancedInputComponent.h"
#include "InputTriggers.h"
#include "Misc/AssertionMacros.h"
#include "UObject/UObjectGlobals.h"

#include "GSMPlayerControlsComponent.generated.h"

class AController;
class APawn;
class UEnhancedInputLocalPlayerSubsystem;
class UInputAction;
class UInputMappingContext;
class UObject;
struct FFrame;

/** Modular pawn component for adding input actions and an optional input mapping to a pawn */
UCLASS(Blueprintable, BlueprintType, Category = "Input", meta = (BlueprintSpawnableComponent))
class GASMAGICIAN_API UGSMPlayerControlsComponent : public UPawnComponent
{
	GENERATED_BODY()

public:

	//~ Begin UActorComponent interface
	virtual void OnRegister() override;
	virtual void OnUnregister() override;
	//~ End UActorComponent interface

	/** Input mapping to add to the input system */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="GASMagician")
	UInputMappingContext* InputMappingContext = nullptr;

	/** Priority to bind mapping context with */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="GASMagician")
	int InputPriority = 0;

protected:
	
	/** Native/BP Event to set up player controls */
	UFUNCTION(BlueprintNativeEvent, Category="GASMagician")
	void SetupPlayerControls(UEnhancedInputComponent* PlayerInputComponent);

	/** Native/BP Event to undo control setup */
	UFUNCTION(BlueprintNativeEvent, Category="GASMagician")
	void TeardownPlayerControls(UEnhancedInputComponent* PlayerInputComponent);

	/** Wrapper function for binding to this input component */
	template<class UserClass, typename FuncType>
	bool BindInputAction(const UInputAction* Action, const ETriggerEvent EventType, UserClass* Object, FuncType Func)
	{
		if (ensure(InputComponent != nullptr) && ensure(Action != nullptr))
		{
			InputComponent->BindAction(Action, EventType, Object, Func);
			return true;
		}

		return false;
	}
	
	/** Called when pawn restarts, bound to dynamic delegate */
	UFUNCTION()
	virtual void OnPawnRestarted(APawn* Pawn);

	/** Called when pawn restarts, bound to dynamic delegate */
	UFUNCTION()
	virtual void OnControllerChanged(APawn* Pawn, AController* OldController, AController* NewController);

	virtual void SetupInputComponent(APawn* Pawn);
	virtual void ReleaseInputComponent(AController* OldController = nullptr);
	UEnhancedInputLocalPlayerSubsystem* GetEnhancedInputSubsystem(AController* OldController = nullptr) const;

	/** The bound input component. */
	UPROPERTY(transient)
	UEnhancedInputComponent* InputComponent;
};
