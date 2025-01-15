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
			class MainTurret: NewTurret
			{
				class ViewOptics;
			};
		};
	};

    /* Bases */
	class LSV_01_base_F: Car_F
	{
		class CargoTurret;
		class Turrets: Turrets
		{
			class CargoTurret_02: CargoTurret{};
			class CargoTurret_03: CargoTurret_02{};
		};

        /* Liveries */
		class TextureSources
		{
			class Black
			{
				textures[] =
				{
					"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_black_CO.paa",
					"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_black_CO.paa",
					"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_black_CO.paa",
					"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_black_CO.paa",
					"\A3_Aegis\Weapons_F_Aegis\Launchers\Titan\Data\Launcher_blk_CO.paa",
					"\A3_Aegis\Weapons_F_Aegis\Launchers\Titan\Data\TubeM_blk_CO.paa"
				};
				factions[] = {};
			};
			class Olive
			{
				textures[] =
				{
					"\A3_Aegis\Soft_F_Aegis\LSV_01\Data\NATO_LSV_01_olive_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\LSV_01\Data\NATO_LSV_02_olive_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\LSV_01\Data\NATO_LSV_03_olive_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\LSV_01\Data\NATO_LSV_Adds_olive_CO.paa",
					"\A3\Weapons_F_Exp\Launchers\Titan\Data\launch_B_Titan_tna_F_01_CO.paa",
					"\A3\Weapons_F_Exp\Launchers\Titan\Data\launch_B_Titan_short_tna_F_02_CO.paa"
				};
				factions[] = {};
			};
			class wdl
			{
				DisplayName = $STR_A3_A_TEXTURESOURCES_WOODLAND0;
				author = $STR_A3_A_BranFlakes;
				textures[] =
				{
					"\A3_Aegis\Soft_F_Aegis\LSV_01\Data\NATO_LSV_01_wdl_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\LSV_01\Data\NATO_LSV_02_olive_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\LSV_01\Data\NATO_LSV_03_olive_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\LSV_01\Data\NATO_LSV_Adds_olive_CO.paa",
					"\A3\Weapons_F_Exp\Launchers\Titan\Data\launch_B_Titan_tna_F_01_CO.paa",
					"\A3\Weapons_F_Exp\Launchers\Titan\Data\launch_B_Titan_short_tna_F_02_CO.paa"
				};
				factions[] = {};
			};
			class Sand
			{
				factions[] = {};
			};
			class Dazzle
			{
				displayName = $STR_A3_A_TEXTURESOURCES_TROPIC0;
				textures[] =
				{
					"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_dazzle_CO.paa",
					"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_olive_CO.paa",
					"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_olive_CO.paa",
					"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_olive_CO.paa",
					"\A3\Weapons_F_Exp\Launchers\Titan\Data\launch_B_Titan_tna_F_01_CO.paa",
					"\A3\Weapons_F_Exp\Launchers\Titan\Data\launch_B_Titan_short_tna_F_02_CO.paa"
				};
				factions[] = {};
			};
			class Dazzle_02
			{
				displayName = $STR_A3_TEXTURESOURCES_SAND0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Soft_F_Aegis\LSV_01\Data\NATO_LSV_01_dazzle_CO.paa",
					"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_sand_CO.paa",
					"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_sand_CO.paa",
					"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_sand_CO.paa",
					"\A3\Weapons_F_Beta\Launchers\Titan\Data\Launcher_CO.paa",
					"\A3\Weapons_F_Beta\Launchers\Titan\Data\TubeM_CO.paa"
				};
				factions[] = {};
			};
			class BAF
			{
				displayName = $STR_A3_A_TEXTURESOURCES_BAF0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Soft_F_Aegis\LSV_01\Data\NATO_LSV_01_BAF_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\LSV_01\Data\NATO_LSV_02_BAF_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\LSV_01\Data\NATO_LSV_03_BAF_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\LSV_01\Data\NATO_LSV_Adds_BAF_CO.paa",
					"\A3\Weapons_F_Exp\Launchers\Titan\Data\launch_B_Titan_tna_F_01_CO.paa",
					"\A3\Weapons_F_Exp\Launchers\Titan\Data\launch_B_Titan_short_tna_F_02_CO.paa"
				};
				factions[] = {};
			};
		};
        
        /* TFAR */
		tf_hasLRradio = true;
		tf_isolatedAmount = 0.7;
	};
	class LSV_01_armed_base_F: LSV_01_base_F
	{
        /* Turrets */
		class Turrets: Turrets
		{
			class TopTurret: MainTurret
			{
                /* Optics */
				class ViewOptics: ViewOptics
				{
					initFov = 0.4375;
					minFov = 0.03482;
					maxFov = 0.4375;
					visionMode[] =
					{
						Normal,
						NVG
					};
				};
			};
			class CodRiverTurret: MainTurret{};
			class CargoTurret_02: CargoTurret_02{};
			class CargoTurret_03: CargoTurret_03{};
		};
	};
	class LSV_01_unarmed_base_F: LSV_01_base_F{};
	class LSV_01_light_base_F: LSV_01_base_F{};
	class LSV_01_AT_base_F: LSV_01_base_F
	{
		class Turrets: Turrets
		{
			class TopTurret: MainTurret{};
			class CodRiverTurret: MainTurret{};
			class CargoTurret_02: CargoTurret_02{};
			class CargoTurret_03: CargoTurret_03{};
		};
	};

    /* Factions */
    #include "cfgBLUFOR.hpp"    // US & BAF
    #include "cfgCTRG.hpp"      // CTRG
};