// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GASMagician/Public/Components/GSMHealthComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGSMHealthComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
GASMAGICIAN_API UClass* Z_Construct_UClass_UGSMAbilitySystemComponent_NoRegister();
GASMAGICIAN_API UClass* Z_Construct_UClass_UGSMAttributeSet_NoRegister();
GASMAGICIAN_API UClass* Z_Construct_UClass_UGSMHealthComponent();
GASMAGICIAN_API UClass* Z_Construct_UClass_UGSMHealthComponent_NoRegister();
GASMAGICIAN_API UEnum* Z_Construct_UEnum_GASMagician_EGSMDeathState();
GASMAGICIAN_API UFunction* Z_Construct_UDelegateFunction_GASMagician_GSMHealth_AttributeChanged__DelegateSignature();
GASMAGICIAN_API UFunction* Z_Construct_UDelegateFunction_GASMagician_GSMHealth_DeathEvent__DelegateSignature();
MODULARGAMEPLAY_API UClass* Z_Construct_UClass_UGameFrameworkComponent();
UPackage* Z_Construct_UPackage__Script_GASMagician();
// End Cross Module References

// Begin Delegate FGSMHealth_DeathEvent
struct Z_Construct_UDelegateFunction_GASMagician_GSMHealth_DeathEvent__DelegateSignature_Statics
{
	struct _Script_GASMagician_eventGSMHealth_DeathEvent_Parms
	{
		AActor* OwningActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/GSMHealthComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_GASMagician_GSMHealth_DeathEvent__DelegateSignature_Statics::NewProp_OwningActor = { "OwningActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_GASMagician_eventGSMHealth_DeathEvent_Parms, OwningActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GASMagician_GSMHealth_DeathEvent__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GASMagician_GSMHealth_DeathEvent__DelegateSignature_Statics::NewProp_OwningActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GASMagician_GSMHealth_DeathEvent__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GASMagician_GSMHealth_DeathEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GASMagician, nullptr, "GSMHealth_DeathEvent__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_GASMagician_GSMHealth_DeathEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GASMagician_GSMHealth_DeathEvent__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_GASMagician_GSMHealth_DeathEvent__DelegateSignature_Statics::_Script_GASMagician_eventGSMHealth_DeathEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GASMagician_GSMHealth_DeathEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_GASMagician_GSMHealth_DeathEvent__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_GASMagician_GSMHealth_DeathEvent__DelegateSignature_Statics::_Script_GASMagician_eventGSMHealth_DeathEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_GASMagician_GSMHealth_DeathEvent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GASMagician_GSMHealth_DeathEvent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FGSMHealth_DeathEvent_DelegateWrapper(const FMulticastScriptDelegate& GSMHealth_DeathEvent, AActor* OwningActor)
{
	struct _Script_GASMagician_eventGSMHealth_DeathEvent_Parms
	{
		AActor* OwningActor;
	};
	_Script_GASMagician_eventGSMHealth_DeathEvent_Parms Parms;
	Parms.OwningActor=OwningActor;
	GSMHealth_DeathEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FGSMHealth_DeathEvent

// Begin Delegate FGSMHealth_AttributeChanged
struct Z_Construct_UDelegateFunction_GASMagician_GSMHealth_AttributeChanged__DelegateSignature_Statics
{
	struct _Script_GASMagician_eventGSMHealth_AttributeChanged_Parms
	{
		UGSMHealthComponent* HealthComponent;
		float OldValue;
		float NewValue;
		AActor* Instigator;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/GSMHealthComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealthComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HealthComponent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OldValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_GASMagician_GSMHealth_AttributeChanged__DelegateSignature_Statics::NewProp_HealthComponent = { "HealthComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_GASMagician_eventGSMHealth_AttributeChanged_Parms, HealthComponent), Z_Construct_UClass_UGSMHealthComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealthComponent_MetaData), NewProp_HealthComponent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_GASMagician_GSMHealth_AttributeChanged__DelegateSignature_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_GASMagician_eventGSMHealth_AttributeChanged_Parms, OldValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_GASMagician_GSMHealth_AttributeChanged__DelegateSignature_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_GASMagician_eventGSMHealth_AttributeChanged_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_GASMagician_GSMHealth_AttributeChanged__DelegateSignature_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_GASMagician_eventGSMHealth_AttributeChanged_Parms, Instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GASMagician_GSMHealth_AttributeChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GASMagician_GSMHealth_AttributeChanged__DelegateSignature_Statics::NewProp_HealthComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GASMagician_GSMHealth_AttributeChanged__DelegateSignature_Statics::NewProp_OldValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GASMagician_GSMHealth_AttributeChanged__DelegateSignature_Statics::NewProp_NewValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GASMagician_GSMHealth_AttributeChanged__DelegateSignature_Statics::NewProp_Instigator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GASMagician_GSMHealth_AttributeChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GASMagician_GSMHealth_AttributeChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GASMagician, nullptr, "GSMHealth_AttributeChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_GASMagician_GSMHealth_AttributeChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GASMagician_GSMHealth_AttributeChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_GASMagician_GSMHealth_AttributeChanged__DelegateSignature_Statics::_Script_GASMagician_eventGSMHealth_AttributeChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GASMagician_GSMHealth_AttributeChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_GASMagician_GSMHealth_AttributeChanged__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_GASMagician_GSMHealth_AttributeChanged__DelegateSignature_Statics::_Script_GASMagician_eventGSMHealth_AttributeChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_GASMagician_GSMHealth_AttributeChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GASMagician_GSMHealth_AttributeChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FGSMHealth_AttributeChanged_DelegateWrapper(const FMulticastScriptDelegate& GSMHealth_AttributeChanged, UGSMHealthComponent* HealthComponent, float OldValue, float NewValue, AActor* Instigator)
{
	struct _Script_GASMagician_eventGSMHealth_AttributeChanged_Parms
	{
		UGSMHealthComponent* HealthComponent;
		float OldValue;
		float NewValue;
		AActor* Instigator;
	};
	_Script_GASMagician_eventGSMHealth_AttributeChanged_Parms Parms;
	Parms.HealthComponent=HealthComponent;
	Parms.OldValue=OldValue;
	Parms.NewValue=NewValue;
	Parms.Instigator=Instigator;
	GSMHealth_AttributeChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FGSMHealth_AttributeChanged

// Begin Enum EGSMDeathState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGSMDeathState;
static UEnum* EGSMDeathState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGSMDeathState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGSMDeathState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GASMagician_EGSMDeathState, (UObject*)Z_Construct_UPackage__Script_GASMagician(), TEXT("EGSMDeathState"));
	}
	return Z_Registration_Info_UEnum_EGSMDeathState.OuterSingleton;
}
template<> GASMAGICIAN_API UEnum* StaticEnum<EGSMDeathState>()
{
	return EGSMDeathState_StaticEnum();
}
struct Z_Construct_UEnum_GASMagician_EGSMDeathState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * EGSMDeathState\n *\n *\x09""Defines current state of death.\n */" },
#endif
		{ "DeathFinished.Name", "EGSMDeathState::DeathFinished" },
		{ "DeathStarted.Name", "EGSMDeathState::DeathStarted" },
		{ "ModuleRelativePath", "Public/Components/GSMHealthComponent.h" },
		{ "NotDead.Name", "EGSMDeathState::NotDead" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "EGSMDeathState\n\n    Defines current state of death." },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGSMDeathState::NotDead", (int64)EGSMDeathState::NotDead },
		{ "EGSMDeathState::DeathStarted", (int64)EGSMDeathState::DeathStarted },
		{ "EGSMDeathState::DeathFinished", (int64)EGSMDeathState::DeathFinished },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GASMagician_EGSMDeathState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_GASMagician,
	nullptr,
	"EGSMDeathState",
	"EGSMDeathState",
	Z_Construct_UEnum_GASMagician_EGSMDeathState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_GASMagician_EGSMDeathState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GASMagician_EGSMDeathState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GASMagician_EGSMDeathState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_GASMagician_EGSMDeathState()
{
	if (!Z_Registration_Info_UEnum_EGSMDeathState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGSMDeathState.InnerSingleton, Z_Construct_UEnum_GASMagician_EGSMDeathState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGSMDeathState.InnerSingleton;
}
// End Enum EGSMDeathState

// Begin Class UGSMHealthComponent Function FindHealthComponent
struct Z_Construct_UFunction_UGSMHealthComponent_FindHealthComponent_Statics
{
	struct GSMHealthComponent_eventFindHealthComponent_Parms
	{
		const AActor* Actor;
		UGSMHealthComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GASMagician|Health" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns the health component if one exists on the specified actor.\n" },
#endif
		{ "ModuleRelativePath", "Public/Components/GSMHealthComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the health component if one exists on the specified actor." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGSMHealthComponent_FindHealthComponent_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMHealthComponent_eventFindHealthComponent_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Actor_MetaData), NewProp_Actor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGSMHealthComponent_FindHealthComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMHealthComponent_eventFindHealthComponent_Parms, ReturnValue), Z_Construct_UClass_UGSMHealthComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSMHealthComponent_FindHealthComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMHealthComponent_FindHealthComponent_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMHealthComponent_FindHealthComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMHealthComponent_FindHealthComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSMHealthComponent_FindHealthComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSMHealthComponent, nullptr, "FindHealthComponent", nullptr, nullptr, Z_Construct_UFunction_UGSMHealthComponent_FindHealthComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMHealthComponent_FindHealthComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSMHealthComponent_FindHealthComponent_Statics::GSMHealthComponent_eventFindHealthComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMHealthComponent_FindHealthComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSMHealthComponent_FindHealthComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGSMHealthComponent_FindHealthComponent_Statics::GSMHealthComponent_eventFindHealthComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGSMHealthComponent_FindHealthComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSMHealthComponent_FindHealthComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGSMHealthComponent::execFindHealthComponent)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UGSMHealthComponent**)Z_Param__Result=UGSMHealthComponent::FindHealthComponent(Z_Param_Actor);
	P_NATIVE_END;
}
// End Class UGSMHealthComponent Function FindHealthComponent

// Begin Class UGSMHealthComponent Function GetDeathState
struct Z_Construct_UFunction_UGSMHealthComponent_GetDeathState_Statics
{
	struct GSMHealthComponent_eventGetDeathState_Parms
	{
		EGSMDeathState ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GASMagician|Health" },
		{ "ModuleRelativePath", "Public/Components/GSMHealthComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGSMHealthComponent_GetDeathState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGSMHealthComponent_GetDeathState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMHealthComponent_eventGetDeathState_Parms, ReturnValue), Z_Construct_UEnum_GASMagician_EGSMDeathState, METADATA_PARAMS(0, nullptr) }; // 3463478545
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSMHealthComponent_GetDeathState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMHealthComponent_GetDeathState_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMHealthComponent_GetDeathState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMHealthComponent_GetDeathState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSMHealthComponent_GetDeathState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSMHealthComponent, nullptr, "GetDeathState", nullptr, nullptr, Z_Construct_UFunction_UGSMHealthComponent_GetDeathState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMHealthComponent_GetDeathState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSMHealthComponent_GetDeathState_Statics::GSMHealthComponent_eventGetDeathState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMHealthComponent_GetDeathState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSMHealthComponent_GetDeathState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGSMHealthComponent_GetDeathState_Statics::GSMHealthComponent_eventGetDeathState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGSMHealthComponent_GetDeathState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSMHealthComponent_GetDeathState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGSMHealthComponent::execGetDeathState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EGSMDeathState*)Z_Param__Result=P_THIS->GetDeathState();
	P_NATIVE_END;
}
// End Class UGSMHealthComponent Function GetDeathState

// Begin Class UGSMHealthComponent Function GetHealth
struct Z_Construct_UFunction_UGSMHealthComponent_GetHealth_Statics
{
	struct GSMHealthComponent_eventGetHealth_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GASMagician|Health" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns the current health value.\n" },
#endif
		{ "ModuleRelativePath", "Public/Components/GSMHealthComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the current health value." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGSMHealthComponent_GetHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMHealthComponent_eventGetHealth_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSMHealthComponent_GetHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMHealthComponent_GetHealth_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMHealthComponent_GetHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSMHealthComponent_GetHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSMHealthComponent, nullptr, "GetHealth", nullptr, nullptr, Z_Construct_UFunction_UGSMHealthComponent_GetHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMHealthComponent_GetHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSMHealthComponent_GetHealth_Statics::GSMHealthComponent_eventGetHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMHealthComponent_GetHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSMHealthComponent_GetHealth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGSMHealthComponent_GetHealth_Statics::GSMHealthComponent_eventGetHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGSMHealthComponent_GetHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSMHealthComponent_GetHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGSMHealthComponent::execGetHealth)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetHealth();
	P_NATIVE_END;
}
// End Class UGSMHealthComponent Function GetHealth

// Begin Class UGSMHealthComponent Function GetHealthNormalized
struct Z_Construct_UFunction_UGSMHealthComponent_GetHealthNormalized_Statics
{
	struct GSMHealthComponent_eventGetHealthNormalized_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GASMagician|Health" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns the current health in the range [0.0, 1.0].\n" },
#endif
		{ "ModuleRelativePath", "Public/Components/GSMHealthComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the current health in the range [0.0, 1.0]." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGSMHealthComponent_GetHealthNormalized_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMHealthComponent_eventGetHealthNormalized_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSMHealthComponent_GetHealthNormalized_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMHealthComponent_GetHealthNormalized_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMHealthComponent_GetHealthNormalized_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSMHealthComponent_GetHealthNormalized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSMHealthComponent, nullptr, "GetHealthNormalized", nullptr, nullptr, Z_Construct_UFunction_UGSMHealthComponent_GetHealthNormalized_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMHealthComponent_GetHealthNormalized_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSMHealthComponent_GetHealthNormalized_Statics::GSMHealthComponent_eventGetHealthNormalized_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMHealthComponent_GetHealthNormalized_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSMHealthComponent_GetHealthNormalized_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGSMHealthComponent_GetHealthNormalized_Statics::GSMHealthComponent_eventGetHealthNormalized_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGSMHealthComponent_GetHealthNormalized()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSMHealthComponent_GetHealthNormalized_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGSMHealthComponent::execGetHealthNormalized)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetHealthNormalized();
	P_NATIVE_END;
}
// End Class UGSMHealthComponent Function GetHealthNormalized

// Begin Class UGSMHealthComponent Function GetMaxHealth
struct Z_Construct_UFunction_UGSMHealthComponent_GetMaxHealth_Statics
{
	struct GSMHealthComponent_eventGetMaxHealth_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GASMagician|Health" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns the current maximum health value.\n" },
#endif
		{ "ModuleRelativePath", "Public/Components/GSMHealthComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the current maximum health value." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGSMHealthComponent_GetMaxHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMHealthComponent_eventGetMaxHealth_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSMHealthComponent_GetMaxHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMHealthComponent_GetMaxHealth_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMHealthComponent_GetMaxHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSMHealthComponent_GetMaxHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSMHealthComponent, nullptr, "GetMaxHealth", nullptr, nullptr, Z_Construct_UFunction_UGSMHealthComponent_GetMaxHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMHealthComponent_GetMaxHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSMHealthComponent_GetMaxHealth_Statics::GSMHealthComponent_eventGetMaxHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMHealthComponent_GetMaxHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSMHealthComponent_GetMaxHealth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGSMHealthComponent_GetMaxHealth_Statics::GSMHealthComponent_eventGetMaxHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGSMHealthComponent_GetMaxHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSMHealthComponent_GetMaxHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGSMHealthComponent::execGetMaxHealth)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetMaxHealth();
	P_NATIVE_END;
}
// End Class UGSMHealthComponent Function GetMaxHealth

// Begin Class UGSMHealthComponent Function InitializeWithAbilitySystem
struct Z_Construct_UFunction_UGSMHealthComponent_InitializeWithAbilitySystem_Statics
{
	struct GSMHealthComponent_eventInitializeWithAbilitySystem_Parms
	{
		UGSMAbilitySystemComponent* InASC;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GASMagician|Health" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Initialize the component using an ability system component.\n" },
#endif
		{ "ModuleRelativePath", "Public/Components/GSMHealthComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Initialize the component using an ability system component." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InASC_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InASC;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGSMHealthComponent_InitializeWithAbilitySystem_Statics::NewProp_InASC = { "InASC", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMHealthComponent_eventInitializeWithAbilitySystem_Parms, InASC), Z_Construct_UClass_UGSMAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InASC_MetaData), NewProp_InASC_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSMHealthComponent_InitializeWithAbilitySystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMHealthComponent_InitializeWithAbilitySystem_Statics::NewProp_InASC,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMHealthComponent_InitializeWithAbilitySystem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSMHealthComponent_InitializeWithAbilitySystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSMHealthComponent, nullptr, "InitializeWithAbilitySystem", nullptr, nullptr, Z_Construct_UFunction_UGSMHealthComponent_InitializeWithAbilitySystem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMHealthComponent_InitializeWithAbilitySystem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSMHealthComponent_InitializeWithAbilitySystem_Statics::GSMHealthComponent_eventInitializeWithAbilitySystem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMHealthComponent_InitializeWithAbilitySystem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSMHealthComponent_InitializeWithAbilitySystem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGSMHealthComponent_InitializeWithAbilitySystem_Statics::GSMHealthComponent_eventInitializeWithAbilitySystem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGSMHealthComponent_InitializeWithAbilitySystem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSMHealthComponent_InitializeWithAbilitySystem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGSMHealthComponent::execInitializeWithAbilitySystem)
{
	P_GET_OBJECT(UGSMAbilitySystemComponent,Z_Param_InASC);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializeWithAbilitySystem(Z_Param_InASC);
	P_NATIVE_END;
}
// End Class UGSMHealthComponent Function InitializeWithAbilitySystem

// Begin Class UGSMHealthComponent Function IsDeadOrDying
struct Z_Construct_UFunction_UGSMHealthComponent_IsDeadOrDying_Statics
{
	struct GSMHealthComponent_eventIsDeadOrDying_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GASMagician|Health" },
		{ "ExpandBoolAsExecs", "ReturnValue" },
		{ "ModuleRelativePath", "Public/Components/GSMHealthComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UGSMHealthComponent_IsDeadOrDying_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GSMHealthComponent_eventIsDeadOrDying_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGSMHealthComponent_IsDeadOrDying_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GSMHealthComponent_eventIsDeadOrDying_Parms), &Z_Construct_UFunction_UGSMHealthComponent_IsDeadOrDying_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSMHealthComponent_IsDeadOrDying_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMHealthComponent_IsDeadOrDying_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMHealthComponent_IsDeadOrDying_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSMHealthComponent_IsDeadOrDying_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSMHealthComponent, nullptr, "IsDeadOrDying", nullptr, nullptr, Z_Construct_UFunction_UGSMHealthComponent_IsDeadOrDying_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMHealthComponent_IsDeadOrDying_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSMHealthComponent_IsDeadOrDying_Statics::GSMHealthComponent_eventIsDeadOrDying_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMHealthComponent_IsDeadOrDying_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSMHealthComponent_IsDeadOrDying_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGSMHealthComponent_IsDeadOrDying_Statics::GSMHealthComponent_eventIsDeadOrDying_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGSMHealthComponent_IsDeadOrDying()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSMHealthComponent_IsDeadOrDying_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGSMHealthComponent::execIsDeadOrDying)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsDeadOrDying();
	P_NATIVE_END;
}
// End Class UGSMHealthComponent Function IsDeadOrDying

// Begin Class UGSMHealthComponent Function OnRep_DeathState
struct Z_Construct_UFunction_UGSMHealthComponent_OnRep_DeathState_Statics
{
	struct GSMHealthComponent_eventOnRep_DeathState_Parms
	{
		EGSMDeathState OldDeathState;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/GSMHealthComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_OldDeathState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OldDeathState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGSMHealthComponent_OnRep_DeathState_Statics::NewProp_OldDeathState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGSMHealthComponent_OnRep_DeathState_Statics::NewProp_OldDeathState = { "OldDeathState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMHealthComponent_eventOnRep_DeathState_Parms, OldDeathState), Z_Construct_UEnum_GASMagician_EGSMDeathState, METADATA_PARAMS(0, nullptr) }; // 3463478545
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSMHealthComponent_OnRep_DeathState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMHealthComponent_OnRep_DeathState_Statics::NewProp_OldDeathState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMHealthComponent_OnRep_DeathState_Statics::NewProp_OldDeathState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMHealthComponent_OnRep_DeathState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSMHealthComponent_OnRep_DeathState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSMHealthComponent, nullptr, "OnRep_DeathState", nullptr, nullptr, Z_Construct_UFunction_UGSMHealthComponent_OnRep_DeathState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMHealthComponent_OnRep_DeathState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSMHealthComponent_OnRep_DeathState_Statics::GSMHealthComponent_eventOnRep_DeathState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMHealthComponent_OnRep_DeathState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSMHealthComponent_OnRep_DeathState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGSMHealthComponent_OnRep_DeathState_Statics::GSMHealthComponent_eventOnRep_DeathState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGSMHealthComponent_OnRep_DeathState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSMHealthComponent_OnRep_DeathState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGSMHealthComponent::execOnRep_DeathState)
{
	P_GET_ENUM(EGSMDeathState,Z_Param_OldDeathState);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_DeathState(EGSMDeathState(Z_Param_OldDeathState));
	P_NATIVE_END;
}
// End Class UGSMHealthComponent Function OnRep_DeathState

// Begin Class UGSMHealthComponent Function UninitializeFromAbilitySystem
struct Z_Construct_UFunction_UGSMHealthComponent_UninitializeFromAbilitySystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GASMagician|Health" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Uninitialize the component, clearing any references to the ability system.\n" },
#endif
		{ "ModuleRelativePath", "Public/Components/GSMHealthComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Uninitialize the component, clearing any references to the ability system." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSMHealthComponent_UninitializeFromAbilitySystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSMHealthComponent, nullptr, "UninitializeFromAbilitySystem", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMHealthComponent_UninitializeFromAbilitySystem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSMHealthComponent_UninitializeFromAbilitySystem_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UGSMHealthComponent_UninitializeFromAbilitySystem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSMHealthComponent_UninitializeFromAbilitySystem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGSMHealthComponent::execUninitializeFromAbilitySystem)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UninitializeFromAbilitySystem();
	P_NATIVE_END;
}
// End Class UGSMHealthComponent Function UninitializeFromAbilitySystem

// Begin Class UGSMHealthComponent
void UGSMHealthComponent::StaticRegisterNativesUGSMHealthComponent()
{
	UClass* Class = UGSMHealthComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "FindHealthComponent", &UGSMHealthComponent::execFindHealthComponent },
		{ "GetDeathState", &UGSMHealthComponent::execGetDeathState },
		{ "GetHealth", &UGSMHealthComponent::execGetHealth },
		{ "GetHealthNormalized", &UGSMHealthComponent::execGetHealthNormalized },
		{ "GetMaxHealth", &UGSMHealthComponent::execGetMaxHealth },
		{ "InitializeWithAbilitySystem", &UGSMHealthComponent::execInitializeWithAbilitySystem },
		{ "IsDeadOrDying", &UGSMHealthComponent::execIsDeadOrDying },
		{ "OnRep_DeathState", &UGSMHealthComponent::execOnRep_DeathState },
		{ "UninitializeFromAbilitySystem", &UGSMHealthComponent::execUninitializeFromAbilitySystem },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGSMHealthComponent);
UClass* Z_Construct_UClass_UGSMHealthComponent_NoRegister()
{
	return UGSMHealthComponent::StaticClass();
}
struct Z_Construct_UClass_UGSMHealthComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * UGSMHealthComponent\n *\n *\x09""An actor component used to handle anything related to health.\n */" },
#endif
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Components/GSMHealthComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Components/GSMHealthComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UGSMHealthComponent\n\n    An actor component used to handle anything related to health." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnHealthChanged_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Delegate fired when the health value has changed. This is called on the client but the instigator may not be valid\n" },
#endif
		{ "ModuleRelativePath", "Public/Components/GSMHealthComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Delegate fired when the health value has changed. This is called on the client but the instigator may not be valid" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnMaxHealthChanged_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Delegate fired when the max health value has changed. This is called on the client but the instigator may not be valid\n" },
#endif
		{ "ModuleRelativePath", "Public/Components/GSMHealthComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Delegate fired when the max health value has changed. This is called on the client but the instigator may not be valid" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnDeathStarted_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Delegate fired when the death sequence has started.\n" },
#endif
		{ "ModuleRelativePath", "Public/Components/GSMHealthComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Delegate fired when the death sequence has started." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnDeathFinished_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Delegate fired when the death sequence has finished.\n" },
#endif
		{ "ModuleRelativePath", "Public/Components/GSMHealthComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Delegate fired when the death sequence has finished." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Ability system used by this component.\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/GSMHealthComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ability system used by this component." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealthSet_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Health set used by this component.\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/GSMHealthComponent.h" },
		{ "NativeConstTemplateArg", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Health set used by this component." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeathState_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Replicated state used to handle dying.\n" },
#endif
		{ "ModuleRelativePath", "Public/Components/GSMHealthComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Replicated state used to handle dying." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHealthChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMaxHealthChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDeathStarted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDeathFinished;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystemComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HealthSet;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DeathState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DeathState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGSMHealthComponent_FindHealthComponent, "FindHealthComponent" }, // 351630480
		{ &Z_Construct_UFunction_UGSMHealthComponent_GetDeathState, "GetDeathState" }, // 2979684043
		{ &Z_Construct_UFunction_UGSMHealthComponent_GetHealth, "GetHealth" }, // 1530609188
		{ &Z_Construct_UFunction_UGSMHealthComponent_GetHealthNormalized, "GetHealthNormalized" }, // 1813448709
		{ &Z_Construct_UFunction_UGSMHealthComponent_GetMaxHealth, "GetMaxHealth" }, // 2024889830
		{ &Z_Construct_UFunction_UGSMHealthComponent_InitializeWithAbilitySystem, "InitializeWithAbilitySystem" }, // 2521043480
		{ &Z_Construct_UFunction_UGSMHealthComponent_IsDeadOrDying, "IsDeadOrDying" }, // 1795655637
		{ &Z_Construct_UFunction_UGSMHealthComponent_OnRep_DeathState, "OnRep_DeathState" }, // 3089261722
		{ &Z_Construct_UFunction_UGSMHealthComponent_UninitializeFromAbilitySystem, "UninitializeFromAbilitySystem" }, // 2332080839
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGSMHealthComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGSMHealthComponent_Statics::NewProp_OnHealthChanged = { "OnHealthChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSMHealthComponent, OnHealthChanged), Z_Construct_UDelegateFunction_GASMagician_GSMHealth_AttributeChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnHealthChanged_MetaData), NewProp_OnHealthChanged_MetaData) }; // 1956428315
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGSMHealthComponent_Statics::NewProp_OnMaxHealthChanged = { "OnMaxHealthChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSMHealthComponent, OnMaxHealthChanged), Z_Construct_UDelegateFunction_GASMagician_GSMHealth_AttributeChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnMaxHealthChanged_MetaData), NewProp_OnMaxHealthChanged_MetaData) }; // 1956428315
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGSMHealthComponent_Statics::NewProp_OnDeathStarted = { "OnDeathStarted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSMHealthComponent, OnDeathStarted), Z_Construct_UDelegateFunction_GASMagician_GSMHealth_DeathEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnDeathStarted_MetaData), NewProp_OnDeathStarted_MetaData) }; // 2234246145
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGSMHealthComponent_Statics::NewProp_OnDeathFinished = { "OnDeathFinished", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSMHealthComponent, OnDeathFinished), Z_Construct_UDelegateFunction_GASMagician_GSMHealth_DeathEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnDeathFinished_MetaData), NewProp_OnDeathFinished_MetaData) }; // 2234246145
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGSMHealthComponent_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSMHealthComponent, AbilitySystemComponent), Z_Construct_UClass_UGSMAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilitySystemComponent_MetaData), NewProp_AbilitySystemComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGSMHealthComponent_Statics::NewProp_HealthSet = { "HealthSet", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSMHealthComponent, HealthSet), Z_Construct_UClass_UGSMAttributeSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealthSet_MetaData), NewProp_HealthSet_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGSMHealthComponent_Statics::NewProp_DeathState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGSMHealthComponent_Statics::NewProp_DeathState = { "DeathState", "OnRep_DeathState", (EPropertyFlags)0x0020080100000020, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSMHealthComponent, DeathState), Z_Construct_UEnum_GASMagician_EGSMDeathState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeathState_MetaData), NewProp_DeathState_MetaData) }; // 3463478545
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGSMHealthComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSMHealthComponent_Statics::NewProp_OnHealthChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSMHealthComponent_Statics::NewProp_OnMaxHealthChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSMHealthComponent_Statics::NewProp_OnDeathStarted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSMHealthComponent_Statics::NewProp_OnDeathFinished,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSMHealthComponent_Statics::NewProp_AbilitySystemComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSMHealthComponent_Statics::NewProp_HealthSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSMHealthComponent_Statics::NewProp_DeathState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSMHealthComponent_Statics::NewProp_DeathState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGSMHealthComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGSMHealthComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameFrameworkComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_GASMagician,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGSMHealthComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGSMHealthComponent_Statics::ClassParams = {
	&UGSMHealthComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UGSMHealthComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UGSMHealthComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSMHealthComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UGSMHealthComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGSMHealthComponent()
{
	if (!Z_Registration_Info_UClass_UGSMHealthComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGSMHealthComponent.OuterSingleton, Z_Construct_UClass_UGSMHealthComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGSMHealthComponent.OuterSingleton;
}
template<> GASMAGICIAN_API UClass* StaticClass<UGSMHealthComponent>()
{
	return UGSMHealthComponent::StaticClass();
}
void UGSMHealthComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_DeathState(TEXT("DeathState"));
	const bool bIsValid = true
		&& Name_DeathState == ClassReps[(int32)ENetFields_Private::DeathState].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UGSMHealthComponent"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGSMHealthComponent);
UGSMHealthComponent::~UGSMHealthComponent() {}
// End Class UGSMHealthComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_Components_GSMHealthComponent_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EGSMDeathState_StaticEnum, TEXT("EGSMDeathState"), &Z_Registration_Info_UEnum_EGSMDeathState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3463478545U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGSMHealthComponent, UGSMHealthComponent::StaticClass, TEXT("UGSMHealthComponent"), &Z_Registration_Info_UClass_UGSMHealthComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGSMHealthComponent), 1423457305U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_Components_GSMHealthComponent_h_3681847473(TEXT("/Script/GASMagician"),
	Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_Components_GSMHealthComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_Components_GSMHealthComponent_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_Components_GSMHealthComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_Components_GSMHealthComponent_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
