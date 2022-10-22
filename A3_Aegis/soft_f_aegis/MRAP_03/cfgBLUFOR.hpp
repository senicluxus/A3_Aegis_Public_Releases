/* BAF */
class B_A_MRAP_03_F: I_MRAP_03_F
{
    author = $STR_A3_A_AveryTheKitty;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_MRAP_03_F.jpg";
    scope = public;
    scopeCurator = public;
    side = TWest;
    faction = BLU_A_F;
    crew = B_A_Soldier_F;
    typicalCargo[] = {B_A_Soldier_Lite_F};
    textureList[] = {Blufor,1};
    hiddenSelectionsTextures[] =
    {
        "\A3\Soft_F_Beta\MRAP_03\Data\MRAP_03_ext_CO.paa",
        "\A3\Data_F\Vehicles\Turret_CO.paa"
    };

    /* Inventory */
    class TransportMagazines
    {
        mag_xx(30Rnd_65x39_caseless_mag,16);
        mag_xx(200Rnd_65x39_cased_Box_Red,3);
        mag_xx(HandGrenade,10);
        mag_xx(SmokeShell,4);
        mag_xx(SmokeShellGreen,4);
        mag_xx(SmokeShellOrange,4);
        mag_xx(SmokeShellBlue,4);
        mag_xx(1Rnd_HE_Grenade_shell,10);
        mag_xx(1Rnd_Smoke_Grenade_shell,4);
        mag_xx(1Rnd_SmokeGreen_Grenade_shell,4);
        mag_xx(1Rnd_SmokeOrange_Grenade_shell,4);
        mag_xx(1Rnd_SmokeBlue_Grenade_shell,4);
        mag_xx(17Rnd_9x21_Mag,12);
        mag_xx(NLAW_F,2);
    };
    class TransportWeapons
    {
        weap_xx(arifle_SA80_snd_F,2);
    };
};
class B_A_MRAP_03_hmg_F: I_MRAP_03_hmg_F
{
    author = $STR_A3_A_AveryTheKitty;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_MRAP_03_hmg_F.jpg";
    scope = public;
    scopeCurator = public;
    side = TWest;
    faction = BLU_A_F;
    crew = B_A_Soldier_F;
    typicalCargo[] = {B_A_Soldier_Lite_F};
    textureList[] = {Blufor,1};
    hiddenSelectionsTextures[] =
    {
        "\A3\Soft_F_Beta\MRAP_03\Data\MRAP_03_ext_CO.paa",
        "\A3\Data_F\Vehicles\Turret_CO.paa"
    };

    /* Turrets */
    class Turrets: Turrets
    {
        class MainTurret: MainTurret
        {
            /* Weapons & Ammunition */
            magazines[] = {mag_2(200Rnd_127x99_mag_Tracer_Red)};
        };
        class CommanderTurret: CommanderTurret{};
    };

    /* Inventory */
    class TransportMagazines
    {
        mag_xx(30Rnd_65x39_caseless_mag,16);
        mag_xx(200Rnd_65x39_cased_Box_Red,3);
        mag_xx(HandGrenade,10);
        mag_xx(SmokeShell,4);
        mag_xx(SmokeShellGreen,4);
        mag_xx(SmokeShellOrange,4);
        mag_xx(SmokeShellBlue,4);
        mag_xx(1Rnd_HE_Grenade_shell,10);
        mag_xx(1Rnd_Smoke_Grenade_shell,4);
        mag_xx(1Rnd_SmokeGreen_Grenade_shell,4);
        mag_xx(1Rnd_SmokeOrange_Grenade_shell,4);
        mag_xx(1Rnd_SmokeBlue_Grenade_shell,4);
        mag_xx(17Rnd_9x21_Mag,12);
        mag_xx(NLAW_F,2);
    };
    class TransportWeapons
    {
        weap_xx(arifle_SA80_snd_F,2);
    };
};
class B_A_MRAP_03_gmg_F: I_MRAP_03_gmg_F
{
    author = $STR_A3_A_AveryTheKitty;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_MRAP_03_gmg_F.jpg";
    scope = public;
    scopeCurator = public;
    side = TWest;
    faction = BLU_A_F;
    crew = B_A_Soldier_F;
    typicalCargo[] = {B_A_Soldier_Lite_F};
    textureList[] = {Blufor,1};
    hiddenSelectionsTextures[] =
    {
        "\A3\Soft_F_Beta\MRAP_03\Data\MRAP_03_ext_CO.paa",
        "\A3\Data_F\Vehicles\Turret_CO.paa"
    };

