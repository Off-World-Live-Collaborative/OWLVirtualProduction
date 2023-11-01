// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tools/OWLImageInput.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LIVESTREAMINGTOOLKIT_OWLImageInput_generated_h
#error "OWLImageInput.generated.h already included, missing '#pragma once' in OWLImageInput.h"
#endif
#define LIVESTREAMINGTOOLKIT_OWLImageInput_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Public_Tools_OWLImageInput_h


#define FOREACH_ENUM_EOWLOUTPUTTYPE(op) \
	op(EOWLOutputType::OT_Media) \
	op(EOWLOutputType::OT_VirtualWebcam) 

enum class EOWLOutputType : uint8;
template<> struct TIsUEnumClass<EOWLOutputType> { enum { Value = true }; };
template<> LIVESTREAMINGTOOLKIT_API UEnum* StaticEnum<EOWLOutputType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
