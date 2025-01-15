/* US */
class B_UGV_01_F;
class B_UGV_01_rcws_F: UGV_01_rcws_base_F
{
    hiddenSelectionsTextures[] =
    {
        "\A3\Drones_F\Soft_F_Gamma\UGV_01\Data\UGV_01_ext_CO.paa",
        "\A3\Drones_F\Soft_F_Gamma\UGV_01\Data\UGV_01_int_CO.paa",
        "\A3_Aegis\Soft_F_Aegis\UGV_01\Data\Turret_CO.paa"
    };
};
class B_UGV_01_medical_F: UGV_01_medical_base_F
{
    author = $STR_A3_A_AveryTheKitty;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_UGV_01_medical_F.jpg";
    faction = BLU_F;
    crew = B_UAV_AI;
    typicalCargo[] = {B_Soldier_F};
    textureList[] = {Blufor,1};
    hiddenSelectionsTextures[] =
    {
		"\A3_Aegis\Soft_F_Aegis\UGV_01\Data\UGV_01_ext_medevac_CO.paa",
        "\A3\Drones_F\Soft_F_Gamma\UGV_01\Data\UGV_01_int_CO.paa",
        "\A3\Soft_F_Orange\UGV_01\Data\Turret_IDAP_CO.paa"
    };
};

/* US (Pacific) */
class B_T_UGV_01_olive_F;
class B_T_UGV_01_rcws_olive_F: UGV_01_rcws_base_F
{
    /* Turrets */
    class Turrets: Turrets
    {
        class MainTurret: MainTurret
        {
            /* Weapons & Ammunition */
            magazines[] =
            {
                mag_2(200Rnd_127x99_mag_Tracer_Red),
                mag_2(64Rnd_40mm_G_belt)
            };
        };
        class CargoTurret_01: CargoTurret_01{};
    };
};
class B_T_UGV_01_medical_olive_F: UGV_01_medical_base_F
{
    author = $STR_A3_A_AveryTheKitty;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_T_UGV_01_medical_olive_F.jpg";
    scope = public;
    scopeCurator = public;
    side = TWest;
    faction = BLU_T_F;
    crew = B_UAV_AI;
    typicalCargo[] = {B_T_Soldier_F};
    textureList[] = {Olive,1};
    hiddenSelectionsTextures[] =
    {
        "\A3_Aegis\Soft_F_Aegis\UGV_01\Data\UGV_01_ext_medevac_olive_CO.paa",
        "\A3\Soft_F_Exp\UGV_01\Data\UGV_01_int_olive_CO.paa",
        "\A3\Soft_F_Orange\UGV_01\Data\Turret_IDAP_CO.paa"
    };
};

/* US (Woodland) */
class B_W_UGV_01_F: UGV_01_base_F
{
    author = $STR_A3_A_AveryTheKitty;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_UGV_01_F.jpg";
    scope = public;
    scopeCurator = public;
    side = TWest;
    faction = BLU_W_F;
    crew = B_UAV_AI;
    typicalCargo[] = {B_W_Soldier_F};
    textureList[] = {Olive,1};
    hiddenSelectionsTextures[] =
    {
        "\A3_Aegis\Soft_F_Aegis\UGV_01\Data\UGV_01_ext_wdl_CO.paa",
        "\A3\Soft_F_Exp\UGV_01\Data\UGV_01_int_olive_CO.paa"
    };
};
class B_W_UGV_01_rcws_F: UGV_01_rcws_base_F
{
    author = $STR_A3_A_AveryTheKitty;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_UGV_01_rcws_F.jpg";
    scope = public;
    scopeCurator = public;
    side = TWest;
    faction = BLU_W_F;
    crew = B_UAV_AI;
    typicalCargo[] = {B_W_Soldier_F};
    textureList[] = {Olive,1};
    hiddenSelectionsTextures[] =
    {
        "\A3_Aegis\Soft_F_Aegis\UGV_01\Data\UGV_01_ext_wdl_CO.paa",
        "\A3\Soft_F_Exp\UGV_01\Data\UGV_01_int_olive_CO.paa",
        "\A3\Data_F_Exp\Vehicles\Turret_olive_CO.paa"
    };
};
class B_W_UGV_01_medical_F: UGV_01_medical_base_F
{
    author = $STR_A3_A_AveryTheKitty;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_UGV_01_medical_F.jpg";
    scope = public;
    scopeCurator = public;
    side = TWest;
    faction = BLU_W_F;
    crew = B_UAV_AI;
    typicalCargo[] = {B_W_Soldier_F};
    textureList[] = {Olive,1};
    hiddenSelectionsTextures[] =
    {
        "\A3_Aegis\Soft_F_Aegis\UGV_01\Data\UGV_01_ext_medevac_wdl_CO.paa",
        "\A3\Soft_F_Exp\UGV_01\Data\UGV_01_int_olive_CO.paa",
        "\A3\Soft_F_Orange\UGV_01\Data\Turret_IDAP_CO.paa"
    };
};

