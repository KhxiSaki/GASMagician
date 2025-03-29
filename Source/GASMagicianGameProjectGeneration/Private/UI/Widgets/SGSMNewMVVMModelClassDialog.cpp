#include "UI/Widgets/SGSMNewMVVMModelClassDialog.h"
#include "ContentBrowserModule.h"
#include "IContentBrowserSingleton.h"
#include "PropertyEditorModule.h"
#include "SlateOptMacros.h"
#include "SourceCodeNavigation.h"
#include "GSMMVVMModelGenSettings.h"
#include "Editor/EditorPerProjectUserSettings.h"
#include "Framework/Docking/TabManager.h"
#include "Framework/Notifications/NotificationManager.h"
#include "HAL/FileManager.h"
#include "Interfaces/IProjectManager.h"
#include "Misc/App.h"
#include "Misc/MessageDialog.h"
#include "Runtime/Launch/Resources/Version.h"
#include "Templates/GSMGameProjectUtils.h"
#include "UI/Styling/GSMEditorStyle.h"
#include "Widgets/Input/SEditableTextBox.h"
#include "Widgets/Layout/SGridPanel.h"
#include "Widgets/Layout/SSeparator.h"
#include "Widgets/Notifications/SNotificationList.h"
#include "Widgets/Workflow/SWizard.h"
#include "Framework/Application/SlateApplication.h"
#include "Misc/App.h"
#include "Widgets/Input/SButton.h"
#include "Widgets/Images/SImage.h"
#include "Misc/Paths.h"
#include "Windows/WindowsPlatformApplicationMisc.h"

#define LOCTEXT_NAMESPACE "GASMagicianGameProjectGeneration"

/** The last selected module name. Meant to keep the same module selected after first selection */
FString SGSMNewMVVMModelClassDialog::LastSelectedModuleName;

