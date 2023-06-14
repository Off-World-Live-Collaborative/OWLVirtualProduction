// Copyright Off World Live Limited, 2020-2022. All rights reserved.

using UnrealBuildTool;
using System.IO;
using EpicGames.Core;

public class OWLNDI : ModuleRules
{
	public OWLNDI(ReadOnlyTargetRules Target) : base(Target)
	{

		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

		bUsePrecompiled = GetOffWorldBoolean("UsePrecompiled", true);

		PublicIncludePaths.AddRange(
			new string[] {
				// ... add public include paths required here ...
			}
		);


		PrivateIncludePaths.AddRange(
			new string[] {
				"ThirdParty/NDIRaw/Includes",
				"OWLNDI/Private",
				"LivestreamingToolkit/Private/Tools",
				"LivestreamingToolkit/Public/Tools",
				"LivestreamingToolkit/Private/Telemetry",
				"LivestreamingToolkit/Private/ServerAuth"
			}
		);

		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"NDIRaw",
				// ... add other public dependencies that you statically link with here ...
			}
		);

		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				"CoreUObject",
				"Engine",
				"RHI",
				"RHICore",
				"AudioExtensions",
				"RenderCore",
				"Projects",
				"NDIRaw",
				"LivestreamingToolkitShaders",
				"LivestreamingToolkit",
				"Json",
				"JsonUtilities",
				"OWLCamera",
				"OWL360Camera",
				// ... add private dependencies that you statically link with here ...
			}
		);

		DynamicallyLoadedModuleNames.AddRange(
				new string[]
				{
					// ... add any modules that your module loads dynamically here ...
				}
		);

		if ((Target.Platform == UnrealTargetPlatform.Win64))
		{


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
}
