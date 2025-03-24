#pragma once

#include "CoreMinimal.h"
#include "GSMMVVMModelData.h"
#include "GSMMVVMModelGenSettings.generated.h"

/**
 *
 */
UCLASS()
class UGSMMVVMModelAttributesGenSettings : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, Category = "GASMagician MVVM Generation", Meta = (ShowOnlyInnerProperties))
	FGSCMVVMAttributesSettings Settings;

	static UGSMMVVMModelAttributesGenSettings* Get()
    {
    	// This is a singleton, use default object
        return GetMutableDefault<UGSMMVVMModelAttributesGenSettings>();
    }
};
