// Copyright Off World Live Limited 2023

#pragma once

#include "CoreMinimal.h"
#include "OWLVideoPlanePlacement.h"
#include "CompositingElements/CompositingElementPasses.h"
#include "CompositingElements/CompositingMaterialPass.h"
#include "Camera/CameraActor.h"
#include "Engine/StaticMeshActor.h"
#include "OWLPlaneTransformPass.generated.h"

class ACameraActor;
class UTexture;
class UComposurePostProcessingPassProxy;

struct FPlaneTransformParameters
{
	float FOVExponent =1;
	FVector CameraForward;
	FVector CameraRight;
	FVector CameraUp;
	FVector PlaneNormal;
	FVector PlaneRight;
	FVector PlaneUp;
	FVector PlaneCenter;

	void SetParams(FCompositingMaterial &Material);
};

struct FTransformParameterBackBuffer
{
	int Size = 0;
	int LastReadIndex = 0;
	int InitialFillCount = -1;
	int LastWriteIndex = -1;
	int FramesBehind = 0;
	TArray<FPlaneTransformParameters> Data;

	void Init(int Size, int FramesBehind);

	void Add(FPlaneTransformParameters Params);
	bool Read(FPlaneTransformParameters &Output);
};
/**
 *
 */
UCLASS(BlueprintType, Blueprintable)
class OWLCOMPOSURE_API UOWLPlaneTransformPass : public UCompositingElementTransform
{
	GENERATED_BODY()

public:
	UOWLPlaneTransformPass();
	~UOWLPlaneTransformPass();

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Compositing Pass", meta = (DisplayAfter = "PassName", EditCondition = "bEnabled"))
	float RenderScale = 1.f;

	/* Set a plane to attach the media plate to in the scene - will take aspect ratio from scale */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Compositing Pass", meta = (DisplayAfter = "PassName", EditCondition = "bEnabled"))
	AOWLVideoPlanePlacement* Plane = nullptr;

	/* Set a reference to a camera actor in the scene instead of using the camera inherited from the Composure pass */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Compositing Pass", meta = (DisplayAfter = "PassName", EditCondition = "bEnabled"))
	ACameraActor* CameraOverride = nullptr;

	/* Number of frames to run behind. By default, with deferred rendering this is 1 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Compositing Pass", meta = (DisplayAfter = "PassName", EditCondition = "bEnabled", UIMin=0, UIMax=10, ClampMin=0, ClampMax=10))
	int FrameDelay = 0;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Compositing Pass", meta = (ShowOnlyInnerProperties, DisplayAfter = "PassName", EditCondition = "bEnabled"))
	FCompositingMaterial TransformMaterial;

protected:
	virtual void OnFrameBegin_Implementation(bool bCameraCutThisFrame) override;
	virtual void OnFrameEnd_Implementation() override;
	virtual UTexture* ApplyTransform_Implementation(UTexture* Input, UComposurePostProcessingPassProxy* PostProcessProxy, ACameraActor* TargetCamera) override;
	virtual void PostInitProperties() override;
#if WITH_EDITOR
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
#endif

protected:
	UPROPERTY()
	UMaterialInstanceDynamic* MID = nullptr;

	UPROPERTY()
	UMaterialInterface* BaseMat = nullptr;

	void CreateMID();

private:
	void RecordCameraPlaneInfo(ACameraActor* TargetCamera);
	void SetPlaneParameters(ACameraActor* TargetCamera, FPlaneTransformParameters& Params);
	void SetCameraParameters(ACameraActor* TargetCamera, FPlaneTransformParameters& Params);
	TArray<FVector> CameraLocations;
	TArray<FRotator> CameraRotations;
	FTransformParameterBackBuffer BackBuffer;
};

