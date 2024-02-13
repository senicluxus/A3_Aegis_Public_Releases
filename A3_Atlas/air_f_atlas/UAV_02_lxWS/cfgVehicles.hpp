class CfgVehicles
{
    /* Inheritance Tree */
	class Helicopter;
	class Helicopter_Base_F: Helicopter
	{
		class Components;
	};
	class Bag_Base;
	class Weapon_Bag_Base: Bag_Base
	{
		class assembleInfo;
	};

    /* Bases */
	class UAV_02_Base_lxWS: Helicopter_Base_F
	{
        /* Liveries */
		class TextureSources
		{
			class IDF
			{
				displayName = $STR_A3_A_TextureSources_IDF0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] = {"\A3_Atlas\air_f_atlas\UAV_02_lxWS\Data\I_Gun_Drone_IDF_CO.paa"};
				factions[] = {};
			};
		};
	};

    /* Factions */
	#include "cfgADF.hpp"	// ADF
	#include "cfgIDF.hpp"       // Israel

};