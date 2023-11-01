// Copyright Off World Live Limited, 2020-2022. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "HAL/Runnable.h"
#include "HAL/RunnableThread.h"

#include "Windows/AllowWindowsPlatformTypes.h"
#include "Processing.NDI.Lib.h"
#include "Processing.NDI.Lib.cplusplus.h"
#include "Windows/HideWindowsPlatformTypes.h"

#include "OWLNDIFinder.generated.h"

USTRUCT(BlueprintType)
struct OWLNDI_API FNDISource
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadOnly, Category = "NDISource")
	FString Name = FString("");
	UPROPERTY(BlueprintReadOnly, Category = "NDISource")
	FString URL = FString("");
};

class OWLNDI_API FOWLNDIFinder : public FRunnable
{

public:
	FOWLNDIFinder();
	~FOWLNDIFinder();
	TArray<FNDISource> GetCurrentSources();

protected:
	virtual bool Init() override;
	virtual uint32 Run() override;
	virtual void Stop() override {};
	virtual void Exit() override {};

private:
	FNDISource NDIToUe4SourceStruct(const NDIlib_source_t Source);
	void RefreshCurrentSources();

private:
	FRunnableThread* Thread = nullptr;
	TArray<FNDISource> CurrentSources;
	NDIlib_find_instance_t Finder = nullptr;
	FCriticalSection Finder_CS;
	TAtomic<bool> ShouldShutdown;

private:
	static FOWLNDIFinder* NDIFinderSingleton;

public:
	static FOWLNDIFinder* Get();
};
