// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GASMagician/Public/Components/GSMAbilityInputBindingComponent.h"
#include "GameplayAbilities/Public/GameplayAbilitySpecHandle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGSMAbilityInputBindingComponent() {}

// Begin Cross Module References
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle();
GASMAGICIAN_API UClass* Z_Construct_UClass_UGSMAbilityInputBindingComponent();
GASMAGICIAN_API UClass* Z_Construct_UClass_UGSMAbilityInputBindingComponent_NoRegister();
GASMAGICIAN_API UClass* Z_Construct_UClass_UGSMPlayerControlsComponent();
GASMAGICIAN_API UScriptStruct* Z_Construct_UScriptStruct_FAbilityInputBinding();
UPackage* Z_Construct_UPackage__Script_GASMagician();
// End Cross Module References

// Begin ScriptStruct FAbilityInputBinding
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AbilityInputBinding;
class UScriptStruct* FAbilityInputBinding::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AbilityInputBinding.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AbilityInputBinding.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAbilityInputBinding, (UObject*)Z_Construct_UPackage__Script_GASMagician(), TEXT("AbilityInputBinding"));
	}
	return Z_Registration_Info_UScriptStruct_AbilityInputBinding.OuterSingleton;
}
template<> GASMAGICIAN_API UScriptStruct* StaticStruct<FAbilityInputBinding>()
{
	return FAbilityInputBinding::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAbilityInputBinding_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/GSMAbilityInputBindingComponent.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAbilityInputBinding>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAbilityInputBinding_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GASMagician,
	nullptr,
	&NewStructOps,
	"AbilityInputBinding",
	nullptr,
	0,
	sizeof(FAbilityInputBinding),
	alignof(FAbilityInputBinding),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbilityInputBinding_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAbilityInputBinding_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAbilityInputBinding()
{
	if (!Z_Registration_Info_UScriptStruct_AbilityInputBinding.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AbilityInputBinding.InnerSingleton, Z_Construct_UScriptStruct_FAbilityInputBinding_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AbilityInputBinding.InnerSingleton;
}
// End ScriptStruct FAbilityInputBinding

// Begin Class UGSMAbilityInputBindingComponent Function ClearAbilityBindings
struct Z_Construct_UFunction_UGSMAbilityInputBindingComponent_ClearAbilityBindings_Statics
{
	struct GSMAbilityInputBindingComponent_eventClearAbilityBindings_Parms
	{
		UInputAction* InputAction;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GASMagician" },
		{ "ModuleRelativePath", "Public/Components/GSMAbilityInputBindingComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputAction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGSMAbilityInputBindingComponent_ClearAbilityBindings_Statics::NewProp_InputAction = { "InputAction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMAbilityInputBindingComponent_eventClearAbilityBindings_Parms, InputAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSMAbilityInputBindingComponent_ClearAbilityBindings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMAbilityInputBindingComponent_ClearAbilityBindings_Statics::NewProp_InputAction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMAbilityInputBindingComponent_ClearAbilityBindings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSMAbilityInputBindingComponent_ClearAbilityBindings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSMAbilityInputBindingComponent, nullptr, "ClearAbilityBindings", nullptr, nullptr, Z_Construct_UFunction_UGSMAbilityInputBindingComponent_ClearAbilityBindings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMAbilityInputBindingComponent_ClearAbilityBindings_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSMAbilityInputBindingComponent_ClearAbilityBindings_Statics::GSMAbilityInputBindingComponent_eventClearAbilityBindings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMAbilityInputBindingComponent_ClearAbilityBindings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSMAbilityInputBindingComponent_ClearAbilityBindings_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGSMAbilityInputBindingComponent_ClearAbilityBindings_Statics::GSMAbilityInputBindingComponent_eventClearAbilityBindings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGSMAbilityInputBindingComponent_ClearAbilityBindings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSMAbilityInputBindingComponent_ClearAbilityBindings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGSMAbilityInputBindingComponent::execClearAbilityBindings)
{
	P_GET_OBJECT(UInputAction,Z_Param_InputAction);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearAbilityBindings(Z_Param_InputAction);
	P_NATIVE_END;
}
// End Class UGSMAbilityInputBindingComponent Function ClearAbilityBindings

// Begin Class UGSMAbilityInputBindingComponent Function ClearInputBinding
struct Z_Construct_UFunction_UGSMAbilityInputBindingComponent_ClearInputBinding_Statics
{
	struct GSMAbilityInputBindingComponent_eventClearInputBinding_Parms
	{
		FGameplayAbilitySpecHandle AbilityHandle;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GASMagician" },
		{ "ModuleRelativePath", "Public/Components/GSMAbilityInputBindingComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityHandle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSMAbilityInputBindingComponent_ClearInputBinding_Statics::NewProp_AbilityHandle = { "AbilityHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMAbilityInputBindingComponent_eventClearInputBinding_Parms, AbilityHandle), Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle, METADATA_PARAMS(0, nullptr) }; // 3490030742
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSMAbilityInputBindingComponent_ClearInputBinding_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMAbilityInputBindingComponent_ClearInputBinding_Statics::NewProp_AbilityHandle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMAbilityInputBindingComponent_ClearInputBinding_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSMAbilityInputBindingComponent_ClearInputBinding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSMAbilityInputBindingComponent, nullptr, "ClearInputBinding", nullptr, nullptr, Z_Construct_UFunction_UGSMAbilityInputBindingComponent_ClearInputBinding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMAbilityInputBindingComponent_ClearInputBinding_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSMAbilityInputBindingComponent_ClearInputBinding_Statics::GSMAbilityInputBindingComponent_eventClearInputBinding_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMAbilityInputBindingComponent_ClearInputBinding_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSMAbilityInputBindingComponent_ClearInputBinding_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGSMAbilityInputBindingComponent_ClearInputBinding_Statics::GSMAbilityInputBindingComponent_eventClearInputBinding_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGSMAbilityInputBindingComponent_ClearInputBinding()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSMAbilityInputBindingComponent_ClearInputBinding_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGSMAbilityInputBindingComponent::execClearInputBinding)
{
	P_GET_STRUCT(FGameplayAbilitySpecHandle,Z_Param_AbilityHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearInputBinding(Z_Param_AbilityHandle);
	P_NATIVE_END;
}
// End Class UGSMAbilityInputBindingComponent Function ClearInputBinding

// Begin Class UGSMAbilityInputBindingComponent Function SetInputBinding
struct Z_Construct_UFunction_UGSMAbilityInputBindingComponent_SetInputBinding_Statics
{
	struct GSMAbilityInputBindingComponent_eventSetInputBinding_Parms
	{
		UInputAction* InputAction;
		FGameplayAbilitySpecHandle AbilityHandle;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GASMagician" },
		{ "ModuleRelativePath", "Public/Components/GSMAbilityInputBindingComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputAction;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityHandle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGSMAbilityInputBindingComponent_SetInputBinding_Statics::NewProp_InputAction = { "InputAction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMAbilityInputBindingComponent_eventSetInputBinding_Parms, InputAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSMAbilityInputBindingComponent_SetInputBinding_Statics::NewProp_AbilityHandle = { "AbilityHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMAbilityInputBindingComponent_eventSetInputBinding_Parms, AbilityHandle), Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle, METADATA_PARAMS(0, nullptr) }; // 3490030742
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSMAbilityInputBindingComponent_SetInputBinding_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMAbilityInputBindingComponent_SetInputBinding_Statics::NewProp_InputAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMAbilityInputBindingComponent_SetInputBinding_Statics::NewProp_AbilityHandle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMAbilityInputBindingComponent_SetInputBinding_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSMAbilityInputBindingComponent_SetInputBinding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSMAbilityInputBindingComponent, nullptr, "SetInputBinding", nullptr, nullptr, Z_Construct_UFunction_UGSMAbilityInputBindingComponent_SetInputBinding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMAbilityInputBindingComponent_SetInputBinding_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSMAbilityInputBindingComponent_SetInputBinding_Statics::GSMAbilityInputBindingComponent_eventSetInputBinding_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMAbilityInputBindingComponent_SetInputBinding_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSMAbilityInputBindingComponent_SetInputBinding_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGSMAbilityInputBindingComponent_SetInputBinding_Statics::GSMAbilityInputBindingComponent_eventSetInputBinding_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGSMAbilityInputBindingComponent_SetInputBinding()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSMAbilityInputBindingComponent_SetInputBinding_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGSMAbilityInputBindingComponent::execSetInputBinding)
{
	P_GET_OBJECT(UInputAction,Z_Param_InputAction);
	P_GET_STRUCT(FGameplayAbilitySpecHandle,Z_Param_AbilityHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetInputBinding(Z_Param_InputAction,Z_Param_AbilityHandle);
	P_NATIVE_END;
}
// End Class UGSMAbilityInputBindingComponent Function SetInputBinding

// Begin Class UGSMAbilityInputBindingComponent
void UGSMAbilityInputBindingComponent::StaticRegisterNativesUGSMAbilityInputBindingComponent()
{
	UClass* Class = UGSMAbilityInputBindingComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ClearAbilityBindings", &UGSMAbilityInputBindingComponent::execClearAbilityBindings },
		{ "ClearInputBinding", &UGSMAbilityInputBindingComponent::execClearInputBinding },
		{ "SetInputBinding", &UGSMAbilityInputBindingComponent::execSetInputBinding },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGSMAbilityInputBindingComponent);
UClass* Z_Construct_UClass_UGSMAbilityInputBindingComponent_NoRegister()
{
	return UGSMAbilityInputBindingComponent::StaticClass();
}
struct Z_Construct_UClass_UGSMAbilityInputBindingComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Component that hooks up enhanced input to the ability system input logic */" },
#endif
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Components/GSMAbilityInputBindingComponent.h" },
		{ "ModuleRelativePath", "Public/Components/GSMAbilityInputBindingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Component that hooks up enhanced input to the ability system input logic" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/GSMAbilityInputBindingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MappedAbilities_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/GSMAbilityInputBindingComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilityComponent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MappedAbilities_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MappedAbilities_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_MappedAbilities;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGSMAbilityInputBindingComponent_ClearAbilityBindings, "ClearAbilityBindings" }, // 28540272
		{ &Z_Construct_UFunction_UGSMAbilityInputBindingComponent_ClearInputBinding, "ClearInputBinding" }, // 3256087119
		{ &Z_Construct_UFunction_UGSMAbilityInputBindingComponent_SetInputBinding, "SetInputBinding" }, // 3889455172
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGSMAbilityInputBindingComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGSMAbilityInputBindingComponent_Statics::NewProp_AbilityComponent = { "AbilityComponent", nullptr, (EPropertyFlags)0x0040000000082008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSMAbilityInputBindingComponent, AbilityComponent), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityComponent_MetaData), NewProp_AbilityComponent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGSMAbilityInputBindingComponent_Statics::NewProp_MappedAbilities_ValueProp = { "MappedAbilities", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FAbilityInputBinding, METADATA_PARAMS(0, nullptr) }; // 2689315464
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGSMAbilityInputBindingComponent_Statics::NewProp_MappedAbilities_Key_KeyProp = { "MappedAbilities_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UGSMAbilityInputBindingComponent_Statics::NewProp_MappedAbilities = { "MappedAbilities", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSMAbilityInputBindingComponent, MappedAbilities), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MappedAbilities_MetaData), NewProp_MappedAbilities_MetaData) }; // 2689315464
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGSMAbilityInputBindingComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSMAbilityInputBindingComponent_Statics::NewProp_AbilityComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSMAbilityInputBindingComponent_Statics::NewProp_MappedAbilities_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSMAbilityInputBindingComponent_Statics::NewProp_MappedAbilities_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSMAbilityInputBindingComponent_Statics::NewProp_MappedAbilities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGSMAbilityInputBindingComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGSMAbilityInputBindingComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGSMPlayerControlsComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_GASMagician,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGSMAbilityInputBindingComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGSMAbilityInputBindingComponent_Statics::ClassParams = {
	&UGSMAbilityInputBindingComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UGSMAbilityInputBindingComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UGSMAbilityInputBindingComponent_Statics::PropPointers),
	0,
	0x00A000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSMAbilityInputBindingComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UGSMAbilityInputBindingComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGSMAbilityInputBindingComponent()
{
	if (!Z_Registration_Info_UClass_UGSMAbilityInputBindingComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGSMAbilityInputBindingComponent.OuterSingleton, Z_Construct_UClass_UGSMAbilityInputBindingComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGSMAbilityInputBindingComponent.OuterSingleton;
}
template<> GASMAGICIAN_API UClass* StaticClass<UGSMAbilityInputBindingComponent>()
{
	return UGSMAbilityInputBindingComponent::StaticClass();
}
UGSMAbilityInputBindingComponent::UGSMAbilityInputBindingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGSMAbilityInputBindingComponent);
UGSMAbilityInputBindingComponent::~UGSMAbilityInputBindingComponent() {}
// End Class UGSMAbilityInputBindingComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_Components_GSMAbilityInputBindingComponent_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAbilityInputBinding::StaticStruct, Z_Construct_UScriptStruct_FAbilityInputBinding_Statics::NewStructOps, TEXT("AbilityInputBinding"), &Z_Registration_Info_UScriptStruct_AbilityInputBinding, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAbilityInputBinding), 2689315464U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGSMAbilityInputBindingComponent, UGSMAbilityInputBindingComponent::StaticClass, TEXT("UGSMAbilityInputBindingComponent"), &Z_Registration_Info_UClass_UGSMAbilityInputBindingComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGSMAbilityInputBindingComponent), 725496312U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_Components_GSMAbilityInputBindingComponent_h_130738127(TEXT("/Script/GASMagician"),
	Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_Components_GSMAbilityInputBindingComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_Components_GSMAbilityInputBindingComponent_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_Components_GSMAbilityInputBindingComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_Components_GSMAbilityInputBindingComponent_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
