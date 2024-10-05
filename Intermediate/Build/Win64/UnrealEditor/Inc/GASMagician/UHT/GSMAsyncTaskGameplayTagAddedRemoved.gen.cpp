// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GASMagician/Public/AsyncTasks/GSMAsyncTaskGameplayTagAddedRemoved.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGSMAsyncTaskGameplayTagAddedRemoved() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
GASMAGICIAN_API UClass* Z_Construct_UClass_UGSMAsyncTaskGameplayTagAddedRemoved();
GASMAGICIAN_API UClass* Z_Construct_UClass_UGSMAsyncTaskGameplayTagAddedRemoved_NoRegister();
GASMAGICIAN_API UFunction* Z_Construct_UDelegateFunction_GASMagician_AsyncOnGameplayTagAddedRemoved__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_GASMagician();
// End Cross Module References

// Begin Delegate FAsyncOnGameplayTagAddedRemoved
struct Z_Construct_UDelegateFunction_GASMagician_AsyncOnGameplayTagAddedRemoved__DelegateSignature_Statics
{
	struct _Script_GASMagician_eventAsyncOnGameplayTagAddedRemoved_Parms
	{
		FGameplayTag Tag;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AsyncTasks/GSMAsyncTaskGameplayTagAddedRemoved.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_GASMagician_AsyncOnGameplayTagAddedRemoved__DelegateSignature_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_GASMagician_eventAsyncOnGameplayTagAddedRemoved_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GASMagician_AsyncOnGameplayTagAddedRemoved__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GASMagician_AsyncOnGameplayTagAddedRemoved__DelegateSignature_Statics::NewProp_Tag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GASMagician_AsyncOnGameplayTagAddedRemoved__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GASMagician_AsyncOnGameplayTagAddedRemoved__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GASMagician, nullptr, "AsyncOnGameplayTagAddedRemoved__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_GASMagician_AsyncOnGameplayTagAddedRemoved__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GASMagician_AsyncOnGameplayTagAddedRemoved__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_GASMagician_AsyncOnGameplayTagAddedRemoved__DelegateSignature_Statics::_Script_GASMagician_eventAsyncOnGameplayTagAddedRemoved_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GASMagician_AsyncOnGameplayTagAddedRemoved__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_GASMagician_AsyncOnGameplayTagAddedRemoved__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_GASMagician_AsyncOnGameplayTagAddedRemoved__DelegateSignature_Statics::_Script_GASMagician_eventAsyncOnGameplayTagAddedRemoved_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_GASMagician_AsyncOnGameplayTagAddedRemoved__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GASMagician_AsyncOnGameplayTagAddedRemoved__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FAsyncOnGameplayTagAddedRemoved_DelegateWrapper(const FMulticastScriptDelegate& AsyncOnGameplayTagAddedRemoved, FGameplayTag Tag)
{
	struct _Script_GASMagician_eventAsyncOnGameplayTagAddedRemoved_Parms
	{
		FGameplayTag Tag;
	};
	_Script_GASMagician_eventAsyncOnGameplayTagAddedRemoved_Parms Parms;
	Parms.Tag=Tag;
	AsyncOnGameplayTagAddedRemoved.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FAsyncOnGameplayTagAddedRemoved

// Begin Class UGSMAsyncTaskGameplayTagAddedRemoved Function EndTask
struct Z_Construct_UFunction_UGSMAsyncTaskGameplayTagAddedRemoved_EndTask_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// You must call this function manually when you want the AsyncTask to end.\n// For UMG Widgets, you would call it in the Widget's Destruct event.\n" },
#endif
		{ "ModuleRelativePath", "Public/AsyncTasks/GSMAsyncTaskGameplayTagAddedRemoved.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "You must call this function manually when you want the AsyncTask to end.\nFor UMG Widgets, you would call it in the Widget's Destruct event." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSMAsyncTaskGameplayTagAddedRemoved_EndTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSMAsyncTaskGameplayTagAddedRemoved, nullptr, "EndTask", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMAsyncTaskGameplayTagAddedRemoved_EndTask_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSMAsyncTaskGameplayTagAddedRemoved_EndTask_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UGSMAsyncTaskGameplayTagAddedRemoved_EndTask()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSMAsyncTaskGameplayTagAddedRemoved_EndTask_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGSMAsyncTaskGameplayTagAddedRemoved::execEndTask)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EndTask();
	P_NATIVE_END;
}
// End Class UGSMAsyncTaskGameplayTagAddedRemoved Function EndTask

// Begin Class UGSMAsyncTaskGameplayTagAddedRemoved Function ListenForGameplayTagAddedOrRemoved
struct Z_Construct_UFunction_UGSMAsyncTaskGameplayTagAddedRemoved_ListenForGameplayTagAddedOrRemoved_Statics
{
	struct GSMAsyncTaskGameplayTagAddedRemoved_eventListenForGameplayTagAddedOrRemoved_Parms
	{
		UAbilitySystemComponent* AbilitySystemComponent;
		FGameplayTagContainer Tags;
		UGSMAsyncTaskGameplayTagAddedRemoved* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Listens for FGameplayTags added and removed.\n" },
#endif
		{ "ModuleRelativePath", "Public/AsyncTasks/GSMAsyncTaskGameplayTagAddedRemoved.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Listens for FGameplayTags added and removed." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystemComponent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tags;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGSMAsyncTaskGameplayTagAddedRemoved_ListenForGameplayTagAddedOrRemoved_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMAsyncTaskGameplayTagAddedRemoved_eventListenForGameplayTagAddedOrRemoved_Parms, AbilitySystemComponent), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilitySystemComponent_MetaData), NewProp_AbilitySystemComponent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSMAsyncTaskGameplayTagAddedRemoved_ListenForGameplayTagAddedOrRemoved_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMAsyncTaskGameplayTagAddedRemoved_eventListenForGameplayTagAddedOrRemoved_Parms, Tags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(0, nullptr) }; // 3352185621
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGSMAsyncTaskGameplayTagAddedRemoved_ListenForGameplayTagAddedOrRemoved_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMAsyncTaskGameplayTagAddedRemoved_eventListenForGameplayTagAddedOrRemoved_Parms, ReturnValue), Z_Construct_UClass_UGSMAsyncTaskGameplayTagAddedRemoved_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSMAsyncTaskGameplayTagAddedRemoved_ListenForGameplayTagAddedOrRemoved_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMAsyncTaskGameplayTagAddedRemoved_ListenForGameplayTagAddedOrRemoved_Statics::NewProp_AbilitySystemComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMAsyncTaskGameplayTagAddedRemoved_ListenForGameplayTagAddedOrRemoved_Statics::NewProp_Tags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMAsyncTaskGameplayTagAddedRemoved_ListenForGameplayTagAddedOrRemoved_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMAsyncTaskGameplayTagAddedRemoved_ListenForGameplayTagAddedOrRemoved_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSMAsyncTaskGameplayTagAddedRemoved_ListenForGameplayTagAddedOrRemoved_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSMAsyncTaskGameplayTagAddedRemoved, nullptr, "ListenForGameplayTagAddedOrRemoved", nullptr, nullptr, Z_Construct_UFunction_UGSMAsyncTaskGameplayTagAddedRemoved_ListenForGameplayTagAddedOrRemoved_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMAsyncTaskGameplayTagAddedRemoved_ListenForGameplayTagAddedOrRemoved_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSMAsyncTaskGameplayTagAddedRemoved_ListenForGameplayTagAddedOrRemoved_Statics::GSMAsyncTaskGameplayTagAddedRemoved_eventListenForGameplayTagAddedOrRemoved_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMAsyncTaskGameplayTagAddedRemoved_ListenForGameplayTagAddedOrRemoved_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSMAsyncTaskGameplayTagAddedRemoved_ListenForGameplayTagAddedOrRemoved_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGSMAsyncTaskGameplayTagAddedRemoved_ListenForGameplayTagAddedOrRemoved_Statics::GSMAsyncTaskGameplayTagAddedRemoved_eventListenForGameplayTagAddedOrRemoved_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGSMAsyncTaskGameplayTagAddedRemoved_ListenForGameplayTagAddedOrRemoved()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSMAsyncTaskGameplayTagAddedRemoved_ListenForGameplayTagAddedOrRemoved_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGSMAsyncTaskGameplayTagAddedRemoved::execListenForGameplayTagAddedOrRemoved)
{
	P_GET_OBJECT(UAbilitySystemComponent,Z_Param_AbilitySystemComponent);
	P_GET_STRUCT(FGameplayTagContainer,Z_Param_Tags);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UGSMAsyncTaskGameplayTagAddedRemoved**)Z_Param__Result=UGSMAsyncTaskGameplayTagAddedRemoved::ListenForGameplayTagAddedOrRemoved(Z_Param_AbilitySystemComponent,Z_Param_Tags);
	P_NATIVE_END;
}
// End Class UGSMAsyncTaskGameplayTagAddedRemoved Function ListenForGameplayTagAddedOrRemoved

