#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class CfgVehicles
{
	// Bases
	class Truck_03_base_F;

	// Arma 3
	class O_Truck_03_transport_F: Truck_03_base_F
	{
		/* Liveries */
    	class TextureSources
    	{
        	class WoodlandHex
        	{
            	displayName = $STR_A3_A_TEXTURESOURCES_WHEX0;
				author = $STR_A3_A_BranFlakes;
            	textures[] =
            	{
                	"\A3_Atlas\Soft_F_Atlas\Truck_03\Data\Truck_03_ext01_whex_CO.paa",
                	"\A3_Atlas\Soft_F_Atlas\Truck_03\Data\Truck_03_ext02_whex_CO.paa",
                	"\A3_Atlas\Soft_F_Atlas\Truck_03\Data\Truck_03_cargo_whex_CO.paa"
            	};
            	factions[] = {};
        	};
    	};
	};
	class O_Truck_03_covered_F: Truck_03_base_F
	{
		/* Liveries */
    	class TextureSources
    	{
        	class WoodlandHex
        	{
            	displayName = $STR_A3_A_TEXTURESOURCES_WHEX0;
				author = $STR_A3_A_BranFlakes;
            	textures[] =
            	{
                	"\A3_Atlas\Soft_F_Atlas\Truck_03\Data\Truck_03_ext01_whex_CO.paa",
                	"\A3_Atlas\Soft_F_Atlas\Truck_03\Data\Truck_03_ext02_whex_CO.paa",
                	"\A3_Atlas\Soft_F_Atlas\Truck_03\Data\Truck_03_cargo_whex_CO.paa",
					"\A3_Atlas\Soft_F_Atlas\Truck_03\Data\Truck_03_cover_whex_CO.paa"
            	};
            	factions[] = {};
        	};
    	};
	};
	class O_Truck_03_repair_F: Truck_03_base_F
	{
		/* Liveries */
    	class TextureSources
    	{
        	class WoodlandHex
        	{
            	displayName = $STR_A3_A_TEXTURESOURCES_WHEX0;
				author = $STR_A3_A_BranFlakes;
            	textures[] =
            	{
                	"\A3_Atlas\Soft_F_Atlas\Truck_03\Data\Truck_03_ext01_whex_CO.paa",
                	"\A3_Atlas\Soft_F_Atlas\Truck_03\Data\Truck_03_ext02_whex_CO.paa",
                	"\A3_Atlas\Soft_F_Atlas\Truck_03\Data\Truck_03_ammo_whex_CO.paa"
            	};
            	factions[] = {};
        	};
    	};
	};
	class O_Truck_03_ammo_F: Truck_03_base_F
	{
		/* Liveries */
    	class TextureSources
    	{
        	class WoodlandHex
        	{
            	displayName = $STR_A3_A_TEXTURESOURCES_WHEX0;
				author = $STR_A3_A_BranFlakes;
            	textures[] =
            	{
                	"\A3_Atlas\Soft_F_Atlas\Truck_03\Data\Truck_03_ext01_whex_CO.paa",
                	"\A3_Atlas\Soft_F_Atlas\Truck_03\Data\Truck_03_ext02_whex_CO.paa",
                	"\A3_Atlas\Soft_F_Atlas\Truck_03\Data\Truck_03_cargo_whex_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_03\Data\Containers_02_set_ghex_CO.paa"
            	};
            	factions[] = {};
        	};
    	};
	};
	class O_Truck_03_fuel_F: Truck_03_base_F
	{
		/* Liveries */
    	class TextureSources
    	{
        	class WoodlandHex
        	{
            	displayName = $STR_A3_A_TEXTURESOURCES_WHEX0;
				author = $STR_A3_A_BranFlakes;
            	textures[] =
            	{
                	"\A3_Atlas\Soft_F_Atlas\Truck_03\Data\Truck_03_ext01_whex_CO.paa",
                	"\A3_Atlas\Soft_F_Atlas\Truck_03\Data\Truck_03_ext02_whex_CO.paa",
                	"\A3_Atlas\Soft_F_Atlas\Truck_03\Data\Truck_03_Fuel_whex_CO.paa"
            	};
            	factions[] = {};
        	};
    	};
	};
	class O_Truck_03_medical_F: Truck_03_base_F
	{
		/* Liveries */
    	class TextureSources
    	{
        	class WoodlandHex
        	{
            	displayName = $STR_A3_A_TEXTURESOURCES_WHEX0;
				author = $STR_A3_A_BranFlakes;
            	textures[] =
            	{
                	"\A3_Atlas\Soft_F_Atlas\Truck_03\Data\Truck_03_ext01_whex_CO.paa",
                	"\A3_Atlas\Soft_F_Atlas\Truck_03\Data\Truck_03_ext02_whex_CO.paa",
                	"\A3_Atlas\Soft_F_Atlas\Truck_03\Data\Truck_03_cargo_whex_CO.paa",
					"\A3_Atlas\Soft_F_Atlas\Truck_03\Data\Truck_03_cover_whex_CO.paa"
            	};
            	factions[] = {};
        	};
    	};
	};
	
	// Arma 3 Atlas
	#include "cfgOpfor_Aegis.hpp"
};
