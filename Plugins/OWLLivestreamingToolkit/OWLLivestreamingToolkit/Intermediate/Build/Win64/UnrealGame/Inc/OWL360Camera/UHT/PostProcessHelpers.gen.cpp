// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OWL360Camera/Public/PostProcessing/PostProcessHelpers.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePostProcessHelpers() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	OWL360CAMERA_API UClass* Z_Construct_UClass_UPostProcessHelpers();
	OWL360CAMERA_API UClass* Z_Construct_UClass_UPostProcessHelpers_NoRegister();
	OWL360CAMERA_API UEnum* Z_Construct_UEnum_OWL360Camera_E360PostProcessPipeline();
	UPackage* Z_Construct_UPackage__Script_OWL360Camera();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_E360PostProcessPipeline;
	static UEnum* E360PostProcessPipeline_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_E360PostProcessPipeline.OuterSingleton)
		{
			Z_Registration_Info_UEnum_E360PostProcessPipeline.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OWL360Camera_E360PostProcessPipeline, (UObject*)Z_Construct_UPackage__Script_OWL360Camera(), TEXT("E360PostProcessPipeline"));
		}
		return Z_Registration_Info_UEnum_E360PostProcessPipeline.OuterSingleton;
	}
	template<> OWL360CAMERA_API UEnum* StaticEnum<E360PostProcessPipeline>()
	{
		return E360PostProcessPipeline_StaticEnum();
	}
	struct Z_Construct_UEnum_OWL360Camera_E360PostProcessPipeline_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OWL360Camera_E360PostProcessPipeline_Statics::Enumerators[] = {
		{ "E360PostProcessPipeline::PPM_Bloom", (int64)E360PostProcessPipeline::PPM_Bloom },
		{ "E360PostProcessPipeline::PPM_Tonemapper", (int64)E360PostProcessPipeline::PPM_Tonemapper },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OWL360Camera_E360PostProcessPipeline_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/* Post Process type applied to the 360 cam output texture */" },
		{ "ModuleRelativePath", "Public/PostProcessing/PostProcessHelpers.h" },
		{ "PPM_Bloom.DisplayName", "Seamless 360 Bloom" },
		{ "PPM_Bloom.Name", "E360PostProcessPipeline::PPM_Bloom" },
		{ "PPM_Tonemapper.DisplayName", "Tonemapping" },
		{ "PPM_Tonemapper.Name", "E360PostProcessPipeline::PPM_Tonemapper" },
		{ "ToolTip", "Post Process type applied to the 360 cam output texture" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OWL360Camera_E360PostProcessPipeline_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OWL360Camera,
		nullptr,
		"E360PostProcessPipeline",
		"E360PostProcessPipeline",
		Z_Construct_UEnum_OWL360Camera_E360PostProcessPipeline_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OWL360Camera_E360PostProcessPipeline_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_OWL360Camera_E360PostProcessPipeline_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_OWL360Camera_E360PostProcessPipeline_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_OWL360Camera_E360PostProcessPipeline()
	{
		if (!Z_Registration_Info_UEnum_E360PostProcessPipeline.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_E360PostProcessPipeline.InnerSingleton, Z_Construct_UEnum_OWL360Camera_E360PostProcessPipeline_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_E360PostProcessPipeline.InnerSingleton;
	}
	void UPostProcessHelpers::StaticRegisterNativesUPostProcessHelpers()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPostProcessHelpers);
	UClass* Z_Construct_UClass_UPostProcessHelpers_NoRegister()
	{
		return UPostProcessHelpers::StaticClass();
	}
	struct Z_Construct_UClass_UPostProcessHelpers_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPostProcessHelpers_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OWL360Camera,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPostProcessHelpers_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PostProcessing/PostProcessHelpers.h" },
		{ "ModuleRelativePath", "Public/PostProcessing/PostProcessHelpers.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPostProcessHelpers_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPostProcessHelpers>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPostProcessHelpers_Statics::ClassParams = {
		&UPostProcessHelpers::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPostProcessHelpers_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPostProcessHelpers_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPostProcessHelpers()
	{
		if (!Z_Registration_Info_UClass_UPostProcessHelpers.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPostProcessHelpers.OuterSingleton, Z_Construct_UClass_UPostProcessHelpers_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPostProcessHelpers.OuterSingleton;
	}
	template<> OWL360CAMERA_API UClass* StaticClass<UPostProcessHelpers>()
	{
		return UPostProcessHelpers::StaticClass();
	}
	UPostProcessHelpers::UPostProcessHelpers(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPostProcessHelpers);
	UPostProcessHelpers::~UPostProcessHelpers() {}
	struct Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWL360Camera_Public_PostProcessing_PostProcessHelpers_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWL360Camera_Public_PostProcessing_PostProcessHelpers_h_Statics::EnumInfo[] = {
		{ E360PostProcessPipeline_StaticEnum, TEXT("E360PostProcessPipeline"), &Z_Registration_Info_UEnum_E360PostProcessPipeline, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2619903406U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWL360Camera_Public_PostProcessing_PostProcessHelpers_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPostProcessHelpers, UPostProcessHelpers::StaticClass, TEXT("UPostProcessHelpers"), &Z_Registration_Info_UClass_UPostProcessHelpers, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPostProcessHelpers), 1519201745U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWL360Camera_Public_PostProcessing_PostProcessHelpers_h_1643663806(TEXT("/Script/OWL360Camera"),
		Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWL360Camera_Public_PostProcessing_PostProcessHelpers_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWL360Camera_Public_PostProcessing_PostProcessHelpers_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWL360Camera_Public_PostProcessing_PostProcessHelpers_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWL360Camera_Public_PostProcessing_PostProcessHelpers_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
