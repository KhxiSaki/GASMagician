// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animations/GSMAnimInstance.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAbilitySystemComponent;
#ifdef GASMAGICIAN_GSMAnimInstance_generated_h
#error "GSMAnimInstance.generated.h already included, missing '#pragma once' in GSMAnimInstance.h"
#endif
#define GASMAGICIAN_GSMAnimInstance_generated_h

#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_Animations_GSMAnimInstance_h_17_CALLBACK_WRAPPERS
#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_Animations_GSMAnimInstance_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGSMAnimInstance(); \
	friend struct Z_Construct_UClass_UGSMAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UGSMAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/GASMagician"), NO_API) \
	DECLARE_SERIALIZER(UGSMAnimInstance) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_Animations_GSMAnimInstance_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSMAnimInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGSMAnimInstance(UGSMAnimInstance&&); \
	UGSMAnimInstance(const UGSMAnimInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSMAnimInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSMAnimInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSMAnimInstance) \
	NO_API virtual ~UGSMAnimInstance();


#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_Animations_GSMAnimInstance_h_14_PROLOG
#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_Animations_GSMAnimInstance_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_Animations_GSMAnimInstance_h_17_CALLBACK_WRAPPERS \
	FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_Animations_GSMAnimInstance_h_17_INCLASS_NO_PURE_DECLS \
	FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_Animations_GSMAnimInstance_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GASMAGICIAN_API UClass* StaticClass<class UGSMAnimInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_Animations_GSMAnimInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
