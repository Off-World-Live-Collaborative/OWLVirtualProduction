// Copyright Off World Live Limited 2020-23

#pragma once

#include "CoreMinimal.h"
#include "CompositingElements/CompositingElementPasses.h"
#include "OWLSpoutOutputPass.generated.h"

class FOWLSpoutSender;
/**
 *
 */
UCLASS()
class OWLCOMPOSURE_API UOWLSpoutOutputPass : public UCompositingElementOutput
{
	GENERATED_BODY()

	UOWLSpoutOutputPass();
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="Compositing Pass", meta = (DisplayAfter = "PassName"))
	FString SenderName;

	FString UUID = FGuid::NewGuid().ToString();

	/* Untick this box if gamma SHOULD NOT be corrected to match the viewport gamma -- ie if you have a data /depth pass  */
	UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="Compositing Pass", meta = (DisplayAfter = "PassName", EditCondition = "bEnabled"))
	bool bFixGamma = true;

	virtual void BeginDestroy() override;
	virtual void PostInitProperties() override;

public:
	//~ UCompositingElementOutput interface
	virtual void RelayOutput_Implementation(UTexture* FinalResult, UComposurePostProcessingPassProxy* PostProcessProxy) override;

#if WITH_EDITOR
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
#endif

private:
	const FString DefaultSenderName = "Output Pass Sender";
};
