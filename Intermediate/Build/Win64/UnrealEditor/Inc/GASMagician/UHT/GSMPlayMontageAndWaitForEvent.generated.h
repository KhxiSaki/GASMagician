// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilityTasks/GSMPlayMontageAndWaitForEvent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimMontage;
class UGameplayAbility;
class UGSMPlayMontageAndWaitForEvent;
struct FGameplayEventData;
struct FGameplayTag;
struct FGameplayTagContainer;
#ifdef GASMAGICIAN_GSMPlayMontageAndWaitForEvent_generated_h
#error "GSMPlayMontageAndWaitForEvent.generated.h already included, missing '#pragma once' in GSMPlayMontageAndWaitForEvent.h"
#endif
#define GASMAGICIAN_GSMPlayMontageAndWaitForEvent_generated_h

#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_AbilityTasks_GSMPlayMontageAndWaitForEvent_h_9_DELEGATE \
GASMAGICIAN_API void FMontageWaitForEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& MontageWaitForEventDelegate, FGameplayTag EventTag, FGameplayEventData EventData);


#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_AbilityTasks_GSMPlayMontageAndWaitForEvent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCreatePlayMontageAndWaitProxy); \
	DECLARE_FUNCTION(execOnMontageEnded); \
	DECLARE_FUNCTION(execOnGameplayAbilityCancelled); \
	DECLARE_FUNCTION(execOnMontageInterrupted); \
	DECLARE_FUNCTION(execOnMontageBlendingOut); \
	DECLARE_FUNCTION(execOnMontageBlendedIn);


#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_AbilityTasks_GSMPlayMontageAndWaitForEvent_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGSMPlayMontageAndWaitForEvent(); \
	friend struct Z_Construct_UClass_UGSMPlayMontageAndWaitForEvent_Statics; \
public: \
	DECLARE_CLASS(UGSMPlayMontageAndWaitForEvent, UAbilityTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GASMagician"), NO_API) \
	DECLARE_SERIALIZER(UGSMPlayMontageAndWaitForEvent)


#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_AbilityTasks_GSMPlayMontageAndWaitForEvent_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGSMPlayMontageAndWaitForEvent(UGSMPlayMontageAndWaitForEvent&&); \
	UGSMPlayMontageAndWaitForEvent(const UGSMPlayMontageAndWaitForEvent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSMPlayMontageAndWaitForEvent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSMPlayMontageAndWaitForEvent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSMPlayMontageAndWaitForEvent) \
	NO_API virtual ~UGSMPlayMontageAndWaitForEvent();


#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_AbilityTasks_GSMPlayMontageAndWaitForEvent_h_13_PROLOG
#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_AbilityTasks_GSMPlayMontageAndWaitForEvent_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_AbilityTasks_GSMPlayMontageAndWaitForEvent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_AbilityTasks_GSMPlayMontageAndWaitForEvent_h_16_INCLASS_NO_PURE_DECLS \
	FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_AbilityTasks_GSMPlayMontageAndWaitForEvent_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GASMAGICIAN_API UClass* StaticClass<class UGSMPlayMontageAndWaitForEvent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_AbilityTasks_GSMPlayMontageAndWaitForEvent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
