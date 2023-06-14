// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOWLMedia_init() {}
	OWLMEDIA_API UFunction* Z_Construct_UDelegateFunction_OWLMedia_OnMediaOutputStart__DelegateSignature();
	OWLMEDIA_API UFunction* Z_Construct_UDelegateFunction_OWLMedia_OnMediaOutputStop__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_OWLMedia;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_OWLMedia()
	{
		if (!Z_Registration_Info_UPackage__Script_OWLMedia.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_OWLMedia_OnMediaOutputStart__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_OWLMedia_OnMediaOutputStop__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/OWLMedia",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x135A8604,
				0x1AF30B62,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_OWLMedia.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_OWLMedia.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_OWLMedia(Z_Construct_UPackage__Script_OWLMedia, TEXT("/Script/OWLMedia"), Z_Registration_Info_UPackage__Script_OWLMedia, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x135A8604, 0x1AF30B62));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
