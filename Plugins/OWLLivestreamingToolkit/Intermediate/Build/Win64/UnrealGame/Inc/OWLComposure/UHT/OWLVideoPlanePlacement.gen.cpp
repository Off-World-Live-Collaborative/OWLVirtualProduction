// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OWLComposure/Public/OWLVideoPlanePlacement.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOWLVideoPlanePlacement() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaTexture_NoRegister();
	OWLCOMPOSURE_API UClass* Z_Construct_UClass_AOWLVideoPlanePlacement();
	OWLCOMPOSURE_API UClass* Z_Construct_UClass_AOWLVideoPlanePlacement_NoRegister();
	UPackage* Z_Construct_UPackage__Script_OWLComposure();
// End Cross Module References
	void AOWLVideoPlanePlacement::StaticRegisterNativesAOWLVideoPlanePlacement()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AOWLVideoPlanePlacement);
	UClass* Z_Construct_UClass_AOWLVideoPlanePlacement_NoRegister()
	{
		return AOWLVideoPlanePlacement::StaticClass();
	}
	struct Z_Construct_UClass_AOWLVideoPlanePlacement_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bResolutionControlsScale_MetaData[];
#endif
		static void NewProp_bResolutionControlsScale_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bResolutionControlsScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Resolution_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Resolution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScaleMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ScaleMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AspectRatio_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AspectRatio;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MediaInput_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MediaInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OriginalMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OriginalMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DynamicMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DynamicMaterial;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AOWLVideoPlanePlacement_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_OWLComposure,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWLVideoPlanePlacement_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Collision Attachment Actor CameraActor" },
		{ "IncludePath", "OWLVideoPlanePlacement.h" },
		{ "ModuleRelativePath", "Public/OWLVideoPlanePlacement.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWLVideoPlanePlacement_Statics::NewProp_bResolutionControlsScale_MetaData[] = {
		{ "Category", "Video Input" },
		{ "Comment", "/* When this is ticked, use 'Scale Multiplier' below AND not the mesh component scale to adjust the size of this video plane */" },
		{ "ModuleRelativePath", "Public/OWLVideoPlanePlacement.h" },
		{ "ToolTip", "When this is ticked, use 'Scale Multiplier' below AND not the mesh component scale to adjust the size of this video plane" },
	};
