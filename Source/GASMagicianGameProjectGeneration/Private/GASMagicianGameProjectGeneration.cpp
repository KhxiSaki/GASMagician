#include "GASMagicianGameProjectGeneration.h"
#include "AssetToolsModule.h"
#include "LevelEditor.h"
#include "SourceCodeNavigation.h"
#include "ToolMenus.h"
#include "GSMCommands.h"
#include "Interfaces/IMainFrameModule.h"
#include "Runtime/Launch/Resources/Version.h"
#include "UI/Widgets/SGSMNewMVVMModelClassDialog.h"

#define LOCTEXT_NAMESPACE "GASMagicianGameProjectGeneration"

void FGASMagicianGameProjectGenerationModule::StartupModule()
{
	InitializeStyles();
	RegisterCommands();
	// Create an editor interface, so the runtime module can access it

	PluginCommands = MakeShareable(new FUICommandList);

	UToolMenus::RegisterStartupCallback(FSimpleMulticastDelegate::FDelegate::CreateRaw(this, &FGASMagicianGameProjectGenerationModule::RegisterMenus));
}

void FGASMagicianGameProjectGenerationModule::ShutdownModule()
{
	UToolMenus::UnRegisterStartupCallback(this);
	UToolMenus::UnregisterOwner(this);

	ShutdownStyle();
	UnregisterCommands();

	FLevelEditorModule& LevelEditor = FModuleManager::LoadModuleChecked<FLevelEditorModule>("LevelEditor");
	LevelEditor.OnMapChanged().Remove(MapChangedHandle);

	// Unregister property editor customizations
	if (FModuleManager::Get().IsModuleLoaded("PropertyEditor"))
	{
		FPropertyEditorModule& PropertyModule = FModuleManager::LoadModuleChecked<FPropertyEditorModule>("PropertyEditor");
		UnregisterDetailsCustomization(PropertyModule);
	}
}

void FGASMagicianGameProjectGenerationModule::RegisterCommands()
{
	FGSMCommands::Register();
}

void FGASMagicianGameProjectGenerationModule::UnregisterCommands()
{
	FGSMCommands::Unregister();
}

void FGASMagicianGameProjectGenerationModule::InitializeStyles()
{
	FGSMEditorStyle::Initialize();
	FGSMEditorStyle::ReloadTextures();
}

void FGASMagicianGameProjectGenerationModule::ShutdownStyle()
{
	FGSMEditorStyle::Shutdown();
}

void FGASMagicianGameProjectGenerationModule::OpenMVVMAddToProjectDialog(const FAddToProjectConfig& Config)
{
	// If we've been given a class then we only show the second page of the dialog, so we can make the window smaller as that page doesn't have as much content
	const FVector2D WindowSize = FVector2D(940, 720);

	FText WindowTitle = Config._WindowTitle;
	if (WindowTitle.IsEmpty())
	{
		WindowTitle = LOCTEXT("AddCodeWindowHeader_Native", "Add MVVM C++ Class");
	}

	TSharedRef<SWindow> AddCodeWindow =
		SNew(SWindow)
		.Title(WindowTitle)
		.ClientSize(WindowSize)
		.SizingRule(ESizingRule::UserSized)
		.MinWidth(WindowSize.X)
		.MinHeight(WindowSize.Y)
		.SupportsMinimize(false)
		.SupportsMaximize(true);

	const TSharedRef<SGSMNewMVVMModelClassDialog> NewClassDialog =
		SNew(SGSMNewMVVMModelClassDialog)
		.ParentWindow(AddCodeWindow)
		.InitialPath(Config._InitialPath)
		.OnAddedToProject(Config._OnAddedToProject)
		.DefaultClassPrefix(Config._DefaultClassPrefix)
		.DefaultClassName(Config._DefaultClassName);

	AddCodeWindow->SetContent(NewClassDialog);

	TSharedPtr<SWindow> ParentWindow = Config._ParentWindow;
	if (!ParentWindow.IsValid())
	{
		static const FName MainFrameModuleName = "MainFrame";
		IMainFrameModule& MainFrameModule = FModuleManager::LoadModuleChecked<IMainFrameModule>(MainFrameModuleName);
		ParentWindow = MainFrameModule.GetParentWindow();
	}

	if (Config._bModal)
	{
		FSlateApplication::Get().AddModalWindow(AddCodeWindow, ParentWindow);
	}
	else if (ParentWindow.IsValid())
	{
		FSlateApplication::Get().AddWindowAsNativeChild(AddCodeWindow, ParentWindow.ToSharedRef());
	}
	else
	{
		FSlateApplication::Get().AddWindow(AddCodeWindow);
	}
}

EAssetTypeCategories::Type FGASMagicianGameProjectGenerationModule::GetAssetTypeCategory() const
{
	return AssetTypeCategory;
}

