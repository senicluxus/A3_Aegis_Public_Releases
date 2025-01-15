/* IAF */
class O_crew_F;
class Aegis_O_BoatCrew_EF: O_crew_F
{
    author = $STR_A3_A_Ravenholme;
    displayname = $STR_EF_B_boatCrew;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_O_BoatCrew_EF.jpg";
	uniformClass = U_O_LCF_noInsignia_hex_lxWS;
    linkedItems[] =
    {
        V_TacVest_khk,
        H_HelmetCrew_O,
        DefaultManLinkedItems,
        O_NVGoggles_hex_F
    };
    respawnLinkedItems[] =
    {
        V_TacVest_khk,
        H_HelmetCrew_O,
        DefaultManLinkedItems,
        O_NVGoggles_hex_F
    };
    engineer = true;
};

/* China */
class O_T_crew_F;
class Aegis_O_T_BoatCrew_EF: O_T_crew_F
{
    author = $STR_A3_A_Ravenholme;
    displayname = $STR_EF_B_boatCrew;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_O_T_BoatCrew_EF.jpg";
	uniformClass = Aegis_U_O_CombatFatigues_02_ghex_F;
    linkedItems[] =
    {
        V_TacVest_grn,
        H_HelmetCrew_O_ghex_F,
        DefaultManLinkedItems,
        O_NVGoggles_ghex_F
    };
    respawnLinkedItems[] =
    {
        V_TacVest_grn,
        H_HelmetCrew_O_ghex_F,
        DefaultManLinkedItems,
        O_NVGoggles_ghex_F
    };
    engineer = true;
};