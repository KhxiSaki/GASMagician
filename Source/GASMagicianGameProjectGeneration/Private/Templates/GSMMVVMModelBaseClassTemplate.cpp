#include "Templates/GSMMVVMModelBaseClassTemplate.h"
#include "MVVMViewModelBase.h"
#include "Interfaces/IPluginManager.h"
#include "Misc/FileHelper.h"

#define LOCTEXT_NAMESPACE "MVVMModelClassTemplate"

UGSMMVVMModelBaseClassTemplate::UGSMMVVMModelBaseClassTemplate(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	PluginName = TEXT("GASMagician");
	SetGeneratedBaseClass(UMVVMViewModelBase::StaticClass());
}

FString UGSMMVVMModelBaseClassTemplate::GetFilename() const
{
	return TEXT("MVVMModelBaseClass");
}

FString UGSMMVVMModelBaseClassTemplate::GetDirectory() const
{
	return GetPluginTemplateDirectory();
}

FString UGSMMVVMModelBaseClassTemplate::GetPluginTemplateDirectory()
{
	const TSharedPtr<IPlugin> Plugin = IPluginManager::Get().FindPlugin(TEXT("GASMagician"));
	if (Plugin.IsValid())
	{
		return Plugin->GetBaseDir() / TEXT("Templates") / TEXT("ClassTemplates");
	}

	return UClassTemplateEditorSubsystem::GetEngineTemplateDirectory();
}

bool UGSMMVVMModelBaseClassTemplate::PrepareHeaderTemplate(TArray<FGSCMVVMAttributeDefinition> Attributes, FString TemplateText, FText& OutFailReason)
{
	const bool bReplaceDone = ReplaceAttributePlaceholder(Attributes, TemplateText, OutFailReason);
	if (!bReplaceDone)
	{
		return false;
	}

	const FString OutputFilename = GetPluginTemplateDirectory() / TEXT("MVVMModelBaseClass.h.template");

	return WriteOutputFile(OutputFilename, TemplateText, OutFailReason);
}

bool UGSMMVVMModelBaseClassTemplate::PrepareSourceTemplate(TArray<FGSCMVVMAttributeDefinition> Attributes, FString TemplateText, FText& OutFailReason)
{
	const bool bReplaceDone = ReplaceAttributePlaceholder(Attributes, TemplateText, OutFailReason);
	if (!bReplaceDone)
	{
		return false;
	}

	const FString OutputFilename = GetPluginTemplateDirectory() / TEXT("MVVMModelBaseClass.cpp.template");

	return WriteOutputFile(OutputFilename, TemplateText, OutFailReason);
}

bool UGSMMVVMModelBaseClassTemplate::ResetTemplates(FText& OutFailReason)
{
	FString OriginalHeaderTemplate;
	FString OriginalSourceTemplate;
	const FString OutputHeaderFilename = GetPluginTemplateDirectory() / TEXT("MVVMModelBaseClass.h.template");
	const FString OutputSourceFilename = GetPluginTemplateDirectory() / TEXT("MVVMModelBaseClass.cpp.template");

	if (!ReadTemplateFile(TEXT("MVVMModelBaseClass.h.template.original"), OriginalHeaderTemplate, OutFailReason))
	{
		return false;
	}

	if (!ReadTemplateFile(TEXT("MVVMModelBaseClass.cpp.template.original"), OriginalSourceTemplate, OutFailReason))
	{
		return false;
	}

	if (!WriteOutputFile(OutputHeaderFilename, OriginalHeaderTemplate, OutFailReason))
	{
		return false;
	}

	return WriteOutputFile(OutputSourceFilename, OriginalSourceTemplate, OutFailReason);
}

bool UGSMMVVMModelBaseClassTemplate::ReplaceAttributePlaceholder(const TArray<FGSCMVVMAttributeDefinition> Attributes, FString& OutTemplateText, FText& OutFailReason)
{

	FString AttributeDeclarationTemplate;
	FString AttributeOnRepDeclarationTemplate;
	FString AttributeOnRepDefinitionTemplate;
	FString AttributeDOREPLIFETIMEDefinitionTemplate;


	if (!ReadTemplateFile(TEXT("MVVMAttribute_Declaration.template"), AttributeOnRepDeclarationTemplate, OutFailReason))
	{
		return false;
	}

	if (!ReadTemplateFile(TEXT("MVVMAttribute_Definition.template"), AttributeOnRepDefinitionTemplate, OutFailReason))
	{
		return false;
	}

	// Not all of these will exist in every class template
	FString FinalOutput = OutTemplateText.Replace(TEXT("// %ATTRIBUTES_DECLARATION%"), *MakeAttributesDeclaration(Attributes), ESearchCase::CaseSensitive);
	FinalOutput = FinalOutput.Replace(TEXT("// %ATTRIBUTES_ONREP_DECLARATION%"), *MakeAttributesOnRepDeclaration(Attributes), ESearchCase::CaseSensitive);
//	FinalOutput = FinalOutput.Replace(TEXT("// %ATTRIBUTES_DOREPLIFETIME_DEFINITION%"), *MakeAttributesDoRepLifetimeDefinition(Attributes), ESearchCase::CaseSensitive);
	FinalOutput = FinalOutput.Replace(TEXT("// %ATTRIBUTES_ONREP_DEFINITION%"), *MakeAttributesOnRepDefinition(Attributes), ESearchCase::CaseSensitive);

	OutTemplateText = FinalOutput;
	return true;
}

