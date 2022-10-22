class CfgVehicles
{
	class Plane_Base_F;

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
	};
	class Ejection_Seat_Plane_Fighter_01_base_F;

	/* Factions */
    #include "cfgBLUFOR.hpp"    // US
};