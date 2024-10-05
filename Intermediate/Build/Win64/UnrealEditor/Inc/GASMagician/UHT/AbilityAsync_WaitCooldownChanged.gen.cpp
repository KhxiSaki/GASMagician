// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GASMagician/Public/AbilityAsyncs/AbilityAsync_WaitCooldownChanged.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilityAsync_WaitCooldownChanged() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityAsync();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
GASMAGICIAN_API UClass* Z_Construct_UClass_UAbilityAsync_WaitCooldownChanged();
GASMAGICIAN_API UClass* Z_Construct_UClass_UAbilityAsync_WaitCooldownChanged_NoRegister();
GASMAGICIAN_API UFunction* Z_Construct_UDelegateFunction_GASMagician_OnCooldownChanged__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_GASMagician();
// End Cross Module References

// Begin Delegate FOnCooldownChanged
struct Z_Construct_UDelegateFunction_GASMagician_OnCooldownChanged__DelegateSignature_Statics
{
	struct _Script_GASMagician_eventOnCooldownChanged_Parms
	{
		FGameplayTag CooldownTag;
		float TimeRemaining;
		float Duration;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilityAsyncs/AbilityAsync_WaitCooldownChanged.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CooldownTag;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeRemaining;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_GASMagician_OnCooldownChanged__DelegateSignature_Statics::NewProp_CooldownTag = { "CooldownTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_GASMagician_eventOnCooldownChanged_Parms, CooldownTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_GASMagician_OnCooldownChanged__DelegateSignature_Statics::NewProp_TimeRemaining = { "TimeRemaining", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_GASMagician_eventOnCooldownChanged_Parms, TimeRemaining), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_GASMagician_OnCooldownChanged__DelegateSignature_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_GASMagician_eventOnCooldownChanged_Parms, Duration), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GASMagician_OnCooldownChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GASMagician_OnCooldownChanged__DelegateSignature_Statics::NewProp_CooldownTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GASMagician_OnCooldownChanged__DelegateSignature_Statics::NewProp_TimeRemaining,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GASMagician_OnCooldownChanged__DelegateSignature_Statics::NewProp_Duration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GASMagician_OnCooldownChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GASMagician_OnCooldownChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GASMagician, nullptr, "OnCooldownChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_GASMagician_OnCooldownChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GASMagician_OnCooldownChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_GASMagician_OnCooldownChanged__DelegateSignature_Statics::_Script_GASMagician_eventOnCooldownChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GASMagician_OnCooldownChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_GASMagician_OnCooldownChanged__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_GASMagician_OnCooldownChanged__DelegateSignature_Statics::_Script_GASMagician_eventOnCooldownChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_GASMagician_OnCooldownChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GASMagician_OnCooldownChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnCooldownChanged_DelegateWrapper(const FMulticastScriptDelegate& OnCooldownChanged, FGameplayTag CooldownTag, float TimeRemaining, float Duration)
{
	struct _Script_GASMagician_eventOnCooldownChanged_Parms
	{
		FGameplayTag CooldownTag;
		float TimeRemaining;
		float Duration;
	};
	_Script_GASMagician_eventOnCooldownChanged_Parms Parms;
	Parms.CooldownTag=CooldownTag;
	Parms.TimeRemaining=TimeRemaining;
	Parms.Duration=Duration;
	OnCooldownChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnCooldownChanged

// Begin Class UAbilityAsync_WaitCooldownChanged Function WaitForCooldownChange
struct Z_Construct_UFunction_UAbilityAsync_WaitCooldownChanged_WaitForCooldownChange_Statics
{
	struct AbilityAsync_WaitCooldownChanged_eventWaitForCooldownChange_Parms
	{
		AActor* TargetActor;
		FGameplayTagContainer CooldownTags;
		bool UseServerCooldown;
		UAbilityAsync_WaitCooldownChanged* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "Category", "GASMagician" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Listens for changes (Begin and End) to cooldown GameplayEffects based on the cooldown tag.\n// UseServerCooldown determines if the Sever's cooldown is returned in addition to the local predicted cooldown.\n// If using ServerCooldown, TimeRemaining and Duration will return -1 to signal local predicted cooldown has begun.\n" },
#endif
		{ "DefaultToSelf", "TargetActor" },
		{ "ModuleRelativePath", "Public/AbilityAsyncs/AbilityAsync_WaitCooldownChanged.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Listens for changes (Begin and End) to cooldown GameplayEffects based on the cooldown tag.\nUseServerCooldown determines if the Sever's cooldown is returned in addition to the local predicted cooldown.\nIf using ServerCooldown, TimeRemaining and Duration will return -1 to signal local predicted cooldown has begun." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CooldownTags;
	static void NewProp_UseServerCooldown_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UseServerCooldown;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityAsync_WaitCooldownChanged_WaitForCooldownChange_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityAsync_WaitCooldownChanged_eventWaitForCooldownChange_Parms, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilityAsync_WaitCooldownChanged_WaitForCooldownChange_Statics::NewProp_CooldownTags = { "CooldownTags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityAsync_WaitCooldownChanged_eventWaitForCooldownChange_Parms, CooldownTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(0, nullptr) }; // 3352185621
void Z_Construct_UFunction_UAbilityAsync_WaitCooldownChanged_WaitForCooldownChange_Statics::NewProp_UseServerCooldown_SetBit(void* Obj)
{
	((AbilityAsync_WaitCooldownChanged_eventWaitForCooldownChange_Parms*)Obj)->UseServerCooldown = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbilityAsync_WaitCooldownChanged_WaitForCooldownChange_Statics::NewProp_UseServerCooldown = { "UseServerCooldown", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AbilityAsync_WaitCooldownChanged_eventWaitForCooldownChange_Parms), &Z_Construct_UFunction_UAbilityAsync_WaitCooldownChanged_WaitForCooldownChange_Statics::NewProp_UseServerCooldown_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityAsync_WaitCooldownChanged_WaitForCooldownChange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityAsync_WaitCooldownChanged_eventWaitForCooldownChange_Parms, ReturnValue), Z_Construct_UClass_UAbilityAsync_WaitCooldownChanged_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityAsync_WaitCooldownChanged_WaitForCooldownChange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityAsync_WaitCooldownChanged_WaitForCooldownChange_Statics::NewProp_TargetActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityAsync_WaitCooldownChanged_WaitForCooldownChange_Statics::NewProp_CooldownTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityAsync_WaitCooldownChanged_WaitForCooldownChange_Statics::NewProp_UseServerCooldown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityAsync_WaitCooldownChanged_WaitForCooldownChange_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityAsync_WaitCooldownChanged_WaitForCooldownChange_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityAsync_WaitCooldownChanged_WaitForCooldownChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityAsync_WaitCooldownChanged, nullptr, "WaitForCooldownChange", nullptr, nullptr, Z_Construct_UFunction_UAbilityAsync_WaitCooldownChanged_WaitForCooldownChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityAsync_WaitCooldownChanged_WaitForCooldownChange_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAbilityAsync_WaitCooldownChanged_WaitForCooldownChange_Statics::AbilityAsync_WaitCooldownChanged_eventWaitForCooldownChange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityAsync_WaitCooldownChanged_WaitForCooldownChange_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityAsync_WaitCooldownChanged_WaitForCooldownChange_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAbilityAsync_WaitCooldownChanged_WaitForCooldownChange_Statics::AbilityAsync_WaitCooldownChanged_eventWaitForCooldownChange_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilityAsync_WaitCooldownChanged_WaitForCooldownChange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityAsync_WaitCooldownChanged_WaitForCooldownChange_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilityAsync_WaitCooldownChanged::execWaitForCooldownChange)
{
	P_GET_OBJECT(AActor,Z_Param_TargetActor);
	P_GET_STRUCT(FGameplayTagContainer,Z_Param_CooldownTags);
	P_GET_UBOOL(Z_Param_UseServerCooldown);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAbilityAsync_WaitCooldownChanged**)Z_Param__Result=UAbilityAsync_WaitCooldownChanged::WaitForCooldownChange(Z_Param_TargetActor,Z_Param_CooldownTags,Z_Param_UseServerCooldown);
	P_NATIVE_END;
}
// End Class UAbilityAsync_WaitCooldownChanged Function WaitForCooldownChange

// Begin Class UAbilityAsync_WaitCooldownChanged
void UAbilityAsync_WaitCooldownChanged::StaticRegisterNativesUAbilityAsync_WaitCooldownChanged()
{
	UClass* Class = UAbilityAsync_WaitCooldownChanged::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "WaitForCooldownChange", &UAbilityAsync_WaitCooldownChanged::execWaitForCooldownChange },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAbilityAsync_WaitCooldownChanged);
UClass* Z_Construct_UClass_UAbilityAsync_WaitCooldownChanged_NoRegister()
{
	return UAbilityAsync_WaitCooldownChanged::StaticClass();
}
struct Z_Construct_UClass_UAbilityAsync_WaitCooldownChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AbilityAsyncs/AbilityAsync_WaitCooldownChanged.h" },
		{ "ModuleRelativePath", "Public/AbilityAsyncs/AbilityAsync_WaitCooldownChanged.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCooldownBegin_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilityAsyncs/AbilityAsync_WaitCooldownChanged.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCooldownEnd_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilityAsyncs/AbilityAsync_WaitCooldownChanged.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCooldownBegin;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCooldownEnd;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAbilityAsync_WaitCooldownChanged_WaitForCooldownChange, "WaitForCooldownChange" }, // 4060618222
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbilityAsync_WaitCooldownChanged>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAbilityAsync_WaitCooldownChanged_Statics::NewProp_OnCooldownBegin = { "OnCooldownBegin", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityAsync_WaitCooldownChanged, OnCooldownBegin), Z_Construct_UDelegateFunction_GASMagician_OnCooldownChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCooldownBegin_MetaData), NewProp_OnCooldownBegin_MetaData) }; // 1013568258
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAbilityAsync_WaitCooldownChanged_Statics::NewProp_OnCooldownEnd = { "OnCooldownEnd", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityAsync_WaitCooldownChanged, OnCooldownEnd), Z_Construct_UDelegateFunction_GASMagician_OnCooldownChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCooldownEnd_MetaData), NewProp_OnCooldownEnd_MetaData) }; // 1013568258
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAbilityAsync_WaitCooldownChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityAsync_WaitCooldownChanged_Statics::NewProp_OnCooldownBegin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityAsync_WaitCooldownChanged_Statics::NewProp_OnCooldownEnd,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityAsync_WaitCooldownChanged_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAbilityAsync_WaitCooldownChanged_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAbilityAsync,
	(UObject* (*)())Z_Construct_UPackage__Script_GASMagician,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityAsync_WaitCooldownChanged_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAbilityAsync_WaitCooldownChanged_Statics::ClassParams = {
	&UAbilityAsync_WaitCooldownChanged::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAbilityAsync_WaitCooldownChanged_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityAsync_WaitCooldownChanged_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityAsync_WaitCooldownChanged_Statics::Class_MetaDataParams), Z_Construct_UClass_UAbilityAsync_WaitCooldownChanged_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAbilityAsync_WaitCooldownChanged()
{
	if (!Z_Registration_Info_UClass_UAbilityAsync_WaitCooldownChanged.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAbilityAsync_WaitCooldownChanged.OuterSingleton, Z_Construct_UClass_UAbilityAsync_WaitCooldownChanged_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAbilityAsync_WaitCooldownChanged.OuterSingleton;
}
template<> GASMAGICIAN_API UClass* StaticClass<UAbilityAsync_WaitCooldownChanged>()
{
	return UAbilityAsync_WaitCooldownChanged::StaticClass();
}
UAbilityAsync_WaitCooldownChanged::UAbilityAsync_WaitCooldownChanged(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAbilityAsync_WaitCooldownChanged);
UAbilityAsync_WaitCooldownChanged::~UAbilityAsync_WaitCooldownChanged() {}
// End Class UAbilityAsync_WaitCooldownChanged

// Begin Registration
struct Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_AbilityAsyncs_AbilityAsync_WaitCooldownChanged_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAbilityAsync_WaitCooldownChanged, UAbilityAsync_WaitCooldownChanged::StaticClass, TEXT("UAbilityAsync_WaitCooldownChanged"), &Z_Registration_Info_UClass_UAbilityAsync_WaitCooldownChanged, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAbilityAsync_WaitCooldownChanged), 1532054065U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_AbilityAsyncs_AbilityAsync_WaitCooldownChanged_h_852744816(TEXT("/Script/GASMagician"),
	Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_AbilityAsyncs_AbilityAsync_WaitCooldownChanged_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_AbilityAsyncs_AbilityAsync_WaitCooldownChanged_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
