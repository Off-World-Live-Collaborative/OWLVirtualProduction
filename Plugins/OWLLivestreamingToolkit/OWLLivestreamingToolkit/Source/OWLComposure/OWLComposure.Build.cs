// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.IO;
using System.Net;
using System;
using EpicGames.Core;

public class OWLComposure : ModuleRules
{
	public OWLComposure(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

		bUsePrecompiled = GetOffWorldBoolean("UsePrecompiled", true);

		PrivateIncludePaths.AddRange((new string[]
		{
			"LivestreamingToolkit/Private/ServerAuth",
			"OWLScreenCapture/Private",
			Path.Combine(EngineDirectory, "Plugins/Compositing/Composure/Source/Composure/Private/"),
			Path.Combine(EngineDirectory, "Source/Runtime/Engine/"),
		}));
		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				"CoreUObject",
				"Composure",
				"RenderCore",
				"MediaAssets",
				"CoreUObject",
				"Engine",
				"OWLCamera",
				"CameraCalibrationCore",
				"ActorLayerUtilities",
				"CinematicCamera",
				"OWLSpout",
				"OWLNDI",
				"OWLScreenCapture",
				"UMG",
				"Slate",
				"SlateCore",
			}
		);

		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				"CoreUObject",
				"Composure",
				"RenderCore",
				"CoreUObject",
				"MediaAssets",
				"Engine",
				"RHI",
				"LivestreamingToolkit",
				"LivestreamingToolkitShaders",
				"OWLCamera",
				"CinematicCamera",
				"OWLSpout",
				"OWLScreenCapture",
			}
		);

		DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
				// ... add any modules that your module loads dynamically here ...
			}
			);
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
