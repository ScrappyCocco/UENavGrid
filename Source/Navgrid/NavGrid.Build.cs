using UnrealBuildTool;
using System.IO;

public class NavGrid : ModuleRules
{
    public NavGrid(ReadOnlyTargetRules TargetRules) : base(TargetRules)
    {
        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "AIModule" });

        DefaultBuildSettings = BuildSettingsVersion.Latest;
        IncludeOrderVersion = EngineIncludeOrderVersion.Latest;

        if (TargetRules.bBuildEditor)
        {
            PrivateDependencyModuleNames.AddRange(new string[] { "UnrealEd" });
        }

        PublicIncludePaths.AddRange(
            new string[] {
                Path.Combine(ModuleDirectory, "Public")
            }
        );

        PrivateIncludePaths.AddRange(
            new string[] {
                 Path.Combine(ModuleDirectory, "Private")
            }
        );
    }
}