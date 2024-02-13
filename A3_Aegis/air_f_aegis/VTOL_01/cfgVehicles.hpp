class CfgVehicles
{
    /* Inheritance Tree */
	class VTOL_Base_F;

    /* Bases */
	class VTOL_01_base_F: VTOL_Base_F
	{
		class TextureSources
		{
			class Blue
			{
				factions[] = {};
			};
			class Olive
			{
				factions[] = {};
			};
			class BAF
			{
				displayName = $STR_A3_A_TextureSources_BAF0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
                {
                    "\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT01_olive_CO.paa",
                    "\A3_Aegis\Air_F_Aegis\VTOL_01\Data\VTOL_01_EXT02_BAF_CO.paa",
                    "\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT03_olive_CO.paa",
                    "\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT04_olive_CO.paa",
                    "\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_signs_CA.paa"
                };
				factions[] = {};
			};
			class Sand
			{
				displayName = $STR_A3_TEXTURESOURCES_SAND0;
				author = $STR_A3_A_Grave;
				textures[] =
				{
					"\lxWS\air_f_lxWS\Data\NATO\VTOL_01_EXT01_sand_CO.paa",
					"\A3_Aegis\Air_F_Aegis\VTOL_01\Data\VTOL_01_EXT02_sand_CO.paa",
					"\A3_Aegis\Air_F_Aegis\VTOL_01\Data\VTOL_01_EXT03_sand_CO.paa",
					"\A3_Aegis\Air_F_Aegis\VTOL_01\Data\VTOL_01_EXT04_sand_CO.paa",
					"\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_signs_CA.paa"
				};
				factions[] = {};
			};
		};
	};
	class VTOL_01_infantry_base_F;
	class VTOL_01_vehicle_base_F;
	class VTOL_01_armed_base_F;

	/* Factions */
	#include "cfgBLUFOR.hpp"    // US & BAF
};