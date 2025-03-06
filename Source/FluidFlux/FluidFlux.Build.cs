// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class FluidFlux : ModuleRules
{
	public FluidFlux(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
