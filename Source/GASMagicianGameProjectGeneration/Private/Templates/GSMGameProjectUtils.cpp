#include "Templates/GSMGameProjectUtils.h"
#include "ClassTemplateEditorSubsystem.h"
#include "DesktopPlatformModule.h"
#include "Editor.h"
#include "GeneralProjectSettings.h"
#include "GSMMVVMModelGenSettings.h"
#include "ISourceControlModule.h"
#include "ISourceControlProvider.h"
#include "ProjectDescriptor.h"
#include "SourceCodeNavigation.h"
#include "SourceControlOperations.h"
#include "Async/ParallelFor.h"
#include "Editor/EditorPerProjectUserSettings.h"
#include "GameFramework/Character.h"
#include "HAL/PlatformFileManager.h"
#include "Interfaces/IProjectManager.h"
#include "Misc/EngineVersionComparison.h"
#include "Misc/FeedbackContext.h"
#include "Misc/FileHelper.h"
#include "Misc/HotReloadInterface.h"
#include "Misc/MessageDialog.h"
#include "Misc/ScopedSlowTask.h"
#include "Templates/GSMMVVMModelBaseClassTemplate.h"
#include "Widgets/Notifications/SNotificationList.h"

#define LOCTEXT_NAMESPACE "TemplateProjectUtils"

constexpr const TCHAR FGSMGameProjectUtils::IncludePathFormatString[];
TWeakPtr<SNotificationItem> FGSMGameProjectUtils::UpdateGameProjectNotification = NULL;

GameProjectUtils::EAddCodeToProjectResult FGSMGameProjectUtils::AddCodeToProject(const FString& NewClassName, const FString& NewClassPath, const FModuleContextInfo& ModuleInfo, const FNewClassInfo ParentClassInfo, const TSet<FString>& DisallowedHeaderNames, FString& OutHeaderFilePath, FString& OutCppFilePath, FText& OutFailReason)
{
	if (!ParentClassInfo.IsSet())
	{
		OutFailReason = LOCTEXT("MissingParentClass", "You must specify a parent class");
		return GameProjectUtils::EAddCodeToProjectResult::InvalidInput;
	}

	const FString CleanClassName = GetCleanClassName(ParentClassInfo, NewClassName);
	const FString FinalClassName = GetFinalClassName(ParentClassInfo, NewClassName);

	if (!GameProjectUtils::IsValidClassNameForCreation(FinalClassName, ModuleInfo, DisallowedHeaderNames, OutFailReason))
	{
		return GameProjectUtils::EAddCodeToProjectResult::InvalidInput;
	}

	if (!FApp::HasProjectName())
	{
		OutFailReason = LOCTEXT("AddCodeToProject_NoGameName", "You can not add code because you have not loaded a project.");
		return GameProjectUtils::EAddCodeToProjectResult::FailedToAddCode;
	}

	FString NewHeaderPath;
	FString NewCppPath;
	if (!GameProjectUtils::CalculateSourcePaths(NewClassPath, ModuleInfo, NewHeaderPath, NewCppPath, &OutFailReason))
	{
		return GameProjectUtils::EAddCodeToProjectResult::FailedToAddCode;
	}

	FScopedSlowTask SlowTask(7, LOCTEXT("AddingCodeToProject", "Adding code to project..."));
	SlowTask.MakeDialog();

	SlowTask.EnterProgressFrame();

	auto RequiredDependencies = GetRequiredAdditionalDependencies(ParentClassInfo);
	RequiredDependencies.Remove(ModuleInfo.ModuleName);

	// Update project file if needed.
	auto bUpdateProjectModules = false;

	// If the project does not already contain code, add the primary game module
	TArray<FString> CreatedFiles;
	TArray<FString> StartupModuleNames;

	const bool bProjectHadCodeFiles = GameProjectUtils::ProjectHasCodeFiles();
	if (!bProjectHadCodeFiles)
	{
		// Delete any generated intermediate code files. This ensures that blueprint projects with custom build settings can be converted to code projects without causing errors.
		IFileManager::Get().DeleteDirectory(*(FPaths::ProjectIntermediateDir() / TEXT("Source")), false, true);

		// We always add the basic source code to the root directory, not the potential sub-directory provided by NewClassPath
		const FString SourceDir = FPaths::GameSourceDir().LeftChop(1); // Trim the trailing /

		// Assuming the game name is the same as the primary game module name
		const FString GameModuleName = FApp::GetProjectName();

		if (GenerateBasicSourceCode(SourceDir, GameModuleName, FPaths::ProjectDir(), StartupModuleNames, CreatedFiles, OutFailReason))
		{
			bUpdateProjectModules = true;
		}
		else
		{
			GameProjectUtils::DeleteCreatedFiles(SourceDir, CreatedFiles);
			return GameProjectUtils::EAddCodeToProjectResult::FailedToAddCode;
		}
	}

	if (RequiredDependencies.Num() > 0 || bUpdateProjectModules)
	{
		UpdateProject(
			FProjectDescriptorModifier::CreateLambda(
				[&StartupModuleNames, &RequiredDependencies, &ModuleInfo, bUpdateProjectModules](FProjectDescriptor& Descriptor)
				{
					bool bNeedsUpdate = false;

					bNeedsUpdate |= UpdateStartupModuleNames(Descriptor, bUpdateProjectModules ? &StartupModuleNames : nullptr);
					bNeedsUpdate |= UpdateRequiredAdditionalDependencies(Descriptor, RequiredDependencies, ModuleInfo.ModuleName);

					return bNeedsUpdate;
				}));
	}

	SlowTask.EnterProgressFrame();

	// Class Header File
	const FString NewHeaderFilename = NewHeaderPath / GetHeaderFilename(ParentClassInfo, NewClassName);
	{
		FString UnusedSyncLocation;
		TArray<FString> ClassSpecifiers;

		// Set UCLASS() specifiers based on parent class type. Currently, only UInterface uses this.
		if (ParentClassInfo.ClassType == FNewClassInfo::EClassType::UInterface)
		{
			ClassSpecifiers.Add(TEXT("MinimalAPI"));
		}

		if (GenerateClassHeaderFile(NewHeaderFilename, CleanClassName, ParentClassInfo, ClassSpecifiers, TEXT(""), TEXT(""), UnusedSyncLocation, ModuleInfo, false, OutFailReason))
		{
			CreatedFiles.Add(NewHeaderFilename);
		}
		else
		{
			GameProjectUtils::DeleteCreatedFiles(NewHeaderPath, CreatedFiles);
			return GameProjectUtils::EAddCodeToProjectResult::FailedToAddCode;
		}
	}

	SlowTask.EnterProgressFrame();

	// Class CPP file
	const FString NewCppFilename = NewCppPath / GetSourceFilename(ParentClassInfo, NewClassName);
	{
		FString UnusedSyncLocation;
		if (GenerateClassCPPFile(NewCppFilename, CleanClassName, ParentClassInfo, TArray<FString>(), TArray<FString>(), TEXT(""), UnusedSyncLocation, ModuleInfo, OutFailReason))
		{
			CreatedFiles.Add(NewCppFilename);
		}
		else
		{
			GameProjectUtils::DeleteCreatedFiles(NewCppPath, CreatedFiles);
			return GameProjectUtils::EAddCodeToProjectResult::FailedToAddCode;
		}
	}

	SlowTask.EnterProgressFrame();

	TArray<FString> CreatedFilesForExternalAppRead;
	CreatedFilesForExternalAppRead.Reserve(CreatedFiles.Num());
	for (const FString& CreatedFile : CreatedFiles)
	{
		CreatedFilesForExternalAppRead.Add(IFileManager::Get().ConvertToAbsolutePathForExternalAppForRead(*CreatedFile));
	}

	bool bGenerateProjectFiles = true;

	// First see if we can avoid a full generation by adding the new files to an already open project
	if (bProjectHadCodeFiles && FSourceCodeNavigation::AddSourceFiles(CreatedFilesForExternalAppRead))
	{
		// We managed the gather, so we can skip running the full generate
		bGenerateProjectFiles = false;
	}

	if (bGenerateProjectFiles)
	{
		// Generate project files if we happen to be using a project file.
		if (!FDesktopPlatformModule::Get()->GenerateProjectFiles(FPaths::RootDir(), FPaths::GetProjectFilePath(), GWarn))
		{
			OutFailReason = LOCTEXT("FailedToGenerateProjectFiles", "Failed to generate project files.");
			return GameProjectUtils::EAddCodeToProjectResult::FailedToHotReload;
		}
	}

	SlowTask.EnterProgressFrame();

	// Mark the files for add in SCC
	ISourceControlProvider& SourceControlProvider = ISourceControlModule::Get().GetProvider();
	if (ISourceControlModule::Get().IsEnabled() && SourceControlProvider.IsAvailable())
	{
		SourceControlProvider.Execute(ISourceControlOperation::Create<FMarkForAdd>(), CreatedFilesForExternalAppRead);
	}

	SlowTask.EnterProgressFrame(1.0f, LOCTEXT("CompilingCPlusPlusCode", "Compiling new C++ code.  Please wait..."));

	OutHeaderFilePath = NewHeaderFilename;
	OutCppFilePath = NewCppFilename;

	if (!bProjectHadCodeFiles)
	{
		// This is the first time we add code to this project so compile its game DLL
		const FString GameModuleName = FApp::GetProjectName();
		check(ModuleInfo.ModuleName == GameModuleName);

		// Because this project previously didn't have any code, the UBT target name will just be UE4Editor. Now that we've
		// added some code, the target name will be changed to match the editor target for the new source.
		FString NewUBTTargetName = GameModuleName + TEXT("Editor");
		FPlatformMisc::SetUBTTargetName(*NewUBTTargetName);

		IHotReloadInterface& HotReloadSupport = FModuleManager::LoadModuleChecked<IHotReloadInterface>("HotReload");
		if (!HotReloadSupport.RecompileModule(*GameModuleName, *GWarn, ERecompileModuleFlags::ReloadAfterRecompile | ERecompileModuleFlags::ForceCodeProject))
		{
			OutFailReason = LOCTEXT("FailedToCompileNewGameModule", "Failed to compile newly created game module.");
			return GameProjectUtils::EAddCodeToProjectResult::FailedToHotReload;
		}

		// Notify that we've created a brand new module
		FSourceCodeNavigation::AccessOnNewModuleAdded().Broadcast(*GameModuleName);
	}
	else if (GetDefault<UEditorPerProjectUserSettings>()->bAutomaticallyHotReloadNewClasses)
	{
		FModuleStatus ModuleStatus;
		const FName ModuleFName = *ModuleInfo.ModuleName;
		if (ensure(FModuleManager::Get().QueryModule(ModuleFName, ModuleStatus)))
		{
			// Compile the module that the class was added to so that the newly added class with appear in the Content Browser
			TArray<UPackage*> PackagesToRebind;
			if (ModuleStatus.bIsLoaded)
			{
				const bool bIsHotReloadable = FModuleManager::Get().DoesLoadedModuleHaveUObjects(ModuleFName);
				if (bIsHotReloadable)
				{
					// Is there a UPackage with the same name as this module?
					const FString PotentialPackageName = FString(TEXT("/Script/")) + ModuleInfo.ModuleName;
					UPackage* Package = FindPackage(nullptr, *PotentialPackageName);
					if (Package)
					{
						PackagesToRebind.Add(Package);
					}
				}
			}

			IHotReloadInterface& HotReloadSupport = FModuleManager::LoadModuleChecked<IHotReloadInterface>("HotReload");
			if (PackagesToRebind.Num() > 0)
			{
				// Perform a hot reload
				ECompilationResult::Type CompilationResult = HotReloadSupport.RebindPackages(PackagesToRebind, EHotReloadFlags::WaitForCompletion, *GWarn);
				if (CompilationResult != ECompilationResult::Succeeded && CompilationResult != ECompilationResult::UpToDate)
				{
					OutFailReason = FText::Format(LOCTEXT("FailedToHotReloadModuleFmt", "Failed to automatically hot reload the '{0}' module."), FText::FromString(ModuleInfo.ModuleName));
					return GameProjectUtils::EAddCodeToProjectResult::FailedToHotReload;
				}
			}
			else
			{
				// Perform a regular unload, then reload
				if (!HotReloadSupport.RecompileModule(ModuleFName, *GWarn, ERecompileModuleFlags::ReloadAfterRecompile | ERecompileModuleFlags::FailIfGeneratedCodeChanges))
				{
					OutFailReason = FText::Format(LOCTEXT("FailedToCompileModuleFmt", "Failed to automatically compile the '{0}' module."), FText::FromString(ModuleInfo.ModuleName));
					return GameProjectUtils::EAddCodeToProjectResult::FailedToHotReload;
				}
			}
		}
	}

	return GameProjectUtils::EAddCodeToProjectResult::Succeeded;
}

