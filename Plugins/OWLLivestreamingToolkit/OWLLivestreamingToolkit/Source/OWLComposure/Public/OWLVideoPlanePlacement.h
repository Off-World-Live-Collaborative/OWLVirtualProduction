// Copyright Off World Live Limited 2023

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "OWLVideoPlanePlacement.generated.h"

class UMediaTexture;
class UStaticMesh;
class UMaterial;
class UMaterialInstanceDynamic;

UCLASS(BlueprintType, hidecategories = (Collision, Attachment, Actor, CameraActor))
class OWLCOMPOSURE_API AOWLVideoPlanePlacement : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AOWLVideoPlanePlacement();

	virtual void PostLoad() override;
	virtual void PostInitializeComponents() override;
	virtual void BeginDestroy() override;

	/* When this is ticked, use 'Scale Multiplier' below AND not the mesh component scale to adjust the size of this video plane */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Video Input")
	bool bResolutionControlsScale = false;

	/* When 'Resolution Controls Scale' is ticked, set the aspect ratio of the plane using these resolution settings */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Video Input", meta=(EditCondition="bResolutionControlsScale"))
	FIntPoint Resolution = FIntPoint(1920,1080);

	/* Use this parameter to scale the plane while maintaining the correct aspect ratio*/
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Video Input", meta=(EditCondition="bResolutionControlsScale"))
	float ScaleMultiplier = 1;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Video Input", Meta=(EditCondition="false"))
	float AspectRatio = 1.7777777;

	/* UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Video Input")*/
	UPROPERTY()
	UMediaTexture* MediaInput = nullptr;


#if WITH_EDITOR
public:
	virtual bool ShouldTickIfViewportsOnly() const override;
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
	void OnEndFrameEditor();
#endif

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, Category="Preview Mesh")
	UStaticMeshComponent* MeshComponent = nullptr;

	UPROPERTY()
	UStaticMesh* Mesh = nullptr;

	UPROPERTY()
	UMaterial* OriginalMaterial = nullptr;

	UPROPERTY()
	UMaterialInstanceDynamic* DynamicMaterial = nullptr;


public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	void SetMeshComponentScale();

private:
	FVector LastScale = FVector(1.0, 1, 1);
	FDelegateHandle OnEndFrameHandle;
};
