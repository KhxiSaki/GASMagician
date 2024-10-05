// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Projectile/GSMProjectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GASMAGICIAN_GSMProjectile_generated_h
#error "GSMProjectile.generated.h already included, missing '#pragma once' in GSMProjectile.h"
#endif
#define GASMAGICIAN_GSMProjectile_generated_h

#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_Projectile_GSMProjectile_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGSMProjectile(); \
	friend struct Z_Construct_UClass_AGSMProjectile_Statics; \
public: \
	DECLARE_CLASS(AGSMProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GASMagician"), NO_API) \
	DECLARE_SERIALIZER(AGSMProjectile)


#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_Projectile_GSMProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AGSMProjectile(AGSMProjectile&&); \
	AGSMProjectile(const AGSMProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGSMProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGSMProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGSMProjectile) \
	NO_API virtual ~AGSMProjectile();


#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_Projectile_GSMProjectile_h_9_PROLOG
#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_Projectile_GSMProjectile_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_Projectile_GSMProjectile_h_12_INCLASS_NO_PURE_DECLS \
	FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_Projectile_GSMProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GASMAGICIAN_API UClass* StaticClass<class AGSMProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_Projectile_GSMProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
