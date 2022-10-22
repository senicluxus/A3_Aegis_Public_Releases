class Atlas_I_UNO_APC_Wheeled_04_cannon_F: O_R_APC_Wheeled_04_cannon_F
{
    author = $STR_A3_A_AveryTheKitty_and_Lakarak;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_I_UNO_APC_Wheeled_04_cannon_F.jpg";
	scope = public;
	scopeCurator = public;
    forceInGarage = false;
	side = TGuerrila;
	faction = Atlas_IND_UNO_F;
	crew = Atlas_I_UNO_Crew_F;
	typicalCargo[] = {Atlas_I_UNO_Crew_F};
    textureList[] = {UNO,1};
	hiddenSelectionsTextures[] =
    {
        "\A3_Atlas\Armor_F_Atlas\APC_Wheeled_04\Data\APC_Wheeled_04_body_UNO_CO.paa",
        "\A3_Atlas\Armor_F_Atlas\APC_Wheeled_04\Data\APC_Wheeled_04_body2_UNO_CO.paa",
        "\A3_Atlas\Armor_F_Atlas\APC_Wheeled_04\Data\APC_Wheeled_04_tow_UNO_CO.paa",
        "\A3_Aegis\Armor_F_Aegis\Data\camonet_RUS_Green_CO.paa",
        "\A3_Aegis\Armor_F_Aegis\Data\cage_RUkhk_CO.paa"
    };
    /* Inventory */
    class TransportWeapons
    {
         weap_xx(arifle_G36_F,2);
    };
    class TransportMagazines
    {
        mag_xx(30Rnd_65x39_caseless_msbs_mag,10);
        mag_xx(200Rnd_65x39_cased_box_red,6);
        mag_xx(HandGrenade,6);
        mag_xx(MiniGrenade,6);
        mag_xx(1Rnd_HE_Grenade_shell,6);
        mag_xx(1Rnd_Smoke_Grenade_shell,3);
        mag_xx(1Rnd_SmokeBlue_Grenade_shell,3);
        mag_xx(1Rnd_SmokeOrange_Grenade_shell,3);
        mag_xx(1Rnd_SmokeGreen_Grenade_shell,3);
        mag_xx(SmokeShell,8);
        mag_xx(SmokeShellBlue,8);
        mag_xx(SmokeShellGreen,8);
        mag_xx(SmokeShellOrange,8);
        mag_xx(NLAW_F,8);
    };
	class TransportItems
	{
		item_xx(FirstAidKit,10);
		item_xx(Toolkit,1);
		item_xx(Medikit,1);
	};
    class TransportBackpacks
    {
        bag_xx(B_FieldPack_cbr,2);
    };
};
class Atlas_I_UNO_wdl_APC_Wheeled_04_cannon_F: Atlas_I_UNO_APC_Wheeled_04_cannon_F
{
	faction = Atlas_IND_UNO_wdl_F;
	crew = Atlas_I_UNO_wdl_Crew_F;
	typicalCargo[] = {Atlas_I_UNO_wdl_Crew_F};
    textureList[] = {UNO,1};
	hiddenSelectionsTextures[] =
    {
        "\A3_Atlas\Armor_F_Atlas\APC_Wheeled_04\Data\APC_Wheeled_04_body_UNO_CO.paa",
        "\A3_Atlas\Armor_F_Atlas\APC_Wheeled_04\Data\APC_Wheeled_04_body2_UNO_CO.paa",
        "\A3_Atlas\Armor_F_Atlas\APC_Wheeled_04\Data\APC_Wheeled_04_tow_UNO_CO.paa",
        "\A3_Aegis\Armor_F_Aegis\Data\camonet_RUS_Green_CO.paa",
        "\A3_Aegis\Armor_F_Aegis\Data\cage_RUkhk_CO.paa"
    };
    /* Inventory */
    class TransportWeapons
    {
         weap_xx(arifle_FORT652_F,2);
    };
    class TransportMagazines
    {
        mag_xx(30Rnd_65x39_caseless_msbs_mag,10);
        mag_xx(200Rnd_65x39_cased_box_red,6);
        mag_xx(HandGrenade_Guer,10);
        mag_xx(1Rnd_HE_Grenade_shell,6);
        mag_xx(1Rnd_Smoke_Grenade_shell,3);
        mag_xx(1Rnd_SmokeBlue_Grenade_shell,3);
        mag_xx(1Rnd_SmokeRed_Grenade_shell,3);
        mag_xx(1Rnd_SmokeGreen_Grenade_shell,3);
        mag_xx(SmokeShell,8);
        mag_xx(SmokeShellBlue,8);
        mag_xx(SmokeShellGreen,8);
        mag_xx(SmokeShellRed,8);
        mag_xx(RPG32_F,4);
        mag_xx(RPG32_HE_F,4);
    };
	class TransportItems
	{
		item_xx(FirstAidKit,10);
		item_xx(Toolkit,1);
		item_xx(Medikit,1);
	};
    class TransportBackpacks
    {
        bag_xx(B_FieldPack_green_F,2);
    };
};