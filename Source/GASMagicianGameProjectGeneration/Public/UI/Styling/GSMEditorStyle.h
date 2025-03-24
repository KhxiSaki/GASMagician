#pragma once

#include "CoreMinimal.h"
#include "Styling/SlateStyle.h"

/**  */
class FGSMEditorStyle
{
public:

	static void Initialize();

	static void Shutdown();

	/** reloads textures used by slate renderer */
	static void ReloadTextures();

	/** @return The Slate style set for the Shooter game */
	static const ISlateStyle& Get();

	static FName GetStyleSetName();

private:

	static TSharedRef<class FSlateStyleSet> Create();
	static TSharedRef<class FSlateStyleSet> CreateStyle(FName StyleSetName);

private:

	static TSharedPtr<class FSlateStyleSet> StyleInstance;
};