bool FGSMGameProjectUtils::GenerateBasicSourceCode(const FString& NewProjectSourcePath, const FString& NewProjectName, const FString& NewProjectRoot, TArray<FString>& OutGeneratedStartupModuleNames, TArray<FString>& OutCreatedFiles, FText& OutFailReason)
{
	// We always add the basic source code to the root directory, not the potential sub-directory provided by NewClassPath
	const FString GameModulePath = NewProjectSourcePath / NewProjectName;
	const FString EditorName = NewProjectName + TEXT("Editor");

	{
		const FString NewBuildFilename = GameModulePath / NewProjectName + TEXT(".Build.cs");
		TArray<FString> PublicDependencyModuleNames;
		PublicDependencyModuleNames.Add(TEXT("Core"));
		PublicDependencyModuleNames.Add(TEXT("CoreUObject"));
		PublicDependencyModuleNames.Add(TEXT("Engine"));
		PublicDependencyModuleNames.Add(TEXT("InputCore"));

		TArray<FString> PrivateDependencyModuleNames;
		PrivateDependencyModuleNames.Add(TEXT("GASMagician"));
		PrivateDependencyModuleNames.Add(TEXT("GameplayAbilities"));
		PrivateDependencyModuleNames.Add(TEXT("GameplayTasks"));
		PrivateDependencyModuleNames.Add(TEXT("GameplayTags"));
		PrivateDependencyModuleNames.Add(TEXT("ModelViewViewModel"));
		
		if (GameProjectUtils::GenerateGameModuleBuildFile(NewBuildFilename, NewProjectName, PublicDependencyModuleNames, PrivateDependencyModuleNames, OutFailReason))
		{
			OutGeneratedStartupModuleNames.Add(NewProjectName);
			OutCreatedFiles.Add(NewBuildFilename);
		}
		else
		{
			return false;
		}
	}

	// MyGame.Target.cs
	{
		const FString NewTargetFilename = NewProjectSourcePath / NewProjectName + TEXT(".Target.cs");
		TArray<FString> ExtraModuleNames;
		ExtraModuleNames.Add(NewProjectName);
		if (GenerateGameModuleTargetFile(NewTargetFilename, NewProjectName, ExtraModuleNames, OutFailReason))
		{
			OutCreatedFiles.Add(NewTargetFilename);
		}
		else
		{
			return false;
		}
	}

	// MyGameEditor.Target.cs
	{
		const FString NewTargetFilename = NewProjectSourcePath / EditorName + TEXT(".Target.cs");
		// Include the MyGame module...
		TArray<FString> ExtraModuleNames;
		ExtraModuleNames.Add(NewProjectName);
		if (GenerateEditorModuleTargetFile(NewTargetFilename, EditorName, ExtraModuleNames, OutFailReason))
		{
			OutCreatedFiles.Add(NewTargetFilename);
		}
		else
		{
			return false;
		}
	}

	// MyGame.h
	{
		const FString NewHeaderFilename = GameModulePath / NewProjectName + TEXT(".h");
		TArray<FString> PublicHeaderIncludes;
		if (GenerateGameModuleHeaderFile(NewHeaderFilename, PublicHeaderIncludes, OutFailReason))
		{
			OutCreatedFiles.Add(NewHeaderFilename);
		}
		else
		{
			return false;
		}
	}

	// MyGame.cpp
	{
		const FString NewCPPFilename = GameModulePath / NewProjectName + TEXT(".cpp");
		if (GenerateGameModuleCPPFile(NewCPPFilename, NewProjectName, NewProjectName, OutFailReason))
		{
			OutCreatedFiles.Add(NewCPPFilename);
		}
		else
		{
			return false;
		}
	}

	return true;
}


