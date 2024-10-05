// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ModularGameplayActors/GSMModularActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GASMAGICIAN_GSMModularActor_generated_h
#error "GSMModularActor.generated.h already included, missing '#pragma once' in GSMModularActor.h"
#endif
#define GASMAGICIAN_GSMModularActor_generated_h

#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_ModularGameplayActors_GSMModularActor_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGSMModularActor(); \
	friend struct Z_Construct_UClass_AGSMModularActor_Statics; \
public: \
	DECLARE_CLASS(AGSMModularActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GASMagician"), NO_API) \
	DECLARE_SERIALIZER(AGSMModularActor) \
	virtual UObject* _getUObject() const override { return const_cast<AGSMModularActor*>(this); }


#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_ModularGameplayActors_GSMModularActor_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AGSMModularActor(AGSMModularActor&&); \
	AGSMModularActor(const AGSMModularActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGSMModularActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGSMModularActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGSMModularActor) \
	NO_API virtual ~AGSMModularActor();


#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_ModularGameplayActors_GSMModularActor_h_13_PROLOG
#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_ModularGameplayActors_GSMModularActor_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_ModularGameplayActors_GSMModularActor_h_16_INCLASS_NO_PURE_DECLS \
	FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_ModularGameplayActors_GSMModularActor_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GASMAGICIAN_API UClass* StaticClass<class AGSMModularActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_ModularGameplayActors_GSMModularActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
