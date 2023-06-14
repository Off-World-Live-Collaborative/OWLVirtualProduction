// Copyright Off World Live Limited, 2020-2022. All rights reserved.

#pragma once

#include "Engine/Scene.h"
#include "CoreMinimal.h"
#include "Dom/JsonObject.h"
#include "OWL360PostProcessSettings.generated.h"


struct FOWL360PostProcessSettings;

// LENS SETTINGS

// USTRUCT(BlueprintType)
// struct FOWL360MobileDepthOfFieldAdvancedSettings
// {
// 	GENERATED_BODY()
//
// 	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Overrides, meta=(PinHiddenByDefault, InlineEditConditionToggle))
// 	uint8 bOverride_DepthOfFieldOcclusion:1;
//
// 	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Overrides, meta=(PinHiddenByDefault, InlineEditConditionToggle))
// 	uint8 bOverride_DepthOfFieldSkyFocusDistance:1;
//
// 	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Overrides, meta=(PinHiddenByDefault, InlineEditConditionToggle))
// 	uint8 bOverride_DepthOfFieldVignetteSize:1;
//
// 	/** Occlusion tweak factor 1 (0.18 to get natural occlusion, 0.4 to solve layer color leaking issues) */
// 	UPROPERTY(interp, BlueprintReadWrite, Category="Lens|Mobile Depth of Field", AdvancedDisplay, meta=(ClampMin = "0.0", ClampMax = "1.0", editcondition = "bOverride_DepthOfFieldOcclusion", DisplayName = "Occlusion"))
// 	float DepthOfFieldOcclusion;
//
// 	/** Artificial distance to allow the skybox to be in focus (e.g. 200000), <=0 to switch the feature off, only for GaussianDOF, can cost performance */
// 	UPROPERTY(interp, BlueprintReadWrite, Category="Lens|Mobile Depth of Field", AdvancedDisplay, meta=(ClampMin = "0.0", ClampMax = "200000.0", editcondition = "bOverride_DepthOfFieldSkyFocusDistance", DisplayName = "Sky Distance"))
// 	float DepthOfFieldSkyFocusDistance;
//
// 	/** Artificial circular mask to (near) blur content outside the radius, only for GaussianDOF, diameter in percent of screen width, costs performance if the mask is used, keep Feather can Radius on default to keep it off */
// 	UPROPERTY(interp, BlueprintReadWrite, Category="Lens|Mobile Depth of Field", AdvancedDisplay, meta=(UIMin = "0.0", UIMax = "100.0", editcondition = "bOverride_DepthOfFieldVignetteSize", DisplayName = "Vignette Size"))
// 	float DepthOfFieldVignetteSize;
//
// 	FOWL360MobileDepthOfFieldAdvancedSettings()
// 	{
// 		FMemory::Memzero(this, sizeof(FOWL360MobileDepthOfFieldAdvancedSettings));
// 		DepthOfFieldOcclusion = 0.4f;
// 		DepthOfFieldSkyFocusDistance = 0.0f;
// 		// 200 should be enough even for extreme aspect ratios to give the default no effect
// 		DepthOfFieldVignetteSize = 200.0f;
// 	}
//
// 	/* Exports to post process settings with overrides. */
// 	OWL360CAMERA_API void ExportToPostProcessSettings(FOWL360PostProcessSettings* OutPostProcessSettings) const;
// };
//
// USTRUCT(BlueprintType)
// struct FOWL360LensMobileDepthOfFieldSettings
// {
// 	GENERATED_BODY()
//
// 	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Overrides, meta=(PinHiddenByDefault, InlineEditConditionToggle))
// 	uint8 bOverride_MobileHQGaussian:1;
//
// 	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Overrides, meta=(PinHiddenByDefault, InlineEditConditionToggle))
// 	uint8 bOverride_DepthOfFieldFocalRegion:1;
//
// 	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Overrides, meta=(PinHiddenByDefault, InlineEditConditionToggle))
// 	uint8 bOverride_DepthOfFieldNearTransitionRegion:1;
//
// 	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Overrides, meta=(PinHiddenByDefault, InlineEditConditionToggle))
// 	uint8 bOverride_DepthOfFieldFarTransitionRegion:1;
//
// 	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Overrides, meta=(PinHiddenByDefault, InlineEditConditionToggle))
// 	uint8 bOverride_DepthOfFieldScale:1;
//
// 	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Overrides, meta=(PinHiddenByDefault, InlineEditConditionToggle))
// 	uint8 bOverride_DepthOfFieldNearBlurSize:1;
//
// 	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Overrides, meta=(PinHiddenByDefault, InlineEditConditionToggle))
// 	uint8 bOverride_DepthOfFieldFarBlurSize:1;
//
// 	/** Enable HQ Gaussian on high end mobile platforms. (ES3_1) */
// 	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Lens|Mobile Depth of Field", meta = (editcondition = "bOverride_MobileHQGaussian", DisplayName = "High Quality Gaussian DoF on Mobile"))
// 	uint8 bMobileHQGaussian:1;
//
// 	/** Artificial region where all content is in focus, starting after DepthOfFieldFocalDistance, in unreal units  (cm) */
// 	UPROPERTY(interp, BlueprintReadWrite, Category="Lens|Mobile Depth of Field", meta=(UIMin = "0.0", UIMax = "10000.0", editcondition = "bOverride_DepthOfFieldFocalRegion", DisplayName = "Focal Region"))
// 	float DepthOfFieldFocalRegion;
//
// 	/** To define the width of the transition region next to the focal region on the near side (cm) */
// 	UPROPERTY(interp, BlueprintReadWrite, Category="Lens|Mobile Depth of Field", meta=(UIMin = "0.0", UIMax = "10000.0", editcondition = "bOverride_DepthOfFieldNearTransitionRegion", DisplayName = "Near Transition Region"))
// 	float DepthOfFieldNearTransitionRegion;
//
// 	/** To define the width of the transition region next to the focal region on the near side (cm) */
// 	UPROPERTY(interp, BlueprintReadWrite, Category="Lens|Mobile Depth of Field", meta=(UIMin = "0.0", UIMax = "10000.0", editcondition = "bOverride_DepthOfFieldFarTransitionRegion", DisplayName = "Far Transition Region"))
// 	float DepthOfFieldFarTransitionRegion;
//
// 	/** SM5: BokehDOF only: To amplify the depth of field effect (like aperture)  0=off
// 	    ES3_1: Used to blend DoF. 0=off
// 	*/
// 	UPROPERTY(interp, BlueprintReadWrite, Category="Lens|Mobile Depth of Field", meta=(ClampMin = "0.0", ClampMax = "2.0", editcondition = "bOverride_DepthOfFieldScale", DisplayName = "Scale"))
// 	float DepthOfFieldScale;
//
// 	/** Gaussian only: Maximum size of the Depth of Field blur (in percent of the view width) (note: performance cost scales with size) */
// 	UPROPERTY(interp, BlueprintReadWrite, Category="Lens|Mobile Depth of Field", meta=(UIMin = "0.0", UIMax = "32.0", editcondition = "bOverride_DepthOfFieldNearBlurSize", DisplayName = "Near Blur Size"))
// 	float DepthOfFieldNearBlurSize;
//
// 	/** Gaussian only: Maximum size of the Depth of Field blur (in percent of the view width) (note: performance cost scales with size) */
// 	UPROPERTY(interp, BlueprintReadWrite, Category="Lens|Mobile Depth of Field", meta=(UIMin = "0.0", UIMax = "32.0", editcondition = "bOverride_DepthOfFieldFarBlurSize", DisplayName = "Far Blur Size"))
// 	float DepthOfFieldFarBlurSize;
//
//
// 	UPROPERTY(Interp, BlueprintReadWrite, Category = "Lens|Mobile Depth of Field")
// 	FOWL360MobileDepthOfFieldAdvancedSettings Advanced;
//
// 	FOWL360LensMobileDepthOfFieldSettings()
// 	{
// 		FMemory::Memzero(this, sizeof(FOWL360LensMobileDepthOfFieldSettings));
// 		DepthOfFieldFocalRegion = 0.0f;
// 		DepthOfFieldNearTransitionRegion = 300.0f;
// 		DepthOfFieldFarTransitionRegion = 500.0f;
// 		DepthOfFieldScale = 0.0f;
// 		DepthOfFieldNearBlurSize = 15.0f;
// 		DepthOfFieldFarBlurSize = 15.0f;
// 	}
//
// 	/* Exports to post process settings with overrides. */
// 	OWL360CAMERA_API void ExportToPostProcessSettings(FOWL360PostProcessSettings* OutPostProcessSettings) const;
// };

USTRUCT(BlueprintType)
struct FOWL360BloomAdvancedSettings
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))
	uint8 bOverride_BloomSizeScale : 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))
	uint8 bOverride_Bloom1Tint : 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))
	uint8 bOverride_Bloom1Size : 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))
	uint8 bOverride_Bloom2Size : 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))
	uint8 bOverride_Bloom2Tint : 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))
	uint8 bOverride_Bloom3Tint : 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))
	uint8 bOverride_Bloom3Size : 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))
	uint8 bOverride_Bloom4Tint : 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))
	uint8 bOverride_Bloom4Size : 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))
	uint8 bOverride_Bloom5Tint : 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))
	uint8 bOverride_Bloom5Size : 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))
	uint8 bOverride_Bloom6Tint : 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))
	uint8 bOverride_Bloom6Size : 1;

	/**
	 * Scale for all bloom sizes
	 */
	UPROPERTY(Interp, BlueprintReadWrite, Category = "Lens|Bloom", AdvancedDisplay, meta = (ClampMin = "0.0", UIMax = "64.0", editcondition = "bOverride_BloomSizeScale", DisplayName = "Size scale"))
	float SizeScale;
	/**
	 * Diameter size for the Bloom1 in percent of the screen width
	 * (is done in 1/2 resolution, larger values cost more performance, good for high frequency details)
	 * >=0: can be clamped because of shader limitations
	 */
	UPROPERTY(Interp, BlueprintReadWrite, Category = "Lens|Bloom", AdvancedDisplay, meta = (ClampMin = "0.0", UIMax = "4.0", editcondition = "bOverride_Bloom1Size", DisplayName = "#1 Size"))
	float Filter1Size;
	/**
	 * Diameter size for Bloom2 in percent of the screen width
	 * (is done in 1/4 resolution, larger values cost more performance)
	 * >=0: can be clamped because of shader limitations
	 */
	UPROPERTY(Interp, BlueprintReadWrite, Category = "Lens|Bloom", AdvancedDisplay, meta = (ClampMin = "0.0", UIMax = "8.0", editcondition = "bOverride_Bloom2Size", DisplayName = "#2 Size"))
	float Filter2Size;
	/**
	 * Diameter size for Bloom3 in percent of the screen width
	 * (is done in 1/8 resolution, larger values cost more performance)
	 * >=0: can be clamped because of shader limitations
	 */
	UPROPERTY(Interp, BlueprintReadWrite, Category = "Lens|Bloom", AdvancedDisplay, meta = (ClampMin = "0.0", UIMax = "16.0", editcondition = "bOverride_Bloom3Size", DisplayName = "#3 Size"))
	float Filter3Size;
	/**
	 * Diameter size for Bloom4 in percent of the screen width
	 * (is done in 1/16 resolution, larger values cost more performance, best for wide contributions)
	 * >=0: can be clamped because of shader limitations
	 */
	UPROPERTY(Interp, BlueprintReadWrite, Category = "Lens|Bloom", AdvancedDisplay, meta = (ClampMin = "0.0", UIMax = "32.0", editcondition = "bOverride_Bloom4Size", DisplayName = "#4 Size"))
	float Filter4Size;
	/**
	 * Diameter size for Bloom5 in percent of the screen width
	 * (is done in 1/32 resolution, larger values cost more performance, best for wide contributions)
	 * >=0: can be clamped because of shader limitations
	 */
	UPROPERTY(Interp, BlueprintReadWrite, Category = "Lens|Bloom", AdvancedDisplay, meta = (ClampMin = "0.0", UIMax = "64.0", editcondition = "bOverride_Bloom5Size", DisplayName = "#5 Size"))
	float Filter5Size;
	/**
	 * Diameter size for Bloom6 in percent of the screen width
	 * (is done in 1/64 resolution, larger values cost more performance, best for wide contributions)
	 * >=0: can be clamped because of shader limitations
	 */
	UPROPERTY(Interp, BlueprintReadWrite, Category = "Lens|Bloom", AdvancedDisplay, meta = (ClampMin = "0.0", UIMax = "128.0", editcondition = "bOverride_Bloom6Size", DisplayName = "#6 Size"))
	float Filter6Size;
	/** Bloom1 tint color */
	UPROPERTY(Interp, BlueprintReadWrite, Category = "Lens|Bloom", AdvancedDisplay, meta = (editcondition = "bOverride_Bloom1Tint", DisplayName = "#1 Tint", HideAlphaChannel))
	FLinearColor Filter1Tint;
	/** Bloom2 tint color */
	UPROPERTY(Interp, BlueprintReadWrite, Category = "Lens|Bloom", AdvancedDisplay, meta = (editcondition = "bOverride_Bloom2Tint", DisplayName = "#2 Tint", HideAlphaChannel))
	FLinearColor Filter2Tint;
	/** Bloom3 tint color */
	UPROPERTY(Interp, BlueprintReadWrite, Category = "Lens|Bloom", AdvancedDisplay, meta = (editcondition = "bOverride_Bloom3Tint", DisplayName = "#3 Tint", HideAlphaChannel))
	FLinearColor Filter3Tint;
	/** Bloom4 tint color */
	UPROPERTY(Interp, BlueprintReadWrite, Category = "Lens|Bloom", AdvancedDisplay, meta = (editcondition = "bOverride_Bloom4Tint", DisplayName = "#4 Tint", HideAlphaChannel))
	FLinearColor Filter4Tint;
	/** Bloom5 tint color */
	UPROPERTY(Interp, BlueprintReadWrite, Category = "Lens|Bloom", AdvancedDisplay, meta = (editcondition = "bOverride_Bloom5Tint", DisplayName = "#5 Tint", HideAlphaChannel))
	FLinearColor Filter5Tint;
	/** Bloom6 tint color */
	UPROPERTY(Interp, BlueprintReadWrite, Category = "Lens|Bloom", AdvancedDisplay, meta = (editcondition = "bOverride_Bloom6Tint", DisplayName = "#6 Tint", HideAlphaChannel))
	FLinearColor Filter6Tint;

	FOWL360BloomAdvancedSettings()
	{
		FMemory::Memzero(this, sizeof(FOWL360BloomAdvancedSettings));
		// default is 4 to maintain old settings after fixing something that caused a factor of 4
		SizeScale = 4.0;
		Filter1Tint = FLinearColor(0.3465f, 0.3465f, 0.3465f);
		Filter1Size = 0.3f;
		Filter2Tint = FLinearColor(0.138f, 0.138f, 0.138f);
		Filter2Size = 1.0f;
		Filter3Tint = FLinearColor(0.1176f, 0.1176f, 0.1176f);
		Filter3Size = 2.0f;
		Filter4Tint = FLinearColor(0.066f, 0.066f, 0.066f);
		Filter4Size = 10.0f;
		Filter5Tint = FLinearColor(0.066f, 0.066f, 0.066f);
		Filter5Size = 30.0f;
		Filter6Tint = FLinearColor(0.061f, 0.061f, 0.061f);
		Filter6Size = 64.0f;
	}

	/* Exports to post process settings with overrides. */
	OWL360CAMERA_API void ExportToPostProcessSettings(FOWL360PostProcessSettings* OutPostProcessSettings) const;
};

