// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ModularGameplayActors/GSMModularCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AGSMModularCharacter;
class UGSMAttributeSet;
struct FGameplayTagContainer;
#ifdef GASMAGICIAN_GSMModularCharacter_generated_h
#error "GSMModularCharacter.generated.h already included, missing '#pragma once' in GSMModularCharacter.h"
#endif
#define GASMAGICIAN_GSMModularCharacter_generated_h

#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_ModularGameplayActors_GSMModularCharacter_h_18_CALLBACK_WRAPPERS
#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_ModularGameplayActors_GSMModularCharacter_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGSMModularCharacter(); \
	friend struct Z_Construct_UClass_AGSMModularCharacter_Statics; \
public: \
	DECLARE_CLASS(AGSMModularCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GASMagician"), NO_API) \
	DECLARE_SERIALIZER(AGSMModularCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<AGSMModularCharacter*>(this); }


#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_ModularGameplayActors_GSMModularCharacter_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AGSMModularCharacter(AGSMModularCharacter&&); \
	AGSMModularCharacter(const AGSMModularCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGSMModularCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGSMModularCharacter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGSMModularCharacter) \
	NO_API virtual ~AGSMModularCharacter();


#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_ModularGameplayActors_GSMModularCharacter_h_15_PROLOG
#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_ModularGameplayActors_GSMModularCharacter_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_ModularGameplayActors_GSMModularCharacter_h_18_CALLBACK_WRAPPERS \
	FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_ModularGameplayActors_GSMModularCharacter_h_18_INCLASS_NO_PURE_DECLS \
	FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_ModularGameplayActors_GSMModularCharacter_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GASMAGICIAN_API UClass* StaticClass<class AGSMModularCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_ModularGameplayActors_GSMModularCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