bool FGSMGameProjectUtils::PrepareTemplate(const FNewClassInfo ParentClassInfo, FText& OutFailReason)
{
	if (UClassTemplateEditorSubsystem* TemplateSubsystem = GEditor->GetEditorSubsystem<UClassTemplateEditorSubsystem>())
	{
		if (const UClassTemplate* ClassTemplate = TemplateSubsystem->FindClassTemplate(ParentClassInfo.BaseClass))
		{
			FString SourceTemplate;
			FString HeaderTemplate;
			if (!ClassTemplate->ReadHeader(HeaderTemplate, OutFailReason))
			{
				return false;
			}

			if (!ClassTemplate->ReadSource(SourceTemplate, OutFailReason))
			{
				return false;
			}

			// Alter template here
		

			auto const& MVVMSettings = UGSMMVVMModelAttributesGenSettings::Get()->Settings;
			if (!UGSMMVVMModelBaseClassTemplate::PrepareHeaderTemplate(MVVMSettings.Properties, HeaderTemplate, OutFailReason))
			{
				return false;
			}

			if (!UGSMMVVMModelBaseClassTemplate::PrepareSourceTemplate(MVVMSettings.Properties, SourceTemplate, OutFailReason))
			{
				return false;
			}
		}
	}

	return true;
}

bool FGSMGameProjectUtils::ResetTemplate(FText& OutFailReason)
{
	// Reset template here
	if (!UGSMMVVMModelBaseClassTemplate::ResetTemplates(OutFailReason))
	{
		return false;
	}
	return true;
}

TArray<FString> FGSMGameProjectUtils::GetRequiredAdditionalDependencies(const FNewClassInfo& ClassInfo)
{
	TArray<FString> Out;

	switch (ClassInfo.ClassType)
	{
	case FNewClassInfo::EClassType::SlateWidget:
	case FNewClassInfo::EClassType::SlateWidgetStyle:
		Out.Reserve(2);
		Out.Add(TEXT("Slate"));
		Out.Add(TEXT("SlateCore"));
		break;

	case FNewClassInfo::EClassType::UObject:
		auto ClassPackageName = ClassInfo.BaseClass->GetOutermost()->GetFName().ToString();

		checkf(ClassPackageName.StartsWith(TEXT("/Script/")), TEXT("Class outermost should start with /Script/"));

		Out.Add(ClassPackageName.Mid(8)); // Skip the /Script/ prefix.
		break;
	}

	return Out;
}

/**
* Generates UObject class constructor definition with property overrides.
*
* @param Out String to assign generated constructor to.
* @param PrefixedClassName Prefixed class name for which we generate the constructor.
* @param PropertyOverridesStr String with property overrides in the constructor.
* @param OutFailReason Template read function failure reason.
*
* @returns True on success. False otherwise.
*/
bool GenerateConstructorDefinition(FString& Out, const FString& PrefixedClassName, const FString& PropertyOverridesStr, FText& OutFailReason)
{
	FString Template;
	if (!GameProjectUtils::ReadTemplateFile(TEXT("UObjectClassConstructorDefinition.template"), Template, OutFailReason))
	{
		return false;
	}

	Out = Template.Replace(TEXT("%PREFIXED_CLASS_NAME%"), *PrefixedClassName, ESearchCase::CaseSensitive);
	Out = Out.Replace(TEXT("%PROPERTY_OVERRIDES%"), *PropertyOverridesStr, ESearchCase::CaseSensitive);

	return true;
}

/**
* Generates UObject class constructor declaration.
*
* @param Out String to assign generated constructor to.
* @param PrefixedClassName Prefixed class name for which we generate the constructor.
* @param OutFailReason Template read function failure reason.
*
* @returns True on success. False otherwise.
*/
bool GenerateConstructorDeclaration(FString& Out, const FString& PrefixedClassName, FText& OutFailReason)
{
	FString Template;
	if (!GameProjectUtils::ReadTemplateFile(TEXT("UObjectClassConstructorDeclaration.template"), Template, OutFailReason))
	{
		return false;
	}

	Out = Template.Replace(TEXT("%PREFIXED_CLASS_NAME%"), *PrefixedClassName, ESearchCase::CaseSensitive);

	return true;
}

