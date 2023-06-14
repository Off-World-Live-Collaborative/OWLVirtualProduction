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

			PublicRuntimeLibraryPaths.Add(binDirectory);
			//---------------------------------------------------------------------------

			//---------------------------------------------------------------------------
			// Libraries
			//---------------------------------------------------------------------------
			string[] libs =
			{
				"avcodec.lib",
				"avdevice.lib",
				"avfilter.lib",
				"avformat.lib",
				"avutil.lib",
				"swresample.lib",
				"swscale.lib",

				"libcrypto.lib",
				"libssl.lib",
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
				"libcrypto-3-x64.dll",
				"libssl-3-x64.dll",
				"avutil-57.dll",
				"avdevice-59.dll",
				"swresample-4.dll",
				"avcodec-59.dll",
				"swscale-6.dll",
				"avfilter-8.dll",
				"avformat-59.dll",

				"libcrypto-3-x64.dll",
				"libssl-3-x64.dll",
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