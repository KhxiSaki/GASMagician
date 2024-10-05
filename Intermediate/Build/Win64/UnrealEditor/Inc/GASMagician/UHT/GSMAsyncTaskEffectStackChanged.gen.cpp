// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GASMagician/Public/AsyncTasks/GSMAsyncTaskEffectStackChanged.h"
#include "GameplayAbilities/Public/ActiveGameplayEffectHandle.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGSMAsyncTaskEffectStackChanged() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FActiveGameplayEffectHandle();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
GASMAGICIAN_API UClass* Z_Construct_UClass_UGSMAsyncTaskEffectStackChanged();
GASMAGICIAN_API UClass* Z_Construct_UClass_UGSMAsyncTaskEffectStackChanged_NoRegister();
GASMAGICIAN_API UFunction* Z_Construct_UDelegateFunction_GASMagician_AsyncOnGameplayEffectStackChanged__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_GASMagician();
// End Cross Module References

// Begin Delegate FAsyncOnGameplayEffectStackChanged
struct Z_Construct_UDelegateFunction_GASMagician_AsyncOnGameplayEffectStackChanged__DelegateSignature_Statics
{
	struct _Script_GASMagician_eventAsyncOnGameplayEffectStackChanged_Parms
	{
		FGameplayTag EffectGameplayTag;
		FActiveGameplayEffectHandle Handle;
		int32 NewStackCount;
		int32 OldStackCount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AsyncTasks/GSMAsyncTaskEffectStackChanged.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EffectGameplayTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewStackCount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OldStackCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_GASMagician_AsyncOnGameplayEffectStackChanged__DelegateSignature_Statics::NewProp_EffectGameplayTag = { "EffectGameplayTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_GASMagician_eventAsyncOnGameplayEffectStackChanged_Parms, EffectGameplayTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_GASMagician_AsyncOnGameplayEffectStackChanged__DelegateSignature_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_GASMagician_eventAsyncOnGameplayEffectStackChanged_Parms, Handle), Z_Construct_UScriptStruct_FActiveGameplayEffectHandle, METADATA_PARAMS(0, nullptr) }; // 290910411
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_GASMagician_AsyncOnGameplayEffectStackChanged__DelegateSignature_Statics::NewProp_NewStackCount = { "NewStackCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_GASMagician_eventAsyncOnGameplayEffectStackChanged_Parms, NewStackCount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_GASMagician_AsyncOnGameplayEffectStackChanged__DelegateSignature_Statics::NewProp_OldStackCount = { "OldStackCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_GASMagician_eventAsyncOnGameplayEffectStackChanged_Parms, OldStackCount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GASMagician_AsyncOnGameplayEffectStackChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GASMagician_AsyncOnGameplayEffectStackChanged__DelegateSignature_Statics::NewProp_EffectGameplayTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GASMagician_AsyncOnGameplayEffectStackChanged__DelegateSignature_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GASMagician_AsyncOnGameplayEffectStackChanged__DelegateSignature_Statics::NewProp_NewStackCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GASMagician_AsyncOnGameplayEffectStackChanged__DelegateSignature_Statics::NewProp_OldStackCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GASMagician_AsyncOnGameplayEffectStackChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GASMagician_AsyncOnGameplayEffectStackChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GASMagician, nullptr, "AsyncOnGameplayEffectStackChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_GASMagician_AsyncOnGameplayEffectStackChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GASMagician_AsyncOnGameplayEffectStackChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_GASMagician_AsyncOnGameplayEffectStackChanged__DelegateSignature_Statics::_Script_GASMagician_eventAsyncOnGameplayEffectStackChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GASMagician_AsyncOnGameplayEffectStackChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_GASMagician_AsyncOnGameplayEffectStackChanged__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_GASMagician_AsyncOnGameplayEffectStackChanged__DelegateSignature_Statics::_Script_GASMagician_eventAsyncOnGameplayEffectStackChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_GASMagician_AsyncOnGameplayEffectStackChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GASMagician_AsyncOnGameplayEffectStackChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FAsyncOnGameplayEffectStackChanged_DelegateWrapper(const FMulticastScriptDelegate& AsyncOnGameplayEffectStackChanged, FGameplayTag EffectGameplayTag, FActiveGameplayEffectHandle Handle, int32 NewStackCount, int32 OldStackCount)
{
	struct _Script_GASMagician_eventAsyncOnGameplayEffectStackChanged_Parms
	{
		FGameplayTag EffectGameplayTag;
		FActiveGameplayEffectHandle Handle;
		int32 NewStackCount;
		int32 OldStackCount;
	};
	_Script_GASMagician_eventAsyncOnGameplayEffectStackChanged_Parms Parms;
	Parms.EffectGameplayTag=EffectGameplayTag;
	Parms.Handle=Handle;
	Parms.NewStackCount=NewStackCount;
	Parms.OldStackCount=OldStackCount;
	AsyncOnGameplayEffectStackChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FAsyncOnGameplayEffectStackChanged

// Begin Class UGSMAsyncTaskEffectStackChanged Function EndTask
struct Z_Construct_UFunction_UGSMAsyncTaskEffectStackChanged_EndTask_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// You must call this function manually when you want the AsyncTask to end.\n// For UMG Widgets, you would call it in the Widget's Destruct event.\n" },
#endif
		{ "ModuleRelativePath", "Public/AsyncTasks/GSMAsyncTaskEffectStackChanged.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "You must call this function manually when you want the AsyncTask to end.\nFor UMG Widgets, you would call it in the Widget's Destruct event." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSMAsyncTaskEffectStackChanged_EndTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSMAsyncTaskEffectStackChanged, nullptr, "EndTask", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMAsyncTaskEffectStackChanged_EndTask_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSMAsyncTaskEffectStackChanged_EndTask_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UGSMAsyncTaskEffectStackChanged_EndTask()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSMAsyncTaskEffectStackChanged_EndTask_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGSMAsyncTaskEffectStackChanged::execEndTask)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EndTask();
	P_NATIVE_END;
}
// End Class UGSMAsyncTaskEffectStackChanged Function EndTask

// Begin Class UGSMAsyncTaskEffectStackChanged Function ListenForGameplayEffectStackChange
struct Z_Construct_UFunction_UGSMAsyncTaskEffectStackChanged_ListenForGameplayEffectStackChange_Statics
{
	struct GSMAsyncTaskEffectStackChanged_eventListenForGameplayEffectStackChange_Parms
	{
		UAbilitySystemComponent* AbilitySystemComponent;
		FGameplayTag EffectGameplayTag;
		UGSMAsyncTaskEffectStackChanged* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "ModuleRelativePath", "Public/AsyncTasks/GSMAsyncTaskEffectStackChanged.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystemComponent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EffectGameplayTag;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGSMAsyncTaskEffectStackChanged_ListenForGameplayEffectStackChange_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMAsyncTaskEffectStackChanged_eventListenForGameplayEffectStackChange_Parms, AbilitySystemComponent), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilitySystemComponent_MetaData), NewProp_AbilitySystemComponent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSMAsyncTaskEffectStackChanged_ListenForGameplayEffectStackChange_Statics::NewProp_EffectGameplayTag = { "EffectGameplayTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMAsyncTaskEffectStackChanged_eventListenForGameplayEffectStackChange_Parms, EffectGameplayTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGSMAsyncTaskEffectStackChanged_ListenForGameplayEffectStackChange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMAsyncTaskEffectStackChanged_eventListenForGameplayEffectStackChange_Parms, ReturnValue), Z_Construct_UClass_UGSMAsyncTaskEffectStackChanged_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSMAsyncTaskEffectStackChanged_ListenForGameplayEffectStackChange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMAsyncTaskEffectStackChanged_ListenForGameplayEffectStackChange_Statics::NewProp_AbilitySystemComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMAsyncTaskEffectStackChanged_ListenForGameplayEffectStackChange_Statics::NewProp_EffectGameplayTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMAsyncTaskEffectStackChanged_ListenForGameplayEffectStackChange_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMAsyncTaskEffectStackChanged_ListenForGameplayEffectStackChange_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSMAsyncTaskEffectStackChanged_ListenForGameplayEffectStackChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSMAsyncTaskEffectStackChanged, nullptr, "ListenForGameplayEffectStackChange", nullptr, nullptr, Z_Construct_UFunction_UGSMAsyncTaskEffectStackChanged_ListenForGameplayEffectStackChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMAsyncTaskEffectStackChanged_ListenForGameplayEffectStackChange_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSMAsyncTaskEffectStackChanged_ListenForGameplayEffectStackChange_Statics::GSMAsyncTaskEffectStackChanged_eventListenForGameplayEffectStackChange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMAsyncTaskEffectStackChanged_ListenForGameplayEffectStackChange_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSMAsyncTaskEffectStackChanged_ListenForGameplayEffectStackChange_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGSMAsyncTaskEffectStackChanged_ListenForGameplayEffectStackChange_Statics::GSMAsyncTaskEffectStackChanged_eventListenForGameplayEffectStackChange_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGSMAsyncTaskEffectStackChanged_ListenForGameplayEffectStackChange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSMAsyncTaskEffectStackChanged_ListenForGameplayEffectStackChange_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGSMAsyncTaskEffectStackChanged::execListenForGameplayEffectStackChange)
{
	P_GET_OBJECT(UAbilitySystemComponent,Z_Param_AbilitySystemComponent);
	P_GET_STRUCT(FGameplayTag,Z_Param_EffectGameplayTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UGSMAsyncTaskEffectStackChanged**)Z_Param__Result=UGSMAsyncTaskEffectStackChanged::ListenForGameplayEffectStackChange(Z_Param_AbilitySystemComponent,Z_Param_EffectGameplayTag);
	P_NATIVE_END;
}
// End Class UGSMAsyncTaskEffectStackChanged Function ListenForGameplayEffectStackChange

// Begin Class UGSMAsyncTaskEffectStackChanged
void UGSMAsyncTaskEffectStackChanged::StaticRegisterNativesUGSMAsyncTaskEffectStackChanged()
{
	UClass* Class = UGSMAsyncTaskEffectStackChanged::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EndTask", &UGSMAsyncTaskEffectStackChanged::execEndTask },
		{ "ListenForGameplayEffectStackChange", &UGSMAsyncTaskEffectStackChanged::execListenForGameplayEffectStackChange },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGSMAsyncTaskEffectStackChanged);
UClass* Z_Construct_UClass_UGSMAsyncTaskEffectStackChanged_NoRegister()
{
	return UGSMAsyncTaskEffectStackChanged::StaticClass();
}
struct Z_Construct_UClass_UGSMAsyncTaskEffectStackChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Blueprint node to automatically register a listener for changes to a GameplayEffect's stack count based on an Asset or Granted tag on the Effect.\n * Useful to use in UI.\n */" },
#endif
		{ "ExposedAsyncProxy", "AsyncTask" },
		{ "IncludePath", "AsyncTasks/GSMAsyncTaskEffectStackChanged.h" },
		{ "ModuleRelativePath", "Public/AsyncTasks/GSMAsyncTaskEffectStackChanged.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blueprint node to automatically register a listener for changes to a GameplayEffect's stack count based on an Asset or Granted tag on the Effect.\nUseful to use in UI." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnGameplayEffectStackChange_MetaData[] = {
		{ "ModuleRelativePath", "Public/AsyncTasks/GSMAsyncTaskEffectStackChanged.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ASC_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AsyncTasks/GSMAsyncTaskEffectStackChanged.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGameplayEffectStackChange;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ASC;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGSMAsyncTaskEffectStackChanged_EndTask, "EndTask" }, // 2997504351
		{ &Z_Construct_UFunction_UGSMAsyncTaskEffectStackChanged_ListenForGameplayEffectStackChange, "ListenForGameplayEffectStackChange" }, // 380653060
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGSMAsyncTaskEffectStackChanged>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGSMAsyncTaskEffectStackChanged_Statics::NewProp_OnGameplayEffectStackChange = { "OnGameplayEffectStackChange", nullptr, (EPropertyFlags)0x0040000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSMAsyncTaskEffectStackChanged, OnGameplayEffectStackChange), Z_Construct_UDelegateFunction_GASMagician_AsyncOnGameplayEffectStackChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnGameplayEffectStackChange_MetaData), NewProp_OnGameplayEffectStackChange_MetaData) }; // 1483879067
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGSMAsyncTaskEffectStackChanged_Statics::NewProp_ASC = { "ASC", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSMAsyncTaskEffectStackChanged, ASC), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ASC_MetaData), NewProp_ASC_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGSMAsyncTaskEffectStackChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSMAsyncTaskEffectStackChanged_Statics::NewProp_OnGameplayEffectStackChange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSMAsyncTaskEffectStackChanged_Statics::NewProp_ASC,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGSMAsyncTaskEffectStackChanged_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGSMAsyncTaskEffectStackChanged_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_GASMagician,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGSMAsyncTaskEffectStackChanged_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGSMAsyncTaskEffectStackChanged_Statics::ClassParams = {
	&UGSMAsyncTaskEffectStackChanged::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UGSMAsyncTaskEffectStackChanged_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UGSMAsyncTaskEffectStackChanged_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSMAsyncTaskEffectStackChanged_Statics::Class_MetaDataParams), Z_Construct_UClass_UGSMAsyncTaskEffectStackChanged_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGSMAsyncTaskEffectStackChanged()
{
	if (!Z_Registration_Info_UClass_UGSMAsyncTaskEffectStackChanged.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGSMAsyncTaskEffectStackChanged.OuterSingleton, Z_Construct_UClass_UGSMAsyncTaskEffectStackChanged_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGSMAsyncTaskEffectStackChanged.OuterSingleton;
}
template<> GASMAGICIAN_API UClass* StaticClass<UGSMAsyncTaskEffectStackChanged>()
{
	return UGSMAsyncTaskEffectStackChanged::StaticClass();
}
UGSMAsyncTaskEffectStackChanged::UGSMAsyncTaskEffectStackChanged(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGSMAsyncTaskEffectStackChanged);
UGSMAsyncTaskEffectStackChanged::~UGSMAsyncTaskEffectStackChanged() {}
// End Class UGSMAsyncTaskEffectStackChanged

// Begin Registration
struct Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_AsyncTasks_GSMAsyncTaskEffectStackChanged_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGSMAsyncTaskEffectStackChanged, UGSMAsyncTaskEffectStackChanged::StaticClass, TEXT("UGSMAsyncTaskEffectStackChanged"), &Z_Registration_Info_UClass_UGSMAsyncTaskEffectStackChanged, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGSMAsyncTaskEffectStackChanged), 1436482386U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_AsyncTasks_GSMAsyncTaskEffectStackChanged_h_4056921212(TEXT("/Script/GASMagician"),
	Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_AsyncTasks_GSMAsyncTaskEffectStackChanged_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_AsyncTasks_GSMAsyncTaskEffectStackChanged_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
