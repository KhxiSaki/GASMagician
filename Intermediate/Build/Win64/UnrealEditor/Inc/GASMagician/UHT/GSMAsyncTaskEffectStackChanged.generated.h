// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AsyncTasks/GSMAsyncTaskEffectStackChanged.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAbilitySystemComponent;
class UGSMAsyncTaskEffectStackChanged;
struct FActiveGameplayEffectHandle;
struct FGameplayTag;
#ifdef GASMAGICIAN_GSMAsyncTaskEffectStackChanged_generated_h
#error "GSMAsyncTaskEffectStackChanged.generated.h already included, missing '#pragma once' in GSMAsyncTaskEffectStackChanged.h"
#endif
#define GASMAGICIAN_GSMAsyncTaskEffectStackChanged_generated_h

#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_AsyncTasks_GSMAsyncTaskEffectStackChanged_h_10_DELEGATE \
GASMAGICIAN_API void FAsyncOnGameplayEffectStackChanged_DelegateWrapper(const FMulticastScriptDelegate& AsyncOnGameplayEffectStackChanged, FGameplayTag EffectGameplayTag, FActiveGameplayEffectHandle Handle, int32 NewStackCount, int32 OldStackCount);


#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_AsyncTasks_GSMAsyncTaskEffectStackChanged_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execEndTask); \
	DECLARE_FUNCTION(execListenForGameplayEffectStackChange);


#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_AsyncTasks_GSMAsyncTaskEffectStackChanged_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGSMAsyncTaskEffectStackChanged(); \
	friend struct Z_Construct_UClass_UGSMAsyncTaskEffectStackChanged_Statics; \
public: \
	DECLARE_CLASS(UGSMAsyncTaskEffectStackChanged, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GASMagician"), NO_API) \
	DECLARE_SERIALIZER(UGSMAsyncTaskEffectStackChanged)


#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_AsyncTasks_GSMAsyncTaskEffectStackChanged_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSMAsyncTaskEffectStackChanged(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGSMAsyncTaskEffectStackChanged(UGSMAsyncTaskEffectStackChanged&&); \
	UGSMAsyncTaskEffectStackChanged(const UGSMAsyncTaskEffectStackChanged&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSMAsyncTaskEffectStackChanged); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSMAsyncTaskEffectStackChanged); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSMAsyncTaskEffectStackChanged) \
	NO_API virtual ~UGSMAsyncTaskEffectStackChanged();


#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_AsyncTasks_GSMAsyncTaskEffectStackChanged_h_16_PROLOG
#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_AsyncTasks_GSMAsyncTaskEffectStackChanged_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_AsyncTasks_GSMAsyncTaskEffectStackChanged_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_AsyncTasks_GSMAsyncTaskEffectStackChanged_h_19_INCLASS_NO_PURE_DECLS \
	FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_AsyncTasks_GSMAsyncTaskEffectStackChanged_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GASMAGICIAN_API UClass* StaticClass<class UGSMAsyncTaskEffectStackChanged>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_AsyncTasks_GSMAsyncTaskEffectStackChanged_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
