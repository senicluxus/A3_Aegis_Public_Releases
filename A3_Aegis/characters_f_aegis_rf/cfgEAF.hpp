/* Base Classes */
class I_E_Support_CMort_RF;
class I_E_Support_AMort_ard_F;

/* LDF Arid (Indep) */
class I_E_Support_CMort_ard_RF : I_E_Support_AMort_ard_F
{
    author = "Rotators Collective";
	dlc = "rf";
    editorPreview = "\A3_Aegis\Editorpreviews_F_Aegis\Data\CfgVehicles\I_E_Support_CMort_ard_RF.jpg";
    displayName = $STR_LXRF_Soldier_Mortar;
    backpack = B_D_CTRG_CommandoMortar_weapon_RF;
};

/* LDF (BLUFOR) */
class Aegis_B_E_Support_CMort_RF: I_E_Support_CMort_RF
{
    author = $STR_A3_A_Ravenholme;
    side = TWest;
    faction = BLU_EAF_F;
};

/* LDF Arid (BLUFOR) */
class Aegis_B_E_Support_CMort_ard_RF: I_E_Support_CMort_ard_RF
{
    author = $STR_A3_A_Ravenholme;
    side = TWest;
    faction = BLU_EAF_ard_F;
};