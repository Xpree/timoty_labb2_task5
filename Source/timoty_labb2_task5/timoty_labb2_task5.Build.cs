// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class timoty_labb2_task5 : ModuleRules
{
	public timoty_labb2_task5(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
