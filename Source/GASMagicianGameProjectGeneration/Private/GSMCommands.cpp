#include "GSMCommands.h"

#define LOCTEXT_NAMESPACE "FGASMagicianEditorModule"

void FGSMCommands::RegisterCommands()
{
	UI_COMMAND(OpenPluginWindow, "GAS Magician", "Bring up GAS Magician New MVVM  Class Dialog", EUserInterfaceActionType::Button, FInputChord());
}

#undef LOCTEXT_NAMESPACE