bool FGSMGameProjectUtils::GenerateClassHeaderFile(const FString& NewHeaderFileName, const FString UnPrefixedClassName, const FNewClassInfo ParentClassInfo, const TArray<FString>& ClassSpecifierList, const FString& ClassProperties, const FString& ClassFunctionDeclarations, FString& OutSyncLocation, const FModuleContextInfo& ModuleInfo, bool bDeclareConstructor, FText& OutFailReason)
{
	FString Template;
	bool bTemplateFound = false;
	if (GEditor)
	{
		if (UClassTemplateEditorSubsystem* TemplateSubsystem = GEditor->GetEditorSubsystem<UClassTemplateEditorSubsystem>())
		{
			const UClass* BaseClass = ParentClassInfo.BaseClass;
			if (const UClassTemplate* ClassTemplate = TemplateSubsystem->FindClassTemplate(ParentClassInfo.BaseClass))
			{
				bTemplateFound = ClassTemplate->ReadHeader(Template, OutFailReason);
				if (!bTemplateFound)
				{
					return false;
				}
			}
		}
	}

	if (!bTemplateFound && !GameProjectUtils::ReadTemplateFile(GetHeaderTemplateFilename(ParentClassInfo), Template, OutFailReason))
	{
		return false;
	}

	const FString ClassPrefix = GetClassPrefixCPP(ParentClassInfo);
	const FString PrefixedClassName = ClassPrefix + UnPrefixedClassName;
	const FString PrefixedBaseClassName = ClassPrefix + GetClassNameCPP(ParentClassInfo);

	FString BaseClassIncludeDirective;
	FString BaseClassIncludePath;
	if (GetIncludePath(ParentClassInfo, BaseClassIncludePath))
	{
		BaseClassIncludeDirective = FString::Printf(IncludePathFormatString, *BaseClassIncludePath);
	}

	FString ModuleAPIMacro;
	{
		GameProjectUtils::EClassLocation ClassPathLocation = GameProjectUtils::EClassLocation::UserDefined;
		if (GameProjectUtils::GetClassLocation(NewHeaderFileName, ModuleInfo, ClassPathLocation))
		{
			// If this class isn't Private, make sure and include the API macro so it can be linked within other modules
			if (ClassPathLocation != GameProjectUtils::EClassLocation::Private)
			{
				ModuleAPIMacro = ModuleInfo.ModuleName.ToUpper() + "_API "; // include a trailing space for the template formatting
			}
		}
	}

	FString EventualConstructorDeclaration;
	if (bDeclareConstructor)
	{
		if (!GenerateConstructorDeclaration(EventualConstructorDeclaration, PrefixedClassName, OutFailReason))
		{
			return false;
		}
	}

	// Not all of these will exist in every class template
	FString FinalOutput = Template.Replace(TEXT("%COPYRIGHT_LINE%"), *MakeCopyrightLine(), ESearchCase::CaseSensitive);
	FinalOutput = FinalOutput.Replace(TEXT("%UNPREFIXED_CLASS_NAME%"), *UnPrefixedClassName, ESearchCase::CaseSensitive);
	FinalOutput = FinalOutput.Replace(TEXT("%CLASS_MODULE_API_MACRO%"), *ModuleAPIMacro, ESearchCase::CaseSensitive);
	FinalOutput = FinalOutput.Replace(TEXT("%UCLASS_SPECIFIER_LIST%"), *GameProjectUtils::MakeCommaDelimitedList(ClassSpecifierList, false), ESearchCase::CaseSensitive);
	FinalOutput = FinalOutput.Replace(TEXT("%PREFIXED_CLASS_NAME%"), *PrefixedClassName, ESearchCase::CaseSensitive);
	FinalOutput = FinalOutput.Replace(TEXT("%PREFIXED_BASE_CLASS_NAME%"), *PrefixedBaseClassName, ESearchCase::CaseSensitive);
	FinalOutput = FinalOutput.Replace(TEXT("%MODULE_NAME%"), *ModuleInfo.ModuleName, ESearchCase::CaseSensitive);

	// Special case where where the wildcard starts with a tab and ends with a new line
	const bool bLeadingTab = true;
	const bool bTrailingNewLine = true;
	FinalOutput = ReplaceWildcard(FinalOutput, TEXT("%EVENTUAL_CONSTRUCTOR_DECLARATION%"), *EventualConstructorDeclaration, bLeadingTab, bTrailingNewLine);
	FinalOutput = ReplaceWildcard(FinalOutput, TEXT("%CLASS_PROPERTIES%"), *ClassProperties, bLeadingTab, bTrailingNewLine);
	FinalOutput = ReplaceWildcard(FinalOutput, TEXT("%CLASS_FUNCTION_DECLARATIONS%"), *ClassFunctionDeclarations, bLeadingTab, bTrailingNewLine);
	if (BaseClassIncludeDirective.Len() == 0)
	{
		FinalOutput = FinalOutput.Replace(TEXT("%BASE_CLASS_INCLUDE_DIRECTIVE%") LINE_TERMINATOR, TEXT(""), ESearchCase::CaseSensitive);
	}
	FinalOutput = FinalOutput.Replace(TEXT("%BASE_CLASS_INCLUDE_DIRECTIVE%"), *BaseClassIncludeDirective, ESearchCase::CaseSensitive);

	HarvestCursorSyncLocation(FinalOutput, OutSyncLocation);

	return GameProjectUtils::WriteOutputFile(NewHeaderFileName, FinalOutput, OutFailReason);
}

static bool TryParseIncludeDirective(const FString& Text, int StartPos, int EndPos, FString& IncludePath)
{
	// Check if the line starts with a # character
	int Pos = StartPos;
	while (Pos < EndPos && FChar::IsWhitespace(Text[Pos]))
	{
		Pos++;
	}
	if (Pos == EndPos || Text[Pos++] != '#')
	{
		return false;
	}
	while (Pos < EndPos && FChar::IsWhitespace(Text[Pos]))
	{
		Pos++;
	}

	// Check it's an include directive
	const TCHAR* IncludeText = TEXT("include");
	for (int Idx = 0; IncludeText[Idx] != 0; Idx++)
	{
		if (Pos == EndPos || Text[Pos] != IncludeText[Idx])
		{
			return false;
		}
		Pos++;
	}
	while (Pos < EndPos && FChar::IsWhitespace(Text[Pos]))
	{
		Pos++;
	}

	// Parse out the quoted include path
	if (Pos == EndPos || Text[Pos++] != '"')
	{
		return false;
	}
	int IncludePathPos = Pos;
	while (Pos < EndPos && Text[Pos] != '"')
	{
		Pos++;
	}
	IncludePath = Text.Mid(IncludePathPos, Pos - IncludePathPos);
	return true;
}

static bool IsUsingOldStylePch(FString BaseDir)
{
	// Find all the cpp files under the base directory
	TArray<FString> Files;
	IFileManager::Get().FindFilesRecursive(Files, *BaseDir, TEXT("*.cpp"), true, false, false);

	// Parse the first include directive for up to 16 include paths
	TArray<FString> FirstIncludedFiles;
	for (int Idx = 0; Idx < Files.Num() && Idx < 16; Idx++)
	{
		FString Text;
		FFileHelper::LoadFileToString(Text, *Files[Idx]);

		int LinePos = 0;
		while (LinePos < Text.Len())
		{
			int EndOfLinePos = LinePos;
			while (EndOfLinePos < Text.Len() && Text[EndOfLinePos] != '\n')
			{
				EndOfLinePos++;
			}

			FString IncludePath;
			if (TryParseIncludeDirective(Text, LinePos, EndOfLinePos, IncludePath))
			{
				FirstIncludedFiles.AddUnique(FPaths::GetCleanFilename(IncludePath));
				break;
			}

			LinePos = EndOfLinePos + 1;
		}
	}
	return FirstIncludedFiles.Num() == 1 && Files.Num() > 1;
}

