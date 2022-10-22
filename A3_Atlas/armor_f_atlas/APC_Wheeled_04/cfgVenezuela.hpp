class Atlas_O_VZ_APC_Wheeled_04_cannon_F: O_R_APC_Wheeled_04_cannon_F
{
    author = $STR_A3_A_AveryTheKitty_and_Lakarak;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_APC_Wheeled_04_cannon_F.jpg";
	scope = protected;
	scopeCurator = protected;
	side = TEast;
	faction = Atlas_OPF_V_F;
	crew = Atlas_O_VZ_Crew_F;
	typicalCargo[] = {Atlas_O_VZ_Crew_F};
    textureList[] = {Green,1};
	hiddenSelectionsTextures[] =
    {
        "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\Data\APC_Wheeled_04_body_RUkhk_CO.paa",
        "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\Data\APC_Wheeled_04_body2_RUkhk_CO.paa",
        "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\Data\APC_Wheeled_04_tow_RUkhk_CO.paa",
        "\A3_Aegis\Armor_F_Aegis\Data\camonet_RUS_Green_CO.paa",
        "\A3_Aegis\Armor_F_Aegis\Data\cage_RUkhk_CO.paa"
    };
     /* Inventory */
    class TransportWeapons
    {
        weap_xx(arifle_NCAR15_F,2);
    };
    class TransportMagazines
    {
        mag_xx(30Rnd_580x42_Mag_F,10);
        mag_xx(200Rnd_556x45_Box_Red_F,4);
        mag_xx(HandGrenade_East,8);
        mag_xx(1Rnd_HE_Grenade_shell,6);
        mag_xx(1Rnd_Smoke_Grenade_shell,3);
        mag_xx(1Rnd_SmokeRed_Grenade_shell,3);
        mag_xx(1Rnd_SmokeOrange_Grenade_shell,3);
        mag_xx(1Rnd_SmokeYellow_Grenade_shell,3);
        mag_xx(SmokeShell,8);
        mag_xx(SmokeShellRed,8);
        mag_xx(SmokeShellOrange,8);
        mag_xx(SmokeShellYellow,8);
        mag_xx(RPG7_F,8);
        mag_xx(Titan_AT,2);
        mag_xx(Titan_AP,2);
        mag_xx(Titan_AA,2);
    };
    class TransportBackpacks
    {
        bag_xx(B_FieldPack_owcamo,2);
    };
};