    /* Inventory */
    class TransportMagazines
    {
        mag_xx(30Rnd_65x39_caseless_mag,16);
        mag_xx(200Rnd_65x39_cased_Box_Red,3);
        mag_xx(HandGrenade,10);
        mag_xx(SmokeShell,4);
        mag_xx(SmokeShellGreen,4);
        mag_xx(SmokeShellOrange,4);
        mag_xx(SmokeShellBlue,4);
        mag_xx(1Rnd_HE_Grenade_shell,10);
        mag_xx(1Rnd_Smoke_Grenade_shell,4);
        mag_xx(1Rnd_SmokeGreen_Grenade_shell,4);
        mag_xx(1Rnd_SmokeOrange_Grenade_shell,4);
        mag_xx(1Rnd_SmokeBlue_Grenade_shell,4);
        mag_xx(17Rnd_9x21_Mag,12);
        mag_xx(NLAW_F,2);
    };
    class TransportWeapons
    {
        weap_xx(arifle_SA80_snd_F,2);
    };
};

/* BAF (Pacific) */
class B_A_MRAP_03_tna_F: B_A_MRAP_03_F
{
    author = $STR_A3_A_AveryTheKitty;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_MRAP_03_tna_F.jpg";
    faction = BLU_A_tna_F;
    crew = B_A_Soldier_tna_F;
    typicalCargo[] = {B_A_Soldier_Lite_F};
    textureList[] = {Olive,1};
    hiddenSelectionsTextures[] =
    {
        "\A3_Aegis\Soft_F_Aegis\MRAP_03\Data\MRAP_03_ext_olive_CO.paa",
        "\A3\Data_F_Exp\Vehicles\Turret_olive_CO.paa"
    };

    /* Inventory */
    class TransportMagazines
    {
        mag_xx(30Rnd_65x39_caseless_khaki_mag,16);
        mag_xx(200Rnd_65x39_cased_Box_Red,3);
        mag_xx(HandGrenade,10);
        mag_xx(SmokeShell,4);
        mag_xx(SmokeShellGreen,4);
        mag_xx(SmokeShellOrange,4);
        mag_xx(SmokeShellBlue,4);
        mag_xx(1Rnd_HE_Grenade_shell,10);
        mag_xx(1Rnd_Smoke_Grenade_shell,4);
        mag_xx(1Rnd_SmokeGreen_Grenade_shell,4);
        mag_xx(1Rnd_SmokeOrange_Grenade_shell,4);
        mag_xx(1Rnd_SmokeBlue_Grenade_shell,4);
        mag_xx(17Rnd_9x21_Mag,12);
        mag_xx(NLAW_F,2);
    };
    class TransportWeapons
    {
        weap_xx(arifle_SA80_khk_F,2);
    };
};
class B_A_MRAP_03_hmg_tna_F: B_A_MRAP_03_hmg_F
{
    author = $STR_A3_A_AveryTheKitty;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_MRAP_03_hmg_tna_F.jpg";
    faction = BLU_A_tna_F;
    crew = B_A_Soldier_tna_F;
    typicalCargo[] = {B_A_Soldier_Lite_F};
    textureList[] = {Olive,1};
    hiddenSelectionsTextures[] =
    {
        "\A3_Aegis\Soft_F_Aegis\MRAP_03\Data\MRAP_03_ext_olive_CO.paa",
        "\A3\Data_F_Exp\Vehicles\Turret_olive_CO.paa"
    };

