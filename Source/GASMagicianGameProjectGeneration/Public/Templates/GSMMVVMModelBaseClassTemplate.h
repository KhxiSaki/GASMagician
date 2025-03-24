#pragma once

#include "CoreMinimal.h"
#include "ClassTemplateEditorSubsystem.h"
#include "GSMMVVMModelGenSettings.h"

#include "GSMMVVMModelBaseClassTemplate.generated.h"

/**
 *
 */
UCLASS()
class GASMAGICIANGAMEPROJECTGENERATION_API UGSMMVVMModelBaseClassTemplate : public UPluginClassTemplate
{
	GENERATED_BODY()


public:
	UGSMMVVMModelBaseClassTemplate(const FObjectInitializer& ObjectInitializer);

protected:
	virtual FString GetFilename() const override;

public:
	/** Returns path to the directory containing all plugin class templates. */
	virtual FString GetDirectory() const override;

	/** Returns path to the directory containing all plugin class templates (static version) */
	static FString GetPluginTemplateDirectory();

	/**
	 * Prepare Header Class Template by replacing all special %% placeholders not handled by GameProjectUtils, namely for Attribute properties generation.
	 *
	 * Writes output to disk to replace this ClassTemplate file (ResetTemplate() will restore to original value)
	 */
	static bool PrepareHeaderTemplate(TArray<FGSCMVVMAttributeDefinition> Attributes, FString TemplateText, FText& OutFailReason);

	/**
	 * Prepare Header Class Template by replacing all special %% placeholders not handled by GameProjectUtils, namely for Attribute properties generation.
	 *
	 * Writes output to disk to replace this ClassTemplate file (ResetTemplate() will restore to original value)
	 */
	static bool PrepareSourceTemplate(TArray<FGSCMVVMAttributeDefinition> Attributes, FString TemplateText, FText& OutFailReason);

	/** Restores Class Template files (.h and .cpp) to their original content */
	static bool ResetTemplates(FText &OutFailReason);

	/** Replace all AttributeSet specific placeholders in provided OutTemplateText */
	static bool ReplaceAttributePlaceholder(TArray<FGSCMVVMAttributeDefinition> Attributes, FString& OutTemplateText, FText& OutFailReason);

	/** Returns chunk of GameplayAttributes declaration comprised of all the elements in InAttributesList.*/
	static FString MakeAttributesDeclaration(TArray<FGSCMVVMAttributeDefinition> InAttributesList);

	static FString MakeAttributesOnRepDeclaration(TArray<FGSCMVVMAttributeDefinition> InAttributesList);

	/** Returns chunk of GameplayAttributes OnRep function definitions comprised of all the elements in InAttributesList.*/
	static FString MakeAttributesOnRepDefinition(TArray<FGSCMVVMAttributeDefinition> InAttributesList);

	/** Returns the contents of the specified template file */
	static bool ReadTemplateFile(const FString& TemplateFileName, FString& OutFileContents, FText& OutFailReason);

	/** Writes an output file. OutputFilename includes a path */
	static bool WriteOutputFile(const FString& OutputFilename, const FString& OutputFileContents, FText& OutFailReason);
};
