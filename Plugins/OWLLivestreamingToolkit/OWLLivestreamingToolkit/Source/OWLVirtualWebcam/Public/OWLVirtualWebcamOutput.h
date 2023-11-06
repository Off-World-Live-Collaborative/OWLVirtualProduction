// Copyright Off World Live Limited, 2020-2021. All rights reserved.

#pragma once

#include "softcam.h"

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Tools/OWLImageInput.h"
#include "OWLVirtualWebcamOutput.generated.h"


UCLASS()
class OWLVIRTUALWEBCAM_API AOWLVirtualWebcamOutput : public AActor
{
	GENERATED_BODY()

public:
	AOWLVirtualWebcamOutput(const FObjectInitializer& ObjectInitializer);
	~AOWLVirtualWebcamOutput();

public:
	/* Aspect Ratio must be 4:3 (works for all webcam software) or 16:9 (works for some webcam software) */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Virtual Webcam Settings")
	UTextureRenderTarget2D* InputRenderTarget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Virtual Webcam Settings")
	bool Active = false;

	/* Launches the OWL Virtual Webcam installer automatically if it has not
	 * Been installed on this machine */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Virtual Webcam Settings")
	bool LaunchInstallerWhenRequired = true;

protected:
	virtual void Tick(float DeltaTime) override;
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
	virtual bool ShouldTickIfViewportsOnly() const override;

private:
	UTextureRenderTarget2D* InitRenderTarget = nullptr;
	OWLImageInput* Input = nullptr;
	scCamera Softcam;
	bool Initialised = false;
	static bool ClosedEditorWebcam;

	const float AR_16_9 = 16.0/9.0;
	const float AR_4_3 = 4.0/3.0;

private:
	bool ShouldApplyWatermark(const UWorld* World) const;
	void Start();
	void Stop(bool KeepActive = false);
	void Restart();
	bool LaunchInstaller();
};
