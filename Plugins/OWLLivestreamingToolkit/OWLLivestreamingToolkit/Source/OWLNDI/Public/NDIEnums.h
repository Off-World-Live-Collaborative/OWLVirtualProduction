// Copyright Off World Live Limited, 2020-2022. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "NDIEnums.generated.h"


UENUM(BlueprintType, META = (DisplayName = "NDI Video Conversion Format"))
enum class ENDIVideoConversionFormat : uint8 {
	NDIVCF_BGRA UMETA(DisplayName = "BGRA"),
	NDIVCF_UYVY UMETA(DisplayName = "UYVY"),
};
