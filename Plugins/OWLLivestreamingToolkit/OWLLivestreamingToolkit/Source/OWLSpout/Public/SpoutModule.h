// Copyright Off World Live Limited, 2020-2022. All rights reserved.

#pragma once

#include "Modules/ModuleManager.h"
#include "CoreMinimal.h"

DECLARE_LOG_CATEGORY_EXTERN(OWLSpoutLog, Log, All);

class FSpoutModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;

private:
	FDelegateHandle EndFrameHandle;
	void OnEndFrame();
	void* SpoutDXDLLHandle = nullptr;
};
