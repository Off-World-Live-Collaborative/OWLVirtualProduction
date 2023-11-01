// Copyright Off World Live Limited, 2020-2021. All rights reserved.

using UnrealBuildTool;
using System.IO;
using System.Net;
using System;
using EpicGames.Core;

public class OWLMedia : ModuleRules
{
	public OWLMedia(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		bUsePrecompiled = GetOffWorldBoolean("UsePrecompiled", true);

		PrivateIncludePaths.AddRange(
			new string[]
			{
				"OWLMedia/private",
				"LivestreamingToolkit/Private/Tools",
				"LivestreamingToolkit/Private/ServerAuth",
				"LivestreamingToolkit/Public/Tools",
			});

		PublicDependencyModuleNames.AddRange(
			new string[]
			{
                "AudioMixer",
                "AVEncoder",
                "Core",
                "CoreUObject",
                "FFmpeg",
                "Engine",
                "HTTP",
                "Json",
                "JsonUtilities",
                "RenderCore",
                "RHI",
                "Projects",
            }
		);

		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
                "ApplicationCore",
                "AVEncoder",
                "Core",
                "CoreUObject",
                "Engine",
                "FFmpeg",
                "LivestreamingToolkit",
                "LivestreamingToolkitShaders",
                "OWLCamera",
                "Projects",
                "RenderCore",
                "RHI",
                "Slate",
                "SlateCore",
                "UMG",
			}
		);

		if (Target.bBuildEditor)
		{
			PrivateDependencyModuleNames.AddRange(new string[]
			{
				"UnrealEd",
				"ToolWidgets",
			});
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
