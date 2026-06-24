// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class AssignMent10 : ModuleRules
{
	public AssignMent10(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput", "Test" });
	}
}
