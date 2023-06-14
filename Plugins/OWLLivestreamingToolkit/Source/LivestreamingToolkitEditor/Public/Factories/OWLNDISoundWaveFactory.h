// Copyright Off World Live Limited, 2020-2022. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "Factories/Factory.h"

#include "OWLNDISoundWaveFactory.generated.h"

UCLASS()
class LIVESTREAMINGTOOLKITEDITOR_API UOWLNDISoundWaveFactory : public UFactory
{
	GENERATED_UCLASS_BODY()
public:
	//~ Begin UFactory Interface
	virtual UObject* FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn) override;
	virtual bool CanCreateNew() const override;
	virtual FText GetDisplayName() const override;
	//~ Begin UFactory Interface
};
