using UnrealBuildTool;

public class ProyectoXTarget : TargetRules
{
	public ProyectoXTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		ExtraModuleNames.Add("ProyectoX");
	}
}
