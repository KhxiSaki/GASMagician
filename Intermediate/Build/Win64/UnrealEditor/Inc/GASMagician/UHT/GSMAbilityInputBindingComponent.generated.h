// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/GSMAbilityInputBindingComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UInputAction;
struct FGameplayAbilitySpecHandle;
#ifdef GASMAGICIAN_GSMAbilityInputBindingComponent_generated_h
#error "GSMAbilityInputBindingComponent.generated.h already included, missing '#pragma once' in GSMAbilityInputBindingComponent.h"
#endif
#define GASMAGICIAN_GSMAbilityInputBindingComponent_generated_h

#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_Components_GSMAbilityInputBindingComponent_h_25_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAbilityInputBinding_Statics; \
	GASMAGICIAN_API static class UScriptStruct* StaticStruct();


template<> GASMAGICIAN_API UScriptStruct* StaticStruct<struct FAbilityInputBinding>();

#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_Components_GSMAbilityInputBindingComponent_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execClearAbilityBindings); \
	DECLARE_FUNCTION(execClearInputBinding); \
	DECLARE_FUNCTION(execSetInputBinding);


#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_Components_GSMAbilityInputBindingComponent_h_37_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGSMAbilityInputBindingComponent(); \
	friend struct Z_Construct_UClass_UGSMAbilityInputBindingComponent_Statics; \
public: \
	DECLARE_CLASS(UGSMAbilityInputBindingComponent, UGSMPlayerControlsComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GASMagician"), NO_API) \
	DECLARE_SERIALIZER(UGSMAbilityInputBindingComponent)


#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_Components_GSMAbilityInputBindingComponent_h_37_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSMAbilityInputBindingComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGSMAbilityInputBindingComponent(UGSMAbilityInputBindingComponent&&); \
	UGSMAbilityInputBindingComponent(const UGSMAbilityInputBindingComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSMAbilityInputBindingComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSMAbilityInputBindingComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSMAbilityInputBindingComponent) \
	NO_API virtual ~UGSMAbilityInputBindingComponent();


#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_Components_GSMAbilityInputBindingComponent_h_34_PROLOG
#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_Components_GSMAbilityInputBindingComponent_h_37_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_Components_GSMAbilityInputBindingComponent_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_Components_GSMAbilityInputBindingComponent_h_37_INCLASS_NO_PURE_DECLS \
	FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_Components_GSMAbilityInputBindingComponent_h_37_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GASMAGICIAN_API UClass* StaticClass<class UGSMAbilityInputBindingComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_Components_GSMAbilityInputBindingComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
