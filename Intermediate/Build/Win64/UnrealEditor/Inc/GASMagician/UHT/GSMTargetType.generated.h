// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GSMTargetType.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FGameplayAbilityTargetDataHandle;
struct FGameplayEventData;
struct FHitResult;
#ifdef GASMAGICIAN_GSMTargetType_generated_h
#error "GSMTargetType.generated.h already included, missing '#pragma once' in GSMTargetType.h"
#endif
#define GASMAGICIAN_GSMTargetType_generated_h

#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_GSMTargetType_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetTargets);


#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_GSMTargetType_h_21_CALLBACK_WRAPPERS
#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_GSMTargetType_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGSMTargetType(); \
	friend struct Z_Construct_UClass_UGSMTargetType_Statics; \
public: \
	DECLARE_CLASS(UGSMTargetType, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GASMagician"), NO_API) \
	DECLARE_SERIALIZER(UGSMTargetType)


#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_GSMTargetType_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGSMTargetType(UGSMTargetType&&); \
	UGSMTargetType(const UGSMTargetType&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSMTargetType); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSMTargetType); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGSMTargetType) \
	NO_API virtual ~UGSMTargetType();


#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_GSMTargetType_h_18_PROLOG
#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_GSMTargetType_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_GSMTargetType_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_GSMTargetType_h_21_CALLBACK_WRAPPERS \
	FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_GSMTargetType_h_21_INCLASS_NO_PURE_DECLS \
	FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_GSMTargetType_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GASMAGICIAN_API UClass* StaticClass<class UGSMTargetType>();

#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_GSMTargetType_h_38_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGSMTargetType_UseOwner(); \
	friend struct Z_Construct_UClass_UGSMTargetType_UseOwner_Statics; \
public: \
	DECLARE_CLASS(UGSMTargetType_UseOwner, UGSMTargetType, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GASMagician"), NO_API) \
	DECLARE_SERIALIZER(UGSMTargetType_UseOwner)


#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_GSMTargetType_h_38_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGSMTargetType_UseOwner(UGSMTargetType_UseOwner&&); \
	UGSMTargetType_UseOwner(const UGSMTargetType_UseOwner&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSMTargetType_UseOwner); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSMTargetType_UseOwner); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGSMTargetType_UseOwner) \
	NO_API virtual ~UGSMTargetType_UseOwner();


#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_GSMTargetType_h_35_PROLOG
#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_GSMTargetType_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_GSMTargetType_h_38_INCLASS_NO_PURE_DECLS \
	FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_GSMTargetType_h_38_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GASMAGICIAN_API UClass* StaticClass<class UGSMTargetType_UseOwner>();

#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_GSMTargetType_h_52_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGSMTargetType_UseEventData(); \
	friend struct Z_Construct_UClass_UGSMTargetType_UseEventData_Statics; \
public: \
	DECLARE_CLASS(UGSMTargetType_UseEventData, UGSMTargetType, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GASMagician"), NO_API) \
	DECLARE_SERIALIZER(UGSMTargetType_UseEventData)


#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_GSMTargetType_h_52_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGSMTargetType_UseEventData(UGSMTargetType_UseEventData&&); \
	UGSMTargetType_UseEventData(const UGSMTargetType_UseEventData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSMTargetType_UseEventData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSMTargetType_UseEventData); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGSMTargetType_UseEventData) \
	NO_API virtual ~UGSMTargetType_UseEventData();


#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_GSMTargetType_h_49_PROLOG
#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_GSMTargetType_h_52_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_GSMTargetType_h_52_INCLASS_NO_PURE_DECLS \
	FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_GSMTargetType_h_52_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GASMAGICIAN_API UClass* StaticClass<class UGSMTargetType_UseEventData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_GSMTargetType_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