bool FGSMGameProjectUtils::GenerateClassCPPFile(const FString& NewCPPFileName, const FString UnPrefixedClassName, const FNewClassInfo ParentClassInfo, const TArray<FString>& AdditionalIncludes, const TArray<FString>& PropertyOverrides, const FString& AdditionalMemberDefinitions, FString& OutSyncLocation, const FModuleContextInfo& ModuleInfo, FText& OutFailReason)
{
	FString Template;
	bool bTemplateFound = false;
	if (GEditor)
	{
		if (UClassTemplateEditorSubsystem* TemplateSubsystem = GEditor->GetEditorSubsystem<UClassTemplateEditorSubsystem>())
		{
			const UClass* BaseClass = ParentClassInfo.BaseClass;
			if (const UClassTemplate* ClassTemplate = TemplateSubsystem->FindClassTemplate(ParentClassInfo.BaseClass))
			{
				bTemplateFound = ClassTemplate->ReadSource(Template, OutFailReason);
				if (!bTemplateFound)
				{
					return false;
				}
			}
		}
	}

	if (!bTemplateFound && !GameProjectUtils::ReadTemplateFile(GetSourceTemplateFilename(ParentClassInfo), Template, OutFailReason))
	{
		return false;
	}

	const FString ClassPrefix = GetClassPrefixCPP(ParentClassInfo);
	const FString PrefixedClassName = ClassPrefix + UnPrefixedClassName;
	const FString PrefixedBaseClassName = ClassPrefix + GetClassNameCPP(ParentClassInfo);

	GameProjectUtils::EClassLocation ClassPathLocation = GameProjectUtils::EClassLocation::UserDefined;
	if (!GameProjectUtils::GetClassLocation(NewCPPFileName, ModuleInfo, ClassPathLocation, &OutFailReason))
	{
		return false;
	}

	FString PropertyOverridesStr;
	for (int32 OverrideIdx = 0; OverrideIdx < PropertyOverrides.Num(); ++OverrideIdx)
	{
		if (OverrideIdx > 0)
		{
			PropertyOverridesStr += LINE_TERMINATOR;
		}

		PropertyOverridesStr += TEXT("\t");
		PropertyOverridesStr += *PropertyOverrides[OverrideIdx];
	}

	// Calculate the correct include path for the module header
	FString PchIncludeDirective;
	if (IsUsingOldStylePch(ModuleInfo.ModuleSourcePath))
	{
		const FString ModuleIncludePath = GameProjectUtils::DetermineModuleIncludePath(ModuleInfo, NewCPPFileName);
		if (ModuleIncludePath.Len() > 0)
		{
			PchIncludeDirective = FString::Printf(IncludePathFormatString, *ModuleIncludePath);
		}
	}

	FString EventualConstructorDefinition;
	if (PropertyOverrides.Num() != 0)
	{
		if (!GenerateConstructorDefinition(EventualConstructorDefinition, PrefixedClassName, PropertyOverridesStr, OutFailReason))
		{
			return false;
		}
	}

	// Not all of these will exist in every class template
	FString FinalOutput = Template.Replace(TEXT("%COPYRIGHT_LINE%"), *MakeCopyrightLine(), ESearchCase::CaseSensitive);
	FinalOutput = FinalOutput.Replace(TEXT("%UNPREFIXED_CLASS_NAME%"), *UnPrefixedClassName, ESearchCase::CaseSensitive);
	FinalOutput = FinalOutput.Replace(TEXT("%PREFIXED_CLASS_NAME%"), *PrefixedClassName, ESearchCase::CaseSensitive);
	FinalOutput = FinalOutput.Replace(TEXT("%MODULE_NAME%"), *ModuleInfo.ModuleName, ESearchCase::CaseSensitive);
	FinalOutput = FinalOutput.Replace(TEXT("%PCH_INCLUDE_DIRECTIVE%"), *PchIncludeDirective, ESearchCase::CaseSensitive);

	// Fixup the header file include for this cpp file
	{
		const FString RelativeHeaderIncludePath = GetIncludePathForFile(NewCPPFileName, ModuleInfo.ModuleSourcePath);

		// First make sure we remove any potentially incorrect, legacy paths generated from some version of #include "%UNPREFIXED_CLASS_NAME%.h"
		// This didn't take into account potential subfolders for the created class
		const FString LegacyHeaderInclude = FString::Printf(IncludePathFormatString, *FPaths::GetCleanFilename(RelativeHeaderIncludePath));
		FinalOutput = FinalOutput.Replace(*LegacyHeaderInclude, TEXT(""), ESearchCase::CaseSensitive);

		// Now add the correct include directive which may include a subfolder.
		const FString HeaderIncludeDirective = FString::Printf(IncludePathFormatString, *RelativeHeaderIncludePath);
		FinalOutput = FinalOutput.Replace(TEXT("%MY_HEADER_INCLUDE_DIRECTIVE%"), *HeaderIncludeDirective, ESearchCase::CaseSensitive);
	}

	// Special case where where the wildcard ends with a new line
	const bool bLeadingTab = false;
	const bool bTrailingNewLine = true;
	FinalOutput = ReplaceWildcard(FinalOutput, TEXT("%ADDITIONAL_INCLUDE_DIRECTIVES%"), *GameProjectUtils::MakeIncludeList(AdditionalIncludes), bLeadingTab, bTrailingNewLine);
	FinalOutput = ReplaceWildcard(FinalOutput, TEXT("%EVENTUAL_CONSTRUCTOR_DEFINITION%"), *EventualConstructorDefinition, bLeadingTab, bTrailingNewLine);
	FinalOutput = ReplaceWildcard(FinalOutput, TEXT("%ADDITIONAL_MEMBER_DEFINITIONS%"), *AdditionalMemberDefinitions, bLeadingTab, bTrailingNewLine);

	HarvestCursorSyncLocation(FinalOutput, OutSyncLocation);

	return GameProjectUtils::WriteOutputFile(NewCPPFileName, FinalOutput, OutFailReason);
}

FString FGSMGameProjectUtils::MakeCopyrightLine()
{
	const FString CopyrightNotice = GetDefault<UGeneralProjectSettings>()->CopyrightNotice;
	if (!CopyrightNotice.IsEmpty())
	{
		return FString(TEXT("// ")) + CopyrightNotice;
	}
	else
	{
		return FString();
	}
}

void FGSMGameProjectUtils::HarvestCursorSyncLocation(FString& FinalOutput, FString& OutSyncLocation)
{
	OutSyncLocation.Empty();

	// Determine the cursor focus location if this file will by synced after creation
	TArray<FString> Lines;
	FinalOutput.ParseIntoArray(Lines, TEXT("\n"), false);
	for (int32 LineIdx = 0; LineIdx < Lines.Num(); ++LineIdx)
	{
		const FString& Line = Lines[LineIdx];
		int32 CharLoc = Line.Find(TEXT("%CURSORFOCUSLOCATION%"));
		if (CharLoc != INDEX_NONE)
		{
			// Found the sync marker
			OutSyncLocation = FString::Printf(TEXT("%d:%d"), LineIdx + 1, CharLoc + 1);
			break;
		}
	}

	// If we did not find the sync location, just sync to the top of the file
	if (OutSyncLocation.IsEmpty())
	{
		OutSyncLocation = TEXT("1:1");
	}

	// Now remove the cursor focus marker
	FinalOutput = FinalOutput.Replace(TEXT("%CURSORFOCUSLOCATION%"), TEXT(""), ESearchCase::CaseSensitive);
}