FString UGSMMVVMModelBaseClassTemplate::MakeAttributesDeclaration(TArray<FGSCMVVMAttributeDefinition> InAttributesList)
{
	FText FailReason;
	FString Template;
	if (!ReadTemplateFile(TEXT("MVVMAttribute_Declaration.template"), Template, FailReason))
	{
		return FString();
	}

	TArray<FString> Outputs;
	for (FGSCMVVMAttributeDefinition Attribute : InAttributesList)
	{
		FString Output = Template.Replace(TEXT("%ATTRIBUTE_NAME%"), *Attribute.AttributeName, ESearchCase::CaseSensitive);
		Output = Output.Replace(TEXT("%ATTRIBUTE_CATEGORY%"), *Attribute.Category, ESearchCase::CaseSensitive);
		Outputs.Add(Output);
	}

	return FString::Join(Outputs, LINE_TERMINATOR);
}

FString UGSMMVVMModelBaseClassTemplate::MakeAttributesOnRepDeclaration(TArray<FGSCMVVMAttributeDefinition> InAttributesList)
{
	FText FailReason;
	FString Template;
	if (!ReadTemplateFile(TEXT("MVVMAttribute_Declaration.template"), Template, FailReason))
	{
		return FString();
	}

	TArray<FString> Outputs;
	for (FGSCMVVMAttributeDefinition Attribute : InAttributesList)
	{
		FString Output = Template.Replace(TEXT("%ATTRIBUTE_NAME%"), *Attribute.AttributeName, ESearchCase::CaseSensitive);
		Output = Output.Replace(TEXT("%ATTRIBUTE_CATEGORY%"), *Attribute.Category, ESearchCase::CaseSensitive);
		Outputs.Add(Output);
	}

	return FString::Join(Outputs, LINE_TERMINATOR);
}

FString UGSMMVVMModelBaseClassTemplate::MakeAttributesOnRepDefinition(TArray<FGSCMVVMAttributeDefinition> InAttributesList)
{
	FText FailReason;
	FString Template;
	if (!ReadTemplateFile(TEXT("MVVMAttribute_Definition.template"), Template, FailReason))
	{
		return FString();
	}

	TArray<FString> Outputs;
	for (FGSCMVVMAttributeDefinition Attribute : InAttributesList)
	{
		FString Output = Template.Replace(TEXT("%ATTRIBUTE_NAME%"), *Attribute.AttributeName, ESearchCase::CaseSensitive);
		Outputs.Add(Output);
	}

	return FString::Join(Outputs, LINE_TERMINATOR);
}

bool UGSMMVVMModelBaseClassTemplate::ReadTemplateFile(const FString& TemplateFileName, FString& OutFileContents, FText& OutFailReason)
{
	const FString FullFileName = GetPluginTemplateDirectory() / TemplateFileName;
	if (FFileHelper::LoadFileToString(OutFileContents, *FullFileName))
	{
		return true;
	}

	FFormatNamedArguments Args;
	Args.Add(TEXT("FullFileName"), FText::FromString(FullFileName));
	OutFailReason = FText::Format(LOCTEXT("FailedToReadTemplateFile", "Failed to read template file \"{FullFileName}\""), Args);
	return false;
}

bool UGSMMVVMModelBaseClassTemplate::WriteOutputFile(const FString& OutputFilename, const FString& OutputFileContents, FText& OutFailReason)
{
	if (FFileHelper::SaveStringToFile(OutputFileContents, *OutputFilename))
	{
		return true;
	}

	FFormatNamedArguments Args;
	Args.Add(TEXT("OutputFilename"), FText::FromString(OutputFilename));
	OutFailReason = FText::Format(LOCTEXT("FailedToWriteOutputFile", "Failed to write output file \"{OutputFilename}\". Perhaps the file is Read-Only?"), Args);
	return false;
}

#undef LOCTEXT_NAMESPACE
