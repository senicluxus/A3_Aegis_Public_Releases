/* SFIA */
class Aegis_O_SFIA_APC_Wheeled_04_export_F: APC_Wheeled_04_export_base_F
{
    author = $STR_A3_A_AveryTheKitty_Lukin_Lakarak;
    displayName = $STR_A3_A_CfgVehicles_O_A_APC_Wheeled_04_export_F0;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_O_SFIA_APC_Wheeled_04_export_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TEast;
	faction = OPF_SFIA_lxWS;
	crew = O_SFIA_crew_lxWS;
	typicalCargo[] = {O_SFIA_soldier_lxWS};
    textureList[] = {SFIA,1};
	hiddenSelectionsTextures[] =
    {
        "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\Data\APC_Wheeled_04_body_export_SFIA_CO.paa",
        "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\Data\APC_Wheeled_04_body2_SFIA_CO.paa",
        "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\data\btr100a_turret_SFIA_co.paa"
    };
    /* Inventory */
	class TransportWeapons
	{
		weap_xx(arifle_Galat_lxWS,2);
		weap_xx(arifle_SLR_lxWS,1);
		weap_xx(launch_RPG32_F,1);
	};
	class TransportMagazines
	{
		mag_xx(30Rnd_762x39_Mag_F,12);
		mag_xx(20Rnd_762x51_slr_lxWS,8);
		mag_xx(HandGrenade_Guer,6);
		mag_xx(MiniGrenade,6);
		mag_xx(SmokeShell,8);
		mag_xx(SmokeShellRed,8);
		mag_xx(SmokeShellYellow,8);
		mag_xx(SmokeShellOrange,8);
		mag_xx(1Rnd_HE_Grenade_shell,6);
		mag_xx(1Rnd_Smoke_Grenade_shell,3);
		mag_xx(1Rnd_SmokeYellow_Grenade_shell,3);
		mag_xx(1Rnd_SmokeOrange_Grenade_shell,3);
		mag_xx(1Rnd_SmokeRed_Grenade_shell,3);
		mag_xx(RPG32_F,5);
		mag_xx(RPG32_HE_F,2);
		mag_xx(Titan_AT,2);
		mag_xx(Titan_AA,2);
	};
	#include "SimpleObject.hpp"
};
class Aegis_O_SFIA_APC_Wheeled_04_cannon_v2_F: APC_Wheeled_04_base_v2_F
{
    author = $STR_A3_A_AveryTheKitty_and_Lakarak;
	displayName = $STR_A3_A_CfgVehicles_O_APC_Wheeled_04_base_v2_F0;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_O_SFIA_APC_Wheeled_04_cannon_v2_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TEast;
	faction = OPF_SFIA_lxWS;
	crew = O_SFIA_crew_lxWS;
	typicalCargo[] = {O_SFIA_crew_lxWS};
    textureList[] = {SFIA,1};
	hiddenSelectionsTextures[] =
    {
        "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\Data\APC_Wheeled_04_body_SFIA_CO.paa",
        "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\Data\APC_Wheeled_04_body2_SFIA_CO.paa",
        "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\Data\apc_wheeled_04_sprut_turret_SFIA_co.paa"
    };
    /* Inventory */
	class TransportWeapons
	{
		weap_xx(arifle_Galat_lxWS,2);
	};
	class TransportMagazines
	{
		mag_xx(30Rnd_762x39_Mag_F,2);
		mag_xx(SmokeShell,2);
		mag_xx(SmokeShellRed,2);
	};
	class TransportBackpacks
    {
        bag_xx(B_TacticalPack_blk,2);
    };

	/* Loadout Change - Remove barrel launched ATGMs */
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			magazines[] =
			{
				16Rnd_125mm_APFSDS_T_Green,
				8Rnd_125mm_HE_T_Green,
				12Rnd_125mm_HEAT_T_Green,
				2000Rnd_762x51_Belt_Green,
			};
		};
	};
	#include "SimpleObject.hpp"
};
