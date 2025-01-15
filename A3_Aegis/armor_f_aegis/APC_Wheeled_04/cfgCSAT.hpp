/* Argana */
class Aegis_O_A_APC_Wheeled_04_export_F: APC_Wheeled_04_export_base_F
{
    author = $STR_A3_A_AveryTheKitty_Lukin_Lakarak;
    displayName = $STR_A3_A_CfgVehicles_O_A_APC_Wheeled_04_export_F0;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_O_A_APC_Wheeled_04_export_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TEast;
	faction = OPF_A_F;
	crew = O_A_crew_F;
	typicalCargo[] = {O_A_soldier_F};
    textureList[] = {Hex,1};
	hiddenSelectionsTextures[] =
    {
        "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\Data\APC_Wheeled_04_export_body_hex_CO.paa",
        "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\Data\APC_Wheeled_04_body2_hex_CO.paa",
        "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\data\btr100a_turret_hex_co.paa",
        "\A3_Aegis\Armor_F_Aegis\Data\camonet_RUS_Green_CO.paa",
        "\A3_Aegis\Armor_F_Aegis\Data\cage_RUkhk_CO.paa"
    };
    /* Inventory */
	class TransportWeapons
	{
		weap_xx(arifle_CTAR_blk_F,2);
		weap_xx(arifle_CTARS_blk_F,1);
		weap_xx(launch_RPG32_F,1);
	};
	class TransportMagazines
	{
		mag_xx(30Rnd_580x42_Mag_F,12);
		mag_xx(100Rnd_580x42_Mag_F,8);
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
	class TransportBackpacks
	{
		bag_xx(B_FieldPack_ocamo,2);
	};
	#include "SimpleObject.hpp"
};