void FGASMagicianGameProjectGenerationModule::UnregisterDetailsCustomization(FPropertyEditorModule& PropertyEditorModule)
{
	for (const FName& ClassName : RegisteredClassCustomizations)
	{
		PropertyEditorModule.UnregisterCustomClassLayout(ClassName);
	}
	RegisteredClassCustomizations.Reset();
}

TSharedRef<SWidget> FGASMagicianGameProjectGenerationModule::GenerateToolbarSettingsMenu(TSharedRef<FUICommandList> InCommandList)
{
	// Get all menu extenders for this context menu from the level editor module
	FLevelEditorModule& LevelEditorModule = FModuleManager::GetModuleChecked<FLevelEditorModule>( TEXT("LevelEditor") );
	const TSharedPtr<FExtender> MenuExtender = LevelEditorModule.AssembleExtenders(InCommandList, LevelEditorModule.GetAllLevelEditorToolbarViewMenuExtenders());

	const FToolMenuContext MenuContext(InCommandList, MenuExtender);
	return UToolMenus::Get()->GenerateWidget("LevelEditor.LevelEditorToolBar.GASMagicianGameProjectGeneration.ComboMenu", MenuContext);
}

void FGASMagicianGameProjectGenerationModule::RegisterMenus()
{
	RegisterComboMenus();

	// Owner will be used for cleanup in call to UToolMenus::UnregisterOwner
	FToolMenuOwnerScoped OwnerScoped(this);
	{

		UToolMenu* SettingsToolbar = UToolMenus::Get()->RegisterMenu("LevelEditor.LevelEditorToolBar.SettingsToolbar", NAME_None, EMultiBoxType::SlimHorizontalToolBar);
		SettingsToolbar->StyleName = "AssetEditorToolbar";
		{
			FToolMenuSection& SettingsSection = SettingsToolbar->FindOrAddSection("GASMagician");
			FToolMenuEntry SettingsEntry = FToolMenuEntry::InitComboButton(
				"LevelToolbarGASMagicianSettings",
				FUIAction(),
				FOnGetContent::CreateStatic(&FGASMagicianGameProjectGenerationModule::GenerateToolbarSettingsMenu, PluginCommands.ToSharedRef()),
				LOCTEXT("QuickSettingsCombo", "GAS Magician"),
				LOCTEXT("QuickSettingsCombo_ToolTip", "GAS Magician settings & tooling"),
				FSlateIcon(FGSMEditorStyle::GetStyleSetName(), "GASMagicianGameProjectGeneration.OpenPluginWindow"),
				false
			);
			SettingsEntry.StyleNameOverride = "CalloutToolbar";
			SettingsSection.AddEntry(SettingsEntry);
		}

		
	}
}

void FGASMagicianGameProjectGenerationModule::RegisterComboMenus() const
{
	UToolMenu* Menu = UToolMenus::Get()->RegisterMenu("LevelEditor.LevelEditorToolBar.GASMagicianGameProjectGeneration.ComboMenu");

	struct Local
	{
		static void OpenMVVMModelClassWizard()
		{
			OpenMVVMAddToProjectDialog();
		}
		
		static void OpenDiscord()
		{
			FPlatformProcess::LaunchURL(TEXT("https://discord.gg/M2K8mnm9f7"), nullptr, nullptr);
		}
	};

	{
		const FText ShortIDEName = FSourceCodeNavigation::GetSelectedSourceCodeIDE();
		FToolMenuSection& Section = Menu->AddSection("ProjectSection", LOCTEXT("ProjectHeading", "Project"));
		Section.AddMenuEntry(
			"GASMagicianNewMVVMModelBaseClass",
			LOCTEXT("AddMVVMModelBaseClass", "New C++ MVVM Model Base Class..."),
			FText::Format(LOCTEXT("AddMVVMModelBaseClassTooltip", "Adds C++ MVVMModelBase code to the project. The code can only be compiled if you have {0} installed."), ShortIDEName),
			FSlateIcon(FAppStyle::GetAppStyleSetName(), "MainFrame.AddCodeToProject"),
			FUIAction(FExecuteAction::CreateStatic(&Local::OpenMVVMModelClassWizard))
		);
	}

	{
		FToolMenuSection& Section = Menu->AddSection("Support", LOCTEXT("SupportHeading", "Support"));
		Section.AddMenuEntry(
			"GASMagicianDiscord",
			LOCTEXT("GASMagicianDiscord", "Discord Server"),
			LOCTEXT("GASMagicianDiscordToolTip", "Join the Discord Server for support or chat with the community of GAS Magician users"),
			FSlateIcon(FGSMEditorStyle::GetStyleSetName(), "Icons.Discord"),
			FUIAction(FExecuteAction::CreateStatic(&Local::OpenDiscord))
		);
	}
}

#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FGASMagicianGameProjectGenerationModule, GASMagicianGameProjectGeneration)