BEGIN_SLATE_FUNCTION_BUILD_OPTIMIZATION
void SGSMNewMVVMModelClassDialog::Construct(const FArguments& InArgs)
{
	{
		TArray<FModuleContextInfo> CurrentModules = GameProjectUtils::GetCurrentProjectModules();
		// this should never happen since GetCurrentProjectModules is supposed to add a dummy runtime module if the project currently has no modules
		check(CurrentModules.Num());

		const TArray<FModuleContextInfo> CurrentPluginModules = GameProjectUtils::GetCurrentProjectPluginModules();

		CurrentModules.Append(CurrentPluginModules);

		AvailableModules.Reserve(CurrentModules.Num());
		for(const FModuleContextInfo& ModuleInfo : CurrentModules)
		{
			AvailableModules.Emplace(MakeShareable(new FModuleContextInfo(ModuleInfo)));
		}
	}

	// If we didn't get given a valid path override (see above), try and automatically work out the best default module
	// If we have a runtime module with the same name as our project, then use that
	// Otherwise, set out default target module as the first runtime module in the list
	// if(ClassDomain == EClassDomain::Native && !SelectedModuleInfo.IsValid())
	if(!SelectedModuleInfo.IsValid())
	{
		const FString ProjectName = FApp::GetProjectName();

		// Find initially selected module based on simple fallback in this order..
		// Previously selected module, main project module, a  runtime module
		TSharedPtr<FModuleContextInfo> ProjectModule;
		TSharedPtr<FModuleContextInfo> RuntimeModule;

		for (const auto& AvailableModule : AvailableModules)
		{
			// Check if this module matches our last used
			if (AvailableModule->ModuleName == LastSelectedModuleName)
			{
				SelectedModuleInfo = AvailableModule;
				break;
			}

			if (AvailableModule->ModuleName == ProjectName)
			{
				ProjectModule = AvailableModule;
			}

			if (AvailableModule->ModuleType == EHostType::Runtime)
			{
				RuntimeModule = AvailableModule;
			}
		}

		if (!SelectedModuleInfo.IsValid())
		{
			if (ProjectModule.IsValid())
			{
				// use the project module we found
				SelectedModuleInfo = ProjectModule;
			}
			else if (RuntimeModule.IsValid())
			{
				// use the first runtime module we found
				SelectedModuleInfo = RuntimeModule;
			}
			else
			{
				// default to just the first module
				SelectedModuleInfo = AvailableModules[0];
			}
		}

		NewClassPath = SelectedModuleInfo->ModuleSourcePath;
	}

	ClassLocation = GameProjectUtils::EClassLocation::UserDefined; // the first call to UpdateInputValidity will set this correctly based on NewClassPath

	ParentClassInfo = FNewClassInfo(UMVVMViewModelBase::StaticClass());

	LastPeriodicValidityCheckTime = 0;
	PeriodicValidityCheckFrequency = 1;
	bLastInputValidityCheckSuccessful = true;
	bPreventPeriodicValidityChecksUntilNextChange = false;

	auto& PropertyEditorModule = FModuleManager::LoadModuleChecked<FPropertyEditorModule>("PropertyEditor");

	FDetailsViewArgs DetailArgs;
	DetailArgs.bUpdatesFromSelection = false;
	DetailArgs.bLockable = false;
	DetailArgs.NameAreaSettings = FDetailsViewArgs::ComponentsAndActorsUseNameArea;
	DetailArgs.bCustomNameAreaLocation = false;
	DetailArgs.bCustomFilterAreaLocation = true;
	DetailArgs.DefaultsOnlyVisibility = EEditDefaultsOnlyNodeVisibility::Hide;

	auto DetailView = PropertyEditorModule.CreateDetailView(DetailArgs);

	UGSMMVVMModelAttributesGenSettings* Settings = UGSMMVVMModelAttributesGenSettings::Get();
	DetailView->SetObject(Settings);

	ChildSlot
	[
		SNew(SBorder)
		.Padding(18)
		.BorderImage(FAppStyle::GetBrush("Docking.Tab.ContentAreaBrush"))
		[
			SAssignNew(MainWizard, SWizard)
			.ShowPageList(false)
			.ButtonStyle(FAppStyle::Get(), "FlatButton.Default")
			.CancelButtonStyle(FAppStyle::Get(), "FlatButton.Default")
			.FinishButtonStyle(FAppStyle::Get(), "FlatButton.Success")
			.ButtonTextStyle(FAppStyle::Get(), "LargeText")
			#if ENGINE_MAJOR_VERSION == 4
			.ForegroundColor(FEditorStyle::Get().GetSlateColor("WhiteBrush"))
			#endif

			.CanFinish(this, &SGSMNewMVVMModelClassDialog::CanFinish)
			.FinishButtonText(LOCTEXT("FinishButtonText_Native", "Create Class"))
			.FinishButtonToolTip (LOCTEXT("FinishButtonToolTip_Native", "Creates the code files to add your new class."))
			.OnCanceled(this, &SGSMNewMVVMModelClassDialog::CancelClicked)
			.OnFinished(this, &SGSMNewMVVMModelClassDialog::FinishClicked)
			.InitialPageIndex(0)

			// Choose parent class
			+SWizard::Page()
			.OnEnter(this, &SGSMNewMVVMModelClassDialog::OnClassCreationPageEntered)
			[

				SNew(SVerticalBox)

				// Title
				+SVerticalBox::Slot()
				.AutoHeight()
				.Padding(0, 0, 0, 4) // Reduced bottom padding
				[
					SNew(STextBlock)
					.TextStyle(FGSMEditorStyle::Get(), "NewClassDialog.PageTitle")
					.Text(LOCTEXT("NameMVVMModelBaseClassTitle", "Name Your New MVVM Model Base"))
				]

				// Title spacer
				+SVerticalBox::Slot()
				.AutoHeight()
				.Padding(0, 2, 0, 8)
				[
					SNew(SSeparator)
					.Thickness(2.0f)
				]

				+SVerticalBox::Slot()
				.AutoHeight()
				.Padding(0, 10)
				[
					SNew(SVerticalBox)

					+SVerticalBox::Slot()
					.AutoHeight()
					.Padding(0, 0, 0, 5)
					[
						SNew(STextBlock)
						.Text(LOCTEXT("ClassNameDescription", "Enter a name for your new class. Class names may only contain alphanumeric characters, and may not contain a space."))
					]

					+SVerticalBox::Slot()
					.AutoHeight()
					.Padding(0, 0, 0, 2)
					[
						SNew(STextBlock)
						.Text(LOCTEXT("ClassNameDetails_Native", "When you click the \"Create\" button below, a header (.h) file and a source (.cpp) file will be made using this name."))
					]
				]

				// Name Error label
		+SVerticalBox::Slot()
		.AutoHeight()
		.Padding(0, 5)
		[
			SNew(SHorizontalBox)
			.Visibility(this, &SGSMNewMVVMModelClassDialog::GetNameErrorLabelVisibility)
			+SHorizontalBox::Slot()
			.AutoWidth()
			.Padding(0, 0, 4, 0)
			[
				SNew(SImage)
				.Image(FAppStyle::GetBrush("Icons.Error"))
				.ColorAndOpacity(FLinearColor(0.9f, 0.2f, 0.2f))
			]
			+SHorizontalBox::Slot()
			[
				SNew(STextBlock)
				.Text(this, &SGSMNewMVVMModelClassDialog::GetNameErrorLabelText)
				.TextStyle(FAppStyle::Get(), "NormalText.Important")
				.ColorAndOpacity(FLinearColor::Red)
			]
		]

				// Properties
				+SVerticalBox::Slot()
				.AutoHeight()
				[
					SNew(SBorder)
#if ENGINE_MAJOR_VERSION == 5 && ENGINE_MINOR_VERSION >= 1
					.BorderImage(FAppStyle::GetBrush("DetailsView.CategoryTop"))
#else
					.BorderImage(FEditorStyle::GetBrush("DetailsView.CategoryTop"))
#endif
					.BorderBackgroundColor(FLinearColor(0.6f, 0.6f, 0.6f, 1.0f))
					.Padding(FMargin(6.0f, 4.0f, 7.0f, 4.0f))
					[
						SNew(SVerticalBox)

						+SVerticalBox::Slot()
						.AutoHeight()
						.Padding(0)
						[

							SNew(SGridPanel)
							.FillColumn(1, 1.0f)

							// Name label
							+SGridPanel::Slot(0, 0)
							.VAlign(VAlign_Center)
							.Padding(0, 0, 12, 0)
							[
								SNew(STextBlock)
								.TextStyle(FGSMEditorStyle::Get(), "NewClassDialog.SelectedParentClassLabel")
								.Text(LOCTEXT("NameLabel", "Name"))
							]

							// Name edit box
							+SGridPanel::Slot(1, 0)
							.Padding(0.0f, 3.0f)
							.VAlign(VAlign_Center)
							[
								SNew(SBox)
								.HeightOverride(EditableTextHeight)
								[
									SNew(SHorizontalBox)

									+SHorizontalBox::Slot()
									.FillWidth(1.0f)
									[
										SAssignNew(ClassNameEditBox, SEditableTextBox)
										.Text(this, &SGSMNewMVVMModelClassDialog::OnGetClassNameText)
										.OnTextChanged(this, &SGSMNewMVVMModelClassDialog::OnClassNameTextChanged)
										.HintText(LOCTEXT("ClassNameHint", "Enter Class Name"))
									]

									+SHorizontalBox::Slot()
									.AutoWidth()
									.Padding(6.0f, 0.0f, 0.0f, 0.0f)
									[
										SAssignNew(AvailableModulesCombo, SComboBox<TSharedPtr<FModuleContextInfo>>)
										// .Visibility(ClassDomain == EClassDomain::Blueprint ? EVisibility::Collapsed : EVisibility::Visible)
										.ToolTipText(LOCTEXT("ModuleComboToolTip", "Choose the target module for your new class"))
										.OptionsSource(&AvailableModules)
										.InitiallySelectedItem(SelectedModuleInfo)
										.OnSelectionChanged(this, &SGSMNewMVVMModelClassDialog::SelectedModuleComboBoxSelectionChanged)
										.OnGenerateWidget(this, &SGSMNewMVVMModelClassDialog::MakeWidgetForSelectedModuleCombo)
										[
											SNew(STextBlock)
											.Text(this, &SGSMNewMVVMModelClassDialog::GetSelectedModuleComboText)
										]
									]

									// Native C++ properties
									+SHorizontalBox::Slot()
									.AutoWidth()
									.Padding(6.0f, 0.0f, 0.0f, 0.0f)
									[
										SNew(SHorizontalBox)
										+SHorizontalBox::Slot()
										.AutoWidth()
										[
											SNew(SCheckBox)
											.Style(FAppStyle::Get(), "Property.ToggleButton.Start")
											.IsChecked(this, &SGSMNewMVVMModelClassDialog::IsClassLocationActive, GameProjectUtils::EClassLocation::Public)
											.OnCheckStateChanged(this, &SGSMNewMVVMModelClassDialog::OnClassLocationChanged, GameProjectUtils::EClassLocation::Public)
											.ToolTipText(LOCTEXT("ClassLocation_Public", "A public class can be included and used inside other modules in addition to the module it resides in"))
											[
												SNew(SBox)
												.VAlign(VAlign_Center)
												.HAlign(HAlign_Left)
												.Padding(FMargin(4.0f, 0.0f, 3.0f, 0.0f))
												[
													SNew(STextBlock)
													.Text(LOCTEXT("Public", "Public"))
													.ColorAndOpacity(this, &SGSMNewMVVMModelClassDialog::GetClassLocationTextColor, GameProjectUtils::EClassLocation::Public)
												]
											]
										]

										+SHorizontalBox::Slot()
										.AutoWidth()
										[
											SNew(SCheckBox)
											.Style(FAppStyle::Get(), "Property.ToggleButton.End")
											.IsChecked(this, &SGSMNewMVVMModelClassDialog::IsClassLocationActive, GameProjectUtils::EClassLocation::Private)
											.OnCheckStateChanged(this, &SGSMNewMVVMModelClassDialog::OnClassLocationChanged, GameProjectUtils::EClassLocation::Private)
											.ToolTipText(LOCTEXT("ClassLocation_Private", "A private class can only be included and used within the module it resides in"))
											[
												SNew(SBox)
												.VAlign(VAlign_Center)
												.HAlign(HAlign_Right)
												.Padding(FMargin(3.0f, 0.0f, 4.0f, 0.0f))
												[
													SNew(STextBlock)
													.Text(LOCTEXT("Private", "Private"))
													.ColorAndOpacity(this, &SGSMNewMVVMModelClassDialog::GetClassLocationTextColor, GameProjectUtils::EClassLocation::Private)
												]
											]
										]
									]
								]
							]

							// Path label
							+SGridPanel::Slot(0, 1)
							.VAlign(VAlign_Center)
							.Padding(0, 0, 12, 0)
							[
								SNew(STextBlock)
								.TextStyle(FGSMEditorStyle::Get(), "NewClassDialog.SelectedParentClassLabel")
								.Text(LOCTEXT("PathLabel", "Path"))
							]

							// Path edit box
							+SGridPanel::Slot(1, 1)
							.Padding(0.0f, 3.0f)
							.VAlign(VAlign_Center)
							[
								SNew(SVerticalBox)

								// Native C++ path
								+ SVerticalBox::Slot()
								.Padding(0)
								.AutoHeight()
								[
									SNew(SBox)
									.HeightOverride(EditableTextHeight)
									[
										SNew(SHorizontalBox)

										+SHorizontalBox::Slot()
										.FillWidth(1.0f)
										[
											SNew(SEditableTextBox)
											.Text(this, &SGSMNewMVVMModelClassDialog::OnGetClassPathText)
											.OnTextChanged(this, &SGSMNewMVVMModelClassDialog::OnClassPathTextChanged)
										]
									]
								]
							]
						]
					]
				]
				
				// Header output
				+ SVerticalBox::Slot()
				.VAlign(VAlign_Center)
				.AutoHeight()
				.Padding(12.0f, 16.0f, 12.0f, 0.0f)
				[
					SNew(SHorizontalBox)
					.ToolTipText(this, &SGSMNewMVVMModelClassDialog::OnGetClassHeaderFileText)

					// Header output label
					+ SHorizontalBox::Slot()
					.VAlign(VAlign_Center)
					.Padding(0.0f, 0.0f, 12.f, 0.f)
					.AutoWidth()
					[
						SNew(STextBlock)
						.TextStyle(FAppStyle::Get(), "NormalText.Important")
						.Text(LOCTEXT("HeaderFileLabel", "Header File"))
					]

					// Header output text
					+ SHorizontalBox::Slot()
					.VAlign(VAlign_Center)
					.HAlign(HAlign_Fill)
					[
						SNew(SBorder)
						.Padding(4.0f)
						.BorderImage(FAppStyle::GetBrush("ToolPanel.GroupBorder"))
						[
							SNew(SHorizontalBox)

							+ SHorizontalBox::Slot()
							.VAlign(VAlign_Center)
							.Padding(4, 0)
							[
								SNew(STextBlock)
								.Text(this, &SGSMNewMVVMModelClassDialog::OnGetClassHeaderFileText)
								.Font(FAppStyle::GetFontStyle("SmallFont"))
								.ColorAndOpacity(FSlateColor::UseSubduedForeground())
								.OverflowPolicy(ETextOverflowPolicy::Ellipsis)
							]

							+ SHorizontalBox::Slot()
							.AutoWidth()
							.Padding(4, 0)
							[
								//@TODO: Add a proper icon for copying file path
								SNew(SButton)
								.ButtonStyle(FAppStyle::Get(), "SimpleButton")
								.ToolTipText(LOCTEXT("CopyHeaderPathTooltip", "Copy header file path to clipboard"))
								.OnClicked_Lambda([this]() {
									FPlatformApplicationMisc::ClipboardCopy(*CalculatedClassHeaderName);
									return FReply::Handled();})
								[
									SNew(SImage)
									.Image(FAppStyle::GetBrush("Icons.Copy"))
									.ColorAndOpacity(FSlateColor::UseForeground())
								]
							]
						]
					]
				]

// Source output
+ SVerticalBox::Slot()
.AutoHeight()
.Padding(12.0f, 8.0f, 12.0f, 0.0f) // Consistent horizontal padding
[
    SNew(SHorizontalBox)
    .ToolTipText(this, &SGSMNewMVVMModelClassDialog::OnGetClassSourceFileText)

    // Source output label
    + SHorizontalBox::Slot()
    .VAlign(VAlign_Center)
    .Padding(0.0f, 0.0f, 12.f, 0.f)
    .AutoWidth()
    [
        SNew(STextBlock)
        .TextStyle(FAppStyle::Get(), "NormalText.Important")
        .Text(LOCTEXT("SourceFileLabel", "Source File"))
    ]

    // Source output text
    + SHorizontalBox::Slot()
    .VAlign(VAlign_Center)
    .HAlign(HAlign_Fill)
    [
        SNew(SBorder)
        .Padding(4.0f)
        .BorderImage(FAppStyle::GetBrush("ToolPanel.GroupBorder"))
        [
            SNew(SHorizontalBox)

            + SHorizontalBox::Slot()
            .VAlign(VAlign_Center)
            .Padding(4, 0)
            [
                SNew(STextBlock)
                .Text(this, &SGSMNewMVVMModelClassDialog::OnGetClassSourceFileText)
                .Font(FAppStyle::GetFontStyle("SmallFont"))
                .ColorAndOpacity(FSlateColor::UseSubduedForeground())
                .OverflowPolicy(ETextOverflowPolicy::Ellipsis)
            ]

            + SHorizontalBox::Slot()
            .AutoWidth()
            .Padding(4, 0)
            [
            	//@TODO: Add a proper icon for copying file path
                SNew(SButton)
                .ToolTipText(LOCTEXT("CopySourcePathTooltip", "Copy source file path to clipboard"))
                .ButtonStyle(FAppStyle::Get(), "SimpleButton")
                .ToolTipText(LOCTEXT("CopySourcePathTooltip", "Copy source file path to clipboard"))
                .OnClicked_Lambda([this]() {
                    FPlatformApplicationMisc::ClipboardCopy(*CalculatedClassSourceName);
                    return FReply::Handled();
                })
                [
                    SNew(SImage)
                    .Image(FAppStyle::GetBrush("Icons.Copy"))
                    .ColorAndOpacity(FSlateColor::UseForeground())
                ]
            ]
        ]
    ]
]
				// Title
				+SVerticalBox::Slot()
				.AutoHeight()
				.Padding(0, 16.f, 0, 0)
				[
					SNew(STextBlock)
					.TextStyle(FGSMEditorStyle::Get(), "GASMagicianGameProjectGeneration.h2")
					.Text(LOCTEXT("MVVMModelAttributesTitle", "MVVM Model"))
				]

				// Title spacer
				+SVerticalBox::Slot()
				.AutoHeight()
				.Padding(0, 2, 0, 8)
				[
					SNew(SSeparator)
				]

				+SVerticalBox::Slot()
				.AutoHeight()
				.Padding(0, 10)
				[
					SNew(SVerticalBox)

					+SVerticalBox::Slot()
					.AutoHeight()
					.Padding(0, 0, 0, 5)
					[
						SNew(STextBlock)
						.Text(LOCTEXT("MVVMAttributesDescription_01", "Define any number of MVVM Attributes here. Attributes names may only contain alphanumeric characters, and may not contain a space."))
					]

					+SVerticalBox::Slot()
					.AutoHeight()
					.Padding(0, 0, 0, 2)
					[
						SNew(STextBlock)
						.Text(LOCTEXT("MVVMAttributesDescription_02", "At least one MVVM Attribute must be defined and it may not contain any duplicate names."))
					]
				]


				+ SVerticalBox::Slot()
				.VAlign(VAlign_Fill)
				.FillHeight(1.f)
				.Padding(0.f)
				[
					DetailView
				]
			]
		]
	];
}

