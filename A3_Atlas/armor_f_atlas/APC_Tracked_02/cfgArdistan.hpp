class Atlas_I_AR_APC_Tracked_02_30mm_lxWS: O_T_APC_Tracked_02_30mm_lxWS
{
    editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_AR_APC_Tracked_02_30mm_lxWS.jpg";
    displayName = $STR_A3_A_CfgVehicles_O_R_APC_Tracked_02_30mm_lxWS0;
	scope = public;
	scopeCurator = public;
	side = TGuerrila;
	faction = Atlas_IND_AR_F;
	crew = Atlas_I_AR_Crew_F;
	typicalCargo[] = {Atlas_I_AR_Crew_F};
	textureList[] = {ardistan,1};
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Armor_F_Atlas\APC_Tracked_02\Data\APC_Tracked_02_ext_01_ard_CO.paa",
		"\A3_Atlas\Armor_F_Atlas\APC_Tracked_02\Data\APC_Tracked_02_ext_02_ard_CO.paa",
        "\A3_Aegis\Armor_F_Aegis\APC_Tracked_02\Data\apc_tracked_02_ext_03_RUkhk_co.paa",
        "\A3_Atlas\Armor_F_Atlas\APC_Tracked_02\data\apc_tracked_02_30mm_ard_CO.paa",
        "\A3_Aegis\Armor_F_Aegis\Data\camonet_RUS_green_CO.paa",
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
		mag_xx(30Rnd_545x39_Black_Mag_F,12);
		mag_xx(Aegis_45Rnd_545x39_Mag_Green_F,12);
		mag_xx(HandGrenade,6);
		mag_xx(MiniGrenade,6);
		mag_xx(1Rnd_HE_Grenade_shell,6);
		mag_xx(1Rnd_Smoke_Grenade_shell,3);
		mag_xx(1Rnd_SmokeBlue_Grenade_shell,3);
		mag_xx(1Rnd_SmokeOrange_Grenade_shell,3);
		mag_xx(1Rnd_SmokePurple_Grenade_shell,3);
		mag_xx(SmokeShell,8);
		mag_xx(SmokeShellBlue,8);
		mag_xx(SmokeShellOrange,8);
		mag_xx(SmokeShellPurple,8);
		mag_xx(RPG7_F,8);
		mag_xx(Titan_AA,2);
	};
	class TransportBackpacks
	{
		bag_xx(B_FieldPack_ardi,2);
	};
};