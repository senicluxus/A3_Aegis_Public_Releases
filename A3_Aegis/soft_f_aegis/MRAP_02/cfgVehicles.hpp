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
	class MRAP_02_base_F: Car_F
	{
        /* Inventory */
		class TransportMagazines
		{
			delete _xx_HandGrenade;
		    mag_xx(HandGrenade_East,10);
			delete _xx_16Rnd_9x21_Mag;
			mag_xx(17Rnd_9x21_Mag,12);
		};

        /* Liveries */
		class TextureSources
		{
			class Green
			{
				displayName = $STR_A3_TextureSources_Green0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Soft_F_Aegis\MRAP_02\Data\MRAP_02_ext_01_RUkhk_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\MRAP_02\Data\MRAP_02_ext_02_RUkhk_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\UGV_01\Data\Turret_RUkhk_CO.paa"
				};
				factions[] = {};
			};
			/*class Rus
			{
				displayName = $STR_A3_A_TextureSources_Rus0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Soft_F_Aegis\MRAP_02\Data\MRAP_02_ext_01_RUcamo_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\MRAP_02\Data\MRAP_02_ext_02_RUcamo_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\UGV_01\Data\Turret_RUcamo_CO.paa"
				};
				factions[] = {};
			};*/
		};
	};
	class MRAP_02_hmg_base_F: MRAP_02_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret{};
		};
	};
	class MRAP_02_gmg_base_F: MRAP_02_hmg_base_F
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
	class O_MRAP_02_F;
	class O_MRAP_02_hmg_F;
	class O_MRAP_02_gmg_F;
	class O_T_MRAP_02_ghex_F: MRAP_02_base_F
	{
        /* Inventory */
		class TransportMagazines
		{
			mag_xx(100Rnd_580x42_Mag_F,8);
			delete _xx_HandGrenade;
		    mag_xx(HandGrenade_East,10);
			delete _xx_16Rnd_9x21_Mag;
			mag_xx(17Rnd_9x21_Mag,12);
		};
	};
	class O_T_MRAP_02_hmg_ghex_F: MRAP_02_hmg_base_F
	{
        /* Inventory */
		class TransportMagazines
		{
			mag_xx(100Rnd_580x42_Mag_F,8);
			delete _xx_HandGrenade;
		    mag_xx(HandGrenade_East,10);
			delete _xx_16Rnd_9x21_Mag;
			mag_xx(17Rnd_9x21_Mag,12);
		};
	};
	class O_T_MRAP_02_gmg_ghex_F: MRAP_02_gmg_base_F
	{
        /* Inventory */
		class TransportMagazines
		{
			mag_xx(100Rnd_580x42_Mag_F,8);
			delete _xx_HandGrenade;
		    mag_xx(HandGrenade_East,10);
			delete _xx_16Rnd_9x21_Mag;
			mag_xx(17Rnd_9x21_Mag,12);
		};
	};
    #include "cfgRUS.hpp"   // Russia
	#include "cfgRaven.hpp" // Raven Security

    /* Deprecated */
    #include "deprecated.hpp"
};