void SGSMNewMVVMModelClassDialog::Tick(const FGeometry& AllottedGeometry, const double InCurrentTime, const float InDeltaTime)
{
	// Every few seconds, the class name/path is checked for validity in case the disk contents changed and the location is now valid or invalid.
	// After class creation, periodic checks are disabled to prevent a brief message indicating that the class you created already exists.
	// This feature is re-enabled if the user did not restart and began editing parameters again.
	if (!bPreventPeriodicValidityChecksUntilNextChange && (InCurrentTime > LastPeriodicValidityCheckTime + PeriodicValidityCheckFrequency))
	{
		UpdateInputValidity();
	}
}

FText SGSMNewMVVMModelClassDialog::GetNameErrorLabelText() const
{
	if (!bLastInputValidityCheckSuccessful)
	{
		return LastInputValidityErrorText;
	}

	return FText::GetEmpty();
}

EVisibility SGSMNewMVVMModelClassDialog::GetNameErrorLabelVisibility() const
{
	return GetNameErrorLabelText().IsEmpty() ? EVisibility::Hidden : EVisibility::Visible;
}

FText SGSMNewMVVMModelClassDialog::OnGetClassHeaderFileText() const
{
	return FText::FromString(CalculatedClassHeaderName);
}

FText SGSMNewMVVMModelClassDialog::OnGetClassSourceFileText() const
{
	return FText::FromString(CalculatedClassSourceName);
}

