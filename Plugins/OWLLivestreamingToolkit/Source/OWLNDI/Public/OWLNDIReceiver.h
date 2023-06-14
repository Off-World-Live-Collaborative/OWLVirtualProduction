// Copyright Off World Live Limited, 2020-2022. All rights reserved.

#pragma once

#include "OWLTextureFormats.h"
#include "OWLNDISoundWave.h"
#include "Engine/TextureRenderTarget2D.h"
#include "Windows/AllowWindowsPlatformTypes.h"
#include "Processing.NDI.Lib.h"
#include "Processing.NDI.Lib.cplusplus.h"
#include "Windows/HideWindowsPlatformTypes.h"

class FOWLNDIReceiverShader;

class OWLNDI_API FOWLNDIReceiver
{
public:
	FOWLNDIReceiver();
	~FOWLNDIReceiver();
	bool Init(FString Name, UOWLNDISoundWave* InNDISoundWave = nullptr);
	void DeInit();
	void ReceiveVideoFrame(UTextureRenderTarget2D* DstTarget);
	int32 ReceiveAudioFrame(uint8* PCMData, const int32 SamplesNeeded);

private:
	bool Initialised = false;
	FString ReceiverName;
	NDIlib_recv_instance_t Receiver = {nullptr};
	NDIlib_framesync_instance_t FrameSync = {nullptr};

	FCriticalSection Video_CS;
	bool Video_Initialised = false;

	FCriticalSection Audio_CS;
	bool Audio_Initialised = false;
private:
	void ReceiveVideoFrame_RT(UTextureRenderTarget2D* DstTarget);
	EOWLOutputTextureFormat NDIVideoFormatToString(NDIlib_FourCC_video_type_e VideoFormat);
	TAtomic<uint32> FrameWidth;
	TAtomic<uint32> FrameHeight;
	UOWLNDISoundWave* NDISoundWave = nullptr;
	TSharedPtr<FOWLNDIReceiverShader, ESPMode::ThreadSafe> ReceiverShader;
};
