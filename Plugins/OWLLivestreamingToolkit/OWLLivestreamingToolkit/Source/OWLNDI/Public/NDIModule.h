// Copyright Off World Live Limited, 2020-2022. All rights reserved.

#pragma once

#include "Modules/ModuleManager.h"
#include "CoreMinimal.h"

DECLARE_LOG_CATEGORY_EXTERN(OWLNDILog, Log, All);

class FNDIModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
private:

	void* NDIDLLHandle = nullptr;

	FDelegateHandle OnEndFrameHandle;

	void OnEndFrame();
};
