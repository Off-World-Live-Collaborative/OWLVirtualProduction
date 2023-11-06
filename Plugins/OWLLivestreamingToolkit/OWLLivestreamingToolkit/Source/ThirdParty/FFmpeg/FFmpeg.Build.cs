using UnrealBuildTool;
using System.IO;
using EpicGames.Core;

public class FFmpeg : ModuleRules
{
	public FFmpeg(ReadOnlyTargetRules Target) : base(Target)
	{
		Type = ModuleType.External;

		if (Target.Platform == UnrealTargetPlatform.Win64)
		{
			//---------------------------------------------------------------------------
			// Paths
			//---------------------------------------------------------------------------
			string ffmpegDirectory = ModuleDirectory;

			PublicIncludePaths.Add(Path.Combine(ffmpegDirectory, "include"));
			string binDirectory = Path.Combine(ffmpegDirectory, "bin");
			string libDirectory = Path.Combine(ffmpegDirectory, "lib");

			//---------------------------------------------------------------------------

			//---------------------------------------------------------------------------
			// Libraries
			//---------------------------------------------------------------------------
			string[] libs =
			{
				"avcodec-owl.lib",
				"avdevice-owl.lib",
				"avfilter-owl.lib",
				"avformat-owl.lib",
				"avutil-owl.lib",
				"swresample-owl.lib",
				"swscale-owl.lib",

				"srt.lib",
			};

			foreach (string lib in libs)
			{
				PublicAdditionalLibraries.Add(Path.Combine(libDirectory, lib));
			}
			//---------------------------------------------------------------------------

			//---------------------------------------------------------------------------
			// DLLs
			//---------------------------------------------------------------------------
			string[] dlls = {
				"libcrypto-3-x64-owl.dll",
				"libssl-3-x64-owl.dll",
				"avutil-owl-57.dll",
				"avdevice-owl-59.dll",
				"swresample-owl-4.dll",
				"avcodec-owl-59.dll",
				"swscale-owl-6.dll",
				"avfilter-owl-8.dll",
				"avformat-owl-59.dll",

				"srt.dll",
			};

			foreach (string dll in dlls)
			{
				PublicDelayLoadDLLs.Add(dll);
				RuntimeDependencies.Add(Path.Combine(binDirectory, dll));
			}
			//---------------------------------------------------------------------------
		}
	}
}