/* LDF */
class I_E_UGV_01_medical_F: UGV_01_medical_base_F
{
    author = $STR_A3_A_AveryTheKitty;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_UGV_01_medical_F.jpg";
    scope = public;
    scopeCurator = public;
    side = TGuerrila;
    faction = IND_E_F;
    crew = I_UAV_AI_F;
    typicalCargo[] = {I_UAV_AI_F};
    textureList[] = {EAF,1};
    hiddenSelectionsTextures[] =
    {
		"\A3_Aegis\Soft_F_Aegis\UGV_01\Data\UGV_01_ext_medevac_EAF_CO.paa",
        "\A3\Soft_F_Enoch\UGV_01\Data\UGV_01_int_EAF_CO.paa",
        "\A3\Soft_F_Orange\UGV_01\Data\Turret_IDAP_CO.paa"
    };
};