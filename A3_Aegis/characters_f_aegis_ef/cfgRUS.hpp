/* Russia */
class O_R_crew_F;
class Aegis_O_R_BoatCrew_EF: O_R_crew_F
{
    author = $STR_A3_A_Ravenholme;
    displayname = $STR_EF_B_boatCrew;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_O_R_BoatCrew_EF.jpg";
	uniformClass = Aegis_U_O_Luchnik_RolledUp_Taiga_F;
    linkedItems[] =
    {
        Aegis_V_OCarrierLuchnik_grn_F,
        H_HelmetLuchnik_Cover_rutaiga_F,
        DefaultManLinkedItems,
        O_NVGoggles_grn_F
    };
    respawnLinkedItems[] =
    {
        Aegis_V_OCarrierLuchnik_grn_F,
        H_HelmetLuchnik_Cover_rutaiga_F,
        DefaultManLinkedItems,
        O_NVGoggles_grn_F
    };
    engineer = true;
};