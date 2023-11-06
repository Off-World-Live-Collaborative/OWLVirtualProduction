#pragma once
#include "VideoEncoder.h"
#include "FOWLEncoderProfiles.generated.h"

UENUM()
enum class EOWLEncoderProfile
{
	P_BASELINE UMETA(DisplayName = "Baseline") ,
	P_CONSTRAINED_BASELINE UMETA(DisplayName = "Constrained Baseline") ,
	P_MAIN UMETA(DisplayName = "Main") ,
	P_HIGH UMETA(DisplayName = "High") ,
	P_HIGH444 UMETA(DisplayName = "High 444 (Professional)") ,
	P_STEREO UMETA(DisplayName ="Stereo"),
};

class FOWLEncoderProfiles
{
public:

	static int ToFFProfileAV1(EOWLEncoderProfile Profile);

	static AVEncoder::FVideoEncoder::H264Profile ToAVEncoderProfile(EOWLEncoderProfile Profile);
};
