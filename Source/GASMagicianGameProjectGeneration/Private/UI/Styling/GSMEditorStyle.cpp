#include "UI/Styling/GSMEditorStyle.h"
#include "Styling/SlateStyleRegistry.h"
#include "Framework/Application/SlateApplication.h"
#include "Interfaces/IPluginManager.h"
#include "GSMStylings.h"

TSharedPtr<FSlateStyleSet> FGSMEditorStyle::StyleInstance = nullptr;

void FGSMEditorStyle::Initialize()
{
	if (!StyleInstance.IsValid())
	{
		StyleInstance = Create();
		FSlateStyleRegistry::RegisterSlateStyle(*StyleInstance);
	}
}

void FGSMEditorStyle::Shutdown()
{
	FSlateStyleRegistry::UnRegisterSlateStyle(*StyleInstance);
	ensure(StyleInstance.IsUnique());
	StyleInstance.Reset();
}

FName FGSMEditorStyle::GetStyleSetName()
{
	static FName StyleSetName(TEXT("GASMagicianGameProjectGenerationStyle"));
	return StyleSetName;
}



TSharedRef<FSlateStyleSet> FGSMEditorStyle::Create()
{
	TSharedRef<FSlateStyleSet> Style = CreateStyle("GASMagicianGameProjectGenerationStyle");
	Style->Set("GASMagicianGameProjectGeneration.OpenPluginWindow", new IMAGE_BRUSH(TEXT("GASMagician"), Icon40x40));
	Style->Set("GASMagicianGameProjectGeneration.OpenPluginWindow.Small", new IMAGE_BRUSH(TEXT("GASMagician"), Icon20x20));

	const FTextBlockStyle NormalText = FTextBlockStyle()
	   .SetFont(DEFAULT_FONT("Regular", FCoreStyle::RegularTextSize))
	   .SetColorAndOpacity(FSlateColor::UseForeground())
	   .SetShadowOffset(FVector2D::ZeroVector)
	   .SetShadowColorAndOpacity(FLinearColor::Black)
	   .SetHighlightColor( FLinearColor( 0.02f, 0.3f, 0.0f ) )
	   .SetHighlightShape(BOX_BRUSH(Style, "Common/TextBlockHighlightShape", FMargin(3.f/8.f)));

	Style->Set(
		"GASMagicianGameProjectGeneration.h1",
		FTextBlockStyle(NormalText)
			.SetFont(DEFAULT_FONT("BoldCondensed", 28))
			.SetShadowColorAndOpacity(FLinearColor(0,0,0,0.9f))
	);

	Style->Set(
		"GASMagicianGameProjectGeneration.h2",
		FTextBlockStyle(NormalText)
			.SetFont(DEFAULT_FONT("BoldCondensed", 18))
			.SetShadowColorAndOpacity(FLinearColor(0,0,0,0.9f))
	);

	//Set discord icon in dropdown project bar
	Style->Set("Icons.Discord", new IMAGE_BRUSH("Discord", Icon16x16));

	{
		Style->Set("ClassIcon.GameplayAbility", new IMAGE_BRUSH("Ability_64x", Icon16x16));
		Style->Set("ClassThumbnail.GameplayAbility", new IMAGE_BRUSH("Ability_64x", Icon16x16));
		Style->Set("ClassIcon.GameplayEffect", new IMAGE_BRUSH("Effect_64x", Icon16x16));
		Style->Set("ClassThumbnail.GameplayEffect", new IMAGE_BRUSH("Effect_64x", Icon16x16));
		Style->Set("ClassIcon.GameplayCueNotify_Actor", new IMAGE_BRUSH("Effect_64x", Icon16x16));
		Style->Set("ClassThumbnail.GameplayCueNotify_Actor", new IMAGE_BRUSH("Effect_64x", Icon16x16));
		Style->Set("ClassIcon.AttributeSet", new IMAGE_BRUSH("AttributesSet_64x", Icon16x16));
		Style->Set("ClassThumbnail.AttributeSet", new IMAGE_BRUSH("AttributesSet_64x", Icon16x16));
		Style->Set("ClassIcon.GameplayEffectExecutionCalculation", new IMAGE_BRUSH("EffectCalculation_64x", Icon16x16));
		Style->Set("ClassThumbnail.GameplayEffectExecutionCalculation", new IMAGE_BRUSH("EffectCalculation_64x", Icon16x16));
		Style->Set("ClassIcon.GSMAbilitySet", new IMAGE_BRUSH("AbilitiesSet_64x", Icon16x16));
		Style->Set("ClassThumbnail.GSMAbilitySet", new IMAGE_BRUSH("AbilitiesSet_64x", Icon16x16));
		Style->Set("ClassIcon.GameplayModMagnitudeCalculation", new IMAGE_BRUSH("EffectCalculationModMag_64x", Icon16x16));
		Style->Set("ClassThumbnail.GameplayModMagnitudeCalculation", new IMAGE_BRUSH("EffectCalculationModMag_64x", Icon16x16));
	}

	// Common text styles
	{
		constexpr FLinearColor Badass = FLinearColor(0.729412f, 0.854902f, 0.333333f, 1.f);
		constexpr FLinearColor Tomato = FLinearColor(0.854902, 0.168741, 0.160237, 1.f);

		Style->Set(
			"Text.Badass",
			FTextBlockStyle(NormalText)
			.SetFont(DEFAULT_FONT("Regular", 10))
			.SetColorAndOpacity(FSlateColor(Badass))
		);

		Style->Set(
			"Text.Tomato",
			FTextBlockStyle(NormalText)
			.SetFont(DEFAULT_FONT("Regular", 10))
			.SetColorAndOpacity(FSlateColor(Tomato))
		);

		Style->Set(
			"Text.Bold",
			FTextBlockStyle(NormalText)
			.SetFont(DEFAULT_FONT("Regular", 11))
		);
	}
	

	// MVVM Wizard styles
	{
		Style->Set("NewClassDialog.SelectedParentClassLabel", FTextBlockStyle(NormalText)
		  .SetFont(DEFAULT_FONT("Regular", 12))
		  .SetShadowOffset(FVector2D(0, 1))
		  .SetShadowColorAndOpacity(FLinearColor(0, 0, 0, 0.9f))
		);

		Style->Set("NewClassDialog.ErrorLabelFont", FTextBlockStyle(NormalText)
			.SetFont(DEFAULT_FONT("Regular", 10))
		);

		Style->Set("NewClassDialog.PageTitle", FTextBlockStyle(NormalText)
			.SetFont(DEFAULT_FONT("BoldCondensed", 28))
		    .SetShadowOffset(FVector2D(1, 1))
		    .SetShadowColorAndOpacity(FLinearColor(0, 0, 0, 0.9f))
		);

		const FLinearColor AccentRed = FLinearColor::FromSRGBColor(FColor::FromHex("#FF4040FF"));
		Style->Set("NewClassDialog.ErrorLabelBorder", new FSlateColorBrush(AccentRed));
	}
	return Style;
}

TSharedRef<FSlateStyleSet> FGSMEditorStyle::CreateStyle(const FName StyleSetName)
{
	TSharedRef<FSlateStyleSet> Style = MakeShareable(new FSlateStyleSet(StyleSetName));
	Style->SetContentRoot(IPluginManager::Get().FindPlugin("GASMagician")->GetBaseDir() / TEXT("Resources"));
	return Style;
}

void FGSMEditorStyle::ReloadTextures()
{
	if (FSlateApplication::IsInitialized())
	{
		FSlateApplication::Get().GetRenderer()->ReloadTextureResources();
	}
}

const ISlateStyle& FGSMEditorStyle::Get()
{
	return *StyleInstance;
}

#undef IMAGE_BRUSH
#undef BOX_BRUSH
#undef BORDER_BRUSH
#undef TTF_FONT
#undef OTF_FONT
#undef JPG_IMAGE_BRUSH
