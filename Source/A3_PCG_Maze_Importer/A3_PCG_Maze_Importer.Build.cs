// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class A3_PCG_Maze_Importer : ModuleRules
{
	public A3_PCG_Maze_Importer(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
