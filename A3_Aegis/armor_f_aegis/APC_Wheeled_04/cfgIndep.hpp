/* AAF */
class Aegis_I_APC_Wheeled_04_cannon_v2_F: APC_Wheeled_04_base_v2_F
{
    author = $STR_A3_A_AveryTheKitty_and_Lakarak;
	displayName = $STR_A3_A_CfgVehicles_I_APC_Wheeled_04_base_v2_F0;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_I_APC_Wheeled_04_cannon_v2_F.jpg";
	scope = protected;
	scopeCurator = protected;
	side = TGuerrila;
	faction = IND_F;
	crew = I_crew_F;
	typicalCargo[] = {I_crew_F};
    textureList[] = {Indep,1};
	hiddenSelectionsTextures[] =
    {
        "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\Data\APC_Wheeled_04_body_AAF_CO.paa",
        "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\Data\APC_Wheeled_04_body2_AAF_CO.paa",
        "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\Data\apc_wheeled_04_sprut_turret_AAF_co.paa"
    };
    /* Inventory */
	class TransportWeapons
	{
		weap_xx(arifle_Mk20C_F,2);
	};
	class TransportMagazines
	{
		mag_xx(30Rnd_556x45_Stanag,4);
		mag_xx(SmokeShell,2);
		mag_xx(SmokeShellGreen,2);
	};
	class TransportItems
	{
		item_xx(FirstAidKit,10);
		item_xx(Toolkit,1);
		item_xx(Medikit,1);
	};
	class TransportBackpacks
	{
		bag_xx(B_AssaultPack_dgtl,2);
	};
	/* Loadout Change - Remove barrel launched ATGMs + Yellow Tracer */
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			magazines[] =
			{
				16Rnd_125mm_APFSDS_T_Yellow,
				8Rnd_125mm_HE_T_Yellow,
				12Rnd_125mm_HEAT_T_Yellow,
				2000Rnd_762x51_Belt_Yellow,
			};
		};
	};
	#include "SimpleObject.hpp"
};
class Aegis_I_APC_Wheeled_04_export_F: APC_Wheeled_04_export_base_F
{
    author = $STR_A3_A_AveryTheKitty_Lukin_Lakarak;
    displayName = $STR_A3_A_CfgVehicles_I_APC_Wheeled_04_export_F0;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_I_APC_Wheeled_04_export_F.jpg";
	scope = protected;
	scopeCurator = protected;
	side = TGuerrila;
	faction = IND_F;
	crew = I_crew_F;
	typicalCargo[] = {I_crew_F};
    textureList[] = {Indep,1};
	hiddenSelectionsTextures[] =
    {
        "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\Data\APC_Wheeled_04_body_AAF_CO.paa",
        "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\Data\APC_Wheeled_04_body2_AAF_CO.paa",
        "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\data\btr100a_turret_AAF_co.paa"
    };
	/* Inventory */
	class TransportMagazines
	{
		mag_xx(30Rnd_556x45_Stanag,12);
		mag_xx(200Rnd_65x39_cased_Box,6);
		mag_xx(HandGrenade,6);
		mag_xx(MiniGrenade,6);
		mag_xx(1Rnd_HE_Grenade_shell,6);
		mag_xx(1Rnd_Smoke_Grenade_shell,3);
		mag_xx(1Rnd_SmokeGreen_Grenade_shell,3);
		mag_xx(1Rnd_SmokeOrange_Grenade_shell,3);
		mag_xx(1Rnd_SmokePurple_Grenade_shell,3);
		mag_xx(SmokeShell,8);
		mag_xx(SmokeShellGreen,8);
		mag_xx(SmokeShellOrange,8);
		mag_xx(SmokeShellPurple,8);
		mag_xx(NLAW_F,5);
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
	class TransportWeapons
	{
		weap_xx(arifle_Mk20_F,2);
		weap_xx(LMG_Mk200_F,1);
		weap_xx(launch_NLAW_F,1);
	};
	class TransportBackpacks
	{
		bag_xx(B_AssaultPack_dgtl,2);
	};
	/* Loadout Change - Appropriate Tracer */
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			magazines[] =
			{
				340Rnd_30mm_HE_shells_Tracer_Yellow,
				160Rnd_30mm_APFSDS_shells_Tracer_Yellow,
				2000Rnd_762x51_Belt_Yellow,
				SmokeLauncherMag
			};
		};
	};
	#include "SimpleObject.hpp"
};