USTRUCT(BlueprintType)
struct FOWL360LensBloomSettings
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))
	uint8 bOverride_BloomIntensity : 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))
	uint8 bOverride_BloomThreshold : 1;

	/** Multiplier for all bloom contributions >=0: off, 1(default), >1 brighter */
	UPROPERTY(Interp, BlueprintReadWrite, Category = "Lens|Bloom", meta = (ClampMin = "0.0", UIMax = "8.0", editcondition = "bOverride_BloomIntensity", DisplayName = "Intensity"))
	float Intensity;
	/**
	 * minimum brightness the bloom starts having effect
	 * -1:all pixels affect bloom equally (physically correct, faster as a threshold pass is omitted), 0:all pixels affect bloom brights more, 1(default), >1 brighter
	 */
	UPROPERTY(interp, BlueprintReadWrite, Category = "Lens|Bloom", meta = (ClampMin = "-1.0", UIMax = "8.0", editcondition = "bOverride_BloomThreshold", DisplayName = "Threshold"))
	float Threshold;
	UPROPERTY(Interp, BlueprintReadWrite, Category = "Lens|Bloom")
	FOWL360BloomAdvancedSettings Advanced;

	FOWL360LensBloomSettings()
	{
		FMemory::Memzero(this, sizeof(FOWL360LensBloomSettings));
		Intensity = 0.675f;
		Threshold = -1.0f;
	}

	/* Exports to post process settings with overrides. */
	OWL360CAMERA_API void ExportToPostProcessSettings(FOWL360PostProcessSettings* OutPostProcessSettings) const;
};

// TODO: IT SHOULD BO POSSIBLE FOR US TO IMPLEMENT AUTOEXPOSURE AND EYE ADAPTATION IN THE FUTURE
// IF WE DO IT ON THE OUTPUT TEXTURE INSTEAD OF THE 6 SEPARATE ONES
// FOR NOW WE FORCE SET AUTO EXPOSURE METHOD TO MANUAL

//USTRUCT(BlueprintType)
//struct FOWL360LensExposureAdvancedSettings
//{
//	GENERATED_BODY()
//
//	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))
//	uint8 bOverride_AutoExposureLowPercent : 1;
//	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))
//	uint8 bOverride_AutoExposureHighPercent : 1;
//	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))
//	uint8 bOverride_HistogramLogMin : 1;
//	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))
//	uint8 bOverride_HistogramLogMax : 1;
//
//	/**
//	 * The eye adaptation will adapt to a value extracted from the luminance histogram of the scene color.
//	 * The value is defined as having x percent below this brightness. Higher values give bright spots on the screen more priority
//	 * but can lead to less stable results. Lower values give the medium and darker values more priority but might cause burn out of
//	 * bright spots.
//	 * >0, <100, good values are in the range 70 .. 80
//	 */
//	UPROPERTY(Interp, BlueprintReadWrite, Category = "Exposure", AdvancedDisplay, meta = (ClampMin = "0.0", ClampMax = "100.0", editcondition = "bOverride_AutoExposureLowPercent", DisplayName = "Low Percent"))
//	float LowPercent;
//	/**
//	 * The eye adaptation will adapt to a value extracted from the luminance histogram of the scene color.
//	 * The value is defined as having x percent below this brightness. Higher values give bright spots on the screen more priority
//	 * but can lead to less stable results. Lower values give the medium and darker values more priority but might cause burn out of
//	 * bright spots.
//	 * >0, <100, good values are in the range 80 .. 95
//	 */
//	UPROPERTY(Interp, BlueprintReadWrite, Category = "Exposure", AdvancedDisplay, meta = (ClampMin = "0.0", ClampMax = "100.0", editcondition = "bOverride_AutoExposureHighPercent", DisplayName = "High Percent"))
//	float HighPercent;
//
//	/** temporary exposed until we found good values, -8: 1/256, -10: 1/1024 */
//	UPROPERTY(Interp, BlueprintReadWrite, Category = "Exposure", AdvancedDisplay, meta = (UIMin = "-16", UIMax = "0.0", editcondition = "bOverride_HistogramLogMin"))
//	float HistogramLogMin;
//
//	/** temporary exposed until we found good values 4: 16, 8: 256 */
//	UPROPERTY(Interp, BlueprintReadWrite, Category = "Exposure", AdvancedDisplay, meta = (UIMin = "0.0", UIMax = "16.0", editcondition = "bOverride_HistogramLogMax"))
//	float HistogramLogMax;
//
//	OWL360CAMERA_API FOWL360LensExposureAdvancedSettings()
//	{
//		FMemory::Memzero(this, sizeof(FOWL360LensExposureAdvancedSettings));
//		static const auto VarDefaultAutoExposureExtendDefaultLuminanceRange = IConsoleManager::Get().FindTConsoleVariableDataInt(TEXT("r.DefaultFeature.AutoExposure.ExtendDefaultLuminanceRange"));
//		const bool bExtendedLuminanceRange = VarDefaultAutoExposureExtendDefaultLuminanceRange->GetValueOnAnyThread() == 1;
//
//		static const auto VarDefaultAutoExposureBias = IConsoleManager::Get().FindTConsoleVariableDataFloat(TEXT("r.DefaultFeature.AutoExposure.Bias"));
//		const float BaseAutoExposureBias = VarDefaultAutoExposureBias->GetValueOnAnyThread();
//
//		// next value might get overwritten by r.DefaultFeature.AutoExposure.Method
//		LowPercent = 10.0f;
//		HighPercent = 90.0f;
//
//		if (bExtendedLuminanceRange)
//		{
//			// When this project setting is set, the following values are in EV100.
//			HistogramLogMin = -10.0f;
//			HistogramLogMax = 20.0f;
//		}
//		else
//		{
//			HistogramLogMin = -8.0f;
//			HistogramLogMax = 4.0f;
//		}
//	}
//
//	/* Exports to post process settings with overrides. */
//	OWL360CAMERA_API void ExportToPostProcessSettings(FOWL360PostPorcessSettings* OutPostProcessSettings) const;
//};

USTRUCT(BlueprintType)
struct FOWL360LensExposureSettings
{
	GENERATED_BODY()

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))
	//uint8 bOverride_AutoExposureMethod : 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))
	uint8 bOverride_AutoExposureBias : 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))
	uint8 bOverride_AutoExposureApplyPhysicalCameraExposure : 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))
	uint8 bOverride_AutoExposureBiasCurve : 1;
	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))
	//uint8 bOverride_AutoExposureMeterMask : 1;
	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))
	//uint8 bOverride_AutoExposureMinBrightness : 1;
	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))
	//uint8 bOverride_AutoExposureMaxBrightness : 1;
	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))
	//uint8 bOverride_AutoExposureSpeedUp : 1;
	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))
	//uint8 bOverride_AutoExposureSpeedDown : 1;

	// TODO: IT SHOULD BO POSSIBLE FOR US TO IMPLEMENT AUTOEXPOSURE AND EYE ADAPTATION IN THE FUTURE
	// IF WE DO IT ON THE OUTPUT TEXTURE INSTEAD OF THE 6 SEPARATE ONES
	// FOR NOW WE FORCE SET AUTO EXPOSURE METHOD TO MANUAL
	///** Luminance computation method */
	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Exposure", meta = (editcondition = "bOverride_AutoExposureMethod", DisplayName = "Method"))
	//TEnumAsByte<enum EAutoExposureMethod> Method;
	//
	/**
	 * Logarithmic adjustment for the exposure. Only used if a tonemapper is specified.
	 * 0: no adjustment, -1:2x darker, -2:4x darker, 1:2x brighter, 2:4x brighter, ...
	 */
	UPROPERTY(Interp, BlueprintReadWrite, Category = "Exposure", meta = (UIMin = "-16.0", UIMax = "16.0", editcondition = "bOverride_AutoExposureBias", DisplayName = "Exposure Compensation"))
	float Bias;
	/** Enables physical camera exposure using ShutterSpeed/ISO/Aperture. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Exposure", meta = (editcondition = "bOverride_AutoExposureApplyPhysicalCameraExposure", DisplayName = "Apply Physical Camera Exposure"))
	uint32 ApplyPhysicalCameraExposure : 1;
	/**
	 * Exposure compensation based on the scene EV100.
	 * Used to calibrate the final exposure differently depending on the average scene luminance.
	 * 0: no adjustment, -1:2x darker, -2:4x darker, 1:2x brighter, 2:4x brighter, ...
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Exposure", meta = (editcondition = "bOverride_AutoExposureBiasCurve", DisplayName = "Exposure Compensation Curve"))
	class UCurveFloat* BiasCurve = nullptr;
	// TODO: IT SHOULD BO POSSIBLE FOR US TO IMPLEMENT THE METER MASK IN THE FUTURE
	// IF WE DO IT ON THE OUTPUT TEXTURE INSTEAD OF THE 6 SEPARATE ONES
	// FOR NOW WE FORCE SET AUTO EXPOSURE METHOD TO MANUAL
	// [WE WOULD NEED TO FIGURE OUT CUBEMAP TO EQUI CONVERSION FOR THE TEXTURE]
	///**
	// * Exposure metering mask. Bright spots on the mask will have high influence on auto-exposure metering
	// * and dark spots will have low influence.
	// */
	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Exposure", meta = (editcondition = "bOverride_AutoExposureMeterMask", DisplayName = "Exposure Metering Mask"))
	//class UTexture* MeterMask = nullptr;
	///**
	// * A good value should be positive near 0. This is the minimum brightness the auto exposure can adapt to.
	// * It should be tweaked in a dark lighting situation (too small: image appears too bright, too large: image appears too dark).
	// * Note: Tweaking emissive materials and lights or tweaking auto exposure can look the same. Tweaking auto exposure has global
	// * effect and defined the HDR range - you don't want to change that late in the project development.
	// * Eye Adaptation is disabled if MinBrightness = MaxBrightness
	// */
	//UPROPERTY(Interp, BlueprintReadWrite, Category = "Exposure", meta = (ClampMin = "0.0", UIMax = "10.0", editcondition = "bOverride_AutoExposureMinBrightness", DisplayName = "Min Brightness"))
	//float MinBrightness;
	///**
	// * A good value should be positive (2 is a good value). This is the maximum brightness the auto exposure can adapt to.
	// * It should be tweaked in a bright lighting situation (too small: image appears too bright, too large: image appears too dark).
	// * Note: Tweaking emissive materials and lights or tweaking auto exposure can look the same. Tweaking auto exposure has global
	// * effect and defined the HDR range - you don't want to change that late in the project development.
	// * Eye Adaptation is disabled if MinBrightness = MaxBrightness
	// */
	//UPROPERTY(Interp, BlueprintReadWrite, Category = "Exposure", meta = (ClampMin = "0.0", UIMax = "10.0", editcondition = "bOverride_AutoExposureMaxBrightness", DisplayName = "Max Brightness"))
	//float MaxBrightness;
	///** >0 */
	//UPROPERTY(Interp, BlueprintReadWrite, Category = "Exposure", meta = (ClampMin = "0.02", UIMax = "20.0", editcondition = "bOverride_AutoExposureSpeedUp", DisplayName = "Speed Up", tooltip = "In F-stops per second, should be >0"))
	//float SpeedUp;
	///** >0 */
	//UPROPERTY(Interp, BlueprintReadWrite, Category = "Exposure", meta = (ClampMin = "0.02", UIMax = "20.0", editcondition = "bOverride_AutoExposureSpeedDown", DisplayName = "Speed Down", tooltip = "In F-stops per second, should be >0"))
	//float SpeedDown;
	//UPROPERTY(Interp, BlueprintReadWrite, Category = "Lens|Exposure")
	//FOWL360LensExposureAdvancedSettings Advanced;

	OWL360CAMERA_API FOWL360LensExposureSettings()
	{
		FMemory::Memzero(this, sizeof(FOWL360LensExposureSettings));
		//static const auto VarDefaultAutoExposureExtendDefaultLuminanceRange = IConsoleManager::Get().FindTConsoleVariableDataInt(TEXT("r.DefaultFeature.AutoExposure.ExtendDefaultLuminanceRange"));
		//const bool bExtendedLuminanceRange = VarDefaultAutoExposureExtendDefaultLuminanceRange->GetValueOnAnyThread() == 1;

		//static const auto VarDefaultAutoExposureBias = IConsoleManager::Get().FindTConsoleVariableDataFloat(TEXT("r.DefaultFeature.AutoExposure.Bias"));
		//const float BaseAutoExposureBias = VarDefaultAutoExposureBias->GetValueOnAnyThread();

		//// next value might get overwritten by r.DefaultFeature.AutoExposure.Method
		//Method = AEM_Histogram;

		//if (bExtendedLuminanceRange)
		//{
		//	// When this project setting is set, the following values are in EV100.
		//	MinBrightness = -10.0f;
		//	MaxBrightness = 20.0f;
		//}
		//else
		//{
		//	MinBrightness = 0.03f;
		//	MaxBrightness = 8.0f;
		//}

		//SpeedUp = 3.0f;
		//SpeedDown = 1.0f;
		//Bias = BaseAutoExposureBias;

		// DEFAULT MANUAL EXPOSURE BIAS
		Bias = 0.0f;
		ApplyPhysicalCameraExposure = 1;
	}

	/* Exports to post process settings with overrides. */
	OWL360CAMERA_API void ExportToPostProcessSettings(FOWL360PostProcessSettings* OutPostProcessSettings) const;
};

// TODO: We could try to implement our own chromatic aberration like effect which would split the
// colors constantly in one direction instead of splitting them from the center of a given face

//USTRUCT(BlueprintType)
//struct FOWL360LensChromaticAberrationSettings
//{
//	GENERATED_BODY()
//
//	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))
//	uint8 bOverride_SceneFringeIntensity : 1;
//	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))
//	uint8 bOverride_ChromaticAberrationStartOffset : 1;
//
//	/** in percent, Scene chromatic aberration / color fringe (camera imperfection) to simulate an artifact that happens in real-world lens, mostly visible in the image corners. */
//	UPROPERTY(interp, BlueprintReadWrite, Category = "Lens|Chromatic Aberration", meta = (UIMin = "0.0", UIMax = "5.0", editcondition = "bOverride_SceneFringeIntensity", DisplayName = "Intensity"))
//	float Intensity;
//	/** A normalized distance to the center of the framebuffer where the effect takes place. */
//	UPROPERTY(interp, BlueprintReadWrite, Category = "Lens|Chromatic Aberration", meta = (UIMin = "0.0", UIMax = "1.0", editcondition = "bOverride_ChromaticAberrationStartOffset", DisplayName = "Start Offset"))
//	float StartOffset;
//
//	OWL360CAMERA_API FOWL360LensChromaticAberrationSettings()
//	{
//		FMemory::Memzero(this, sizeof(FTOWL360LensChromaticAberrationSettings));
//		Intensity = 0.0f;
//		StartOffset = 0.0f;
//	}
//
//	/* Exports to post process settings with overrides. */
//	OWL360CAMERA_API void ExportToPostProcessSettings(FOWL360PostPorcessSettings* OutPostProcessSettings) const;
//};

// TODO: IT SHOULD BO POSSIBLE FOR US TO IMPLEMENT DIRT MASK IN THE FUTURE
// IF WE DO IT ON THE OUTPUT TEXTURE INSTEAD OF THE 6 SEPARATE ONES
// [WE WOULD NEED TO FIGURE OUT CUBEMAP TO EQUI CONVERSIONFOR THE TEXTURE]

