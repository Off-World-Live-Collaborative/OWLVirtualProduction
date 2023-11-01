// Copyright Off World Live Limited 2020-2023

#pragma once

#include "CoreMinimal.h"
#include "CompositingElement.h"
#include "OWLBaseComp.generated.h"

/**
 * A universal base class for compositing which prevents
 * re-render flickers caused by Scene View Extension re-renders
 */
UCLASS(BlueprintType, meta=(DisplayName="OWL Empty Comp Shot", ShortTooltip="A simple base actor used to composite multiple render layers together."))
class OWLCOMPOSURE_API AOWLBaseComp : public ACompositingElement
{
	GENERATED_BODY()

	virtual int32 GetRenderPriority() const override;
};
