// Copyright Off World Live Limited, 2020-2022. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "Engine/TextureRenderTarget2D.h"
#include "Components/SceneComponent.h"
#include "Widgets/SWindow.h"
#include "Widgets/SVirtualWindow.h"
#include "Input/HittestGrid.h"
#include "ShowFlags.h"
#include "Materials/Material.h"
#include "Components/SceneCaptureComponent.h"
#include "OWLCaptureComponent.generated.h"

class FSceneViewStateInterface;
class UCameraComponent;
struct FMinimalViewInfo;
class FWidgetRenderer;
class IBlendableInterface;
class ISceneViewExtension;

UENUM(BlueprintType)
enum class EOWLOutputBufferVisualisation : uint8
{
	BV_None UMETA(DisplayName="None"),
	BV_BaseColor UMETA(DisplayName="Base Color"),
	BV_CustomDepth UMETA(DisplayName="Custom Depth"),
	BV_CustomStencil UMETA(DisplayName="Custom Stencil"),
	BV_FinalImage UMETA(DisplayName="Final Image"),
	BV_ShadingModel UMETA(DisplayName="ShadingModel"),
	BV_MaterialAO UMETA(DisplayName="Material Ambient Occlusion"),
	BV_Metallic UMETA(DisplayName="Metallic"),
	BV_Opacity UMETA(DisplayName="Opacity"),
	BV_Roughness UMETA(DisplayName="Roughness"),
	BV_Anisotropy UMETA(DisplayName="Ansiotropy"),
	BV_SceneColor UMETA(DisplayName="Scene Color"),
	BV_SceneDepth UMETA(DisplayName="Scene Depth"),
	BV_SeparateTranslucencyRGB UMETA(DisplayName="Separate Translucency RGB"),
	BV_SeparateTranslucencyA UMETA(DisplayName="Separate Translucency Alpha"),
	BV_Specular UMETA(DisplayName="Specular"),
	BV_SubsurfaceColor UMETA(DisplayName="Subsurface Color"),
	BV_WorldNormal UMETA(DisplayName="World Normal"),
	BV_WorldTangent UMETA(DisplayName="World Tangent"),
	BV_AmbientOcclusion UMETA(DisplayName="Ambient Occlusion"),
	BV_CustomDepthWorldUnits UMETA(DisplayName="Custom Depth World Units"),
	BV_SceneDepthWorldUnits UMETA(DisplayName="Scene Depth World Units"),
	BV_Velocity UMETA(DisplayName="Velocity"),
	BV_PreTonemapHDRColor UMETA(DisplayName="Pre-Tonemap HDR Color"),
	BV_PostTonemapHDRColor UMETA(DisplayName="Post-Tonemap HDR Color"),
	BV_MattePass UMETA(DisplayName="Matte Pass (Hold Out)"),
	BV_MattePassInverted UMETA(DisplayName="Matte Pass (Garbage)"),
};


UCLASS(Blueprintable, hidecategories = (Collision, Object, Physics, SceneComponent, Mobility, Tags, Activation, Cooking, Rendering), ClassGroup = Rendering, meta = (BlueprintSpawnableComponent))
class OWLCAMERA_API UOWLCaptureComponent : public USceneComponent
{
	GENERATED_BODY()

public:
	UOWLCaptureComponent(const FObjectInitializer& ObjectInitializer);

	/**
	* Render target to render into and send to Spout
	* If left unset the render target will be generated automatically
	*/
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Off World Live Capture Settings", meta=(EditCondition="!bUseRTOverride", EditConditionHides))
	TObjectPtr<UTextureRenderTarget2D> TextureTarget = nullptr;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Off World Live Capture Settings" , meta=(EditCondition="!bHideBufferOption", EditConditionHides))
	EOWLOutputBufferVisualisation VisualisationType = EOWLOutputBufferVisualisation::BV_None;

