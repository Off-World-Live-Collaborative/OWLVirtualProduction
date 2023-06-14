// Copyright Off World Live Limited, 2020-2022. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "VideoEncoder.h"
#include "MediaPacket.h"
#include "VideoEncoderInput.h"
#include "VideoCommon.h"
#include "Rendering/SlateRenderer.h"

class SWindow;

class IOWLVideoEncoderListener
{
public:
	virtual void OnMediaSample(const AVEncoder::FMediaPacket& Sample) = 0;
};

struct HardwareEncoderSettings
{
	int Height = 1080;
	int Width = 1920;
	int MaxBitrate = 10000;
	int TargetBitrate = 5000;
	int MaxFramerate = 60;
	int QMax = 25;
	int QMin = 15;
	int FramesPerIframe = 30;
	AVEncoder::FVideoEncoder::H264Profile Profile =AVEncoder::FVideoEncoder::H264Profile::HIGH;
	AVEncoder::FVideoEncoder::RateControlMode RateControlMode =AVEncoder::FVideoEncoder::RateControlMode::CBR;

};

// Based on GameplayMediaEncoder in Engine/Source/Runtime
class FOWLVideoEncoder
{
public:

	class UTextureRenderTarget2D* SourceRenderTarget;

	/**
	 * Get the singleton
	 */
	static FOWLVideoEncoder * Get();
	/* remove the singleton */
	static void CleanUp();

	~FOWLVideoEncoder();

	bool RegisterListener(IOWLVideoEncoderListener* Listener);
	void UnregisterListener(IOWLVideoEncoderListener* Listener);

	void EndStream();

	bool Initialize(HardwareEncoderSettings Settings);
	bool UpdateSettings(HardwareEncoderSettings Settings);
	void Shutdown();

	void ProcessVideoFrame_RT(class UTextureRenderTarget2D* FrameTexture, FTimespan Now, bool bIsFirstFrame);

	AVEncoder::FVideoConfig GetVideoConfig() const { return VideoConfig; }
private:
	int FrameCount = 0;

	// Private to control how our single instance is created
	FOWLVideoEncoder();

	HardwareEncoderSettings VideoSettings;

	void OnEncodedVideoFrame(uint32 LayerIndex, const TSharedPtr<AVEncoder::FVideoEncoderInputFrame> Frame, const AVEncoder::FCodecPacket& Packet);
	TSharedPtr<AVEncoder::FVideoEncoderInputFrame> ObtainInputFrame();
	void CopyTexture(const FTexture2DRHIRef& SourceTexture, FTexture2DRHIRef& DestinationTexture) const;

	AVEncoder::FVideoEncoder::FLayerConfig PrepareLayerConfig(HardwareEncoderSettings Settings);

	FCriticalSection ListenersCS;
	TArray<IOWLVideoEncoderListener*> Listeners;
	FCriticalSection VideoProcessingCS;

	AVEncoder::FVideoConfig VideoConfig;
	TUniquePtr<AVEncoder::FVideoEncoder> VideoEncoder;
	TSharedPtr<AVEncoder::FVideoEncoderInput> VideoEncoderInput;

	uint64 NumCapturedFrames = 0;
	FTimespan StartTime = 0;
	FTimespan LastVideoInputTimestamp = 0;
	FThreadSafeBool bDimensionsChanged = false;

	FThreadSafeBool bStreamEnding = false;
	FThreadSafeBool bStreamEnded = false;

	friend class FMetadataModule;
	static FOWLVideoEncoder* Singleton;

	TMap<TSharedPtr<AVEncoder::FVideoEncoderInputFrame>, FTexture2DRHIRef> FrameTextures;
};
