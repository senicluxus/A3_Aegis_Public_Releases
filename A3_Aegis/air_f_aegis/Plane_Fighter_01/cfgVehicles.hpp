class CfgVehicles
{
	class Plane;
	class Plane_Base_F: Plane
	{
		class EventHandlers;	
	};

    /* Bases */
	class Plane_Fighter_01_Base_F: Plane_Base_F
	{
        /* Liveries */
		class TextureSources
		{
			class DarkGrey
			{
				displayName = $STR_A3_A_TextureSources_DarkGrey0;
				factions[] = {};
			};
			class DarkGreyCamo
			{
				displayName = $STR_A3_A_TextureSources_DarkGreyCamo0;
				factions[] = {};
			};
		};
        
		class EjectionSystem;

		hiddenSelections[] = {
			"Camo1",
			"Camo2",
			"CamoGlass",
			"camo_cockpit_1",
			"camo_cockpit_2",
			"camo_cockpit_3",
			"camo_cockpit_5",
			"number_01",
			"number_02",
			"number_03",
			"hit_glass1"
		};

		class Damage
		{
			mat[] = {
				"a3\air_f_jets\plane_fighter_01\data\Fighter_01_fuselage_01.rvmat","a3\air_f_jets\plane_fighter_01\data\Fighter_01_fuselage_01_damage.rvmat",
				"a3\air_f_jets\plane_fighter_01\data\Fighter_01_fuselage_01_destruct.rvmat",
				"a3\air_f_jets\plane_fighter_01\data\Fighter_01_fuselage_02.rvmat",
				"a3\air_f_jets\plane_fighter_01\data\Fighter_01_fuselage_02_damage.rvmat",
				"a3\air_f_jets\plane_fighter_01\data\Fighter_01_fuselage_02_destruct.rvmat",
				"a3\air_f_jets\plane_fighter_01\data\Fighter_01_glass.rvmat",
				"A3_Aegis\air_f_aegis\Plane_Fighter_01\data\Fighter_01_glass_golden_damage.rvmat",
				"A3_Aegis\air_f_aegis\Plane_Fighter_01\data\Fighter_01_glass_golden_damage.rvmat",
				"a3\air_f_jets\plane_fighter_01\data\Fighter_01_glass_in.rvmat",
				"a3\air_f_jets\plane_fighter_01\data\Fighter_01_glass_in_damage.rvmat",
				"a3\air_f_jets\plane_fighter_01\data\Fighter_01_glass_in_damage.rvmat",
			};
		};

		class EventHandlers: EventHandlers
		{
			class A3_Aegis
			{
				init = "_this#0 setObjectMaterial ['hit_glass1','A3_Aegis\air_f_aegis\Plane_Fighter_01\data\Fighter_01_glass_golden.rvmat']";
			};
		};
	};
	class Ejection_Seat_Plane_Fighter_01_base_F;

	/* Factions */
    #include "cfgBLUFOR.hpp"    // US
};