/* Royal Army of Karzeghistan */
class Atlas_B_K_Soldier_Base_F;
class Atlas_B_K_support_CMort_RF: Atlas_B_K_Soldier_Base_F
{
	author = $STR_A3_A_Ravenholme;
	scope = public;
	scopeCurator = public;
	editorPreview = "\A3_Atlas\Editorpreviews_F_Atlas\Data\CfgVehicles\Atlas_B_K_support_CMort_RF.jpg";
	displayName = $STR_LXRF_Soldier_Mortar;
	backpack = B_D_CTRG_CommandoMortar_weapon_RF;
    weapons[] =
	{
		Atlas_arifle_SPAR_02_Inf_blk_Holo_FL_F,
        Aegis_hgun_P320_black_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		Atlas_arifle_SPAR_02_Inf_blk_Holo_FL_F,
        Aegis_hgun_P320_black_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_556x45_Stanag_red),
        mag_2(17Rnd_9x21_Mag),
        HandGrenade,
        SmokeShell
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_556x45_Stanag_red),
        mag_2(17Rnd_9x21_Mag),
        HandGrenade,
        SmokeShell
	};
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_Khaki_F,
		Atlas_H_FieldCap_hs_kzg,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_Khaki_F,
		Atlas_H_FieldCap_hs_kzg,
		DefaultManLinkedItems
	};
    cost = 220000;
	role = Assistant;
};