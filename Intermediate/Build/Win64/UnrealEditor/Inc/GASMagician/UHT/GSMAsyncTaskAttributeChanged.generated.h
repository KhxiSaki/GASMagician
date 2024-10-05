// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AsyncTasks/GSMAsyncTaskAttributeChanged.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAbilitySystemComponent;
class UGSMAsyncTaskAttributeChanged;
struct FGameplayAttribute;
#ifdef GASMAGICIAN_GSMAsyncTaskAttributeChanged_generated_h
#error "GSMAsyncTaskAttributeChanged.generated.h already included, missing '#pragma once' in GSMAsyncTaskAttributeChanged.h"
#endif
#define GASMAGICIAN_GSMAsyncTaskAttributeChanged_generated_h

#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_AsyncTasks_GSMAsyncTaskAttributeChanged_h_10_DELEGATE \
GASMAGICIAN_API void FAsyncOnAttributeChanged_DelegateWrapper(const FMulticastScriptDelegate& AsyncOnAttributeChanged, FGameplayAttribute Attribute, float NewValue, float OldValue);


#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_AsyncTasks_GSMAsyncTaskAttributeChanged_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execEndTask); \
	DECLARE_FUNCTION(execListenForAttributesChange); \
	DECLARE_FUNCTION(execListenForAttributeChange);


#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_AsyncTasks_GSMAsyncTaskAttributeChanged_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGSMAsyncTaskAttributeChanged(); \
	friend struct Z_Construct_UClass_UGSMAsyncTaskAttributeChanged_Statics; \
public: \
	DECLARE_CLASS(UGSMAsyncTaskAttributeChanged, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GASMagician"), NO_API) \
	DECLARE_SERIALIZER(UGSMAsyncTaskAttributeChanged)


#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_AsyncTasks_GSMAsyncTaskAttributeChanged_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSMAsyncTaskAttributeChanged(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGSMAsyncTaskAttributeChanged(UGSMAsyncTaskAttributeChanged&&); \
	UGSMAsyncTaskAttributeChanged(const UGSMAsyncTaskAttributeChanged&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSMAsyncTaskAttributeChanged); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSMAsyncTaskAttributeChanged); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSMAsyncTaskAttributeChanged) \
	NO_API virtual ~UGSMAsyncTaskAttributeChanged();


#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_AsyncTasks_GSMAsyncTaskAttributeChanged_h_16_PROLOG
#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_AsyncTasks_GSMAsyncTaskAttributeChanged_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_AsyncTasks_GSMAsyncTaskAttributeChanged_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_AsyncTasks_GSMAsyncTaskAttributeChanged_h_19_INCLASS_NO_PURE_DECLS \
	FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_AsyncTasks_GSMAsyncTaskAttributeChanged_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GASMAGICIAN_API UClass* StaticClass<class UGSMAsyncTaskAttributeChanged>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_AsyncTasks_GSMAsyncTaskAttributeChanged_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
