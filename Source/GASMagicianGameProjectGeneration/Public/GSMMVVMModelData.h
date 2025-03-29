#pragma once

#include "CoreMinimal.h"
#include "GSMMVVMModelData.generated.h"

USTRUCT()
struct FGSMViewModelPropertyDefinition
{
	GENERATED_BODY()

public:
	/** The ViewModel property name that will be exposed for data binding */
	UPROPERTY(EditAnywhere, Category = "ViewModel")
	FString PropertyName;

	/** The category for organization in Blueprints */
	UPROPERTY(EditAnywhere, Category = "ViewModel")
	FString Category;
};

USTRUCT()
struct FGSMViewModelPropertiesSettings
{
	GENERATED_BODY()

public:
	/** Define the observable properties for your ViewModel */
	UPROPERTY(EditAnywhere, Category = "ViewModel")
	TArray<FGSMViewModelPropertyDefinition> Properties;

	bool HasAnyProperties() const
	{
		return Properties.Num() > 0;
	}
};