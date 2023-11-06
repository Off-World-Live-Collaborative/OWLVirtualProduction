// Copyright Off World Live Limited, 2020-2023

#pragma once

#include "CoreMinimal.h"
#include "CompositingElement.h"
#include "CameraCalibrationTypes.h"
#include "ActorLayerUtilities.h"
#include "OWLBaseComp.h"
#include "CompositingElements/CompositingElementInputs.h"
#include "OWLCGElement.generated.h"

UENUM(BlueprintType)
enum class EOWLIncludeExclude : uint8
{
	EICE_Exclude UMETA(DisplayName = "Exclude"),
	EICE_Include UMETA(DisplayName = "Include"),
};

USTRUCT(BlueprintType)
struct FOWLActorLayer
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Composure")
	FActorLayer ActorSet;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Composure")
	EOWLIncludeExclude GroupType = EOWLIncludeExclude::EICE_Include;
};

class ULensComponent;
class UOWLCGCaptureComponent;

UCLASS(BlueprintType, Category="OWL Composure")
class OWLCOMPOSURE_API AOWLCGElement : public AOWLBaseComp, public ICompositingInputInterface
{
	GENERATED_BODY()
public:
	AOWLCGElement();
public:
	/** Component used to generate image data for this CG Layer */
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category=OffWorldLive)
	UOWLCGCaptureComponent* CaptureComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category="Composure|Input", DisplayName="Capture Pass Name")
	FName CapturePassName = TEXT("OWL Capture Input");

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Composure|Input")
	TArray<FOWLActorLayer> CaptureActors;

public:
	virtual void BeginDestroy() override;

	virtual void PostInitProperties() override;

	virtual UTexture* GenerateInput_Implementation(UCompositingInputInterfaceProxy* Proxy) override;

	/** Update the state of the Lens Distortion Data Handler, and updates or removes the Distortion MID from the SceneCaptureComponent's post process materials, depending on whether distortion should be applied*/
	UFUNCTION(BlueprintCallable, Category = "Composure|LensDistortion")
	void UpdateDistortion();

	//~ Begin UObject Interface
#if WITH_EDITOR
	virtual void PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent) override;
#endif
	//~ End UObject Interface

protected:
	/** Whether to apply distortion as a post-process effect on this CG Layer */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Composure|LensDistortion")
	bool bApplyDistortion = false;

	/** Structure used to query the camera calibration subsystem for a lens distortion model handler */
	UPROPERTY(EditInstanceOnly, Category = "Composure|LensDistortion", meta=(DisplayName="Lens Component", UseComponentPicker, AllowedClasses = "/Script/CameraCalibrationCore.LensComponent", AllowAnyActor))
	FComponentReference LensComponentPicker;

	/** Value used to augment the FOV of the scene capture to produce a CG image with enough data to distort */
	UPROPERTY(BlueprintReadOnly, Category = "Composure|LensDistortion")
	float OverscanFactor = 1.0f;

	/** Focal length of the target camera before any overscan has been applied */
	UPROPERTY(BlueprintReadOnly, Category = "Composure|LensDistortion")
	float OriginalFocalLength = 35.0f;

	/** Cached distortion MID produced by the Lens Distortion Handler, used to clean up the post-process materials in the case that the the MID changes */
	UPROPERTY()
	TObjectPtr<UMaterialInstanceDynamic> LastDistortionMID = nullptr;

public:
	/** Sets whether distortion should be applied or not */
	void SetApplyDistortion(bool bInApplyDistortion);

	/** Set the Lens Component this CG layer will use to drive distortion on the scene capture */
	void SetLens(ULensComponent* InLens);

private:
	UPROPERTY()
	UTexture* NoCameraTexture = nullptr;

	void UpdateActorsList();
	/* Return true if no non-OWL Comp elements in scene */
	bool SceneOnlyContainsOWLCompElements();

	UPROPERTY()
	bool bHasCheckedParents = false;
};
