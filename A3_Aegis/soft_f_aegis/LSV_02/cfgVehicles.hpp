class CfgVehicles
{
	/* Inheritance Tree */
	class LandVehicle;
	class Car: LandVehicle
	{
		class NewTurret;
	};
	class Car_F: Car
	{
		class Turrets
		{
			class MainTurret: NewTurret{};
		};
	};

    /* Bases */
	class LSV_02_base_F: Car_F
	{
        /* Inventory */
		class TransportMagazines
		{
			delete _xx_HandGrenade;
		    mag_xx(HandGrenade_East,10);
			delete _xx_16Rnd_9x21_Mag;
			mag_xx(17Rnd_9x21_Mag,12);
		};

		hiddenSelectionsTextures[] =
		{
			"\A3_Aegis\Soft_F_Aegis\LSV_02\Data\CSAT_LSV_01_black_CO.paa",
			"\A3_Aegis\Soft_F_Aegis\LSV_02\Data\CSAT_LSV_02_black_CO.paa",
			"\A3_Aegis\Soft_F_Aegis\LSV_02\Data\CSAT_LSV_03_black_CO.paa"
		};
		class CargoTurret;
		class Turrets: Turrets
		{
			class CargoTurret_01: CargoTurret{};
			class CargoTurret_02: CargoTurret_01{};
			class CargoTurret_03: CargoTurret_01{};
			class CargoTurret_04: CargoTurret_01{};
			class CargoTurret_05: CargoTurret_01{};
		};

        /* Liveries */
		class TextureSources
		{
			class Black
			{
				textures[] =
				{
					"\A3_Aegis\Soft_F_Aegis\LSV_02\Data\CSAT_LSV_01_black_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\LSV_02\Data\CSAT_LSV_02_black_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\LSV_02\Data\CSAT_LSV_03_black_CO.paa",
					"\A3\Weapons_F_Tank\Launchers\Vorona\Data\Vorona_green_F_CO.paa",
					"\A3\Weapons_F_Tank\Launchers\Vorona\Data\Vorona_green_F_CO.paa"
				};
				factions[] = {};
			};
			class GreenHex
			{
				textures[] =
				{
					"\A3_Aegis\Soft_F_Aegis\LSV_02\Data\CSAT_LSV_01_ghex_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\LSV_02\Data\CSAT_LSV_02_ghex_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\LSV_02\Data\CSAT_LSV_03_ghex_CO.paa",
					"\A3\Weapons_F_Tank\Launchers\Vorona\Data\Vorona_green_F_CO.paa",
					"\A3\Weapons_F_Tank\Launchers\Vorona\Data\Vorona_green_F_CO.paa"
				};
				factions[] = {};
			};
			class Arid
			{
				displayName = $STR_A3_TEXTURESOURCES_HEX0;
				textures[] =
				{
					"\A3_Aegis\Soft_F_Aegis\LSV_02\Data\CSAT_LSV_01_arid_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\LSV_02\Data\CSAT_LSV_02_arid_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\LSV_02\Data\CSAT_LSV_03_arid_CO.paa",
					"\A3\Weapons_F_Tank\Launchers\Vorona\Data\Vorona_F_CO.paa",
					"\A3\Weapons_F_Tank\Launchers\Vorona\Data\Vorona_F_CO.paa"
				};
				factions[] = {};
			};
			class Green
			{
				displayName = $STR_A3_TEXTURESOURCES_GREEN0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Soft_F_Aegis\LSV_02\Data\CSAT_LSV_01_RUkhk_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\LSV_02\Data\CSAT_LSV_02_RUkhk_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\LSV_02\Data\CSAT_LSV_03_RUkhk_CO.paa",
					"\A3\Weapons_F_Tank\Launchers\Vorona\Data\Vorona_green_F_CO.paa",
					"\A3\Weapons_F_Tank\Launchers\Vorona\Data\Vorona_green_F_CO.paa"
				};
				factions[] = {};
			};
		};

        /* Damage
        - We need to fix vanilla's darkness issue
        */
		class Damage
		{
			tex[] = {};
			mat[] =
			{
				"A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01.rvmat",
				"A3_Aegis\Soft_F_Aegis\LSV_02\Data\CSAT_LSV_01_damage.rvmat",
				"A3_Aegis\Soft_F_Aegis\LSV_02\Data\CSAT_LSV_01_destruct.rvmat",

				"A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02.rvmat",
				"A3_Aegis\Soft_F_Aegis\LSV_02\Data\CSAT_LSV_02_damage.rvmat",
				"A3_Aegis\Soft_F_Aegis\LSV_02\Data\CSAT_LSV_02_destruct.rvmat",

				"A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03.rvmat",
				"A3_Aegis\Soft_F_Aegis\LSV_02\Data\CSAT_LSV_03_damage.rvmat",
				"A3_Aegis\Soft_F_Aegis\LSV_02\Data\CSAT_LSV_03_destruct.rvmat"
			};
		};

        /* TFAR */
		tf_hasLRradio = true;
		tf_isolatedAmount = 0.7;
	};
	class LSV_02_armed_base_F: LSV_02_base_F
	{
        /* Turrets */
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
                /* Weapons & Ammunition */
				magazines[] = {mag_2(1000Rnd_762x51_Belt_T_Green_Splash)};
			};
			class CargoTurret_01: CargoTurret_01{};
			class CargoTurret_02: CargoTurret_02{};
			class CargoTurret_03: CargoTurret_03{};
			class CargoTurret_04: CargoTurret_04{};
			class CargoTurret_05: CargoTurret_05{};
		};
	};
	class LSV_02_unarmed_base_F;
	class LSV_02_AT_base_F;

	/* Factions */
    #include "cfgOPFOR.hpp" // IAF, China & Argana
	#include "cfgViper.hpp" // Viper
    #include "cfgRUS.hpp"   // Russia
};