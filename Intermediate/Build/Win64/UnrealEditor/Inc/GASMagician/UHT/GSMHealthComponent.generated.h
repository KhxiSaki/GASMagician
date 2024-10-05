// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/GSMHealthComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UGSMAbilitySystemComponent;
class UGSMHealthComponent;
enum class EGSMDeathState : uint8;
#ifdef GASMAGICIAN_GSMHealthComponent_generated_h
#error "GSMHealthComponent.generated.h already included, missing '#pragma once' in GSMHealthComponent.h"
#endif
#define GASMAGICIAN_GSMHealthComponent_generated_h

#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_Components_GSMHealthComponent_h_17_DELEGATE \
GASMAGICIAN_API void FGSMHealth_DeathEvent_DelegateWrapper(const FMulticastScriptDelegate& GSMHealth_DeathEvent, AActor* OwningActor);


#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_Components_GSMHealthComponent_h_18_DELEGATE \
GASMAGICIAN_API void FGSMHealth_AttributeChanged_DelegateWrapper(const FMulticastScriptDelegate& GSMHealth_AttributeChanged, UGSMHealthComponent* HealthComponent, float OldValue, float NewValue, AActor* Instigator);


#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_Components_GSMHealthComponent_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnRep_DeathState); \
	DECLARE_FUNCTION(execIsDeadOrDying); \
	DECLARE_FUNCTION(execGetDeathState); \
	DECLARE_FUNCTION(execGetHealthNormalized); \
	DECLARE_FUNCTION(execGetMaxHealth); \
	DECLARE_FUNCTION(execGetHealth); \
	DECLARE_FUNCTION(execUninitializeFromAbilitySystem); \
	DECLARE_FUNCTION(execInitializeWithAbilitySystem); \
	DECLARE_FUNCTION(execFindHealthComponent);


#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_Components_GSMHealthComponent_h_42_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGSMHealthComponent(); \
	friend struct Z_Construct_UClass_UGSMHealthComponent_Statics; \
public: \
	DECLARE_CLASS(UGSMHealthComponent, UGameFrameworkComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GASMagician"), NO_API) \
	DECLARE_SERIALIZER(UGSMHealthComponent) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		DeathState=NETFIELD_REP_START, \
		NETFIELD_REP_END=DeathState	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_Components_GSMHealthComponent_h_42_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGSMHealthComponent(UGSMHealthComponent&&); \
	UGSMHealthComponent(const UGSMHealthComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSMHealthComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSMHealthComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSMHealthComponent) \
	NO_API virtual ~UGSMHealthComponent();


#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_Components_GSMHealthComponent_h_39_PROLOG
#define FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_Components_GSMHealthComponent_h_42_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_Components_GSMHealthComponent_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_Components_GSMHealthComponent_h_42_INCLASS_NO_PURE_DECLS \
	FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_Components_GSMHealthComponent_h_42_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GASMAGICIAN_API UClass* StaticClass<class UGSMHealthComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_Components_GSMHealthComponent_h


#define FOREACH_ENUM_EGSMDEATHSTATE(op) \
	op(EGSMDeathState::NotDead) \
	op(EGSMDeathState::DeathStarted) \
	op(EGSMDeathState::DeathFinished) 

enum class EGSMDeathState : uint8;
template<> struct TIsUEnumClass<EGSMDeathState> { enum { Value = true }; };
template<> GASMAGICIAN_API UEnum* StaticEnum<EGSMDeathState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
