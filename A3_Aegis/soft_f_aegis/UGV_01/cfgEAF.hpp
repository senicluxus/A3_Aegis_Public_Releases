/* LDF */
class I_E_UGV_01_F;
class I_E_UGV_01_rcws_F;
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

/* INDEP LDF ARID*/

class Aegis_I_E_UGV_01_ard_F: I_E_UGV_01_F
{
    author = $STR_A3_A_Ravenholme;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_I_E_UGV_01_ard_F.jpg";
    scope = public;
    scopeCurator = public;
    side = TGuerrila;
    faction = IND_E_ard_F;
    crew = I_UAV_AI_F;
    typicalCargo[] = {I_UAV_AI_F};
    textureList[] = {EAF_Arid,1};
    hiddenSelectionsTextures[] =
    {
		"\A3_Aegis\Soft_F_Aegis\UGV_01\Data\UGV_01_ext_EAF_Arid_CO.paa",
		"\A3_Aegis\Soft_F_Aegis\UGV_01\Data\UGV_01_int_EAF_Arid_CO.paa",
		"\A3_Aegis\Soft_F_Aegis\UGV_01\Data\Turret_EAF_Arid_CO.paa"
    };
    class EventHandlers
    {
        init = "_this#0 forceFlagTexture 'A3\data_f_enoch\flags\flag_enoch_co.paa'";
    };
};
class Aegis_I_E_UGV_01_rcws_ard_F: I_E_UGV_01_rcws_F
{
    author = $STR_A3_A_Ravenholme;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_I_E_UGV_01_rcws_ard_F.jpg";
    scope = public;
    scopeCurator = public;
    side = TGuerrila;
    faction = IND_E_ard_F;
    crew = I_UAV_AI_F;
    typicalCargo[] = {I_UAV_AI_F};
    textureList[] = {EAF_Arid,1};
    hiddenSelectionsTextures[] =
    {
		"\A3_Aegis\Soft_F_Aegis\UGV_01\Data\UGV_01_ext_EAF_Arid_CO.paa",
		"\A3_Aegis\Soft_F_Aegis\UGV_01\Data\UGV_01_int_EAF_Arid_CO.paa",
		"\A3_Aegis\Soft_F_Aegis\UGV_01\Data\Turret_EAF_Arid_CO.paa"
    };
    class EventHandlers
    {
        init = "_this#0 forceFlagTexture 'A3\data_f_enoch\flags\flag_enoch_co.paa'";
    };
};
class Aegis_I_E_UGV_01_medical_ard_F: UGV_01_medical_base_F
{
    author = $STR_A3_A_BranFlakes;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_I_E_UGV_01_medical_ard_F.jpg";
    scope = public;
    scopeCurator = public;
    side = TGuerrila;
    faction = IND_E_ard_F;
    crew = I_UAV_AI_F;
    typicalCargo[] = {I_UAV_AI_F};
    textureList[] = {EAF_Arid,1};
    hiddenSelectionsTextures[] =
    {
        "\A3_Aegis\Soft_F_Aegis\UGV_01\Data\UGV_01_ext_EAF_Medevac_Arid_CO.paa",
        "\A3_Aegis\Soft_F_Aegis\UGV_01\Data\UGV_01_int_EAF_Arid_CO.paa",
        "\A3_Aegis\Soft_F_Aegis\UGV_01\Data\Turret_EAF_Arid_CO.paa"
    };
    class EventHandlers
    {
        init = "_this#0 forceFlagTexture 'A3\data_f_enoch\flags\flag_enoch_co.paa'";
    };
};

/* LDF BLUFOR */

class Aegis_B_E_UGV_01_F: I_E_UGV_01_F
{
    author = $STR_A3_A_Ravenholme;
    side = TWest;
    faction = BLU_EAF_F;
    crew = B_UAV_AI;
};

class Aegis_B_E_UGV_01_RCWS_F: I_E_UGV_01_rcws_F
{
    author = $STR_A3_A_Ravenholme;
    side = TWest;
    faction = BLU_EAF_F;
    crew = B_UAV_AI;
};
class Aegis_B_E_UGV_01_medical_F: I_E_UGV_01_medical_F
{
    author = $STR_A3_A_Ravenholme;
    side = TWest;
    faction = BLU_EAF_F;
    crew = B_UAV_AI;
};

/* LDF Arid BLUFOR*/
class Aegis_B_E_UGV_01_ard_F: Aegis_I_E_UGV_01_ard_F
{
    author = $STR_A3_A_Ravenholme;
    side = TWest;
    faction = BLU_EAF_ard_F;
    crew = B_UAV_AI;
};

class Aegis_B_E_UGV_01_RCWS_ard_F: Aegis_I_E_UGV_01_rcws_ard_F
{
    author = $STR_A3_A_Ravenholme;
    side = TWest;
    faction = BLU_EAF_ard_F;
    crew = B_UAV_AI;
};
class Aegis_B_E_UGV_01_medical_ard_F: Aegis_I_E_UGV_01_medical_ard_F
{
    author = $STR_A3_A_BranFlakes;
    side = TWest;
    faction = BLU_EAF_ard_F;
    crew = B_UAV_AI;
};