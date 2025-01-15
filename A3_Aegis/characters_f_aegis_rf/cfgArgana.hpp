/* Argana */
class O_A_Soldier_F;
class Aegis_O_A_support_CMort_RF: O_A_Soldier_F
{
	author = $STR_A3_A_Ravenholme;
	scope = public;
	scopeCurator = public;
	//editorPreview = "\A3_Aegis\Editorpreviews_F_Aegis\Data\CfgVehicles\Aegis_O_A_support_CMort_RF.jpg";
	displayName = $STR_LXRF_Soldier_Mortar;
	backpack = O_CommandoMortar_weapon_RF;
	linkedItems[] =
    {
        V_BandollierB_khk,
        H_MilCap_ocamo,
		DefaultManLinkedItems
    };
    respawnLinkedItems[] =
    {
        V_BandollierB_khk,
        H_MilCap_ocamo,
		DefaultManLinkedItems
    };
    cost = 220000;
	role = Assistant;
};