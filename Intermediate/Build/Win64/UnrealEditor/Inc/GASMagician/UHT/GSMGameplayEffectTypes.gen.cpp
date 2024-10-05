// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GASMagician/Public/GSMGameplayEffectTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGSMGameplayEffectTypes() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectContext();
GASMAGICIAN_API UScriptStruct* Z_Construct_UScriptStruct_FGSMGameplayEffectContext();
UPackage* Z_Construct_UPackage__Script_GASMagician();
// End Cross Module References

// Begin ScriptStruct FGSMGameplayEffectContext
static_assert(std::is_polymorphic<FGSMGameplayEffectContext>() == std::is_polymorphic<FGameplayEffectContext>(), "USTRUCT FGSMGameplayEffectContext cannot be polymorphic unless super FGameplayEffectContext is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GSMGameplayEffectContext;
class UScriptStruct* FGSMGameplayEffectContext::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GSMGameplayEffectContext.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GSMGameplayEffectContext.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGSMGameplayEffectContext, (UObject*)Z_Construct_UPackage__Script_GASMagician(), TEXT("GSMGameplayEffectContext"));
	}
	return Z_Registration_Info_UScriptStruct_GSMGameplayEffectContext.OuterSingleton;
}
template<> GASMAGICIAN_API UScriptStruct* StaticStruct<FGSMGameplayEffectContext>()
{
	return FGSMGameplayEffectContext::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGSMGameplayEffectContext_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Data structure that stores an instigator and related data, such as positions and targets\n * Games can subclass this structure and add game-specific information\n * It is passed throughout effect execution so it is a great place to track transient information about an execution\n */" },
#endif
		{ "ModuleRelativePath", "Public/GSMGameplayEffectTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Data structure that stores an instigator and related data, such as positions and targets\nGames can subclass this structure and add game-specific information\nIt is passed throughout effect execution so it is a great place to track transient information about an execution" },
#endif
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGSMGameplayEffectContext>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGSMGameplayEffectContext_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GASMagician,
	Z_Construct_UScriptStruct_FGameplayEffectContext,
	&NewStructOps,
	"GSMGameplayEffectContext",
	nullptr,
	0,
	sizeof(FGSMGameplayEffectContext),
	alignof(FGSMGameplayEffectContext),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000205),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSMGameplayEffectContext_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGSMGameplayEffectContext_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGSMGameplayEffectContext()
{
	if (!Z_Registration_Info_UScriptStruct_GSMGameplayEffectContext.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GSMGameplayEffectContext.InnerSingleton, Z_Construct_UScriptStruct_FGSMGameplayEffectContext_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GSMGameplayEffectContext.InnerSingleton;
}
// End ScriptStruct FGSMGameplayEffectContext

// Begin Registration
struct Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_GSMGameplayEffectTypes_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FGSMGameplayEffectContext::StaticStruct, Z_Construct_UScriptStruct_FGSMGameplayEffectContext_Statics::NewStructOps, TEXT("GSMGameplayEffectContext"), &Z_Registration_Info_UScriptStruct_GSMGameplayEffectContext, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGSMGameplayEffectContext), 3854594170U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_GSMGameplayEffectTypes_h_2965992193(TEXT("/Script/GASMagician"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_GSMGameplayEffectTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_GSMGameplayEffectTypes_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
