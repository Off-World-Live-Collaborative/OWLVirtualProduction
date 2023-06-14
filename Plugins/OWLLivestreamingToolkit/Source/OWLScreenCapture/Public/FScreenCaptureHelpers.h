// Copyright Off World Live Limited, 2020-2021. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#if (PLATFORM_WINDOWS)
#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN
#endif

#include "Windows/AllowWindowsPlatformTypes.h"
#include "Windows/AllowWindowsPlatformAtomics.h"
#include "Windows/HideWindowsPlatformAtomics.h"
#include "Windows/HideWindowsPlatformTypes.h"
#endif

struct FOWLMonitorInfo
{
	FString Name;
	HMONITOR Handle;
};

struct FOWLWindowInfo
{
	FString Name;
	HWND Handle;
};

class OWLSCREENCAPTURE_API FScreenCaptureHelpers
{
public:
	static TArray<FOWLMonitorInfo> GetMonitors();
	static TArray<FOWLWindowInfo> GetWindows();
};
