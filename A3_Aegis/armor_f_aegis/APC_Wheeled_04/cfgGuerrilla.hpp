/* FIA */
class Aegis_I_G_APC_Wheeled_04_export_F: Aegis_I_APC_Wheeled_04_export_F
{
    author = $STR_A3_A_AveryTheKitty_Lukin_Lakarak;
    displayName = $STR_A3_A_CfgVehicles_I_APC_Wheeled_04_export_F0;
	features = "Randomization: Yes, 4 skins, disabled by: this setVariable [""BIS_enableRandomization"",false];						<br />Specific skin may be set by: this setVariable [""color"",X]; (the number ranges from 0 to 3)";
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_I_G_APC_Wheeled_04_export_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TGuerrila;
	faction = IND_G_F;
	crew = I_G_crew_F;
	typicalCargo[] = {I_G_crew_F};
    textureList[] = 
    {
        Guerrilla_01,1,
        Guerrilla_02,1,
        Guerrilla_03,1,
        Loyalist,0.2
    };
	hiddenSelectionsTextures[] =
    {
        "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\Data\APC_Wheeled_04_body_export_FIA_CO.paa",
        "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\Data\APC_Wheeled_04_body2_FIA_CO.paa",
        "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\data\btr100a_turret_FIA_co.paa"
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
	};
	class TransportItems
	{
		item_xx(FirstAidKit,10);
		item_xx(Toolkit,1);
		item_xx(Medikit,1);
	};
	class TransportWeapons
	{
		weap_xx(arifle_TRG21_F,2);
		weap_xx(LMG_Mk200_F,1);
		weap_xx(launch_NLAW_F,1);
	};
	class TransportBackpacks
	{
		bag_xx(B_TacticalPack_blk,2);
	};
	#include "SimpleObject.hpp"
	class EventHandlers: EventHandlers
		{
			postinit="if (local (_this select 0)) then {[(_this select 0), """", [], true] call bis_fnc_initVehicle;};";
		};
};
class Aegis_B_G_APC_Wheeled_04_export_F: Aegis_I_G_APC_Wheeled_04_export_F
{
    author = $STR_A3_A_AveryTheKitty_Lukin_Lakarak;
    side = TWest;
	faction = BLU_G_F;
	crew = B_G_crew_F;
	typicalCargo[] = {B_G_crew_F};
};
class Aegis_O_G_APC_Wheeled_04_export_F: Aegis_I_G_APC_Wheeled_04_export_F
{
    author = $STR_A3_A_AveryTheKitty_Lukin_Lakarak;
    side = TEast;
	faction = OPF_G_F;
	crew = O_G_crew_F;
	typicalCargo[] = {O_G_crew_F};
};