//USTRUCT(BlueprintType)
//struct FOWL360LensDirtMaskSettings
//{
//	GENERATED_BODY()
//
//	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))
//	uint8 bOverride_BloomDirtMask : 1;
//	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))
//	uint8 bOverride_BloomDirtMaskIntensity : 1;
//	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))
//	uint8 bOverride_BloomDirtMaskTint : 1;
//
//	/**
//	* Texture that defines the dirt on the camera lens where the light of very bright objects is scattered.
//	*/
//	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Lens|Dirt Mask", meta = (editcondition = "bOverride_BloomDirtMask", DisplayName = "Dirt Mask Texture"))
//	class UTexture* BloomDirtMask;
//
//	/** BloomDirtMask intensity */
//	UPROPERTY(interp, BlueprintReadWrite, Category = "Lens|Dirt Mask", meta = (ClampMin = "0.0", UIMax = "8.0", editcondition = "bOverride_BloomDirtMaskIntensity", DisplayName = "Dirt Mask Intensity"))
//	float BloomDirtMaskIntensity;
//
//	/** BloomDirtMask tint color */
//	UPROPERTY(interp, BlueprintReadWrite, Category = "Lens|Dirt Mask", meta = (editcondition = "bOverride_BloomDirtMaskTint", DisplayName = "Dirt Mask Tint", HideAlphaChannel))
//	FLinearColor BloomDirtMaskTint;
//
//	OWL360CAMERA_API FOWL360LensDirtMaskSettings()
//	{
//		FMemory::Memzero(this, sizeof(FOWL360LensDirtMaskSettings));
//		BloomDirtMask = nullptr;
//		BloomDirtMaskIntensity = 0;
//		BloomDirtMaskTint = FLinearColor(0.5f, 0.5f, 0.5f);
//	}
//
//	/* Exports to post process settings with overrides. */
//	OWL360CAMERA_API void ExportToPostProcessSettings(FOWL360PostPorcessSettings* OutPostProcessSettings) const;
//};

USTRUCT(BlueprintType)
struct FOWL360LensCameraSettings
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))
	uint8 bOverride_CameraShutterSpeed : 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))
	uint8 bOverride_CameraISO : 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))
	uint8 bOverride_DepthOfFieldFstop : 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))
	uint8 bOverride_DepthOfFieldMinFstop : 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))
	uint8 bOverride_DepthOfFieldBladeCount : 1;

	/** The camera shutter in seconds.*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Lens|Camera", meta = (ClampMin = "1.0", ClampMax = "2000.0", editcondition = "bOverride_CameraShutterSpeed", DisplayName = "Shutter Speed (1/s)"))
	float CameraShutterSpeed;
	/** The camera sensor sensitivity in ISO.*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Lens|Camera", meta = (ClampMin = "1.0", tooltip = "The camera sensor sensitivity", editcondition = "bOverride_CameraISO", DisplayName = "ISO"))
	float CameraISO;
	/** Defines the opening of the camera lens, Aperture is 1/fstop, typical lens go down to f/1.2 (large opening), larger numbers reduce the DOF effect */
	UPROPERTY(interp, BlueprintReadWrite, Category = "Lens|Camera", meta = (ClampMin = "1.0", ClampMax = "32.0", editcondition = "bOverride_DepthOfFieldFstop", DisplayName = "Aperture (F-stop)"))
	float DepthOfFieldFstop;
	/** Defines the maximum opening of the camera lens to control the curvature of blades of the diaphragm. Set it to 0 to get straight blades. */
	UPROPERTY(interp, BlueprintReadWrite, Category = "Lens|Camera", meta = (ClampMin = "0.0", ClampMax = "32.0", editcondition = "bOverride_DepthOfFieldMinFstop", DisplayName = "Maximum Aperture (min F-stop)"))
	float DepthOfFieldMinFstop;
	/** Defines the number of blades of the diaphragm within the lens (between 4 and 16). */
	UPROPERTY(interp, BlueprintReadWrite, Category = "Lens|Camera", meta = (ClampMin = "4", ClampMax = "16", editcondition = "bOverride_DepthOfFieldBladeCount", DisplayName = "Number of diaphragm blades"))
	int32 DepthOfFieldBladeCount;

	OWL360CAMERA_API FOWL360LensCameraSettings()
	{
		FMemory::Memzero(this, sizeof(FOWL360LensCameraSettings));
		CameraShutterSpeed = 60.f;
		CameraISO = 100.f;
		DepthOfFieldFstop = 4.0f;
		DepthOfFieldMinFstop = 1.2f;
		DepthOfFieldBladeCount = 5;
	}

	/* Exports to post process settings with overrides. */
	OWL360CAMERA_API void ExportToPostProcessSettings(FOWL360PostProcessSettings* OutPostProcessSettings) const;
};

USTRUCT(BlueprintType)
struct FOWL360LensLocalExposureSettings
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Overrides, meta=(PinHiddenByDefault, InlineEditConditionToggle))
	uint8 bOverride_LocalExposureHighlightContrastScale:1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Overrides, meta=(PinHiddenByDefault, InlineEditConditionToggle))
	uint8 bOverride_LocalExposureShadowContrastScale:1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Overrides, meta=(PinHiddenByDefault, InlineEditConditionToggle))
	uint8 bOverride_LocalExposureDetailStrength:1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Overrides, meta=(PinHiddenByDefault, InlineEditConditionToggle))
	uint8 bOverride_LocalExposureBlurredLuminanceBlend:1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Overrides, meta=(PinHiddenByDefault, InlineEditConditionToggle))
	uint8 bOverride_LocalExposureBlurredLuminanceKernelSizePercent:1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Overrides, meta=(PinHiddenByDefault, InlineEditConditionToggle))
	uint8 bOverride_LocalExposureMiddleGreyBias:1;

	/**
	 * Local Exposure decomposes luminance of the frame into a base layer and a detail layer.
	 * Contrast of the base layer is reduced based on this value.
	 * Value less than 1 will enable local exposure.
	 * Good values are usually in the range 0.6 .. 1.0.
	*/
	UPROPERTY(interp, BlueprintReadWrite, Category="Lens|Local Exposure", meta=(UIMin = "0.0", UIMax = "1.0", editcondition = "bOverride_LocalExposureContrastScale", DisplayName = "Contrast Scale"))
	float LocalExposureHighlightContrastScale;

	/**
	 * Local Exposure decomposes luminance of the frame into a base layer and a detail layer.
	 * Contrast of the base layer is reduced based on this value.
	 * Value less than 1 will enable local exposure.
	 * Good values are usually in the range 0.6 .. 1.0.
	*/
	UPROPERTY(interp, BlueprintReadWrite, Category="Lens|Local Exposure", meta=(UIMin = "0.0", UIMax = "1.0", editcondition = "bOverride_LocalExposureContrastScale", DisplayName = "Contrast Scale"))
	float LocalExposureShadowContrastScale;

	/**
	 * Local Exposure decomposes luminance of the frame into a base layer and a detail layer.
	 * Value different than 1 will enable local exposure.
	 * This value should be set to 1 in most cases.
	*/
	UPROPERTY(interp, BlueprintReadWrite, Category="Lens|Local Exposure", meta=(UIMin = "0.0", UIMax = "4.0", editcondition = "bOverride_LocalExposureDetailStrength", DisplayName = "Detail Strength"))
	float LocalExposureDetailStrength;

	/**
	 * Local Exposure decomposes luminance of the frame into a base layer and a detail layer.
	 * Blend between bilateral filtered and blurred luminance as the base layer.
	 * Blurred luminance helps preserve image appearance and specular highlights, and reduce ringing.
	 * Good values are usually in the range 0.4 .. 0.6
	*/
	UPROPERTY(interp, BlueprintReadWrite, Category="Lens|Local Exposure", meta=(UIMin = "0.0", UIMax = "1.0", editcondition = "bOverride_LocalExposureBlurredLuminanceBlend", DisplayName = "Blurred Luminance Blend"))
	float LocalExposureBlurredLuminanceBlend;

	/**
	 * Kernel size (percentage of screen) used to blur frame luminance.
	*/
	UPROPERTY(interp, BlueprintReadWrite, Category="Lens|Local Exposure", meta=(UIMin = "0.0", UIMax = "100.0", editcondition = "bOverride_LocalExposureBlurredLuminanceKernelSizePercent", DisplayName = "Blurred Luminance Kernel Size Percent"))
	float LocalExposureBlurredLuminanceKernelSizePercent;

	/**
	 * Logarithmic adjustment for the local exposure middle grey.
	 * 0: no adjustment, -1:2x darker, -2:4x darker, 1:2x brighter, 2:4x brighter, ...
	 */
	UPROPERTY(interp, BlueprintReadWrite, Category = "Lens|Local Exposure", meta = (UIMin = "-15.0", UIMax = "15.0", editcondition = "bOverride_LocalExposureMiddleGreyBias", DisplayName = "Middle Grey Bias"))
	float LocalExposureMiddleGreyBias;

	OWL360CAMERA_API FOWL360LensLocalExposureSettings()
	{
		FMemory::Memzero(this, sizeof(FOWL360LensLocalExposureSettings));
		LocalExposureHighlightContrastScale = 1.0f;
		LocalExposureShadowContrastScale = 1.0f;
		LocalExposureDetailStrength = 1.0f;
		LocalExposureBlurredLuminanceBlend = 0.6f;
		LocalExposureBlurredLuminanceKernelSizePercent = 50.0f;
		LocalExposureMiddleGreyBias = 0.0f;
	}

	/* Exports to post process settings with overrides. */
	OWL360CAMERA_API void ExportToPostProcessSettings(FOWL360PostProcessSettings* OutPostProcessSettings) const;
};

// TODO: IT SHOULD BO POSSIBLE FOR US TO IMPLEMENT LENS FLARES IN THE FUTURE
// IF WE DO IT ON THE OUTPUT TEXTURE INSTEAD OF THE 6 SEPARATE ONES
// [WE WOULD NEED TO FIGURE OUT CUBEMAP TO EQUI CONVERSIONFOR THE TEXTURE]
// MAIN ISSUE WILL BE BOKEH SHAPE (?)

//USTRUCT(BlueprintType)
//struct FOWL360LensLensFlaresSettings
//{
//	GENERATED_BODY()
//
//	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))
//	uint8 bOverride_LensFlareIntensity : 1;
//	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))
//	uint8 bOverride_LensFlareTint : 1;
//	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))
//	uint8 bOverride_LensFlareBokehSize : 1;
//	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))
//	uint8 bOverride_LensFlareBokehShape : 1;
//	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))
//	uint8 bOverride_LensFlareThreshold : 1;
//
//	/** Brightness scale of the image cased lens flares (linear) */
//	UPROPERTY(interp, BlueprintReadWrite, Category = "Lens|Lens Flares", meta = (UIMin = "0.0", UIMax = "16.0", editcondition = "bOverride_LensFlareIntensity", DisplayName = "Intensity"))
//	float Intensity;
//	/** Tint color for the image based lens flares. */
//	UPROPERTY(interp, BlueprintReadWrite, Category = "Lens|Lens Flares", meta = (editcondition = "bOverride_LensFlareTint", DisplayName = "Tint", HideAlphaChannel))
//	FLinearColor Tint;
//	/** Size of the Lens Blur (in percent of the view width) that is done with the Bokeh texture (note: performance cost is radius*radius) */
//	UPROPERTY(interp, BlueprintReadWrite, Category = "Lens|Lens Flares", meta = (UIMin = "0.0", UIMax = "32.0", editcondition = "bOverride_LensFlareBokehSize", DisplayName = "BokehSize"))
//	float BokehSize;
//	/** Minimum brightness the lens flare starts having effect (this should be as high as possible to avoid the performance cost of blurring content that is too dark too see) */
//	UPROPERTY(interp, BlueprintReadWrite, Category = "Lens|Lens Flares", meta = (UIMin = "0.1", UIMax = "32.0", editcondition = "bOverride_LensFlareThreshold", DisplayName = "Threshold"))
//	float Threshold;
//	/** Defines the shape of the Bokeh when the image base lens flares are blurred, cannot be blended */
//	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Lens|Lens Flares", meta = (editcondition = "bOverride_LensFlareBokehShape", DisplayName = "BokehShape"))
//	class UTexture* BokehShape;
//	/** RGB defines the lens flare color, A it's position. This is a temporary solution. */
//	UPROPERTY(EditAnywhere, Category = "Lens|Lens Flares", meta = (editcondition = "bOverride_LensFlareTints", DisplayName = "Tints"))
//	FLinearColor Tints[8];
//
//	OWL360CAMERA_API FOWL360LensLensFlaresSettings()
//	{
//		FMemory::Memzero(this, sizeof(FOWL360LensLensFlaresSettings));
//		Intensity = 1.0f;
//		Tint = FLinearColor(1.0f, 1.0f, 1.0f);
//		BokehSize = 3.0f;
//		Threshold = 8.0f;
//		BokehShape = nullptr;
//		Tints[0] = FLinearColor(1.0f, 0.8f, 0.4f, 0.6f);
//		Tints[1] = FLinearColor(1.0f, 1.0f, 0.6f, 0.53f);
//		Tints[2] = FLinearColor(0.8f, 0.8f, 1.0f, 0.46f);
//		Tints[3] = FLinearColor(0.5f, 1.0f, 0.4f, 0.39f);
//		Tints[4] = FLinearColor(0.5f, 0.8f, 1.0f, 0.31f);
//		Tints[5] = FLinearColor(0.9f, 1.0f, 0.8f, 0.27f);
//		Tints[6] = FLinearColor(1.0f, 0.8f, 0.4f, 0.22f);
//		Tints[7] = FLinearColor(0.9f, 0.7f, 0.7f, 0.15f);
//	}
//
//	/* Exports to post process settings with overrides. */
//	OWL360CAMERA_API void ExportToPostProcessSettings(FOWL360PostPorcessSettings* OutPostProcessSettings) const;
//};

// USTRUCT(BlueprintType)
// struct FOWL360LensImageEffectsSettings
// {
// 	GENERATED_BODY()
//
// 	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Overrides, meta=(PinHiddenByDefault, InlineEditConditionToggle))
// 	uint8 bOverride_VignetteIntensity:1;
//
// 	/** 0..1 0=off/no vignette .. 1=strong vignette */
// 	UPROPERTY(interp, BlueprintReadWrite, Category="Lens|Image Effects", meta=(UIMin = "0.0", UIMax = "1.0", editcondition = "bOverride_VignetteIntensity"))
// 	float VignetteIntensity;
//
//
// 	OWL360CAMERA_API FOWL360LensImageEffectsSettings()
// 	{
// 		FMemory::Memzero(this, sizeof(FOWL360LensImageEffectsSettings));
// 		VignetteIntensity = 0.4f;
// 	}
//
// 	/* Exports to post process settings with overrides. */
// 	OWL360CAMERA_API void ExportToPostProcessSettings(FOWL360PostProcessSettings* OutPostProcessSettings) const;
// };

