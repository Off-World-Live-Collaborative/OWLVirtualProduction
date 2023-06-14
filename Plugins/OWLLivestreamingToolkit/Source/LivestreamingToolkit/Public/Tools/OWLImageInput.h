// Copyright Off World Live Limited, 2020-2021. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "RHI.h"
#include "RHIResources.h"
#include "Engine/TextureRenderTarget2D.h"

UENUM()
enum class EOWLOutputType : uint8
{
	OT_Media,
	OT_VirtualWebcam,
	// todo : we should implement a version for NDI here as well as now we're copying the code
};

struct FOutputRenderTextures_RHI
{
	FTexture2DRHIRef Texture;
	bool bReadyToRead;
};

DECLARE_LOG_CATEGORY_EXTERN(LogOWLImageInput, Log, All);


class LIVESTREAMINGTOOLKIT_API OWLImageInput
{
public:
	void Destroy();
	TArray64<uint8_t> OutputData;
	bool bDataReady = false;
	bool bRenderWatermark = false;

private:
	bool Initialised = false;
	TArray<FOutputRenderTextures_RHI> OutputTextures;
	int CurrentTextureIndex = 0;
	UTextureRenderTarget2D* SourceRenderTarget = nullptr;
	FIntPoint Dimensions = FIntPoint(0,0);
	FCriticalSection RTMutex;
	EOWLOutputType OutputType = EOWLOutputType::OT_Media;
	int BytesPerPixel = 4;

private:
	void EmptyOutputTextures();
	EPixelFormat PixelFormatFromType(EOWLOutputType Type);

public:
	/* Uses alternating readback textures `OutputTextures` to
	 * copy source render target contents to one of two output textures,
	 * apply gamma conversion shaders to that target and then
	 * wait a render tick before accessing the render target and
	 * writing data to `OutputData`
	 */
	void CaptureFrame_RT();

	/* Checks resolution and source of render target. If either has changed,
	 * recreate the output textures
	 */
	void InitRenderTargetCapture(UTextureRenderTarget2D* rt, EOWLOutputType InOutputType);
	/* Returns the resolution of the input texture;
	 * Might be 1px smaller than input RT in each dimension to force even resolution
	 */
	FIntPoint GetInputResolution();


};
