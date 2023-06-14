#pragma once
#include "CoreMinimal.h"
#include "NDIEnums.h"
#include "CompositingElements/CompositingElementPasses.h"
#include "OWLNDIOutputPass.generated.h"

class FOWLNDISender;

UCLASS()
class OWLCOMPOSURE_API UOWLNDIOutputPass : public UCompositingElementOutput
{
	GENERATED_BODY()

	UOWLNDIOutputPass();
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="NDI")
	FString SenderName = TEXT("OWL NDI Pass");

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = OWLNDISender)
	ENDIVideoConversionFormat VideoConversionFormat = ENDIVideoConversionFormat::NDIVCF_BGRA;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="NDI")
	bool bCaptureAudio = false;


public:
	virtual void RelayOutput_Implementation(UTexture* FinalResult, UComposurePostProcessingPassProxy* PostProcessProxy) override;

	static bool NDIModuleLoaded();

	virtual void BeginDestroy() override;
private:
	FString UUID = FGuid::NewGuid().ToString();
};