USTRUCT(BlueprintType)
struct FOWL360LensDepthOfFieldSettings
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))
	uint8 bOverride_DepthOfFieldFocalDistance : 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))
	uint8 bOverride_DepthOfFieldDepthBlurAmount : 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))
	uint8 bOverride_DepthOfFieldDepthBlurRadius : 1;

	/** Distance in which the Depth of Field effect should be sharp, in unreal units (cm) */
	UPROPERTY(interp, BlueprintReadWrite, Category = "Lens|Depth of Field", meta = (ClampMin = "0.0", UIMin = "1.0", UIMax = "10000.0", editcondition = "bOverride_DepthOfFieldFocalDistance", DisplayName = "Focal Distance"))
	float FocalDistance;

	/** CircleDOF only: Depth blur km for 50% */
	UPROPERTY(interp, BlueprintReadWrite, Category = "Lens|Depth of Field", meta = (ClampMin = "0.000001", ClampMax = "100.0", editcondition = "bOverride_DepthOfFieldDepthBlurAmount", DisplayName = "Depth Blur km for 50%"))
	float DepthBlurAmount;

	/** CircleDOF only: Depth blur radius in pixels at 1920x */
	UPROPERTY(interp, BlueprintReadWrite, Category = "Lens|Depth of Field", meta = (ClampMin = "0.0", UIMax = "4.0", editcondition = "bOverride_DepthOfFieldDepthBlurRadius", DisplayName = "Depth Blur Radius"))
	float DepthBlurRadius;

	OWL360CAMERA_API FOWL360LensDepthOfFieldSettings()
	{
		FMemory::Memzero(this, sizeof(FOWL360LensDepthOfFieldSettings));
		FocalDistance = 0;	// Intentionally invalid to disable DOF by default.
		DepthBlurAmount = 1.0f;
		DepthBlurRadius = 0.0f;
	}

	/* Exports to post process settings with overrides. */
	OWL360CAMERA_API void ExportToPostProcessSettings(FOWL360PostProcessSettings* OutPostProcessSettings) const;
};

USTRUCT(BlueprintType)
struct FOWL360LensSettings
{
	GENERATED_BODY()

	// UPROPERTY(Interp, BlueprintReadWrite, Category = "Lens")
	// FOWL360LensMobileDepthOfFieldSettings MobileDepthOfField;

	UPROPERTY(Interp, BlueprintReadWrite, Category = "Lens")
	FOWL360LensBloomSettings Bloom;

	UPROPERTY(Interp, BlueprintReadWrite, Category = "Lens")
	FOWL360LensExposureSettings Exposure;

	//UPROPERTY(Interp, BlueprintReadWrite, Category = "Lens")
	//FOWL360LensChromaticAberrationSettings ChromaticAberration;

	//UPROPERTY(Interp, BlueprintReadWrite, Category = "Lens")
	//FOWL360LensDirtMaskSettings DirtMask;

	UPROPERTY(Interp, BlueprintReadWrite, Category = "Lens")
	FOWL360LensCameraSettings Camera;

	UPROPERTY(Interp, BlueprintReadWrite, Category = "Lens")
	FOWL360LensLocalExposureSettings LocalExposure;

	//UPROPERTY(Interp, BlueprintReadWrite, Category = "Lens")
	//FOWL360LensLensFlaresSettings LensFlares;

	// UPROPERTY(Interp, BlueprintReadWrite, Category = "Lens")
	// FOWL360LensImageEffectsSettings ImageEffects;

	UPROPERTY(Interp, BlueprintReadWrite, Category = "Lens")
	FOWL360LensDepthOfFieldSettings DepthOfField;

	FOWL360LensSettings(){}

	/* Exports to post process settings with overrides. */
	OWL360CAMERA_API void ExportToPostProcessSettings(FOWL360PostProcessSettings* OutPostProcessSettings) const;
};

// COLOR GRADING SETTINGS

USTRUCT(BlueprintType)
struct FOWL360ColorGradingTemperatureSettings
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Overrides, meta=(PinHiddenByDefault, InlineEditConditionToggle))
	uint8 bOverride_TemperatureType:1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Overrides, meta=(PinHiddenByDefault, InlineEditConditionToggle))
	uint8 bOverride_WhiteTemp:1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Overrides, meta=(PinHiddenByDefault, InlineEditConditionToggle))
	uint8 bOverride_WhiteTint:1;

	/**
	* Selects the type of temperature calculation.
	* White Balance uses the Temperature value to control the virtual camera's White Balance. This is the default selection.
	* Color Temperature uses the Temperature value to adjust the color temperature of the scene, which is the inverse of the White Balance operation.
	*/
	UPROPERTY(interp, BlueprintReadWrite, Category = "Color Grading|Temperature", meta = (DisplayName = "Temperature Type", editcondition = "bOverride_TemperatureType" ))
	TEnumAsByte<enum ETemperatureMethod> TemperatureType;
	UPROPERTY(interp, BlueprintReadWrite, Category="Color Grading|Temperature", meta=(UIMin = "1500.0", UIMax = "15000.0", editcondition = "bOverride_WhiteTemp", DisplayName = "Temp"))
	float WhiteTemp;
	UPROPERTY(interp, BlueprintReadWrite, Category="Color Grading|Temperature", meta=(UIMin = "-1.0", UIMax = "1.0", editcondition = "bOverride_WhiteTint", DisplayName = "Tint"))
	float WhiteTint;

	OWL360CAMERA_API FOWL360ColorGradingTemperatureSettings()
	{
		FMemory::Memzero(this, sizeof(FOWL360ColorGradingTemperatureSettings));
		TemperatureType = ETemperatureMethod::TEMP_WhiteBalance;
		WhiteTemp = 6500.0f;
		WhiteTint = 0.0f;
	}

	/* Exports to post process settings with overrides. */
	OWL360CAMERA_API void ExportToPostProcessSettings(FOWL360PostProcessSettings* OutPostProcessSettings) const;
};

USTRUCT(BlueprintType)
struct FOWL360ColorGradingGlobalSettings
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))
	uint8 bOverride_ColorSaturation : 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))
	uint8 bOverride_ColorContrast : 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))
	uint8 bOverride_ColorGamma : 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))
	uint8 bOverride_ColorGain : 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))
	uint8 bOverride_ColorOffset : 1;

	UPROPERTY(Interp, BlueprintReadWrite, Category = "Color Grading", meta = (UIMin = "0.0", UIMax = "2.0", Delta = "0.01", ColorGradingMode = "saturation", ShiftMouseMovePixelPerDelta = "10", SupportDynamicSliderMaxValue = "true", editcondition = "bOverride_ColorSaturation", DisplayName = "Saturation"))
	FVector4 Saturation;
	UPROPERTY(Interp, BlueprintReadWrite, Category = "Color Grading", meta = (UIMin = "0.0", UIMax = "2.0", Delta = "0.01", ColorGradingMode = "contrast", ShiftMouseMovePixelPerDelta = "10", SupportDynamicSliderMaxValue = "true", editcondition = "bOverride_ColorContrast", DisplayName = "Contrast"))
	FVector4 Contrast;
	UPROPERTY(Interp, BlueprintReadWrite, Category = "Color Grading", meta = (UIMin = "0.0", UIMax = "2.0", Delta = "0.01", ColorGradingMode = "gamma", ShiftMouseMovePixelPerDelta = "10", SupportDynamicSliderMaxValue = "true", editcondition = "bOverride_ColorGamma", DisplayName = "Gamma"))
	FVector4 Gamma;
	UPROPERTY(Interp, BlueprintReadWrite, Category = "Color Grading", meta = (UIMin = "0.0", UIMax = "2.0", Delta = "0.01", ColorGradingMode = "gain", ShiftMouseMovePixelPerDelta = "10", SupportDynamicSliderMaxValue = "true", editcondition = "bOverride_ColorGain", DisplayName = "Gain"))
	FVector4 Gain;
	UPROPERTY(Interp, BlueprintReadWrite, Category = "Color Grading", meta = (UIMin = "-1.0", UIMax = "1.0", Delta = "0.001", ColorGradingMode = "offset", ShiftMouseMovePixelPerDelta = "20", SupportDynamicSliderMaxValue = "true", SupportDynamicSliderMinValue = "true", editcondition = "bOverride_ColorOffset", DisplayName = "Offset"))
	FVector4 Offset;

	FOWL360ColorGradingGlobalSettings()
	{
		FMemory::Memzero(this, sizeof(FOWL360ColorGradingGlobalSettings));
		Saturation = FVector4(1.0f, 1.0f, 1.0f, 1.0f);
		Contrast = FVector4(1.0f, 1.0f, 1.0f, 1.0f);
		Gamma = FVector4(1.0f, 1.0f, 1.0f, 1.0f);
		Gain = FVector4(1.0f, 1.0f, 1.0f, 1.0f);
		Offset = FVector4(0.0f, 0.0f, 0.0f, 0.0f);
	}
};

USTRUCT(BlueprintType)
struct FOWL360ColorGradingShadowsSettings
{
	GENERATED_BODY()


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))
	uint8 bOverride_ColorSaturationShadows : 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))
	uint8 bOverride_ColorContrastShadows : 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))
	uint8 bOverride_ColorGammaShadows : 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))
	uint8 bOverride_ColorGainShadows : 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))
	uint8 bOverride_ColorOffsetShadows : 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))
	uint8 bOverride_ColorCorrectionShadowsMax : 1;

	UPROPERTY(Interp, BlueprintReadWrite, Category = "Color Grading", meta = (UIMin = "0.0", UIMax = "2.0", Delta = "0.01", ColorGradingMode = "saturation", ShiftMouseMovePixelPerDelta = "10", SupportDynamicSliderMaxValue = "true", editcondition = "bOverride_ColorSaturationShadows", DisplayName = "Saturation"))
	FVector4 Saturation;
	UPROPERTY(Interp, BlueprintReadWrite, Category = "Color Grading", meta = (UIMin = "0.0", UIMax = "2.0", Delta = "0.01", ColorGradingMode = "contrast", ShiftMouseMovePixelPerDelta = "10", SupportDynamicSliderMaxValue = "true", editcondition = "bOverride_ColorContrastShadows", DisplayName = "Contrast"))
	FVector4 Contrast;
	UPROPERTY(Interp, BlueprintReadWrite, Category = "Color Grading", meta = (UIMin = "0.0", UIMax = "2.0", Delta = "0.01", ColorGradingMode = "gamma", ShiftMouseMovePixelPerDelta = "10", SupportDynamicSliderMaxValue = "true", editcondition = "bOverride_ColorGammaShadows", DisplayName = "Gamma"))
	FVector4 Gamma;
	UPROPERTY(Interp, BlueprintReadWrite, Category = "Color Grading", meta = (UIMin = "0.0", UIMax = "2.0", Delta = "0.01", ColorGradingMode = "gain", ShiftMouseMovePixelPerDelta = "10", SupportDynamicSliderMaxValue = "true", editcondition = "bOverride_ColorGainShadows", DisplayName = "Gain"))
	FVector4 Gain;
	UPROPERTY(Interp, BlueprintReadWrite, Category = "Color Grading", meta = (UIMin = "-1.0", UIMax = "1.0", Delta = "0.001", ColorGradingMode = "offset", ShiftMouseMovePixelPerDelta = "20", SupportDynamicSliderMaxValue = "true", SupportDynamicSliderMinValue = "true", editcondition = "bOverride_ColorOffsetShadows", DisplayName = "Offset"))
	FVector4 Offset;
	UPROPERTY(Interp, BlueprintReadWrite, Category = "Color Grading", meta = (UIMin = "-1.0", UIMax = "1.0", editcondition = "bOverride_ColorCorrectionShadowsMax", DisplayName = "ShadowsMax"))
	float ShadowsMax;

	FOWL360ColorGradingShadowsSettings()
	{
		FMemory::Memzero(this, sizeof(FOWL360ColorGradingShadowsSettings));
		Saturation = FVector4(1.0f, 1.0f, 1.0f, 1.0f);
		Contrast = FVector4(1.0f, 1.0f, 1.0f, 1.0f);
		Gamma = FVector4(1.0f, 1.0f, 1.0f, 1.0f);
		Gain = FVector4(1.0f, 1.0f, 1.0f, 1.0f);
		Offset = FVector4(0.0f, 0.0f, 0.0f, 0.0f);
		ShadowsMax = 0.09f;
	}
};

USTRUCT(BlueprintType)
struct FOWL360ColorGradingHighlightsSettings
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))
	uint8 bOverride_ColorSaturationHighlights : 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))
	uint8 bOverride_ColorContrastHighlights : 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))
	uint8 bOverride_ColorGammaHighlights : 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))
	uint8 bOverride_ColorGainHighlights : 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))
	uint8 bOverride_ColorOffsetHighlights : 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))
	uint8 bOverride_ColorCorrectionHighlightsMin : 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))
	uint8 bOverride_ColorCorrectionHighlightsMax : 1;

	UPROPERTY(Interp, BlueprintReadWrite, Category = "Color Grading", meta = (UIMin = "0.0", UIMax = "2.0", Delta = "0.01", ColorGradingMode = "saturation", ShiftMouseMovePixelPerDelta = "10", SupportDynamicSliderMaxValue = "true", editcondition = "bOverride_ColorSaturationHighlights", DisplayName = "Saturation"))
	FVector4 Saturation;
	UPROPERTY(Interp, BlueprintReadWrite, Category = "Color Grading", meta = (UIMin = "0.0", UIMax = "2.0", Delta = "0.01", ColorGradingMode = "contrast", ShiftMouseMovePixelPerDelta = "10", SupportDynamicSliderMaxValue = "true", editcondition = "bOverride_ColorContrastHighlights", DisplayName = "Contrast"))
	FVector4 Contrast;
	UPROPERTY(Interp, BlueprintReadWrite, Category = "Color Grading", meta = (UIMin = "0.0", UIMax = "2.0", Delta = "0.01", ColorGradingMode = "gamma", ShiftMouseMovePixelPerDelta = "10", SupportDynamicSliderMaxValue = "true", editcondition = "bOverride_ColorGammaHighlights", DisplayName = "Gamma"))
	FVector4 Gamma;
	UPROPERTY(Interp, BlueprintReadWrite, Category = "Color Grading", meta = (UIMin = "0.0", UIMax = "2.0", Delta = "0.01", ColorGradingMode = "gain", ShiftMouseMovePixelPerDelta = "10", SupportDynamicSliderMaxValue = "true", editcondition = "bOverride_ColorGainHighlights", DisplayName = "Gain"))
	FVector4 Gain;
	UPROPERTY(Interp, BlueprintReadWrite, Category = "Color Grading", meta = (UIMin = "-1.0", UIMax = "1.0", Delta = "0.001", ColorGradingMode = "offset", ShiftMouseMovePixelPerDelta = "20", SupportDynamicSliderMaxValue = "true", SupportDynamicSliderMinValue = "true", editcondition = "bOverride_ColorOffsetHighlights", DisplayName = "Offset"))
	FVector4 Offset;
	UPROPERTY(Interp, BlueprintReadWrite, Category = "Color Grading", meta = (UIMin = "-1.0", UIMax = "1.0", editcondition = "bOverride_ColorCorrectionHighlightsMin", DisplayName = "HighlightsMin"))
	float HighlightsMin;
	/** Should be set larger than HighlightsMin. Default is 1.0, for backwards compatibility */
	UPROPERTY(interp, BlueprintReadWrite, Category = "Color Grading|Highlights", meta = (UIMin = "1.0", UIMax = "10.0", editcondition = "bOverride_ColorCorrectionHighlightsMax", DisplayName = "HighlightsMax"))
	float HighlightsMax;

	FOWL360ColorGradingHighlightsSettings()
	{
		FMemory::Memzero(this, sizeof(FOWL360ColorGradingHighlightsSettings));
		Saturation = FVector4(1.0f, 1.0f, 1.0f, 1.0f);
		Contrast = FVector4(1.0f, 1.0f, 1.0f, 1.0f);
		Gamma = FVector4(1.0f, 1.0f, 1.0f, 1.0f);
		Gain = FVector4(1.0f, 1.0f, 1.0f, 1.0f);
		Offset = FVector4(0.0f, 0.0f, 0.0f, 0.0f);
		HighlightsMin = 0.5f;
		HighlightsMax = 1.0f;
	}
};