void SGSMNewMVVMModelClassDialog::UpdateInputValidity()
{
	bLastInputValidityCheckSuccessful = true;

	// Validate the path first since this has the side effect of updating the UI
	bLastInputValidityCheckSuccessful = GameProjectUtils::CalculateSourcePaths(NewClassPath, *SelectedModuleInfo, CalculatedClassHeaderName, CalculatedClassSourceName, &LastInputValidityErrorText);
	CalculatedClassHeaderName /= NewClassName + TEXT(".h");
	CalculatedClassSourceName /= NewClassName + TEXT(".cpp");

	// If the source paths check as succeeded, check to see if we're using a Public/Private class
	if(bLastInputValidityCheckSuccessful)
	{
		GameProjectUtils::GetClassLocation(NewClassPath, *SelectedModuleInfo, ClassLocation);

		// We only care about the Public and Private folders
		if(ClassLocation != GameProjectUtils::EClassLocation::Public && ClassLocation != GameProjectUtils::EClassLocation::Private)
		{
			ClassLocation = GameProjectUtils::EClassLocation::UserDefined;
		}
	}
	else
	{
		ClassLocation = GameProjectUtils::EClassLocation::UserDefined;
	}

	// Validate the class name only if the path is valid
	if (bLastInputValidityCheckSuccessful)
	{
		const TSet<FString>& DisallowedHeaderNames = FSourceCodeNavigation::GetSourceFileDatabase().GetDisallowedHeaderNames();
		bLastInputValidityCheckSuccessful = GameProjectUtils::IsValidClassNameForCreation(NewClassName, *SelectedModuleInfo, DisallowedHeaderNames, LastInputValidityErrorText);
	}

	// Validate that the class is valid for the currently selected module
	// As a project can have multiple modules, this lets us update the class validity as the user changes the target module
	if (bLastInputValidityCheckSuccessful && ParentClassInfo.BaseClass)
	{
		bLastInputValidityCheckSuccessful = GameProjectUtils::IsValidBaseClassForCreation(ParentClassInfo.BaseClass, *SelectedModuleInfo);
		if (!bLastInputValidityCheckSuccessful)
		{
			LastInputValidityErrorText = FText::Format(
				LOCTEXT("NewClassError_InvalidBaseClassForModule", "{0} cannot be used as a base class in the {1} module. Please make sure that {0} is API exported."),
				FText::FromString(ParentClassInfo.BaseClass->GetName()),
				FText::FromString(SelectedModuleInfo->ModuleName)
				);
		}
	}

	// Validate the Attributes
	if (bLastInputValidityCheckSuccessful)
	{
		const FGSCMVVMAttributesSettings& Settings = UGSMMVVMModelAttributesGenSettings::Get()->Settings;

		// Must have at least one attribute
		if (!Settings.HasAnyAttributes())
		{
			LastInputValidityErrorText = LOCTEXT("ValidationErrorAttributes", "Please, provide at least one MVVM Attribute definition");
			bLastInputValidityCheckSuccessful = false;
		}

		// look for duplicates
		TArray<FString> AttributeNames;
		for (FGSCMVVMAttributeDefinition Attribute : Settings.Attributes)
		{
			if (bLastInputValidityCheckSuccessful && !IsValidAttributeNameForCreation(Attribute.AttributeName, LastInputValidityErrorText))
			{
				bLastInputValidityCheckSuccessful = false;
			}

			if (bLastInputValidityCheckSuccessful && AttributeNames.Contains(Attribute.AttributeName))
			{
				FFormatNamedArguments Args;
				Args.Add(TEXT("NewMVVMAttributeName"), FText::FromString(Attribute.AttributeName));
				LastInputValidityErrorText = FText::Format(LOCTEXT("ValidationErrorAttributeNameDuplicates", "The name {NewMVVMAttributeName} is already used by another MVVM attribute."), Args);
				bLastInputValidityCheckSuccessful = false;
			}

			AttributeNames.Add(Attribute.AttributeName);
		}
	}


	LastPeriodicValidityCheckTime = FSlateApplication::Get().GetCurrentTime();

	// Since this function was invoked, periodic validity checks should be re-enabled if they were disabled.
	bPreventPeriodicValidityChecksUntilNextChange = false;
}

