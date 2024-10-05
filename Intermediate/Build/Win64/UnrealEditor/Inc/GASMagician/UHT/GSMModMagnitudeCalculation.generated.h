// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Calculations/GSMModMagnitudeCalculation.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayEffectAttributeCaptureDefinition;
struct FGameplayEffectContextHandle;
struct FGameplayEffectSpec;
struct FGameplayTagContainer;
#ifdef GASMAGICIAN_GSMModMagnitudeCalculation_generated_h
#error "GSMModMagnitudeCalculation.generated.h already included, missing '#pragma once' in GSMModMagnitudeCalculation.h"
#endif
#define GASMAGICIAN_GSMModMagnitudeCalculation_generated_h

#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_Calculations_GSMModMagnitudeCalculation_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetModifierMagnitude); \
	DECLARE_FUNCTION(execGetAllAssetTags); \
	DECLARE_FUNCTION(execGetAllBlockedAbilityTags); \
	DECLARE_FUNCTION(execGetAllGrantedTags); \
	DECLARE_FUNCTION(execGetContextFromEffectSpec); \
	DECLARE_FUNCTION(execGetStackCount); \
	DECLARE_FUNCTION(execGetPeriod); \
	DECLARE_FUNCTION(execGetDuration); \
	DECLARE_FUNCTION(execAttemptCalculateDurationFromDef); \
	DECLARE_FUNCTION(execHasValidCapturedAttributes);


#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_Calculations_GSMModMagnitudeCalculation_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGSMModMagnitudeCalculation(); \
	friend struct Z_Construct_UClass_UGSMModMagnitudeCalculation_Statics; \
public: \
	DECLARE_CLASS(UGSMModMagnitudeCalculation, UGameplayModMagnitudeCalculation, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GASMagician"), NO_API) \
	DECLARE_SERIALIZER(UGSMModMagnitudeCalculation)


#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_Calculations_GSMModMagnitudeCalculation_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSMModMagnitudeCalculation(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGSMModMagnitudeCalculation(UGSMModMagnitudeCalculation&&); \
	UGSMModMagnitudeCalculation(const UGSMModMagnitudeCalculation&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSMModMagnitudeCalculation); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSMModMagnitudeCalculation); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSMModMagnitudeCalculation) \
	NO_API virtual ~UGSMModMagnitudeCalculation();


#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_Calculations_GSMModMagnitudeCalculation_h_12_PROLOG
#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_Calculations_GSMModMagnitudeCalculation_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_Calculations_GSMModMagnitudeCalculation_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_Calculations_GSMModMagnitudeCalculation_h_15_INCLASS_NO_PURE_DECLS \
	FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_Calculations_GSMModMagnitudeCalculation_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GASMAGICIAN_API UClass* StaticClass<class UGSMModMagnitudeCalculation>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_Calculations_GSMModMagnitudeCalculation_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
