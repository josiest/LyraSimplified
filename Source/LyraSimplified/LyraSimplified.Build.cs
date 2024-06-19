// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class LyraSimplified : ModuleRules
{
    public LyraSimplified(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        PublicDependencyModuleNames.AddRange(new [] {
            "Core",
            "CoreUObject",
            "Engine",
            "BasicHeroComponent",
            "SimpleGameplayExperience"
        });
    }
}