	/**
	* Min: 64px, Max: 7680
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Off World Live Capture Settings", meta = (NoSpinbox=true, EditCondition="!bUseRTOverride", EditConditionHides))
	int ResolutionX = 1920;

	/**
	* Min: 64px, Max: 4320
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Off World Live Capture Settings", meta= (NoSpinbox=true, EditCondition="!bUseRTOverride", EditConditionHides))
	int ResolutionY = 1080;

	UPROPERTY(EditAnywhere, interp, Category = "Off World Live Capture Settings")
	TArray<struct FEngineShowFlagsSetting> ShowFlagSettings;

	/** Tick if you want to pause rendering to the render target */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Off World Live Capture Settings")
	bool PauseRendering = false;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Off World Live Capture Settings|UMG Rendering", meta=(EditCondition="!bUseRTOverride", EditConditionHides))
	bool RenderHUD = false;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Off World Live Capture Settings|UMG Rendering", meta=(EditCondition="!bUseRTOverride", EditConditionHides))
	TSubclassOf<class UUserWidget> WidgetType;

	UPROPERTY()
	TObjectPtr<UUserWidget> WidgetToRender = nullptr;

	/** Tick if you want to render selected primitives only */
	UPROPERTY(EditAnywhere, BluePrintReadWrite, Category = "Off World Live Capture Settings|Alpha Settings", meta=(EditCondition="!bUseRTOverride", EditConditionHides))
	bool UseShowOnlyList = false;

	/** The components won't rendered by current component.*/
	UPROPERTY()
	TArray<TWeakObjectPtr<UPrimitiveComponent> > HiddenComponents;

	/** The actors to hide in the scene capture. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Off World Live Capture Settings|Alpha Settings", meta=(EditCondition="!bUseRTOverride", EditConditionHides))
	TArray<AActor*> HiddenActors;

	/** Rendering Scene view extensions can be important for correctly rendering landscapes etc, but can often cause unnecessary re-renders
	 when they are only expected to be executed in the viewport rendering cycle */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Off World Live Capture Settings|Render Settings")
	bool bRenderSceneViewExtensions = true;

	/** The only components to be rendered by this scene capture, if PrimitiveRenderMode is set to UseShowOnlyList. */
	UPROPERTY()
	TArray<TWeakObjectPtr<UPrimitiveComponent> > ShowOnlyComponents;

	/** The only actors to be rendered by this scene capture, if PrimitiveRenderMode is set to UseShowOnlyList.*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Off World Live Capture Settings|Alpha Settings", meta=(EditCondition="!bUseRTOverride", EditConditionHides))
	TArray<AActor*> ShowOnlyActors;

	/** By default we invert the ue4's default alpha value of captured textures - you can disable it here */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Off World Live Capture Settings|Alpha Settings")
	bool InvertAlpha = true;

	/** Scales the distance used by LOD. Set to values greater than 1 to cause the scene capture to use lower LODs than the main view to speed up the scene capture pass. */
	UPROPERTY(EditAnywhere, Category = "Off World Live Capture Settings|Advanced", meta = (UIMin = ".1", UIMax = "10"))
	float LODDistanceFactor = 1.0f;

	/** if > 0, sets a maximum render distance override.  Can be used to cull distant objects from a reflection if the reflecting plane is in an enclosed area like a hallway or room */
	UPROPERTY(EditAnywhere, Category = "Off World Live Capture Settings|Advanced", meta = (UIMin = "100", UIMax = "10000"))
	float MaxViewDistanceOverride = -1;

	/** Tick to enable plugins like DLSS -- warning certain anti-aliasing settings may cause crashes when screen percentage on this actor is adjusted */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Off World Live Capture Settings|Advanced")
	bool bEnableUpscaling = false;

	/** ScreenPercentage affects impact of upscaling (ie DLSS, TAA ...) */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Off World Live Capture Settings|Advanced", meta = (UIMin = "25", UIMax = "200", ClampMax="200", ClampMin="25", EditCondition="bEnableUpscaling"))
	float ScreenPercentage = 100;

