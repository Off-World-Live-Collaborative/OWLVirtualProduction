// Copyright Off World Live Limited, 2020-2021. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "Engine/TextureRenderTarget2D.h"
#include "GameFramework/Actor.h"

#include "OWLScreenCapturerOptions.h"

#include "OWLScreenCapture.generated.h"

class FOWLScreenCapturer;
struct FOWLScreenCaptureOptions;

UCLASS()
class OWLSCREENCAPTURE_API AOWLScreenCapture: public AActor
{
	GENERATED_BODY()

public:

	AOWLScreenCapture(const FObjectInitializer& ObjectInitializer);
	~AOWLScreenCapture();

	// TODO: we should probably add an option for disabling the annoying yellow boarder
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=OWLScreenCapture, meta =(DisplayName="Capture Settings"))
	FOWLScreenCaptureOptions Options;

	/* Get a list of monitor names in order to be able to set monitor later */
	UFUNCTION(BlueprintCallable, Category=OWLScreenCapture)
	TArray<FString> GetAvailableMonitorNames();

	/* Get a list of window names in order to be able to set monitor later */
	UFUNCTION(BlueprintCallable, Category=OWLScreenCapture)
	TArray<FString> GetAvailableWindowNames();


	/* Sets the monitor. Returns false when monitor not available */
	UFUNCTION(BlueprintCallable, Category=OWLScreenCapture)
	bool SetMonitor(FString Monitor);

	/* Sets the window. Returns false when window of that name not available */
	UFUNCTION(BlueprintCallable, Category=OWLScreenCapture)
	bool SetWindow(FString Window);

	virtual void Destroyed() override;

	/* Static map of all existing capturers mapped to actor ids */
	static TMap<int32, FOWLScreenCapturer*> ActiveEditorCapturers;
protected:
	UPROPERTY(BlueprintReadOnly, Category="OWL Internal")
	int32 CaptureId = -1;
	/* Ensure that MonitorName and WindowName have valid entries */
	void CorrectOptions();
#if WITH_EDITOR
	virtual void PostDuplicate(bool bDuplicateForPIE) override;
#endif
	virtual void PostRegisterAllComponents() override;
	virtual void PostInitProperties() override;
	virtual void Tick(float DeltaTime) override;
	virtual bool ShouldTickIfViewportsOnly() const override;
	bool Initialised = false;

	bool StartCapture();
	void StopCapture();

	bool ActiveCursor = false;
private:
	void InitialiseCapturer();
	FOWLScreenCapturer* Capturer = nullptr;
};
