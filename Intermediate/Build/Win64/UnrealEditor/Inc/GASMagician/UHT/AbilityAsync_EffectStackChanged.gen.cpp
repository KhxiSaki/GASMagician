// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GASMagician/Public/AbilityAsyncs/AbilityAsync_EffectStackChanged.h"
#include "GameplayAbilities/Public/ActiveGameplayEffectHandle.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilityAsync_EffectStackChanged() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityAsync();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FActiveGameplayEffectHandle();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
GASMAGICIAN_API UClass* Z_Construct_UClass_UAbilityAsync_EffectStackChanged();
GASMAGICIAN_API UClass* Z_Construct_UClass_UAbilityAsync_EffectStackChanged_NoRegister();
GASMAGICIAN_API UFunction* Z_Construct_UDelegateFunction_GASMagician_OnGameplayEffectStackChanged__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_GASMagician();
// End Cross Module References

// Begin Delegate FOnGameplayEffectStackChanged
struct Z_Construct_UDelegateFunction_GASMagician_OnGameplayEffectStackChanged__DelegateSignature_Statics
{
	struct _Script_GASMagician_eventOnGameplayEffectStackChanged_Parms
	{
		FGameplayTag EffectGameplayTag;
		FActiveGameplayEffectHandle Handle;
		int32 NewStackCount;
		int32 OldStackCount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilityAsyncs/AbilityAsync_EffectStackChanged.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EffectGameplayTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewStackCount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OldStackCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_GASMagician_OnGameplayEffectStackChanged__DelegateSignature_Statics::NewProp_EffectGameplayTag = { "EffectGameplayTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_GASMagician_eventOnGameplayEffectStackChanged_Parms, EffectGameplayTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_GASMagician_OnGameplayEffectStackChanged__DelegateSignature_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_GASMagician_eventOnGameplayEffectStackChanged_Parms, Handle), Z_Construct_UScriptStruct_FActiveGameplayEffectHandle, METADATA_PARAMS(0, nullptr) }; // 290910411
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_GASMagician_OnGameplayEffectStackChanged__DelegateSignature_Statics::NewProp_NewStackCount = { "NewStackCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_GASMagician_eventOnGameplayEffectStackChanged_Parms, NewStackCount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_GASMagician_OnGameplayEffectStackChanged__DelegateSignature_Statics::NewProp_OldStackCount = { "OldStackCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_GASMagician_eventOnGameplayEffectStackChanged_Parms, OldStackCount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GASMagician_OnGameplayEffectStackChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GASMagician_OnGameplayEffectStackChanged__DelegateSignature_Statics::NewProp_EffectGameplayTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GASMagician_OnGameplayEffectStackChanged__DelegateSignature_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GASMagician_OnGameplayEffectStackChanged__DelegateSignature_Statics::NewProp_NewStackCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GASMagician_OnGameplayEffectStackChanged__DelegateSignature_Statics::NewProp_OldStackCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GASMagician_OnGameplayEffectStackChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GASMagician_OnGameplayEffectStackChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GASMagician, nullptr, "OnGameplayEffectStackChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_GASMagician_OnGameplayEffectStackChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GASMagician_OnGameplayEffectStackChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_GASMagician_OnGameplayEffectStackChanged__DelegateSignature_Statics::_Script_GASMagician_eventOnGameplayEffectStackChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GASMagician_OnGameplayEffectStackChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_GASMagician_OnGameplayEffectStackChanged__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_GASMagician_OnGameplayEffectStackChanged__DelegateSignature_Statics::_Script_GASMagician_eventOnGameplayEffectStackChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_GASMagician_OnGameplayEffectStackChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GASMagician_OnGameplayEffectStackChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnGameplayEffectStackChanged_DelegateWrapper(const FMulticastScriptDelegate& OnGameplayEffectStackChanged, FGameplayTag EffectGameplayTag, FActiveGameplayEffectHandle Handle, int32 NewStackCount, int32 OldStackCount)
{
	struct _Script_GASMagician_eventOnGameplayEffectStackChanged_Parms
	{
		FGameplayTag EffectGameplayTag;
		FActiveGameplayEffectHandle Handle;
		int32 NewStackCount;
		int32 OldStackCount;
	};
	_Script_GASMagician_eventOnGameplayEffectStackChanged_Parms Parms;
	Parms.EffectGameplayTag=EffectGameplayTag;
	Parms.Handle=Handle;
	Parms.NewStackCount=NewStackCount;
	Parms.OldStackCount=OldStackCount;
	OnGameplayEffectStackChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnGameplayEffectStackChanged

// Begin Class UAbilityAsync_EffectStackChanged Function WaitForGameplayEffectStackChange
struct Z_Construct_UFunction_UAbilityAsync_EffectStackChanged_WaitForGameplayEffectStackChange_Statics
{
	struct AbilityAsync_EffectStackChanged_eventWaitForGameplayEffectStackChange_Parms
	{
		AActor* TargetActor;
		FGameplayTag EffectGameplayTag;
		UAbilityAsync_EffectStackChanged* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "Category", "GASMagician" },
		{ "DefaultToSelf", "TargetActor" },
		{ "ModuleRelativePath", "Public/AbilityAsyncs/AbilityAsync_EffectStackChanged.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EffectGameplayTag;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityAsync_EffectStackChanged_WaitForGameplayEffectStackChange_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityAsync_EffectStackChanged_eventWaitForGameplayEffectStackChange_Parms, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilityAsync_EffectStackChanged_WaitForGameplayEffectStackChange_Statics::NewProp_EffectGameplayTag = { "EffectGameplayTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityAsync_EffectStackChanged_eventWaitForGameplayEffectStackChange_Parms, EffectGameplayTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityAsync_EffectStackChanged_WaitForGameplayEffectStackChange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityAsync_EffectStackChanged_eventWaitForGameplayEffectStackChange_Parms, ReturnValue), Z_Construct_UClass_UAbilityAsync_EffectStackChanged_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityAsync_EffectStackChanged_WaitForGameplayEffectStackChange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityAsync_EffectStackChanged_WaitForGameplayEffectStackChange_Statics::NewProp_TargetActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityAsync_EffectStackChanged_WaitForGameplayEffectStackChange_Statics::NewProp_EffectGameplayTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityAsync_EffectStackChanged_WaitForGameplayEffectStackChange_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityAsync_EffectStackChanged_WaitForGameplayEffectStackChange_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityAsync_EffectStackChanged_WaitForGameplayEffectStackChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityAsync_EffectStackChanged, nullptr, "WaitForGameplayEffectStackChange", nullptr, nullptr, Z_Construct_UFunction_UAbilityAsync_EffectStackChanged_WaitForGameplayEffectStackChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityAsync_EffectStackChanged_WaitForGameplayEffectStackChange_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAbilityAsync_EffectStackChanged_WaitForGameplayEffectStackChange_Statics::AbilityAsync_EffectStackChanged_eventWaitForGameplayEffectStackChange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityAsync_EffectStackChanged_WaitForGameplayEffectStackChange_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityAsync_EffectStackChanged_WaitForGameplayEffectStackChange_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAbilityAsync_EffectStackChanged_WaitForGameplayEffectStackChange_Statics::AbilityAsync_EffectStackChanged_eventWaitForGameplayEffectStackChange_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilityAsync_EffectStackChanged_WaitForGameplayEffectStackChange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityAsync_EffectStackChanged_WaitForGameplayEffectStackChange_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilityAsync_EffectStackChanged::execWaitForGameplayEffectStackChange)
{
	P_GET_OBJECT(AActor,Z_Param_TargetActor);
	P_GET_STRUCT(FGameplayTag,Z_Param_EffectGameplayTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAbilityAsync_EffectStackChanged**)Z_Param__Result=UAbilityAsync_EffectStackChanged::WaitForGameplayEffectStackChange(Z_Param_TargetActor,Z_Param_EffectGameplayTag);
	P_NATIVE_END;
}
// End Class UAbilityAsync_EffectStackChanged Function WaitForGameplayEffectStackChange

// Begin Class UAbilityAsync_EffectStackChanged
void UAbilityAsync_EffectStackChanged::StaticRegisterNativesUAbilityAsync_EffectStackChanged()
{
	UClass* Class = UAbilityAsync_EffectStackChanged::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "WaitForGameplayEffectStackChange", &UAbilityAsync_EffectStackChanged::execWaitForGameplayEffectStackChange },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAbilityAsync_EffectStackChanged);
UClass* Z_Construct_UClass_UAbilityAsync_EffectStackChanged_NoRegister()
{
	return UAbilityAsync_EffectStackChanged::StaticClass();
}
struct Z_Construct_UClass_UAbilityAsync_EffectStackChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AbilityAsyncs/AbilityAsync_EffectStackChanged.h" },
		{ "ModuleRelativePath", "Public/AbilityAsyncs/AbilityAsync_EffectStackChanged.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnGameplayEffectStackChange_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilityAsyncs/AbilityAsync_EffectStackChanged.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGameplayEffectStackChange;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAbilityAsync_EffectStackChanged_WaitForGameplayEffectStackChange, "WaitForGameplayEffectStackChange" }, // 2758490704
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbilityAsync_EffectStackChanged>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAbilityAsync_EffectStackChanged_Statics::NewProp_OnGameplayEffectStackChange = { "OnGameplayEffectStackChange", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityAsync_EffectStackChanged, OnGameplayEffectStackChange), Z_Construct_UDelegateFunction_GASMagician_OnGameplayEffectStackChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnGameplayEffectStackChange_MetaData), NewProp_OnGameplayEffectStackChange_MetaData) }; // 2352206209
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAbilityAsync_EffectStackChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityAsync_EffectStackChanged_Statics::NewProp_OnGameplayEffectStackChange,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityAsync_EffectStackChanged_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAbilityAsync_EffectStackChanged_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAbilityAsync,
	(UObject* (*)())Z_Construct_UPackage__Script_GASMagician,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityAsync_EffectStackChanged_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAbilityAsync_EffectStackChanged_Statics::ClassParams = {
	&UAbilityAsync_EffectStackChanged::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAbilityAsync_EffectStackChanged_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityAsync_EffectStackChanged_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityAsync_EffectStackChanged_Statics::Class_MetaDataParams), Z_Construct_UClass_UAbilityAsync_EffectStackChanged_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAbilityAsync_EffectStackChanged()
{
	if (!Z_Registration_Info_UClass_UAbilityAsync_EffectStackChanged.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAbilityAsync_EffectStackChanged.OuterSingleton, Z_Construct_UClass_UAbilityAsync_EffectStackChanged_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAbilityAsync_EffectStackChanged.OuterSingleton;
}
template<> GASMAGICIAN_API UClass* StaticClass<UAbilityAsync_EffectStackChanged>()
{
	return UAbilityAsync_EffectStackChanged::StaticClass();
}
UAbilityAsync_EffectStackChanged::UAbilityAsync_EffectStackChanged(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAbilityAsync_EffectStackChanged);
UAbilityAsync_EffectStackChanged::~UAbilityAsync_EffectStackChanged() {}
// End Class UAbilityAsync_EffectStackChanged

// Begin Registration
struct Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_AbilityAsyncs_AbilityAsync_EffectStackChanged_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAbilityAsync_EffectStackChanged, UAbilityAsync_EffectStackChanged::StaticClass, TEXT("UAbilityAsync_EffectStackChanged"), &Z_Registration_Info_UClass_UAbilityAsync_EffectStackChanged, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAbilityAsync_EffectStackChanged), 3321720681U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_AbilityAsyncs_AbilityAsync_EffectStackChanged_h_1683273347(TEXT("/Script/GASMagician"),
	Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_AbilityAsyncs_AbilityAsync_EffectStackChanged_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_AbilityAsyncs_AbilityAsync_EffectStackChanged_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