void SGSMNewMVVMModelClassDialog::CancelClicked()
{
	CloseContainingWindow();
}

bool SGSMNewMVVMModelClassDialog::CanFinish() const
{
	return bLastInputValidityCheckSuccessful && ParentClassInfo.IsSet() && FSourceCodeNavigation::IsCompilerAvailable();
}

void SGSMNewMVVMModelClassDialog::FinishClicked()
{
	// Track the selected module name so we can default to this next time
	LastSelectedModuleName = SelectedModuleInfo->ModuleName;

	FText OutFailReason;
	FString HeaderFilePath;
	FString CppFilePath;

	const GameProjectUtils::EAddCodeToProjectResult AddCodeResult = AddClassToProject(OutFailReason);
	if (AddCodeResult == GameProjectUtils::EAddCodeToProjectResult::Succeeded || AddCodeResult == GameProjectUtils::EAddCodeToProjectResult::FailedToHotReload)
	{
		CloseContainingWindow();
	}
}

void SGSMNewMVVMModelClassDialog::OnClassCreationPageEntered()
{
	SetNewClassNameDefaultValue();

	RegisterActiveTimer(0.f, FWidgetActiveTimerDelegate::CreateSP(this, &SGSMNewMVVMModelClassDialog::SetKeyboardFocus));
}