/* BAF */
class B_A_UGV_01_F: UGV_01_base_F
{
    author = $STR_A3_A_AveryTheKitty;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_UGV_01_F.jpg";
    scope = public;
    scopeCurator = public;
    side = TWest;
    faction = BLU_A_F;
    crew = B_UAV_AI;
    typicalCargo[] = {B_A_Soldier_F};
    textureList[] = {Blufor,1};
    hiddenSelectionsTextures[] =
    {
        "\A3\Drones_F\Soft_F_Gamma\UGV_01\Data\UGV_01_ext_CO.paa",
        "\A3\Drones_F\Soft_F_Gamma\UGV_01\Data\UGV_01_int_CO.paa"
    };
};
class B_A_UGV_01_rcws_F: UGV_01_rcws_base_F
{
    author = $STR_A3_A_AveryTheKitty;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_UGV_01_rcws_F.jpg";
    scope = public;
    scopeCurator = public;
    side = TWest;
    faction = BLU_A_F;
    crew = B_UAV_AI;
    typicalCargo[] = {B_A_Soldier_F};
    textureList[] = {Blufor,1};
    hiddenSelectionsTextures[] =
    {
        "\A3\Drones_F\Soft_F_Gamma\UGV_01\Data\UGV_01_ext_CO.paa",
        "\A3\Drones_F\Soft_F_Gamma\UGV_01\Data\UGV_01_int_CO.paa",
        "\A3_Aegis\Soft_F_Aegis\UGV_01\Data\Turret_CO.paa"
    };
};
class B_A_UGV_01_medical_F: UGV_01_medical_base_F
{
    author = $STR_A3_A_AveryTheKitty;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_UGV_01_medical_F.jpg";
    scope = public;
    scopeCurator = public;
    side = TWest;
    faction = BLU_A_F;
    crew = B_UAV_AI;
    typicalCargo[] = {B_A_Soldier_F};
    textureList[] = {Blufor,1};
    hiddenSelectionsTextures[] =
    {
		"\A3_Aegis\Soft_F_Aegis\UGV_01\Data\UGV_01_ext_medevac_CO.paa",
        "\A3\Drones_F\Soft_F_Gamma\UGV_01\Data\UGV_01_int_CO.paa",
        "\A3\Soft_F_Orange\UGV_01\Data\Turret_IDAP_CO.paa"
    };
};

