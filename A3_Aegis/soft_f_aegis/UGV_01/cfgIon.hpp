/* ION */
class Aegis_B_ION_UGV_01_F: UGV_01_base_F
{
    author = $STR_A3_A_AveryTheKitty;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_ION_UGV_01_F.jpg";
    scope = public;
    scopeCurator = public;
    //displayName = $STR_A3_A_CfgVehicles_B_ION_UGV_01_F0;
    side = TWest;
    faction = BLU_ION_lxWS;;
    crew = B_UAV_AI;
    typicalCargo[] = {B_ION_Soldier_F};
    textureList[] = {Ion,1};
    hiddenSelectionsTextures[] =
    {
        "\A3_Aegis\Soft_F_Aegis\UGV_01\Data\UGV_01_ext_ION_CO.paa",
        "\A3_Aegis\Soft_F_Aegis\UGV_01\Data\UGV_01_int_ION_CO.paa",
        "\A3_Aegis\Soft_F_Aegis\UGV_01\Data\Turret_ION_CO.paa"
    };
};
class Aegis_B_ION_UGV_01_rcws_F: UGV_01_rcws_base_F
{
    author = $STR_A3_A_AveryTheKitty;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_ION_UGV_01_rcws_F.jpg";
    scope = public;
    scopeCurator = public;
    //displayName = $STR_A3_A_CfgVehicles_B_ION_UGV_01_rcws_F0;
    side = TWest;
    faction = BLU_ION_lxWS;;
    crew = B_UAV_AI;
    typicalCargo[] = {B_ION_Soldier_F};
    textureList[] = {Ion,1};
    hiddenSelectionsTextures[] =
    {
        "\A3_Aegis\Soft_F_Aegis\UGV_01\Data\UGV_01_ext_ION_CO.paa",
        "\A3_Aegis\Soft_F_Aegis\UGV_01\Data\UGV_01_int_ION_CO.paa",
        "\A3_Aegis\Soft_F_Aegis\UGV_01\Data\Turret_ION_CO.paa"
    };
};
class Aegis_B_ION_UGV_01_medical_F: UGV_01_medical_base_F
{
    author = $STR_A3_A_AveryTheKitty;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_ION_UGV_01_medical_F.jpg";
    scope = protected;
    scopeCurator = protected;
    displayName = $STR_A3_A_CfgVehicles_C_IDAP_UGV_01_F0;
    side = TWest;
    faction = BLU_ION_lxWS;;
    crew = B_UAV_AI;
    typicalCargo[] = {B_ION_Soldier_F};
    textureList[] = {Ion,1};
    hiddenSelectionsTextures[] =
    {
        "\A3_Aegis\Soft_F_Aegis\UGV_01\Data\UGV_01_ext_medevac_ION_CO.paa",
        "\A3_Aegis\Soft_F_Aegis\UGV_01\Data\UGV_01_int_ION_CO.paa",
        "\A3\Soft_F_Orange\UGV_01\Data\Turret_IDAP_CO.paa"
    };
};