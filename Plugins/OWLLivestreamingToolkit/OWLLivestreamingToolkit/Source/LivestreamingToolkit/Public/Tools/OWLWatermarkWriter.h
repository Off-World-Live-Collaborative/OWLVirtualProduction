// Copyright Off World Live Limited, 2020-2022. All rights reserved.
#pragma once
#include "CoreMinimal.h"
#include "RHI.h"
#include "RHICommandList.h"

class UTextureRenderTarget2D;
class UTexture2D;
class UTexture;

class LIVESTREAMINGTOOLKIT_API FOWLWatermarkWriter
{
public:
	FOWLWatermarkWriter();
	~FOWLWatermarkWriter();
public:
	static TSharedPtr<FOWLWatermarkWriter> Get(UWorld* World);
	// called from shutdown of the module
	static void Cleanup();
public:
	void Initialise(UWorld* World);
	void Apply(UTextureRenderTarget2D* RT);
	void Apply(UTexture* Texture);
	static void UpdateImageArray(UTexture2D* Texture);
	void Apply_RenderThread(FRHICommandListImmediate& RHICmdList, UTextureRenderTarget2D* RT);
	void Apply_RenderThread(FRHICommandListImmediate& RHICmdList, FTexture2DRHIRef RT);

private:
	UTexture2D* ImageTexture = nullptr;
	static TMap<UWorld*, TSharedPtr<FOWLWatermarkWriter>> Singletons;

private:
	UTexture2D* CreateImageTexture();

};