USTRUCT(BlueprintType)
struct FOWL360ColorGradingMidtonesSettings
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))
	uint8 bOverride_ColorSaturationMidtones : 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))
	uint8 bOverride_ColorContrastMidtones : 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))
	uint8 bOverride_ColorGammaMidtones : 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))
	uint8 bOverride_ColorGainMidtones : 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))
	uint8 bOverride_ColorOffsetMidtones : 1;

	UPROPERTY(Interp, BlueprintReadWrite, Category = "Color Grading", meta = (UIMin = "0.0", UIMax = "2.0", Delta = "0.01", ColorGradingMode = "saturation", ShiftMouseMovePixelPerDelta = "10", SupportDynamicSliderMaxValue = "true", editcondition = "bOverride_ColorSaturationMidtones", DisplayName = "Saturation"))
	FVector4 Saturation;
	UPROPERTY(Interp, BlueprintReadWrite, Category = "Color Grading", meta = (UIMin = "0.0", UIMax = "2.0", Delta = "0.01", ColorGradingMode = "contrast", ShiftMouseMovePixelPerDelta = "10", SupportDynamicSliderMaxValue = "true", editcondition = "bOverride_ColorContrastMidtones", DisplayName = "Contrast"))
	FVector4 Contrast;
	UPROPERTY(Interp, BlueprintReadWrite, Category = "Color Grading", meta = (UIMin = "0.0", UIMax = "2.0", Delta = "0.01", ColorGradingMode = "gamma", ShiftMouseMovePixelPerDelta = "10", SupportDynamicSliderMaxValue = "true", editcondition = "bOverride_ColorGammaMidtones", DisplayName = "Gamma"))
	FVector4 Gamma;
	UPROPERTY(Interp, BlueprintReadWrite, Category = "Color Grading", meta = (UIMin = "0.0", UIMax = "2.0", Delta = "0.01", ColorGradingMode = "gain", ShiftMouseMovePixelPerDelta = "10", SupportDynamicSliderMaxValue = "true", editcondition = "bOverride_ColorGainMidtones", DisplayName = "Gain"))
	FVector4 Gain;
	UPROPERTY(Interp, BlueprintReadWrite, Category = "Color Grading", meta = (UIMin = "-1.0", UIMax = "1.0", Delta = "0.001", ColorGradingMode = "offset", ShiftMouseMovePixelPerDelta = "20", SupportDynamicSliderMaxValue = "true", SupportDynamicSliderMinValue = "true", editcondition = "bOverride_ColorOffsetMidtones", DisplayName = "Offset"))
	FVector4 Offset;

	FOWL360ColorGradingMidtonesSettings()
	{
		FMemory::Memzero(this, sizeof(FOWL360ColorGradingMidtonesSettings));
		Saturation = FVector4(1.0f, 1.0f, 1.0f, 1.0f);
		Contrast = FVector4(1.0f, 1.0f, 1.0f, 1.0f);
		Gamma = FVector4(1.0f, 1.0f, 1.0f, 1.0f);
		Gain = FVector4(1.0f, 1.0f, 1.0f, 1.0f);
		Offset = FVector4(0.0f, 0.0f, 0.0f, 0.0f);
	}
};

USTRUCT(BlueprintType)
struct FOWL360ColorGradingMiscSettings
{
	GENERATED_BODY()

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))
	//uint8 bOverride_BlueCorrection : 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))
	uint8 bOverride_ExpandGamut : 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))
	uint8 bOverride_ToneCurveAmount : 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))
	uint8 bOverride_SceneColorTint : 1;
	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))
	//uint8 bOverride_ColorGradingIntensity : 1;
	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))
	//uint8 bOverride_ColorGradingLUT : 1;

	// BlueCorrection for some reason isn't working in 360 - needs more investigation
	///** Correct for artifacts with "electric" blues due to the ACEScg color space. Bright blue desaturates instead of going to violet. */
	//UPROPERTY(interp, BlueprintReadWrite, Category = "Color Grading|Misc", meta = (ClampMin = "0.0", ClampMax = "1.0", editcondition = "bOverride_BlueCorrection"))
	//float BlueCorrection;
	/** Expand bright saturated colors outside the sRGB gamut to fake wide gamut rendering. */
	UPROPERTY(interp, BlueprintReadWrite, Category = "Color Grading|Misc", meta = (ClampMin = "0.0", UIMax = "1.0", editcondition = "bOverride_ExpandGamut"))
	float ExpandGamut;
	/** Allow effect of Tone Curve to be reduced (Set ToneCurveAmount and ExpandGamut to 0.0 to fully disable tone curve) */
	UPROPERTY(interp, BlueprintReadWrite, Category = "Color Grading|Misc", meta = (ClampMin = "0.0", UIMax = "1.0", editcondition = "bOverride_ToneCurveAmount"))
	float ToneCurveAmount;
	/** Scene tint color */
	UPROPERTY(interp, BlueprintReadWrite, Category = "Color Grading|Misc", meta = (editcondition = "bOverride_SceneColorTint", HideAlphaChannel))
	FLinearColor SceneColorTint;
	// ColorGrading intensity and ColorGradingLUT for some reason are not working on capture components 360 (needs more research)
	///** Color grading lookup table intensity. 0 = no intensity, 1=full intensity */
	//UPROPERTY(interp, BlueprintReadWrite, Category = "Color Grading|Misc", meta = (ClampMin = "0", ClampMax = "1.0", editcondition = "bOverride_ColorGradingIntensity", DisplayName = "Color Grading LUT Intensity"))
	//float ColorGradingIntensity;
	///** Look up table texture to use or none of not used*/
	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Color Grading|Misc", meta = (editcondition = "bOverride_ColorGradingLUT", DisplayName = "Color Grading LUT"))
	//class UTexture* ColorGradingLUT;

	OWL360CAMERA_API FOWL360ColorGradingMiscSettings()
	{
		FMemory::Memzero(this, sizeof(FOWL360ColorGradingMiscSettings));
		//BlueCorrection = 0.6f;
		ExpandGamut = 1.0f;
		SceneColorTint = FLinearColor(1, 1, 1);
		ToneCurveAmount = 1.0;
		//ColorGradingIntensity = 1.0f;
		//ColorGradingLUT = nullptr;
	}

	/* Exports to post process settings with overrides. */
	OWL360CAMERA_API void ExportToPostProcessSettings(FOWL360PostProcessSettings* OutPostProcessSettings) const;
};

USTRUCT(BlueprintType)
struct FOWL360ColorGradingSettings
{
	GENERATED_BODY()

	UPROPERTY(Interp, BlueprintReadWrite, Category = "Color Grading")
	FOWL360ColorGradingTemperatureSettings Temperature;

	UPROPERTY(Interp, BlueprintReadWrite, Category = "Color Grading")
	FOWL360ColorGradingGlobalSettings Global;

	UPROPERTY(Interp, BlueprintReadWrite, Category = "Color Grading")
	FOWL360ColorGradingShadowsSettings Shadows;

	UPROPERTY(Interp, BlueprintReadWrite, Category = "Color Grading")
	FOWL360ColorGradingMidtonesSettings Midtones;

	UPROPERTY(Interp, BlueprintReadWrite, Category = "Color Grading")
	FOWL360ColorGradingHighlightsSettings Highlights;

	UPROPERTY(Interp, BlueprintReadWrite, Category = "Color Grading")
	FOWL360ColorGradingMiscSettings Misc;

	FOWL360ColorGradingSettings(){}

	/* Exports to post process settings with overrides. */
	OWL360CAMERA_API void ExportToPostProcessSettings(FOWL360PostProcessSettings* OutPostProcessSettings) const;
};

// TODO: We need to implement out own tonemapping somehow to be able to expose any of the tonemapper settings

//// FILM SETTINGS

//USTRUCT(BlueprintType)
//struct FOWL360FilmSettings
//{
//	GENERATED_BODY()
//
//	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))
//	uint8 bOverride_FilmSlope : 1;
//	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))
//	uint8 bOverride_FilmToe : 1;
//	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))
//	uint8 bOverride_FilmShoulder : 1;
//	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))
//	uint8 bOverride_FilmBlackClip : 1;
//	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))
//	uint8 bOverride_FilmWhiteClip : 1;
//
//	UPROPERTY(Interp, BlueprintReadWrite, Category = "Film Stock", meta = (UIMin = "0.0", UIMax = "1.0", editcondition = "bOverride_FilmSlope", DisplayName = "Slope"))
//	float Slope;
//	UPROPERTY(Interp, BlueprintReadWrite, Category = "Film Stock", meta = (UIMin = "0.0", UIMax = "1.0", editcondition = "bOverride_FilmToe", DisplayName = "Toe"))
//	float Toe;
//	UPROPERTY(Interp, BlueprintReadWrite, Category = "Film Stock", meta = (UIMin = "0.0", UIMax = "1.0", editcondition = "bOverride_FilmShoulder", DisplayName = "Shoulder"))
//	float Shoulder;
//	UPROPERTY(Interp, BlueprintReadWrite, Category = "Film Stock", meta = (UIMin = "0.0", UIMax = "1.0", editcondition = "bOverride_FilmBlackClip", DisplayName = "Black clip"))
//	float BlackClip;
//	UPROPERTY(Interp, BlueprintReadWrite, Category = "Film Stock", meta = (UIMin = "0.0", UIMax = "1.0", editcondition = "bOverride_FilmWhiteClip", DisplayName = "White clip"))
//	float WhiteClip;
//
//	FOWL360FilmSettings()
//	{
//		FMemory::Memzero(this, sizeof(FOWL360FilmSettings));
//		Slope = 0.88f;
//		Toe = 0.55f;
//		Shoulder = 0.26f;
//		BlackClip = 0.0f;
//		WhiteClip = 0.04f;
//	}
//
//	/* Exports to post process settings with overrides. */
//	OWL360CAMERA_API void ExportToPostProcessSettings(FOWL360PostPorcessSettings* OutPostProcessSettings) const;
//};

USTRUCT(BlueprintType)
struct FOWL360GlobalIlluminationLumenAdvancedSettings
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))
	uint32 bOverride_LumenSceneLightingUpdateSpeed : 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))
	uint32 bOverride_LumenFinalGatherLightingUpdateSpeed : 1;

	/** Controls how much Lumen Scene is allowed to cache lighting results to improve performance.  Larger scales cause lighting changes to propagate faster, but increase GPU cost. */
	UPROPERTY(interp, EditAnywhere, BlueprintReadWrite, Category = "Global Illumination|Lumen Global Illumination", AdvancedDisplay, meta = (ClampMin = ".5", UIMax = "4", editcondition = "bOverride_LumenSceneLightingUpdateSpeed", DisplayName = "Lumen Scene Lighting Update Speed"))
	float LumenSceneLightingUpdateSpeed;

	/** Controls how much Lumen Final Gather is allowed to cache lighting results to improve performance.  Larger scales cause lighting changes to propagate faster, but increase GPU cost and noise. */
	UPROPERTY(interp, EditAnywhere, BlueprintReadWrite, Category = "Global Illumination|Lumen Global Illumination", AdvancedDisplay, meta = (ClampMin = ".5", UIMax = "4", editcondition = "bOverride_LumenFinalGatherLightingUpdateSpeed", DisplayName = "Final Gather Lighting Update Speed"))
	float LumenFinalGatherLightingUpdateSpeed;

	FOWL360GlobalIlluminationLumenAdvancedSettings()
	{
		FMemory::Memzero(this, sizeof(FOWL360GlobalIlluminationLumenAdvancedSettings));
		LumenSceneLightingUpdateSpeed = 1;
		LumenFinalGatherLightingUpdateSpeed = 1;
	}

	/* Exports to post process settings with overrides. */
	OWL360CAMERA_API void ExportToPostProcessSettings(FOWL360PostProcessSettings* OutPostProcessSettings) const;
};

// GLOBAL ILLUMINATION SETTINGS
USTRUCT(BlueprintType)
struct FOWL360GlobalIlluminationLumenSettings
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))
	uint32 bOverride_LumenSceneLightingQuality : 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))
	uint32 bOverride_LumenSceneDetail : 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))
	uint32 bOverride_LumenSceneViewDistance : 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))
	uint32 bOverride_LumenFinalGatherQuality : 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))
	uint32 bOverride_LumenMaxTraceDistance : 1;


	/** Scales Lumen Scene's quality.  Larger scales cause Lumen Scene to be calculated with a higher fidelity, which can be visible in reflections, but increase GPU cost. */
	UPROPERTY(interp, EditAnywhere, BlueprintReadWrite, Category = "Global Illumination|Lumen Global Illumination", meta = (ClampMin = ".25", UIMax = "2", editcondition = "bOverride_LumenSceneLightingQuality", DisplayName = "Lumen Scene Lighting Quality"))
	float LumenSceneLightingQuality;

	/** Controls the size of instances that can be represented in Lumen Scene.  Larger values will ensure small objects are represented, but increase GPU cost. */
	UPROPERTY(interp, EditAnywhere, BlueprintReadWrite, Category = "Global Illumination|Lumen Global Illumination", meta = (ClampMin = ".25", UIMax = "4", editcondition = "bOverride_LumenSceneDetail", DisplayName = "Lumen Scene Detail"))
	float LumenSceneDetail;

	/** Sets the maximum view distance of the scene that Lumen maintains for ray tracing against.  Larger values will increase the effective range of sky shadowing and Global Illumination, but increase GPU cost. */
	UPROPERTY(interp, EditAnywhere, BlueprintReadWrite, Category = "Global Illumination|Lumen Global Illumination", meta = (ClampMin = "1", UIMax = "2097152", editcondition = "bOverride_LumenSceneViewDistance", DisplayName = "Lumen Scene View Distance"))
	float LumenSceneViewDistance;

	/** Scales Lumen's Final Gather quality.  Larger scales reduce noise, but greatly increase GPU cost. */
	UPROPERTY(interp, EditAnywhere, BlueprintReadWrite, Category = "Global Illumination|Lumen Global Illumination", meta = (ClampMin = ".25", UIMax = "2", editcondition = "bOverride_LumenFinalGatherQuality", DisplayName = "Final Gather Quality"))
	float LumenFinalGatherQuality;

	/** Controls the maximum distance that Lumen should trace while solving lighting.  Values that are too small will cause lighting to leak into large caves, while values that are large will increase GPU cost. */
	UPROPERTY(interp, EditAnywhere, BlueprintReadWrite, Category = "Global Illumination|Lumen Global Illumination", meta = (ClampMin = "1", UIMax = "2097152", editcondition = "bOverride_LumenMaxTraceDistance", DisplayName = "Max Trace Distance"))
	float LumenMaxTraceDistance;

	UPROPERTY(Interp, BlueprintReadWrite, Category = "Global Illumination|Lumen Global Illumination")
	FOWL360GlobalIlluminationLumenAdvancedSettings Advanced;

	FOWL360GlobalIlluminationLumenSettings()
	{
		FMemory::Memzero(this, sizeof(FOWL360GlobalIlluminationLumenSettings));
		LumenSceneLightingQuality = 1;
		LumenSceneDetail = 1.0f;
		LumenSceneViewDistance = 20000.0f;
		LumenFinalGatherQuality = 1;
		LumenMaxTraceDistance = 20000.0f;
	}

	/* Exports to post process settings with overrides. */
	OWL360CAMERA_API void ExportToPostProcessSettings(FOWL360PostProcessSettings* OutPostProcessSettings) const;
};

