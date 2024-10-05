// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AsyncTasks/GSMAsyncTaskCooldownChanged.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAbilitySystemComponent;
class UGSMAsyncTaskCooldownChanged;
struct FGameplayTag;
struct FGameplayTagContainer;
#ifdef GASMAGICIAN_GSMAsyncTaskCooldownChanged_generated_h
#error "GSMAsyncTaskCooldownChanged.generated.h already included, missing '#pragma once' in GSMAsyncTaskCooldownChanged.h"
#endif
#define GASMAGICIAN_GSMAsyncTaskCooldownChanged_generated_h

#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_AsyncTasks_GSMAsyncTaskCooldownChanged_h_11_DELEGATE \
GASMAGICIAN_API void FAsyncOnCooldownChanged_DelegateWrapper(const FMulticastScriptDelegate& AsyncOnCooldownChanged, FGameplayTag CooldownTag, float TimeRemaining, float Duration);


#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_AsyncTasks_GSMAsyncTaskCooldownChanged_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execEndTask); \
	DECLARE_FUNCTION(execListenForCooldownChange);


#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_AsyncTasks_GSMAsyncTaskCooldownChanged_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGSMAsyncTaskCooldownChanged(); \
	friend struct Z_Construct_UClass_UGSMAsyncTaskCooldownChanged_Statics; \
public: \
	DECLARE_CLASS(UGSMAsyncTaskCooldownChanged, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GASMagician"), NO_API) \
	DECLARE_SERIALIZER(UGSMAsyncTaskCooldownChanged)


#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_AsyncTasks_GSMAsyncTaskCooldownChanged_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSMAsyncTaskCooldownChanged(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGSMAsyncTaskCooldownChanged(UGSMAsyncTaskCooldownChanged&&); \
	UGSMAsyncTaskCooldownChanged(const UGSMAsyncTaskCooldownChanged&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSMAsyncTaskCooldownChanged); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSMAsyncTaskCooldownChanged); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSMAsyncTaskCooldownChanged) \
	NO_API virtual ~UGSMAsyncTaskCooldownChanged();


#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_AsyncTasks_GSMAsyncTaskCooldownChanged_h_17_PROLOG
#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_AsyncTasks_GSMAsyncTaskCooldownChanged_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_AsyncTasks_GSMAsyncTaskCooldownChanged_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_AsyncTasks_GSMAsyncTaskCooldownChanged_h_20_INCLASS_NO_PURE_DECLS \
	FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_AsyncTasks_GSMAsyncTaskCooldownChanged_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GASMAGICIAN_API UClass* StaticClass<class UGSMAsyncTaskCooldownChanged>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_AsyncTasks_GSMAsyncTaskCooldownChanged_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
