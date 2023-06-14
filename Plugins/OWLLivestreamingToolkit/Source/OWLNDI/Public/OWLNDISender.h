// Copyright Off World Live Limited, 2020-2022. All rights reserved.

#pragma once

#include "NDIEnums.h"
#include "Engine/TextureRenderTarget2D.h"
#include "AudioMixerDevice.h"

#include "Windows/AllowWindowsPlatformTypes.h"
#include "Processing.NDI.Lib.h"
#include "Processing.NDI.Lib.cplusplus.h"
#include "Windows/HideWindowsPlatformTypes.h"

struct OWLNDI_API FReadbackData
{
	FTexture2DRHIRef ReadbackTexture;
	bool bNeedsResolve = false;
	TArray64<uint8_t> Pixels;
};

class OWLNDI_API FOWLNDISender : public ISubmixBufferListener
{
public:
	FOWLNDISender();
	virtual ~FOWLNDISender();
	bool Init(FString Name, bool ShouldCaptureAudio, FAudioDevice* InAudioDevice = nullptr);

	void DeInit();
	void SendVideoFrame(UTextureRenderTarget2D* SrcTarget, ENDIVideoConversionFormat VideoConversionFormat);
	FString GetSenderName();
	bool IsStreamingAudio();

private:
	void SetResolution_RT(FIntPoint NewResolution, ENDIVideoConversionFormat VideoConversionFormat);
	void SendVideoFrame_RT(UTextureRenderTarget2D* SrcTarget, ENDIVideoConversionFormat VideoConversionFormat);
	void OnNewSubmixBuffer(const USoundSubmix* OwningSubmix, float* AudioData, int32 NumSamples, int32 NumChannels, const int32 SampleRate, double AudioClock) override;

private:
	bool Initialised = false;
	FString SenderName;
	NDIlib_send_instance_t Sender = {nullptr};

	TArray<FReadbackData> Video_ReadbackTextures;
	int32 Video_CurrentReadbackTextureIndex = 0;
	int32 Video_NumReadbackTextures = 2;
	ENDIVideoConversionFormat Video_ConversionFormat = ENDIVideoConversionFormat::NDIVCF_BGRA;
	FIntPoint Video_Resolution;
	FCriticalSection Video_CS;
	bool Video_Initialised = false;

	FCriticalSection Audio_CS;
	FAudioDevice* AudioDevice = nullptr;
	bool Audio_Initialised = false;
	TArray<float> Audio_ConversionBuffer;
};
