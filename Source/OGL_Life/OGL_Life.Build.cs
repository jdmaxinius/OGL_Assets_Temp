// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class OGL_Life : ModuleRules
{
	public OGL_Life(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
