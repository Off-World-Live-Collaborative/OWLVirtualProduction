// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CompositingElements/CompositingElementPasses.h"
#include "OWLScreenCapturerOptions.h"
#include "OWLScreenCaptureInputPass.generated.h"

class FOWLScreenCapturer;

UCLASS()
class OWLCOMPOSURE_API UOWLScreenCaptureInputPass : public UCompositingElementInput
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	UOWLScreenCaptureInputPass();
	~UOWLScreenCaptureInputPass();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=OWLScreenCapture, meta =(AllowPrivateAccess = "true", DisplayName="Capture Settings"))
	FOWLScreenCaptureOptions Options;


	virtual UTexture* GenerateInput_Implementation() override;
	virtual void OnDisabled_Implementation() override;

protected:
	virtual void BeginDestroy() override;

private:
	void OnEngineFrameEnd();
	void OnEndPlay();
	void Initialise();
	void GenerateRenderTarget();

	// because screen capture requires a start/stop
	// we tick up frames
	int64 FrameCount = 0;
	int64 LastRenderedFrame = 0;
	bool bAwaitingStartup = false;

	FDelegateHandle OnFrameEndHandle;
	FDelegateHandle OnEndPlayHandle;
	FOWLScreenCapturer* Capturer = nullptr;

};
