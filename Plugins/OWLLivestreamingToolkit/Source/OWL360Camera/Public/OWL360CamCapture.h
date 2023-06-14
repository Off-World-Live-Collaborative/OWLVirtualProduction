// Copyright Off World Live Limited, 2020-2022. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "Camera/CameraActor.h"
#include "OWL360CamCapture.generated.h"

UCLASS(hidecategories = (Collision, Attachment, Actor, CameraActor))
class OWL360CAMERA_API AOWL360CamCapture : public ACameraActor
{
	GENERATED_BODY()

public:
	AOWL360CamCapture(const FObjectInitializer& ObjectInitializer);

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Off World Live 360 Camera", meta = (AllowPrivateAccess = "true"))
	class UOWL360CaptureComponent* CaptureComponent = nullptr;
};
