// Copyright Off World Live Limited, 2020-2022. All rights reserved.

using UnrealBuildTool;
using System;
using System.IO;
using System.Net;
using EpicGames.Core;

public class LivestreamingToolkit : ModuleRules
{
	public LivestreamingToolkit(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

		bUsePrecompiled = GetOffWorldBoolean("UsePrecompiled", true);

		bool IsStaging = GetOffWorldBoolean("Staging", false);

		string AuthUrl = GetOffWorldString("AuthURL", "https://plugin-api.offworld.live");
		PublicDefinitions.Add("OWL_AUTH_URL=\"" + AuthUrl + "\"");

		string ReleaseDate = "";
		string ReleaseBuildEnv = System.Environment.GetEnvironmentVariable("RELEASE_BUILD");
		if (ReleaseBuildEnv == null || ReleaseBuildEnv == "")
		{
			ReleaseDate = DateTime.UtcNow.ToString("yyyy-MM-ddTHH:mm:ss.fffZ");
		}
		else
		{
			ReleaseDate = ReleaseBuildEnv;
		}
		DateTime.Parse(ReleaseDate);
		PublicDefinitions.Add("RELEASE_DATE=" + ReleaseDate);

		PublicDefinitions.Add("OFFWORLDLIVE_DEBUG=" + (GetOffWorldBoolean("Debug", false) ? "1" : "0"));

		bool debugAppLicence = GetOffWorldBoolean("DebugAppLicence", false);
		PublicDefinitions.Add("DEBUG_APP_LICENCE=" + (debugAppLicence ? '1' : '0'));

		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				"CoreUObject",
				"Engine",
				"RHI",
				"Renderer",
				"Projects",
				"Json",
				"JsonUtilities",
				"DeveloperSettings",
				"HTTP",
				// ... add other public dependencies that you statically link with here ...
			}
		);

		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"CoreUObject",
				"Engine",
				"RenderCore",
				"Slate",
				"UMG",
				"SlateCore",
				"RenderCore",
				"RSA",
				"OpenSSL",
				"LivestreamingToolkitShaders",
				// ... add private dependencies that you statically link with here ...
			}
		);

		if (Target.bBuildEditor)
		{
			PrivateDependencyModuleNames.Add("UnrealEd");
		}

		string AuthAppBase = "owl-licensing-utility";

		string StagingExecutable = AuthAppBase + ".staging.exe";
		string ProductionExecutable = AuthAppBase + ".exe";

		string ProductionPath = Path.Combine(PluginDirectory, "Utils", ProductionExecutable);
		string StagingPath = Path.Combine(PluginDirectory, "Utils", StagingExecutable);

		PublicDefinitions.Add("AUTH_APP_NAME=" + (IsStaging ? StagingExecutable : ProductionExecutable));

		// Check if files exist and then add if they do because the .uplugin
		// file can't be trusted to tell us when packaging if staging is true or not
		// because Unreal recreates the uplugin file ignoring fields it doesn't know
		if (File.Exists(ProductionPath))
		{
			RuntimeDependencies.Add(ProductionPath, StagedFileType.NonUFS);
		}


		if (File.Exists(StagingPath))
		{
			RuntimeDependencies.Add(StagingPath, StagedFileType.NonUFS);
		}
		else if (IsStaging)
		{
			if (IsStaging)
			{
				// sanity check that this file exists and throw if it doesn't
				// (only do this in staging so we don't accidentally create crashes
				// in user builds
				throw new Exception(StagingExecutable + " not found at expected path");
			}
		}

		// Ensure that virtual webcam installer is bundled
		string WebcamInstallerPath = Path.Combine(PluginDirectory, "Utils", "OWLVirtualWebcam_Installer.exe");
		if (!File.Exists(WebcamInstallerPath))
		{
			throw new Exception("Virtual Webcam installer not found");
		}
		RuntimeDependencies.Add(WebcamInstallerPath, StagedFileType.NonUFS);

		// Ensure that virtual webcam installer is bundled
		string NDIInstallerScript = Path.Combine(PluginDirectory, "Utils", "InstallNDISDK.ps1");
		if (!File.Exists(NDIInstallerScript))
		{
			throw new Exception("NDI Installer script not found");
		}
		RuntimeDependencies.Add(NDIInstallerScript, StagedFileType.NonUFS);
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
