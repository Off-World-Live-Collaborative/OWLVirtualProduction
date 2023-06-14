// Copyright Off World Live Limited, 2020-2022. All rights reserved.

using UnrealBuildTool;
using System.IO;

public class Spout : ModuleRules
{
	public Spout(ReadOnlyTargetRules Target) : base(Target)
	{
		Type = ModuleType.External;

		if ((Target.Platform == UnrealTargetPlatform.Win64))
		{
			PublicIncludePaths.Add(Path.Combine(ModuleDirectory, "Spout2/SPOUTSDK/SpoutDirectX/SpoutDX"));
			PublicIncludePaths.Add(Path.Combine(ModuleDirectory, "Spout2/SPOUTSDK/SpoutGL"));
			PublicDelayLoadDLLs.Add("SpoutDX.dll");
			string libraryDirectory = Path.Combine("Spout2/BUILD/Binaries/x64");
			PublicAdditionalLibraries.Add(Path.Combine(ModuleDirectory, libraryDirectory, "SpoutDX.lib"));
			RuntimeDependencies.Add(Path.Combine(ModuleDirectory, libraryDirectory, "SpoutDX.dll"));
		}
	}
}