	/** Secondary ScreenPercentage affects impact of upscaling (ie DLSS, TAA ...) */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Off World Live Capture Settings|Advanced", meta = (UIMin = "25", UIMax = "200", ClampMax="200", ClampMin="25", EditCondition="bEnableUpscaling"))
	float SecondaryScreenPercentage = 100;

public:
	UFUNCTION(BlueprintPure, Category = "OWLCapture")
	virtual UCameraComponent* GetTargetCamera() const;

	/** Adds the component to our list of hidden components. */
	UFUNCTION(BlueprintCallable, Category = "OWLCapture")
	void HideComponent(UPrimitiveComponent* InComponent);

	/**
	 * Adds all primitive components in the actor to our list of hidden components.
	 * @param bIncludeFromChildActors Whether to include the components from child actors
	 */
	UFUNCTION(BlueprintCallable, Category = "OWLCapture")
	void HideActorComponents(AActor* InActor, const bool bIncludeFromChildActors = false);

	/** Adds the component to our list of show-only components. */
	UFUNCTION(BlueprintCallable, Category = "OWLCapture")
	void ShowOnlyComponent(UPrimitiveComponent* InComponent);

	/**
	* Adds all primitive components in the actor to our list of show-only components.
	* @param bIncludeFromChildActors Whether to include the components from child actors
	*/
	UFUNCTION(BlueprintCallable, Category = "OWLCapture")
	void ShowOnlyActorComponents(AActor* InActor, const bool bIncludeFromChildActors = false);

	/** Removes a component from the Show Only list. */
	UFUNCTION(BlueprintCallable, Category = "OWLCapture")
	void RemoveShowOnlyComponent(UPrimitiveComponent* InComponent);

	/**
	* Removes an actor's components from the Show Only list.
	* @param bIncludeFromChildActors Whether to remove the components from child actors
	*/
	UFUNCTION(BlueprintCallable, Category = "OWLCapture")
	void RemoveShowOnlyActorComponents(AActor* InActor, const bool bIncludeFromChildActors = false);

	/** Clears the Show Only list. */
	UFUNCTION(BlueprintCallable, Category = "OWLCapture")
	void ClearShowOnlyComponents();

	/** Clears the hidden list. */
	UFUNCTION(BlueprintCallable, Category = "OWLCapture")
	void ClearHiddenComponents();

	/** Get Current UMG Widget
	 * WARNING: might return nullptr if the WidgetType is not set */
	UFUNCTION(BlueprintCallable, Category = "UMGRendering")
	UUserWidget* GetCurrentUMGWidget();

public:
	static const FName VisTypeToFname(EOWLOutputBufferVisualisation Type);

	static bool LandscapeInTheScene(UWorld* World);
public:
	FEngineShowFlags ShowFlags;
	int32 ViewModeIndex;
	// Used to increase FOV before capture
	float OverscanFactor = 1.0f;
public:
	DECLARE_MULTICAST_DELEGATE(FOnRenderFinished);
	FOnRenderFinished OnRenderFinished;

	FSceneViewStateInterface* GetViewState(int32 ViewIndex, const ERHIFeatureLevel::Type FeatureLevel);
	static void AddReferencedObjects(UObject* InThis, FReferenceCollector& Collector);

	virtual void BeginDestroy() override;
	virtual void OnRegister() override;
	virtual void OnUnregister() override;
#if WITH_EDITOR
	virtual void PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent) override;
	virtual bool CanEditChange(const FProperty* InProperty) const override;
#endif

	bool UsingShowOnly() const;
	bool UsingHideOnly() const;

	void AddPostProcessBlendable(TScriptInterface<IBlendableInterface> Blendable);
	void RemovePostProcessBlendable(TScriptInterface<IBlendableInterface> Blendable);

public:
	UPROPERTY(VisibleAnywhere, Category="Internal")
	bool bUseRTOverride = false;

	UPROPERTY(VisibleAnywhere, Category="Internal")
	bool bHideBufferOption = false;

	bool bRenderOnTick = true;
