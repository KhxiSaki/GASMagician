// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ModularGameplayActors/GSMModularPlayerState.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GASMAGICIAN_GSMModularPlayerState_generated_h
#error "GSMModularPlayerState.generated.h already included, missing '#pragma once' in GSMModularPlayerState.h"
#endif
#define GASMAGICIAN_GSMModularPlayerState_generated_h

#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_ModularGameplayActors_GSMModularPlayerState_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGSMModularPlayerState(); \
	friend struct Z_Construct_UClass_AGSMModularPlayerState_Statics; \
public: \
	DECLARE_CLASS(AGSMModularPlayerState, APlayerState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GASMagician"), NO_API) \
	DECLARE_SERIALIZER(AGSMModularPlayerState) \
	virtual UObject* _getUObject() const override { return const_cast<AGSMModularPlayerState*>(this); }


#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_ModularGameplayActors_GSMModularPlayerState_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AGSMModularPlayerState(AGSMModularPlayerState&&); \
	AGSMModularPlayerState(const AGSMModularPlayerState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGSMModularPlayerState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGSMModularPlayerState); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGSMModularPlayerState) \
	NO_API virtual ~AGSMModularPlayerState();


#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_ModularGameplayActors_GSMModularPlayerState_h_15_PROLOG
#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_ModularGameplayActors_GSMModularPlayerState_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_ModularGameplayActors_GSMModularPlayerState_h_18_INCLASS_NO_PURE_DECLS \
	FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_ModularGameplayActors_GSMModularPlayerState_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GASMAGICIAN_API UClass* StaticClass<class AGSMModularPlayerState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_ModularGameplayActors_GSMModularPlayerState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