USTRUCT(BlueprintType)
struct FOWL360GlobalIlluminationRayTracingSettings
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))
	uint32 bOverride_RayTracingGI : 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))
	uint32 bOverride_RayTracingGIMaxBounces : 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))
	uint32 bOverride_RayTracingGISamplesPerPixel : 1;

	/** Sets the ray tracing global illumination type. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Global Illumination|Ray Tracing", meta = (editcondition = "bOverride_RayTracingGI", DisplayName = "Type"))
	ERayTracingGlobalIlluminationType Type;
	/** Sets the ray tracing global illumination maximum bounces. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Global Illumination|Ray Tracing", meta = (ClampMin = "0", ClampMax = "50", editcondition = "bOverride_RayTracingGIMaxBounces", DisplayName = "Max. Bounces"))
	int32 MaxBounces;
	/** Sets the samples per pixel for ray tracing global illumination. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Global Illumination|Ray Tracing", meta = (ClampMin = "1", ClampMax = "64", editcondition = "bOverride_RayTracingGISamplesPerPixel", DisplayName = "Samples Per Pixel"))
	int32 SamplesPerPixel;

	FOWL360GlobalIlluminationRayTracingSettings()
	{
		FMemory::Memzero(this, sizeof(FOWL360GlobalIlluminationRayTracingSettings));
		Type = ERayTracingGlobalIlluminationType::Disabled;
		MaxBounces = 1;
		SamplesPerPixel = 4;
	}

	/* Exports to post process settings with overrides. */
	OWL360CAMERA_API void ExportToPostProcessSettings(FOWL360PostProcessSettings* OutPostProcessSettings) const;
};

USTRUCT(BlueprintType)
struct FOWL360GlobalIlluminationSettings
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))
	uint32 bOverride_DynamicGlobalIlluminationMethod : 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))
	uint8 bOverride_IndirectLightingColor : 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))
	uint8 bOverride_IndirectLightingIntensity : 1;


	/** Chooses the Dynamic Global Illumination method. */
	UPROPERTY(interp, EditAnywhere, BlueprintReadWrite, Category = "Global Illumination", meta = (editcondition = "bOverride_DynamicGlobalIlluminationMethod", DisplayName = "Method"))
	TEnumAsByte<EDynamicGlobalIlluminationMethod::Type> DynamicGlobalIlluminationMethod;
	/** Adjusts indirect lighting color. (1,1,1) is default. (0,0,0) to disable GI. The show flag 'Global Illumination' must be enabled to use this property. */
	UPROPERTY(interp, BlueprintReadWrite, Category = "Global Illumination", meta = (editcondition = "bOverride_IndirectLightingColor", DisplayName = "Indirect Lighting Color", HideAlphaChannel))
	FLinearColor IndirectLightingColor;
	/** Scales the indirect lighting contribution. A value of 0 disables GI. Default is 1. The show flag 'Global Illumination' must be enabled to use this property. */
	UPROPERTY(interp, BlueprintReadWrite, Category = "Global Illumination", meta = (ClampMin = "0", UIMax = "4.0", editcondition = "bOverride_IndirectLightingIntensity", DisplayName = "Indirect Lighting Intensity"))
	float IndirectLightingIntensity;

	UPROPERTY(Interp, BlueprintReadWrite, Category = "Global Illumination|Lumen")
	FOWL360GlobalIlluminationLumenSettings Lumen;

	UPROPERTY(Interp, BlueprintReadWrite, Category = "Global Illumination|Ray Tracing")
	FOWL360GlobalIlluminationRayTracingSettings RayTracing;

	FOWL360GlobalIlluminationSettings()
	{
		FMemory::Memzero(this, sizeof(FOWL360GlobalIlluminationSettings));
		DynamicGlobalIlluminationMethod = EDynamicGlobalIlluminationMethod::Lumen;
		IndirectLightingColor = FLinearColor(1.0f, 1.0f, 1.0f);
		IndirectLightingIntensity = 1.0f;
	}

	/* Exports to post process settings with overrides. */
	OWL360CAMERA_API void ExportToPostProcessSettings(FOWL360PostProcessSettings* OutPostProcessSettings) const;
};

// REFLECTIONS

USTRUCT(BlueprintType)
struct FOWL360ReflectionsLumenSettings
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Overrides, meta=(PinHiddenByDefault, InlineEditConditionToggle))
	uint8 bOverride_LumenReflectionQuality:1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Overrides, meta=(PinHiddenByDefault, InlineEditConditionToggle))
	uint8 bOverride_LumenRayLightingMode:1;

	/** Scales the Reflection quality.  Larger scales reduce noise in reflections, but greatly increase GPU cost. */
	UPROPERTY(interp, EditAnywhere, BlueprintReadWrite, Category = "Reflections|Lumen", meta = (ClampMin = ".25", UIMax = "2", editcondition = "bOverride_LumenReflectionQuality", DisplayName = "Quality"))
	float LumenReflectionQuality;

	/** Controls how Lumen rays are lit when Lumen is using Hardware Ray Tracing.  By default, Lumen uses the Surface Cache for best performance, but can be set to 'Hit Lighting' for higher quality. */
	UPROPERTY(interp, EditAnywhere, BlueprintReadWrite, Category = "Reflections|Lumen Reflections", meta = (editcondition = "bOverride_LumenRayLightingMode", DisplayName = "Ray Lighting Mode"))
	ELumenRayLightingModeOverride LumenRayLightingMode;


	FOWL360ReflectionsLumenSettings()
	{
		FMemory::Memzero(this, sizeof(FOWL360ReflectionsLumenSettings));
		LumenReflectionQuality = 1;
		LumenRayLightingMode = ELumenRayLightingModeOverride::Default;
	}

	/* Exports to post process settings with overrides. */
	OWL360CAMERA_API void ExportToPostProcessSettings(FOWL360PostProcessSettings* OutPostProcessSettings) const;
};

// TODO: NEEDS INDEPENDENT RESEARCH, SSE IS DEFAULT REFLECTION TYPE FOR NOW, UNTIL WE SORT OUT DIRECT_X_12
// IT MIGHT STILL GIVE ARTIFACTS (ESPECIALLY WITH BIGGER METALLIC SURFACES)

USTRUCT(BlueprintType)
struct FOWL360ReflectionsScreenSpaceSettings
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))
	uint8 bOverride_ScreenSpaceReflectionIntensity : 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))
	uint8 bOverride_ScreenSpaceReflectionQuality : 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))
	uint8 bOverride_ScreenSpaceReflectionMaxRoughness : 1;

	/** Enable/Fade/disable the Screen Space Reflection feature, in percent, avoid numbers between 0 and 1 fo consistency */
	UPROPERTY(interp, BlueprintReadWrite, Category = "Reflections|Screen Space", meta = (ClampMin = "0.0", ClampMax = "100.0", editcondition = "bOverride_ScreenSpaceReflectionIntensity", DisplayName = "Intensity"))
	float Intensity;
	/** 0=lowest quality..100=maximum quality, only a few quality levels are implemented, no soft transition, 50 is the default for better performance. */
	UPROPERTY(interp, BlueprintReadWrite, Category = "Reflections|Screen Space", meta = (ClampMin = "0.0", UIMax = "100.0", editcondition = "bOverride_ScreenSpaceReflectionQuality", DisplayName = "Quality"))
	float Quality;
	/** Until what roughness we fade the screen space reflections, 0.8 works well, smaller can run faster */
	UPROPERTY(interp, BlueprintReadWrite, Category = "Reflections|Screen Space", meta = (ClampMin = "0.01", ClampMax = "1.0", editcondition = "bOverride_ScreenSpaceReflectionMaxRoughness", DisplayName = "Max Roughness"))
	float MaxRoughness;

	FOWL360ReflectionsScreenSpaceSettings()
	{
		FMemory::Memzero(this, sizeof(FOWL360ReflectionsScreenSpaceSettings));
		Intensity = 100.0f;
		Quality = 50.0f;
		MaxRoughness = 0.6f;
	}

	/* Exports to post process settings with overrides. */
	OWL360CAMERA_API void ExportToPostProcessSettings(FOWL360PostProcessSettings* OutPostProcessSettings) const;
};

USTRUCT(BlueprintType)
struct FOWL360ReflectionsRayTracingSettings
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))
	uint32 bOverride_RayTracingReflectionsMaxRoughness : 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))
	uint32 bOverride_RayTracingReflectionsMaxBounces : 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))
	uint32 bOverride_RayTracingReflectionsSamplesPerPixel : 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))
	uint32 bOverride_RayTracingReflectionsShadows : 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))
	uint32 bOverride_RayTracingReflectionsTranslucency : 1;

	/** Sets the maximum roughness until which ray tracing reflections will be visible (lower value is faster). Reflection contribution is smoothly faded when close to roughness threshold. This parameter behaves similarly to ScreenSpaceReflectionMaxRoughness. */
	UPROPERTY(interp, BlueprintReadWrite, Category = "Reflections|Ray Tracing", meta = (ClampMin = "0.01", ClampMax = "1.0", editcondition = "bOverride_RayTracingReflectionsMaxRoughness", DisplayName = "Max Roughness"))
	float MaxRoughness;
	/** Sets the maximum number of ray tracing reflection bounces. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Reflections|Ray Tracing", meta = (ClampMin = "0", ClampMax = "50", editcondition = "bOverride_RayTracingReflectionsMaxBounces", DisplayName = "Max. Bounces"))
	int32 MaxBounces;
	/** Sets the samples per pixel for ray traced reflections. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Reflections|Ray Tracing", meta = (ClampMin = "1", ClampMax = "64", editcondition = "bOverride_RayTracingReflectionsSamplesPerPixel", DisplayName = "Samples Per Pixel"))
	int32 SamplesPerPixel;
	/** Sets the reflected shadows type. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Reflections|Ray Tracing", meta = (editcondition = "bOverride_RayTracingReflectionsShadows", DisplayName = "Shadows"))
	EReflectedAndRefractedRayTracedShadows Shadows;
	/** Enables ray tracing translucency in reflections. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Reflections|Ray Tracing", meta = (editcondition = "bOverride_RayTracingReflectionsTranslucency", DisplayName = "Include Translucent Objects"))
	uint8 Translucency : 1;

	FOWL360ReflectionsRayTracingSettings()
	{
		FMemory::Memzero(this, sizeof(FOWL360ReflectionsRayTracingSettings));
		MaxRoughness = 0.6f;
		MaxBounces = 1;
		SamplesPerPixel = 1;
		Shadows = EReflectedAndRefractedRayTracedShadows::Hard_shadows;
		Translucency = 0;
	}

	/* Exports to post process settings with overrides. */
	OWL360CAMERA_API void ExportToPostProcessSettings(FOWL360PostProcessSettings* OutPostProcessSettings) const;
};

USTRUCT(BlueprintType)
struct FOWL360ReflectionsSettings
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Overrides, meta=(PinHiddenByDefault, InlineEditConditionToggle))
	uint8 bOverride_ReflectionMethod:1;

	/** Chooses the Reflection method. */
	UPROPERTY(interp, EditAnywhere, BlueprintReadWrite, Category = "Reflections", meta = (editcondition = "bOverride_ReflectionMethod", DisplayName = "Method"))
	TEnumAsByte<EReflectionMethod::Type> ReflectionMethod;

	UPROPERTY(Interp, BlueprintReadWrite, Category = "Reflections|Lumen")
	FOWL360ReflectionsLumenSettings Lumen;

	UPROPERTY(Interp, BlueprintReadWrite, Category = "Reflections|Screen Space")
	FOWL360ReflectionsScreenSpaceSettings ScreenSpace;

	UPROPERTY(Interp, BlueprintReadWrite, Category = "Reflections|Ray Tracing")
	FOWL360ReflectionsRayTracingSettings RayTracing;

	FOWL360ReflectionsSettings()
	{
		FMemory::Memzero(this, sizeof(FOWL360ReflectionsSettings));
		ReflectionMethod = EReflectionMethod::Lumen;
	}

	/* Exports to post process settings with overrides. */
	OWL360CAMERA_API void ExportToPostProcessSettings(FOWL360PostProcessSettings* OutPostProcessSettings) const;
};



// RENDERING FEATURES SETTINGS

// TODO: We need to implement this in equirectangular/ cubemap space

//USTRUCT(BlueprintType)
//struct FOWL360WeightedBlendable
//{
//	GENERATED_BODY()
//
//	/** 0:no effect .. 1:full effect */
//	UPROPERTY(interp, BlueprintReadWrite, Category = FWeightedBlendable, meta = (ClampMin = "0.0", ClampMax = "1.0", Delta = "0.01"))
//	float Weight;
//
//	/** should be of the IBlendableInterface* type but UProperties cannot express that */
//	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FWeightedBlendable, meta = (AllowedClasses = "BlendableInterface", Keywords = "PostProcess"))
//	UObject* Object;
//
//	// default constructor
//	FOWL360WeightedBlendable()
//		: Weight(-1)
//		, Object(0)
//	{
//	}
//
//	// constructor
//	// @param InWeight -1 is used to hide the weight and show the "Choose" UI, 0:no effect .. 1:full effect
//	FOWL360WeightedBlendable(float InWeight, UObject* InObject)
//		: Weight(InWeight)
//		, Object(InObject)
//	{
//	}
//};

// TODO: We need to implement this in equirectangular/ cubemap space

//// for easier detail customization, needed?
//USTRUCT(BlueprintType)
//struct FOWL360WeightedBlendables
//{
//	GENERATED_BODY()
//
//public:
//
//	FOWL360WeightedBlendables() { }
//	FOWL360WeightedBlendables(const TArray<FOWL360WeightedBlendable>& InArray) : Array(InArray) { }
//
//	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PostProcessSettings360", meta = (Keywords = "PostProcess"))
//	TArray<FOWL360WeightedBlendable> Array;
//};

USTRUCT(BlueprintType)
struct FOWL360RenderingFeaturesAmbientCubemapSettings
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))
	uint8 bOverride_AmbientCubemapTint : 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))
	uint8 bOverride_AmbientCubemapIntensity : 1;

	/** AmbientCubemap tint color */
	UPROPERTY(interp, BlueprintReadWrite, Category = "Rendering Features|Ambient Cubemap", meta = (editcondition = "bOverride_AmbientCubemapTint", DisplayName = "Tint", HideAlphaChannel))
	FLinearColor Tint;
	/**
	 * To scale the Ambient cubemap brightness
	 * >=0: off, 1(default), >1 brighter
	 */
	UPROPERTY(interp, BlueprintReadWrite, Category = "Rendering Features|Ambient Cubemap", meta = (ClampMin = "0.0", UIMax = "4.0", editcondition = "bOverride_AmbientCubemapIntensity", DisplayName = "Intensity"))
	float Intensity;
	/** The Ambient cubemap (Affects diffuse and specular shading), blends additively which if different from all other settings here */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Rendering Features|Ambient Cubemap", meta = (DisplayName = "Cubemap Texture"))
	class UTextureCube* AmbientCubemap;

	FOWL360RenderingFeaturesAmbientCubemapSettings()
	{
		FMemory::Memzero(this, sizeof(FOWL360RenderingFeaturesAmbientCubemapSettings));
		Intensity = 1.0f;
		Tint = FLinearColor(1, 1, 1);
		AmbientCubemap = nullptr;
	}

	/* Exports to post process settings with overrides. */
	OWL360CAMERA_API void ExportToPostProcessSettings(FOWL360PostProcessSettings* OutPostProcessSettings) const;
};