    /* Inventory */
    class TransportMagazines
    {
        mag_xx(30Rnd_65x39_caseless_khaki_mag,16);
        mag_xx(200Rnd_65x39_cased_Box_Red,3);
        mag_xx(HandGrenade,10);
        mag_xx(SmokeShell,4);
        mag_xx(SmokeShellGreen,4);
        mag_xx(SmokeShellOrange,4);
        mag_xx(SmokeShellBlue,4);
        mag_xx(1Rnd_HE_Grenade_shell,10);
        mag_xx(1Rnd_Smoke_Grenade_shell,4);
        mag_xx(1Rnd_SmokeGreen_Grenade_shell,4);
        mag_xx(1Rnd_SmokeOrange_Grenade_shell,4);
        mag_xx(1Rnd_SmokeBlue_Grenade_shell,4);
        mag_xx(17Rnd_9x21_Mag,12);
        mag_xx(NLAW_F,2);
    };
    class TransportWeapons
    {
        weap_xx(arifle_SA80_khk_F,2);
    };
};
class B_A_MRAP_03_gmg_tna_F: B_A_MRAP_03_gmg_F
{
    author = $STR_A3_A_AveryTheKitty;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_MRAP_03_gmg_tna_F.jpg";
    faction = BLU_A_tna_F;
    crew = B_A_Soldier_tna_F;
    typicalCargo[] = {B_A_Soldier_Lite_F};
    textureList[] = {Olive,1};
    hiddenSelectionsTextures[] =
    {
        "\A3_Aegis\Soft_F_Aegis\MRAP_03\Data\MRAP_03_ext_olive_CO.paa",
        "\A3\Data_F_Exp\Vehicles\Turret_olive_CO.paa"
    };

    /* Inventory */
    class TransportMagazines
    {
        mag_xx(30Rnd_65x39_caseless_khaki_mag,16);
        mag_xx(200Rnd_65x39_cased_Box_Red,3);
        mag_xx(HandGrenade,10);
        mag_xx(SmokeShell,4);
        mag_xx(SmokeShellGreen,4);
        mag_xx(SmokeShellOrange,4);
        mag_xx(SmokeShellBlue,4);
        mag_xx(1Rnd_HE_Grenade_shell,10);
        mag_xx(1Rnd_Smoke_Grenade_shell,4);
        mag_xx(1Rnd_SmokeGreen_Grenade_shell,4);
        mag_xx(1Rnd_SmokeOrange_Grenade_shell,4);
        mag_xx(1Rnd_SmokeBlue_Grenade_shell,4);
        mag_xx(17Rnd_9x21_Mag,12);
        mag_xx(NLAW_F,2);
    };
    class TransportWeapons
    {
        weap_xx(arifle_SA80_khk_F,2);
    };
};

/* BAF (Woodland) */
class B_A_MRAP_03_wdl_F: B_A_MRAP_03_F
{
    author = $STR_A3_A_AveryTheKitty;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_MRAP_03_wdl_F.jpg";
    faction = BLU_A_wdl_F;
    crew = B_A_Soldier_wdl_F;
    typicalCargo[] = {B_A_Soldier_Lite_F};
    textureList[] = {Olive,1};
    hiddenSelectionsTextures[] =
    {
        "\A3_Aegis\Soft_F_Aegis\MRAP_03\Data\MRAP_03_ext_olive_CO.paa",
        "\A3\Data_F_Exp\Vehicles\Turret_olive_CO.paa"
    };

