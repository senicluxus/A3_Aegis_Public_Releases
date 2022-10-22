class CfgVehicles
{
	/* Inheritance Tree */
	class Helicopter_Base_F;

    /* Bases */
	class Heli_Attack_01_base_F: Helicopter_Base_F
	{
		class Turrets;

        /* Liveries */
		class TextureSources
		{
			class Desert
			{
				displayName = $STR_A3_A_TEXTURESOURCES_DESERT0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] = {"\A3_Atlas\Air_F_Atlas\Heli_Attack_01\Data\Heli_Attack_01_desert_CO.paa"};
				factions[] = {};
			};
		};
	};
	class Heli_Attack_01_dynamicLoadout_base_F: Heli_Attack_01_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret;
		};
	};

	/* Factions */
	#include "cfgIDF.hpp"   // IDF

    /* Deprecated */
    #include "deprecated.hpp"
};