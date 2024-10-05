// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilityTasks/GSMPlayMontageMeshAndWaitForAnimNotify.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimMontage;
class UGameplayAbility;
class UGSMPlayMontageMeshAndWaitForAnimNotify;
class USkeletalMeshComponent;
struct FBranchingPointNotifyPayload;
#ifdef GASMAGICIAN_GSMPlayMontageMeshAndWaitForAnimNotify_generated_h
#error "GSMPlayMontageMeshAndWaitForAnimNotify.generated.h already included, missing '#pragma once' in GSMPlayMontageMeshAndWaitForAnimNotify.h"
#endif
#define GASMAGICIAN_GSMPlayMontageMeshAndWaitForAnimNotify_generated_h

#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_AbilityTasks_GSMPlayMontageMeshAndWaitForAnimNotify_h_9_DELEGATE \
GASMAGICIAN_API void FMontageMeshWaitForAnimNotifyDelegate_DelegateWrapper(const FMulticastScriptDelegate& MontageMeshWaitForAnimNotifyDelegate);


#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_AbilityTasks_GSMPlayMontageMeshAndWaitForAnimNotify_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCreatePlayMontageAndWaitProxy); \
	DECLARE_FUNCTION(execOnAnimationNotifyBeginReceived); \
	DECLARE_FUNCTION(execOnMontageEnded); \
	DECLARE_FUNCTION(execOnGameplayAbilityCancelled); \
	DECLARE_FUNCTION(execOnMontageInterrupted); \
	DECLARE_FUNCTION(execOnMontageBlendingOut); \
	DECLARE_FUNCTION(execOnMontageBlendedIn);


#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_AbilityTasks_GSMPlayMontageMeshAndWaitForAnimNotify_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGSMPlayMontageMeshAndWaitForAnimNotify(); \
	friend struct Z_Construct_UClass_UGSMPlayMontageMeshAndWaitForAnimNotify_Statics; \
public: \
	DECLARE_CLASS(UGSMPlayMontageMeshAndWaitForAnimNotify, UAbilityTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GASMagician"), NO_API) \
	DECLARE_SERIALIZER(UGSMPlayMontageMeshAndWaitForAnimNotify)


#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_AbilityTasks_GSMPlayMontageMeshAndWaitForAnimNotify_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGSMPlayMontageMeshAndWaitForAnimNotify(UGSMPlayMontageMeshAndWaitForAnimNotify&&); \
	UGSMPlayMontageMeshAndWaitForAnimNotify(const UGSMPlayMontageMeshAndWaitForAnimNotify&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSMPlayMontageMeshAndWaitForAnimNotify); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSMPlayMontageMeshAndWaitForAnimNotify); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSMPlayMontageMeshAndWaitForAnimNotify) \
	NO_API virtual ~UGSMPlayMontageMeshAndWaitForAnimNotify();


#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_AbilityTasks_GSMPlayMontageMeshAndWaitForAnimNotify_h_13_PROLOG
#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_AbilityTasks_GSMPlayMontageMeshAndWaitForAnimNotify_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_AbilityTasks_GSMPlayMontageMeshAndWaitForAnimNotify_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_AbilityTasks_GSMPlayMontageMeshAndWaitForAnimNotify_h_16_INCLASS_NO_PURE_DECLS \
	FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_AbilityTasks_GSMPlayMontageMeshAndWaitForAnimNotify_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GASMAGICIAN_API UClass* StaticClass<class UGSMPlayMontageMeshAndWaitForAnimNotify>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_AbilityTasks_GSMPlayMontageMeshAndWaitForAnimNotify_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
