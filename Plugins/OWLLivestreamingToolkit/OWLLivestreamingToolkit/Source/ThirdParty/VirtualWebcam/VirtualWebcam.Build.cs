// Copyright Off World Live Limited, 2020-2022. All rights reserved.

using UnrealBuildTool;
using System.IO;

public class VirtualWebcam : ModuleRules
{
	public VirtualWebcam(ReadOnlyTargetRules Target) : base(Target)
	{
		Type = ModuleType.External;

		PublicIncludePaths.Add(Path.Combine(ModuleDirectory, "include/softcam"));
		PublicDelayLoadDLLs.Add("OWLVirtualWebcam.dll");
		PublicAdditionalLibraries.Add(Path.Combine(ModuleDirectory, "lib/x64/OWLVirtualWebcam.lib"));
	}
}
