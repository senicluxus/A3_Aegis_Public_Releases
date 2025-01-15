class CfgVehicles
{
	class Plane_Fighter_01_Base_F;
	class B_Plane_Fighter_01_F: Plane_Fighter_01_Base_F
	{
		class EventHandlers;	
	};

	/* Bases */
	class FIR_FA181E: B_Plane_Fighter_01_F
	{
		class EventHandlers: EventHandlers
		{
			Init = "[_this select 0] execVM ""\FIR_FA181_Skin\sqs\init\init.sqf"";";
			class A3_Aegis
			{
				init = "_this#0 setObjectMaterial ['hit_glass1','A3_Aegis\air_f_aegis\Plane_Fighter_01\data\Fighter_01_glass_golden.rvmat']";
			};
		};
	};
};