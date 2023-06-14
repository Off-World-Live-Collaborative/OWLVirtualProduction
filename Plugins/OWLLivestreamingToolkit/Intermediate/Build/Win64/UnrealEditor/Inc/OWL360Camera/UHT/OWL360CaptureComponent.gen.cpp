// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OWL360Camera/Public/OWL360CaptureComponent.h"
#include "../../Source/Runtime/Engine/Classes/Components/SceneCaptureComponent.h"
#include "OWL360Camera/Public/PostProcessing/OWL360PostProcessSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOWL360CaptureComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEngineShowFlagsSetting();
	OWL360CAMERA_API UClass* Z_Construct_UClass_UOWL360CaptureComponent();
	OWL360CAMERA_API UClass* Z_Construct_UClass_UOWL360CaptureComponent_NoRegister();
	OWL360CAMERA_API UEnum* Z_Construct_UEnum_OWL360Camera_E360PostProcessPipeline();
	OWL360CAMERA_API UEnum* Z_Construct_UEnum_OWL360Camera_E360ProjectionType();
	OWL360CAMERA_API UEnum* Z_Construct_UEnum_OWL360Camera_EStreamResolution_360();
	OWL360CAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FOWL360PostProcessSettings();
	UPackage* Z_Construct_UPackage__Script_OWL360Camera();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EStreamResolution_360;
	static UEnum* EStreamResolution_360_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EStreamResolution_360.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EStreamResolution_360.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OWL360Camera_EStreamResolution_360, (UObject*)Z_Construct_UPackage__Script_OWL360Camera(), TEXT("EStreamResolution_360"));
		}
		return Z_Registration_Info_UEnum_EStreamResolution_360.OuterSingleton;
	}
	template<> OWL360CAMERA_API UEnum* StaticEnum<EStreamResolution_360>()
	{
		return EStreamResolution_360_StaticEnum();
	}
	struct Z_Construct_UEnum_OWL360Camera_EStreamResolution_360_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OWL360Camera_EStreamResolution_360_Statics::Enumerators[] = {
		{ "EStreamResolution_360::RS_360_240p", (int64)EStreamResolution_360::RS_360_240p },
		{ "EStreamResolution_360::RS_360_360p", (int64)EStreamResolution_360::RS_360_360p },
		{ "EStreamResolution_360::RS_360_480p", (int64)EStreamResolution_360::RS_360_480p },
		{ "EStreamResolution_360::RS_360_720p", (int64)EStreamResolution_360::RS_360_720p },
		{ "EStreamResolution_360::RS_360_1080p", (int64)EStreamResolution_360::RS_360_1080p },
		{ "EStreamResolution_360::RS_360_1440p", (int64)EStreamResolution_360::RS_360_1440p },
		{ "EStreamResolution_360::RS_360_2160p", (int64)EStreamResolution_360::RS_360_2160p },
		{ "EStreamResolution_360::RS_360_Custom", (int64)EStreamResolution_360::RS_360_Custom },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OWL360Camera_EStreamResolution_360_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/* Output texture resolution */" },
		{ "ModuleRelativePath", "Public/OWL360CaptureComponent.h" },
		{ "RS_360_1080p.Comment", "/* Cubemap: 1620x1080p; Equirectangular:  2160x1080p; Dome: 1080x1080p; */" },
		{ "RS_360_1080p.DisplayName", "1080p" },
		{ "RS_360_1080p.Name", "EStreamResolution_360::RS_360_1080p" },
		{ "RS_360_1080p.ToolTip", "Cubemap: 1620x1080p; Equirectangular:  2160x1080p; Dome: 1080x1080p;" },
		{ "RS_360_1440p.Comment", "/* Cubemap: 2160x1440p; Equirectangular:  2880x1440p; Dome: 1440x1440p; */" },
		{ "RS_360_1440p.DisplayName", "1440p" },
		{ "RS_360_1440p.Name", "EStreamResolution_360::RS_360_1440p" },
		{ "RS_360_1440p.ToolTip", "Cubemap: 2160x1440p; Equirectangular:  2880x1440p; Dome: 1440x1440p;" },
		{ "RS_360_2160p.Comment", "/* Cubemap: 3240x2160p; Equirectangular:  4320x2160p; Dome: 2160x2160p; */" },
		{ "RS_360_2160p.DisplayName", "2160p" },
		{ "RS_360_2160p.Name", "EStreamResolution_360::RS_360_2160p" },
		{ "RS_360_2160p.ToolTip", "Cubemap: 3240x2160p; Equirectangular:  4320x2160p; Dome: 2160x2160p;" },
		{ "RS_360_240p.Comment", "/* Cubemap: 360x240p; Equirectangular:  480x240p; Dome: 240x240p; */" },
		{ "RS_360_240p.DisplayName", "240p" },
		{ "RS_360_240p.Name", "EStreamResolution_360::RS_360_240p" },
		{ "RS_360_240p.ToolTip", "Cubemap: 360x240p; Equirectangular:  480x240p; Dome: 240x240p;" },
		{ "RS_360_360p.Comment", "/* Cubemap: 540x360p; Equirectangular:  720x360p; Dome: 360x360p; */" },
		{ "RS_360_360p.DisplayName", "360p" },
		{ "RS_360_360p.Name", "EStreamResolution_360::RS_360_360p" },
		{ "RS_360_360p.ToolTip", "Cubemap: 540x360p; Equirectangular:  720x360p; Dome: 360x360p;" },
		{ "RS_360_480p.Comment", "/* Cubemap: 720x480p; Equirectangular:  960x480p; Dome: 480x480p; */" },
		{ "RS_360_480p.DisplayName", "480p" },
		{ "RS_360_480p.Name", "EStreamResolution_360::RS_360_480p" },
		{ "RS_360_480p.ToolTip", "Cubemap: 720x480p; Equirectangular:  960x480p; Dome: 480x480p;" },
		{ "RS_360_720p.Comment", "/* Cubemap: 1080x720p; Equirectangular:  1440x720p; Dome: 720x720p; */" },
		{ "RS_360_720p.DisplayName", "720p" },
		{ "RS_360_720p.Name", "EStreamResolution_360::RS_360_720p" },
		{ "RS_360_720p.ToolTip", "Cubemap: 1080x720p; Equirectangular:  1440x720p; Dome: 720x720p;" },
		{ "RS_360_Custom.Comment", "/* Custom Resolution */" },
		{ "RS_360_Custom.DisplayName", "Custom" },
		{ "RS_360_Custom.Name", "EStreamResolution_360::RS_360_Custom" },
		{ "RS_360_Custom.ToolTip", "Custom Resolution" },
		{ "ToolTip", "Output texture resolution" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OWL360Camera_EStreamResolution_360_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OWL360Camera,
		nullptr,
		"EStreamResolution_360",
		"EStreamResolution_360",
		Z_Construct_UEnum_OWL360Camera_EStreamResolution_360_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OWL360Camera_EStreamResolution_360_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_OWL360Camera_EStreamResolution_360_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_OWL360Camera_EStreamResolution_360_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_OWL360Camera_EStreamResolution_360()
	{
		if (!Z_Registration_Info_UEnum_EStreamResolution_360.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EStreamResolution_360.InnerSingleton, Z_Construct_UEnum_OWL360Camera_EStreamResolution_360_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EStreamResolution_360.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_E360ProjectionType;
	static UEnum* E360ProjectionType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_E360ProjectionType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_E360ProjectionType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OWL360Camera_E360ProjectionType, (UObject*)Z_Construct_UPackage__Script_OWL360Camera(), TEXT("E360ProjectionType"));
		}
		return Z_Registration_Info_UEnum_E360ProjectionType.OuterSingleton;
	}
	template<> OWL360CAMERA_API UEnum* StaticEnum<E360ProjectionType>()
	{
		return E360ProjectionType_StaticEnum();
	}
	struct Z_Construct_UEnum_OWL360Camera_E360ProjectionType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OWL360Camera_E360ProjectionType_Statics::Enumerators[] = {
		{ "E360ProjectionType::CT_CubeMap", (int64)E360ProjectionType::CT_CubeMap },
		{ "E360ProjectionType::CT_EquiRectangular", (int64)E360ProjectionType::CT_EquiRectangular },
		{ "E360ProjectionType::CT_DomeMaster", (int64)E360ProjectionType::CT_DomeMaster },
		{ "E360ProjectionType::CT_MirrorDome", (int64)E360ProjectionType::CT_MirrorDome },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OWL360Camera_E360ProjectionType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Type of texture output from the 360 cam\n" },
		{ "CT_CubeMap.DisplayName", "CubeMap" },
		{ "CT_CubeMap.Name", "E360ProjectionType::CT_CubeMap" },
		{ "CT_DomeMaster.DisplayName", "DomeMaster" },
		{ "CT_DomeMaster.Name", "E360ProjectionType::CT_DomeMaster" },
		{ "CT_EquiRectangular.DisplayName", "Equirectangular" },
		{ "CT_EquiRectangular.Name", "E360ProjectionType::CT_EquiRectangular" },
		{ "CT_MirrorDome.DisplayName", "Mirror Dome (Beta)" },
		{ "CT_MirrorDome.Experimental", "" },
		{ "CT_MirrorDome.Name", "E360ProjectionType::CT_MirrorDome" },
		{ "CT_MirrorDome.ToolTip", "A mirror dome shader for projecting a 2D image on a spherical mirror" },
		{ "ModuleRelativePath", "Public/OWL360CaptureComponent.h" },
		{ "ToolTip", "Type of texture output from the 360 cam" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OWL360Camera_E360ProjectionType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OWL360Camera,
		nullptr,
		"E360ProjectionType",
		"E360ProjectionType",
		Z_Construct_UEnum_OWL360Camera_E360ProjectionType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OWL360Camera_E360ProjectionType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_OWL360Camera_E360ProjectionType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_OWL360Camera_E360ProjectionType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_OWL360Camera_E360ProjectionType()
	{
		if (!Z_Registration_Info_UEnum_E360ProjectionType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_E360ProjectionType.InnerSingleton, Z_Construct_UEnum_OWL360Camera_E360ProjectionType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_E360ProjectionType.InnerSingleton;
	}
	DEFINE_FUNCTION(UOWL360CaptureComponent::execClearHiddenComponents)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearHiddenComponents();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOWL360CaptureComponent::execClearShowOnlyComponents)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearShowOnlyComponents();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOWL360CaptureComponent::execRemoveShowOnlyActorComponents)
	{
		P_GET_OBJECT(AActor,Z_Param_InActor);
		P_GET_UBOOL(Z_Param_bIncludeFromChildActors);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveShowOnlyActorComponents(Z_Param_InActor,Z_Param_bIncludeFromChildActors);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOWL360CaptureComponent::execRemoveShowOnlyComponent)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_InComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveShowOnlyComponent(Z_Param_InComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOWL360CaptureComponent::execShowOnlyActorComponents)
	{
		P_GET_OBJECT(AActor,Z_Param_InActor);
		P_GET_UBOOL(Z_Param_bIncludeFromChildActors);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowOnlyActorComponents(Z_Param_InActor,Z_Param_bIncludeFromChildActors);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOWL360CaptureComponent::execShowOnlyComponent)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_InComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowOnlyComponent(Z_Param_InComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOWL360CaptureComponent::execHideActorComponents)
	{
		P_GET_OBJECT(AActor,Z_Param_InActor);
		P_GET_UBOOL(Z_Param_bIncludeFromChildActors);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HideActorComponents(Z_Param_InActor,Z_Param_bIncludeFromChildActors);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOWL360CaptureComponent::execHideComponent)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_InComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HideComponent(Z_Param_InComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOWL360CaptureComponent::execGetStreamResolutionInt)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FIntPoint*)Z_Param__Result=P_THIS->GetStreamResolutionInt();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOWL360CaptureComponent::execGetTargetCamera)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCameraComponent**)Z_Param__Result=P_THIS->GetTargetCamera();
		P_NATIVE_END;
	}
	void UOWL360CaptureComponent::StaticRegisterNativesUOWL360CaptureComponent()
	{
		UClass* Class = UOWL360CaptureComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearHiddenComponents", &UOWL360CaptureComponent::execClearHiddenComponents },
			{ "ClearShowOnlyComponents", &UOWL360CaptureComponent::execClearShowOnlyComponents },
			{ "GetStreamResolutionInt", &UOWL360CaptureComponent::execGetStreamResolutionInt },
			{ "GetTargetCamera", &UOWL360CaptureComponent::execGetTargetCamera },
			{ "HideActorComponents", &UOWL360CaptureComponent::execHideActorComponents },
			{ "HideComponent", &UOWL360CaptureComponent::execHideComponent },
			{ "RemoveShowOnlyActorComponents", &UOWL360CaptureComponent::execRemoveShowOnlyActorComponents },
			{ "RemoveShowOnlyComponent", &UOWL360CaptureComponent::execRemoveShowOnlyComponent },
			{ "ShowOnlyActorComponents", &UOWL360CaptureComponent::execShowOnlyActorComponents },
			{ "ShowOnlyComponent", &UOWL360CaptureComponent::execShowOnlyComponent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOWL360CaptureComponent_ClearHiddenComponents_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOWL360CaptureComponent_ClearHiddenComponents_Statics::Function_MetaDataParams[] = {
		{ "Category", "OWL360Capture" },
		{ "Comment", "/** Clears the hidden list. */" },
		{ "ModuleRelativePath", "Public/OWL360CaptureComponent.h" },
		{ "ToolTip", "Clears the hidden list." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWL360CaptureComponent_ClearHiddenComponents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWL360CaptureComponent, nullptr, "ClearHiddenComponents", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOWL360CaptureComponent_ClearHiddenComponents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWL360CaptureComponent_ClearHiddenComponents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOWL360CaptureComponent_ClearHiddenComponents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWL360CaptureComponent_ClearHiddenComponents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOWL360CaptureComponent_ClearShowOnlyComponents_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOWL360CaptureComponent_ClearShowOnlyComponents_Statics::Function_MetaDataParams[] = {
		{ "Category", "OWL360Capture" },
		{ "Comment", "/** Clears the Show Only list. */" },
		{ "ModuleRelativePath", "Public/OWL360CaptureComponent.h" },
		{ "ToolTip", "Clears the Show Only list." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWL360CaptureComponent_ClearShowOnlyComponents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWL360CaptureComponent, nullptr, "ClearShowOnlyComponents", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOWL360CaptureComponent_ClearShowOnlyComponents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWL360CaptureComponent_ClearShowOnlyComponents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOWL360CaptureComponent_ClearShowOnlyComponents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWL360CaptureComponent_ClearShowOnlyComponents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOWL360CaptureComponent_GetStreamResolutionInt_Statics
	{
		struct OWL360CaptureComponent_eventGetStreamResolutionInt_Parms
		{
			FIntPoint ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOWL360CaptureComponent_GetStreamResolutionInt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OWL360CaptureComponent_eventGetStreamResolutionInt_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWL360CaptureComponent_GetStreamResolutionInt_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWL360CaptureComponent_GetStreamResolutionInt_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOWL360CaptureComponent_GetStreamResolutionInt_Statics::Function_MetaDataParams[] = {
		{ "Category", "OWL360Capture" },
		{ "ModuleRelativePath", "Public/OWL360CaptureComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWL360CaptureComponent_GetStreamResolutionInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWL360CaptureComponent, nullptr, "GetStreamResolutionInt", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOWL360CaptureComponent_GetStreamResolutionInt_Statics::OWL360CaptureComponent_eventGetStreamResolutionInt_Parms), Z_Construct_UFunction_UOWL360CaptureComponent_GetStreamResolutionInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWL360CaptureComponent_GetStreamResolutionInt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOWL360CaptureComponent_GetStreamResolutionInt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWL360CaptureComponent_GetStreamResolutionInt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOWL360CaptureComponent_GetStreamResolutionInt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWL360CaptureComponent_GetStreamResolutionInt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOWL360CaptureComponent_GetTargetCamera_Statics
	{
		struct OWL360CaptureComponent_eventGetTargetCamera_Parms
		{
			UCameraComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOWL360CaptureComponent_GetTargetCamera_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOWL360CaptureComponent_GetTargetCamera_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OWL360CaptureComponent_eventGetTargetCamera_Parms, ReturnValue), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UOWL360CaptureComponent_GetTargetCamera_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWL360CaptureComponent_GetTargetCamera_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWL360CaptureComponent_GetTargetCamera_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWL360CaptureComponent_GetTargetCamera_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOWL360CaptureComponent_GetTargetCamera_Statics::Function_MetaDataParams[] = {
		{ "Category", "OWL360Capture" },
		{ "ModuleRelativePath", "Public/OWL360CaptureComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWL360CaptureComponent_GetTargetCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWL360CaptureComponent, nullptr, "GetTargetCamera", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOWL360CaptureComponent_GetTargetCamera_Statics::OWL360CaptureComponent_eventGetTargetCamera_Parms), Z_Construct_UFunction_UOWL360CaptureComponent_GetTargetCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWL360CaptureComponent_GetTargetCamera_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOWL360CaptureComponent_GetTargetCamera_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWL360CaptureComponent_GetTargetCamera_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOWL360CaptureComponent_GetTargetCamera()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWL360CaptureComponent_GetTargetCamera_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOWL360CaptureComponent_HideActorComponents_Statics
	{
		struct OWL360CaptureComponent_eventHideActorComponents_Parms
		{
			AActor* InActor;
			bool bIncludeFromChildActors;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIncludeFromChildActors_MetaData[];
#endif
		static void NewProp_bIncludeFromChildActors_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeFromChildActors;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOWL360CaptureComponent_HideActorComponents_Statics::NewProp_InActor = { "InActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OWL360CaptureComponent_eventHideActorComponents_Parms, InActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOWL360CaptureComponent_HideActorComponents_Statics::NewProp_bIncludeFromChildActors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UOWL360CaptureComponent_HideActorComponents_Statics::NewProp_bIncludeFromChildActors_SetBit(void* Obj)
	{
		((OWL360CaptureComponent_eventHideActorComponents_Parms*)Obj)->bIncludeFromChildActors = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOWL360CaptureComponent_HideActorComponents_Statics::NewProp_bIncludeFromChildActors = { "bIncludeFromChildActors", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OWL360CaptureComponent_eventHideActorComponents_Parms), &Z_Construct_UFunction_UOWL360CaptureComponent_HideActorComponents_Statics::NewProp_bIncludeFromChildActors_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UOWL360CaptureComponent_HideActorComponents_Statics::NewProp_bIncludeFromChildActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWL360CaptureComponent_HideActorComponents_Statics::NewProp_bIncludeFromChildActors_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWL360CaptureComponent_HideActorComponents_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWL360CaptureComponent_HideActorComponents_Statics::NewProp_InActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWL360CaptureComponent_HideActorComponents_Statics::NewProp_bIncludeFromChildActors,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOWL360CaptureComponent_HideActorComponents_Statics::Function_MetaDataParams[] = {
		{ "Category", "OWL360Capture" },
		{ "Comment", "/**\n\x09 * Adds all primitive components in the actor to our list of hidden components.\n\x09 * @param bIncludeFromChildActors Whether to include the components from child actors\n\x09 */" },
		{ "CPP_Default_bIncludeFromChildActors", "false" },
		{ "ModuleRelativePath", "Public/OWL360CaptureComponent.h" },
		{ "ToolTip", "Adds all primitive components in the actor to our list of hidden components.\n@param bIncludeFromChildActors Whether to include the components from child actors" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWL360CaptureComponent_HideActorComponents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWL360CaptureComponent, nullptr, "HideActorComponents", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOWL360CaptureComponent_HideActorComponents_Statics::OWL360CaptureComponent_eventHideActorComponents_Parms), Z_Construct_UFunction_UOWL360CaptureComponent_HideActorComponents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWL360CaptureComponent_HideActorComponents_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOWL360CaptureComponent_HideActorComponents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWL360CaptureComponent_HideActorComponents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOWL360CaptureComponent_HideActorComponents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWL360CaptureComponent_HideActorComponents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOWL360CaptureComponent_HideComponent_Statics
	{
		struct OWL360CaptureComponent_eventHideComponent_Parms
		{
			UPrimitiveComponent* InComponent;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOWL360CaptureComponent_HideComponent_Statics::NewProp_InComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOWL360CaptureComponent_HideComponent_Statics::NewProp_InComponent = { "InComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OWL360CaptureComponent_eventHideComponent_Parms, InComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UOWL360CaptureComponent_HideComponent_Statics::NewProp_InComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWL360CaptureComponent_HideComponent_Statics::NewProp_InComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWL360CaptureComponent_HideComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWL360CaptureComponent_HideComponent_Statics::NewProp_InComponent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOWL360CaptureComponent_HideComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "OWL360Capture" },
		{ "Comment", "/** Adds the component to our list of hidden components. */" },
		{ "ModuleRelativePath", "Public/OWL360CaptureComponent.h" },
		{ "ToolTip", "Adds the component to our list of hidden components." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWL360CaptureComponent_HideComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWL360CaptureComponent, nullptr, "HideComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOWL360CaptureComponent_HideComponent_Statics::OWL360CaptureComponent_eventHideComponent_Parms), Z_Construct_UFunction_UOWL360CaptureComponent_HideComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWL360CaptureComponent_HideComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOWL360CaptureComponent_HideComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWL360CaptureComponent_HideComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOWL360CaptureComponent_HideComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWL360CaptureComponent_HideComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOWL360CaptureComponent_RemoveShowOnlyActorComponents_Statics
	{
		struct OWL360CaptureComponent_eventRemoveShowOnlyActorComponents_Parms
		{
			AActor* InActor;
			bool bIncludeFromChildActors;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIncludeFromChildActors_MetaData[];
#endif
		static void NewProp_bIncludeFromChildActors_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeFromChildActors;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOWL360CaptureComponent_RemoveShowOnlyActorComponents_Statics::NewProp_InActor = { "InActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OWL360CaptureComponent_eventRemoveShowOnlyActorComponents_Parms, InActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOWL360CaptureComponent_RemoveShowOnlyActorComponents_Statics::NewProp_bIncludeFromChildActors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UOWL360CaptureComponent_RemoveShowOnlyActorComponents_Statics::NewProp_bIncludeFromChildActors_SetBit(void* Obj)
	{
		((OWL360CaptureComponent_eventRemoveShowOnlyActorComponents_Parms*)Obj)->bIncludeFromChildActors = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOWL360CaptureComponent_RemoveShowOnlyActorComponents_Statics::NewProp_bIncludeFromChildActors = { "bIncludeFromChildActors", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OWL360CaptureComponent_eventRemoveShowOnlyActorComponents_Parms), &Z_Construct_UFunction_UOWL360CaptureComponent_RemoveShowOnlyActorComponents_Statics::NewProp_bIncludeFromChildActors_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UOWL360CaptureComponent_RemoveShowOnlyActorComponents_Statics::NewProp_bIncludeFromChildActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWL360CaptureComponent_RemoveShowOnlyActorComponents_Statics::NewProp_bIncludeFromChildActors_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWL360CaptureComponent_RemoveShowOnlyActorComponents_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWL360CaptureComponent_RemoveShowOnlyActorComponents_Statics::NewProp_InActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWL360CaptureComponent_RemoveShowOnlyActorComponents_Statics::NewProp_bIncludeFromChildActors,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOWL360CaptureComponent_RemoveShowOnlyActorComponents_Statics::Function_MetaDataParams[] = {
		{ "Category", "OWL360Capture" },
		{ "Comment", "/**\n\x09* Removes an actor's components from the Show Only list.\n\x09* @param bIncludeFromChildActors Whether to remove the components from child actors\n\x09*/" },
		{ "CPP_Default_bIncludeFromChildActors", "false" },
		{ "ModuleRelativePath", "Public/OWL360CaptureComponent.h" },
		{ "ToolTip", "Removes an actor's components from the Show Only list.\n@param bIncludeFromChildActors Whether to remove the components from child actors" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWL360CaptureComponent_RemoveShowOnlyActorComponents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWL360CaptureComponent, nullptr, "RemoveShowOnlyActorComponents", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOWL360CaptureComponent_RemoveShowOnlyActorComponents_Statics::OWL360CaptureComponent_eventRemoveShowOnlyActorComponents_Parms), Z_Construct_UFunction_UOWL360CaptureComponent_RemoveShowOnlyActorComponents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWL360CaptureComponent_RemoveShowOnlyActorComponents_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOWL360CaptureComponent_RemoveShowOnlyActorComponents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWL360CaptureComponent_RemoveShowOnlyActorComponents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOWL360CaptureComponent_RemoveShowOnlyActorComponents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWL360CaptureComponent_RemoveShowOnlyActorComponents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOWL360CaptureComponent_RemoveShowOnlyComponent_Statics
	{
		struct OWL360CaptureComponent_eventRemoveShowOnlyComponent_Parms
		{
			UPrimitiveComponent* InComponent;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOWL360CaptureComponent_RemoveShowOnlyComponent_Statics::NewProp_InComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOWL360CaptureComponent_RemoveShowOnlyComponent_Statics::NewProp_InComponent = { "InComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OWL360CaptureComponent_eventRemoveShowOnlyComponent_Parms, InComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UOWL360CaptureComponent_RemoveShowOnlyComponent_Statics::NewProp_InComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWL360CaptureComponent_RemoveShowOnlyComponent_Statics::NewProp_InComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWL360CaptureComponent_RemoveShowOnlyComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWL360CaptureComponent_RemoveShowOnlyComponent_Statics::NewProp_InComponent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOWL360CaptureComponent_RemoveShowOnlyComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "OWL360Capture" },
		{ "Comment", "/** Removes a component from the Show Only list. */" },
		{ "ModuleRelativePath", "Public/OWL360CaptureComponent.h" },
		{ "ToolTip", "Removes a component from the Show Only list." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWL360CaptureComponent_RemoveShowOnlyComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWL360CaptureComponent, nullptr, "RemoveShowOnlyComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOWL360CaptureComponent_RemoveShowOnlyComponent_Statics::OWL360CaptureComponent_eventRemoveShowOnlyComponent_Parms), Z_Construct_UFunction_UOWL360CaptureComponent_RemoveShowOnlyComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWL360CaptureComponent_RemoveShowOnlyComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOWL360CaptureComponent_RemoveShowOnlyComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWL360CaptureComponent_RemoveShowOnlyComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOWL360CaptureComponent_RemoveShowOnlyComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWL360CaptureComponent_RemoveShowOnlyComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOWL360CaptureComponent_ShowOnlyActorComponents_Statics
	{
		struct OWL360CaptureComponent_eventShowOnlyActorComponents_Parms
		{
			AActor* InActor;
			bool bIncludeFromChildActors;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIncludeFromChildActors_MetaData[];
#endif
		static void NewProp_bIncludeFromChildActors_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeFromChildActors;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOWL360CaptureComponent_ShowOnlyActorComponents_Statics::NewProp_InActor = { "InActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OWL360CaptureComponent_eventShowOnlyActorComponents_Parms, InActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOWL360CaptureComponent_ShowOnlyActorComponents_Statics::NewProp_bIncludeFromChildActors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UOWL360CaptureComponent_ShowOnlyActorComponents_Statics::NewProp_bIncludeFromChildActors_SetBit(void* Obj)
	{
		((OWL360CaptureComponent_eventShowOnlyActorComponents_Parms*)Obj)->bIncludeFromChildActors = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOWL360CaptureComponent_ShowOnlyActorComponents_Statics::NewProp_bIncludeFromChildActors = { "bIncludeFromChildActors", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OWL360CaptureComponent_eventShowOnlyActorComponents_Parms), &Z_Construct_UFunction_UOWL360CaptureComponent_ShowOnlyActorComponents_Statics::NewProp_bIncludeFromChildActors_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UOWL360CaptureComponent_ShowOnlyActorComponents_Statics::NewProp_bIncludeFromChildActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWL360CaptureComponent_ShowOnlyActorComponents_Statics::NewProp_bIncludeFromChildActors_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWL360CaptureComponent_ShowOnlyActorComponents_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWL360CaptureComponent_ShowOnlyActorComponents_Statics::NewProp_InActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWL360CaptureComponent_ShowOnlyActorComponents_Statics::NewProp_bIncludeFromChildActors,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOWL360CaptureComponent_ShowOnlyActorComponents_Statics::Function_MetaDataParams[] = {
		{ "Category", "OWL360Capture" },
		{ "Comment", "/**\n\x09* Adds all primitive components in the actor to our list of show-only components.\n\x09* @param bIncludeFromChildActors Whether to include the components from child actors\n\x09*/" },
		{ "CPP_Default_bIncludeFromChildActors", "false" },
		{ "ModuleRelativePath", "Public/OWL360CaptureComponent.h" },
		{ "ToolTip", "Adds all primitive components in the actor to our list of show-only components.\n@param bIncludeFromChildActors Whether to include the components from child actors" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWL360CaptureComponent_ShowOnlyActorComponents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWL360CaptureComponent, nullptr, "ShowOnlyActorComponents", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOWL360CaptureComponent_ShowOnlyActorComponents_Statics::OWL360CaptureComponent_eventShowOnlyActorComponents_Parms), Z_Construct_UFunction_UOWL360CaptureComponent_ShowOnlyActorComponents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWL360CaptureComponent_ShowOnlyActorComponents_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOWL360CaptureComponent_ShowOnlyActorComponents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWL360CaptureComponent_ShowOnlyActorComponents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOWL360CaptureComponent_ShowOnlyActorComponents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWL360CaptureComponent_ShowOnlyActorComponents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOWL360CaptureComponent_ShowOnlyComponent_Statics
	{
		struct OWL360CaptureComponent_eventShowOnlyComponent_Parms
		{
			UPrimitiveComponent* InComponent;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOWL360CaptureComponent_ShowOnlyComponent_Statics::NewProp_InComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOWL360CaptureComponent_ShowOnlyComponent_Statics::NewProp_InComponent = { "InComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OWL360CaptureComponent_eventShowOnlyComponent_Parms, InComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UOWL360CaptureComponent_ShowOnlyComponent_Statics::NewProp_InComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWL360CaptureComponent_ShowOnlyComponent_Statics::NewProp_InComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWL360CaptureComponent_ShowOnlyComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWL360CaptureComponent_ShowOnlyComponent_Statics::NewProp_InComponent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOWL360CaptureComponent_ShowOnlyComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "OWL360Capture" },
		{ "Comment", "/** Adds the component to our list of show-only components. */" },
		{ "ModuleRelativePath", "Public/OWL360CaptureComponent.h" },
		{ "ToolTip", "Adds the component to our list of show-only components." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWL360CaptureComponent_ShowOnlyComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWL360CaptureComponent, nullptr, "ShowOnlyComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOWL360CaptureComponent_ShowOnlyComponent_Statics::OWL360CaptureComponent_eventShowOnlyComponent_Parms), Z_Construct_UFunction_UOWL360CaptureComponent_ShowOnlyComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWL360CaptureComponent_ShowOnlyComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOWL360CaptureComponent_ShowOnlyComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWL360CaptureComponent_ShowOnlyComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOWL360CaptureComponent_ShowOnlyComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWL360CaptureComponent_ShowOnlyComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOWL360CaptureComponent);
	UClass* Z_Construct_UClass_UOWL360CaptureComponent_NoRegister()
	{
		return UOWL360CaptureComponent::StaticClass();
	}
	struct Z_Construct_UClass_UOWL360CaptureComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextureTarget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TextureTarget;
		static const UECodeGen_Private::FBytePropertyParams NewProp_StreamResolution_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StreamResolution_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_StreamResolution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputResolution_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutputResolution;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ProjectionType360_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectionType360_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ProjectionType360;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Angle_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Angle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DomeProjectorRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DomeProjectorRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DomeProjectorLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DomeProjectorLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DomePixelAspectRatio_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DomePixelAspectRatio;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DomeRotatorOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DomeRotatorOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DomeFOV_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_DomeFOV;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CubemapBleedPercent_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CubemapBleedPercent;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PostProcessPipeline_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PostProcessPipeline_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PostProcessPipeline;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ShowFlagSettings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShowFlagSettings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ShowFlagSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PostProcessSettings360_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PostProcessSettings360;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PostProcessBlendWeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PostProcessBlendWeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PauseRendering_MetaData[];
#endif
		static void NewProp_PauseRendering_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_PauseRendering;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenderFrontFace_MetaData[];
#endif
		static void NewProp_RenderFrontFace_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_RenderFrontFace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenderBackFace_MetaData[];
#endif
		static void NewProp_RenderBackFace_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_RenderBackFace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenderLeftFace_MetaData[];
#endif
		static void NewProp_RenderLeftFace_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_RenderLeftFace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenderRightFace_MetaData[];
#endif
		static void NewProp_RenderRightFace_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_RenderRightFace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenderTopFace_MetaData[];
#endif
		static void NewProp_RenderTopFace_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_RenderTopFace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenderBottomFace_MetaData[];
#endif
		static void NewProp_RenderBottomFace_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_RenderBottomFace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LODDistanceFactor_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LODDistanceFactor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxViewDistanceOverride_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxViewDistanceOverride;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UseShowOnlyList_MetaData[];
#endif
		static void NewProp_UseShowOnlyList_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UseShowOnlyList;
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_HiddenComponents_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HiddenComponents_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_HiddenComponents;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HiddenActors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HiddenActors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_HiddenActors;
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_ShowOnlyComponents_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShowOnlyComponents_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ShowOnlyComponents;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ShowOnlyActors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShowOnlyActors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ShowOnlyActors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InvertAlpha_MetaData[];
#endif
		static void NewProp_InvertAlpha_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_InvertAlpha;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableUpscaling_MetaData[];
#endif
		static void NewProp_bEnableUpscaling_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableUpscaling;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScreenPercentage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ScreenPercentage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SecondaryScreenPercentage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SecondaryScreenPercentage;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InternalRTs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InternalRTs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InternalRTs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOWL360CaptureComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_OWL360Camera,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOWL360CaptureComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOWL360CaptureComponent_ClearHiddenComponents, "ClearHiddenComponents" }, // 393117671
		{ &Z_Construct_UFunction_UOWL360CaptureComponent_ClearShowOnlyComponents, "ClearShowOnlyComponents" }, // 1251276802
		{ &Z_Construct_UFunction_UOWL360CaptureComponent_GetStreamResolutionInt, "GetStreamResolutionInt" }, // 2923158387
		{ &Z_Construct_UFunction_UOWL360CaptureComponent_GetTargetCamera, "GetTargetCamera" }, // 3352808436
		{ &Z_Construct_UFunction_UOWL360CaptureComponent_HideActorComponents, "HideActorComponents" }, // 1623424929
		{ &Z_Construct_UFunction_UOWL360CaptureComponent_HideComponent, "HideComponent" }, // 1487063086
		{ &Z_Construct_UFunction_UOWL360CaptureComponent_RemoveShowOnlyActorComponents, "RemoveShowOnlyActorComponents" }, // 2542439669
		{ &Z_Construct_UFunction_UOWL360CaptureComponent_RemoveShowOnlyComponent, "RemoveShowOnlyComponent" }, // 2284806313
		{ &Z_Construct_UFunction_UOWL360CaptureComponent_ShowOnlyActorComponents, "ShowOnlyActorComponents" }, // 3081637788
		{ &Z_Construct_UFunction_UOWL360CaptureComponent_ShowOnlyComponent, "ShowOnlyComponent" }, // 4031993644
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWL360CaptureComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Rendering" },
		{ "Comment", "/*\n\nThe Cubemap cameras are six:\nin the order specified here:\nhttps://github.com/google/spatial-media/blob/master/docs/spherical-video-v2-rfc.md#cubemap-projection-box-cbmp\nThese are written left-to-right, top-to-bottom\nie:\n[ 0, 1, 2 ]\n[ 3, 4, 5 ]\n\nWhere:\n0: Right\n1: Left\n2: Up\n3: Down\n4: Front\n5: Back\n*/" },
		{ "HideCategories", "Collision Object Physics SceneComponent Mobility Tags Activation Cooking Rendering Trigger PhysicsVolume" },
		{ "IncludePath", "OWL360CaptureComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OWL360CaptureComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "The Cubemap cameras are six:\nin the order specified here:\nhttps://github.com/google/spatial-media/blob/master/docs/spherical-video-v2-rfc.md#cubemap-projection-box-cbmp\nThese are written left-to-right, top-to-bottom\nie:\n[ 0, 1, 2 ]\n[ 3, 4, 5 ]\n\nWhere:\n0: Right\n1: Left\n2: Up\n3: Down\n4: Front\n5: Back" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_TextureTarget_MetaData[] = {
		{ "Category", "Off World Live Capture Settings" },
		{ "Comment", "/**\n\x09* Render target to render the 360 projection onto\n\x09*/" },
		{ "ModuleRelativePath", "Public/OWL360CaptureComponent.h" },
		{ "ToolTip", "Render target to render the 360 projection onto" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_TextureTarget = { "TextureTarget", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOWL360CaptureComponent, TextureTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_TextureTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_TextureTarget_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_StreamResolution_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_StreamResolution_MetaData[] = {
		{ "Category", "Off World Live Capture Settings" },
		{ "Comment", "/* Texture resolution presets for camera render output */" },
		{ "ModuleRelativePath", "Public/OWL360CaptureComponent.h" },
		{ "ToolTip", "Texture resolution presets for camera render output" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_StreamResolution = { "StreamResolution", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOWL360CaptureComponent, StreamResolution), Z_Construct_UEnum_OWL360Camera_EStreamResolution_360, METADATA_PARAMS(Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_StreamResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_StreamResolution_MetaData)) }; // 3006856613
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_OutputResolution_MetaData[] = {
		{ "Category", "Off World Live Capture Settings" },
		{ "Comment", "/* Texture resolution for camera render output */" },
		{ "EditCondition", "StreamResolution == EStreamResolution_360::RS_360_Custom" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/OWL360CaptureComponent.h" },
		{ "ToolTip", "Texture resolution for camera render output" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_OutputResolution = { "OutputResolution", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOWL360CaptureComponent, OutputResolution), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_OutputResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_OutputResolution_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_ProjectionType360_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_ProjectionType360_MetaData[] = {
		{ "Category", "Off World Live Capture Settings" },
		{ "Comment", "/* Output texture format */" },
		{ "DisplayName", "360 Projection Type" },
		{ "ModuleRelativePath", "Public/OWL360CaptureComponent.h" },
		{ "ToolTip", "Output texture format" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_ProjectionType360 = { "ProjectionType360", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOWL360CaptureComponent, ProjectionType360), Z_Construct_UEnum_OWL360Camera_E360ProjectionType, METADATA_PARAMS(Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_ProjectionType360_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_ProjectionType360_MetaData)) }; // 844386497
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_Angle_MetaData[] = {
		{ "Category", "Off World Live Capture Settings" },
		{ "Comment", "/* Output texture format */" },
		{ "EditCondition", "ProjectionType360 == E360ProjectionType::CT_DomeMaster" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/OWL360CaptureComponent.h" },
		{ "ToolTip", "Output texture format" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_Angle = { "Angle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOWL360CaptureComponent, Angle), METADATA_PARAMS(Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_Angle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_Angle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_DomeProjectorRotation_MetaData[] = {
		{ "Category", "Off World Live Capture Settings" },
		{ "EditCondition", "ProjectionType360 == E360ProjectionType::CT_MirrorDome" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/OWL360CaptureComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_DomeProjectorRotation = { "DomeProjectorRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOWL360CaptureComponent, DomeProjectorRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_DomeProjectorRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_DomeProjectorRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_DomeProjectorLocation_MetaData[] = {
		{ "Category", "Off World Live Capture Settings" },
		{ "EditCondition", "ProjectionType360 == E360ProjectionType::CT_MirrorDome" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/OWL360CaptureComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_DomeProjectorLocation = { "DomeProjectorLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOWL360CaptureComponent, DomeProjectorLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_DomeProjectorLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_DomeProjectorLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_DomePixelAspectRatio_MetaData[] = {
		{ "Category", "Off World Live Capture Settings" },
		{ "EditCondition", "ProjectionType360 == E360ProjectionType::CT_MirrorDome" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/OWL360CaptureComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_DomePixelAspectRatio = { "DomePixelAspectRatio", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOWL360CaptureComponent, DomePixelAspectRatio), METADATA_PARAMS(Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_DomePixelAspectRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_DomePixelAspectRatio_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_DomeRotatorOffset_MetaData[] = {
		{ "Category", "Off World Live Capture Settings" },
		{ "EditCondition", "ProjectionType360 == E360ProjectionType::CT_MirrorDome" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/OWL360CaptureComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_DomeRotatorOffset = { "DomeRotatorOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOWL360CaptureComponent, DomeRotatorOffset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_DomeRotatorOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_DomeRotatorOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_DomeFOV_MetaData[] = {
		{ "Category", "Off World Live Capture Settings" },
		{ "ClampMax", "150" },
		{ "ClampMin", "5" },
		{ "Comment", "/* FOV of the dome mirror */" },
		{ "EditCondition", "ProjectionType360 == E360ProjectionType::CT_MirrorDome" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/OWL360CaptureComponent.h" },
		{ "ToolTip", "FOV of the dome mirror" },
		{ "UIMax", "150" },
		{ "UIMin", "5" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_DomeFOV = { "DomeFOV", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOWL360CaptureComponent, DomeFOV), METADATA_PARAMS(Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_DomeFOV_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_DomeFOV_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_CubemapBleedPercent_MetaData[] = {
		{ "Category", "Off World Live Capture Settings" },
		{ "ClampMax", "100.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/* Buffer around image border (requirement for Facebook streaming) */" },
		{ "EditCondition", "ProjectionType360 == E360ProjectionType::CT_CubeMap" },
		{ "ModuleRelativePath", "Public/OWL360CaptureComponent.h" },
		{ "ToolTip", "Buffer around image border (requirement for Facebook streaming)" },
		{ "UIMax", "100.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_CubemapBleedPercent = { "CubemapBleedPercent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOWL360CaptureComponent, CubemapBleedPercent), METADATA_PARAMS(Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_CubemapBleedPercent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_CubemapBleedPercent_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_PostProcessPipeline_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_PostProcessPipeline_MetaData[] = {
		{ "Category", "Off World Live Capture Settings" },
		{ "Comment", "/* Type of Post Process applied to the output texture */" },
		{ "ModuleRelativePath", "Public/OWL360CaptureComponent.h" },
		{ "ToolTip", "Type of Post Process applied to the output texture" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_PostProcessPipeline = { "PostProcessPipeline", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOWL360CaptureComponent, PostProcessPipeline), Z_Construct_UEnum_OWL360Camera_E360PostProcessPipeline, METADATA_PARAMS(Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_PostProcessPipeline_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_PostProcessPipeline_MetaData)) }; // 2619903406
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_ShowFlagSettings_Inner = { "ShowFlagSettings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FEngineShowFlagsSetting, METADATA_PARAMS(nullptr, 0) }; // 2639744659
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_ShowFlagSettings_MetaData[] = {
		{ "Category", "Off World Live Capture Settings" },
		{ "ModuleRelativePath", "Public/OWL360CaptureComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_ShowFlagSettings = { "ShowFlagSettings", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOWL360CaptureComponent, ShowFlagSettings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_ShowFlagSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_ShowFlagSettings_MetaData)) }; // 2639744659
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_PostProcessSettings360_MetaData[] = {
		{ "Category", "Off World Live 360 Post Process Settings" },
		{ "Comment", "// If changing these post-processing settings at run-time, remember to call the AOffWorldLiveThreeSixtyCamPawn::RefreshOffWorldPostProcessSettings() function afterwards to apply the settings\n" },
		{ "DisplayName", "360 Post Process Settings" },
		{ "ModuleRelativePath", "Public/OWL360CaptureComponent.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "If changing these post-processing settings at run-time, remember to call the AOffWorldLiveThreeSixtyCamPawn::RefreshOffWorldPostProcessSettings() function afterwards to apply the settings" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_PostProcessSettings360 = { "PostProcessSettings360", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOWL360CaptureComponent, PostProcessSettings360), Z_Construct_UScriptStruct_FOWL360PostProcessSettings, METADATA_PARAMS(Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_PostProcessSettings360_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_PostProcessSettings360_MetaData)) }; // 358013124
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_PostProcessBlendWeight_MetaData[] = {
		{ "Category", "Off World Live 360 Post Process Settings" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/OWL360CaptureComponent.h" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_PostProcessBlendWeight = { "PostProcessBlendWeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOWL360CaptureComponent, PostProcessBlendWeight), METADATA_PARAMS(Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_PostProcessBlendWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_PostProcessBlendWeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_PauseRendering_MetaData[] = {
		{ "Category", "Off World Live Capture Settings" },
		{ "Comment", "/** Tick if you want to pause rendering to the render target */" },
		{ "ModuleRelativePath", "Public/OWL360CaptureComponent.h" },
		{ "ToolTip", "Tick if you want to pause rendering to the render target" },
	};
#endif
	void Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_PauseRendering_SetBit(void* Obj)
	{
		((UOWL360CaptureComponent*)Obj)->PauseRendering = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_PauseRendering = { "PauseRendering", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UOWL360CaptureComponent), &Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_PauseRendering_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_PauseRendering_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_PauseRendering_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_RenderFrontFace_MetaData[] = {
		{ "Category", "Off World Live Capture Settings|Advanced" },
		{ "ModuleRelativePath", "Public/OWL360CaptureComponent.h" },
	};
#endif
	void Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_RenderFrontFace_SetBit(void* Obj)
	{
		((UOWL360CaptureComponent*)Obj)->RenderFrontFace = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_RenderFrontFace = { "RenderFrontFace", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UOWL360CaptureComponent), &Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_RenderFrontFace_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_RenderFrontFace_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_RenderFrontFace_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_RenderBackFace_MetaData[] = {
		{ "Category", "Off World Live Capture Settings|Advanced" },
		{ "ModuleRelativePath", "Public/OWL360CaptureComponent.h" },
	};
#endif
	void Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_RenderBackFace_SetBit(void* Obj)
	{
		((UOWL360CaptureComponent*)Obj)->RenderBackFace = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_RenderBackFace = { "RenderBackFace", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UOWL360CaptureComponent), &Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_RenderBackFace_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_RenderBackFace_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_RenderBackFace_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_RenderLeftFace_MetaData[] = {
		{ "Category", "Off World Live Capture Settings|Advanced" },
		{ "ModuleRelativePath", "Public/OWL360CaptureComponent.h" },
	};
#endif
	void Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_RenderLeftFace_SetBit(void* Obj)
	{
		((UOWL360CaptureComponent*)Obj)->RenderLeftFace = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_RenderLeftFace = { "RenderLeftFace", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UOWL360CaptureComponent), &Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_RenderLeftFace_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_RenderLeftFace_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_RenderLeftFace_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_RenderRightFace_MetaData[] = {
		{ "Category", "Off World Live Capture Settings|Advanced" },
		{ "ModuleRelativePath", "Public/OWL360CaptureComponent.h" },
	};
#endif
	void Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_RenderRightFace_SetBit(void* Obj)
	{
		((UOWL360CaptureComponent*)Obj)->RenderRightFace = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_RenderRightFace = { "RenderRightFace", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UOWL360CaptureComponent), &Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_RenderRightFace_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_RenderRightFace_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_RenderRightFace_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_RenderTopFace_MetaData[] = {
		{ "Category", "Off World Live Capture Settings|Advanced" },
		{ "ModuleRelativePath", "Public/OWL360CaptureComponent.h" },
	};
#endif
	void Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_RenderTopFace_SetBit(void* Obj)
	{
		((UOWL360CaptureComponent*)Obj)->RenderTopFace = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_RenderTopFace = { "RenderTopFace", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UOWL360CaptureComponent), &Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_RenderTopFace_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_RenderTopFace_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_RenderTopFace_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_RenderBottomFace_MetaData[] = {
		{ "Category", "Off World Live Capture Settings|Advanced" },
		{ "ModuleRelativePath", "Public/OWL360CaptureComponent.h" },
	};
#endif
	void Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_RenderBottomFace_SetBit(void* Obj)
	{
		((UOWL360CaptureComponent*)Obj)->RenderBottomFace = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_RenderBottomFace = { "RenderBottomFace", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UOWL360CaptureComponent), &Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_RenderBottomFace_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_RenderBottomFace_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_RenderBottomFace_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_LODDistanceFactor_MetaData[] = {
		{ "Category", "Off World Live Capture Settings|Advanced" },
		{ "Comment", "/** Scales the distance used by LOD. Set to values greater than 1 to cause the scene capture to use lower LODs than the main view to speed up the scene capture pass. */" },
		{ "ModuleRelativePath", "Public/OWL360CaptureComponent.h" },
		{ "ToolTip", "Scales the distance used by LOD. Set to values greater than 1 to cause the scene capture to use lower LODs than the main view to speed up the scene capture pass." },
		{ "UIMax", "10" },
		{ "UIMin", ".1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_LODDistanceFactor = { "LODDistanceFactor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOWL360CaptureComponent, LODDistanceFactor), METADATA_PARAMS(Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_LODDistanceFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_LODDistanceFactor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_MaxViewDistanceOverride_MetaData[] = {
		{ "Category", "Off World Live Capture Settings|Advanced" },
		{ "Comment", "/** if > 0, sets a maximum render distance override.  Can be used to cull distant objects from a reflection if the reflecting plane is in an enclosed area like a hallway or room */" },
		{ "ModuleRelativePath", "Public/OWL360CaptureComponent.h" },
		{ "ToolTip", "if > 0, sets a maximum render distance override.  Can be used to cull distant objects from a reflection if the reflecting plane is in an enclosed area like a hallway or room" },
		{ "UIMax", "10000" },
		{ "UIMin", "100" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_MaxViewDistanceOverride = { "MaxViewDistanceOverride", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOWL360CaptureComponent, MaxViewDistanceOverride), METADATA_PARAMS(Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_MaxViewDistanceOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_MaxViewDistanceOverride_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_UseShowOnlyList_MetaData[] = {
		{ "Category", "Off World Live Capture Settings|Alpha Settings" },
		{ "Comment", "/** Tick if you want to render selected primitives only */" },
		{ "ModuleRelativePath", "Public/OWL360CaptureComponent.h" },
		{ "ToolTip", "Tick if you want to render selected primitives only" },
	};
#endif
	void Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_UseShowOnlyList_SetBit(void* Obj)
	{
		((UOWL360CaptureComponent*)Obj)->UseShowOnlyList = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_UseShowOnlyList = { "UseShowOnlyList", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UOWL360CaptureComponent), &Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_UseShowOnlyList_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_UseShowOnlyList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_UseShowOnlyList_MetaData)) };
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_HiddenComponents_Inner = { "HiddenComponents", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_HiddenComponents_MetaData[] = {
		{ "Comment", "/** The components won't rendered by current component.*/" },
		{ "ModuleRelativePath", "Public/OWL360CaptureComponent.h" },
		{ "ToolTip", "The components won't rendered by current component." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_HiddenComponents = { "HiddenComponents", nullptr, (EPropertyFlags)0x0014008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOWL360CaptureComponent, HiddenComponents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_HiddenComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_HiddenComponents_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_HiddenActors_Inner = { "HiddenActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_HiddenActors_MetaData[] = {
		{ "Category", "Off World Live Capture Settings|Alpha Settings" },
		{ "Comment", "/** The actors to hide in the scene capture. */" },
		{ "ModuleRelativePath", "Public/OWL360CaptureComponent.h" },
		{ "ToolTip", "The actors to hide in the scene capture." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_HiddenActors = { "HiddenActors", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOWL360CaptureComponent, HiddenActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_HiddenActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_HiddenActors_MetaData)) };
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_ShowOnlyComponents_Inner = { "ShowOnlyComponents", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_ShowOnlyComponents_MetaData[] = {
		{ "Comment", "/** The only components to be rendered by this scene capture, if PrimitiveRenderMode is set to UseShowOnlyList. */" },
		{ "ModuleRelativePath", "Public/OWL360CaptureComponent.h" },
		{ "ToolTip", "The only components to be rendered by this scene capture, if PrimitiveRenderMode is set to UseShowOnlyList." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_ShowOnlyComponents = { "ShowOnlyComponents", nullptr, (EPropertyFlags)0x0014008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOWL360CaptureComponent, ShowOnlyComponents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_ShowOnlyComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_ShowOnlyComponents_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_ShowOnlyActors_Inner = { "ShowOnlyActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_ShowOnlyActors_MetaData[] = {
		{ "Category", "Off World Live Capture Settings|Alpha Settings" },
		{ "Comment", "/** The only actors to be rendered by this scene capture, if PrimitiveRenderMode is set to UseShowOnlyList.*/" },
		{ "ModuleRelativePath", "Public/OWL360CaptureComponent.h" },
		{ "ToolTip", "The only actors to be rendered by this scene capture, if PrimitiveRenderMode is set to UseShowOnlyList." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_ShowOnlyActors = { "ShowOnlyActors", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOWL360CaptureComponent, ShowOnlyActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_ShowOnlyActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_ShowOnlyActors_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_InvertAlpha_MetaData[] = {
		{ "Category", "Off World Live Capture Settings|Alpha Settings" },
		{ "Comment", "/** By default we invert the ue4's default alpha value of captured textures - you can disable it here */" },
		{ "ModuleRelativePath", "Public/OWL360CaptureComponent.h" },
		{ "ToolTip", "By default we invert the ue4's default alpha value of captured textures - you can disable it here" },
	};
#endif
	void Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_InvertAlpha_SetBit(void* Obj)
	{
		((UOWL360CaptureComponent*)Obj)->InvertAlpha = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_InvertAlpha = { "InvertAlpha", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UOWL360CaptureComponent), &Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_InvertAlpha_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_InvertAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_InvertAlpha_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_bEnableUpscaling_MetaData[] = {
		{ "Category", "Off World Live Capture Settings|Advanced" },
		{ "Comment", "/** Tick to enable plugins like DLSS -- warning certain anti-aliasing settings may cause crashes when screen percentage on this actor is adjusted. WARNING: this feature is experimental and\n\x09\x09may cause crashes especially in conjuction with the Seamless Bloom!! */" },
		{ "DevelopmentStatus", "Experimental" },
		{ "DisplayName", "Enable Upscaling (Experimental)" },
		{ "ModuleRelativePath", "Public/OWL360CaptureComponent.h" },
		{ "ToolTip", "Tick to enable plugins like DLSS -- warning certain anti-aliasing settings may cause crashes when screen percentage on this actor is adjusted. WARNING: this feature is experimental and\n              may cause crashes especially in conjuction with the Seamless Bloom!!" },
	};
#endif
	void Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_bEnableUpscaling_SetBit(void* Obj)
	{
		((UOWL360CaptureComponent*)Obj)->bEnableUpscaling = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_bEnableUpscaling = { "bEnableUpscaling", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UOWL360CaptureComponent), &Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_bEnableUpscaling_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_bEnableUpscaling_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_bEnableUpscaling_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_ScreenPercentage_MetaData[] = {
		{ "Category", "Off World Live Capture Settings|Advanced" },
		{ "ClampMax", "200" },
		{ "ClampMin", "25" },
		{ "Comment", "/** ScreenPercentage affects impact of upscaling (ie DLSS, TAA ...) */" },
		{ "DevelopmentStatus", "Experimental" },
		{ "EditCondition", "bEnableUpscaling" },
		{ "ModuleRelativePath", "Public/OWL360CaptureComponent.h" },
		{ "ToolTip", "ScreenPercentage affects impact of upscaling (ie DLSS, TAA ...)" },
		{ "UIMax", "200" },
		{ "UIMin", "25" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_ScreenPercentage = { "ScreenPercentage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOWL360CaptureComponent, ScreenPercentage), METADATA_PARAMS(Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_ScreenPercentage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_ScreenPercentage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_SecondaryScreenPercentage_MetaData[] = {
		{ "Category", "Off World Live Capture Settings|Advanced" },
		{ "ClampMax", "200" },
		{ "ClampMin", "25" },
		{ "Comment", "/** Secondary Screen Percentage affects impact of upscaling (ie DLSS, TAA ...) */" },
		{ "DevelopmentStatus", "Experimental" },
		{ "EditCondition", "bEnableUpscaling" },
		{ "ModuleRelativePath", "Public/OWL360CaptureComponent.h" },
		{ "ToolTip", "Secondary Screen Percentage affects impact of upscaling (ie DLSS, TAA ...)" },
		{ "UIMax", "200" },
		{ "UIMin", "25" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_SecondaryScreenPercentage = { "SecondaryScreenPercentage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOWL360CaptureComponent, SecondaryScreenPercentage), METADATA_PARAMS(Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_SecondaryScreenPercentage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_SecondaryScreenPercentage_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_InternalRTs_Inner = { "InternalRTs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_InternalRTs_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWL360CaptureComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_InternalRTs = { "InternalRTs", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOWL360CaptureComponent, InternalRTs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_InternalRTs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_InternalRTs_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_CameraMesh_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWL360CaptureComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_CameraMesh = { "CameraMesh", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOWL360CaptureComponent, CameraMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_CameraMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_CameraMesh_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOWL360CaptureComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_TextureTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_StreamResolution_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_StreamResolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_OutputResolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_ProjectionType360_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_ProjectionType360,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_Angle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_DomeProjectorRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_DomeProjectorLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_DomePixelAspectRatio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_DomeRotatorOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_DomeFOV,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_CubemapBleedPercent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_PostProcessPipeline_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_PostProcessPipeline,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_ShowFlagSettings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_ShowFlagSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_PostProcessSettings360,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_PostProcessBlendWeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_PauseRendering,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_RenderFrontFace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_RenderBackFace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_RenderLeftFace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_RenderRightFace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_RenderTopFace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_RenderBottomFace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_LODDistanceFactor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_MaxViewDistanceOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_UseShowOnlyList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_HiddenComponents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_HiddenComponents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_HiddenActors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_HiddenActors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_ShowOnlyComponents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_ShowOnlyComponents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_ShowOnlyActors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_ShowOnlyActors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_InvertAlpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_bEnableUpscaling,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_ScreenPercentage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_SecondaryScreenPercentage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_InternalRTs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_InternalRTs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWL360CaptureComponent_Statics::NewProp_CameraMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOWL360CaptureComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOWL360CaptureComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOWL360CaptureComponent_Statics::ClassParams = {
		&UOWL360CaptureComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOWL360CaptureComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOWL360CaptureComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UOWL360CaptureComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOWL360CaptureComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOWL360CaptureComponent()
	{
		if (!Z_Registration_Info_UClass_UOWL360CaptureComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOWL360CaptureComponent.OuterSingleton, Z_Construct_UClass_UOWL360CaptureComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOWL360CaptureComponent.OuterSingleton;
	}
	template<> OWL360CAMERA_API UClass* StaticClass<UOWL360CaptureComponent>()
	{
		return UOWL360CaptureComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOWL360CaptureComponent);
	UOWL360CaptureComponent::~UOWL360CaptureComponent() {}
	struct Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWL360Camera_Public_OWL360CaptureComponent_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWL360Camera_Public_OWL360CaptureComponent_h_Statics::EnumInfo[] = {
		{ EStreamResolution_360_StaticEnum, TEXT("EStreamResolution_360"), &Z_Registration_Info_UEnum_EStreamResolution_360, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3006856613U) },
		{ E360ProjectionType_StaticEnum, TEXT("E360ProjectionType"), &Z_Registration_Info_UEnum_E360ProjectionType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 844386497U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWL360Camera_Public_OWL360CaptureComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOWL360CaptureComponent, UOWL360CaptureComponent::StaticClass, TEXT("UOWL360CaptureComponent"), &Z_Registration_Info_UClass_UOWL360CaptureComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOWL360CaptureComponent), 793377288U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWL360Camera_Public_OWL360CaptureComponent_h_365381870(TEXT("/Script/OWL360Camera"),
		Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWL360Camera_Public_OWL360CaptureComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWL360Camera_Public_OWL360CaptureComponent_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWL360Camera_Public_OWL360CaptureComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWL360Camera_Public_OWL360CaptureComponent_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
