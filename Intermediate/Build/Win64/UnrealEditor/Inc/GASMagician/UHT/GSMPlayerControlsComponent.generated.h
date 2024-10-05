// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/GSMPlayerControlsComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AController;
class APawn;
class UEnhancedInputComponent;
#ifdef GASMAGICIAN_GSMPlayerControlsComponent_generated_h
#error "GSMPlayerControlsComponent.generated.h already included, missing '#pragma once' in GSMPlayerControlsComponent.h"
#endif
#define GASMAGICIAN_GSMPlayerControlsComponent_generated_h

#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_Components_GSMPlayerControlsComponent_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void TeardownPlayerControls_Implementation(UEnhancedInputComponent* PlayerInputComponent); \
	virtual void SetupPlayerControls_Implementation(UEnhancedInputComponent* PlayerInputComponent); \
	DECLARE_FUNCTION(execOnControllerChanged); \
	DECLARE_FUNCTION(execOnPawnRestarted); \
	DECLARE_FUNCTION(execTeardownPlayerControls); \
	DECLARE_FUNCTION(execSetupPlayerControls);


#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_Components_GSMPlayerControlsComponent_h_25_CALLBACK_WRAPPERS
#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_Components_GSMPlayerControlsComponent_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGSMPlayerControlsComponent(); \
	friend struct Z_Construct_UClass_UGSMPlayerControlsComponent_Statics; \
public: \
	DECLARE_CLASS(UGSMPlayerControlsComponent, UPawnComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GASMagician"), NO_API) \
	DECLARE_SERIALIZER(UGSMPlayerControlsComponent)


#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_Components_GSMPlayerControlsComponent_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSMPlayerControlsComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGSMPlayerControlsComponent(UGSMPlayerControlsComponent&&); \
	UGSMPlayerControlsComponent(const UGSMPlayerControlsComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSMPlayerControlsComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSMPlayerControlsComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSMPlayerControlsComponent) \
	NO_API virtual ~UGSMPlayerControlsComponent();


#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_Components_GSMPlayerControlsComponent_h_22_PROLOG
#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_Components_GSMPlayerControlsComponent_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_Components_GSMPlayerControlsComponent_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_Components_GSMPlayerControlsComponent_h_25_CALLBACK_WRAPPERS \
	FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_Components_GSMPlayerControlsComponent_h_25_INCLASS_NO_PURE_DECLS \
	FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_Components_GSMPlayerControlsComponent_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GASMAGICIAN_API UClass* StaticClass<class UGSMPlayerControlsComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_Components_GSMPlayerControlsComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
