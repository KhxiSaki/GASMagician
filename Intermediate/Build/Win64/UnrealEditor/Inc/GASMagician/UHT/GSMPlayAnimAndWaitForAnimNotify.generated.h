// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilityTasks/GSMPlayAnimAndWaitForAnimNotify.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimMontage;
class UAnimSequence;
class UGameplayAbility;
class UGSMPlayAnimAndWaitForAnimNotify;
struct FBranchingPointNotifyPayload;
#ifdef GASMAGICIAN_GSMPlayAnimAndWaitForAnimNotify_generated_h
#error "GSMPlayAnimAndWaitForAnimNotify.generated.h already included, missing '#pragma once' in GSMPlayAnimAndWaitForAnimNotify.h"
#endif
#define GASMAGICIAN_GSMPlayAnimAndWaitForAnimNotify_generated_h

#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_AbilityTasks_GSMPlayAnimAndWaitForAnimNotify_h_9_DELEGATE \
GASMAGICIAN_API void FPlayAnimWaitForAnimNotifySimpleDelegate_DelegateWrapper(const FMulticastScriptDelegate& PlayAnimWaitForAnimNotifySimpleDelegate);


#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_AbilityTasks_GSMPlayAnimAndWaitForAnimNotify_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCreatePlayAnimAndWaitProxy); \
	DECLARE_FUNCTION(execOnAnimationNotifyBeginReceived); \
	DECLARE_FUNCTION(execOnMontageEnded); \
	DECLARE_FUNCTION(execOnMontageInterrupted); \
	DECLARE_FUNCTION(execOnMontageBlendingOut); \
	DECLARE_FUNCTION(execOnMontageBlendedIn);


#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_AbilityTasks_GSMPlayAnimAndWaitForAnimNotify_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGSMPlayAnimAndWaitForAnimNotify(); \
	friend struct Z_Construct_UClass_UGSMPlayAnimAndWaitForAnimNotify_Statics; \
public: \
	DECLARE_CLASS(UGSMPlayAnimAndWaitForAnimNotify, UAbilityTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GASMagician"), NO_API) \
	DECLARE_SERIALIZER(UGSMPlayAnimAndWaitForAnimNotify)


#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_AbilityTasks_GSMPlayAnimAndWaitForAnimNotify_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGSMPlayAnimAndWaitForAnimNotify(UGSMPlayAnimAndWaitForAnimNotify&&); \
	UGSMPlayAnimAndWaitForAnimNotify(const UGSMPlayAnimAndWaitForAnimNotify&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSMPlayAnimAndWaitForAnimNotify); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSMPlayAnimAndWaitForAnimNotify); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSMPlayAnimAndWaitForAnimNotify) \
	NO_API virtual ~UGSMPlayAnimAndWaitForAnimNotify();


#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_AbilityTasks_GSMPlayAnimAndWaitForAnimNotify_h_15_PROLOG
#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_AbilityTasks_GSMPlayAnimAndWaitForAnimNotify_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_AbilityTasks_GSMPlayAnimAndWaitForAnimNotify_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_AbilityTasks_GSMPlayAnimAndWaitForAnimNotify_h_18_INCLASS_NO_PURE_DECLS \
	FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_AbilityTasks_GSMPlayAnimAndWaitForAnimNotify_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GASMAGICIAN_API UClass* StaticClass<class UGSMPlayAnimAndWaitForAnimNotify>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_AbilityTasks_GSMPlayAnimAndWaitForAnimNotify_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