FString FGSMGameProjectUtils::ReplaceWildcard(const FString& Input, const FString& From, const FString& To, bool bLeadingTab, bool bTrailingNewLine)
{
	FString Result = Input;
	FString WildCard = bLeadingTab ? TEXT("\t") : TEXT("");

	WildCard.Append(From);

	if (bTrailingNewLine)
	{
		WildCard.Append(LINE_TERMINATOR);
	}

	const int32 NumReplacements = Result.ReplaceInline(*WildCard, *To, ESearchCase::CaseSensitive);

	// if replacement fails, try again using just the plain wildcard without tab and/or new line
	if (NumReplacements == 0)
	{
		Result = Result.Replace(*From, *To, ESearchCase::CaseSensitive);
	}

	return Result;
}

void FGSMGameProjectUtils::UpdateProject(const FProjectDescriptorModifier& Modifier)
{
	const FString& ProjectFilename = FPaths::GetProjectFilePath();
	const FString& ShortFilename = FPaths::GetCleanFilename(ProjectFilename);
	FText FailReason;
	FText UpdateMessage;
	SNotificationItem::ECompletionState NewCompletionState;

	if (UpdateGameProjectFile_Impl(ProjectFilename, FDesktopPlatformModule::Get()->GetCurrentEngineIdentifier(), &Modifier, FailReason))
	{
		// Refresh the current in-memory project information from the new file on-disk.
		IProjectManager::Get().LoadProjectFile(ProjectFilename);

		// The project was updated successfully.
		FFormatNamedArguments Args;
		Args.Add(TEXT("ShortFilename"), FText::FromString(ShortFilename));
		UpdateMessage = FText::Format(LOCTEXT("ProjectFileUpdateComplete", "{ShortFilename} was successfully updated."), Args);
		NewCompletionState = SNotificationItem::CS_Success;
	}
	else
	{
		// The user chose to update, but the update failed. Notify the user.
		FFormatNamedArguments Args;
		Args.Add(TEXT("ShortFilename"), FText::FromString(ShortFilename));
		Args.Add(TEXT("FailReason"), FailReason);
		UpdateMessage = FText::Format(LOCTEXT("ProjectFileUpdateFailed", "{ShortFilename} failed to update. {FailReason}"), Args);
		NewCompletionState = SNotificationItem::CS_Fail;
	}

	if (UpdateGameProjectNotification.IsValid())
	{
		UpdateGameProjectNotification.Pin()->SetCompletionState(NewCompletionState);
		UpdateGameProjectNotification.Pin()->SetText(UpdateMessage);
		UpdateGameProjectNotification.Pin()->ExpireAndFadeout();
		UpdateGameProjectNotification.Reset();
	}
}

bool FGSMGameProjectUtils::UpdateGameProjectFile_Impl(const FString& ProjectFilename, const FString& EngineIdentifier, const FProjectDescriptorModifier* Modifier, FText& OutFailReason)
{
	// Make sure we can write to the project file
	TryMakeProjectFileWriteable(ProjectFilename);

	// Load the descriptor
	FProjectDescriptor Descriptor;
	if (Descriptor.Load(ProjectFilename, OutFailReason))
	{
		if (Modifier && Modifier->IsBound() && !Modifier->Execute(Descriptor))
		{
			// If modifier returns false it means that we want to drop changes.
			return true;
		}

		// Update file on disk
		return Descriptor.Save(ProjectFilename, OutFailReason) && FDesktopPlatformModule::Get()->SetEngineIdentifierForProject(ProjectFilename, EngineIdentifier);
	}
	return false;
}

void FGSMGameProjectUtils::TryMakeProjectFileWriteable(const FString& ProjectFile)
{
	if (IProjectManager::Get().IsSuppressingProjectFileWrite())
	{
		return;
	}

	// First attempt to check out the file if SCC is enabled
	if (ISourceControlModule::Get().IsEnabled())
	{
		FText FailReason;
		CheckoutGameProjectFile(ProjectFile, FailReason);
	}

	// Check if it's writable
	if (FPlatformFileManager::Get().GetPlatformFile().IsReadOnly(*ProjectFile))
	{
		const FText ShouldMakeProjectWriteable = LOCTEXT("ShouldMakeProjectWriteable_Message", "'{ProjectFilename}' is read-only and cannot be updated. Would you like to make it writeable?");

		FFormatNamedArguments Arguments;
		Arguments.Add(TEXT("ProjectFilename"), FText::FromString(ProjectFile));

		if (FMessageDialog::Open(EAppMsgType::YesNo, FText::Format(ShouldMakeProjectWriteable, Arguments)) == EAppReturnType::Yes)
		{
			FPlatformFileManager::Get().GetPlatformFile().SetReadOnly(*ProjectFile, false);
		}
	}
}

bool FGSMGameProjectUtils::CheckoutGameProjectFile(const FString& ProjectFilename, FText& OutFailReason)
{
	if (!ensure(ProjectFilename.Len()))
	{
		OutFailReason = LOCTEXT("NoProjectFilename", "The project filename was not specified.");
		return false;
	}

	if (!ISourceControlModule::Get().IsEnabled())
	{
		OutFailReason = LOCTEXT("SCCDisabled", "Source control is not enabled. Enable source control in the preferences menu.");
		return false;
	}

	const FString AbsoluteFilename = FPaths::ConvertRelativePathToFull(ProjectFilename);
	ISourceControlProvider& SourceControlProvider = ISourceControlModule::Get().GetProvider();
	const FSourceControlStatePtr SourceControlState = SourceControlProvider.GetState(AbsoluteFilename, EStateCacheUsage::ForceUpdate);
	TArray<FString> FilesToBeCheckedOut;
	FilesToBeCheckedOut.Add(AbsoluteFilename);

	bool bSuccessfullyCheckedOut = false;
	OutFailReason = LOCTEXT("SCCStateInvalid", "Could not determine source control state.");

	if (SourceControlState.IsValid())
	{
		if (SourceControlState->IsCheckedOut() || SourceControlState->IsAdded() || !SourceControlState->IsSourceControlled())
		{
			// Already checked out or opened for add... or not in the depot at all
			bSuccessfullyCheckedOut = true;
		}
		else if (SourceControlState->CanCheckout() || SourceControlState->IsCheckedOutOther())
		{
			bSuccessfullyCheckedOut = (SourceControlProvider.Execute(ISourceControlOperation::Create<FCheckOut>(), FilesToBeCheckedOut) == ECommandResult::Succeeded);
			if (!bSuccessfullyCheckedOut)
			{
				OutFailReason = LOCTEXT("SCCCheckoutFailed", "Failed to check out the project file.");
			}
		}
		else if (!SourceControlState->IsCurrent())
		{
			OutFailReason = LOCTEXT("SCCNotCurrent", "The project file is not at head revision.");
		}
	}

	return bSuccessfullyCheckedOut;
}

bool FGSMGameProjectUtils::UpdateStartupModuleNames(FProjectDescriptor& Descriptor, const TArray<FString>* StartupModuleNames)
{
	if (StartupModuleNames == nullptr)
	{
		return false;
	}

	// Replace the modules names, if specified
	Descriptor.Modules.Empty();
	for (int32 Idx = 0; Idx < StartupModuleNames->Num(); Idx++)
	{
		Descriptor.Modules.Add(FModuleDescriptor(*(*StartupModuleNames)[Idx]));
	}

	GameProjectUtils::ResetCurrentProjectModulesCache();

	return true;
}

