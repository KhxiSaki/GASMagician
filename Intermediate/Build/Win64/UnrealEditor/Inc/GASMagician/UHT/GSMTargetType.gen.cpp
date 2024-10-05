// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GASMagician/Public/GSMTargetType.h"
#include "GameplayAbilities/Public/Abilities/GameplayAbilityTargetTypes.h"
#include "GameplayAbilities/Public/Abilities/GameplayAbilityTypes.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGSMTargetType() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilityTargetDataHandle();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEventData();
GASMAGICIAN_API UClass* Z_Construct_UClass_UGSMTargetType();
GASMAGICIAN_API UClass* Z_Construct_UClass_UGSMTargetType_NoRegister();
GASMAGICIAN_API UClass* Z_Construct_UClass_UGSMTargetType_UseEventData();
GASMAGICIAN_API UClass* Z_Construct_UClass_UGSMTargetType_UseEventData_NoRegister();
GASMAGICIAN_API UClass* Z_Construct_UClass_UGSMTargetType_UseOwner();
GASMAGICIAN_API UClass* Z_Construct_UClass_UGSMTargetType_UseOwner_NoRegister();
UPackage* Z_Construct_UPackage__Script_GASMagician();
// End Cross Module References

// Begin Class UGSMTargetType Function GetTargets
struct GSMTargetType_eventGetTargets_Parms
{
	AActor* TargetingActor;
	FGameplayEventData EventData;
	TArray<FGameplayAbilityTargetDataHandle> OutTargetData;
	TArray<FHitResult> OutHitResults;
	TArray<AActor*> OutActors;
};
static const FName NAME_UGSMTargetType_GetTargets = FName(TEXT("GetTargets"));
void UGSMTargetType::GetTargets(AActor* TargetingActor, FGameplayEventData EventData, TArray<FGameplayAbilityTargetDataHandle>& OutTargetData, TArray<FHitResult>& OutHitResults, TArray<AActor*>& OutActors) const
{
	UFunction* Func = FindFunctionChecked(NAME_UGSMTargetType_GetTargets);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		GSMTargetType_eventGetTargets_Parms Parms;
		Parms.TargetingActor=TargetingActor;
		Parms.EventData=EventData;
		Parms.OutTargetData=OutTargetData;
		Parms.OutHitResults=OutHitResults;
		Parms.OutActors=OutActors;
		const_cast<UGSMTargetType*>(this)->ProcessEvent(Func,&Parms);
		OutTargetData=Parms.OutTargetData;
		OutHitResults=Parms.OutHitResults;
		OutActors=Parms.OutActors;
	}
	else
	{
		const_cast<UGSMTargetType*>(this)->GetTargets_Implementation(TargetingActor, EventData, OutTargetData, OutHitResults, OutActors);
	}
}
struct Z_Construct_UFunction_UGSMTargetType_GetTargets_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Called to determine targets to apply gameplay effects to */" },
#endif
		{ "ModuleRelativePath", "Public/GSMTargetType.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called to determine targets to apply gameplay effects to" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetingActor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EventData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutTargetData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutTargetData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutHitResults_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutHitResults;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OutActors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutActors;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGSMTargetType_GetTargets_Statics::NewProp_TargetingActor = { "TargetingActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMTargetType_eventGetTargets_Parms, TargetingActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSMTargetType_GetTargets_Statics::NewProp_EventData = { "EventData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMTargetType_eventGetTargets_Parms, EventData), Z_Construct_UScriptStruct_FGameplayEventData, METADATA_PARAMS(0, nullptr) }; // 1231635826
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSMTargetType_GetTargets_Statics::NewProp_OutTargetData_Inner = { "OutTargetData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayAbilityTargetDataHandle, METADATA_PARAMS(0, nullptr) }; // 2741862775
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGSMTargetType_GetTargets_Statics::NewProp_OutTargetData = { "OutTargetData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMTargetType_eventGetTargets_Parms, OutTargetData), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2741862775
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSMTargetType_GetTargets_Statics::NewProp_OutHitResults_Inner = { "OutHitResults", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(0, nullptr) }; // 4100991306
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGSMTargetType_GetTargets_Statics::NewProp_OutHitResults = { "OutHitResults", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMTargetType_eventGetTargets_Parms, OutHitResults), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 4100991306
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGSMTargetType_GetTargets_Statics::NewProp_OutActors_Inner = { "OutActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGSMTargetType_GetTargets_Statics::NewProp_OutActors = { "OutActors", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMTargetType_eventGetTargets_Parms, OutActors), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSMTargetType_GetTargets_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMTargetType_GetTargets_Statics::NewProp_TargetingActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMTargetType_GetTargets_Statics::NewProp_EventData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMTargetType_GetTargets_Statics::NewProp_OutTargetData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMTargetType_GetTargets_Statics::NewProp_OutTargetData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMTargetType_GetTargets_Statics::NewProp_OutHitResults_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMTargetType_GetTargets_Statics::NewProp_OutHitResults,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMTargetType_GetTargets_Statics::NewProp_OutActors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMTargetType_GetTargets_Statics::NewProp_OutActors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMTargetType_GetTargets_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSMTargetType_GetTargets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSMTargetType, nullptr, "GetTargets", nullptr, nullptr, Z_Construct_UFunction_UGSMTargetType_GetTargets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMTargetType_GetTargets_Statics::PropPointers), sizeof(GSMTargetType_eventGetTargets_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMTargetType_GetTargets_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSMTargetType_GetTargets_Statics::Function_MetaDataParams) };
static_assert(sizeof(GSMTargetType_eventGetTargets_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGSMTargetType_GetTargets()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSMTargetType_GetTargets_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGSMTargetType::execGetTargets)
{
	P_GET_OBJECT(AActor,Z_Param_TargetingActor);
	P_GET_STRUCT(FGameplayEventData,Z_Param_EventData);
	P_GET_TARRAY_REF(FGameplayAbilityTargetDataHandle,Z_Param_Out_OutTargetData);
	P_GET_TARRAY_REF(FHitResult,Z_Param_Out_OutHitResults);
	P_GET_TARRAY_REF(AActor*,Z_Param_Out_OutActors);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetTargets_Implementation(Z_Param_TargetingActor,Z_Param_EventData,Z_Param_Out_OutTargetData,Z_Param_Out_OutHitResults,Z_Param_Out_OutActors);
	P_NATIVE_END;
}
// End Class UGSMTargetType Function GetTargets

// Begin Class UGSMTargetType
void UGSMTargetType::StaticRegisterNativesUGSMTargetType()
{
	UClass* Class = UGSMTargetType::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetTargets", &UGSMTargetType::execGetTargets },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGSMTargetType);
UClass* Z_Construct_UClass_UGSMTargetType_NoRegister()
{
	return UGSMTargetType::StaticClass();
}
struct Z_Construct_UClass_UGSMTargetType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Class that is used to determine targeting for abilities\n * It is meant to be blueprinted to run target logic\n * This does not subclass GameplayAbilityTargetActor because this class is never instanced into the world\n * This can be used as a basis for a game-specific targeting blueprint\n * If your targeting is more complicated you may need to instance into the world once or as a pooled actor\n */" },
#endif
		{ "IncludePath", "GSMTargetType.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GSMTargetType.h" },
		{ "ShowWorldContextPin", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Class that is used to determine targeting for abilities\nIt is meant to be blueprinted to run target logic\nThis does not subclass GameplayAbilityTargetActor because this class is never instanced into the world\nThis can be used as a basis for a game-specific targeting blueprint\nIf your targeting is more complicated you may need to instance into the world once or as a pooled actor" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGSMTargetType_GetTargets, "GetTargets" }, // 3411193541
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGSMTargetType>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGSMTargetType_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_GASMagician,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGSMTargetType_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGSMTargetType_Statics::ClassParams = {
	&UGSMTargetType::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSMTargetType_Statics::Class_MetaDataParams), Z_Construct_UClass_UGSMTargetType_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGSMTargetType()
{
	if (!Z_Registration_Info_UClass_UGSMTargetType.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGSMTargetType.OuterSingleton, Z_Construct_UClass_UGSMTargetType_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGSMTargetType.OuterSingleton;
}
template<> GASMAGICIAN_API UClass* StaticClass<UGSMTargetType>()
{
	return UGSMTargetType::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGSMTargetType);
UGSMTargetType::~UGSMTargetType() {}
// End Class UGSMTargetType

// Begin Class UGSMTargetType_UseOwner
void UGSMTargetType_UseOwner::StaticRegisterNativesUGSMTargetType_UseOwner()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGSMTargetType_UseOwner);
UClass* Z_Construct_UClass_UGSMTargetType_UseOwner_NoRegister()
{
	return UGSMTargetType_UseOwner::StaticClass();
}
struct Z_Construct_UClass_UGSMTargetType_UseOwner_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Trivial target type that uses the owner */" },
#endif
		{ "IncludePath", "GSMTargetType.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/GSMTargetType.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Trivial target type that uses the owner" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGSMTargetType_UseOwner>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGSMTargetType_UseOwner_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGSMTargetType,
	(UObject* (*)())Z_Construct_UPackage__Script_GASMagician,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGSMTargetType_UseOwner_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGSMTargetType_UseOwner_Statics::ClassParams = {
	&UGSMTargetType_UseOwner::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSMTargetType_UseOwner_Statics::Class_MetaDataParams), Z_Construct_UClass_UGSMTargetType_UseOwner_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGSMTargetType_UseOwner()
{
	if (!Z_Registration_Info_UClass_UGSMTargetType_UseOwner.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGSMTargetType_UseOwner.OuterSingleton, Z_Construct_UClass_UGSMTargetType_UseOwner_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGSMTargetType_UseOwner.OuterSingleton;
}
template<> GASMAGICIAN_API UClass* StaticClass<UGSMTargetType_UseOwner>()
{
	return UGSMTargetType_UseOwner::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGSMTargetType_UseOwner);
UGSMTargetType_UseOwner::~UGSMTargetType_UseOwner() {}
// End Class UGSMTargetType_UseOwner

// Begin Class UGSMTargetType_UseEventData
void UGSMTargetType_UseEventData::StaticRegisterNativesUGSMTargetType_UseEventData()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGSMTargetType_UseEventData);
UClass* Z_Construct_UClass_UGSMTargetType_UseEventData_NoRegister()
{
	return UGSMTargetType_UseEventData::StaticClass();
}
struct Z_Construct_UClass_UGSMTargetType_UseEventData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Trivial target type that pulls the target out of the event data */" },
#endif
		{ "IncludePath", "GSMTargetType.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/GSMTargetType.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Trivial target type that pulls the target out of the event data" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGSMTargetType_UseEventData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGSMTargetType_UseEventData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGSMTargetType,
	(UObject* (*)())Z_Construct_UPackage__Script_GASMagician,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGSMTargetType_UseEventData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGSMTargetType_UseEventData_Statics::ClassParams = {
	&UGSMTargetType_UseEventData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSMTargetType_UseEventData_Statics::Class_MetaDataParams), Z_Construct_UClass_UGSMTargetType_UseEventData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGSMTargetType_UseEventData()
{
	if (!Z_Registration_Info_UClass_UGSMTargetType_UseEventData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGSMTargetType_UseEventData.OuterSingleton, Z_Construct_UClass_UGSMTargetType_UseEventData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGSMTargetType_UseEventData.OuterSingleton;
}
template<> GASMAGICIAN_API UClass* StaticClass<UGSMTargetType_UseEventData>()
{
	return UGSMTargetType_UseEventData::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGSMTargetType_UseEventData);
UGSMTargetType_UseEventData::~UGSMTargetType_UseEventData() {}
// End Class UGSMTargetType_UseEventData

// Begin Registration
struct Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_GSMTargetType_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGSMTargetType, UGSMTargetType::StaticClass, TEXT("UGSMTargetType"), &Z_Registration_Info_UClass_UGSMTargetType, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGSMTargetType), 532483397U) },
		{ Z_Construct_UClass_UGSMTargetType_UseOwner, UGSMTargetType_UseOwner::StaticClass, TEXT("UGSMTargetType_UseOwner"), &Z_Registration_Info_UClass_UGSMTargetType_UseOwner, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGSMTargetType_UseOwner), 4110557182U) },
		{ Z_Construct_UClass_UGSMTargetType_UseEventData, UGSMTargetType_UseEventData::StaticClass, TEXT("UGSMTargetType_UseEventData"), &Z_Registration_Info_UClass_UGSMTargetType_UseEventData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGSMTargetType_UseEventData), 3372984021U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_GSMTargetType_h_2384086978(TEXT("/Script/GASMagician"),
	Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_GSMTargetType_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_GSMTargetType_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