/* BAF (Pacific) */
class B_A_UGV_01_tna_F: B_A_UGV_01_F
{
    author = $STR_A3_A_AveryTheKitty;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_UGV_01_tna_F.jpg";
    faction = BLU_A_tna_F;
    crew = B_UAV_AI;
    typicalCargo[] = {B_A_Soldier_tna_F};
    textureList[] = {Olive,1};
    hiddenSelectionsTextures[] =
    {
        "\A3\Soft_F_Exp\UGV_01\Data\UGV_01_ext_olive_CO.paa",
        "\A3\Soft_F_Exp\UGV_01\Data\UGV_01_int_olive_CO.paa"
    };
};
class B_A_UGV_01_rcws_tna_F: B_A_UGV_01_rcws_F
{
    author = $STR_A3_A_AveryTheKitty;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_UGV_01_rcws_tna_F.jpg";
    faction = BLU_A_tna_F;
    crew = B_UAV_AI;
    typicalCargo[] = {B_A_Soldier_tna_F};
    textureList[] = {Olive,1};
    hiddenSelectionsTextures[] =
    {
        "\A3\Soft_F_Exp\UGV_01\Data\UGV_01_ext_olive_CO.paa",
        "\A3\Soft_F_Exp\UGV_01\Data\UGV_01_int_olive_CO.paa",
        "\A3\Data_F_Exp\Vehicles\Turret_olive_CO.paa"
    };
};
class B_A_UGV_01_medical_tna_F: B_A_UGV_01_medical_F
{
    author = $STR_A3_A_AveryTheKitty;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_UGV_01_medical_tna_F.jpg";
    faction = BLU_A_tna_F;
    crew = B_UAV_AI;
    typicalCargo[] = {B_A_Soldier_tna_F};
    textureList[] = {Olive,1};
    hiddenSelectionsTextures[] =
    {
		"\A3_Aegis\Soft_F_Aegis\UGV_01\Data\UGV_01_ext_medevac_olive_CO.paa",
        "\A3\Soft_F_Exp\UGV_01\Data\UGV_01_int_olive_CO.paa",
        "\A3\Soft_F_Orange\UGV_01\Data\Turret_IDAP_CO.paa"
    };
};

/* BAF (Woodland) */
class B_A_UGV_01_wdl_F: B_A_UGV_01_F
{
    author = $STR_A3_A_AveryTheKitty;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_UGV_01_wdl_F.jpg";
    faction = BLU_A_wdl_F;
    crew = B_UAV_AI;
    typicalCargo[] = {B_A_Soldier_wdl_F};
    textureList[] = {Olive,1};
    hiddenSelectionsTextures[] =
    {
        "\A3\Soft_F_Exp\UGV_01\Data\UGV_01_ext_olive_CO.paa",
        "\A3\Soft_F_Exp\UGV_01\Data\UGV_01_int_olive_CO.paa"
    };
};
class B_A_UGV_01_rcws_wdl_F: B_A_UGV_01_rcws_F
{
    author = $STR_A3_A_AveryTheKitty;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_UGV_01_rcws_wdl_F.jpg";
    faction = BLU_A_wdl_F;
    crew = B_UAV_AI;
    typicalCargo[] = {B_A_Soldier_wdl_F};
    textureList[] = {Olive,1};
    hiddenSelectionsTextures[] =
    {
        "\A3\Soft_F_Exp\UGV_01\Data\UGV_01_ext_olive_CO.paa",
        "\A3\Soft_F_Exp\UGV_01\Data\UGV_01_int_olive_CO.paa",
        "\A3\Data_F_Exp\Vehicles\Turret_olive_CO.paa"
    };
};
class B_A_UGV_01_medical_wdl_F: B_A_UGV_01_medical_F
{
    author = $STR_A3_A_AveryTheKitty;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_UGV_01_medical_wdl_F.jpg";
    faction = BLU_A_wdl_F;
    crew = B_UAV_AI;
    typicalCargo[] = {B_A_Soldier_wdl_F};
    textureList[] = {Olive,1};
    hiddenSelectionsTextures[] =
    {
		"\A3_Aegis\Soft_F_Aegis\UGV_01\Data\UGV_01_ext_medevac_olive_CO.paa",
        "\A3\Soft_F_Exp\UGV_01\Data\UGV_01_int_olive_CO.paa",
        "\A3\Soft_F_Orange\UGV_01\Data\Turret_IDAP_CO.paa"
    };
};