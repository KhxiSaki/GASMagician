#pragma once

#include "CoreMinimal.h"
#include "Framework/Commands/Commands.h"
#include "UI/Styling/GSMEditorStyle.h"

class FGSMCommands : public TCommands<FGSMCommands>
{
public:

	FGSMCommands() : TCommands<FGSMCommands>
	(
		TEXT("FGASMagicianGameProjectGenerationModule"),
		NSLOCTEXT("Contexts", "FGASMagicianGameProjectGenerationModule", "FGASMagicianGameProjectGenerationModule Plugin"),
		NAME_None,
		FGSMEditorStyle::GetStyleSetName()
	)
	{}

	TSharedPtr< FUICommandInfo > OpenPluginWindow;

	// TCommands<> interface
	virtual void RegisterCommands() override;
};
