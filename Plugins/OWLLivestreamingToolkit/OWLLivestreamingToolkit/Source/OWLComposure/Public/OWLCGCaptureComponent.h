// Copyright Off World Live Limited, 2020-2023. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "OWLCaptureComponent.h"
#include "Engine/Scene.h"
#include "OWLCGCaptureComponent.generated.h"

class UCameraComponent;
class AOWLCGElement;

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class OWLCOMPOSURE_API UOWLCGCaptureComponent : public UOWLCaptureComponent
{
	GENERATED_BODY()

public:
	UOWLCGCaptureComponent(const FObjectInitializer& Init);


	UTexture* Capture(UCameraComponent* Camera, FIntPoint Resolution);

	UPROPERTY()
	TEnumAsByte<ETextureRenderTargetFormat> RTFormat = ETextureRenderTargetFormat::RTF_RGBA16f;

	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	virtual void BeginDestroy() override;

	virtual void OnRegister() override;
	virtual void PostLoad() override;

	/* Set this to a value greater than 0 to merge the override post process settings
	 * below into your output */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = PostProcess, meta=(ClampMin=0,ClampMax=1, UIMin=0, UIMax=1, EditCondition="!bHidePostProcess", EditConditionHides))
	float PostProcessBlendWeight = 0;

	/** Post process settings to use for this camera. Don't forget to check the properties you want to override */
	UPROPERTY(Interp, BlueprintReadWrite, Category = PostProcess, meta=(ShowOnlyInnerProperties, EditCondition="PostProcessBlendWeight>0"))
	struct FPostProcessSettings PostProcessSettings;

	static const int32 UniqueRenderPriority;

	UPROPERTY(VisibleAnywhere, Category = PostProcess)
	bool bHidePostProcess = false;



protected:
	virtual bool CanRenderSceneViewExtension(TSharedRef<ISceneViewExtension, ESPMode::ThreadSafe> SceneViewExtension) override;
	virtual bool GetPostProcessSettingsOverride(FPostProcessSettings& Result, float& BlendWeight) override;
};
