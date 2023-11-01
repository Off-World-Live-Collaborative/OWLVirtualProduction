// Copyright Off World Live Limited, 2020-2022. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "Engine/TextureRenderTarget2D.h"
#include "Components/SceneComponent.h"
#include "ShowFlags.h"
#include "GameTime.h"
#include "Components/SceneCaptureComponent.h"
#include "PostProcessing/OWL360PostProcessSettings.h"
#include "PostProcessing/PostProcessHelpers.h"
#include "OWL360CaptureComponent.generated.h"

class FSceneViewStateInterface;
class UCameraComponent;
struct FMinimalViewInfo;

/* Output texture resolution */
UENUM(BlueprintType)
enum class EStreamResolution_360 : uint8 {
	/* Cubemap: 360x240p; Equirectangular:  480x240p; Dome: 240x240p; */
	RS_360_240p UMETA(DisplayName = "240p"),
	/* Cubemap: 540x360p; Equirectangular:  720x360p; Dome: 360x360p; */
	RS_360_360p UMETA(DisplayName = "360p"),
	/* Cubemap: 720x480p; Equirectangular:  960x480p; Dome: 480x480p; */
	RS_360_480p UMETA(DisplayName = "480p"),
	/* Cubemap: 1080x720p; Equirectangular:  1440x720p; Dome: 720x720p; */
	RS_360_720p UMETA(DisplayName = "720p"),
	/* Cubemap: 1620x1080p; Equirectangular:  2160x1080p; Dome: 1080x1080p; */
	RS_360_1080p UMETA(DisplayName = "1080p"),
	/* Cubemap: 2160x1440p; Equirectangular:  2880x1440p; Dome: 1440x1440p; */
	RS_360_1440p UMETA(DisplayName = "1440p"),
	/* Cubemap: 3240x2160p; Equirectangular:  4320x2160p; Dome: 2160x2160p; */
	RS_360_2160p UMETA(DisplayName = "2160p"),
	/* Custom Resolution */
	RS_360_Custom UMETA(DisplayName = "Custom")
};

// Type of texture output from the 360 cam
UENUM(BlueprintType)
enum class E360ProjectionType : uint8 {
	CT_CubeMap UMETA(DisplayName = "CubeMap"),
	CT_EquiRectangular UMETA(DisplayName = "Equirectangular"),
	CT_DomeMaster UMETA(DisplayName = "DomeMaster"),
	CT_MirrorDome UMETA(DisplayName = "Mirror Dome (Beta)", ToolTip="A mirror dome shader for projecting a 2D image on a spherical mirror", Experimental)
};

/*

The Cubemap cameras are six:
in the order specified here:
https://github.com/google/spatial-media/blob/master/docs/spherical-video-v2-rfc.md#cubemap-projection-box-cbmp
These are written left-to-right, top-to-bottom
ie:
[ 0, 1, 2 ]
[ 3, 4, 5 ]

Where:
0: Right
1: Left
2: Up
3: Down
4: Front
5: Back
*/

UCLASS(Blueprintable, hidecategories = (Collision, Object, Physics, SceneComponent, Mobility, Tags, Activation, Cooking, Rendering), ClassGroup = Rendering, meta = (BlueprintSpawnableComponent))
class OWL360CAMERA_API UOWL360CaptureComponent : public USceneComponent
{
	GENERATED_BODY()

public:
	UOWL360CaptureComponent(const FObjectInitializer& ObjectInitializer);
	virtual void PostLoad() override;

	/**
	* Render target to render the 360 projection onto
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Off World Live Capture Settings")
	UTextureRenderTarget2D* TextureTarget = nullptr;

	/* Texture resolution presets for camera render output */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Off World Live Capture Settings")
	EStreamResolution_360 StreamResolution = EStreamResolution_360::RS_360_1440p;

	/* Texture resolution for camera render output */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Off World Live Capture Settings", meta=(EditCondition = "StreamResolution == EStreamResolution_360::RS_360_Custom", EditConditionHides))
	FIntPoint OutputResolution = FIntPoint(1920, 1080);

