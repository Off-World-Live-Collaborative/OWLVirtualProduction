// Copyright Off World Live Limited, 2020-2022. All rights reserved.

using UnrealBuildTool;
using System.IO;
using EpicGames.Core;

public class OWLSpout : ModuleRules
{
	public OWLSpout(ReadOnlyTargetRules Target) : base(Target)
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
				"OWLSpout/Private",
				"LivestreamingToolkit/Private/Tools",
				"LivestreamingToolkit/Public/Tools",
				"LivestreamingToolkit/Private/Telemetry",
				"LivestreamingToolkit/Private/ServerAuth",
				"LivestreamingToolkitShaders/Private",
				// ... add other private include paths required here ...
			}
		);

		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Spout",
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
				"RenderCore",
				"Renderer",
				"Projects",
				"Spout",
				"LivestreamingToolkit",
				"LivestreamingToolkitShaders",
				"Json",
				"JsonUtilities",
				"OWLCamera",
				"OWL360Camera",
				// ... add private dependencies that you statically link with here ...
			}
		);


		string SpoutDLLPath = "/Source/ThirdParty/Spout/Spout2/BUILD/Binaries/x64/Spout.dll";
		PublicDefinitions.Add("OWL_SPOUT_DLL_PATH=\"" + SpoutDLLPath + "\"");
		PublicDefinitions.Add("DBG=0");
		PublicDefinitions.Add("BETA=0");
		PublicDefinitions.Add("OFFICIAL_BUILD=1");

		DynamicallyLoadedModuleNames.AddRange(
				new string[]
				{
					// ... add any modules that your module loads dynamically here ...
				}
		);

		if ((Target.Platform == UnrealTargetPlatform.Win64))
		{

			PrivateDependencyModuleNames.AddRange(
				new string[]
				{
					"D3D12RHI",
					"D3D11RHI",
				}
			);

			string EnginePath = Path.GetFullPath(Target.RelativeEnginePath);

			PrivateIncludePaths.AddRange(
				new string[]
				{
					Path.Combine(EnginePath, "Source/Runtime/Renderer/Private"),
				}
			);

			// For D3D11on12
			AddEngineThirdPartyPrivateStaticDependencies(Target, "DX12", "DX11", "NVAftermath");
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
