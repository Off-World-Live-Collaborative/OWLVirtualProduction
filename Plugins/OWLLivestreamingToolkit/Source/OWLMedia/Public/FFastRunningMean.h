#pragma once

#include "CoreMinimal.h"

/**
 * Gets a running mean of a series of int64 values
 * without over-allocating or modifying array memory allocation
 */
class OWLMEDIA_API FFastRunningMean
{
public:
	FFastRunningMean(int TotalSamples);
public:
	void AddSample(int64 NewSample);

	int64 GetMean();
private:
	TArray<int64> Values;
	int NextIndex = 0;
	int TotalSamples = 5;
};
