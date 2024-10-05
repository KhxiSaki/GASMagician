// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AsyncTasks/GSMAsyncTaskGameplayTagAddedRemoved.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAbilitySystemComponent;
class UGSMAsyncTaskGameplayTagAddedRemoved;
struct FGameplayTag;
struct FGameplayTagContainer;
#ifdef GASMAGICIAN_GSMAsyncTaskGameplayTagAddedRemoved_generated_h
#error "GSMAsyncTaskGameplayTagAddedRemoved.generated.h already included, missing '#pragma once' in GSMAsyncTaskGameplayTagAddedRemoved.h"
#endif
#define GASMAGICIAN_GSMAsyncTaskGameplayTagAddedRemoved_generated_h

#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_AsyncTasks_GSMAsyncTaskGameplayTagAddedRemoved_h_11_DELEGATE \
GASMAGICIAN_API void FAsyncOnGameplayTagAddedRemoved_DelegateWrapper(const FMulticastScriptDelegate& AsyncOnGameplayTagAddedRemoved, FGameplayTag Tag);


#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_AsyncTasks_GSMAsyncTaskGameplayTagAddedRemoved_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execEndTask); \
	DECLARE_FUNCTION(execListenForGameplayTagAddedOrRemoved);


#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_AsyncTasks_GSMAsyncTaskGameplayTagAddedRemoved_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGSMAsyncTaskGameplayTagAddedRemoved(); \
	friend struct Z_Construct_UClass_UGSMAsyncTaskGameplayTagAddedRemoved_Statics; \
public: \
	DECLARE_CLASS(UGSMAsyncTaskGameplayTagAddedRemoved, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GASMagician"), NO_API) \
	DECLARE_SERIALIZER(UGSMAsyncTaskGameplayTagAddedRemoved)


#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_AsyncTasks_GSMAsyncTaskGameplayTagAddedRemoved_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSMAsyncTaskGameplayTagAddedRemoved(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGSMAsyncTaskGameplayTagAddedRemoved(UGSMAsyncTaskGameplayTagAddedRemoved&&); \
	UGSMAsyncTaskGameplayTagAddedRemoved(const UGSMAsyncTaskGameplayTagAddedRemoved&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSMAsyncTaskGameplayTagAddedRemoved); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSMAsyncTaskGameplayTagAddedRemoved); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSMAsyncTaskGameplayTagAddedRemoved) \
	NO_API virtual ~UGSMAsyncTaskGameplayTagAddedRemoved();


#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_AsyncTasks_GSMAsyncTaskGameplayTagAddedRemoved_h_17_PROLOG
#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_AsyncTasks_GSMAsyncTaskGameplayTagAddedRemoved_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_AsyncTasks_GSMAsyncTaskGameplayTagAddedRemoved_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_AsyncTasks_GSMAsyncTaskGameplayTagAddedRemoved_h_20_INCLASS_NO_PURE_DECLS \
	FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_AsyncTasks_GSMAsyncTaskGameplayTagAddedRemoved_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GASMAGICIAN_API UClass* StaticClass<class UGSMAsyncTaskGameplayTagAddedRemoved>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_AsyncTasks_GSMAsyncTaskGameplayTagAddedRemoved_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