// Begin Class UGSMAsyncTaskGameplayTagAddedRemoved
void UGSMAsyncTaskGameplayTagAddedRemoved::StaticRegisterNativesUGSMAsyncTaskGameplayTagAddedRemoved()
{
	UClass* Class = UGSMAsyncTaskGameplayTagAddedRemoved::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EndTask", &UGSMAsyncTaskGameplayTagAddedRemoved::execEndTask },
		{ "ListenForGameplayTagAddedOrRemoved", &UGSMAsyncTaskGameplayTagAddedRemoved::execListenForGameplayTagAddedOrRemoved },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGSMAsyncTaskGameplayTagAddedRemoved);
UClass* Z_Construct_UClass_UGSMAsyncTaskGameplayTagAddedRemoved_NoRegister()
{
	return UGSMAsyncTaskGameplayTagAddedRemoved::StaticClass();
}
struct Z_Construct_UClass_UGSMAsyncTaskGameplayTagAddedRemoved_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Blueprint node to automatically register a listener for FGameplayTags added and removed.\n * Useful to use in Blueprint/UMG.\n */" },
#endif
		{ "ExposedAsyncProxy", "AsyncTask" },
		{ "IncludePath", "AsyncTasks/GSMAsyncTaskGameplayTagAddedRemoved.h" },
		{ "ModuleRelativePath", "Public/AsyncTasks/GSMAsyncTaskGameplayTagAddedRemoved.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blueprint node to automatically register a listener for FGameplayTags added and removed.\nUseful to use in Blueprint/UMG." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnTagAdded_MetaData[] = {
		{ "ModuleRelativePath", "Public/AsyncTasks/GSMAsyncTaskGameplayTagAddedRemoved.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnTagRemoved_MetaData[] = {
		{ "ModuleRelativePath", "Public/AsyncTasks/GSMAsyncTaskGameplayTagAddedRemoved.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ASC_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AsyncTasks/GSMAsyncTaskGameplayTagAddedRemoved.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTagAdded;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTagRemoved;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ASC;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGSMAsyncTaskGameplayTagAddedRemoved_EndTask, "EndTask" }, // 3303642937
		{ &Z_Construct_UFunction_UGSMAsyncTaskGameplayTagAddedRemoved_ListenForGameplayTagAddedOrRemoved, "ListenForGameplayTagAddedOrRemoved" }, // 1020717853
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGSMAsyncTaskGameplayTagAddedRemoved>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGSMAsyncTaskGameplayTagAddedRemoved_Statics::NewProp_OnTagAdded = { "OnTagAdded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSMAsyncTaskGameplayTagAddedRemoved, OnTagAdded), Z_Construct_UDelegateFunction_GASMagician_AsyncOnGameplayTagAddedRemoved__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnTagAdded_MetaData), NewProp_OnTagAdded_MetaData) }; // 4170803157
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGSMAsyncTaskGameplayTagAddedRemoved_Statics::NewProp_OnTagRemoved = { "OnTagRemoved", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSMAsyncTaskGameplayTagAddedRemoved, OnTagRemoved), Z_Construct_UDelegateFunction_GASMagician_AsyncOnGameplayTagAddedRemoved__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnTagRemoved_MetaData), NewProp_OnTagRemoved_MetaData) }; // 4170803157
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGSMAsyncTaskGameplayTagAddedRemoved_Statics::NewProp_ASC = { "ASC", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSMAsyncTaskGameplayTagAddedRemoved, ASC), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ASC_MetaData), NewProp_ASC_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGSMAsyncTaskGameplayTagAddedRemoved_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSMAsyncTaskGameplayTagAddedRemoved_Statics::NewProp_OnTagAdded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSMAsyncTaskGameplayTagAddedRemoved_Statics::NewProp_OnTagRemoved,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSMAsyncTaskGameplayTagAddedRemoved_Statics::NewProp_ASC,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGSMAsyncTaskGameplayTagAddedRemoved_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGSMAsyncTaskGameplayTagAddedRemoved_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_GASMagician,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGSMAsyncTaskGameplayTagAddedRemoved_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGSMAsyncTaskGameplayTagAddedRemoved_Statics::ClassParams = {
	&UGSMAsyncTaskGameplayTagAddedRemoved::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UGSMAsyncTaskGameplayTagAddedRemoved_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UGSMAsyncTaskGameplayTagAddedRemoved_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSMAsyncTaskGameplayTagAddedRemoved_Statics::Class_MetaDataParams), Z_Construct_UClass_UGSMAsyncTaskGameplayTagAddedRemoved_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGSMAsyncTaskGameplayTagAddedRemoved()
{
	if (!Z_Registration_Info_UClass_UGSMAsyncTaskGameplayTagAddedRemoved.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGSMAsyncTaskGameplayTagAddedRemoved.OuterSingleton, Z_Construct_UClass_UGSMAsyncTaskGameplayTagAddedRemoved_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGSMAsyncTaskGameplayTagAddedRemoved.OuterSingleton;
}
template<> GASMAGICIAN_API UClass* StaticClass<UGSMAsyncTaskGameplayTagAddedRemoved>()
{
	return UGSMAsyncTaskGameplayTagAddedRemoved::StaticClass();
}
UGSMAsyncTaskGameplayTagAddedRemoved::UGSMAsyncTaskGameplayTagAddedRemoved(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGSMAsyncTaskGameplayTagAddedRemoved);
UGSMAsyncTaskGameplayTagAddedRemoved::~UGSMAsyncTaskGameplayTagAddedRemoved() {}
// End Class UGSMAsyncTaskGameplayTagAddedRemoved

// Begin Registration
struct Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_AsyncTasks_GSMAsyncTaskGameplayTagAddedRemoved_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGSMAsyncTaskGameplayTagAddedRemoved, UGSMAsyncTaskGameplayTagAddedRemoved::StaticClass, TEXT("UGSMAsyncTaskGameplayTagAddedRemoved"), &Z_Registration_Info_UClass_UGSMAsyncTaskGameplayTagAddedRemoved, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGSMAsyncTaskGameplayTagAddedRemoved), 3590212850U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_AsyncTasks_GSMAsyncTaskGameplayTagAddedRemoved_h_1604250576(TEXT("/Script/GASMagician"),
	Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_AsyncTasks_GSMAsyncTaskGameplayTagAddedRemoved_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_AsyncTasks_GSMAsyncTaskGameplayTagAddedRemoved_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
