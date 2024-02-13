#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class CfgVehicles
{
	// Arma 3 Tanks
    class Wheeled_APC_F;
	class AFV_Wheeled_01_base_F: Wheeled_APC_F
    {
		class TextureSources
		{
			class France
			{
				displayName = $STR_A3_A_TEXTURESOURCES_GreenFR0;
				author = $STR_A3_A_BranFlakes;
				textures[] =
                {
                    "\A3_Atlas\Armor_F_Atlas\AFV_Wheeled_01\Data\afv_wheeled_01_EXT1_fr_CO.paa",
                    "\A3\Armor_F_Tank\AFV_Wheeled_01\data\afv_wheeled_01_EXT2_CO.paa",
                    "\A3\Armor_F_Tank\AFV_Wheeled_01\Data\afv_wheeled_01_wheel_CO.paa",
                    "\A3\Armor_F\Data\camonet_NATO_Desert_CO.paa",
                    "\A3\Armor_F_Tank\AFV_Wheeled_01\Data\afv_wheeled_01_EXT3_sand_CO.paa"
                };
				factions[] = {};
			};
		};
    };
	class AFV_Wheeled_01_up_base_F: AFV_Wheeled_01_base_F
    {
		class TextureSources: TextureSources
        {
			class France: France
			{
				displayName = $STR_A3_A_TEXTURESOURCES_GreenFR0;
				author = $STR_A3_A_BranFlakes;
				textures[] =
                {
                    "\A3_Atlas\Armor_F_Atlas\AFV_Wheeled_01\Data\afv_wheeled_01_EXT1_fr_CO.paa",
                    "\A3\Armor_F_Tank\AFV_Wheeled_01\data\afv_wheeled_01_EXT2_CO.paa",
                    "\A3\Armor_F_Tank\AFV_Wheeled_01\Data\afv_wheeled_01_wheel_CO.paa",
                    "\A3\Armor_F_Tank\AFV_Wheeled_01\Data\afv_wheeled_01_EXT3_sand_CO.paa",
                    "\A3\Armor_F_Tank\AFV_Wheeled_01\Data\afv_commander_tow_sand_CO.paa",
                    "\A3\Armor_F\Data\camonet_NATO_Desert_CO.paa",
                    "\A3\Armor_F_Tank\AFV_Wheeled_01\Data\afv_wheeled_01_EXT3_sand_CO.paa"
                };
				factions[] = {};
			};
        };
    };
	// Arma 3 Atlas
	#include "cfgLegion.hpp"            // Legionnaires
};