#endif
	void Z_Construct_UClass_AOWLVideoPlanePlacement_Statics::NewProp_bResolutionControlsScale_SetBit(void* Obj)
	{
		((AOWLVideoPlanePlacement*)Obj)->bResolutionControlsScale = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AOWLVideoPlanePlacement_Statics::NewProp_bResolutionControlsScale = { "bResolutionControlsScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AOWLVideoPlanePlacement), &Z_Construct_UClass_AOWLVideoPlanePlacement_Statics::NewProp_bResolutionControlsScale_SetBit, METADATA_PARAMS(Z_Construct_UClass_AOWLVideoPlanePlacement_Statics::NewProp_bResolutionControlsScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOWLVideoPlanePlacement_Statics::NewProp_bResolutionControlsScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWLVideoPlanePlacement_Statics::NewProp_Resolution_MetaData[] = {
		{ "Category", "Video Input" },
		{ "Comment", "/* When 'Resolution Controls Scale' is ticked, set the aspect ratio of the plane using these resolution settings */" },
		{ "EditCondition", "bResolutionControlsScale" },
		{ "ModuleRelativePath", "Public/OWLVideoPlanePlacement.h" },
		{ "ToolTip", "When 'Resolution Controls Scale' is ticked, set the aspect ratio of the plane using these resolution settings" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOWLVideoPlanePlacement_Statics::NewProp_Resolution = { "Resolution", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AOWLVideoPlanePlacement, Resolution), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UClass_AOWLVideoPlanePlacement_Statics::NewProp_Resolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOWLVideoPlanePlacement_Statics::NewProp_Resolution_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWLVideoPlanePlacement_Statics::NewProp_ScaleMultiplier_MetaData[] = {
		{ "Category", "Video Input" },
		{ "Comment", "/* Use this parameter to scale the plane while maintaining the correct aspect ratio*/" },
		{ "EditCondition", "bResolutionControlsScale" },
		{ "ModuleRelativePath", "Public/OWLVideoPlanePlacement.h" },
		{ "ToolTip", "Use this parameter to scale the plane while maintaining the correct aspect ratio" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOWLVideoPlanePlacement_Statics::NewProp_ScaleMultiplier = { "ScaleMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AOWLVideoPlanePlacement, ScaleMultiplier), METADATA_PARAMS(Z_Construct_UClass_AOWLVideoPlanePlacement_Statics::NewProp_ScaleMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOWLVideoPlanePlacement_Statics::NewProp_ScaleMultiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWLVideoPlanePlacement_Statics::NewProp_AspectRatio_MetaData[] = {
		{ "Category", "Video Input" },
		{ "EditCondition", "false" },
		{ "ModuleRelativePath", "Public/OWLVideoPlanePlacement.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOWLVideoPlanePlacement_Statics::NewProp_AspectRatio = { "AspectRatio", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AOWLVideoPlanePlacement, AspectRatio), METADATA_PARAMS(Z_Construct_UClass_AOWLVideoPlanePlacement_Statics::NewProp_AspectRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOWLVideoPlanePlacement_Statics::NewProp_AspectRatio_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWLVideoPlanePlacement_Statics::NewProp_MediaInput_MetaData[] = {
		{ "Comment", "/* UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=\"Video Input\")*/" },
		{ "ModuleRelativePath", "Public/OWLVideoPlanePlacement.h" },
		{ "ToolTip", "UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=\"Video Input\")" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOWLVideoPlanePlacement_Statics::NewProp_MediaInput = { "MediaInput", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AOWLVideoPlanePlacement, MediaInput), Z_Construct_UClass_UMediaTexture_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOWLVideoPlanePlacement_Statics::NewProp_MediaInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOWLVideoPlanePlacement_Statics::NewProp_MediaInput_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWLVideoPlanePlacement_Statics::NewProp_MeshComponent_MetaData[] = {
		{ "Category", "Preview Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/OWLVideoPlanePlacement.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOWLVideoPlanePlacement_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AOWLVideoPlanePlacement, MeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOWLVideoPlanePlacement_Statics::NewProp_MeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOWLVideoPlanePlacement_Statics::NewProp_MeshComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWLVideoPlanePlacement_Statics::NewProp_Mesh_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWLVideoPlanePlacement.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOWLVideoPlanePlacement_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AOWLVideoPlanePlacement, Mesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOWLVideoPlanePlacement_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOWLVideoPlanePlacement_Statics::NewProp_Mesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWLVideoPlanePlacement_Statics::NewProp_OriginalMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWLVideoPlanePlacement.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOWLVideoPlanePlacement_Statics::NewProp_OriginalMaterial = { "OriginalMaterial", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AOWLVideoPlanePlacement, OriginalMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOWLVideoPlanePlacement_Statics::NewProp_OriginalMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOWLVideoPlanePlacement_Statics::NewProp_OriginalMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWLVideoPlanePlacement_Statics::NewProp_DynamicMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWLVideoPlanePlacement.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOWLVideoPlanePlacement_Statics::NewProp_DynamicMaterial = { "DynamicMaterial", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AOWLVideoPlanePlacement, DynamicMaterial), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOWLVideoPlanePlacement_Statics::NewProp_DynamicMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOWLVideoPlanePlacement_Statics::NewProp_DynamicMaterial_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AOWLVideoPlanePlacement_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWLVideoPlanePlacement_Statics::NewProp_bResolutionControlsScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWLVideoPlanePlacement_Statics::NewProp_Resolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWLVideoPlanePlacement_Statics::NewProp_ScaleMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWLVideoPlanePlacement_Statics::NewProp_AspectRatio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWLVideoPlanePlacement_Statics::NewProp_MediaInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWLVideoPlanePlacement_Statics::NewProp_MeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWLVideoPlanePlacement_Statics::NewProp_Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWLVideoPlanePlacement_Statics::NewProp_OriginalMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWLVideoPlanePlacement_Statics::NewProp_DynamicMaterial,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AOWLVideoPlanePlacement_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOWLVideoPlanePlacement>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AOWLVideoPlanePlacement_Statics::ClassParams = {
		&AOWLVideoPlanePlacement::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AOWLVideoPlanePlacement_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AOWLVideoPlanePlacement_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AOWLVideoPlanePlacement_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AOWLVideoPlanePlacement_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AOWLVideoPlanePlacement()
	{
		if (!Z_Registration_Info_UClass_AOWLVideoPlanePlacement.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AOWLVideoPlanePlacement.OuterSingleton, Z_Construct_UClass_AOWLVideoPlanePlacement_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AOWLVideoPlanePlacement.OuterSingleton;
	}
	template<> OWLCOMPOSURE_API UClass* StaticClass<AOWLVideoPlanePlacement>()
	{
		return AOWLVideoPlanePlacement::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AOWLVideoPlanePlacement);
	AOWLVideoPlanePlacement::~AOWLVideoPlanePlacement() {}
	struct Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLComposure_Public_OWLVideoPlanePlacement_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLComposure_Public_OWLVideoPlanePlacement_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AOWLVideoPlanePlacement, AOWLVideoPlanePlacement::StaticClass, TEXT("AOWLVideoPlanePlacement"), &Z_Registration_Info_UClass_AOWLVideoPlanePlacement, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AOWLVideoPlanePlacement), 204010779U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLComposure_Public_OWLVideoPlanePlacement_h_1735506965(TEXT("/Script/OWLComposure"),
		Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLComposure_Public_OWLVideoPlanePlacement_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLComposure_Public_OWLVideoPlanePlacement_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
