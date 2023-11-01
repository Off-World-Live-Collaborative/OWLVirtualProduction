#pragma once

#include "CoreMinimal.h"
#include "OWLScreenCapturerOptions.generated.h"

class UTextureRenderTarget2D;

UENUM()
enum class EOWLScreenCaptureType : uint8
{
	SCT_Monitor UMETA(DisplayName = "Monitor Capture"),
	SCT_Window UMETA(DisplayName = "Window Capture"),
	//SCT_Game UMETA(DisplayName = "Game Capture"),
};

USTRUCT(BlueprintType)
struct FOWLScreenCaptureOptions
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = OWLScreenCapture)
	EOWLScreenCaptureType ScreenCaptureType = EOWLScreenCaptureType::SCT_Monitor;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = OWLScreenCapture)
	UTextureRenderTarget2D* RenderTarget = nullptr;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = OWLScreenCapture)
	bool Active = false;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = OWLScreenCapture)
	bool CaptureCursor = false;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = OWLScreenCapture)
	FString MonitorName = "";

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = OWLScreenCapture)
	FString WindowName = "";

	UPROPERTY(VisibleAnywhere, Transient, BlueprintReadOnly, Category = OWLScreenCapture)
	bool bHideRenderTarget = false;
};