bool FGSMGameProjectUtils::UpdateRequiredAdditionalDependencies(FProjectDescriptor& Descriptor, TArray<FString>& RequiredDependencies, const FString& ModuleName)
{
	bool bNeedsUpdate = false;

	for (auto& ModuleDesc : Descriptor.Modules)
	{
		if (ModuleDesc.Name != *ModuleName)
		{
			continue;
		}

		for (const auto& RequiredDep : RequiredDependencies)
		{
			if (!ModuleDesc.AdditionalDependencies.Contains(RequiredDep))
			{
				ModuleDesc.AdditionalDependencies.Add(RequiredDep);
				bNeedsUpdate = true;
			}
		}
	}

	return bNeedsUpdate;
}

FString FGSMGameProjectUtils::GetClassPrefixCPP(FNewClassInfo ClassInfo)
{
	switch (ClassInfo.ClassType)
	{
	case FNewClassInfo::EClassType::UObject:
		return ClassInfo.BaseClass ? ClassInfo.BaseClass->GetPrefixCPP() : TEXT("U");

	case FNewClassInfo::EClassType::EmptyCpp:
		return TEXT("F");

	case FNewClassInfo::EClassType::SlateWidget:
		return TEXT("S");

	case FNewClassInfo::EClassType::SlateWidgetStyle:
		return TEXT("F");

	case FNewClassInfo::EClassType::UInterface:
		return TEXT("U");

	default:
		break;
	}
	return TEXT("");
}

FString FGSMGameProjectUtils::GetClassNameCPP(const FNewClassInfo ClassInfo)
{
	switch(ClassInfo.ClassType)
	{
	case FNewClassInfo::EClassType::UObject:
		return ClassInfo.BaseClass ? ClassInfo.BaseClass->GetName() : TEXT("");

	case FNewClassInfo::EClassType::EmptyCpp:
		return TEXT("");

	case FNewClassInfo::EClassType::SlateWidget:
		return TEXT("CompoundWidget");

	case FNewClassInfo::EClassType::SlateWidgetStyle:
		return TEXT("SlateWidgetStyle");

	case FNewClassInfo::EClassType::UInterface:
		return TEXT("Interface");

	default:
		break;
	}
	return TEXT("");
}

FString FGSMGameProjectUtils::GetCleanClassName(FNewClassInfo ClassInfo, const FString& ClassName)
{
	FString CleanClassName = ClassName;

	switch(ClassInfo.ClassType)
	{
	case FNewClassInfo::EClassType::SlateWidgetStyle:
		{
			// Slate widget style classes always take the form FMyThingWidget, and UMyThingWidgetStyle
			// if our class ends with either Widget or WidgetStyle, we need to strip those out to avoid silly looking duplicates
			if(CleanClassName.EndsWith(TEXT("Style")))
			{
#if UE_VERSION_OLDER_THAN(5, 5, 0)
				CleanClassName.LeftChopInline(5, false); // 5 for "Style"
#else
				CleanClassName.LeftChopInline(5, EAllowShrinking::No); // 5 for "Style"
#endif
			}
			if(CleanClassName.EndsWith(TEXT("Widget")))
			{
#if UE_VERSION_OLDER_THAN(5, 5, 0)
				CleanClassName.LeftChopInline(6, false); // 6 for "Widget"
#else
				CleanClassName.LeftChopInline(6, EAllowShrinking::No); // 6 for "Widget"
#endif
			}
		}
		break;

	default:
		break;
	}

	return CleanClassName;
}

FString FGSMGameProjectUtils::GetFinalClassName(const FNewClassInfo ClassInfo, const FString& ClassName)
{
	const FString CleanClassName = GetCleanClassName(ClassInfo, ClassName);

	switch(ClassInfo.ClassType)
	{
	case FNewClassInfo::EClassType::SlateWidgetStyle:
		return FString::Printf(TEXT("%sWidgetStyle"), *CleanClassName);

	default:
		break;
	}

	return CleanClassName;
}

bool FGSMGameProjectUtils::GetIncludePath(FNewClassInfo ClassInfo, FString& OutIncludePath)
{
	switch(ClassInfo.ClassType)
	{
	case FNewClassInfo::EClassType::UObject:
		if(ClassInfo.BaseClass && ClassInfo.BaseClass->HasMetaData(TEXT("IncludePath")))
		{
			OutIncludePath = ClassInfo.BaseClass->GetMetaData(TEXT("IncludePath"));
			return true;
		}
		break;

	case FNewClassInfo::EClassType::SlateWidget:
		OutIncludePath = "Widgets/SCompoundWidget.h";
		return true;

	case FNewClassInfo::EClassType::SlateWidgetStyle:
		OutIncludePath = "Styling/SlateWidgetStyle.h";
		return true;

	default:
		break;
	}
	return false;
}

FString FGSMGameProjectUtils::GetHeaderFilename(const FNewClassInfo ClassInfo, const FString& ClassName)
{
	const FString HeaderFilename = GetFinalClassName(ClassInfo, ClassName) + TEXT(".h");

	switch (ClassInfo.ClassType)
	{
	case FNewClassInfo::EClassType::SlateWidget:
		return TEXT("S") + HeaderFilename;

	default:
		break;
	}

	return HeaderFilename;
}

FString FGSMGameProjectUtils::GetSourceFilename(const FNewClassInfo ClassInfo, const FString& ClassName)
{
	const FString SourceFilename = GetFinalClassName(ClassInfo, ClassName) + TEXT(".cpp");

	switch(ClassInfo.ClassType)
	{
	case FNewClassInfo::EClassType::SlateWidget:
		return TEXT("S") + SourceFilename;

	default:
		break;
	}

	return SourceFilename;
}

FString FGSMGameProjectUtils::GetHeaderTemplateFilename(const FNewClassInfo ClassInfo)
{
	const FNewClassInfo::EClassType ClassType = ClassInfo.ClassType;
	const UClass* BaseClass = ClassInfo.BaseClass;

	switch (ClassType)
	{
	case FNewClassInfo::EClassType::UObject:
		{
			if (BaseClass != nullptr)
			{
				if ((BaseClass == UActorComponent::StaticClass()) || (BaseClass == USceneComponent::StaticClass()))
				{
					return TEXT("ActorComponentClass.h.template");
				}
				else if (BaseClass == AActor::StaticClass())
				{
					return TEXT("ActorClass.h.template");
				}
				else if (BaseClass == APawn::StaticClass())
				{
					return TEXT("PawnClass.h.template");
				}
				else if (BaseClass == ACharacter::StaticClass())
				{
					return TEXT("CharacterClass.h.template");
				}
			}
			// Some other non-actor, non-component UObject class
			return TEXT("UObjectClass.h.template");
		}

	case FNewClassInfo::EClassType::EmptyCpp:
		return TEXT("EmptyClass.h.template");

	case FNewClassInfo::EClassType::SlateWidget:
		return TEXT("SlateWidget.h.template");

	case FNewClassInfo::EClassType::SlateWidgetStyle:
		return TEXT("SlateWidgetStyle.h.template");

	case FNewClassInfo::EClassType::UInterface:
		return TEXT("InterfaceClass.h.template");

	default:
		break;
	}
	return TEXT("");
}

