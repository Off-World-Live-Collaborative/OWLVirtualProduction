// Copyright Off World Live Limited, 2020-2021. All rights reserved.

using UnrealBuildTool;
using System.IO;
using System.Net;
using System;
using EpicGames.Core;

public class OWLScreenCapture : ModuleRules
{
	public OWLScreenCapture(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		bUsePrecompiled = GetOffWorldBoolean("UsePrecompiled", true);

		PrivateIncludePaths.AddRange(
			new string[]
			{
				"OWLScreenCapture/Private",
				"LivestreamingToolkit/Private/Tools",
				"LivestreamingToolkit/Private/ServerAuth",
				"LivestreamingToolkit/Public/Tools",
			});

		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
			}
		);

		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				"CoreUObject",
				"Engine",
				"Projects",
				"RHI",
				"RenderCore",
				"LivestreamingToolkit",
			}
		);

		if (Target.Platform == UnrealTargetPlatform.Win64)
		{
			// These parameters are mandatory for winrt support
			bEnableExceptions = true;
			bUseUnity = false;
			CppStandard = CppStandardVersion.Cpp17;
			PrivateDependencyModuleNames.AddRange(new string[]
			{
				"D3D12RHI",
			});
			PublicSystemLibraries.AddRange(new string[] { "shlwapi.lib", "runtimeobject.lib" });
			PrivateIncludePaths.AddRange(
				new string[]
				{
					Path.Combine(EngineDirectory, "Source/ThirdParty/Windows/D3DX12/Include"),
				});
			PrivateIncludePaths.Add(
				Path.Combine(Target.WindowsPlatform.WindowsSdkDir,
				"Include",
				Target.WindowsPlatform.WindowsSdkVersion,
				"cppwinrt"));
			PublicSystemLibraries.AddRange(new string[] {
				"DXGI.lib",
				"d3d11.lib",
			});
			AddEngineThirdPartyPrivateStaticDependencies(Target, "DX12");
		}

	}

	public JsonObject GetOffWorldSettings()
	{
		string RootDir = Path.GetFullPath(Path.Combine(ModuleDirectory, "../../"));
		string UPluginPath = Path.Combine(RootDir, "OWLLivestreamingToolkit.uplugin");
		string RawString = File.ReadAllText(UPluginPath);
		JsonObject UPluginJson = JsonObject.Parse(RawString);
		return UPluginJson.GetObjectField("OffWorldLive");
	}
	public bool GetOffWorldBoolean(string Key, bool defaultValue = false)
	{
		try
		{
			return GetOffWorldSettings().GetBoolField(Key);
		}
		catch
		{
			return defaultValue;
		}
	}
	public string GetOffWorldString(string Key, string defaultValue = "")
	{
		try
		{
			return GetOffWorldSettings().GetStringField(Key);
		}
		catch
		{
			return defaultValue;
		}
	}
}
