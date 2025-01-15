#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class CfgVehicles
{
	// Arma 3
	class O_APC_Tracked_02_base_F;
	class O_APC_Tracked_02_cannon_F: O_APC_Tracked_02_base_F
	{
		class TextureSources
    	{
        	class Sep_01
        	{
            	displayName = $STR_A3_O_TEXTURESOURCES_SEPARATIST_010;
            	author = $STR_A3_A_BranFlakes;
            	textures[] =
            	{
                	"\A3_Opf\Armor_F_Opf\APC_Tracked_02\Data\APC_Tracked_02_ext_01_Opf_CO.paa",
                	"\A3_Aegis\Armor_F_Aegis\APC_Tracked_02\Data\APC_Tracked_02_ext_02_RUkhk_CO.paa",
                	"\A3_Aegis\Armor_F_Aegis\APC_Tracked_02\Data\RCWS30_RUkhk_CO.paa",
                	"\A3_Aegis\Armor_F_Aegis\Data\camonet_RUS_green_CO.paa",
                	"\A3_Aegis\Armor_F_Aegis\Data\cage_RUkhk_CO.paa"
            	};
            factions[] = {};
        	};
    	};
	};
	class O_APC_Tracked_02_30mm_lxWS: O_APC_Tracked_02_Cannon_F
	{
		class TextureSources
    	{
        	class Sep_01
        	{
            	displayName = $STR_A3_O_TEXTURESOURCES_SEPARATIST_010;
            	author = $STR_A3_A_BranFlakes;
            	textures[] =
            	{
                	"\A3_Opf\Armor_F_Opf\APC_Tracked_02\Data\APC_Tracked_02_ext_01_Opf_CO.paa",
                	"\A3_Aegis\Armor_F_Aegis\APC_Tracked_02\Data\APC_Tracked_02_ext_02_RUkhk_CO.paa",
                	"\A3_Aegis\Armor_F_Aegis\APC_Tracked_02\Data\apc_tracked_02_ext_03_RUkhk_co.paa",
                	"\A3_Opf\Armor_F_Opf\APC_Tracked_02\Data\APC_Tracked_02_tow_chdkz_co.paa",
                	"\A3_Aegis\Armor_F_Aegis\Data\camonet_RUS_green_CO.paa",
                	"\A3_Aegis\Armor_F_Aegis\Data\cage_RUkhk_CO.paa"
            	};
            factions[] = {};
        	};
    	};
	};
	// Arma 3 Opposing Forces
	#include "cfgChKDZ.hpp"				// Separatists
	// Deprecated classes
	#include "deprecated.hpp"
};