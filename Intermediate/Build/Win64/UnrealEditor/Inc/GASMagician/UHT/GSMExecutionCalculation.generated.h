// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Calculations/GSMExecutionCalculation.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UAbilitySystemComponent;
struct FGameplayAttribute;
struct FGameplayEffectCustomExecutionParameters;
struct FGameplayEffectSpec;
struct FGameplayModifierEvaluatedData;
struct FGameplayTag;
struct FGameplayTagContainer;
#ifdef GASMAGICIAN_GSMExecutionCalculation_generated_h
#error "GSMExecutionCalculation.generated.h already included, missing '#pragma once' in GSMExecutionCalculation.h"
#endif
#define GASMAGICIAN_GSMExecutionCalculation_generated_h

#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_Calculations_GSMExecutionCalculation_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual FGameplayModifierEvaluatedData K2_Execute_Implementation(FGameplayEffectCustomExecutionParameters const& ExecutionParameters) const; \
	DECLARE_FUNCTION(execGetTargetSpecTags); \
	DECLARE_FUNCTION(execGetTargetActorTags); \
	DECLARE_FUNCTION(execGetTargetAggregatedTags); \
	DECLARE_FUNCTION(execGetSourceSpecTags); \
	DECLARE_FUNCTION(execGetSourceActorTags); \
	DECLARE_FUNCTION(execGetSourceAggregatedTags); \
	DECLARE_FUNCTION(execGetTargetActor); \
	DECLARE_FUNCTION(execGetOwningSpec); \
	DECLARE_FUNCTION(execGetSourceActor); \
	DECLARE_FUNCTION(execGetSourceAbilitySystemComponent); \
	DECLARE_FUNCTION(execGetTargetAbilitySystemComponent); \
	DECLARE_FUNCTION(execK2_GetTransientAggregatorBonusMagnitude); \
	DECLARE_FUNCTION(execK2_GetTransientAggregatorBaseValue); \
	DECLARE_FUNCTION(execK2_GetTransientAggregatorMagnitudeWithBase); \
	DECLARE_FUNCTION(execK2_GetTransientAggregatorMagnitude); \
	DECLARE_FUNCTION(execK2_GetCapturedAttributeBonusMagnitude); \
	DECLARE_FUNCTION(execK2_GetCapturedAttributeMagnitudeBaseValue); \
	DECLARE_FUNCTION(execK2_GetCapturedAttributeMagnitudeWithBase); \
	DECLARE_FUNCTION(execK2_GetCapturedAttributeMagnitude); \
	DECLARE_FUNCTION(execK2_Execute);


#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_Calculations_GSMExecutionCalculation_h_15_CALLBACK_WRAPPERS
#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_Calculations_GSMExecutionCalculation_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGSMExecutionCalculation(); \
	friend struct Z_Construct_UClass_UGSMExecutionCalculation_Statics; \
public: \
	DECLARE_CLASS(UGSMExecutionCalculation, UGameplayEffectExecutionCalculation, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GASMagician"), NO_API) \
	DECLARE_SERIALIZER(UGSMExecutionCalculation)


#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_Calculations_GSMExecutionCalculation_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSMExecutionCalculation(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGSMExecutionCalculation(UGSMExecutionCalculation&&); \
	UGSMExecutionCalculation(const UGSMExecutionCalculation&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSMExecutionCalculation); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSMExecutionCalculation); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSMExecutionCalculation) \
	NO_API virtual ~UGSMExecutionCalculation();


#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_Calculations_GSMExecutionCalculation_h_12_PROLOG
#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_Calculations_GSMExecutionCalculation_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_Calculations_GSMExecutionCalculation_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_Calculations_GSMExecutionCalculation_h_15_CALLBACK_WRAPPERS \
	FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_Calculations_GSMExecutionCalculation_h_15_INCLASS_NO_PURE_DECLS \
	FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_Calculations_GSMExecutionCalculation_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GASMAGICIAN_API UClass* StaticClass<class UGSMExecutionCalculation>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_Calculations_GSMExecutionCalculation_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
