#pragma once
#include "OWLNDIReceiverManager.h"
#include "CompositingElements/CompositingElementPasses.h"

#include "OWLNDIInputPass.generated.h"


UCLASS(Blueprintable)
class OWLCOMPOSURE_API UOWLNDIInputPass : public UCompositingElementInput
{
	GENERATED_BODY()

	UOWLNDIInputPass();

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="OWL")
	FOWLNDIReceiverInterface Receiver;

	virtual UTexture* GenerateInput_Implementation() override;
	virtual void BeginDestroy() override;
private:

	void SetupRenderTarget();
	void ShutdownReceiver();
};