USTRUCT(BlueprintType)
struct FOWL360RenderingFeaturesAmbientOcclusionAdvancedSettings
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))
	uint8 bOverride_AmbientOcclusionStaticFraction : 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))
	uint8 bOverride_AmbientOcclusionRadiusInWS : 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))
	uint8 bOverride_AmbientOcclusionFadeDistance : 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))
	uint8 bOverride_AmbientOcclusionFadeRadius : 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))
	uint8 bOverride_AmbientOcclusionPower : 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))
	uint8 bOverride_AmbientOcclusionBias : 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))
	uint8 bOverride_AmbientOcclusionQuality : 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))
	uint8 bOverride_AmbientOcclusionMipBlend : 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))
	uint8 bOverride_AmbientOcclusionMipScale : 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))
	uint8 bOverride_AmbientOcclusionMipThreshold : 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))
	uint8 bOverride_AmbientOcclusionTemporalBlendWeight : 1;

	/** 0..1 0=no effect on static lighting .. 1=AO affects the stat lighting, 0 is free meaning no extra rendering pass */
	UPROPERTY(interp, BlueprintReadWrite, Category = "Rendering Features|Ambient Occlusion", AdvancedDisplay, meta = (ClampMin = "0.0", ClampMax = "1.0", editcondition = "bOverride_AmbientOcclusionStaticFraction", DisplayName = "Static Fraction"))
	float StaticFraction;
	/** true: AO radius is in world space units, false: AO radius is locked the view space in 400 units */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Rendering Features|Ambient Occlusion", AdvancedDisplay, meta = (editcondition = "bOverride_AmbientOcclusionRadiusInWS", DisplayName = "Radius in WorldSpace"))
	uint32 RadiusInWS : 1;
	/** >0, in unreal units, at what distance the AO effect disppears in the distance (avoding artifacts and AO effects on huge object) */
	UPROPERTY(interp, BlueprintReadWrite, Category = "Rendering Features|Ambient Occlusion", AdvancedDisplay, meta = (ClampMin = "0.0", UIMax = "20000.0", editcondition = "bOverride_AmbientOcclusionFadeDistance", DisplayName = "Fade Out Distance"))
	float FadeDistance;
	/** >0, in unreal units, how many units before AmbientOcclusionFadeOutDistance it starts fading out */
	UPROPERTY(interp, BlueprintReadWrite, Category = "Rendering Features|Ambient Occlusion", AdvancedDisplay, meta = (ClampMin = "0.0", UIMax = "20000.0", editcondition = "bOverride_AmbientOcclusionFadeRadius", DisplayName = "Fade Out Radius"))
	float FadeRadius;
	/** >0, in unreal units, bigger values means even distant surfaces affect the ambient occlusion */
	UPROPERTY(interp, BlueprintReadWrite, Category = "Rendering Features|Ambient Occlusion", AdvancedDisplay, meta = (ClampMin = "0.1", UIMax = "8.0", editcondition = "bOverride_AmbientOcclusionPower", DisplayName = "Power"))
	float Power;
	/** >0, in unreal units, default (3.0) works well for flat surfaces but can reduce details */
	UPROPERTY(interp, BlueprintReadWrite, Category = "Rendering Features|Ambient Occlusion", AdvancedDisplay, meta = (ClampMin = "0.0", UIMax = "10.0", editcondition = "bOverride_AmbientOcclusionBias", DisplayName = "Bias"))
	float Bias;
	/** 0=lowest quality..100=maximum quality, only a few quality levels are implemented, no soft transition */
	UPROPERTY(interp, BlueprintReadWrite, Category = "Rendering Features|Ambient Occlusion", AdvancedDisplay, meta = (ClampMin = "0.0", UIMax = "100.0", editcondition = "bOverride_AmbientOcclusionQuality", DisplayName = "Quality"))
	float Quality;
	/** Affects the blend over the multiple mips (lower resolution versions) , 0:fully use full resolution, 1::fully use low resolution, around 0.6 seems to be a good value */
	UPROPERTY(interp, BlueprintReadWrite, Category = "Rendering Features|Ambient Occlusion", AdvancedDisplay, meta = (ClampMin = "0.1", UIMax = "1.0", editcondition = "bOverride_AmbientOcclusionMipBlend", DisplayName = "Mip Blend"))
	float MipBlend;
	/** Affects the radius AO radius scale over the multiple mips (lower resolution versions) */
	UPROPERTY(interp, BlueprintReadWrite, Category = "Rendering Features|Ambient Occlusion", AdvancedDisplay, meta = (ClampMin = "0.5", UIMax = "4.0", editcondition = "bOverride_AmbientOcclusionMipScale", DisplayName = "Mip Scale"))
	float MipScale;
	/** to tweak the bilateral upsampling when using multiple mips (lower resolution versions) */
	UPROPERTY(interp, BlueprintReadWrite, Category = "Rendering Features|Ambient Occlusion", AdvancedDisplay, meta = (ClampMin = "0.0", UIMax = "0.1", editcondition = "bOverride_AmbientOcclusionMipThreshold", DisplayName = "Mip Threshold"))
	float MipThreshold;
	/** How much to blend the current frame with previous frames when using GTAO with temporal accumulation */
	UPROPERTY(interp, BlueprintReadWrite, Category = "Rendering Features|Ambient Occlusion", AdvancedDisplay, meta = (ClampMin = "0.0", UIMax = "0.5", editcondition = "bOverride_AmbientOcclusionTemporalBlendWeight", DisplayName = "Temporal Blend Weight"))
	float TemporalBlendWeight;

	FOWL360RenderingFeaturesAmbientOcclusionAdvancedSettings()
	{
		FMemory::Memzero(this, sizeof(FOWL360RenderingFeaturesAmbientOcclusionAdvancedSettings));
		// next value might get overwritten by r.DefaultFeature.AmbientOcclusionStaticFraction
		StaticFraction = 1.0f;
		FadeDistance = 8000.0f;
		FadeRadius = 5000.0f;
		Power = 2.0f;
		Bias = 3.0f;
		Quality = 50.0f;
		MipBlend = 0.6f;
		MipScale = 1.7f;
		MipThreshold = 0.01f;
		RadiusInWS = false;
		TemporalBlendWeight = 0.1f;
	}

	/* Exports to post process settings with overrides. */
	OWL360CAMERA_API void ExportToPostProcessSettings(FOWL360PostProcessSettings* OutPostProcessSettings) const;
};

USTRUCT(BlueprintType)
struct FOWL360RenderingFeaturesAmbientOcclusionSettings
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))
	uint8 bOverride_AmbientOcclusionIntensity : 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))
	uint8 bOverride_AmbientOcclusionRadius : 1;

	/** 0..1 0=off/no ambient occlusion .. 1=strong ambient occlusion, defines how much it affects the non direct lighting after base pass */
	UPROPERTY(interp, BlueprintReadWrite, Category = "Rendering Features|Ambient Occlusion", meta = (ClampMin = "0.0", ClampMax = "1.0", editcondition = "bOverride_AmbientOcclusionIntensity", DisplayName = "Intensity"))
	float Intensity;
	/** >0, in unreal units, bigger values means even distant surfaces affect the ambient occlusion */
	UPROPERTY(interp, BlueprintReadWrite, Category = "Rendering Features|Ambient Occlusion", meta = (ClampMin = "0.1", UIMax = "500.0", editcondition = "bOverride_AmbientOcclusionRadius", DisplayName = "Radius"))
	float Radius;
	UPROPERTY(Interp, BlueprintReadWrite, Category = "Rendering Features|Ambient Occlusion")
	FOWL360RenderingFeaturesAmbientOcclusionAdvancedSettings Advanced;

	FOWL360RenderingFeaturesAmbientOcclusionSettings()
	{
		FMemory::Memzero(this, sizeof(FOWL360RenderingFeaturesAmbientOcclusionSettings));
		// next value might get overwritten by r.DefaultFeature.AmbientOcclusion
		Intensity = .5f;
		Radius = 200.0f;
	}

	/* Exports to post process settings with overrides. */
	OWL360CAMERA_API void ExportToPostProcessSettings(FOWL360PostProcessSettings* OutPostProcessSettings) const;
};

USTRUCT(BlueprintType)
struct FOWL360RenderingFeaturesRayTracingAmbientOcclusionSettings
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))
	uint32 bOverride_RayTracingAO : 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))
	uint32 bOverride_RayTracingAOSamplesPerPixel : 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))
	uint32 bOverride_RayTracingAOIntensity : 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))
	uint32 bOverride_RayTracingAORadius : 1;

	/** Enables ray tracing ambient occlusion. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Rendering Features|Ray Tracing Ambient Occlusion", meta = (editcondition = "bOverride_RayTracingAO", DisplayName = "Enabled"))
	uint32 RayTracingAO : 1;
	/** Sets the samples per pixel for ray tracing ambient occlusion. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Rendering Features|Ray Tracing Ambient Occlusion", meta = (ClampMin = "1", ClampMax = "64", editcondition = "bOverride_RayTracingAOSamplesPerPixel", DisplayName = "Samples Per Pixel"))
	int32 RayTracingAOSamplesPerPixel;

	/** Scalar factor on the ray-tracing ambient occlusion score. */
	UPROPERTY(interp, EditAnywhere, BlueprintReadWrite, Category = "Rendering Features|Ray Tracing Ambient Occlusion", meta = (ClampMin = "0.0", ClampMax = "1.0", editcondition = "bOverride_RayTracingAOIntensity", DisplayName = "Intensity"))
	float RayTracingAOIntensity;

	/** Defines the world-space search radius for occlusion rays. */
	UPROPERTY(interp, EditAnywhere, BlueprintReadWrite, Category = "Rendering Features|Ray Tracing Ambient Occlusion", meta = (ClampMin = "0.0", ClampMax = "10000.0", editcondition = "bOverride_RayTracingAORadius", DisplayName = "Radius"))
	float RayTracingAORadius;

	FOWL360RenderingFeaturesRayTracingAmbientOcclusionSettings()
	{
		FMemory::Memzero(this, sizeof(FOWL360RenderingFeaturesRayTracingAmbientOcclusionSettings));
		RayTracingAO = 1;
		RayTracingAOSamplesPerPixel = 1;
		RayTracingAOIntensity = 1.0;
		RayTracingAORadius = 200.0f;
	}

	/* Exports to post process settings with overrides. */
	OWL360CAMERA_API void ExportToPostProcessSettings(FOWL360PostProcessSettings* OutPostProcessSettings) const;
};

USTRUCT(BlueprintType)
struct FOWL360RenderingFeaturesMotionBlurSettings
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))
	uint8 bOverride_MotionBlurAmount : 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))
	uint8 bOverride_MotionBlurMax : 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))
	uint8 bOverride_MotionBlurTargetFPS : 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))
	uint8 bOverride_MotionBlurPerObjectSize : 1;

	/** Strength of motion blur, 0:off, should be renamed to intensity */
	UPROPERTY(interp, BlueprintReadWrite, Category = "Rendering Features|Motion Blur", meta = (ClampMin = "0.0", ClampMax = "1.0", editcondition = "bOverride_MotionBlurAmount", DisplayName = "Amount"))
	float Amount;
	/** max distortion caused by motion blur, in percent of the screen width, 0:off */
	UPROPERTY(interp, BlueprintReadWrite, Category = "Rendering Features|Motion Blur", meta = (ClampMin = "0.0", ClampMax = "100.0", editcondition = "bOverride_MotionBlurMax", DisplayName = "Max"))
	float Max;
	/**
	 * Defines the target FPS for motion blur. Makes motion blur independent of actual frame rate and relative
	 * to the specified target FPS instead. Higher target FPS results in shorter frames, which means shorter
	 * shutter times and less motion blur. Lower FPS means more motion blur. A value of zero makes the motion
	 * blur dependent on the actual frame rate.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Rendering Features|Motion Blur", meta = (ClampMin = "0", ClampMax = "120", editcondition = "bOverride_MotionBlurTargetFPS", DisplayName = "Target FPS"))
	int32 TargetFPS;
	/** The minimum projected screen radius for a primitive to be drawn in the velocity pass, percentage of screen width. smaller numbers cause more draw calls, default: 4% */
	UPROPERTY(interp, BlueprintReadWrite, Category = "Rendering Features|Motion Blur", meta = (ClampMin = "0.0", UIMax = "100.0", editcondition = "bOverride_MotionBlurPerObjectSize", DisplayName = "Per Object Size"))
	float PerObjectSize;

	FOWL360RenderingFeaturesMotionBlurSettings()
	{
		FMemory::Memzero(this, sizeof(FOWL360RenderingFeaturesMotionBlurSettings));
		Amount = 0.5f;
		Max = 5.0f;
		TargetFPS = 30;
		PerObjectSize = 0.5f;
	}

	/* Exports to post process settings with overrides. */
	OWL360CAMERA_API void ExportToPostProcessSettings(FOWL360PostProcessSettings* OutPostProcessSettings) const;
};


USTRUCT(BlueprintType)
struct FOWL360RenderingFeaturesTranslucencySettings
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))
	uint32 bOverride_TranslucencyType : 1;

	/** Sets the translucency type */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Rendering Features|Translucency", meta = (editcondition = "bOverride_TranslucencyType", DisplayName = "Type"))
	ETranslucencyType Type;

	FOWL360RenderingFeaturesTranslucencySettings()
	{
		FMemory::Memzero(this, sizeof(FOWL360RenderingFeaturesTranslucencySettings));
		Type = ETranslucencyType::Raster;
	}

	/* Exports to post process settings with overrides. */
	OWL360CAMERA_API void ExportToPostProcessSettings(FOWL360PostProcessSettings* OutPostProcessSettings) const;
};

USTRUCT(BlueprintType)
struct FOWL360RenderingFeaturesRayTracingTranslucencySettings
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))
	uint32 bOverride_RayTracingTranslucencyMaxRoughness : 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))
	uint32 bOverride_RayTracingTranslucencyRefractionRays : 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))
	uint32 bOverride_RayTracingTranslucencySamplesPerPixel : 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))
	uint32 bOverride_RayTracingTranslucencyShadows : 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))
	uint32 bOverride_RayTracingTranslucencyRefraction : 1;

	/** Sets the maximum roughness until which ray tracing translucency will be visible (lower value is faster). Translucency contribution is smoothly faded when close to roughness threshold. This parameter behaves similarly to ScreenSpaceReflectionMaxRoughness. */
	UPROPERTY(interp, BlueprintReadWrite, Category = "Rendering Features|Ray Tracing Translucency", meta = (ClampMin = "0.01", ClampMax = "1.0", editcondition = "bOverride_RayTracingTranslucencyMaxRoughness", DisplayName = "Max Roughness"))
	float MaxRoughness;
	/** Sets the maximum number of ray tracing refraction rays. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Rendering Features|Ray Tracing Translucency", meta = (ClampMin = "0", ClampMax = "50", editcondition = "bOverride_RayTracingTranslucencyRefractionRays", DisplayName = "Max. Refraction Rays"))
	int32 RefractionRays;
	/** Sets the samples per pixel for ray traced translucency. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Rendering Features|Ray Tracing Translucency", meta = (ClampMin = "1", ClampMax = "64", editcondition = "bOverride_RayTracingTranslucencyRefractionRays", DisplayName = "Samples Per Pixel"))
	int32 SamplesPerPixel;
	/** Sets the translucency shadows type. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Rendering Features|Ray Tracing Translucency", meta = (editcondition = "bOverride_RayTracingTranslucencyRefractionRays", DisplayName = "Shadows"))
	EReflectedAndRefractedRayTracedShadows Shadows;
	/** Sets whether refraction should be enabled or not (if not rays will not scatter and only travel in the same direction as before the intersection event). */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Rendering Features|Ray Tracing Translucency", meta = (editcondition = "bOverride_RayTracingTranslucencyRefractionRays", DisplayName = "Refraction"))
	uint8 Refraction : 1;

	FOWL360RenderingFeaturesRayTracingTranslucencySettings()
	{
		FMemory::Memzero(this, sizeof(FOWL360RenderingFeaturesRayTracingTranslucencySettings));
		MaxRoughness = 0.6f;
		RefractionRays = 3; // 3 to: first hit surface, second hit back inner surface and a third to fetch the background.
		SamplesPerPixel = 1;
		Shadows = EReflectedAndRefractedRayTracedShadows::Hard_shadows;
		Refraction = 1;
	}

	/* Exports to post process settings with overrides. */
	OWL360CAMERA_API void ExportToPostProcessSettings(FOWL360PostProcessSettings* OutPostProcessSettings) const;
};

