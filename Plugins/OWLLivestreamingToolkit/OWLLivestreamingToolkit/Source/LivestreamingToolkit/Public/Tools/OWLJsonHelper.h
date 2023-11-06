// Copyright Off World Live Limited, 2020-2022. All rights reserved.

#pragma once
#include "CoreMinimal.h"
#include "Misc/FileHelper.h"
#include "Policies/CondensedJsonPrintPolicy.h"
#include "Serialization/JsonWriter.h"
#include "Serialization/JsonSerializer.h"

class OWLJsonHelper
{
public:
	static FString JsonToString(const TSharedPtr<FJsonObject> Json)
	{
		FString Output;
		TSharedRef<TJsonWriter<TCHAR, TCondensedJsonPrintPolicy<TCHAR>>> Writer = TJsonWriterFactory<TCHAR, TCondensedJsonPrintPolicy<TCHAR>>::Create(&Output);
		FJsonSerializer::Serialize(Json.ToSharedRef(), Writer);
		return Output + "\n";
	}

	static bool WriteJsonToFile(const TSharedPtr<FJsonObject> Json, const FString Path)
	{
		FString AsString = OWLJsonHelper::JsonToString(Json);
		return OWLJsonHelper::WriteToFile(Path, AsString);
	}

	static bool WriteToFile(const FString Path, const FString Text)
	{
		return FFileHelper::SaveStringToFile(
			Text,
			*Path,
			FFileHelper::EEncodingOptions::AutoDetect
		);
	}
};
