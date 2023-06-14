// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OWLComposure/Public/OWLCGElement.h"
#include "../../Source/Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "ActorLayerUtilities.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOWLCGElement() {}
// Cross Module References
	ACTORLAYERUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FActorLayer();
	COMPOSURE_API UClass* Z_Construct_UClass_UCompositingInputInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FComponentReference();
	OWLCOMPOSURE_API UClass* Z_Construct_UClass_AOWLBaseComp();
	OWLCOMPOSURE_API UClass* Z_Construct_UClass_AOWLCGElement();
	OWLCOMPOSURE_API UClass* Z_Construct_UClass_AOWLCGElement_NoRegister();
	OWLCOMPOSURE_API UClass* Z_Construct_UClass_UOWLCGCaptureComponent_NoRegister();
	OWLCOMPOSURE_API UEnum* Z_Construct_UEnum_OWLComposure_EOWLIncludeExclude();
	OWLCOMPOSURE_API UScriptStruct* Z_Construct_UScriptStruct_FOWLActorLayer();
	UPackage* Z_Construct_UPackage__Script_OWLComposure();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOWLIncludeExclude;
	static UEnum* EOWLIncludeExclude_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EOWLIncludeExclude.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EOWLIncludeExclude.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OWLComposure_EOWLIncludeExclude, (UObject*)Z_Construct_UPackage__Script_OWLComposure(), TEXT("EOWLIncludeExclude"));
		}
		return Z_Registration_Info_UEnum_EOWLIncludeExclude.OuterSingleton;
	}
	template<> OWLCOMPOSURE_API UEnum* StaticEnum<EOWLIncludeExclude>()
	{
		return EOWLIncludeExclude_StaticEnum();
	}
	struct Z_Construct_UEnum_OWLComposure_EOWLIncludeExclude_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OWLComposure_EOWLIncludeExclude_Statics::Enumerators[] = {
		{ "EOWLIncludeExclude::EICE_Exclude", (int64)EOWLIncludeExclude::EICE_Exclude },
		{ "EOWLIncludeExclude::EICE_Include", (int64)EOWLIncludeExclude::EICE_Include },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OWLComposure_EOWLIncludeExclude_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "EICE_Exclude.DisplayName", "Exclude" },
		{ "EICE_Exclude.Name", "EOWLIncludeExclude::EICE_Exclude" },
		{ "EICE_Include.DisplayName", "Include" },
		{ "EICE_Include.Name", "EOWLIncludeExclude::EICE_Include" },
		{ "ModuleRelativePath", "Public/OWLCGElement.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OWLComposure_EOWLIncludeExclude_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OWLComposure,
		nullptr,
		"EOWLIncludeExclude",
		"EOWLIncludeExclude",
		Z_Construct_UEnum_OWLComposure_EOWLIncludeExclude_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OWLComposure_EOWLIncludeExclude_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_OWLComposure_EOWLIncludeExclude_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_OWLComposure_EOWLIncludeExclude_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_OWLComposure_EOWLIncludeExclude()
	{
		if (!Z_Registration_Info_UEnum_EOWLIncludeExclude.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOWLIncludeExclude.InnerSingleton, Z_Construct_UEnum_OWLComposure_EOWLIncludeExclude_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EOWLIncludeExclude.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OWLActorLayer;
class UScriptStruct* FOWLActorLayer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OWLActorLayer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OWLActorLayer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOWLActorLayer, (UObject*)Z_Construct_UPackage__Script_OWLComposure(), TEXT("OWLActorLayer"));
	}
	return Z_Registration_Info_UScriptStruct_OWLActorLayer.OuterSingleton;
}
template<> OWLCOMPOSURE_API UScriptStruct* StaticStruct<FOWLActorLayer>()
{
	return FOWLActorLayer::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOWLActorLayer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorSet_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActorSet;
		static const UECodeGen_Private::FBytePropertyParams NewProp_GroupType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroupType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_GroupType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOWLActorLayer_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OWLCGElement.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOWLActorLayer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOWLActorLayer>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOWLActorLayer_Statics::NewProp_ActorSet_MetaData[] = {
		{ "Category", "Composure" },
		{ "ModuleRelativePath", "Public/OWLCGElement.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOWLActorLayer_Statics::NewProp_ActorSet = { "ActorSet", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOWLActorLayer, ActorSet), Z_Construct_UScriptStruct_FActorLayer, METADATA_PARAMS(Z_Construct_UScriptStruct_FOWLActorLayer_Statics::NewProp_ActorSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLActorLayer_Statics::NewProp_ActorSet_MetaData)) }; // 4104610653
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FOWLActorLayer_Statics::NewProp_GroupType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOWLActorLayer_Statics::NewProp_GroupType_MetaData[] = {
		{ "Category", "Composure" },
		{ "ModuleRelativePath", "Public/OWLCGElement.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FOWLActorLayer_Statics::NewProp_GroupType = { "GroupType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOWLActorLayer, GroupType), Z_Construct_UEnum_OWLComposure_EOWLIncludeExclude, METADATA_PARAMS(Z_Construct_UScriptStruct_FOWLActorLayer_Statics::NewProp_GroupType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLActorLayer_Statics::NewProp_GroupType_MetaData)) }; // 3396268873
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOWLActorLayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLActorLayer_Statics::NewProp_ActorSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLActorLayer_Statics::NewProp_GroupType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLActorLayer_Statics::NewProp_GroupType,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOWLActorLayer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OWLComposure,
		nullptr,
		&NewStructOps,
		"OWLActorLayer",
		sizeof(FOWLActorLayer),
		alignof(FOWLActorLayer),
		Z_Construct_UScriptStruct_FOWLActorLayer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLActorLayer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOWLActorLayer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLActorLayer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOWLActorLayer()
	{
		if (!Z_Registration_Info_UScriptStruct_OWLActorLayer.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OWLActorLayer.InnerSingleton, Z_Construct_UScriptStruct_FOWLActorLayer_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OWLActorLayer.InnerSingleton;
	}
	DEFINE_FUNCTION(AOWLCGElement::execUpdateDistortion)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateDistortion();
		P_NATIVE_END;
	}
	void AOWLCGElement::StaticRegisterNativesAOWLCGElement()
	{
		UClass* Class = AOWLCGElement::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UpdateDistortion", &AOWLCGElement::execUpdateDistortion },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AOWLCGElement_UpdateDistortion_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWLCGElement_UpdateDistortion_Statics::Function_MetaDataParams[] = {
		{ "Category", "Composure|LensDistortion" },
		{ "Comment", "/** Update the state of the Lens Distortion Data Handler, and updates or removes the Distortion MID from the SceneCaptureComponent's post process materials, depending on whether distortion should be applied*/" },
		{ "ModuleRelativePath", "Public/OWLCGElement.h" },
		{ "ToolTip", "Update the state of the Lens Distortion Data Handler, and updates or removes the Distortion MID from the SceneCaptureComponent's post process materials, depending on whether distortion should be applied" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWLCGElement_UpdateDistortion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWLCGElement, nullptr, "UpdateDistortion", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWLCGElement_UpdateDistortion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLCGElement_UpdateDistortion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWLCGElement_UpdateDistortion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWLCGElement_UpdateDistortion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AOWLCGElement);
	UClass* Z_Construct_UClass_AOWLCGElement_NoRegister()
	{
		return AOWLCGElement::StaticClass();
	}
	struct Z_Construct_UClass_AOWLCGElement_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CaptureComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CaptureComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CapturePassName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_CapturePassName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CaptureActors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CaptureActors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CaptureActors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bApplyDistortion_MetaData[];
#endif
		static void NewProp_bApplyDistortion_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyDistortion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LensComponentPicker_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LensComponentPicker;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverscanFactor_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OverscanFactor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OriginalFocalLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OriginalFocalLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastDistortionMID_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LastDistortionMID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NoCameraTexture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NoCameraTexture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasCheckedParents_MetaData[];
#endif
		static void NewProp_bHasCheckedParents_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasCheckedParents;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AOWLCGElement_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AOWLBaseComp,
		(UObject* (*)())Z_Construct_UPackage__Script_OWLComposure,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AOWLCGElement_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AOWLCGElement_UpdateDistortion, "UpdateDistortion" }, // 1228589745
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWLCGElement_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "OWL Composure" },
		{ "IncludePath", "OWLCGElement.h" },
		{ "ModuleRelativePath", "Public/OWLCGElement.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWLCGElement_Statics::NewProp_CaptureComponent_MetaData[] = {
		{ "Category", "OffWorldLive" },
		{ "Comment", "/** Component used to generate image data for this CG Layer */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/OWLCGElement.h" },
		{ "ToolTip", "Component used to generate image data for this CG Layer" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOWLCGElement_Statics::NewProp_CaptureComponent = { "CaptureComponent", nullptr, (EPropertyFlags)0x00100000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AOWLCGElement, CaptureComponent), Z_Construct_UClass_UOWLCGCaptureComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOWLCGElement_Statics::NewProp_CaptureComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOWLCGElement_Statics::NewProp_CaptureComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWLCGElement_Statics::NewProp_CapturePassName_MetaData[] = {
		{ "Category", "Composure|Input" },
		{ "DisplayName", "Capture Pass Name" },
		{ "ModuleRelativePath", "Public/OWLCGElement.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AOWLCGElement_Statics::NewProp_CapturePassName = { "CapturePassName", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AOWLCGElement, CapturePassName), METADATA_PARAMS(Z_Construct_UClass_AOWLCGElement_Statics::NewProp_CapturePassName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOWLCGElement_Statics::NewProp_CapturePassName_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOWLCGElement_Statics::NewProp_CaptureActors_Inner = { "CaptureActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FOWLActorLayer, METADATA_PARAMS(nullptr, 0) }; // 3165121034
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWLCGElement_Statics::NewProp_CaptureActors_MetaData[] = {
		{ "Category", "Composure|Input" },
		{ "ModuleRelativePath", "Public/OWLCGElement.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AOWLCGElement_Statics::NewProp_CaptureActors = { "CaptureActors", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AOWLCGElement, CaptureActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AOWLCGElement_Statics::NewProp_CaptureActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOWLCGElement_Statics::NewProp_CaptureActors_MetaData)) }; // 3165121034
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWLCGElement_Statics::NewProp_bApplyDistortion_MetaData[] = {
		{ "Category", "Composure|LensDistortion" },
		{ "Comment", "/** Whether to apply distortion as a post-process effect on this CG Layer */" },
		{ "ModuleRelativePath", "Public/OWLCGElement.h" },
		{ "ToolTip", "Whether to apply distortion as a post-process effect on this CG Layer" },
	};
#endif
	void Z_Construct_UClass_AOWLCGElement_Statics::NewProp_bApplyDistortion_SetBit(void* Obj)
	{
		((AOWLCGElement*)Obj)->bApplyDistortion = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AOWLCGElement_Statics::NewProp_bApplyDistortion = { "bApplyDistortion", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AOWLCGElement), &Z_Construct_UClass_AOWLCGElement_Statics::NewProp_bApplyDistortion_SetBit, METADATA_PARAMS(Z_Construct_UClass_AOWLCGElement_Statics::NewProp_bApplyDistortion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOWLCGElement_Statics::NewProp_bApplyDistortion_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWLCGElement_Statics::NewProp_LensComponentPicker_MetaData[] = {
		{ "AllowAnyActor", "" },
		{ "AllowedClasses", "/Script/CameraCalibrationCore.LensComponent" },
		{ "Category", "Composure|LensDistortion" },
		{ "Comment", "/** Structure used to query the camera calibration subsystem for a lens distortion model handler */" },
		{ "DisplayName", "Lens Component" },
		{ "ModuleRelativePath", "Public/OWLCGElement.h" },
		{ "ToolTip", "Structure used to query the camera calibration subsystem for a lens distortion model handler" },
		{ "UseComponentPicker", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOWLCGElement_Statics::NewProp_LensComponentPicker = { "LensComponentPicker", nullptr, (EPropertyFlags)0x0020080000000801, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AOWLCGElement, LensComponentPicker), Z_Construct_UScriptStruct_FComponentReference, METADATA_PARAMS(Z_Construct_UClass_AOWLCGElement_Statics::NewProp_LensComponentPicker_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOWLCGElement_Statics::NewProp_LensComponentPicker_MetaData)) }; // 1758507179
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWLCGElement_Statics::NewProp_OverscanFactor_MetaData[] = {
		{ "Category", "Composure|LensDistortion" },
		{ "Comment", "/** Value used to augment the FOV of the scene capture to produce a CG image with enough data to distort */" },
		{ "ModuleRelativePath", "Public/OWLCGElement.h" },
		{ "ToolTip", "Value used to augment the FOV of the scene capture to produce a CG image with enough data to distort" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOWLCGElement_Statics::NewProp_OverscanFactor = { "OverscanFactor", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AOWLCGElement, OverscanFactor), METADATA_PARAMS(Z_Construct_UClass_AOWLCGElement_Statics::NewProp_OverscanFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOWLCGElement_Statics::NewProp_OverscanFactor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWLCGElement_Statics::NewProp_OriginalFocalLength_MetaData[] = {
		{ "Category", "Composure|LensDistortion" },
		{ "Comment", "/** Focal length of the target camera before any overscan has been applied */" },
		{ "ModuleRelativePath", "Public/OWLCGElement.h" },
		{ "ToolTip", "Focal length of the target camera before any overscan has been applied" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOWLCGElement_Statics::NewProp_OriginalFocalLength = { "OriginalFocalLength", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AOWLCGElement, OriginalFocalLength), METADATA_PARAMS(Z_Construct_UClass_AOWLCGElement_Statics::NewProp_OriginalFocalLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOWLCGElement_Statics::NewProp_OriginalFocalLength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWLCGElement_Statics::NewProp_LastDistortionMID_MetaData[] = {
		{ "Comment", "/** Cached distortion MID produced by the Lens Distortion Handler, used to clean up the post-process materials in the case that the the MID changes */" },
		{ "ModuleRelativePath", "Public/OWLCGElement.h" },
		{ "ToolTip", "Cached distortion MID produced by the Lens Distortion Handler, used to clean up the post-process materials in the case that the the MID changes" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AOWLCGElement_Statics::NewProp_LastDistortionMID = { "LastDistortionMID", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AOWLCGElement, LastDistortionMID), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOWLCGElement_Statics::NewProp_LastDistortionMID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOWLCGElement_Statics::NewProp_LastDistortionMID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWLCGElement_Statics::NewProp_NoCameraTexture_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWLCGElement.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOWLCGElement_Statics::NewProp_NoCameraTexture = { "NoCameraTexture", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AOWLCGElement, NoCameraTexture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOWLCGElement_Statics::NewProp_NoCameraTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOWLCGElement_Statics::NewProp_NoCameraTexture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWLCGElement_Statics::NewProp_bHasCheckedParents_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWLCGElement.h" },
	};
#endif
	void Z_Construct_UClass_AOWLCGElement_Statics::NewProp_bHasCheckedParents_SetBit(void* Obj)
	{
		((AOWLCGElement*)Obj)->bHasCheckedParents = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AOWLCGElement_Statics::NewProp_bHasCheckedParents = { "bHasCheckedParents", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AOWLCGElement), &Z_Construct_UClass_AOWLCGElement_Statics::NewProp_bHasCheckedParents_SetBit, METADATA_PARAMS(Z_Construct_UClass_AOWLCGElement_Statics::NewProp_bHasCheckedParents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOWLCGElement_Statics::NewProp_bHasCheckedParents_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AOWLCGElement_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWLCGElement_Statics::NewProp_CaptureComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWLCGElement_Statics::NewProp_CapturePassName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWLCGElement_Statics::NewProp_CaptureActors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWLCGElement_Statics::NewProp_CaptureActors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWLCGElement_Statics::NewProp_bApplyDistortion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWLCGElement_Statics::NewProp_LensComponentPicker,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWLCGElement_Statics::NewProp_OverscanFactor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWLCGElement_Statics::NewProp_OriginalFocalLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWLCGElement_Statics::NewProp_LastDistortionMID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWLCGElement_Statics::NewProp_NoCameraTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWLCGElement_Statics::NewProp_bHasCheckedParents,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AOWLCGElement_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UCompositingInputInterface_NoRegister, (int32)VTABLE_OFFSET(AOWLCGElement, ICompositingInputInterface), false },  // 502734225
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AOWLCGElement_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOWLCGElement>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AOWLCGElement_Statics::ClassParams = {
		&AOWLCGElement::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AOWLCGElement_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AOWLCGElement_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AOWLCGElement_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AOWLCGElement_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AOWLCGElement()
	{
		if (!Z_Registration_Info_UClass_AOWLCGElement.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AOWLCGElement.OuterSingleton, Z_Construct_UClass_AOWLCGElement_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AOWLCGElement.OuterSingleton;
	}
	template<> OWLCOMPOSURE_API UClass* StaticClass<AOWLCGElement>()
	{
		return AOWLCGElement::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AOWLCGElement);
	AOWLCGElement::~AOWLCGElement() {}
	struct Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLComposure_Public_OWLCGElement_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLComposure_Public_OWLCGElement_h_Statics::EnumInfo[] = {
		{ EOWLIncludeExclude_StaticEnum, TEXT("EOWLIncludeExclude"), &Z_Registration_Info_UEnum_EOWLIncludeExclude, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3396268873U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLComposure_Public_OWLCGElement_h_Statics::ScriptStructInfo[] = {
		{ FOWLActorLayer::StaticStruct, Z_Construct_UScriptStruct_FOWLActorLayer_Statics::NewStructOps, TEXT("OWLActorLayer"), &Z_Registration_Info_UScriptStruct_OWLActorLayer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOWLActorLayer), 3165121034U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLComposure_Public_OWLCGElement_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AOWLCGElement, AOWLCGElement::StaticClass, TEXT("AOWLCGElement"), &Z_Registration_Info_UClass_AOWLCGElement, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AOWLCGElement), 2476533887U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLComposure_Public_OWLCGElement_h_934570467(TEXT("/Script/OWLComposure"),
		Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLComposure_Public_OWLCGElement_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLComposure_Public_OWLCGElement_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLComposure_Public_OWLCGElement_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLComposure_Public_OWLCGElement_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLComposure_Public_OWLCGElement_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLComposure_Public_OWLCGElement_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
