class CfgVehicles
{
	/* Inheritance Tree */
	class Car;
	class Car_F: Car
	{
		class NewTurret;
	};
	class Wheeled_APC_F: Car_F
	{
		class NewTurret;
		class Turrets
		{
			class MainTurret: NewTurret{};
		};
		class CommanderOptics;
	};

	class APC_Wheeled_02_base_F: Wheeled_APC_F
	{
        /* Turrets */
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
                /* Weapons & Magazines */
				magazines[] =
				{
					mag_2(64Rnd_40mm_G_belt),
					mag_4(200Rnd_127x99_mag_Tracer_Green),
					SmokeLauncherMag
				};
			};
			class CommanderOptics: CommanderOptics{};
		};

        /* Inventory */
		class TransportMagazines
		{
			mag_xx(30Rnd_65x39_caseless_green,12);
			mag_xx(150Rnd_762x54_Box,4);
			mag_xx(HandGrenade_East,6);
			mag_xx(MiniGrenade,6);
			mag_xx(1Rnd_HE_Grenade_shell,6);
			mag_xx(1Rnd_Smoke_Grenade_shell,3);
			mag_xx(1Rnd_SmokeRed_Grenade_shell,3);
			mag_xx(1Rnd_SmokeOrange_Grenade_shell,3);
			mag_xx(1Rnd_SmokeYellow_Grenade_shell,3);
			mag_xx(SmokeShell,8);
			mag_xx(SmokeShellRed,8);
			mag_xx(SmokeShellOrange,8);
			mag_xx(SmokeShellYellow,8);
			mag_xx(RPG32_F,5);
			mag_xx(RPG32_HE_F,2);
			mag_xx(Titan_AT,2);
			mag_xx(Titan_AP,2);
			mag_xx(Titan_AA,2);
		};
		class TransportItems
		{
			item_xx(FirstAidKit,10);
			item_xx(Toolkit,1);
			item_xx(Medikit,1);
		};
		class TransportBackpacks
		{
			bag_xx(B_FieldPack_ocamo,2);
		};

        /* Liveries */
		class TextureSources
		{
			class Hex
			{
				factions[] = {};
			};
			class GreenHex
			{
				factions[] = {};
			};
			class Green
			{
				displayName = $STR_A3_TEXTURESOURCES_GREEN0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Armor_F_Aegis\APC_Wheeled_02\Data\APC_Wheeled_02_ext_01_RUkhk_CO.paa",
					"\A3_Aegis\Armor_F_Aegis\APC_Wheeled_02\Data\APC_Wheeled_02_ext_02_RUkhk_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\UGV_01\Data\Turret_RUkhk_CO.paa",
					"\A3_Aegis\Armor_F_Aegis\Data\camonet_RUS_green_CO.paa",
					"\A3_Aegis\Armor_F_Aegis\Data\cage_RUkhk_CO.paa"
				};
				factions[] = {};
			};
		};
	};
	class APC_Wheeled_02_base_v2_F: APC_Wheeled_02_base_F
	{
        /* Turrets */
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
                /* Weapons & Ammunition */
				magazines[] =
				{
					mag_2(64Rnd_40mm_G_belt),
					mag_4(200Rnd_127x99_mag_Tracer_Green),
					SmokeLauncherMag
				};
			};
		};

		animationList[] =
		{
			showBags,0.67,
			showCanisters,0.33,
			showTools,0.83,
			showCamonetHull,0,
			showSLATHull,0
		};
	};

    /* Factions */
    #include "cfgOPFOR.hpp" // IAF, China, & Argana
    #include "cfgRUS.hpp"   // Russia
};