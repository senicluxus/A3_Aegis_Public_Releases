class CfgVehicles
{
	/* Inheritance Tree */
	class Helicopter;
	class Helicopter_Base_F: Helicopter
	{
		class Turrets;
	};
	class Helicopter_Base_H: Helicopter_Base_F
	{
		class Turrets: Turrets
		{
			class CopilotTurret;
			class MainTurret;
		};
	};

    /* Bases */
	class Heli_Transport_01_base_F: Helicopter_Base_H
	{
		class Turrets: Turrets
		{
			class MainTurret;
			class RightDoorGun;
		};

        /* Liveries */
		class TextureSources
		{
			class Desert
			{
				displayName = $STR_A3_A_TEXTURESOURCES_DESERT0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Atlas\Air_F_Atlas\Heli_Transport_01\Data\Heli_Transport_01_ext01_desert_CO.paa",
					"\A3_Atlas\Air_F_Atlas\Heli_Transport_01\Data\Heli_Transport_01_ext02_desert_CO.paa"
				};
				factions[] = {};
			};
			class ADF
			{
				displayName = $STR_A3_A_TEXTURESOURCES_ADF0;
				author = $STR_A3_A_BranFlakes;
				textures[] =
				{
					"\A3_Atlas\Air_F_Atlas\Heli_Transport_01\Data\Heli_Transport_01_ext01_au_CO.paa",
					"\A3_Atlas\Air_F_Atlas\Heli_Transport_01\Data\Heli_Transport_01_ext02_au_CO.paa"
				};
				factions[] = {};
			};
		};
	};

	/* Factions */
	#include "cfgIDF.hpp"   // IDF
	#include "cfgADF.hpp"	//ADF

    /* Deprecated */
    #include "deprecated.hpp"
};