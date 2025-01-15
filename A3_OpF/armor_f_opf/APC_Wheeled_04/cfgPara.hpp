/* Paramiliatry */
class Opf_O_P_APC_Wheeled_04_export_F: APC_Wheeled_04_export_base_F
{
    author = $STR_A3_A_AveryTheKitty_Lukin_Lakarak;
    displayName = $STR_A3_A_CfgVehicles_O_A_APC_Wheeled_04_export_F0;
	editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\Opf_O_P_APC_Wheeled_04_export_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TEast;
	faction = Opf_OPF_P_F;
	crew = Opf_O_P_M_Crew_F;
	typicalCargo[] = {Opf_O_P_M_Soldier_1_F};
    textureList[] = {Para_01,1};
	hiddenSelectionsTextures[] =
    {
        "\A3_Opf\Armor_F_Opf\APC_Wheeled_04\Data\APC_Wheeled_04_body_export_paramilitary_co.paa",
		"\A3_Opf\Armor_F_Opf\APC_Wheeled_04\Data\APC_Wheeled_04_body2_paramilitary_co.paa",
		"\A3_Opf\Armor_F_Opf\APC_Wheeled_04\Data\APC_Wheeled_04_export_Para_co.paa",
        "\A3_Aegis\Armor_F_Aegis\Data\camonet_RUS_Green_CO.paa",
        "\A3_Aegis\Armor_F_Aegis\Data\cage_RUkhk_CO.paa"
    };
    /* Inventory */
	class TransportWeapons
	{
		weap_xx(Aegis_arifle_AKM74_F,2);
		weap_xx(Aegis_arifle_RPK74M_F,1);
		weap_xx(Aegis_launch_RPG7M_F,1);
	};
	class TransportMagazines
	{
		mag_xx(30Rnd_545x39_Mag_F,12);
		mag_xx(Aegis_45Rnd_545x39_Mag_Green_F,8);
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
		mag_xx(RPG7_F,5);
	};
	class TransportBackpacks
	{
		bag_xx(B_FieldPack_green_F,2);
	};
};