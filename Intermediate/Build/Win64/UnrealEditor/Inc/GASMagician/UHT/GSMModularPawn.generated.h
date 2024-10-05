// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ModularGameplayActors/GSMModularPawn.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GASMAGICIAN_GSMModularPawn_generated_h
#error "GSMModularPawn.generated.h already included, missing '#pragma once' in GSMModularPawn.h"
#endif
#define GASMAGICIAN_GSMModularPawn_generated_h

#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_ModularGameplayActors_GSMModularPawn_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGSMModularPawn(); \
	friend struct Z_Construct_UClass_AGSMModularPawn_Statics; \
public: \
	DECLARE_CLASS(AGSMModularPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GASMagician"), NO_API) \
	DECLARE_SERIALIZER(AGSMModularPawn) \
	virtual UObject* _getUObject() const override { return const_cast<AGSMModularPawn*>(this); }


#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_ModularGameplayActors_GSMModularPawn_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AGSMModularPawn(AGSMModularPawn&&); \
	AGSMModularPawn(const AGSMModularPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGSMModularPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGSMModularPawn); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGSMModularPawn) \
	NO_API virtual ~AGSMModularPawn();


#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_ModularGameplayActors_GSMModularPawn_h_15_PROLOG
#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_ModularGameplayActors_GSMModularPawn_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_ModularGameplayActors_GSMModularPawn_h_18_INCLASS_NO_PURE_DECLS \
	FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_ModularGameplayActors_GSMModularPawn_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GASMAGICIAN_API UClass* StaticClass<class AGSMModularPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_ModularGameplayActors_GSMModularPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