void SGSMNewMVVMModelClassDialog::SetNewClassNameDefaultValue()
{
	// Set the default class name based on the selected parent class, eg MyActor
	const FString ParentClassName = GetClassNameCPP(ParentClassInfo.ClassType, ParentClassInfo.BaseClass);
	const FString PotentialNewClassName = FString::Printf(TEXT("%s%s"),
		DefaultClassPrefix.IsEmpty() ? TEXT("My") : *DefaultClassPrefix,
		DefaultClassName.IsEmpty() ? (ParentClassName.IsEmpty() ? TEXT("Class") : *ParentClassName) : *DefaultClassName);

	// Only set the default if the user hasn't changed the class name from the previous default
	if(LastAutoGeneratedClassName.IsEmpty() || NewClassName == LastAutoGeneratedClassName)
	{
		NewClassName = PotentialNewClassName;
		LastAutoGeneratedClassName = PotentialNewClassName;
	}

	UpdateInputValidity();
}

bool SGSMNewMVVMModelClassDialog::IsValidAttributeNameForCreation(const FString& NewAttributeName, FText& OutFailReason) const
{
	if (NewAttributeName.IsEmpty())
	{
		OutFailReason = LOCTEXT("NoMVVMAttributeName", "You must specify an MVVM attribute name.");
		return false;
	}

	if (NewAttributeName.Contains(TEXT(" ")))
	{
		OutFailReason = LOCTEXT("MVVMAttributeNameContainsSpace", "Your attribute name may not contain a space.");
		return false;
	}

	if (!FChar::IsAlpha(NewAttributeName[0]))
	{
		OutFailReason = LOCTEXT("MVVMAttributeNameMustBeginWithACharacter", "Your attribute name must begin with an alphabetic character.");
		return false;
	}

	FString IllegalNameCharacters;
	if (!NameContainsOnlyLegalCharacters(NewAttributeName, IllegalNameCharacters))
	{
		FFormatNamedArguments Args;
		Args.Add(TEXT("IllegalNameCharacters"), FText::FromString(IllegalNameCharacters));
		OutFailReason = FText::Format(LOCTEXT("MVVMAttributeNameContainsIllegalCharacters", "The attribute name may not contain the following characters: '{IllegalNameCharacters}'"), Args);
		return false;
	}

	return true;
}

bool SGSMNewMVVMModelClassDialog::NameContainsOnlyLegalCharacters(const FString& TestName, FString& OutIllegalCharacters)
{
	bool bContainsIllegalCharacters = false;

	// Only allow alphanumeric characters
	for (int32 CharIdx = 0 ; CharIdx < TestName.Len() ; ++CharIdx)
	{
		const FString& Char = TestName.Mid(CharIdx, 1);
		if (!FChar::IsAlnum(Char[0]) && Char != TEXT("_"))
		{
			if (!OutIllegalCharacters.Contains(Char))
			{
				OutIllegalCharacters += Char;
			}

			bContainsIllegalCharacters = true;
		}
	}

	return !bContainsIllegalCharacters;
}

FText SGSMNewMVVMModelClassDialog::OnGetClassNameText() const
{
	return FText::FromString(NewClassName);
}

void SGSMNewMVVMModelClassDialog::OnClassNameTextChanged(const FText& NewText)
{
	NewClassName = NewText.ToString();
	UpdateInputValidity();
}

FText SGSMNewMVVMModelClassDialog::OnGetClassPathText() const
{
	return FText::FromString(NewClassPath);
}

void SGSMNewMVVMModelClassDialog::OnClassPathTextChanged(const FText& NewText)
{
	NewClassPath = NewText.ToString();

	// If the user has selected a path which matches the root of a known module, then update our selected module to be that module
	for(const auto& AvailableModule : AvailableModules)
	{
		if(NewClassPath.StartsWith(AvailableModule->ModuleSourcePath))
		{
			SelectedModuleInfo = AvailableModule;
			AvailableModulesCombo->SetSelectedItem(SelectedModuleInfo);
			break;
		}
	}

	UpdateInputValidity();
}

FText SGSMNewMVVMModelClassDialog::GetSelectedModuleComboText() const
{
	FFormatNamedArguments Args;
	Args.Add(TEXT("ModuleName"), FText::FromString(SelectedModuleInfo->ModuleName));
	Args.Add(TEXT("ModuleType"), FText::FromString(EHostType::ToString(SelectedModuleInfo->ModuleType)));
	return FText::Format(LOCTEXT("ModuleComboEntry", "{ModuleName} ({ModuleType})"), Args);
}

void SGSMNewMVVMModelClassDialog::SelectedModuleComboBoxSelectionChanged(TSharedPtr<FModuleContextInfo> Value, ESelectInfo::Type SelectInfo)
{
	const FString& OldModulePath = SelectedModuleInfo->ModuleSourcePath;
	const FString& NewModulePath = Value->ModuleSourcePath;

	SelectedModuleInfo = Value;

	// Update the class path to be rooted to the new module location
	const FString AbsoluteClassPath = FPaths::ConvertRelativePathToFull(NewClassPath) / ""; // Ensure trailing /
	if(AbsoluteClassPath.StartsWith(OldModulePath))
	{
		NewClassPath = AbsoluteClassPath.Replace(*OldModulePath, *NewModulePath);
	}

	UpdateInputValidity();
}

