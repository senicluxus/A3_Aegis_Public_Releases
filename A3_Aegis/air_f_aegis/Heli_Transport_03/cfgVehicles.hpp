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
			class MainTurret;
		};
	};

    /* Bases */
	class Heli_Transport_03_base_F: Helicopter_Base_H
	{
        /* Turrets */
		class Turrets: Turrets
		{
			class CopilotTurret;
			class MainTurret: MainTurret
			{
                /* Weapons & Ammunition
                - Let's replace its 6.5 mm rounds with 7.62 mm rounds
                */
				magazines[] = {mag_2(1000Rnd_762x51_Belt_T_Red_Splash)};
			};
			class RightDoorGun: MainTurret
			{
                /* Weapons & Ammunition
                - Let's replace its 6.5 mm rounds with 7.62 mm rounds
                */
				magazines[] = {mag_2(1000Rnd_762x51_Belt_T_Red_Splash)};
			};
		};

        /* Liveries */
		class TextureSources
		{
			class Green
			{
				factions[] = {};
			};
			class Black
			{
				textures[] =
				{
					"\A3_Aegis\Air_F_Aegis\Heli_Transport_03\Data\Heli_Transport_03_ext01_black_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Heli_Transport_03\Data\Heli_Transport_03_ext02_black_CO.paa"
				};
				factions[] = {};
			};
			class Grey
			{
				displayName = $STR_A3_TextureSources_Grey0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Air_F_Aegis\Heli_Transport_03\Data\Heli_Transport_03_ext01_grey_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Heli_Transport_03\Data\Heli_Transport_03_ext02_grey_CO.paa"
				};
				factions[] = {};
			};
		};
	};
	class Heli_Transport_03_unarmed_base_F: Heli_Transport_03_base_F
	{
		hiddenSelectionsTextures[] =
		{
			"\A3_Aegis\Air_F_Aegis\Heli_Transport_03\Data\Heli_Transport_03_ext01_black_CO.paa",
			"\A3_Aegis\Air_F_Aegis\Heli_Transport_03\Data\Heli_Transport_03_ext02_black_CO.paa"
		};
	};

    /* Factions */
	#include "cfgBLUFOR.hpp"    // US
};