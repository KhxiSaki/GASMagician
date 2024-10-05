// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GSMGameInstance.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GASMAGICIAN_GSMGameInstance_generated_h
#error "GSMGameInstance.generated.h already included, missing '#pragma once' in GSMGameInstance.h"
#endif
#define GASMAGICIAN_GSMGameInstance_generated_h

#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_GSMGameInstance_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGSMGameInstance(); \
	friend struct Z_Construct_UClass_UGSMGameInstance_Statics; \
public: \
	DECLARE_CLASS(UGSMGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/GASMagician"), NO_API) \
	DECLARE_SERIALIZER(UGSMGameInstance)


#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_GSMGameInstance_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSMGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGSMGameInstance(UGSMGameInstance&&); \
	UGSMGameInstance(const UGSMGameInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSMGameInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSMGameInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSMGameInstance) \
	NO_API virtual ~UGSMGameInstance();


#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_GSMGameInstance_h_13_PROLOG
#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_GSMGameInstance_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_GSMGameInstance_h_16_INCLASS_NO_PURE_DECLS \
	FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_GSMGameInstance_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GASMAGICIAN_API UClass* StaticClass<class UGSMGameInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_GSMGameInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