USTRUCT(BlueprintType)
struct FOWL360RenderingFeaturesPathTracingSettings
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))
	uint32 bOverride_PathTracingMaxBounces : 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))
	uint32 bOverride_PathTracingSamplesPerPixel : 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))
	uint32 bOverride_PathTracingFilterWidth : 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))
	uint32 bOverride_PathTracingIncludeEmissive : 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))
	uint32 bOverride_PathTracingMaxPathExposure : 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))
	uint32 bOverride_PathTracingEnableReferenceDOF : 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))
	uint32 bOverride_PathTracingEnableDenoiser : 1;

	/** Sets the path tracing maximum bounces */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Rendering Features|PathTracing", meta = (ClampMin = "0", ClampMax = "50", editcondition = "bOverride_PathTracingMaxBounces", DisplayName = "Max. Bounces"))
	int32 MaxBounces;
	/** Sets the samples per pixel for the path tracer. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Rendering Features|PathTracing", meta = (ClampMin = "1", ClampMax = "64", editcondition = "bOverride_PathTracingSamplesPerPixel", DisplayName = "Samples Per Pixel"))
	int32 SamplesPerPixel;
	/** Sets anti-aliasing filter width for the path tracer. */
	UPROPERTY(interp, EditAnywhere, BlueprintReadWrite, Category = "Rendering Features|PathTracing", meta = (ClampMin = "1.0", ClampMax = "6.0", editcondition = "bOverride_PathTracingFilterWidth", DisplayName = "Filter Width"))
	float FilterWidth;
	/** Enables emissive materials for the path tracer. This can prevent double-counting of illumination from surfaces that are also represented by light sources, and noise from small emitters. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Rendering Features|PathTracing", meta = (editcondition = "bOverride_PathTracingIncludeEmissive", DisplayName = "Emissive Materials"))
	uint32 EnableEmissive : 1;
	/** Sets the maximum exposure allowed in the path tracer to reduce fireflies. This should be set a few stops higher than the scene exposure. */
	UPROPERTY(interp, EditAnywhere, BlueprintReadWrite, Category = "Rendering Features|PathTracing", meta = (ClampMin = "-10.0", ClampMax = "30.0", editcondition = "bOverride_PathTracingMaxPathExposure", DisplayName = "Max Path Exposure"))
	float MaxPathExposure;
	/** Enables a reference quality depth-of-field which replaces the post-process effect. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Rendering Features|PathTracing", meta = (editcondition = "bOverride_PathTracingEnableReferenceDOF", DisplayName = "Reference Depth Of Field"))
	uint32 EnableReferenceDOF : 1;
	/** Run the currently loaded denoiser plugin on the last sample to remove noise from the output. Has no effect if a plug-in is not loaded. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Rendering Features|PathTracing", meta = (editcondition = "bOverride_PathTracingEnableDenoiser", DisplayName = "Denoiser"))
	uint32 EnableDenoiser : 1;

	FOWL360RenderingFeaturesPathTracingSettings()
	{
		FMemory::Memzero(this, sizeof(FOWL360RenderingFeaturesPathTracingSettings));
		MaxBounces = 32;
		SamplesPerPixel = 16384;
		FilterWidth = 3.0f;
		EnableEmissive = 1;
		MaxPathExposure = 30.0f;
		EnableReferenceDOF = 0;
		EnableDenoiser = 1;
	}

	/* Exports to post process settings with overrides. */
	OWL360CAMERA_API void ExportToPostProcessSettings(FOWL360PostProcessSettings* OutPostProcessSettings) const;
};

USTRUCT(BlueprintType)
struct FOWL360RenderingFeaturesTemporalAASettings
{
	GENERATED_BODY()

	/**
	* TemporalAA settings are not included by default in the ue4 PostProcessSettings struct
	* They are included here by OffWorldLive
	*/
	UPROPERTY(interp, BlueprintReadWrite, Category = "Rendering Features|TemporalAA")
	bool TemporalAAEnabled;
	/**
	* TemporalAA settings are not included by default in the ue4 PostProcessSettings struct
	* They are included here by OffWorldLive
	*/
	UPROPERTY(interp, BlueprintReadWrite, Category = "Rendering Features|TemporalAA")
	bool TemporalAAMotionBlurEnabled;

	FOWL360RenderingFeaturesTemporalAASettings()
	{
		TemporalAAEnabled = true;
		TemporalAAMotionBlurEnabled = true;
	}

	/* Exports to post process settings with overrides. */
	OWL360CAMERA_API void ExportToPostProcessSettings(FOWL360PostProcessSettings* OutPostProcessSettings) const;
};

USTRUCT(BlueprintType)
struct FOWL360RenderingFeaturesSettings
{
	GENERATED_BODY()

	/**
	 * Allows custom post process materials to be defined, using a MaterialInstance with the same Material as its parent to allow blending.
	 * For materials this needs to be the "PostProcess" domain type. This can be used for any UObject object implementing the IBlendableInterface (e.g. could be used to fade weather settings).
	 */

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Rendering Features", meta = (Keywords = "PostProcess", DisplayName = "Post Process Materials"))
	//FOWL360WeightedBlendables WeightedBlendables;

	UPROPERTY(Interp, BlueprintReadWrite, Category = "Rendering Features")
	FOWL360RenderingFeaturesAmbientCubemapSettings AmbientCubemap;

	UPROPERTY(Interp, BlueprintReadWrite, Category = "Rendering Features")
	FOWL360RenderingFeaturesAmbientOcclusionSettings AmbientOcclusion;

	UPROPERTY(Interp, BlueprintReadWrite, Category = "Rendering Features")
	FOWL360RenderingFeaturesRayTracingAmbientOcclusionSettings RayTracingAmbientOcclusion;

	UPROPERTY(Interp, BlueprintReadWrite, Category = "Rendering Features")
	FOWL360RenderingFeaturesMotionBlurSettings MotionBlur;

	UPROPERTY(Interp, BlueprintReadWrite, Category = "Rendering Features")
	FOWL360RenderingFeaturesTranslucencySettings Translucency;

	UPROPERTY(Interp, BlueprintReadWrite, Category = "Rendering Features")
	FOWL360RenderingFeaturesRayTracingTranslucencySettings RayTracingTranslucency;

	UPROPERTY(Interp, BlueprintReadWrite, Category = "Rendering Features")
	FOWL360RenderingFeaturesPathTracingSettings PathTracing;

	//UPROPERTY(Interp, BlueprintReadWrite, Category = "Rendering Features")
	//FOWL360RenderingFeaturesMiscSettings Misc;

	UPROPERTY(Interp, BlueprintReadWrite, Category = "Rendering Features")
	FOWL360RenderingFeaturesTemporalAASettings TemporalAA;

	FOWL360RenderingFeaturesSettings(){}

	/* Exports to post process settings with overrides. */
	OWL360CAMERA_API void ExportToPostProcessSettings(FOWL360PostProcessSettings* OutPostProcessSettings) const;
};

USTRUCT(BlueprintType)
struct FOWL360FilmGrainSettings
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Overrides, meta=(PinHiddenByDefault, InlineEditConditionToggle))
	uint8 bOverride_FilmGrainIntensity:1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))
	uint8 bOverride_FilmGrainIntensityShadows : 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))
	uint8 bOverride_FilmGrainIntensityMidtones : 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))
	uint8 bOverride_FilmGrainIntensityHighlights : 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))
	uint8 bOverride_FilmGrainShadowsMax : 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))
	uint8 bOverride_FilmGrainHighlightsMin : 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))
	uint8 bOverride_FilmGrainHighlightsMax : 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Overrides, meta=(PinHiddenByDefault, InlineEditConditionToggle))
	uint8 bOverride_FilmGrainTexelSize:1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))
	uint8 bOverride_FilmGrainTexture : 1;

	/** 0..1 Film grain intensity to apply. LinearSceneColor *= lerp(1.0, DecodedFilmGrainTexture, FilmGrainIntensity) */
	UPROPERTY(interp, BlueprintReadWrite, Category = "Film Grain", meta = (UIMin = "0.0", UIMax = "1.0", editcondition = "bOverride_FilmGrainIntensity"))
	float FilmGrainIntensity;

	UPROPERTY(interp, BlueprintReadWrite, Category = "Film Grain", meta = (UIMin = "0.0", UIMax = "1.0", editcondition = "bOverride_FilmGrainIntensityShadows"))
	float FilmGrainIntensityShadows;

	UPROPERTY(interp, BlueprintReadWrite, Category = "Film Grain", meta = (UIMin = "0.0", UIMax = "1.0", editcondition = "bOverride_FilmGrainIntensityMidtones"))
	float FilmGrainIntensityMidtones;

	UPROPERTY(interp, BlueprintReadWrite, Category = "Film Grain", meta = (UIMin = "0.0", UIMax = "1.0", editcondition = "bOverride_FilmGrainIntensityHighlights"))
	float FilmGrainIntensityHighlights;

	UPROPERTY(interp, BlueprintReadWrite, Category = "Film Grain", meta = (UIMin = "0.0", UIMax = "1.0", editcondition = "bOverride_FilmGrainShadowsMax"))
	float FilmGrainShadowsMax;

	UPROPERTY(interp, BlueprintReadWrite, Category = "Film Grain", meta = (UIMin = "0.0", UIMax = "1.0", editcondition = "bOverride_FilmGrainHighlightsMin"))
	float FilmGrainHighlightsMin;

	/** Should be set larger than HighlightsMin. Default is 1.0, for backwards compatibility */
	UPROPERTY(interp, BlueprintReadWrite, Category = "Film Grain", meta = (UIMin = "1.0", UIMax = "10.0", editcondition = "bOverride_FilmGrainHighlightsMax"))
	float FilmGrainHighlightsMax;

	/** Size of texel of FilmGrainTexture on screen. */
	UPROPERTY(interp, BlueprintReadWrite, Category = "Film Grain", meta = (UIMin = "0.0", UIMax = "4.0", editcondition = "bOverride_FilmGrainTexelSize"))
	float FilmGrainTexelSize;

	/** Defines film grain texture to use. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Film Grain", meta = (editcondition = "bOverride_FilmGrainTexture"))
	TObjectPtr<class UTexture2D> FilmGrainTexture;

	FOWL360FilmGrainSettings()
	{
		FMemory::Memzero(this, sizeof(FOWL360FilmGrainSettings));
		FilmGrainIntensity = 0.0f;
		FilmGrainIntensityShadows = 1.0f;
		FilmGrainIntensityMidtones = 1.0f;
		FilmGrainIntensityHighlights = 1.0f;
		FilmGrainShadowsMax = 0.09f;
		FilmGrainHighlightsMin = 0.5f;
		FilmGrainHighlightsMax = 1.0f;
		FilmGrainTexelSize = 1.0f;
		FilmGrainTexture = nullptr;
	}

	/* Exports to post process settings with overrides. */
	OWL360CAMERA_API void ExportToPostProcessSettings(FOWL360PostProcessSettings* OutPostProcessSettings) const;
};

/** To be able to use struct PostProcessSettings. */
// the variable declaration and further down the default value for it.
// The comment should include the meaning and usable range.
USTRUCT(BlueprintType)
struct FOWL360PostProcessSettings
{
	GENERATED_BODY()

	UPROPERTY(interp, BlueprintReadWrite, Category = "Off World Live 360 Post Process Settings")
	FOWL360LensSettings Lens;

	UPROPERTY(interp, BlueprintReadWrite, Category = "Off World Live 360 Post Process Settings")
	FOWL360ColorGradingSettings ColorGrading;

	//UPROPERTY(interp, BlueprintReadWrite, Category = "Off World Live 360 Post Process Settings")
	//FOWL360FilmSettings Film;

	UPROPERTY(interp, BlueprintReadWrite, Category = "Off World Live 360 Post Process Settings")
	FOWL360GlobalIlluminationSettings GlobalIllumination;

	UPROPERTY(interp, BlueprintReadWrite, Category = "Off World Live 360 Post Process Settings")
	FOWL360ReflectionsSettings Reflections;

	UPROPERTY(interp, BlueprintReadWrite, Category = "Off World Live 360 Post Process Settings")
	FOWL360RenderingFeaturesSettings RenderingFeatures;

	UPROPERTY(interp, BlueprintReadWrite, Category = "Off World Live 360 Post Process Settings")
	FOWL360FilmGrainSettings FilmGrain;


	// -----------------------------------------------------------------------



// UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Rendering Features", meta=( Keywords="PostProcess", DisplayName = "Post Process Materials" ))
// 	FWeightedBlendables WeightedBlendables;

	// // Adds an Blendable (implements IBlendableInterface) to the array of Blendables (if it doesn't exist) and update the weight
	// // @param InBlendableObject silently ignores if no object is referenced
	// // @param 0..1 InWeight, values outside of the range get clampled later in the pipeline
	// void AddBlendable(TScriptInterface<IBlendableInterface> InBlendableObject, float InWeight)
	// {
	// 	// update weight, if the Blendable is already in the array
	// 	if(UObject* Object = InBlendableObject.GetObject())
	// 	{
	// 		for (int32 i = 0, count = WeightedBlendables.Array.Num(); i < count; ++i)
	// 		{
	// 			if (WeightedBlendables.Array[i].Object == Object)
	// 			{
	// 				WeightedBlendables.Array[i].Weight = InWeight;
	// 				// We assumes we only have one
	// 				return;
	// 			}
	// 		}
	//
	// 		// add in the end
	// 		WeightedBlendables.Array.Add(FWeightedBlendable(InWeight, Object));
	// 	}
	// }
	//
	// // removes one or multiple blendables from the array
	// void RemoveBlendable(TScriptInterface<IBlendableInterface> InBlendableObject)
	// {
	// 	if(UObject* Object = InBlendableObject.GetObject())
	// 	{
	// 		for (int32 i = 0, count = WeightedBlendables.Array.Num(); i < count; ++i)
	// 		{
	// 			if (WeightedBlendables.Array[i].Object == Object)
	// 			{
	// 				// this might remove multiple
	// 				WeightedBlendables.Array.RemoveAt(i);
	// 				--i;
	// 				--count;
	// 			}
	// 		}
	// 	}
	// }

	// good start values for a new volume
	OWL360CAMERA_API FOWL360PostProcessSettings();
	OWL360CAMERA_API FOWL360PostProcessSettings(const FOWL360PostProcessSettings&);
}; // struct FOWL360PostProcessSettings
