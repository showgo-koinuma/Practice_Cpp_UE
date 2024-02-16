// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class RiderTest : ModuleRules
{
	public RiderTest(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
