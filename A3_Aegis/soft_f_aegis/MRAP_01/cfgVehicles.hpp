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
	class MRAP_01_base_F: Car_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret{};
		};

        /* Liveries */
		class TextureSources
		{
			class Indep
			{
				DisplayName = $STR_A3_TEXTURESOURCES_INDEP0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Soft_F_Aegis\MRAP_01\Data\MRAP_01_base_INDP_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\MRAP_01\Data\MRAP_01_adds_INDP_CO.paa",
					"\A3\Data_F\Vehicles\Turret_INDP_CO.paa"
				};
				factions[] = {};
			};
			class wdl
			{
				DisplayName = $STR_A3_A_TEXTURESOURCES_WOODLAND0;
				author = $STR_A3_A_BranFlakes;
				textures[] =
				{
        			"\A3_Aegis\Soft_F_Aegis\MRAP_01\Data\MRAP_01_base_wdl_CO.paa",
        			"\A3\Soft_F_Exp\MRAP_01\Data\MRAP_01_adds_olive_CO.paa",
        			"\A3\Data_F_Exp\Vehicles\Turret_olive_CO.paa"
    			};
				factions[] = {};
			};
		};
	};
	class MRAP_01_gmg_base_F: MRAP_01_base_F
	{
        /* Turrets */
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
                /* Weapons & Ammunition */
				magazines[] = {mag_2(64Rnd_40mm_G_belt)};
			};
		};
	};

    /* Factions */
    #include "cfgBLUFOR.hpp"    // US
};