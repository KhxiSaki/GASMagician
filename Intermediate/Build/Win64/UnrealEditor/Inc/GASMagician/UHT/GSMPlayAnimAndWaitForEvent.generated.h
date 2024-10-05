// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilityTasks/GSMPlayAnimAndWaitForEvent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimMontage;
class UAnimSequence;
class UGameplayAbility;
class UGSMPlayAnimAndWaitForEvent;
struct FGameplayEventData;
struct FGameplayTag;
struct FGameplayTagContainer;
#ifdef GASMAGICIAN_GSMPlayAnimAndWaitForEvent_generated_h
#error "GSMPlayAnimAndWaitForEvent.generated.h already included, missing '#pragma once' in GSMPlayAnimAndWaitForEvent.h"
#endif
#define GASMAGICIAN_GSMPlayAnimAndWaitForEvent_generated_h

#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_AbilityTasks_GSMPlayAnimAndWaitForEvent_h_9_DELEGATE \
GASMAGICIAN_API void FPlayAnimWaitForEventSimpleDelegate_DelegateWrapper(const FMulticastScriptDelegate& PlayAnimWaitForEventSimpleDelegate, FGameplayTag EventTag, FGameplayEventData EventData);


#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_AbilityTasks_GSMPlayAnimAndWaitForEvent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCreatePlayAnimAndWaitProxy); \
	DECLARE_FUNCTION(execOnMontageEnded); \
	DECLARE_FUNCTION(execOnMontageInterrupted); \
	DECLARE_FUNCTION(execOnMontageBlendingOut); \
	DECLARE_FUNCTION(execOnMontageBlendedIn);


#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_AbilityTasks_GSMPlayAnimAndWaitForEvent_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGSMPlayAnimAndWaitForEvent(); \
	friend struct Z_Construct_UClass_UGSMPlayAnimAndWaitForEvent_Statics; \
public: \
	DECLARE_CLASS(UGSMPlayAnimAndWaitForEvent, UAbilityTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GASMagician"), NO_API) \
	DECLARE_SERIALIZER(UGSMPlayAnimAndWaitForEvent)


#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_AbilityTasks_GSMPlayAnimAndWaitForEvent_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGSMPlayAnimAndWaitForEvent(UGSMPlayAnimAndWaitForEvent&&); \
	UGSMPlayAnimAndWaitForEvent(const UGSMPlayAnimAndWaitForEvent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSMPlayAnimAndWaitForEvent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSMPlayAnimAndWaitForEvent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSMPlayAnimAndWaitForEvent) \
	NO_API virtual ~UGSMPlayAnimAndWaitForEvent();


#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_AbilityTasks_GSMPlayAnimAndWaitForEvent_h_15_PROLOG
#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_AbilityTasks_GSMPlayAnimAndWaitForEvent_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_AbilityTasks_GSMPlayAnimAndWaitForEvent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_AbilityTasks_GSMPlayAnimAndWaitForEvent_h_18_INCLASS_NO_PURE_DECLS \
	FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_AbilityTasks_GSMPlayAnimAndWaitForEvent_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GASMAGICIAN_API UClass* StaticClass<class UGSMPlayAnimAndWaitForEvent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_AbilityTasks_GSMPlayAnimAndWaitForEvent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