	/* Output texture format */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Off World Live Capture Settings", DisplayName = "360 Projection Type")
	E360ProjectionType ProjectionType360 = E360ProjectionType::CT_CubeMap;

	/* Output texture format */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Off World Live Capture Settings", meta=(EditCondition = "ProjectionType360 == E360ProjectionType::CT_DomeMaster", EditConditionHides))
	int Angle = 180;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Off World Live Capture Settings", meta=( EditCondition = "ProjectionType360 == E360ProjectionType::CT_MirrorDome", EditConditionHides))
	FRotator DomeProjectorRotation = FRotator(0, 0, 0);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Off World Live Capture Settings", meta=( EditCondition = "ProjectionType360 == E360ProjectionType::CT_MirrorDome", EditConditionHides))
	FVector DomeProjectorLocation = FVector(0,0,0);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Off World Live Capture Settings", meta=( EditCondition = "ProjectionType360 == E360ProjectionType::CT_MirrorDome", EditConditionHides))
	float  DomePixelAspectRatio = 1.77777777;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Off World Live Capture Settings", meta=( EditCondition = "ProjectionType360 == E360ProjectionType::CT_MirrorDome", EditConditionHides))
	FRotator DomeRotatorOffset = FRotator(0,0,0);

	/* FOV of the dome mirror */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Off World Live Capture Settings", meta=(ClampMin = "5", ClampMax="150", UIMin="5", UIMax="150", EditCondition = "ProjectionType360 == E360ProjectionType::CT_MirrorDome", EditConditionHides))
	int DomeFOV = 90;

	/* Buffer around image border (requirement for Facebook streaming) */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Off World Live Capture Settings", meta = (ClampMin = "0.0", ClampMax = "100.0", UIMin = "0.0", UIMax = "100.0", EditCondition = "ProjectionType360 == E360ProjectionType::CT_CubeMap"))
	float CubemapBleedPercent = 1.0f;

	/* Type of Post Process applied to the output texture */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Off World Live Capture Settings")
	E360PostProcessPipeline PostProcessPipeline = E360PostProcessPipeline::PPM_Bloom;

	UPROPERTY(EditAnywhere, interp, Category = "Off World Live Capture Settings")
	TArray<struct FEngineShowFlagsSetting> ShowFlagSettings;

	// If changing these post-processing settings at run-time, remember to call the AOffWorldLiveThreeSixtyCamPawn::RefreshOffWorldPostProcessSettings() function afterwards to apply the settings
	UPROPERTY(interp, Category = "Off World Live 360 Post Process Settings", DisplayName = "360 Post Process Settings", Meta = (ShowOnlyInnerProperties))
	struct FOWL360PostProcessSettings PostProcessSettings360;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Off World Live 360 Post Process Settings", meta = (ClampMin = "0.0", ClampMax = "1.0", UIMin = "0.0", UIMax = "1.0"))
	float PostProcessBlendWeight = 1.0f;

	/** Tick if you want to pause rendering to the render target */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Off World Live Capture Settings")
	bool PauseRendering = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Off World Live Capture Settings|Advanced")
	bool RenderFrontFace = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Off World Live Capture Settings|Advanced")
	bool RenderBackFace = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Off World Live Capture Settings|Advanced")
	bool RenderLeftFace = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Off World Live Capture Settings|Advanced")
	bool RenderRightFace = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Off World Live Capture Settings|Advanced")
	bool RenderTopFace = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Off World Live Capture Settings|Advanced")
	bool RenderBottomFace = true;

	/** Scales the distance used by LOD. Set to values greater than 1 to cause the scene capture to use lower LODs than the main view to speed up the scene capture pass. */
	UPROPERTY(EditAnywhere, Category = "Off World Live Capture Settings|Advanced", meta = (UIMin = ".1", UIMax = "10"))
	float LODDistanceFactor = 1.0f;

	/** if > 0, sets a maximum render distance override.  Can be used to cull distant objects from a reflection if the reflecting plane is in an enclosed area like a hallway or room */
	UPROPERTY(EditAnywhere, Category = "Off World Live Capture Settings|Advanced", meta = (UIMin = "100", UIMax = "10000"))
	float MaxViewDistanceOverride = -1;

