class Atlas_B_G_UGV_01_F: UGV_01_base_F
{
    author = $STR_A3_A_AveryTheKitty;
    editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_E_UGV_01_F.jpg";
    scope = public;
    scopeCurator = public;
    side = TWest;
    faction = Atlas_BLU_G_F;
    crew = B_UAV_AI;
    typicalCargo[] = {Atlas_B_G_Soldier_F};
    textureList[] = {Olive,1};
    hiddenSelectionsTextures[] =
    {
        "\A3\Soft_F_Exp\UGV_01\Data\UGV_01_ext_olive_CO.paa",
        "\A3\Soft_F_Exp\UGV_01\Data\UGV_01_int_olive_CO.paa"
    };
};
class Atlas_B_G_UGV_01_rcws_F: UGV_01_rcws_base_F
{
    author = $STR_A3_A_AveryTheKitty;
    editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_E_UGV_01_rcws_F.jpg";
    scope = public;
    scopeCurator = public;
    side = TWest;
    faction = Atlas_BLU_G_F;
    crew = B_UAV_AI;
    typicalCargo[] = {Atlas_B_G_Soldier_F};
    textureList[] = {Olive,1};
    hiddenSelectionsTextures[] =
    {
        "\A3\Soft_F_Exp\UGV_01\Data\UGV_01_ext_olive_CO.paa",
        "\A3\Soft_F_Exp\UGV_01\Data\UGV_01_int_olive_CO.paa",
        "\A3\Data_F_Exp\Vehicles\Turret_olive_CO.paa"
    };
};
class Atlas_B_G_UGV_01_medical_F: UGV_01_medical_base_F
{
    author = $STR_A3_A_AveryTheKitty;
    editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_E_UGV_01_medical_F.jpg";
    scope = public;
    scopeCurator = public;
    side = TWest;
    faction = Atlas_BLU_G_F;
    crew = B_UAV_AI;
    typicalCargo[] = {Atlas_B_G_Soldier_F};
    textureList[] = {Olive,1};
    hiddenSelectionsTextures[] =
    {
        "\A3_Aegis\Soft_F_Aegis\UGV_01\Data\UGV_01_ext_medevac_olive_CO.paa",
        "\A3\Soft_F_Exp\UGV_01\Data\UGV_01_int_olive_CO.paa",
        "\A3\Soft_F_Orange\UGV_01\Data\Turret_IDAP_CO.paa"
    };
};

/* Bundeswehr Arid */
class Atlas_B_G_UGV_01_ard_F: Atlas_B_G_UGV_01_F
{
    scope = public;
    scopeCurator = public;
    side = TWest;
    faction = Atlas_BLU_G_ard_F;
    crew = B_UAV_AI;
    typicalCargo[] = {Atlas_B_G_Soldier_ard_F};
    textureList[] = {Blufor,1};
    hiddenSelectionsTextures[] =
    {
        "\A3\Drones_F\Soft_F_Gamma\UGV_01\Data\UGV_01_ext_CO.paa",
        "\A3\Drones_F\Soft_F_Gamma\UGV_01\Data\UGV_01_int_CO.paa"
    };
};
class Atlas_B_G_UGV_01_rcws_ard_F: Atlas_B_G_UGV_01_rcws_F
{
    scope = public;
    scopeCurator = public;
    side = TWest;
    faction = Atlas_BLU_G_ard_F;
    crew = B_UAV_AI;
    typicalCargo[] = {Atlas_B_G_Soldier_ard_F};
    textureList[] = {Blufor,1};
    hiddenSelectionsTextures[] =
    {
        "\A3\Drones_F\Soft_F_Gamma\UGV_01\Data\UGV_01_ext_CO.paa",
        "\A3\Drones_F\Soft_F_Gamma\UGV_01\Data\UGV_01_int_CO.paa",
        "\A3_Aegis\Soft_F_Aegis\UGV_01\Data\Turret_CO.paa"
    };
};
class Atlas_B_G_UGV_01_medical_ard_F: Atlas_B_G_UGV_01_medical_F
{
    scope = public;
    scopeCurator = public;
    side = TWest;
    faction = Atlas_BLU_G_ard_F;
    crew = B_UAV_AI;
    typicalCargo[] = {Atlas_B_G_Soldier_ard_F};
    textureList[] = {Blufor,1};
    hiddenSelectionsTextures[] =
    {
        "\A3_Aegis\Soft_F_Aegis\UGV_01\Data\UGV_01_ext_medevac_CO.paa",
		"\A3\Drones_F\Soft_F_Gamma\UGV_01\Data\UGV_01_int_CO.paa",
		"\A3\Soft_F_Orange\UGV_01\Data\Turret_IDAP_CO.paa"
    };
};
