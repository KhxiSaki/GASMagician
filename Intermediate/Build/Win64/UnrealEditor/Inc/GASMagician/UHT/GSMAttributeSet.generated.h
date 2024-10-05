// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AttributeSets/GSMAttributeSet.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "Net/Core/PushModel/PushModelMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayAttributeData;
#ifdef GASMAGICIAN_GSMAttributeSet_generated_h
#error "GSMAttributeSet.generated.h already included, missing '#pragma once' in GSMAttributeSet.h"
#endif
#define GASMAGICIAN_GSMAttributeSet_generated_h

#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_AttributeSets_GSMAttributeSet_h_61_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGSMInitStaminaRegenRate); \
	DECLARE_FUNCTION(execGSMSetStaminaRegenRate); \
	DECLARE_FUNCTION(execGSMGetStaminaRegenRate); \
	DECLARE_FUNCTION(execOnRep_StaminaRegenRate); \
	DECLARE_FUNCTION(execGSMInitMaxStamina); \
	DECLARE_FUNCTION(execGSMSetMaxStamina); \
	DECLARE_FUNCTION(execGSMGetMaxStamina); \
	DECLARE_FUNCTION(execOnRep_MaxStamina); \
	DECLARE_FUNCTION(execGSMInitStamina); \
	DECLARE_FUNCTION(execGSMSetStamina); \
	DECLARE_FUNCTION(execGSMGetStamina); \
	DECLARE_FUNCTION(execOnRep_Stamina); \
	DECLARE_FUNCTION(execGSMInitManaRegenRate); \
	DECLARE_FUNCTION(execGSMSetManaRegenRate); \
	DECLARE_FUNCTION(execGSMGetManaRegenRate); \
	DECLARE_FUNCTION(execOnRep_ManaRegenRate); \
	DECLARE_FUNCTION(execGSMInitMaxMana); \
	DECLARE_FUNCTION(execGSMSetMaxMana); \
	DECLARE_FUNCTION(execGSMGetMaxMana); \
	DECLARE_FUNCTION(execOnRep_MaxMana); \
	DECLARE_FUNCTION(execGSMInitMana); \
	DECLARE_FUNCTION(execGSMSetMana); \
	DECLARE_FUNCTION(execGSMGetMana); \
	DECLARE_FUNCTION(execOnRep_Mana); \
	DECLARE_FUNCTION(execGSMInitHealthRegenRate); \
	DECLARE_FUNCTION(execGSMSetHealthRegenRate); \
	DECLARE_FUNCTION(execGSMGetHealthRegenRate); \
	DECLARE_FUNCTION(execOnRep_HealthRegenRate); \
	DECLARE_FUNCTION(execGSMInitMaxHealth); \
	DECLARE_FUNCTION(execGSMSetMaxHealth); \
	DECLARE_FUNCTION(execGSMGetMaxHealth); \
	DECLARE_FUNCTION(execOnRep_MaxHealth); \
	DECLARE_FUNCTION(execGSMInitHealth); \
	DECLARE_FUNCTION(execGSMSetHealth); \
	DECLARE_FUNCTION(execGSMGetHealth); \
	DECLARE_FUNCTION(execOnRep_Health);


#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_AttributeSets_GSMAttributeSet_h_61_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGSMAttributeSet(); \
	friend struct Z_Construct_UClass_UGSMAttributeSet_Statics; \
public: \
	DECLARE_CLASS(UGSMAttributeSet, UAttributeSet, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GASMagician"), NO_API) \
	DECLARE_SERIALIZER(UGSMAttributeSet) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Health=NETFIELD_REP_START, \
		MaxHealth, \
		HealthRegenRate, \
		Mana, \
		MaxMana, \
		ManaRegenRate, \
		Stamina, \
		MaxStamina, \
		StaminaRegenRate, \
		NETFIELD_REP_END=StaminaRegenRate	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(UGSMAttributeSet) \
public:


#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_AttributeSets_GSMAttributeSet_h_61_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGSMAttributeSet(UGSMAttributeSet&&); \
	UGSMAttributeSet(const UGSMAttributeSet&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSMAttributeSet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSMAttributeSet); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSMAttributeSet) \
	NO_API virtual ~UGSMAttributeSet();


#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_AttributeSets_GSMAttributeSet_h_58_PROLOG
#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_AttributeSets_GSMAttributeSet_h_61_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_AttributeSets_GSMAttributeSet_h_61_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_AttributeSets_GSMAttributeSet_h_61_INCLASS_NO_PURE_DECLS \
	FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_AttributeSets_GSMAttributeSet_h_61_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GASMAGICIAN_API UClass* StaticClass<class UGSMAttributeSet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_AttributeSets_GSMAttributeSet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
