// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilityAsyncs/AbilityAsync_EffectStackChanged.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UAbilityAsync_EffectStackChanged;
struct FActiveGameplayEffectHandle;
struct FGameplayTag;
#ifdef GASMAGICIAN_AbilityAsync_EffectStackChanged_generated_h
#error "AbilityAsync_EffectStackChanged.generated.h already included, missing '#pragma once' in AbilityAsync_EffectStackChanged.h"
#endif
#define GASMAGICIAN_AbilityAsync_EffectStackChanged_generated_h

#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_AbilityAsyncs_AbilityAsync_EffectStackChanged_h_9_DELEGATE \
GASMAGICIAN_API void FOnGameplayEffectStackChanged_DelegateWrapper(const FMulticastScriptDelegate& OnGameplayEffectStackChanged, FGameplayTag EffectGameplayTag, FActiveGameplayEffectHandle Handle, int32 NewStackCount, int32 OldStackCount);


#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_AbilityAsyncs_AbilityAsync_EffectStackChanged_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execWaitForGameplayEffectStackChange);


#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_AbilityAsyncs_AbilityAsync_EffectStackChanged_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAbilityAsync_EffectStackChanged(); \
	friend struct Z_Construct_UClass_UAbilityAsync_EffectStackChanged_Statics; \
public: \
	DECLARE_CLASS(UAbilityAsync_EffectStackChanged, UAbilityAsync, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GASMagician"), NO_API) \
	DECLARE_SERIALIZER(UAbilityAsync_EffectStackChanged)


#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_AbilityAsyncs_AbilityAsync_EffectStackChanged_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAbilityAsync_EffectStackChanged(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAbilityAsync_EffectStackChanged(UAbilityAsync_EffectStackChanged&&); \
	UAbilityAsync_EffectStackChanged(const UAbilityAsync_EffectStackChanged&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAbilityAsync_EffectStackChanged); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilityAsync_EffectStackChanged); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilityAsync_EffectStackChanged) \
	NO_API virtual ~UAbilityAsync_EffectStackChanged();


#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_AbilityAsyncs_AbilityAsync_EffectStackChanged_h_14_PROLOG
#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_AbilityAsyncs_AbilityAsync_EffectStackChanged_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_AbilityAsyncs_AbilityAsync_EffectStackChanged_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_AbilityAsyncs_AbilityAsync_EffectStackChanged_h_17_INCLASS_NO_PURE_DECLS \
	FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_AbilityAsyncs_AbilityAsync_EffectStackChanged_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GASMAGICIAN_API UClass* StaticClass<class UAbilityAsync_EffectStackChanged>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_AbilityAsyncs_AbilityAsync_EffectStackChanged_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
