// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilityTasks/GSMPlayMontageAndWaitForAnimNotify.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimMontage;
class UGameplayAbility;
class UGSMPlayMontageAndWaitForAnimNotify;
struct FBranchingPointNotifyPayload;
#ifdef GASMAGICIAN_GSMPlayMontageAndWaitForAnimNotify_generated_h
#error "GSMPlayMontageAndWaitForAnimNotify.generated.h already included, missing '#pragma once' in GSMPlayMontageAndWaitForAnimNotify.h"
#endif
#define GASMAGICIAN_GSMPlayMontageAndWaitForAnimNotify_generated_h

#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_AbilityTasks_GSMPlayMontageAndWaitForAnimNotify_h_9_DELEGATE \
GASMAGICIAN_API void FMontageWaitForAnimNotifyDelegate_DelegateWrapper(const FMulticastScriptDelegate& MontageWaitForAnimNotifyDelegate);


#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_AbilityTasks_GSMPlayMontageAndWaitForAnimNotify_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCreatePlayMontageAndWaitProxy); \
	DECLARE_FUNCTION(execOnAnimationNotifyBeginReceived); \
	DECLARE_FUNCTION(execOnMontageEnded); \
	DECLARE_FUNCTION(execOnGameplayAbilityCancelled); \
	DECLARE_FUNCTION(execOnMontageInterrupted); \
	DECLARE_FUNCTION(execOnMontageBlendingOut); \
	DECLARE_FUNCTION(execOnMontageBlendedIn);


#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_AbilityTasks_GSMPlayMontageAndWaitForAnimNotify_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGSMPlayMontageAndWaitForAnimNotify(); \
	friend struct Z_Construct_UClass_UGSMPlayMontageAndWaitForAnimNotify_Statics; \
public: \
	DECLARE_CLASS(UGSMPlayMontageAndWaitForAnimNotify, UAbilityTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GASMagician"), NO_API) \
	DECLARE_SERIALIZER(UGSMPlayMontageAndWaitForAnimNotify)


#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_AbilityTasks_GSMPlayMontageAndWaitForAnimNotify_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGSMPlayMontageAndWaitForAnimNotify(UGSMPlayMontageAndWaitForAnimNotify&&); \
	UGSMPlayMontageAndWaitForAnimNotify(const UGSMPlayMontageAndWaitForAnimNotify&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSMPlayMontageAndWaitForAnimNotify); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSMPlayMontageAndWaitForAnimNotify); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSMPlayMontageAndWaitForAnimNotify) \
	NO_API virtual ~UGSMPlayMontageAndWaitForAnimNotify();


#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_AbilityTasks_GSMPlayMontageAndWaitForAnimNotify_h_13_PROLOG
#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_AbilityTasks_GSMPlayMontageAndWaitForAnimNotify_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_AbilityTasks_GSMPlayMontageAndWaitForAnimNotify_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_AbilityTasks_GSMPlayMontageAndWaitForAnimNotify_h_16_INCLASS_NO_PURE_DECLS \
	FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_AbilityTasks_GSMPlayMontageAndWaitForAnimNotify_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GASMAGICIAN_API UClass* StaticClass<class UGSMPlayMontageAndWaitForAnimNotify>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_AbilityTasks_GSMPlayMontageAndWaitForAnimNotify_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
