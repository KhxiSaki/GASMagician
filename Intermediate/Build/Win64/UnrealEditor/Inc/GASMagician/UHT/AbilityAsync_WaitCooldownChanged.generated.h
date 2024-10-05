// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilityAsyncs/AbilityAsync_WaitCooldownChanged.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UAbilityAsync_WaitCooldownChanged;
struct FGameplayTag;
struct FGameplayTagContainer;
#ifdef GASMAGICIAN_AbilityAsync_WaitCooldownChanged_generated_h
#error "AbilityAsync_WaitCooldownChanged.generated.h already included, missing '#pragma once' in AbilityAsync_WaitCooldownChanged.h"
#endif
#define GASMAGICIAN_AbilityAsync_WaitCooldownChanged_generated_h

#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_AbilityAsyncs_AbilityAsync_WaitCooldownChanged_h_9_DELEGATE \
GASMAGICIAN_API void FOnCooldownChanged_DelegateWrapper(const FMulticastScriptDelegate& OnCooldownChanged, FGameplayTag CooldownTag, float TimeRemaining, float Duration);


#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_AbilityAsyncs_AbilityAsync_WaitCooldownChanged_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execWaitForCooldownChange);


#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_AbilityAsyncs_AbilityAsync_WaitCooldownChanged_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAbilityAsync_WaitCooldownChanged(); \
	friend struct Z_Construct_UClass_UAbilityAsync_WaitCooldownChanged_Statics; \
public: \
	DECLARE_CLASS(UAbilityAsync_WaitCooldownChanged, UAbilityAsync, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GASMagician"), NO_API) \
	DECLARE_SERIALIZER(UAbilityAsync_WaitCooldownChanged)


#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_AbilityAsyncs_AbilityAsync_WaitCooldownChanged_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAbilityAsync_WaitCooldownChanged(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAbilityAsync_WaitCooldownChanged(UAbilityAsync_WaitCooldownChanged&&); \
	UAbilityAsync_WaitCooldownChanged(const UAbilityAsync_WaitCooldownChanged&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAbilityAsync_WaitCooldownChanged); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilityAsync_WaitCooldownChanged); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilityAsync_WaitCooldownChanged) \
	NO_API virtual ~UAbilityAsync_WaitCooldownChanged();


#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_AbilityAsyncs_AbilityAsync_WaitCooldownChanged_h_13_PROLOG
#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_AbilityAsyncs_AbilityAsync_WaitCooldownChanged_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_AbilityAsyncs_AbilityAsync_WaitCooldownChanged_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_AbilityAsyncs_AbilityAsync_WaitCooldownChanged_h_16_INCLASS_NO_PURE_DECLS \
	FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_AbilityAsyncs_AbilityAsync_WaitCooldownChanged_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GASMAGICIAN_API UClass* StaticClass<class UAbilityAsync_WaitCooldownChanged>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_AbilityAsyncs_AbilityAsync_WaitCooldownChanged_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
