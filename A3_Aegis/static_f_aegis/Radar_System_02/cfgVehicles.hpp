class CfgVehicles
{
	/* Definitions */
    #include "\A3_Aegis\macros_supportBags.hpp"
	
	/* Inheritance Tree */
	class StaticMGWeapon;

    /* Bases */
	class Radar_System_02_base_F: StaticMGWeapon
	{
        /* Liveries */
		class TextureSources
		{
			class AridHex
			{
				factions[] = {};
			};
			class JungleHex: AridHex
			{
				factions[] = {};
			};
			class Green: AridHex
			{
				displayName = $STR_A3_TEXTURESOURCES_GREEN0;
				author = $STR_A3_A_AveryTheKitty;
				factions[] = {};
				textures[] =
				{
					"\A3_Aegis\Static_F_Aegis\Radar_System_02\Data\Radar_system_02_mat_01_RUkhk_CO.paa",
					"\A3_Aegis\Static_F_Aegis\Radar_System_02\Data\Radar_system_02_mat_02_RUkhk_CO.paa"
				};
			};
		};
		textureList[] =
		{
			AridHex,0,
			JungleHex,0,
			Green,0
		};
	};
	
    /* Factions */
    #include "cfgOPFOR.hpp" // China
    #include "cfgRUS.hpp"   // Russia
};