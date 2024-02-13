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
	class Heli_Transport_01_base_F: Helicopter_Base_H
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
				factions[] = {};
			};
			class Grey
			{
				displayName = $STR_A3_TextureSources_Grey0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Air_F_Aegis\Heli_Transport_01\Data\Heli_Transport_01_ext01_grey_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Heli_Transport_01\Data\Heli_Transport_01_ext02_grey_CO.paa"
				};
				factions[] = {};
			};
			class Sand
			{
				displayName = $STR_A3_TEXTURESOURCES_SAND0;
				author = $STR_A3_A_Ravenholme;
				textures[] = 
				{
					"\lxWS\air_f_lxWS\Data\NATO\lxWS_Heli_Transport_01_ext01_sand_CO.paa",
					"\lxWS\air_f_lxWS\Data\NATO\lxWS_Heli_Transport_01_ext02_sand_CO.paa"
				};
				factions[] = {};
			};
		};
	};
	class Heli_Transport_01_medevac_base_F: Heli_Transport_01_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgVehicles_Heli_Transport_01_medevac_base_F0;
		supplyRadius = 5;
		attendant = true;
		threat[] =
        {
            0.0,    // Soft
            0.0,    // Armor
            0.0     // Air
        };
	    availableForSupportTypes[] = {Transport};
	};

    /* Factions */
	#include "cfgBLUFOR.hpp"    // US
	class B_CTRG_Heli_Transport_01_sand_F: Heli_Transport_01_base_F
	{
		displayName = $STR_A3_CfgVehicles_Heli_Transport_01_base_F0;
		typicalCargo[] = {B_CTRG_Soldier_v2_F};

        /* Inventory */
		class TransportMagazines
		{
			mag_xx(SmokeShell,2);
			mag_xx(SmokeShellBlue,2);
			delete _xx_30Rnd_556x45_Stanag;
			mag_xx(30Rnd_556x45_Stanag_red,4);
		};
	};
	class B_CTRG_Heli_Transport_01_tropic_F: Heli_Transport_01_base_F
	{
		displayName = $STR_A3_CfgVehicles_Heli_Transport_01_base_F0;
    	faction = BLU_CTRG_tna_F;
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret{};
			class MainTurret: MainTurret
			{
				gunnerType = B_T_Helicrew_F;
			};
			class RightDoorGun: RightDoorGun
			{
				gunnerType = B_T_Helicrew_F;
			};
		};

        /* Inventory */
		class TransportMagazines
		{
			mag_xx(SmokeShell,2);
			mag_xx(SmokeShellBlue,2);
			delete _xx_30Rnd_556x45_Stanag;
			mag_xx(30Rnd_556x45_Stanag_red,4);
		};
	};

    /* Deprecated */
    #include "deprecated.hpp"
};