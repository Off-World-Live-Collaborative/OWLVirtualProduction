// Copyright Off World Live Limited, 2020-2022. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "Sound/SoundWaveProcedural.h"
#include "Sound/SoundGenerator.h"

#include "OWLNDISoundWave.generated.h"

UCLASS(NotBlueprintable, Category = "Off World Live NDI", META = (DisplayName = "OWL NDI Sound Wave"))
class OWLNDI_API UOWLNDISoundWave : public USoundWaveProcedural
{
	GENERATED_BODY()
public:
	UOWLNDISoundWave(const FObjectInitializer& ObjectInitializer);
	void Init(class FOWLNDIReceiver* InReceiver);
	void DeInit();
private:
	FOWLNDIReceiver* OwningReceiver;
	bool Initialised = false;
	FCriticalSection Audio_CS;
	virtual int32 GeneratePCMData(uint8* PCMData, const int32 SamplesNeeded) override;
};
