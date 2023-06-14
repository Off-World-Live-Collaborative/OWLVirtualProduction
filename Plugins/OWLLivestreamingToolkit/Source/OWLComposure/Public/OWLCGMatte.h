#pragma once

#include "CoreMinimal.h"
#include "OWLCGElement.h"

#include "OWLCGMatte.generated.h"

UENUM(BlueprintType)
enum class EOWLComposureMatteType : uint8
{
	CMT_HOLDOUT UMETA(DisplayName="Holdout"),
	CMT_GARBAGE_MATTE UMETA(DisplayName="Garbage Matte"),
};


UCLASS(BlueprintType, Category="OWL Composure")
class AOWLCGMatte : public AOWLCGElement
{
	GENERATED_BODY()
public:
	AOWLCGMatte(const FObjectInitializer& ObjectInitializer);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Matte Pass", meta=(ToolTip="Holdout makes the current selection white and the background black, Garbage Matte is the reverse"))
	EOWLComposureMatteType MatteType = EOWLComposureMatteType::CMT_HOLDOUT;

public:

#if WITH_EDITOR
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
#endif

	virtual void Tick(float DeltaSeconds) override;
private:
	void UpdateVisualisationType();
};