TSharedRef<SWidget> SGSMNewMVVMModelClassDialog::MakeWidgetForSelectedModuleCombo(TSharedPtr<FModuleContextInfo> Value)
{
	FFormatNamedArguments Args;
	Args.Add(TEXT("ModuleName"), FText::FromString(Value->ModuleName));
	Args.Add(TEXT("ModuleType"), FText::FromString(EHostType::ToString(Value->ModuleType)));
	return SNew(STextBlock)
		.Text(FText::Format(LOCTEXT("ModuleComboEntry", "{ModuleName} ({ModuleType})"), Args));
}

FSlateColor SGSMNewMVVMModelClassDialog::GetClassLocationTextColor(GameProjectUtils::EClassLocation InLocation) const
{
	return (ClassLocation == InLocation) ? FSlateColor(FLinearColor(0, 0, 0)) : FSlateColor(FLinearColor(0.72f, 0.72f, 0.72f, 1.f));
}

ECheckBoxState SGSMNewMVVMModelClassDialog::IsClassLocationActive(GameProjectUtils::EClassLocation InLocation) const
{
	return (ClassLocation == InLocation) ? ECheckBoxState::Checked : ECheckBoxState::Unchecked;
}

void SGSMNewMVVMModelClassDialog::OnClassLocationChanged(ECheckBoxState InCheckedState, GameProjectUtils::EClassLocation InLocation)
{
	if(InCheckedState == ECheckBoxState::Checked)
	{
		const FString AbsoluteClassPath = FPaths::ConvertRelativePathToFull(NewClassPath) / ""; // Ensure trailing /

		GameProjectUtils::EClassLocation TmpClassLocation = GameProjectUtils::EClassLocation::UserDefined;
		GameProjectUtils::GetClassLocation(AbsoluteClassPath, *SelectedModuleInfo, TmpClassLocation);

		const FString RootPath = SelectedModuleInfo->ModuleSourcePath;
		const FString PublicPath = RootPath / "Public" / "";		// Ensure trailing /
		const FString PrivatePath = RootPath / "Private" / "";		// Ensure trailing /

		// Update the class path to be rooted to the Public or Private folder based on InVisibility
		switch(InLocation)
		{
		case GameProjectUtils::EClassLocation::Public:
			if(AbsoluteClassPath.StartsWith(PrivatePath))
			{
				NewClassPath = AbsoluteClassPath.Replace(*PrivatePath, *PublicPath);
			}
			else if(AbsoluteClassPath.StartsWith(RootPath))
			{
				NewClassPath = AbsoluteClassPath.Replace(*RootPath, *PublicPath);
			}
			else
			{
				NewClassPath = PublicPath;
			}
			break;

		case GameProjectUtils::EClassLocation::Private:
			if(AbsoluteClassPath.StartsWith(PublicPath))
			{
				NewClassPath = AbsoluteClassPath.Replace(*PublicPath, *PrivatePath);
			}
			else if(AbsoluteClassPath.StartsWith(RootPath))
			{
				NewClassPath = AbsoluteClassPath.Replace(*RootPath, *PrivatePath);
			}
			else
			{
				NewClassPath = PrivatePath;
			}
			break;

		default:
			break;
		}

		// Will update ClassVisibility correctly
		UpdateInputValidity();
	}
}

FString SGSMNewMVVMModelClassDialog::GetClassNameCPP(const FNewClassInfo::EClassType ClassType, const UClass* BaseClass)
{
	switch(ClassType)
	{
		case FNewClassInfo::EClassType::UObject:
			return BaseClass ? BaseClass->GetName() : TEXT("");

		default:
			break;
	}

	return TEXT("");
}

void SGSMNewMVVMModelClassDialog::CloseContainingWindow()
{
	TSharedPtr<SWindow> ContainingWindow = FSlateApplication::Get().FindWidgetWindow(AsShared());

	if (ContainingWindow.IsValid())
	{
		ContainingWindow->RequestDestroyWindow();
	}
}