protected:
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	/* Can be used to override and remove certain scene view extensions from capture component */
	virtual bool CanRenderSceneViewExtension(TSharedRef<ISceneViewExtension, ESPMode::ThreadSafe> SceneViewExtension);
	void RenderScene(UCameraComponent* TargetCamera);
	void SetupResolution(UCameraComponent* TargetCamera);
	void SetupViewFamily(class FSceneViewFamily& ViewFamily, const TArrayView<FMinimalViewInfo> Views, FLinearColor ClearColour);
	void SetupShowHideActors(class FSceneViewFamily& ViewFamily, FSceneView* View);
	bool SetupTextureTarget(UTextureRenderTarget2D* Target);
	bool SetupInternalRenderTarget(UTextureRenderTarget2D* Target, const ETextureRenderTargetFormat Format);
	/* Returns true and writes to Result when an override exists */
	virtual bool GetPostProcessSettingsOverride(FPostProcessSettings& Result, float& BlendWeight);

	void UpdateShowFlags();

	bool bUsesComposureLicence = false;

	bool bIgnoreConstrainAspectRatio = false;

	UPROPERTY()
	TObjectPtr<UMaterial> AlphaOnlyMaterial = nullptr;
	UPROPERTY()
	TObjectPtr<UMaterialInstanceDynamic> AlphaOnlyMID = nullptr;

	UPROPERTY()
	TObjectPtr<UMaterial> AlphaOnlyMaterialInverted = nullptr;
	UPROPERTY()
	TObjectPtr<UMaterialInstanceDynamic> AlphaOnlyInvertedMID = nullptr;

	FDelegateHandle PostOpaqueRenderHandle;
	bool bOnResolvedBound = false;

	/**
	 * The view state holds persistent scene rendering state and enables occlusion culling in scene captures.
	 * NOTE: This object is used by the rendering thread. When the game thread attempts to destroy it, FDeferredCleanupInterface will keep the object around until the RT is done accessing it.
	 * NOTE: It is not safe to put a FSceneViewStateReference in a TArray, which moves its contents around without calling element constructors during realloc.
	 */
	TIndirectArray<FSceneViewStateReference> ViewStates;
	float CurrentAspectRatio = 1.0f;
	UPROPERTY()
	TObjectPtr<UTextureRenderTarget2D> InternalRT = nullptr;
	UPROPERTY()
	TObjectPtr<UStaticMesh> CameraMesh = nullptr;
	UPROPERTY()
	TObjectPtr<UStaticMesh> CineCameraMesh = nullptr;


	// This is used by child components that don't want to allow the user
	// to specify render targets
	UPROPERTY()
	TObjectPtr<UTextureRenderTarget2D> OverrideRT = nullptr;

	UPROPERTY()
	TObjectPtr<UCameraComponent> OverrideCameraComponent = nullptr;

	// Store a map of blendables to hook onto post process struct before capture
	// this is primarily for use in composure passes
	TSet<TScriptInterface<IBlendableInterface>> Blendables;


private:
	void InvertAlphaAndFinish_RenderThread(FRHICommandListImmediate& RHICmdList, UTextureRenderTarget2D* Target,  FRHITexture2D* InSourceTexture);
	void Finish_RenderThread(FRHICommandListImmediate& RHICmdList, UTextureRenderTarget2D* Target, FRHITexture2D* InSourceTexture);
	ESceneCaptureSource SourceFromBufferType(EOWLOutputBufferVisualisation Viz);

private:
	bool WrongAttachmentWarningIssued = false;
	FWidgetRenderer* WidgetRenderer = nullptr;
	TSharedPtr<SVirtualWindow> Window;

private:
	void InitWidgetRenderer();
	void ReleaseRenderer();
	void RenderWidgetOnTick(float DeltaTime, UTextureRenderTarget2D* WidgetTarget);
};