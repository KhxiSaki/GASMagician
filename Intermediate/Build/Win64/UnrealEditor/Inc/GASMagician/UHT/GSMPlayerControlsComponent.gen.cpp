// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GASMagician/Public/Components/GSMPlayerControlsComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGSMPlayerControlsComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UEnhancedInputComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
GASMAGICIAN_API UClass* Z_Construct_UClass_UGSMPlayerControlsComponent();
GASMAGICIAN_API UClass* Z_Construct_UClass_UGSMPlayerControlsComponent_NoRegister();
MODULARGAMEPLAY_API UClass* Z_Construct_UClass_UPawnComponent();
UPackage* Z_Construct_UPackage__Script_GASMagician();
// End Cross Module References

// Begin Class UGSMPlayerControlsComponent Function OnControllerChanged
struct Z_Construct_UFunction_UGSMPlayerControlsComponent_OnControllerChanged_Statics
{
	struct GSMPlayerControlsComponent_eventOnControllerChanged_Parms
	{
		APawn* Pawn;
		AController* OldController;
		AController* NewController;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Called when pawn restarts, bound to dynamic delegate */" },
#endif
		{ "ModuleRelativePath", "Public/Components/GSMPlayerControlsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when pawn restarts, bound to dynamic delegate" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Pawn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OldController;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewController;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGSMPlayerControlsComponent_OnControllerChanged_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMPlayerControlsComponent_eventOnControllerChanged_Parms, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGSMPlayerControlsComponent_OnControllerChanged_Statics::NewProp_OldController = { "OldController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMPlayerControlsComponent_eventOnControllerChanged_Parms, OldController), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGSMPlayerControlsComponent_OnControllerChanged_Statics::NewProp_NewController = { "NewController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMPlayerControlsComponent_eventOnControllerChanged_Parms, NewController), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSMPlayerControlsComponent_OnControllerChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMPlayerControlsComponent_OnControllerChanged_Statics::NewProp_Pawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMPlayerControlsComponent_OnControllerChanged_Statics::NewProp_OldController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMPlayerControlsComponent_OnControllerChanged_Statics::NewProp_NewController,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMPlayerControlsComponent_OnControllerChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSMPlayerControlsComponent_OnControllerChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSMPlayerControlsComponent, nullptr, "OnControllerChanged", nullptr, nullptr, Z_Construct_UFunction_UGSMPlayerControlsComponent_OnControllerChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMPlayerControlsComponent_OnControllerChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSMPlayerControlsComponent_OnControllerChanged_Statics::GSMPlayerControlsComponent_eventOnControllerChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMPlayerControlsComponent_OnControllerChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSMPlayerControlsComponent_OnControllerChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGSMPlayerControlsComponent_OnControllerChanged_Statics::GSMPlayerControlsComponent_eventOnControllerChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGSMPlayerControlsComponent_OnControllerChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSMPlayerControlsComponent_OnControllerChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGSMPlayerControlsComponent::execOnControllerChanged)
{
	P_GET_OBJECT(APawn,Z_Param_Pawn);
	P_GET_OBJECT(AController,Z_Param_OldController);
	P_GET_OBJECT(AController,Z_Param_NewController);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnControllerChanged(Z_Param_Pawn,Z_Param_OldController,Z_Param_NewController);
	P_NATIVE_END;
}
// End Class UGSMPlayerControlsComponent Function OnControllerChanged

// Begin Class UGSMPlayerControlsComponent Function OnPawnRestarted
struct Z_Construct_UFunction_UGSMPlayerControlsComponent_OnPawnRestarted_Statics
{
	struct GSMPlayerControlsComponent_eventOnPawnRestarted_Parms
	{
		APawn* Pawn;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Called when pawn restarts, bound to dynamic delegate */" },
#endif
		{ "ModuleRelativePath", "Public/Components/GSMPlayerControlsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when pawn restarts, bound to dynamic delegate" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Pawn;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGSMPlayerControlsComponent_OnPawnRestarted_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMPlayerControlsComponent_eventOnPawnRestarted_Parms, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSMPlayerControlsComponent_OnPawnRestarted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMPlayerControlsComponent_OnPawnRestarted_Statics::NewProp_Pawn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMPlayerControlsComponent_OnPawnRestarted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSMPlayerControlsComponent_OnPawnRestarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSMPlayerControlsComponent, nullptr, "OnPawnRestarted", nullptr, nullptr, Z_Construct_UFunction_UGSMPlayerControlsComponent_OnPawnRestarted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMPlayerControlsComponent_OnPawnRestarted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSMPlayerControlsComponent_OnPawnRestarted_Statics::GSMPlayerControlsComponent_eventOnPawnRestarted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMPlayerControlsComponent_OnPawnRestarted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSMPlayerControlsComponent_OnPawnRestarted_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGSMPlayerControlsComponent_OnPawnRestarted_Statics::GSMPlayerControlsComponent_eventOnPawnRestarted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGSMPlayerControlsComponent_OnPawnRestarted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSMPlayerControlsComponent_OnPawnRestarted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGSMPlayerControlsComponent::execOnPawnRestarted)
{
	P_GET_OBJECT(APawn,Z_Param_Pawn);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnPawnRestarted(Z_Param_Pawn);
	P_NATIVE_END;
}
// End Class UGSMPlayerControlsComponent Function OnPawnRestarted

// Begin Class UGSMPlayerControlsComponent Function SetupPlayerControls
struct GSMPlayerControlsComponent_eventSetupPlayerControls_Parms
{
	UEnhancedInputComponent* PlayerInputComponent;
};
static const FName NAME_UGSMPlayerControlsComponent_SetupPlayerControls = FName(TEXT("SetupPlayerControls"));
void UGSMPlayerControlsComponent::SetupPlayerControls(UEnhancedInputComponent* PlayerInputComponent)
{
	UFunction* Func = FindFunctionChecked(NAME_UGSMPlayerControlsComponent_SetupPlayerControls);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		GSMPlayerControlsComponent_eventSetupPlayerControls_Parms Parms;
		Parms.PlayerInputComponent=PlayerInputComponent;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		SetupPlayerControls_Implementation(PlayerInputComponent);
	}
}
struct Z_Construct_UFunction_UGSMPlayerControlsComponent_SetupPlayerControls_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GASMagician" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Native/BP Event to set up player controls */" },
#endif
		{ "ModuleRelativePath", "Public/Components/GSMPlayerControlsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Native/BP Event to set up player controls" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerInputComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerInputComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGSMPlayerControlsComponent_SetupPlayerControls_Statics::NewProp_PlayerInputComponent = { "PlayerInputComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMPlayerControlsComponent_eventSetupPlayerControls_Parms, PlayerInputComponent), Z_Construct_UClass_UEnhancedInputComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerInputComponent_MetaData), NewProp_PlayerInputComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSMPlayerControlsComponent_SetupPlayerControls_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMPlayerControlsComponent_SetupPlayerControls_Statics::NewProp_PlayerInputComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMPlayerControlsComponent_SetupPlayerControls_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSMPlayerControlsComponent_SetupPlayerControls_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSMPlayerControlsComponent, nullptr, "SetupPlayerControls", nullptr, nullptr, Z_Construct_UFunction_UGSMPlayerControlsComponent_SetupPlayerControls_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMPlayerControlsComponent_SetupPlayerControls_Statics::PropPointers), sizeof(GSMPlayerControlsComponent_eventSetupPlayerControls_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMPlayerControlsComponent_SetupPlayerControls_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSMPlayerControlsComponent_SetupPlayerControls_Statics::Function_MetaDataParams) };
static_assert(sizeof(GSMPlayerControlsComponent_eventSetupPlayerControls_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGSMPlayerControlsComponent_SetupPlayerControls()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSMPlayerControlsComponent_SetupPlayerControls_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGSMPlayerControlsComponent::execSetupPlayerControls)
{
	P_GET_OBJECT(UEnhancedInputComponent,Z_Param_PlayerInputComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetupPlayerControls_Implementation(Z_Param_PlayerInputComponent);
	P_NATIVE_END;
}
// End Class UGSMPlayerControlsComponent Function SetupPlayerControls

// Begin Class UGSMPlayerControlsComponent Function TeardownPlayerControls
struct GSMPlayerControlsComponent_eventTeardownPlayerControls_Parms
{
	UEnhancedInputComponent* PlayerInputComponent;
};
static const FName NAME_UGSMPlayerControlsComponent_TeardownPlayerControls = FName(TEXT("TeardownPlayerControls"));
void UGSMPlayerControlsComponent::TeardownPlayerControls(UEnhancedInputComponent* PlayerInputComponent)
{
	UFunction* Func = FindFunctionChecked(NAME_UGSMPlayerControlsComponent_TeardownPlayerControls);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		GSMPlayerControlsComponent_eventTeardownPlayerControls_Parms Parms;
		Parms.PlayerInputComponent=PlayerInputComponent;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		TeardownPlayerControls_Implementation(PlayerInputComponent);
	}
}
struct Z_Construct_UFunction_UGSMPlayerControlsComponent_TeardownPlayerControls_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GASMagician" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Native/BP Event to undo control setup */" },
#endif
		{ "ModuleRelativePath", "Public/Components/GSMPlayerControlsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Native/BP Event to undo control setup" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerInputComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerInputComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGSMPlayerControlsComponent_TeardownPlayerControls_Statics::NewProp_PlayerInputComponent = { "PlayerInputComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMPlayerControlsComponent_eventTeardownPlayerControls_Parms, PlayerInputComponent), Z_Construct_UClass_UEnhancedInputComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerInputComponent_MetaData), NewProp_PlayerInputComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSMPlayerControlsComponent_TeardownPlayerControls_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMPlayerControlsComponent_TeardownPlayerControls_Statics::NewProp_PlayerInputComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMPlayerControlsComponent_TeardownPlayerControls_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSMPlayerControlsComponent_TeardownPlayerControls_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSMPlayerControlsComponent, nullptr, "TeardownPlayerControls", nullptr, nullptr, Z_Construct_UFunction_UGSMPlayerControlsComponent_TeardownPlayerControls_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMPlayerControlsComponent_TeardownPlayerControls_Statics::PropPointers), sizeof(GSMPlayerControlsComponent_eventTeardownPlayerControls_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMPlayerControlsComponent_TeardownPlayerControls_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSMPlayerControlsComponent_TeardownPlayerControls_Statics::Function_MetaDataParams) };
static_assert(sizeof(GSMPlayerControlsComponent_eventTeardownPlayerControls_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGSMPlayerControlsComponent_TeardownPlayerControls()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSMPlayerControlsComponent_TeardownPlayerControls_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGSMPlayerControlsComponent::execTeardownPlayerControls)
{
	P_GET_OBJECT(UEnhancedInputComponent,Z_Param_PlayerInputComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TeardownPlayerControls_Implementation(Z_Param_PlayerInputComponent);
	P_NATIVE_END;
}
// End Class UGSMPlayerControlsComponent Function TeardownPlayerControls

// Begin Class UGSMPlayerControlsComponent
void UGSMPlayerControlsComponent::StaticRegisterNativesUGSMPlayerControlsComponent()
{
	UClass* Class = UGSMPlayerControlsComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnControllerChanged", &UGSMPlayerControlsComponent::execOnControllerChanged },
		{ "OnPawnRestarted", &UGSMPlayerControlsComponent::execOnPawnRestarted },
		{ "SetupPlayerControls", &UGSMPlayerControlsComponent::execSetupPlayerControls },
		{ "TeardownPlayerControls", &UGSMPlayerControlsComponent::execTeardownPlayerControls },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGSMPlayerControlsComponent);
UClass* Z_Construct_UClass_UGSMPlayerControlsComponent_NoRegister()
{
	return UGSMPlayerControlsComponent::StaticClass();
}
struct Z_Construct_UClass_UGSMPlayerControlsComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Modular pawn component for adding input actions and an optional input mapping to a pawn */" },
#endif
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Components/GSMPlayerControlsComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Components/GSMPlayerControlsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Modular pawn component for adding input actions and an optional input mapping to a pawn" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputMappingContext_MetaData[] = {
		{ "Category", "GASMagician" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Input mapping to add to the input system */" },
#endif
		{ "ModuleRelativePath", "Public/Components/GSMPlayerControlsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input mapping to add to the input system" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputPriority_MetaData[] = {
		{ "Category", "GASMagician" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Priority to bind mapping context with */" },
#endif
		{ "ModuleRelativePath", "Public/Components/GSMPlayerControlsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Priority to bind mapping context with" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputComponent_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The bound input component. */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/GSMPlayerControlsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The bound input component." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputMappingContext;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InputPriority;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGSMPlayerControlsComponent_OnControllerChanged, "OnControllerChanged" }, // 1273922737
		{ &Z_Construct_UFunction_UGSMPlayerControlsComponent_OnPawnRestarted, "OnPawnRestarted" }, // 2006879699
		{ &Z_Construct_UFunction_UGSMPlayerControlsComponent_SetupPlayerControls, "SetupPlayerControls" }, // 989549389
		{ &Z_Construct_UFunction_UGSMPlayerControlsComponent_TeardownPlayerControls, "TeardownPlayerControls" }, // 4153248665
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGSMPlayerControlsComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGSMPlayerControlsComponent_Statics::NewProp_InputMappingContext = { "InputMappingContext", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSMPlayerControlsComponent, InputMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputMappingContext_MetaData), NewProp_InputMappingContext_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGSMPlayerControlsComponent_Statics::NewProp_InputPriority = { "InputPriority", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSMPlayerControlsComponent, InputPriority), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputPriority_MetaData), NewProp_InputPriority_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGSMPlayerControlsComponent_Statics::NewProp_InputComponent = { "InputComponent", nullptr, (EPropertyFlags)0x0020080000082008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSMPlayerControlsComponent, InputComponent), Z_Construct_UClass_UEnhancedInputComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputComponent_MetaData), NewProp_InputComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGSMPlayerControlsComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSMPlayerControlsComponent_Statics::NewProp_InputMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSMPlayerControlsComponent_Statics::NewProp_InputPriority,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSMPlayerControlsComponent_Statics::NewProp_InputComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGSMPlayerControlsComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGSMPlayerControlsComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPawnComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_GASMagician,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGSMPlayerControlsComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGSMPlayerControlsComponent_Statics::ClassParams = {
	&UGSMPlayerControlsComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UGSMPlayerControlsComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UGSMPlayerControlsComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSMPlayerControlsComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UGSMPlayerControlsComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGSMPlayerControlsComponent()
{
	if (!Z_Registration_Info_UClass_UGSMPlayerControlsComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGSMPlayerControlsComponent.OuterSingleton, Z_Construct_UClass_UGSMPlayerControlsComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGSMPlayerControlsComponent.OuterSingleton;
}
template<> GASMAGICIAN_API UClass* StaticClass<UGSMPlayerControlsComponent>()
{
	return UGSMPlayerControlsComponent::StaticClass();
}
UGSMPlayerControlsComponent::UGSMPlayerControlsComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGSMPlayerControlsComponent);
UGSMPlayerControlsComponent::~UGSMPlayerControlsComponent() {}
// End Class UGSMPlayerControlsComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_Components_GSMPlayerControlsComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGSMPlayerControlsComponent, UGSMPlayerControlsComponent::StaticClass, TEXT("UGSMPlayerControlsComponent"), &Z_Registration_Info_UClass_UGSMPlayerControlsComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGSMPlayerControlsComponent), 4049845034U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_Components_GSMPlayerControlsComponent_h_525459141(TEXT("/Script/GASMagician"),
	Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_Components_GSMPlayerControlsComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_Components_GSMPlayerControlsComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
