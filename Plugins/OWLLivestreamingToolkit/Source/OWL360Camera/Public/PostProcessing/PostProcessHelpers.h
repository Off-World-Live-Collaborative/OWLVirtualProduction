// Copyright Off World Live Limited, 2020-2022. All rights reserved.
#pragma once

#include "OWL360PostProcessSettings.h"
#include "CoreMinimal.h"
#include "PostProcessHelpers.generated.h"

struct FPostProcessSettings;

/* Post Process type applied to the 360 cam output texture */
UENUM(BlueprintType)
enum class E360PostProcessPipeline : uint8 {
	PPM_Bloom UMETA(DisplayName = "Seamless 360 Bloom"),
	PPM_Tonemapper UMETA(DisplayName = "Tonemapping"),
};

UCLASS()
class OWL360CAMERA_API UPostProcessHelpers : public UObject
{
	GENERATED_BODY()

public:
	static float ExposureBiasCompensation;

	// disable settings that cause seams in 360
	static void DisableIncompatiblePostProcesses(FPostProcessSettings& OverrideSettings);
	static void OverrideDirectPostProcessing(FPostProcessSettings& OverrideSettings, const FOWL360PostProcessSettings ThreeSixtyPostProcessSettings);

	// Categories
	static void OverrideLensSettings(FPostProcessSettings& OverrideSettings, const FOWL360LensSettings LensSettings);
	static void OverrideColorGradingSettings(FPostProcessSettings& OverrideSettings, const FOWL360ColorGradingSettings ColorGradingSettings);
	static void OverrideGlobalIlluminationSettings(FPostProcessSettings& OverrideSettings, const FOWL360GlobalIlluminationSettings GlobalIlluminationSettings);
	static void OverrideReflectionsSettings(FPostProcessSettings& OverrideSettings, const FOWL360ReflectionsSettings ReflectionsSettings);
	static void OverrideRenderingFeaturesSettings(FPostProcessSettings& OverrideSettings, const FOWL360RenderingFeaturesSettings RenderingFeaturesSettings);
	static void OverrideFilmGrainSettings(FPostProcessSettings& OverrideSettings, const FOWL360FilmGrainSettings FilmGrainSettings);

	// Lens
	static void OverrideBloomAdvanced(FPostProcessSettings& OverrideSettings, const FOWL360BloomAdvancedSettings BloomAdvancedSettings);
	static void OverrideBloom(FPostProcessSettings& OverrideSettings, const FOWL360LensBloomSettings LensBloomSettings);

	static void OverrideCamera(FPostProcessSettings& OverrideSettings, const FOWL360LensCameraSettings LensCameraSettings);
	static void OverrideExposure(FPostProcessSettings& OverrideSettings, const FOWL360LensExposureSettings LensExposureSettings);
	static void OverrideLocalExposure(FPostProcessSettings& OverrideSettings, const FOWL360LensLocalExposureSettings LensLocalExposureSettings);
	static void OverrideDepthOfField(FPostProcessSettings& OverrideSettings, const FOWL360LensDepthOfFieldSettings LensDepthOfFieldSettings);

	// Color Grading
	static void OverrideTemperature(FPostProcessSettings& OverrideSettings, const FOWL360ColorGradingTemperatureSettings ColorGradingTemperatureSettings);
	static void OverrideColorGlobal(FPostProcessSettings& OverrideSettings, const FOWL360ColorGradingGlobalSettings ColorGradingGlobalSettings);
	static void OverrideColorShadows(FPostProcessSettings& OverrideSettings, const FOWL360ColorGradingShadowsSettings ColorGradingShadowsSettings);
	static void OverrideColorMidtones(FPostProcessSettings& OverrideSettings, const FOWL360ColorGradingMidtonesSettings ColorGradingMidtonesSettings);
	static void OverrideColorHighlights(FPostProcessSettings& OverrideSettings, const FOWL360ColorGradingHighlightsSettings ColorGradingHighlightsSettings);
	static void OverrideColorGradingMisc(FPostProcessSettings& OverrideSettings, const FOWL360ColorGradingMiscSettings ColorGradingMiscSettings);

	// Global Illumination
	static void OverrideGlobalIlluminationLumenAdvanced(FPostProcessSettings& OverrideSettings, const FOWL360GlobalIlluminationLumenAdvancedSettings GlobalIlluminationLumenAdvancedSettings);
	static void OverrideGlobalIlluminationLumen(FPostProcessSettings& OverrideSettings, const FOWL360GlobalIlluminationLumenSettings GlobalIlluminationLumenSettings);
	static void OverrideGlobalIlluminationRayTracing(FPostProcessSettings& OverrideSettings, const FOWL360GlobalIlluminationRayTracingSettings GlobalIlluminationRayTracingSettings);

	// Reflections
	static void OverrideReflectionsLumen(FPostProcessSettings& OverrideSettings, const FOWL360ReflectionsLumenSettings ReflectionsLumenSettings);
	static void OverrideReflectionsScreenSpace(FPostProcessSettings& OverrideSettings, const FOWL360ReflectionsScreenSpaceSettings ScreenSpaceSettings);
	static void OverrideReflectionsRayTracing(FPostProcessSettings& OverrideSettings, const FOWL360ReflectionsRayTracingSettings ReflectionsRayTracingSettings);
	
	// Rendering Features
	static void OverrideMotionBlur(FPostProcessSettings & OverrideSettings, const FOWL360RenderingFeaturesMotionBlurSettings MotionBlurSettingsSettings);
	static void OverrideAmbientCubemap(FPostProcessSettings& OverrideSettings, const FOWL360RenderingFeaturesAmbientCubemapSettings AmbientCubemapSettings);
	static void OverrideAmbientOcclusionAdvanced(FPostProcessSettings& OverrideSettings, const FOWL360RenderingFeaturesAmbientOcclusionAdvancedSettings RenderingFeaturesAmbientOcclusionAdvancedSettings);
	static void OverrideAmbientOcclusion(FPostProcessSettings& OverrideSettings, const FOWL360RenderingFeaturesAmbientOcclusionSettings AmbientOcclusionSettings);
	static void OverrideRayTracingAmbientOcclusion(FPostProcessSettings& OverrideSettings, const FOWL360RenderingFeaturesRayTracingAmbientOcclusionSettings RenderingFeaturesRayTracingAmbientOcclusionSettings);
	static void OverrideTranslucency(FPostProcessSettings& OverrideSettings, const FOWL360RenderingFeaturesTranslucencySettings RenderingFeaturesTranslucencySettings);
	static void OverrideRayTracingTranslucency(FPostProcessSettings& OverrideSettings, const FOWL360RenderingFeaturesRayTracingTranslucencySettings RenderingFeaturesRayTracingTranslucencySettings);
	static void OverridePathTracing(FPostProcessSettings& OverrideSettings, const FOWL360RenderingFeaturesPathTracingSettings RenderingFeaturesPathTracingSettings);
};
