/* Russia */
class O_R_UGV_01_F: UGV_01_base_F
{
    author = $STR_A3_A_AveryTheKitty;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_UGV_01_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_A3_A_CfgVehicles_O_R_UGV_01_F0;
    side = TEast;
    faction = OPF_R_F;
    crew = O_UAV_AI;
    typicalCargo[] = {O_R_Soldier_F};
    textureList[] = {Green,1};
    hiddenSelectionsTextures[] =
    {
        "\A3_Aegis\Soft_F_Aegis\UGV_01\Data\UGV_01_ext_RUkhk_CO.paa",
        "\A3_Aegis\Soft_F_Aegis\UGV_01\Data\UGV_01_int_RUkhk_CO.paa",
        "\A3_Aegis\Soft_F_Aegis\UGV_01\Data\Turret_RUkhk_CO.paa"
    };
};
class O_R_UGV_01_rcws_F: UGV_01_rcws_base_F
{
    author = $STR_A3_A_AveryTheKitty;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_UGV_01_rcws_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_A3_A_CfgVehicles_O_R_UGV_01_rcws_F0;
    side = TEast;
    faction = OPF_R_F;
    crew = O_UAV_AI;
    typicalCargo[] = {O_R_Soldier_F};
    textureList[] = {Green,1};
    hiddenSelectionsTextures[] =
    {
        "\A3_Aegis\Soft_F_Aegis\UGV_01\Data\UGV_01_ext_RUkhk_CO.paa",
        "\A3_Aegis\Soft_F_Aegis\UGV_01\Data\UGV_01_int_RUkhk_CO.paa",
        "\A3_Aegis\Soft_F_Aegis\UGV_01\Data\Turret_RUkhk_CO.paa"
    };

    /* Turrets */
    class Turrets: Turrets
    {
        class MainTurret: MainTurret
        {
            /* Weapons & Ammunition */
            magazines[] =
            {
                mag_2(200Rnd_127x99_mag_Tracer_Green),
                mag_2(64Rnd_40mm_G_belt)
            };
        };
        class CargoTurret_01: CargoTurret_01{};
    };
};
class O_R_UGV_01_medical_F: UGV_01_medical_base_F
{
    author = $STR_A3_A_AveryTheKitty;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_UGV_01_medical_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_A3_A_CfgVehicles_O_R_UGV_01_medical_F0;
    side = TEast;
    faction = OPF_R_F;
    crew = O_UAV_AI;
    typicalCargo[] = {O_R_Soldier_F};
    textureList[] = {Green,1};
    hiddenSelectionsTextures[] =
    {
		"\A3_Aegis\Soft_F_Aegis\UGV_01\Data\UGV_01_ext_medevac_RUkhk_CO.paa",
        "\A3_Aegis\Soft_F_Aegis\UGV_01\Data\UGV_01_int_RUkhk_CO.paa",
        "\A3\Soft_F_Orange\UGV_01\Data\Turret_IDAP_CO.paa"
    };
};

/* Russia (Mediterranean) */
class O_R_UGV_01_ard_F: O_R_UGV_01_F
{
    author = $STR_A3_A_AveryTheKitty;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_UGV_01_ard_F.jpg";
    faction = OPF_R_ard_F;
    typicalCargo[] = {O_R_Soldier_ard_F};
};
class O_R_UGV_01_rcws_ard_F: O_R_UGV_01_rcws_F
{
    author = $STR_A3_A_AveryTheKitty;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_UGV_01_rcws_ard_F.jpg";
    faction = OPF_R_ard_F;
    typicalCargo[] = {O_R_Soldier_ard_F};
};
class O_R_UGV_01_medical_ard_F: O_R_UGV_01_medical_F
{
    author = $STR_A3_A_AveryTheKitty;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_UGV_01_medical_ard_F.jpg";
    faction = OPF_R_ard_F;
    typicalCargo[] = {O_R_Soldier_ard_F};
};