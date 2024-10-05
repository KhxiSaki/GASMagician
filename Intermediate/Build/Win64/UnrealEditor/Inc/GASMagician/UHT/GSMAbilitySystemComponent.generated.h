// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/GSMAbilitySystemComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AController;
class APawn;
#ifdef GASMAGICIAN_GSMAbilitySystemComponent_generated_h
#error "GSMAbilitySystemComponent.generated.h already included, missing '#pragma once' in GSMAbilitySystemComponent.h"
#endif
#define GASMAGICIAN_GSMAbilitySystemComponent_generated_h

#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_Components_GSMAbilitySystemComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnPawnControllerChanged);


#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_Components_GSMAbilitySystemComponent_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGSMAbilitySystemComponent(); \
	friend struct Z_Construct_UClass_UGSMAbilitySystemComponent_Statics; \
public: \
	DECLARE_CLASS(UGSMAbilitySystemComponent, UAbilitySystemComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GASMagician"), NO_API) \
	DECLARE_SERIALIZER(UGSMAbilitySystemComponent)


#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_Components_GSMAbilitySystemComponent_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGSMAbilitySystemComponent(UGSMAbilitySystemComponent&&); \
	UGSMAbilitySystemComponent(const UGSMAbilitySystemComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSMAbilitySystemComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSMAbilitySystemComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSMAbilitySystemComponent) \
	NO_API virtual ~UGSMAbilitySystemComponent();


#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_Components_GSMAbilitySystemComponent_h_15_PROLOG
#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_Components_GSMAbilitySystemComponent_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_Components_GSMAbilitySystemComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_Components_GSMAbilitySystemComponent_h_18_INCLASS_NO_PURE_DECLS \
	FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_Components_GSMAbilitySystemComponent_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GASMAGICIAN_API UClass* StaticClass<class UGSMAbilitySystemComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_Components_GSMAbilitySystemComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
