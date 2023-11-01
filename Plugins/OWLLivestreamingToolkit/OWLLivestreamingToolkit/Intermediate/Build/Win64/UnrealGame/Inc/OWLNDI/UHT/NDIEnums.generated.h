// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NDIEnums.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OWLNDI_NDIEnums_generated_h
#error "NDIEnums.generated.h already included, missing '#pragma once' in NDIEnums.h"
#endif
#define OWLNDI_NDIEnums_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLNDI_Public_NDIEnums_h


#define FOREACH_ENUM_ENDIVIDEOCONVERSIONFORMAT(op) \
	op(ENDIVideoConversionFormat::NDIVCF_BGRA) \
	op(ENDIVideoConversionFormat::NDIVCF_UYVY) 

enum class ENDIVideoConversionFormat : uint8;
template<> struct TIsUEnumClass<ENDIVideoConversionFormat> { enum { Value = true }; };
template<> OWLNDI_API UEnum* StaticEnum<ENDIVideoConversionFormat>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
