// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Projectile/GSMProjectileMovementComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GASMAGICIAN_GSMProjectileMovementComponent_generated_h
#error "GSMProjectileMovementComponent.generated.h already included, missing '#pragma once' in GSMProjectileMovementComponent.h"
#endif
#define GASMAGICIAN_GSMProjectileMovementComponent_generated_h

#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_Projectile_GSMProjectileMovementComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGSMProjectileMovementComponent(); \
	friend struct Z_Construct_UClass_UGSMProjectileMovementComponent_Statics; \
public: \
	DECLARE_CLASS(UGSMProjectileMovementComponent, UProjectileMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GASMagician"), NO_API) \
	DECLARE_SERIALIZER(UGSMProjectileMovementComponent)


#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_Projectile_GSMProjectileMovementComponent_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSMProjectileMovementComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGSMProjectileMovementComponent(UGSMProjectileMovementComponent&&); \
	UGSMProjectileMovementComponent(const UGSMProjectileMovementComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSMProjectileMovementComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSMProjectileMovementComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSMProjectileMovementComponent) \
	NO_API virtual ~UGSMProjectileMovementComponent();


#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_Projectile_GSMProjectileMovementComponent_h_12_PROLOG
#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_Projectile_GSMProjectileMovementComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_Projectile_GSMProjectileMovementComponent_h_15_INCLASS_NO_PURE_DECLS \
	FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_Projectile_GSMProjectileMovementComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GASMAGICIAN_API UClass* StaticClass<class UGSMProjectileMovementComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_Projectile_GSMProjectileMovementComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
