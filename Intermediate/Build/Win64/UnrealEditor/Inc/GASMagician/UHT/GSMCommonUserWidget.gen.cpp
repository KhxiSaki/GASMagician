// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GASMagician/Public/UI/GSMCommonUserWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGSMCommonUserWidget() {}

// Begin Cross Module References
COMMONUI_API UClass* Z_Construct_UClass_UCommonUserWidget();
GASMAGICIAN_API UClass* Z_Construct_UClass_UGSMCommonUserWidget();
GASMAGICIAN_API UClass* Z_Construct_UClass_UGSMCommonUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_GASMagician();
// End Cross Module References

// Begin Class UGSMCommonUserWidget
void UGSMCommonUserWidget::StaticRegisterNativesUGSMCommonUserWidget()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGSMCommonUserWidget);
UClass* Z_Construct_UClass_UGSMCommonUserWidget_NoRegister()
{
	return UGSMCommonUserWidget::StaticClass();
}
struct Z_Construct_UClass_UGSMCommonUserWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI/GSMCommonUserWidget.h" },
		{ "ModuleRelativePath", "Public/UI/GSMCommonUserWidget.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGSMCommonUserWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGSMCommonUserWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCommonUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_GASMagician,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGSMCommonUserWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGSMCommonUserWidget_Statics::ClassParams = {
	&UGSMCommonUserWidget::StaticClass,
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
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSMCommonUserWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UGSMCommonUserWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGSMCommonUserWidget()
{
	if (!Z_Registration_Info_UClass_UGSMCommonUserWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGSMCommonUserWidget.OuterSingleton, Z_Construct_UClass_UGSMCommonUserWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGSMCommonUserWidget.OuterSingleton;
}
template<> GASMAGICIAN_API UClass* StaticClass<UGSMCommonUserWidget>()
{
	return UGSMCommonUserWidget::StaticClass();
}
UGSMCommonUserWidget::UGSMCommonUserWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGSMCommonUserWidget);
UGSMCommonUserWidget::~UGSMCommonUserWidget() {}
// End Class UGSMCommonUserWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_UI_GSMCommonUserWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGSMCommonUserWidget, UGSMCommonUserWidget::StaticClass, TEXT("UGSMCommonUserWidget"), &Z_Registration_Info_UClass_UGSMCommonUserWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGSMCommonUserWidget), 3195970711U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_UI_GSMCommonUserWidget_h_2992344843(TEXT("/Script/GASMagician"),
	Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_UI_GSMCommonUserWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_UI_GSMCommonUserWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
