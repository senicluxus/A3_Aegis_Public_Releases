class CfgVehicles
{
	/* Definitions */
    #include "\A3_Aegis\macros_supportBags.hpp"
	
	/* Inheritance Tree */
	class StaticMGWeapon;

    /* Bases */
	class Radar_System_01_base_F: StaticMGWeapon
	{
        /* Liveries */
		class TextureSources
		{
            class Desert
            {
				factions[] = {};
            };
			class Olive
			{
				factions[] = {};
			};
			class LDF
			{
				displayName = $STR_A3_C_CfgVehicles_Offroad_01_civil_base_F_TextureSources_EAF0;
				author = $STR_A3_A_AveryTheKitty;
				factions[] = {};
				textures[] =
				{
					"\A3_Aegis\Static_F_Aegis\Radar_System_01\Data\Radar_system_01_mat_01_EAF_CO.paa",
					"\A3_Aegis\Static_F_Aegis\Radar_System_01\Data\Radar_system_01_mat_02_EAF_CO.paa"
				};
			};
		};
		textureList[] =
		{
			Desert,1,
			Olive,0,
			LDF,0
		};
	};

	/* Factions */
    #include "cfgBLUFOR.hpp"    // US & BAF
	class I_E_Radar_System_01_F: Radar_System_01_base_F
	{
		hiddenSelectionsTextures[] =
		{
			"\A3_Aegis\Static_F_Aegis\Radar_System_01\Data\Radar_system_01_mat_01_EAF_CO.paa",
			"\A3_Aegis\Static_F_Aegis\Radar_System_01\Data\Radar_system_01_mat_02_EAF_CO.paa"
		};
	};
	#include "cfgEAF.hpp"	// LDF BLUFOR
};