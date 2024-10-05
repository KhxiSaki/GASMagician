// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Libraries/GSMGameplayStatics.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FActiveGameplayEffectHandle;
struct FGameplayAbilityTargetDataHandle;
struct FGSMGameplayEffectContainerSpec;
struct FHitResult;
#ifdef GASMAGICIAN_GSMGameplayStatics_generated_h
#error "GSMGameplayStatics.generated.h already included, missing '#pragma once' in GSMGameplayStatics.h"
#endif
#define GASMAGICIAN_GSMGameplayStatics_generated_h

#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_Libraries_GSMGameplayStatics_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execClearEffectContainerSpecTargets); \
	DECLARE_FUNCTION(execApplyExternalEffectContainerSpec); \
	DECLARE_FUNCTION(execAddTargetsToEffectContainerSpec); \
	DECLARE_FUNCTION(execDoesEffectContainerSpecHaveTargets); \
	DECLARE_FUNCTION(execDoesEffectContainerSpecHaveEffects);


#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_Libraries_GSMGameplayStatics_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGSMGameplayStatics(); \
	friend struct Z_Construct_UClass_UGSMGameplayStatics_Statics; \
public: \
	DECLARE_CLASS(UGSMGameplayStatics, UGameplayStatics, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GASMagician"), NO_API) \
	DECLARE_SERIALIZER(UGSMGameplayStatics)


#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_Libraries_GSMGameplayStatics_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSMGameplayStatics(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGSMGameplayStatics(UGSMGameplayStatics&&); \
	UGSMGameplayStatics(const UGSMGameplayStatics&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSMGameplayStatics); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSMGameplayStatics); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSMGameplayStatics) \
	NO_API virtual ~UGSMGameplayStatics();


#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_Libraries_GSMGameplayStatics_h_13_PROLOG
#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_Libraries_GSMGameplayStatics_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_Libraries_GSMGameplayStatics_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_Libraries_GSMGameplayStatics_h_16_INCLASS_NO_PURE_DECLS \
	FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_Libraries_GSMGameplayStatics_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GASMAGICIAN_API UClass* StaticClass<class UGSMGameplayStatics>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_Libraries_GSMGameplayStatics_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
