#pragma once

#include "CoreMinimal.h"
#include "GSMMVVMModelData.generated.h"

USTRUCT()
struct FGSCMVVMAttributeDefinition
{
	GENERATED_BODY()

public:
	/** The MVVM Attribute name you want to generate */
	UPROPERTY(EditAnywhere, Category = "Attributes")
	FString AttributeName;

	/** The UPROPERTY Category specifier for this attribute */
	UPROPERTY(EditAnywhere, Category = "Attributes")
	FString Category;
};

USTRUCT()
struct FGSCMVVMAttributesSettings
{
	GENERATED_BODY()

public:

	/** Define here any number of MVVM Attribute you want to generate (at least one) */
	UPROPERTY(EditAnywhere, Category = "Attributes")
	TArray<FGSCMVVMAttributeDefinition> Attributes;

	bool HasAnyAttributes() const
	{
		return Attributes.Num() > 0;
	}
};
