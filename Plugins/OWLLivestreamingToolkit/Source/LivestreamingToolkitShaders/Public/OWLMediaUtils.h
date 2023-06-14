// Copyright Off World Live Limited, 2020-2022. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "RHIResources.h"
#include "OWLTextureFormats.h"
#include "GlobalShader.h"
#include "Shader.h"
#include "ShaderParameterMacros.h"
#include "DataDrivenShaderPlatformInfo.h"
#include "ShaderParameterStruct.h"

class UTextureRenderTarget2D;
class FRHICommandListImmediate;

class FLinearToSrgbPS : public FGlobalShader
{
	DECLARE_GLOBAL_SHADER(FLinearToSrgbPS)
	SHADER_USE_PARAMETER_STRUCT(FLinearToSrgbPS, FGlobalShader);
	BEGIN_SHADER_PARAMETER_STRUCT(FParameters, )
		SHADER_PARAMETER_RDG_TEXTURE(Texture2D, InputTexture)
		SHADER_PARAMETER_SAMPLER(SamplerState, InputSampler)
		RENDER_TARGET_BINDING_SLOTS()
	END_SHADER_PARAMETER_STRUCT()


public:
	static bool ShouldCompilePermutation(const FGlobalShaderPermutationParameters& Parameters)
	{
		return IsFeatureLevelSupported(Parameters.Platform, ERHIFeatureLevel::ES3_1);
	}

	FLinearToSrgbPS::FParameters* AllocateAndSetParameters(FRDGBuilder& GraphBuilder, FRDGTextureRef InputTexture, FRDGTextureRef OutputTexture);
};

template <bool ConvertSrgbToLinear>
class FInputTextureConvertPS : public FGlobalShader
{
	DECLARE_GLOBAL_SHADER(FInputTextureConvertPS)

	SHADER_USE_PARAMETER_STRUCT(FInputTextureConvertPS, FGlobalShader);

	BEGIN_SHADER_PARAMETER_STRUCT(FParameters, )
		SHADER_PARAMETER(uint32, DoubleSRGBConversion)
		SHADER_PARAMETER_RDG_TEXTURE(Texture2D, InputTexture)
		SHADER_PARAMETER_SAMPLER(SamplerState, InputSampler)
		RENDER_TARGET_BINDING_SLOTS()
	END_SHADER_PARAMETER_STRUCT()

public:
	static bool ShouldCompilePermutation(const FGlobalShaderPermutationParameters& Parameters)
	{
		return IsFeatureLevelSupported(Parameters.Platform, ERHIFeatureLevel::ES3_1);
	}

	FInputTextureConvertPS::FParameters* AllocateAndSetParameters(FRDGBuilder& GraphBuilder, FRDGTextureRef InputTexture, FRDGTextureRef OutputTexture, bool bDoubleSRGBConversion=false);

	static void ModifyCompilationEnvironment(const FGlobalShaderPermutationParameters& Parameters, FShaderCompilerEnvironment& OutEnvironment)
	{
		FGlobalShader::ModifyCompilationEnvironment(Parameters, OutEnvironment);
		OutEnvironment.SetDefine(TEXT("CONVERT_SRGB_TO_LINEAR"), ConvertSrgbToLinear);
	}
};

class LIVESTREAMINGTOOLKITSHADERS_API FOWLMediaUtils
{
public:
	/* Converts the RenderTextureTarget to a different format and applies sRGB gamma */
	static bool ConvertFormatAndLinearToSrgb_RenderThread(
		FRHICommandListImmediate& RHICmdList,
		UTextureRenderTarget2D* SourceRenderTarget,
		FTexture2DRHIRef& ReadbackTexture,
		EOWLPixelLayoutFormat VideoConversionFormat,
		EPixelFormat ForcedFormat = EPixelFormat::PF_Unknown);

	static bool InputFormatConvert_RenderThread(
		FRHICommandListImmediate& RHICmdList,
		const FTexture2DRHIRef& SourceTexture,
		UTextureRenderTarget2D* DestinationRenderTarget,
		bool bConvertSrgbToLinear = false,
		bool bDoubleSrgbConversion = false
	);
};

class LIVESTREAMINGTOOLKITSHADERS_API FOWLNDIReceiverShader
{
public:
	FOWLNDIReceiverShader();
	~FOWLNDIReceiverShader();
	bool Apply_RenderThread(
		FRHICommandListImmediate& RHICmdList,
		UTextureRenderTarget2D* DestRenderTarget,
		uint32 SrcPitch,
		const uint8* SrcData,
		FIntPoint Resolution,
		EOWLOutputTextureFormat VideoConversionFormat);
private:
	TRefCountPtr<FRHITexture2D> InputTarget;
};