	/** Tick if you want to render selected primitives only */
	UPROPERTY(EditAnywhere, BluePrintReadWrite, Category = "Off World Live Capture Settings|Alpha Settings")
	bool UseShowOnlyList = false;

	/** The components won't rendered by current component.*/
	UPROPERTY()
	TArray<TWeakObjectPtr<UPrimitiveComponent> > HiddenComponents;

	/** The actors to hide in the scene capture. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Off World Live Capture Settings|Alpha Settings")
	TArray<AActor*> HiddenActors;

	/** The only components to be rendered by this scene capture, if PrimitiveRenderMode is set to UseShowOnlyList. */
	UPROPERTY()
	TArray<TWeakObjectPtr<UPrimitiveComponent> > ShowOnlyComponents;

	/** The only actors to be rendered by this scene capture, if PrimitiveRenderMode is set to UseShowOnlyList.*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Off World Live Capture Settings|Alpha Settings")
	TArray<AActor*> ShowOnlyActors;

	/** By default we invert the ue4's default alpha value of captured textures - you can disable it here */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Off World Live Capture Settings|Alpha Settings")
	bool InvertAlpha = true;

	/** Tick to enable plugins like DLSS -- warning certain anti-aliasing settings may cause crashes when screen percentage on this actor is adjusted. WARNING: this feature is experimental and
		may cause crashes especially in conjuction with the Seamless Bloom!! */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Off World Live Capture Settings|Advanced", Experimental, DisplayName="Enable Upscaling (Experimental)")
	bool bEnableUpscaling = false;

	/** ScreenPercentage affects impact of upscaling (ie DLSS, TAA ...) */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Off World Live Capture Settings|Advanced", Experimental, meta = (UIMin = "25", UIMax = "200", ClampMin="25", ClampMax="200", EditCondition="bEnableUpscaling"))
	float ScreenPercentage = 100;

	/** Secondary Screen Percentage affects impact of upscaling (ie DLSS, TAA ...) */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Off World Live Capture Settings|Advanced", Experimental, meta = (UIMin = "25", UIMax = "200", ClampMin="25", ClampMax="200", EditCondition="bEnableUpscaling"))
	float SecondaryScreenPercentage = 100;

public:
	UFUNCTION(BlueprintPure, Category = "OWL360Capture")
	UCameraComponent* GetTargetCamera() const;

	UFUNCTION(BlueprintCallable, Category = "OWL360Capture")
	FIntPoint GetStreamResolutionInt();

	/** Adds the component to our list of hidden components. */
	UFUNCTION(BlueprintCallable, Category = "OWL360Capture")
	void HideComponent(UPrimitiveComponent* InComponent);

	/**
	 * Adds all primitive components in the actor to our list of hidden components.
	 * @param bIncludeFromChildActors Whether to include the components from child actors
	 */
	UFUNCTION(BlueprintCallable, Category = "OWL360Capture")
	void HideActorComponents(AActor* InActor, const bool bIncludeFromChildActors = false);

	/** Adds the component to our list of show-only components. */
	UFUNCTION(BlueprintCallable, Category = "OWL360Capture")
	void ShowOnlyComponent(UPrimitiveComponent* InComponent);

	/**
	* Adds all primitive components in the actor to our list of show-only components.
	* @param bIncludeFromChildActors Whether to include the components from child actors
	*/
	UFUNCTION(BlueprintCallable, Category = "OWL360Capture")
	void ShowOnlyActorComponents(AActor* InActor, const bool bIncludeFromChildActors = false);

	/** Removes a component from the Show Only list. */
	UFUNCTION(BlueprintCallable, Category = "OWL360Capture")
	void RemoveShowOnlyComponent(UPrimitiveComponent* InComponent);

	/**
	* Removes an actor's components from the Show Only list.
	* @param bIncludeFromChildActors Whether to remove the components from child actors
	*/
	UFUNCTION(BlueprintCallable, Category = "OWL360Capture")
	void RemoveShowOnlyActorComponents(AActor* InActor, const bool bIncludeFromChildActors = false);

