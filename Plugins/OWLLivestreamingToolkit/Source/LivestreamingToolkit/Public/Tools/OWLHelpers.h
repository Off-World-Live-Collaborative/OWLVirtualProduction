// Copyright Off World Live Limited, 2020-2022. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "Engine/Texture2D.h"
#include "Templates/SubclassOf.h"

enum ERHIType
{
	D3D10,
	D3D11,
	D3D12,
	OpenGL,
	OpenGL3,
	OpenGL4,
	Vulkan,
	Null
};
class FSceneViewport;

class LIVESTREAMINGTOOLKIT_API FOWLHelpers
{
public:
	static FString GetOWLSystemDataFolder();
	static void WriteTextureRChannelToString(UTexture2D* Texture, FString FilePath, FString& ImageString);
	static void SetNDIModuleEnabled(bool Enabled);
	static bool GetNDIModuleEnabled();
	static void SetVirtualWebcamModuleEnabled(bool Enabled);
	static bool GetVirtualWebcamModuleEnabled();
	static ERHIType StringToRHIType(FString rhiString);
	static void FindSceneViewport(TWeakPtr<FSceneViewport>& OutSceneViewport);


private:
	static bool NDIModuleEnabled;
	static bool VirtualWebcamModuleEnabled;
};

class LIVESTREAMINGTOOLKIT_API FOWLSenderHelpers
{
public:
	static void GetEditorManagersToClose(TSubclassOf<AActor> ActorClass, TArray<AActor*>& OutActors);
	static void CheckOverrideStandaloneName(const FString Name, FString& OutStandaloneName);
};
