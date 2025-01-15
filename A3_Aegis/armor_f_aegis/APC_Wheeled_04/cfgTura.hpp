/* Tura */
class Aegis_B_Tura_APC_Wheeled_04_export_F: Aegis_O_SFIA_APC_Wheeled_04_export_F
{
    author = $STR_A3_A_AveryTheKitty_Lukin_Lakarak;
    displayName = $STR_A3_A_CfgVehicles_O_A_APC_Wheeled_04_export_F0;
	features = "Randomization: Yes, 4 skins, disabled by: this setVariable [""BIS_enableRandomization"",false];						<br />Specific skin may be set by: this setVariable [""color"",X]; (the number ranges from 0 to 3)";
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_B_Tura_APC_Wheeled_04_export_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TWest;
	faction = BLU_TURA_lxWS;
	crew = B_Tura_deserter_lxWS;
	typicalCargo[] = {B_Tura_deserter_lxWS};
    textureList[] = 
    {
        Guerrilla_04,1,
        Guerrilla_05,1,
        Sand,1,
        SFIA,1
    };
	hiddenSelectionsTextures[] =
    {
        "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\Data\APC_Wheeled_04_body_export_Tura_CO.paa",
        "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\Data\APC_Wheeled_04_body2_Tura_CO.paa",
        "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\data\btr100a_turret_Tura_co.paa"
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
	};
	class EventHandlers: EventHandlers
		{
			postinit="if (local (_this select 0)) then {[(_this select 0), """", [], true] call bis_fnc_initVehicle;};";
		};
};
class Aegis_I_Tura_APC_Wheeled_04_export_F: Aegis_B_Tura_APC_Wheeled_04_export_F
{
    side = TGuerrila;
	faction = IND_TURA_lxWS;
	crew = I_Tura_deserter_lxWS;
    typicalCargo[] = {I_Tura_deserter_lxWS};
};
class Aegis_O_Tura_APC_Wheeled_04_export_F: Aegis_B_Tura_APC_Wheeled_04_export_F
{
    side = TEast;
	faction = OPF_TURA_lxWS;
	crew = O_Tura_deserter_lxWS;
    typicalCargo[] = {O_Tura_deserter_lxWS};
};