FString FGSMGameProjectUtils::GetSourceTemplateFilename(const FNewClassInfo ClassInfo)
{
	const FNewClassInfo::EClassType ClassType = ClassInfo.ClassType;
	const UClass* BaseClass = ClassInfo.BaseClass;

	switch (ClassType)
	{
	case FNewClassInfo::EClassType::UObject:
		if (BaseClass != nullptr)
		{
			if ((BaseClass == UActorComponent::StaticClass()) || (BaseClass == USceneComponent::StaticClass()))
			{
				return TEXT("ActorComponentClass.cpp.template");
			}
			else if (BaseClass == AActor::StaticClass())
			{
				return TEXT("ActorClass.cpp.template");
			}
			else if (BaseClass == APawn::StaticClass())
			{
				return TEXT("PawnClass.cpp.template");
			}
			else if (BaseClass == ACharacter::StaticClass())
			{
				return TEXT("CharacterClass.cpp.template");
			}
		}
		// Some other non-actor, non-component UObject class
		return TEXT("UObjectClass.cpp.template");

	case FNewClassInfo::EClassType::EmptyCpp:
		return TEXT("EmptyClass.cpp.template");

	case FNewClassInfo::EClassType::SlateWidget:
		return TEXT("SlateWidget.cpp.template");

	case FNewClassInfo::EClassType::SlateWidgetStyle:
		return TEXT("SlateWidgetStyle.cpp.template");

	case FNewClassInfo::EClassType::UInterface:
		return TEXT("InterfaceClass.cpp.template");

	default:
		break;
	}
	return TEXT("");
}

bool FGSMGameProjectUtils::GenerateGameModuleTargetFile(const FString& NewTargetFileName, const FString& ModuleName, const TArray<FString>& ExtraModuleNames, FText& OutFailReason)
{
	FString Template;
	if (!GameProjectUtils::ReadTemplateFile(TEXT("Stub.Target.cs.template"), Template, OutFailReason))
	{
		return false;
	}

	FString FinalOutput = Template.Replace(TEXT("%COPYRIGHT_LINE%"), *MakeCopyrightLine(), ESearchCase::CaseSensitive);
	FinalOutput = FinalOutput.Replace(TEXT("%EXTRA_MODULE_NAMES%"), *GameProjectUtils::MakeCommaDelimitedList(ExtraModuleNames), ESearchCase::CaseSensitive);
	FinalOutput = FinalOutput.Replace(TEXT("%MODULE_NAME%"), *ModuleName, ESearchCase::CaseSensitive);
	FinalOutput = FinalOutput.Replace(TEXT("%TARGET_TYPE%"), TEXT("Game"), ESearchCase::CaseSensitive);
	FinalOutput = FinalOutput.Replace(TEXT("%DEFAULT_BUILD_SETTINGS_VERSION%"), GameProjectUtils::GetDefaultBuildSettingsVersion(), ESearchCase::CaseSensitive);

	return GameProjectUtils::WriteOutputFile(NewTargetFileName, FinalOutput, OutFailReason);
}

bool FGSMGameProjectUtils::GenerateEditorModuleTargetFile(const FString& NewTargetFileName, const FString& ModuleName, const TArray<FString>& ExtraModuleNames, FText& OutFailReason)
{
	FString Template;
	if (!GameProjectUtils::ReadTemplateFile(TEXT("Stub.Target.cs.template"), Template, OutFailReason))
	{
		return false;
	}

	FString FinalOutput = Template.Replace(TEXT("%COPYRIGHT_LINE%"), *MakeCopyrightLine(), ESearchCase::CaseSensitive);
	FinalOutput = FinalOutput.Replace(TEXT("%EXTRA_MODULE_NAMES%"), *GameProjectUtils::MakeCommaDelimitedList(ExtraModuleNames), ESearchCase::CaseSensitive);
	FinalOutput = FinalOutput.Replace(TEXT("%MODULE_NAME%"), *ModuleName, ESearchCase::CaseSensitive);
	FinalOutput = FinalOutput.Replace(TEXT("%TARGET_TYPE%"), TEXT("Editor"), ESearchCase::CaseSensitive);
	FinalOutput = FinalOutput.Replace(TEXT("%DEFAULT_BUILD_SETTINGS_VERSION%"), GameProjectUtils::GetDefaultBuildSettingsVersion(), ESearchCase::CaseSensitive);

	return GameProjectUtils::WriteOutputFile(NewTargetFileName, FinalOutput, OutFailReason);
}

bool FGSMGameProjectUtils::GenerateGameModuleHeaderFile(const FString& NewGameModuleHeaderFileName, const TArray<FString>& PublicHeaderIncludes, FText& OutFailReason)
{
	FString Template;
	if (!GameProjectUtils::ReadTemplateFile(TEXT("GameModule.h.template"), Template, OutFailReason))
	{
		return false;
	}

	FString FinalOutput = Template.Replace(TEXT("%COPYRIGHT_LINE%"), *MakeCopyrightLine(), ESearchCase::CaseSensitive);
	FinalOutput = FinalOutput.Replace(TEXT("%PUBLIC_HEADER_INCLUDES%"), *GameProjectUtils::MakeIncludeList(PublicHeaderIncludes), ESearchCase::CaseSensitive);

	return GameProjectUtils::WriteOutputFile(NewGameModuleHeaderFileName, FinalOutput, OutFailReason);
}

bool FGSMGameProjectUtils::GenerateGameModuleCPPFile(const FString& NewGameModuleCPPFileName, const FString& ModuleName, const FString& GameName, FText& OutFailReason)
{
	FString Template;
	if (!GameProjectUtils::ReadTemplateFile(TEXT("GameModule.cpp.template"), Template, OutFailReason))
	{
		return false;
	}

	FString FinalOutput = Template.Replace(TEXT("%COPYRIGHT_LINE%"), *MakeCopyrightLine(), ESearchCase::CaseSensitive);
	FinalOutput = FinalOutput.Replace(TEXT("%MODULE_NAME%"), *ModuleName, ESearchCase::CaseSensitive);
	FinalOutput = FinalOutput.Replace(TEXT("%GAME_NAME%"), *GameName, ESearchCase::CaseSensitive);

	return GameProjectUtils::WriteOutputFile(NewGameModuleCPPFileName, FinalOutput, OutFailReason);
}

FString FGSMGameProjectUtils::GetIncludePathForFile(const FString& InFullFilePath, const FString& ModuleRootPath)
{
	const FString RelativeHeaderPath = FPaths::ChangeExtension(InFullFilePath, "h");

	const FString PublicString = ModuleRootPath / "Public" / "";
	if (RelativeHeaderPath.StartsWith(PublicString))
	{
		return RelativeHeaderPath.RightChop(PublicString.Len());
	}

	const FString PrivateString = ModuleRootPath / "Private" / "";
	if (RelativeHeaderPath.StartsWith(PrivateString))
	{
		return RelativeHeaderPath.RightChop(PrivateString.Len());
	}

	return RelativeHeaderPath.RightChop(ModuleRootPath.Len());
}

#undef LOCTEXT_NAMESPACE
