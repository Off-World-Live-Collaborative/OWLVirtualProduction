// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OWLNDI/Public/OWLNDIReceiverManager.h"
#include "OWLNDI/Public/OWLNDIFinder.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOWLNDIReceiverManager() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	OWLNDI_API UClass* Z_Construct_UClass_AOWLNDIReceiverManager();
	OWLNDI_API UClass* Z_Construct_UClass_AOWLNDIReceiverManager_NoRegister();
	OWLNDI_API UClass* Z_Construct_UClass_UOWLNDISoundWave_NoRegister();
	OWLNDI_API UScriptStruct* Z_Construct_UScriptStruct_FNDISource();
	OWLNDI_API UScriptStruct* Z_Construct_UScriptStruct_FOWLNDIReceiverInterface();
	UPackage* Z_Construct_UPackage__Script_OWLNDI();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OWLNDIReceiverInterface;
class UScriptStruct* FOWLNDIReceiverInterface::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OWLNDIReceiverInterface.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OWLNDIReceiverInterface.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOWLNDIReceiverInterface, (UObject*)Z_Construct_UPackage__Script_OWLNDI(), TEXT("OWLNDIReceiverInterface"));
	}
	return Z_Registration_Info_UScriptStruct_OWLNDIReceiverInterface.OuterSingleton;
}
template<> OWLNDI_API UScriptStruct* StaticStruct<FOWLNDIReceiverInterface>()
{
	return FOWLNDIReceiverInterface::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOWLNDIReceiverInterface_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Active_MetaData[];
#endif
		static void NewProp_Active_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Active;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UseFirstAvailableSender_MetaData[];
#endif
		static void NewProp_UseFirstAvailableSender_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UseFirstAvailableSender;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenderTarget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RenderTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NDISoundWave_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NDISoundWave;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUnderExternalControl_MetaData[];
#endif
		static void NewProp_bUnderExternalControl_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUnderExternalControl;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_World_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOWLNDIReceiverInterface_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OWLNDIReceiverManager.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOWLNDIReceiverInterface_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOWLNDIReceiverInterface>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOWLNDIReceiverInterface_Statics::NewProp_Active_MetaData[] = {
		{ "Category", "OWLNDIReceiver" },
		{ "EditCondition", "!bUnderExternalControl" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/OWLNDIReceiverManager.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FOWLNDIReceiverInterface_Statics::NewProp_Active_SetBit(void* Obj)
	{
		((FOWLNDIReceiverInterface*)Obj)->Active = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWLNDIReceiverInterface_Statics::NewProp_Active = { "Active", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FOWLNDIReceiverInterface), &Z_Construct_UScriptStruct_FOWLNDIReceiverInterface_Statics::NewProp_Active_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FOWLNDIReceiverInterface_Statics::NewProp_Active_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLNDIReceiverInterface_Statics::NewProp_Active_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOWLNDIReceiverInterface_Statics::NewProp_UseFirstAvailableSender_MetaData[] = {
		{ "Category", "OWLNDIReceiver" },
		{ "ModuleRelativePath", "Public/OWLNDIReceiverManager.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FOWLNDIReceiverInterface_Statics::NewProp_UseFirstAvailableSender_SetBit(void* Obj)
	{
		((FOWLNDIReceiverInterface*)Obj)->UseFirstAvailableSender = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWLNDIReceiverInterface_Statics::NewProp_UseFirstAvailableSender = { "UseFirstAvailableSender", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FOWLNDIReceiverInterface), &Z_Construct_UScriptStruct_FOWLNDIReceiverInterface_Statics::NewProp_UseFirstAvailableSender_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FOWLNDIReceiverInterface_Statics::NewProp_UseFirstAvailableSender_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLNDIReceiverInterface_Statics::NewProp_UseFirstAvailableSender_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOWLNDIReceiverInterface_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "OWLNDIReceiver" },
		{ "ModuleRelativePath", "Public/OWLNDIReceiverManager.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOWLNDIReceiverInterface_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOWLNDIReceiverInterface, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FOWLNDIReceiverInterface_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLNDIReceiverInterface_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOWLNDIReceiverInterface_Statics::NewProp_RenderTarget_MetaData[] = {
		{ "Category", "OWLNDIReceiver" },
		{ "EditCondition", "!bUnderExternalControl" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/OWLNDIReceiverManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FOWLNDIReceiverInterface_Statics::NewProp_RenderTarget = { "RenderTarget", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOWLNDIReceiverInterface, RenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FOWLNDIReceiverInterface_Statics::NewProp_RenderTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLNDIReceiverInterface_Statics::NewProp_RenderTarget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOWLNDIReceiverInterface_Statics::NewProp_NDISoundWave_MetaData[] = {
		{ "Category", "OWLNDIReceiver" },
		{ "ModuleRelativePath", "Public/OWLNDIReceiverManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FOWLNDIReceiverInterface_Statics::NewProp_NDISoundWave = { "NDISoundWave", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOWLNDIReceiverInterface, NDISoundWave), Z_Construct_UClass_UOWLNDISoundWave_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FOWLNDIReceiverInterface_Statics::NewProp_NDISoundWave_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLNDIReceiverInterface_Statics::NewProp_NDISoundWave_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOWLNDIReceiverInterface_Statics::NewProp_bUnderExternalControl_MetaData[] = {
		{ "Category", "Internal" },
		{ "ModuleRelativePath", "Public/OWLNDIReceiverManager.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FOWLNDIReceiverInterface_Statics::NewProp_bUnderExternalControl_SetBit(void* Obj)
	{
		((FOWLNDIReceiverInterface*)Obj)->bUnderExternalControl = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWLNDIReceiverInterface_Statics::NewProp_bUnderExternalControl = { "bUnderExternalControl", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FOWLNDIReceiverInterface), &Z_Construct_UScriptStruct_FOWLNDIReceiverInterface_Statics::NewProp_bUnderExternalControl_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FOWLNDIReceiverInterface_Statics::NewProp_bUnderExternalControl_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLNDIReceiverInterface_Statics::NewProp_bUnderExternalControl_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOWLNDIReceiverInterface_Statics::NewProp_World_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWLNDIReceiverManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FOWLNDIReceiverInterface_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOWLNDIReceiverInterface, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FOWLNDIReceiverInterface_Statics::NewProp_World_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLNDIReceiverInterface_Statics::NewProp_World_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOWLNDIReceiverInterface_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLNDIReceiverInterface_Statics::NewProp_Active,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLNDIReceiverInterface_Statics::NewProp_UseFirstAvailableSender,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLNDIReceiverInterface_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLNDIReceiverInterface_Statics::NewProp_RenderTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLNDIReceiverInterface_Statics::NewProp_NDISoundWave,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLNDIReceiverInterface_Statics::NewProp_bUnderExternalControl,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLNDIReceiverInterface_Statics::NewProp_World,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOWLNDIReceiverInterface_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OWLNDI,
		nullptr,
		&NewStructOps,
		"OWLNDIReceiverInterface",
		sizeof(FOWLNDIReceiverInterface),
		alignof(FOWLNDIReceiverInterface),
		Z_Construct_UScriptStruct_FOWLNDIReceiverInterface_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLNDIReceiverInterface_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOWLNDIReceiverInterface_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLNDIReceiverInterface_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOWLNDIReceiverInterface()
	{
		if (!Z_Registration_Info_UScriptStruct_OWLNDIReceiverInterface.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OWLNDIReceiverInterface.InnerSingleton, Z_Construct_UScriptStruct_FOWLNDIReceiverInterface_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OWLNDIReceiverInterface.InnerSingleton;
	}
	DEFINE_FUNCTION(AOWLNDIReceiverManager::execGetAvailableNDISources)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FNDISource>*)Z_Param__Result=P_THIS->GetAvailableNDISources();
		P_NATIVE_END;
	}
	void AOWLNDIReceiverManager::StaticRegisterNativesAOWLNDIReceiverManager()
	{
		UClass* Class = AOWLNDIReceiverManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAvailableNDISources", &AOWLNDIReceiverManager::execGetAvailableNDISources },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AOWLNDIReceiverManager_GetAvailableNDISources_Statics
	{
		struct OWLNDIReceiverManager_eventGetAvailableNDISources_Parms
		{
			TArray<FNDISource> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AOWLNDIReceiverManager_GetAvailableNDISources_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNDISource, METADATA_PARAMS(nullptr, 0) }; // 3763600194
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AOWLNDIReceiverManager_GetAvailableNDISources_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OWLNDIReceiverManager_eventGetAvailableNDISources_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3763600194
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWLNDIReceiverManager_GetAvailableNDISources_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWLNDIReceiverManager_GetAvailableNDISources_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWLNDIReceiverManager_GetAvailableNDISources_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWLNDIReceiverManager_GetAvailableNDISources_Statics::Function_MetaDataParams[] = {
		{ "Category", "Off World Live NDI Receiver" },
		{ "Comment", "/** Returns a list of NDI sources that are available at this moment in time. */" },
		{ "ModuleRelativePath", "Public/OWLNDIReceiverManager.h" },
		{ "ToolTip", "Returns a list of NDI sources that are available at this moment in time." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWLNDIReceiverManager_GetAvailableNDISources_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWLNDIReceiverManager, nullptr, "GetAvailableNDISources", nullptr, nullptr, sizeof(Z_Construct_UFunction_AOWLNDIReceiverManager_GetAvailableNDISources_Statics::OWLNDIReceiverManager_eventGetAvailableNDISources_Parms), Z_Construct_UFunction_AOWLNDIReceiverManager_GetAvailableNDISources_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLNDIReceiverManager_GetAvailableNDISources_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWLNDIReceiverManager_GetAvailableNDISources_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLNDIReceiverManager_GetAvailableNDISources_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWLNDIReceiverManager_GetAvailableNDISources()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWLNDIReceiverManager_GetAvailableNDISources_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AOWLNDIReceiverManager);
	UClass* Z_Construct_UClass_AOWLNDIReceiverManager_NoRegister()
	{
		return AOWLNDIReceiverManager::StaticClass();
	}
	struct Z_Construct_UClass_AOWLNDIReceiverManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NDIReceivers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NDIReceivers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_NDIReceivers;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AOWLNDIReceiverManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_OWLNDI,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AOWLNDIReceiverManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AOWLNDIReceiverManager_GetAvailableNDISources, "GetAvailableNDISources" }, // 2034369424
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWLNDIReceiverManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "OWLNDIReceiverManager.h" },
		{ "ModuleRelativePath", "Public/OWLNDIReceiverManager.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOWLNDIReceiverManager_Statics::NewProp_NDIReceivers_Inner = { "NDIReceivers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FOWLNDIReceiverInterface, METADATA_PARAMS(nullptr, 0) }; // 3444417469
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWLNDIReceiverManager_Statics::NewProp_NDIReceivers_MetaData[] = {
		{ "Category", "Off World Live NDI Receiver Settings" },
		{ "ModuleRelativePath", "Public/OWLNDIReceiverManager.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AOWLNDIReceiverManager_Statics::NewProp_NDIReceivers = { "NDIReceivers", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AOWLNDIReceiverManager, NDIReceivers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AOWLNDIReceiverManager_Statics::NewProp_NDIReceivers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOWLNDIReceiverManager_Statics::NewProp_NDIReceivers_MetaData)) }; // 3444417469
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AOWLNDIReceiverManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWLNDIReceiverManager_Statics::NewProp_NDIReceivers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWLNDIReceiverManager_Statics::NewProp_NDIReceivers,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AOWLNDIReceiverManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOWLNDIReceiverManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AOWLNDIReceiverManager_Statics::ClassParams = {
		&AOWLNDIReceiverManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AOWLNDIReceiverManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AOWLNDIReceiverManager_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AOWLNDIReceiverManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AOWLNDIReceiverManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AOWLNDIReceiverManager()
	{
		if (!Z_Registration_Info_UClass_AOWLNDIReceiverManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AOWLNDIReceiverManager.OuterSingleton, Z_Construct_UClass_AOWLNDIReceiverManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AOWLNDIReceiverManager.OuterSingleton;
	}
	template<> OWLNDI_API UClass* StaticClass<AOWLNDIReceiverManager>()
	{
		return AOWLNDIReceiverManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AOWLNDIReceiverManager);
	AOWLNDIReceiverManager::~AOWLNDIReceiverManager() {}
	struct Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLNDI_Public_OWLNDIReceiverManager_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLNDI_Public_OWLNDIReceiverManager_h_Statics::ScriptStructInfo[] = {
		{ FOWLNDIReceiverInterface::StaticStruct, Z_Construct_UScriptStruct_FOWLNDIReceiverInterface_Statics::NewStructOps, TEXT("OWLNDIReceiverInterface"), &Z_Registration_Info_UScriptStruct_OWLNDIReceiverInterface, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOWLNDIReceiverInterface), 3444417469U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLNDI_Public_OWLNDIReceiverManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AOWLNDIReceiverManager, AOWLNDIReceiverManager::StaticClass, TEXT("AOWLNDIReceiverManager"), &Z_Registration_Info_UClass_AOWLNDIReceiverManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AOWLNDIReceiverManager), 3378806399U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLNDI_Public_OWLNDIReceiverManager_h_3461465699(TEXT("/Script/OWLNDI"),
		Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLNDI_Public_OWLNDIReceiverManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLNDI_Public_OWLNDIReceiverManager_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLNDI_Public_OWLNDIReceiverManager_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLNDI_Public_OWLNDIReceiverManager_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