GameProjectUtils::EAddCodeToProjectResult SGSMNewMVVMModelClassDialog::AddClassToProject(FText& OutFailReason)
{

	FString HeaderFilePath;
	FString CppFilePath;
	FText TemplateFailReason;

	if (!FGSMGameProjectUtils::PrepareTemplate(ParentClassInfo, TemplateFailReason))
	{

		// Failed to add code
		const FText Message = FText::Format(LOCTEXT("AddCodeFailed_PrepareTemplate", "Failed to add class '{0}'. {1}"), FText::FromString(NewClassName), TemplateFailReason);
		FMessageDialog::Open(EAppMsgType::Ok, Message);

		return GameProjectUtils::EAddCodeToProjectResult::FailedToAddCode;
	}

	const TSet<FString>& DisallowedHeaderNames = FSourceCodeNavigation::GetSourceFileDatabase().GetDisallowedHeaderNames();
	const GameProjectUtils::EAddCodeToProjectResult AddCodeResult = FGSMGameProjectUtils::AddCodeToProject(NewClassName, NewClassPath, *SelectedModuleInfo, ParentClassInfo, DisallowedHeaderNames, HeaderFilePath, CppFilePath, OutFailReason);

	if (!FGSMGameProjectUtils::ResetTemplate(TemplateFailReason))
	{
		// Failed to reset template, notify users (and figure out what to do next)
		const FNotificationInfo Notification(
			FText::Format(
				LOCTEXT("AddCodeFailed_ResetTemplate", "Failed to reset class template. This might lead to issue with MVVM Attribute generation.\n\n{0}\n\nIt is highly recommended to manually restore template files to their original content"),
				TemplateFailReason
			)
		);
		FSlateNotificationManager::Get().AddNotification(Notification);
	}

	if (AddCodeResult == GameProjectUtils::EAddCodeToProjectResult::Succeeded)
	{
		OnAddedToProject.ExecuteIfBound(NewClassName, NewClassPath, SelectedModuleInfo->ModuleName);

		// Reload current project to take into account any new state
		IProjectManager::Get().LoadProjectFile(FPaths::GetProjectFilePath());

		// Prevent periodic validity checks. This is to prevent a brief error message about the class already existing while you are exiting.
		bPreventPeriodicValidityChecksUntilNextChange = true;

		// Display a nag if we didn't automatically hot-reload for the newly added class
		const bool bWasHotReloaded = GetDefault<UEditorPerProjectUserSettings>()->bAutomaticallyHotReloadNewClasses;
		if(bWasHotReloaded)
		{
			const FNotificationInfo Notification(FText::Format(LOCTEXT("AddedClassSuccessNotification", "Added new class {0}"), FText::FromString(NewClassName)));
			FSlateNotificationManager::Get().AddNotification(Notification);
		}

		if (HeaderFilePath.IsEmpty() || CppFilePath.IsEmpty() || !FSlateApplication::Get().SupportsSourceAccess())
		{
			if(!bWasHotReloaded)
			{
				// Code successfully added, notify the user. We are either running on a platform that does not support source access
				// or a file was not given so don't ask about editing the file
				const FText Message = FText::Format(
					LOCTEXT("AddCodeSuccessWithHotReload", "Successfully added class '{0}', however you must recompile the '{1}' module before it will appear in the Content Browser."),
					FText::FromString(NewClassName),
					FText::FromString(SelectedModuleInfo->ModuleName)
				);
				FMessageDialog::Open(EAppMsgType::Ok, Message);
			}
			else
			{
				// Code was added and hot reloaded into the editor, but the user doesn't have a code IDE installed so we can't open the file to edit it now
			}
		}
		else
		{
			bool bEditSourceFilesNow = false;
			if(bWasHotReloaded)
			{
				// Code was hot reloaded, so always edit the new classes now
				bEditSourceFilesNow = true;
			}
			else
			{
				// Code successfully added, notify the user and ask about opening the IDE now
				const FText Message = FText::Format(
					LOCTEXT("AddCodeSuccessWithHotReloadAndSync", "Successfully added class '{0}', however you must recompile the '{1}' module before it will appear in the Content Browser.\n\nWould you like to edit the code now?"),
					FText::FromString(NewClassName),
					FText::FromString(SelectedModuleInfo->ModuleName)
				);
				bEditSourceFilesNow = (FMessageDialog::Open(EAppMsgType::YesNo, Message) == EAppReturnType::Yes);
			}

			if(bEditSourceFilesNow)
			{
				TArray<FString> SourceFiles;
				SourceFiles.Add(IFileManager::Get().ConvertToAbsolutePathForExternalAppForRead(*HeaderFilePath));
				SourceFiles.Add(IFileManager::Get().ConvertToAbsolutePathForExternalAppForRead(*CppFilePath));

				FSourceCodeNavigation::OpenSourceFiles(SourceFiles);
			}
		}

		// Sync the content browser to the new class
		UPackage* const ClassPackage = FindPackage(nullptr, *(FString("/Script/") + SelectedModuleInfo->ModuleName));
		if (ClassPackage)
		{
			UClass* const NewClass = static_cast<UClass*>(FindObjectWithOuter(ClassPackage, UClass::StaticClass(), *NewClassName));
			if (NewClass)
			{
				TArray<UObject*> SyncAssets;
				SyncAssets.Add(NewClass);
				const FContentBrowserModule& ContentBrowserModule = FModuleManager::LoadModuleChecked<FContentBrowserModule>("ContentBrowser");
				ContentBrowserModule.Get().SyncBrowserToAssets(SyncAssets);
			}
		}
	}
	else if (AddCodeResult == GameProjectUtils::EAddCodeToProjectResult::FailedToHotReload)
	{
		OnAddedToProject.ExecuteIfBound(NewClassName, NewClassPath, SelectedModuleInfo->ModuleName);

		// Prevent periodic validity checks. This is to prevent a brief error message about the class already existing while you are exiting.
		bPreventPeriodicValidityChecksUntilNextChange = true;

		// Failed to compile new code
		const FText Message = FText::Format(
			LOCTEXT("AddCodeFailed_HotReloadFailed", "Successfully added class '{0}', however you must recompile the '{1}' module before it will appear in the Content Browser. {2}\n\nWould you like to open the Output Log to see more details?"),
			FText::FromString(NewClassName),
			FText::FromString(SelectedModuleInfo->ModuleName),
			OutFailReason
		);

		if(FMessageDialog::Open(EAppMsgType::YesNo, Message) == EAppReturnType::Yes)
		{
			FGlobalTabmanager::Get()->TryInvokeTab(FName("OutputLog"));
		}
	}
	else
	{
		const FText Message = FText::Format(LOCTEXT("AddCodeFailed_AddCodeFailed", "Failed to add class '{0}'. {1}"), FText::FromString(NewClassName), OutFailReason);
		FMessageDialog::Open(EAppMsgType::Ok, Message);
	}

	return AddCodeResult;
}

EActiveTimerReturnType SGSMNewMVVMModelClassDialog::SetKeyboardFocus(double InCurrentTime, float InDeltaTime)
{
	// Steal keyboard focus to accelerate name entering
	FSlateApplication::Get().SetKeyboardFocus(ClassNameEditBox, EFocusCause::SetDirectly);

	return EActiveTimerReturnType::Stop;
}

END_SLATE_FUNCTION_BUILD_OPTIMIZATION

#undef LOCTEXT_NAMESPACE
