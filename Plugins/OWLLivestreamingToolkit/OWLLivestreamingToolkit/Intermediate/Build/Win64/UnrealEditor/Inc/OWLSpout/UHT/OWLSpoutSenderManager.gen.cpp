// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OWLSpout/Public/OWLSpoutSenderManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOWLSpoutSenderManager() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	OWLSPOUT_API UClass* Z_Construct_UClass_AOWLSpoutSenderManager();
	OWLSPOUT_API UClass* Z_Construct_UClass_AOWLSpoutSenderManager_NoRegister();
	OWLSPOUT_API UScriptStruct* Z_Construct_UScriptStruct_FOWLSpoutSenderInterface();
	UPackage* Z_Construct_UPackage__Script_OWLSpout();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OWLSpoutSenderInterface;
class UScriptStruct* FOWLSpoutSenderInterface::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OWLSpoutSenderInterface.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OWLSpoutSenderInterface.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOWLSpoutSenderInterface, (UObject*)Z_Construct_UPackage__Script_OWLSpout(), TEXT("OWLSpoutSenderInterface"));
	}
	return Z_Registration_Info_UScriptStruct_OWLSpoutSenderInterface.OuterSingleton;
}
template<> OWLSPOUT_API UScriptStruct* StaticStruct<FOWLSpoutSenderInterface>()
{
	return FOWLSpoutSenderInterface::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOWLSpoutSenderInterface_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StandaloneName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_StandaloneName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFixGamma_MetaData[];
#endif
		static void NewProp_bFixGamma_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFixGamma;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceRenderTarget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceRenderTarget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOWLSpoutSenderInterface_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OWLSpoutSenderManager.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOWLSpoutSenderInterface_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOWLSpoutSenderInterface>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOWLSpoutSenderInterface_Statics::NewProp_Active_MetaData[] = {
		{ "Category", "OWLSpoutSender" },
		{ "ModuleRelativePath", "Public/OWLSpoutSenderManager.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FOWLSpoutSenderInterface_Statics::NewProp_Active_SetBit(void* Obj)
	{
		((FOWLSpoutSenderInterface*)Obj)->Active = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWLSpoutSenderInterface_Statics::NewProp_Active = { "Active", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FOWLSpoutSenderInterface), &Z_Construct_UScriptStruct_FOWLSpoutSenderInterface_Statics::NewProp_Active_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FOWLSpoutSenderInterface_Statics::NewProp_Active_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLSpoutSenderInterface_Statics::NewProp_Active_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOWLSpoutSenderInterface_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "OWLSpoutSender" },
		{ "Comment", "/* Spout sender name that is used in editor targets */" },
		{ "ModuleRelativePath", "Public/OWLSpoutSenderManager.h" },
		{ "ToolTip", "Spout sender name that is used in editor targets" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOWLSpoutSenderInterface_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOWLSpoutSenderInterface, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FOWLSpoutSenderInterface_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLSpoutSenderInterface_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOWLSpoutSenderInterface_Statics::NewProp_StandaloneName_MetaData[] = {
		{ "Category", "OWLSpoutSender" },
		{ "Comment", "/* Spout sender name that is used in game (standalone/packaged) targets  */" },
		{ "ModuleRelativePath", "Public/OWLSpoutSenderManager.h" },
		{ "ToolTip", "Spout sender name that is used in game (standalone/packaged) targets" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOWLSpoutSenderInterface_Statics::NewProp_StandaloneName = { "StandaloneName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOWLSpoutSenderInterface, StandaloneName), METADATA_PARAMS(Z_Construct_UScriptStruct_FOWLSpoutSenderInterface_Statics::NewProp_StandaloneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLSpoutSenderInterface_Statics::NewProp_StandaloneName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOWLSpoutSenderInterface_Statics::NewProp_bFixGamma_MetaData[] = {
		{ "Category", "OWLSpoutSender" },
		{ "Comment", "/* Align spout output with colours as perceived in Unreal viewport -- untick this if you are sending raw data */" },
		{ "ModuleRelativePath", "Public/OWLSpoutSenderManager.h" },
		{ "ToolTip", "Align spout output with colours as perceived in Unreal viewport -- untick this if you are sending raw data" },
	};
#endif
	void Z_Construct_UScriptStruct_FOWLSpoutSenderInterface_Statics::NewProp_bFixGamma_SetBit(void* Obj)
	{
		((FOWLSpoutSenderInterface*)Obj)->bFixGamma = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWLSpoutSenderInterface_Statics::NewProp_bFixGamma = { "bFixGamma", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FOWLSpoutSenderInterface), &Z_Construct_UScriptStruct_FOWLSpoutSenderInterface_Statics::NewProp_bFixGamma_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FOWLSpoutSenderInterface_Statics::NewProp_bFixGamma_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLSpoutSenderInterface_Statics::NewProp_bFixGamma_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOWLSpoutSenderInterface_Statics::NewProp_SourceRenderTarget_MetaData[] = {
		{ "Category", "OWLSpoutSender" },
		{ "ModuleRelativePath", "Public/OWLSpoutSenderManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FOWLSpoutSenderInterface_Statics::NewProp_SourceRenderTarget = { "SourceRenderTarget", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOWLSpoutSenderInterface, SourceRenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FOWLSpoutSenderInterface_Statics::NewProp_SourceRenderTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLSpoutSenderInterface_Statics::NewProp_SourceRenderTarget_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOWLSpoutSenderInterface_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLSpoutSenderInterface_Statics::NewProp_Active,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLSpoutSenderInterface_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLSpoutSenderInterface_Statics::NewProp_StandaloneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLSpoutSenderInterface_Statics::NewProp_bFixGamma,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLSpoutSenderInterface_Statics::NewProp_SourceRenderTarget,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOWLSpoutSenderInterface_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OWLSpout,
		nullptr,
		&NewStructOps,
		"OWLSpoutSenderInterface",
		sizeof(FOWLSpoutSenderInterface),
		alignof(FOWLSpoutSenderInterface),
		Z_Construct_UScriptStruct_FOWLSpoutSenderInterface_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLSpoutSenderInterface_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOWLSpoutSenderInterface_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLSpoutSenderInterface_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOWLSpoutSenderInterface()
	{
		if (!Z_Registration_Info_UScriptStruct_OWLSpoutSenderInterface.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OWLSpoutSenderInterface.InnerSingleton, Z_Construct_UScriptStruct_FOWLSpoutSenderInterface_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OWLSpoutSenderInterface.InnerSingleton;
	}
	DEFINE_FUNCTION(AOWLSpoutSenderManager::execDeactivateSender)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DeactivateSender(Z_Param_Name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AOWLSpoutSenderManager::execActivateSender)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ActivateSender(Z_Param_Name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AOWLSpoutSenderManager::execRemoveSenderByName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveSenderByName(Z_Param_Name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AOWLSpoutSenderManager::execAddSender)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_TextureTarget);
		P_GET_PROPERTY(FStrProperty,Z_Param_StandaloneName);
		P_GET_UBOOL(Z_Param_bActive);
		P_GET_UBOOL(Z_Param_bFixGamma);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FOWLSpoutSenderInterface*)Z_Param__Result=P_THIS->AddSender(Z_Param_Name,Z_Param_TextureTarget,Z_Param_StandaloneName,Z_Param_bActive,Z_Param_bFixGamma);
		P_NATIVE_END;
	}
	void AOWLSpoutSenderManager::StaticRegisterNativesAOWLSpoutSenderManager()
	{
		UClass* Class = AOWLSpoutSenderManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActivateSender", &AOWLSpoutSenderManager::execActivateSender },
			{ "AddSender", &AOWLSpoutSenderManager::execAddSender },
			{ "DeactivateSender", &AOWLSpoutSenderManager::execDeactivateSender },
			{ "RemoveSenderByName", &AOWLSpoutSenderManager::execRemoveSenderByName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AOWLSpoutSenderManager_ActivateSender_Statics
	{
		struct OWLSpoutSenderManager_eventActivateSender_Parms
		{
			FString Name;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWLSpoutSenderManager_ActivateSender_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OWLSpoutSenderManager_eventActivateSender_Parms, Name), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AOWLSpoutSenderManager_ActivateSender_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OWLSpoutSenderManager_eventActivateSender_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AOWLSpoutSenderManager_ActivateSender_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OWLSpoutSenderManager_eventActivateSender_Parms), &Z_Construct_UFunction_AOWLSpoutSenderManager_ActivateSender_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWLSpoutSenderManager_ActivateSender_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWLSpoutSenderManager_ActivateSender_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWLSpoutSenderManager_ActivateSender_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWLSpoutSenderManager_ActivateSender_Statics::Function_MetaDataParams[] = {
		{ "Category", "OWL Spout Sender Manager" },
		{ "Comment", "/* Activates a sender by the spout sender name. Returns true if found. */" },
		{ "ModuleRelativePath", "Public/OWLSpoutSenderManager.h" },
		{ "ToolTip", "Activates a sender by the spout sender name. Returns true if found." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWLSpoutSenderManager_ActivateSender_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWLSpoutSenderManager, nullptr, "ActivateSender", nullptr, nullptr, sizeof(Z_Construct_UFunction_AOWLSpoutSenderManager_ActivateSender_Statics::OWLSpoutSenderManager_eventActivateSender_Parms), Z_Construct_UFunction_AOWLSpoutSenderManager_ActivateSender_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLSpoutSenderManager_ActivateSender_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWLSpoutSenderManager_ActivateSender_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLSpoutSenderManager_ActivateSender_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWLSpoutSenderManager_ActivateSender()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWLSpoutSenderManager_ActivateSender_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWLSpoutSenderManager_AddSender_Statics
	{
		struct OWLSpoutSenderManager_eventAddSender_Parms
		{
			FString Name;
			UTextureRenderTarget2D* TextureTarget;
			FString StandaloneName;
			bool bActive;
			bool bFixGamma;
			FOWLSpoutSenderInterface ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TextureTarget;
		static const UECodeGen_Private::FStrPropertyParams NewProp_StandaloneName;
		static void NewProp_bActive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bActive;
		static void NewProp_bFixGamma_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFixGamma;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWLSpoutSenderManager_AddSender_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OWLSpoutSenderManager_eventAddSender_Parms, Name), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AOWLSpoutSenderManager_AddSender_Statics::NewProp_TextureTarget = { "TextureTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OWLSpoutSenderManager_eventAddSender_Parms, TextureTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWLSpoutSenderManager_AddSender_Statics::NewProp_StandaloneName = { "StandaloneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OWLSpoutSenderManager_eventAddSender_Parms, StandaloneName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AOWLSpoutSenderManager_AddSender_Statics::NewProp_bActive_SetBit(void* Obj)
	{
		((OWLSpoutSenderManager_eventAddSender_Parms*)Obj)->bActive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AOWLSpoutSenderManager_AddSender_Statics::NewProp_bActive = { "bActive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OWLSpoutSenderManager_eventAddSender_Parms), &Z_Construct_UFunction_AOWLSpoutSenderManager_AddSender_Statics::NewProp_bActive_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AOWLSpoutSenderManager_AddSender_Statics::NewProp_bFixGamma_SetBit(void* Obj)
	{
		((OWLSpoutSenderManager_eventAddSender_Parms*)Obj)->bFixGamma = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AOWLSpoutSenderManager_AddSender_Statics::NewProp_bFixGamma = { "bFixGamma", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OWLSpoutSenderManager_eventAddSender_Parms), &Z_Construct_UFunction_AOWLSpoutSenderManager_AddSender_Statics::NewProp_bFixGamma_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AOWLSpoutSenderManager_AddSender_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OWLSpoutSenderManager_eventAddSender_Parms, ReturnValue), Z_Construct_UScriptStruct_FOWLSpoutSenderInterface, METADATA_PARAMS(nullptr, 0) }; // 144541715
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWLSpoutSenderManager_AddSender_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWLSpoutSenderManager_AddSender_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWLSpoutSenderManager_AddSender_Statics::NewProp_TextureTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWLSpoutSenderManager_AddSender_Statics::NewProp_StandaloneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWLSpoutSenderManager_AddSender_Statics::NewProp_bActive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWLSpoutSenderManager_AddSender_Statics::NewProp_bFixGamma,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWLSpoutSenderManager_AddSender_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWLSpoutSenderManager_AddSender_Statics::Function_MetaDataParams[] = {
		{ "Category", "OWL Spout Sender Manager" },
		{ "Comment", "/* Utility function to add a sender to the list - returns the struct created which has been added to the SpoutSenders array */" },
		{ "CPP_Default_bActive", "true" },
		{ "CPP_Default_bFixGamma", "true" },
		{ "CPP_Default_StandaloneName", "" },
		{ "ModuleRelativePath", "Public/OWLSpoutSenderManager.h" },
		{ "ToolTip", "Utility function to add a sender to the list - returns the struct created which has been added to the SpoutSenders array" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWLSpoutSenderManager_AddSender_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWLSpoutSenderManager, nullptr, "AddSender", nullptr, nullptr, sizeof(Z_Construct_UFunction_AOWLSpoutSenderManager_AddSender_Statics::OWLSpoutSenderManager_eventAddSender_Parms), Z_Construct_UFunction_AOWLSpoutSenderManager_AddSender_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLSpoutSenderManager_AddSender_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWLSpoutSenderManager_AddSender_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLSpoutSenderManager_AddSender_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWLSpoutSenderManager_AddSender()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWLSpoutSenderManager_AddSender_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWLSpoutSenderManager_DeactivateSender_Statics
	{
		struct OWLSpoutSenderManager_eventDeactivateSender_Parms
		{
			FString Name;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWLSpoutSenderManager_DeactivateSender_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OWLSpoutSenderManager_eventDeactivateSender_Parms, Name), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AOWLSpoutSenderManager_DeactivateSender_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OWLSpoutSenderManager_eventDeactivateSender_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AOWLSpoutSenderManager_DeactivateSender_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OWLSpoutSenderManager_eventDeactivateSender_Parms), &Z_Construct_UFunction_AOWLSpoutSenderManager_DeactivateSender_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWLSpoutSenderManager_DeactivateSender_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWLSpoutSenderManager_DeactivateSender_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWLSpoutSenderManager_DeactivateSender_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWLSpoutSenderManager_DeactivateSender_Statics::Function_MetaDataParams[] = {
		{ "Category", "OWL Spout Sender Manager" },
		{ "Comment", "/* Deactivates a sender by the spout sender name. Returns true if found. */" },
		{ "ModuleRelativePath", "Public/OWLSpoutSenderManager.h" },
		{ "ToolTip", "Deactivates a sender by the spout sender name. Returns true if found." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWLSpoutSenderManager_DeactivateSender_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWLSpoutSenderManager, nullptr, "DeactivateSender", nullptr, nullptr, sizeof(Z_Construct_UFunction_AOWLSpoutSenderManager_DeactivateSender_Statics::OWLSpoutSenderManager_eventDeactivateSender_Parms), Z_Construct_UFunction_AOWLSpoutSenderManager_DeactivateSender_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLSpoutSenderManager_DeactivateSender_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWLSpoutSenderManager_DeactivateSender_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLSpoutSenderManager_DeactivateSender_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWLSpoutSenderManager_DeactivateSender()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWLSpoutSenderManager_DeactivateSender_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWLSpoutSenderManager_RemoveSenderByName_Statics
	{
		struct OWLSpoutSenderManager_eventRemoveSenderByName_Parms
		{
			FString Name;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWLSpoutSenderManager_RemoveSenderByName_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OWLSpoutSenderManager_eventRemoveSenderByName_Parms, Name), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AOWLSpoutSenderManager_RemoveSenderByName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OWLSpoutSenderManager_eventRemoveSenderByName_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AOWLSpoutSenderManager_RemoveSenderByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OWLSpoutSenderManager_eventRemoveSenderByName_Parms), &Z_Construct_UFunction_AOWLSpoutSenderManager_RemoveSenderByName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWLSpoutSenderManager_RemoveSenderByName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWLSpoutSenderManager_RemoveSenderByName_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWLSpoutSenderManager_RemoveSenderByName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWLSpoutSenderManager_RemoveSenderByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "OWL Spout Sender Manager" },
		{ "Comment", "/* Utility function for removing a sender via blueprints with matching name. Returns true if matched */" },
		{ "ModuleRelativePath", "Public/OWLSpoutSenderManager.h" },
		{ "ToolTip", "Utility function for removing a sender via blueprints with matching name. Returns true if matched" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWLSpoutSenderManager_RemoveSenderByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWLSpoutSenderManager, nullptr, "RemoveSenderByName", nullptr, nullptr, sizeof(Z_Construct_UFunction_AOWLSpoutSenderManager_RemoveSenderByName_Statics::OWLSpoutSenderManager_eventRemoveSenderByName_Parms), Z_Construct_UFunction_AOWLSpoutSenderManager_RemoveSenderByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLSpoutSenderManager_RemoveSenderByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWLSpoutSenderManager_RemoveSenderByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLSpoutSenderManager_RemoveSenderByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWLSpoutSenderManager_RemoveSenderByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWLSpoutSenderManager_RemoveSenderByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AOWLSpoutSenderManager);
	UClass* Z_Construct_UClass_AOWLSpoutSenderManager_NoRegister()
	{
		return AOWLSpoutSenderManager::StaticClass();
	}
	struct Z_Construct_UClass_AOWLSpoutSenderManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpoutSenders_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpoutSenders_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SpoutSenders;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AOWLSpoutSenderManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_OWLSpout,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AOWLSpoutSenderManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AOWLSpoutSenderManager_ActivateSender, "ActivateSender" }, // 1153966697
		{ &Z_Construct_UFunction_AOWLSpoutSenderManager_AddSender, "AddSender" }, // 1123084851
		{ &Z_Construct_UFunction_AOWLSpoutSenderManager_DeactivateSender, "DeactivateSender" }, // 3662156288
		{ &Z_Construct_UFunction_AOWLSpoutSenderManager_RemoveSenderByName, "RemoveSenderByName" }, // 2754899696
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWLSpoutSenderManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "OWLSpoutSenderManager.h" },
		{ "ModuleRelativePath", "Public/OWLSpoutSenderManager.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOWLSpoutSenderManager_Statics::NewProp_SpoutSenders_Inner = { "SpoutSenders", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FOWLSpoutSenderInterface, METADATA_PARAMS(nullptr, 0) }; // 144541715
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWLSpoutSenderManager_Statics::NewProp_SpoutSenders_MetaData[] = {
		{ "Category", "Off World Live Spout Sender Settings" },
		{ "ModuleRelativePath", "Public/OWLSpoutSenderManager.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AOWLSpoutSenderManager_Statics::NewProp_SpoutSenders = { "SpoutSenders", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AOWLSpoutSenderManager, SpoutSenders), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AOWLSpoutSenderManager_Statics::NewProp_SpoutSenders_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOWLSpoutSenderManager_Statics::NewProp_SpoutSenders_MetaData)) }; // 144541715
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AOWLSpoutSenderManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWLSpoutSenderManager_Statics::NewProp_SpoutSenders_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWLSpoutSenderManager_Statics::NewProp_SpoutSenders,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AOWLSpoutSenderManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOWLSpoutSenderManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AOWLSpoutSenderManager_Statics::ClassParams = {
		&AOWLSpoutSenderManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AOWLSpoutSenderManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AOWLSpoutSenderManager_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AOWLSpoutSenderManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AOWLSpoutSenderManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AOWLSpoutSenderManager()
	{
		if (!Z_Registration_Info_UClass_AOWLSpoutSenderManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AOWLSpoutSenderManager.OuterSingleton, Z_Construct_UClass_AOWLSpoutSenderManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AOWLSpoutSenderManager.OuterSingleton;
	}
	template<> OWLSPOUT_API UClass* StaticClass<AOWLSpoutSenderManager>()
	{
		return AOWLSpoutSenderManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AOWLSpoutSenderManager);
	AOWLSpoutSenderManager::~AOWLSpoutSenderManager() {}
	struct Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLSpout_Public_OWLSpoutSenderManager_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLSpout_Public_OWLSpoutSenderManager_h_Statics::ScriptStructInfo[] = {
		{ FOWLSpoutSenderInterface::StaticStruct, Z_Construct_UScriptStruct_FOWLSpoutSenderInterface_Statics::NewStructOps, TEXT("OWLSpoutSenderInterface"), &Z_Registration_Info_UScriptStruct_OWLSpoutSenderInterface, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOWLSpoutSenderInterface), 144541715U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLSpout_Public_OWLSpoutSenderManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AOWLSpoutSenderManager, AOWLSpoutSenderManager::StaticClass, TEXT("AOWLSpoutSenderManager"), &Z_Registration_Info_UClass_AOWLSpoutSenderManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AOWLSpoutSenderManager), 727615499U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLSpout_Public_OWLSpoutSenderManager_h_2532595315(TEXT("/Script/OWLSpout"),
		Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLSpout_Public_OWLSpoutSenderManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLSpout_Public_OWLSpoutSenderManager_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLSpout_Public_OWLSpoutSenderManager_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLSpout_Public_OWLSpoutSenderManager_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
