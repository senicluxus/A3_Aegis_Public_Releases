/* Belarus */
class Atlas_O_W_UGV_01_F: UGV_01_base_F
{
    author = $STR_A3_A_AveryTheKitty;
    editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_W_UGV_01_F.jpg";
    displayName = $STR_A3_A_CfgVehicles_O_R_UGV_01_F0;
    scope = public;
    scopeCurator = public;
    side = TEast;
    faction = Atlas_OPF_W_F;
    crew = O_UAV_AI;
    typicalCargo[] = {Atlas_O_W_Soldier_F};
    textureList[] = {WoodlandHex,1};
    hiddenSelectionsTextures[] =
    {
        "\A3_Atlas\Soft_F_Atlas\UGV_01\Data\UGV_01_ext_WHEX_CO.paa",
		"\A3_Atlas\Soft_F_Atlas\UGV_01\Data\UGV_01_int_WHEX_CO.paa"
    };
};
class Atlas_O_W_UGV_01_rcws_F: UGV_01_rcws_base_F
{
    author = $STR_A3_A_AveryTheKitty;
    editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_W_UGV_01_rcws_F.jpg";
    displayName = $STR_A3_A_CfgVehicles_O_R_UGV_01_rcws_F0;
    scope = public;
    scopeCurator = public;
    side = TEast;
    faction = Atlas_OPF_W_F;
    crew = O_UAV_AI;
    typicalCargo[] = {Atlas_O_W_Soldier_F};
    textureList[] = {WoodlandHex,1};
    hiddenSelectionsTextures[] =
    {
        "\A3_Atlas\Soft_F_Atlas\UGV_01\Data\UGV_01_ext_WHEX_CO.paa",
		"\A3_Atlas\Soft_F_Atlas\UGV_01\Data\UGV_01_int_WHEX_CO.paa",
		"\A3_Atlas\Soft_F_Atlas\MRAP_02\Data\Turret_WHEX_CO.paa"
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
class Atlas_O_W_UGV_01_medical_F: UGV_01_medical_base_F
{
    author = $STR_A3_A_AveryTheKitty;
    editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_W_UGV_01_medical_F.jpg";
    displayName = $STR_A3_A_CfgVehicles_O_R_UGV_01_medical_F0;
    scope = public;
    scopeCurator = public;
    side = TEast;
    faction = Atlas_OPF_W_F;
    crew = O_UAV_AI;
    typicalCargo[] = {Atlas_O_W_Soldier_F};
    textureList[] = {WoodlandHex,1};
    hiddenSelectionsTextures[] =
    {
        "\A3_Atlas\Soft_F_Atlas\UGV_01\Data\UGV_01_ext_medevac_WHEX_CO.paa",
		"\A3_Atlas\Soft_F_Atlas\UGV_01\Data\UGV_01_int_WHEX_CO.paa",
		"\A3\Soft_F_Orange\UGV_01\Data\Turret_IDAP_CO.paa"
    };
};