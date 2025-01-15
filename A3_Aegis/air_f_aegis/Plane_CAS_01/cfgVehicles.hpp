class CfgVehicles
{
    /* Inheritance Tree */
	class Plane_Base_F;

    /* Bases */
	class Ejection_Seat_Plane_CAS_01_base_F;
	class Plane_CAS_01_base_F: Plane_Base_F
	{
		class EjectionSystem;

        /* Liveries */
		class TextureSources
		{
			/*class Grey
			{
				displayName = $STR_A3_TextureSources_Blu0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3\Air_F_EPC\Plane_CAS_01\Data\Plane_CAS_01_ext01_CO.paa",
                    "\A3\Air_F_EPC\Plane_CAS_01\Data\Plane_CAS_01_ext02_CO.paa"
				};
				factions[] = {};
			};
			class Sand
			{
				displayName = $STR_A3_TEXTURESOURCES_SAND0;
				author = $STR_A3_A_Ravenholme;
				textures[] = 
				{
					"lxWS\air_f_lxWS\Data\NATO\lxWS_A164_ext01_desert_CO.paa",
					"lxWS\air_f_lxWS\Data\NATO\lxWS_A164_ext02_desert_CO.paa"
				};
				factions[] = {};
			};*/
			class Wdl
			{
				displayName = $STR_A3_A_TEXTURESOURCES_WOODLAND0;
				author = $STR_A3_A_Ravenholme;
				textures[] = 
				{
					"\A3_Aegis\Air_F_Aegis\Plane_CAS_01\Data\Aegis_A164_01_wdl_CO.paa",
                    "\A3_Aegis\Air_F_Aegis\Plane_CAS_01\Data\Aegis_A164_02_wdl_CO.paa"
				};
				factions[] = {};
			};

        };
	};
	class Plane_CAS_01_dynamicLoadout_base_F: Plane_CAS_01_base_F{};

	/* Factions */
	#include "cfgBLUFOR.hpp"    // US
};