    /* Inventory */
    class TransportMagazines
    {
        mag_xx(30Rnd_65x39_caseless_black_mag,16);
        mag_xx(200Rnd_65x39_cased_Box_Red,3);
        mag_xx(HandGrenade,10);
        mag_xx(SmokeShell,4);
        mag_xx(SmokeShellGreen,4);
        mag_xx(SmokeShellOrange,4);
        mag_xx(SmokeShellBlue,4);
        mag_xx(1Rnd_HE_Grenade_shell,10);
        mag_xx(1Rnd_Smoke_Grenade_shell,4);
        mag_xx(1Rnd_SmokeGreen_Grenade_shell,4);
        mag_xx(1Rnd_SmokeOrange_Grenade_shell,4);
        mag_xx(1Rnd_SmokeBlue_Grenade_shell,4);
        mag_xx(17Rnd_9x21_Mag,12);
        mag_xx(NLAW_F,2);
    };
    class TransportWeapons
    {
        weap_xx(arifle_SA80_blk_F,2);
    };
};
class B_A_MRAP_03_hmg_wdl_F: B_A_MRAP_03_hmg_F
{
    author = $STR_A3_A_AveryTheKitty;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_MRAP_03_hmg_wdl_F.jpg";
    faction = BLU_A_wdl_F;
    crew = B_A_Soldier_wdl_F;
    typicalCargo[] = {B_A_Soldier_Lite_F};
    textureList[] = {Olive,1};
    hiddenSelectionsTextures[] =
    {
        "\A3_Aegis\Soft_F_Aegis\MRAP_03\Data\MRAP_03_ext_olive_CO.paa",
        "\A3\Data_F_Exp\Vehicles\Turret_olive_CO.paa"
    };

    /* Inventory */
    class TransportMagazines
    {
        mag_xx(30Rnd_65x39_caseless_black_mag,16);
        mag_xx(200Rnd_65x39_cased_Box_Red,3);
        mag_xx(HandGrenade,10);
        mag_xx(SmokeShell,4);
        mag_xx(SmokeShellGreen,4);
        mag_xx(SmokeShellOrange,4);
        mag_xx(SmokeShellBlue,4);
        mag_xx(1Rnd_HE_Grenade_shell,10);
        mag_xx(1Rnd_Smoke_Grenade_shell,4);
        mag_xx(1Rnd_SmokeGreen_Grenade_shell,4);
        mag_xx(1Rnd_SmokeOrange_Grenade_shell,4);
        mag_xx(1Rnd_SmokeBlue_Grenade_shell,4);
        mag_xx(17Rnd_9x21_Mag,12);
        mag_xx(NLAW_F,2);
    };
    class TransportWeapons
    {
        weap_xx(arifle_SA80_blk_F,2);
    };
};
class B_A_MRAP_03_gmg_wdl_F: B_A_MRAP_03_gmg_F
{
    author = $STR_A3_A_AveryTheKitty;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_MRAP_03_gmg_wdl_F.jpg";
    faction = BLU_A_wdl_F;
    crew = B_A_Soldier_wdl_F;
    typicalCargo[] = {B_A_Soldier_Lite_F};
    textureList[] = {Olive,1};
    hiddenSelectionsTextures[] =
    {
        "\A3_Aegis\Soft_F_Aegis\MRAP_03\Data\MRAP_03_ext_olive_CO.paa",
        "\A3\Data_F_Exp\Vehicles\Turret_olive_CO.paa"
    };

    /* Inventory */
    class TransportMagazines
    {
        mag_xx(30Rnd_65x39_caseless_black_mag,16);
        mag_xx(200Rnd_65x39_cased_Box_Red,3);
        mag_xx(HandGrenade,10);
        mag_xx(SmokeShell,4);
        mag_xx(SmokeShellGreen,4);
        mag_xx(SmokeShellOrange,4);
        mag_xx(SmokeShellBlue,4);
        mag_xx(1Rnd_HE_Grenade_shell,10);
        mag_xx(1Rnd_Smoke_Grenade_shell,4);
        mag_xx(1Rnd_SmokeGreen_Grenade_shell,4);
        mag_xx(1Rnd_SmokeOrange_Grenade_shell,4);
        mag_xx(1Rnd_SmokeBlue_Grenade_shell,4);
        mag_xx(17Rnd_9x21_Mag,12);
        mag_xx(NLAW_F,2);
    };
    class TransportWeapons
    {
        weap_xx(arifle_SA80_blk_F,2);
    };
};