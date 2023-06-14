// Copyright Off World Live Limited, 2020-2021. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleInterface.h"

DECLARE_LOG_CATEGORY_EXTERN(LogOWLVirtualWebcam, Log, All);

class FOWLVirtualWebcamModule : public IModuleInterface
{
public:
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
private:
	void* DLLHandle = nullptr;
};

class VirtualWebcamModuleStatus
{
public:
	static bool bIsInstalled;
	static bool Installed()
	{
		return bIsInstalled;
	}
};
