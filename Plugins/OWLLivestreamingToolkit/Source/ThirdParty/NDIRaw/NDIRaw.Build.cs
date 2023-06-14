// Copyright Off World Live Limited, 2020-2022. All rights reserved.

using UnrealBuildTool;
using System.IO;
using System;

public class NDIRaw : ModuleRules
{
	public NDIRaw(ReadOnlyTargetRules Target) : base(Target)
	{
		Type = ModuleType.External;

		if (Target.Platform == UnrealTargetPlatform.Win64)
		{
			PublicIncludePaths.Add(Path.Combine(ModuleDirectory, "Includes"));
			PublicAdditionalLibraries.Add(Path.Combine(ModuleDirectory, "Libraries/Win64/Processing.NDI.Lib.x64.lib"));
			PublicDelayLoadDLLs.Add("Processing.NDI.Lib.x64.dll");
		}
	}
}