	/** Clears the Show Only list. */
	UFUNCTION(BlueprintCallable, Category = "OWL360Capture")
	void ClearShowOnlyComponents();

	/** Clears the hidden list. */
	UFUNCTION(BlueprintCallable, Category = "OWL360Capture")
	void ClearHiddenComponents();

public:
	FEngineShowFlags ShowFlags;
	int32 ViewModeIndex;
	float EffectiveBleedPercent = CubemapBleedPercent;
	float FOVAngle = 90;
public:
	DECLARE_MULTICAST_DELEGATE(FOnRenderFinished);
	FOnRenderFinished OnRenderFinished;

	FSceneViewStateInterface* GetViewState(int32 ViewIndex, const ERHIFeatureLevel::Type FeatureLevel);
	static void AddReferencedObjects(UObject* InThis, FReferenceCollector& Collector);

	virtual void BeginDestroy() override;
	virtual void OnRegister() override;

	int32 GetStreamResolutionX(EStreamResolution_360 Res) const;
	int32 GetStreamResolutionY(EStreamResolution_360 Res) const;

	bool UsingShowOnly() const;
	bool UsingHideOnly() const;

#if WITH_EDITOR
	virtual void PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent) override;
#endif

protected:
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	void RenderScene();
	void DrawFace(
		int32 FaceIndex,
		FMinimalViewInfo BaseViewInfo,
		FGameTime Time);
	void SetupViewFamily(
		FSceneViewFamily& ViewFamily,
		const int32 FaceIndex,
		const FMinimalViewInfo& BaseViewInfo);
	bool PreRender();
	bool SetupTextureTarget();
	bool SetupInternalRenderTargets(const EPixelFormat PixelFormat);
	void SetProjectionType();
	void SetFOVAngle();
	void UpdateShowFlags();
	void DomeFaceControl();
	/**
	 * The view state holds persistent scene rendering state and enables occlusion culling in scene captures.
	 * NOTE: This object is used by the rendering thread. When the game thread attempts to destroy it, FDeferredCleanupInterface will keep the object around until the RT is done accessing it.
	 * NOTE: It is not safe to put a FSceneViewStateReference in a TArray, which moves its contents around without calling element constructors during realloc.
	 */
	TIndirectArray<FSceneViewStateReference> ViewStates;
	UPROPERTY(Transient)
	TArray<UTextureRenderTarget2D*> InternalRTs;
	UPROPERTY()
	UStaticMesh* CameraMesh = nullptr;


private:
	E360ProjectionType ActiveProjectionType = E360ProjectionType::CT_CubeMap;
	// regardless of the output format, we increase the FOV
	// by this amount in order to compensate for artifacts
	// such as motion blur
	float OverscanPercent = 1.0f;
	FIntPoint PanelSize;
	const FVector ZAxis = FVector(0, 0, 1);
	const FVector YAxis = FVector(0, 1, 0);
	const FQuat FaceOrientations[6] = {
		{ZAxis, PI / 2}, // right
		{ZAxis, -PI / 2}, // left
		{YAxis, -PI / 2}, // up,
		{YAxis, PI / 2}, // down
		{ZAxis, 0}, // front
		{ZAxis, -PI} // back
	};
	// Store for instance of Shader Executor
	// for converting cube to equirectangular projection
	class FCube2EquiExecutor* EquiShader = nullptr;
	class FOffWorldPostProcess* BloomShader = nullptr;

	bool FaceAlreadyClear[6] = {
		false,
		false,
		false,
		false,
		false,
		false};

	FRotator DomeShaderRotator = FRotator(0,0,0);

	FPostProcessSettings PostProcessSettings;
	FPostProcessSettings RendererPostProcessSettings;

	FLinearColor OWLFilterTints[6];
	float OWLFilterSizes[6];
	float OWLBloomIntensity;
	float OWLBloomThreshold;
	float OWLBloomSizeScale;

	bool WrongAttachmentWarningIssued = false;
};
