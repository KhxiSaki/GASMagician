// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GSMGameplayAbility.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FActiveGameplayEffectHandle;
struct FGameplayAbilityTargetDataHandle;
struct FGameplayEventData;
struct FGameplayTag;
struct FGSMGameplayEffectContainer;
struct FGSMGameplayEffectContainerSpec;
struct FHitResult;
#ifdef GASMAGICIAN_GSMGameplayAbility_generated_h
#error "GSMGameplayAbility.generated.h already included, missing '#pragma once' in GSMGameplayAbility.h"
#endif
#define GASMAGICIAN_GSMGameplayAbility_generated_h

#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_GSMGameplayAbility_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execMakeGameplayAbilityTargetDataHandleFromHitResults); \
	DECLARE_FUNCTION(execMakeGameplayAbilityTargetDataHandleFromActorArray); \
	DECLARE_FUNCTION(execApplyEffectContainer); \
	DECLARE_FUNCTION(execApplyEffectContainerSpec); \
	DECLARE_FUNCTION(execMakeEffectContainerSpec); \
	DECLARE_FUNCTION(execMakeEffectContainerSpecFromContainer);


#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_GSMGameplayAbility_h_36_CALLBACK_WRAPPERS
#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_GSMGameplayAbility_h_36_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGSMGameplayAbility(); \
	friend struct Z_Construct_UClass_UGSMGameplayAbility_Statics; \
public: \
	DECLARE_CLASS(UGSMGameplayAbility, UGameplayAbility, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GASMagician"), NO_API) \
	DECLARE_SERIALIZER(UGSMGameplayAbility)


#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_GSMGameplayAbility_h_36_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGSMGameplayAbility(UGSMGameplayAbility&&); \
	UGSMGameplayAbility(const UGSMGameplayAbility&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSMGameplayAbility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSMGameplayAbility); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSMGameplayAbility) \
	NO_API virtual ~UGSMGameplayAbility();


#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_GSMGameplayAbility_h_33_PROLOG
#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_GSMGameplayAbility_h_36_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_GSMGameplayAbility_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_GSMGameplayAbility_h_36_CALLBACK_WRAPPERS \
	FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_GSMGameplayAbility_h_36_INCLASS_NO_PURE_DECLS \
	FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_GSMGameplayAbility_h_36_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GASMAGICIAN_API UClass* StaticClass<class UGSMGameplayAbility>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_GSMGameplayAbility_h


#define FOREACH_ENUM_EGSMABILITYACTIVATIONPOLICY(op) \
	op(EGSMAbilityActivationPolicy::OnInputTriggered) \
	op(EGSMAbilityActivationPolicy::WhileInputActive) \
	op(EGSMAbilityActivationPolicy::OnSpawn) 

enum class EGSMAbilityActivationPolicy : uint8;
template<> struct TIsUEnumClass<EGSMAbilityActivationPolicy> { enum { Value = true }; };
template<> GASMAGICIAN_API UEnum* StaticEnum<EGSMAbilityActivationPolicy>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
