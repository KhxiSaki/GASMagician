// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Logging/LogMacros.h"

class UObject;

GASMAGICIAN_API DECLARE_LOG_CATEGORY_EXTERN(LogGASMagician, Log, All);
GASMAGICIAN_API FString GetClientServerContextString(UObject* ContextObject = nullptr);
