#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class CfgVehicles
{
	// Arma 3
	class Car_F;
	class LSV_01_base_F: Car_F
	{
		class TextureSources
        {
			class France
			{
				displayName = $STR_A3_A_TEXTURESOURCES_GreenFR0;
				author = $STR_A3_A_BranFlakes;
				textures[] =
				{
					"\A3_Atlas\Soft_F_Atlas\LSV_01\Data\NATO_LSV_01_fr_CO.paa",
					"\A3_Atlas\Soft_F_Atlas\LSV_01\Data\NATO_LSV_02_fr_CO.paa",
					"\A3_Atlas\Soft_F_Atlas\LSV_01\Data\NATO_LSV_03_fr_CO.paa",
					"\A3_Atlas\Soft_F_Atlas\LSV_01\Data\NATO_LSV_Adds_fr_CO.paa",
					"\A3\Weapons_F_Beta\Launchers\Titan\Data\Launcher_INDP_CO.paa",
                	"\A3\Weapons_F_Beta\Launchers\Titan\Data\TubeM_INDP_CO.paa"
				};
				factions[] = {};
			};
        };
    };
	class LSV_01_armed_base_F: LSV_01_base_F{};
	class LSV_01_unarmed_base_F: LSV_01_base_F{};
	class LSV_01_light_base_F: LSV_01_base_F{};
	class LSV_01_AT_base_F: LSV_01_base_F{};
	// Arma 3 Atlas
	#include "cfgLegion.hpp"               // Legionnaires
    // Deprecated classes
    #include "deprecated.hpp"
};