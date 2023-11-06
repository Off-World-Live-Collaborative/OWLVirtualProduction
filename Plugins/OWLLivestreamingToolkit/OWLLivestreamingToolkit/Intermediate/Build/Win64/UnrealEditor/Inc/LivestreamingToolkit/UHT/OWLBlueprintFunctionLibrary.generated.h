// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OWLBlueprintFunctionLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTextureRenderTarget2D;
class UUserWidget;
#ifdef LIVESTREAMINGTOOLKIT_OWLBlueprintFunctionLibrary_generated_h
#error "OWLBlueprintFunctionLibrary.generated.h already included, missing '#pragma once' in OWLBlueprintFunctionLibrary.h"
#endif
#define LIVESTREAMINGTOOLKIT_OWLBlueprintFunctionLibrary_generated_h

#define FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Public_OWLBlueprintFunctionLibrary_h_15_SPARSE_DATA
#define FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Public_OWLBlueprintFunctionLibrary_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execLaunchLicenseUtility); \
	DECLARE_FUNCTION(execInstallLicense); \
	DECLARE_FUNCTION(execInitOWLApplicationLicense); \
	DECLARE_FUNCTION(execOWLLogInStatus); \
	DECLARE_FUNCTION(execOWLLogOut); \
	DECLARE_FUNCTION(execOWLLogIn); \
	DECLARE_FUNCTION(execDrawUMGToRenderTarget); \
	DECLARE_FUNCTION(execGetIsRuntimeViewportRendering); \
	DECLARE_FUNCTION(execGetIsEditorViewportRendering); \
	DECLARE_FUNCTION(execSetRuntimeViewportRendering); \
	DECLARE_FUNCTION(execSetEditorViewportRendering); \
	DECLARE_FUNCTION(execToggleRuntimeViewportRendering); \
	DECLARE_FUNCTION(execToggleEditorViewportRendering);


#define FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Public_OWLBlueprintFunctionLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLaunchLicenseUtility); \
	DECLARE_FUNCTION(execInstallLicense); \
	DECLARE_FUNCTION(execInitOWLApplicationLicense); \
	DECLARE_FUNCTION(execOWLLogInStatus); \
	DECLARE_FUNCTION(execOWLLogOut); \
	DECLARE_FUNCTION(execOWLLogIn); \
	DECLARE_FUNCTION(execDrawUMGToRenderTarget); \
	DECLARE_FUNCTION(execGetIsRuntimeViewportRendering); \
	DECLARE_FUNCTION(execGetIsEditorViewportRendering); \
	DECLARE_FUNCTION(execSetRuntimeViewportRendering); \
	DECLARE_FUNCTION(execSetEditorViewportRendering); \
	DECLARE_FUNCTION(execToggleRuntimeViewportRendering); \
	DECLARE_FUNCTION(execToggleEditorViewportRendering);


#define FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Public_OWLBlueprintFunctionLibrary_h_15_ACCESSORS
#define FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Public_OWLBlueprintFunctionLibrary_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOWLBlueprintFunctionLibrary(); \
	friend struct Z_Construct_UClass_UOWLBlueprintFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UOWLBlueprintFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LivestreamingToolkit"), NO_API) \
	DECLARE_SERIALIZER(UOWLBlueprintFunctionLibrary)


#define FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Public_OWLBlueprintFunctionLibrary_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUOWLBlueprintFunctionLibrary(); \
	friend struct Z_Construct_UClass_UOWLBlueprintFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UOWLBlueprintFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LivestreamingToolkit"), NO_API) \
	DECLARE_SERIALIZER(UOWLBlueprintFunctionLibrary)


#define FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Public_OWLBlueprintFunctionLibrary_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOWLBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOWLBlueprintFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOWLBlueprintFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOWLBlueprintFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOWLBlueprintFunctionLibrary(UOWLBlueprintFunctionLibrary&&); \
	NO_API UOWLBlueprintFunctionLibrary(const UOWLBlueprintFunctionLibrary&); \
public: \
	NO_API virtual ~UOWLBlueprintFunctionLibrary();


#define FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Public_OWLBlueprintFunctionLibrary_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOWLBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOWLBlueprintFunctionLibrary(UOWLBlueprintFunctionLibrary&&); \
	NO_API UOWLBlueprintFunctionLibrary(const UOWLBlueprintFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOWLBlueprintFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOWLBlueprintFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOWLBlueprintFunctionLibrary) \
	NO_API virtual ~UOWLBlueprintFunctionLibrary();


#define FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Public_OWLBlueprintFunctionLibrary_h_12_PROLOG
#define FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Public_OWLBlueprintFunctionLibrary_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Public_OWLBlueprintFunctionLibrary_h_15_SPARSE_DATA \
	FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Public_OWLBlueprintFunctionLibrary_h_15_RPC_WRAPPERS \
	FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Public_OWLBlueprintFunctionLibrary_h_15_ACCESSORS \
	FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Public_OWLBlueprintFunctionLibrary_h_15_INCLASS \
	FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Public_OWLBlueprintFunctionLibrary_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Public_OWLBlueprintFunctionLibrary_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Public_OWLBlueprintFunctionLibrary_h_15_SPARSE_DATA \
	FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Public_OWLBlueprintFunctionLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Public_OWLBlueprintFunctionLibrary_h_15_ACCESSORS \
	FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Public_OWLBlueprintFunctionLibrary_h_15_INCLASS_NO_PURE_DECLS \
	FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Public_OWLBlueprintFunctionLibrary_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LIVESTREAMINGTOOLKIT_API UClass* StaticClass<class UOWLBlueprintFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Public_OWLBlueprintFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
