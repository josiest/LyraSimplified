// Copyright Epic Games, Inc. All Rights Reserved.

#include "Modules/ModuleManager.h"
#define LOCTEXT_NAMESPACE "FLyraSimplifiedModule"

class FLyraSimplifiedModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};

void FLyraSimplifiedModule::StartupModule()
{
}

void FLyraSimplifiedModule::ShutdownModule()
{
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FLyraSimplifiedModule, LyraSimplified)