/* Unit Classes */
class Opf_B_P_Soldier_F;
class Opf_B_P_Soldier_Cmort_RF: Opf_B_P_Soldier_F
{
	author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\Opf_B_P_Soldier_Cmort_RF.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_LXRF_Soldier_Mortar;
	cost = 220000;
	role = Assistant;
	vehicleClass = MenSupport;
	backpack = I_E_CommandoMortar_weapon_RF;
	linkedItems[] = 
	{
		H_PASGT_basic_olive_F,
		V_TacVest_camo,
		DefaultManGuerillaLinkedItems
	};
	respawnLinkedItems[] = 
	{
		H_PASGT_basic_olive_F,
		V_TacVest_camo,
		DefaultManGuerillaLinkedItems
	};
	weapons[] = 
	{
		Aegis_arifle_M4A1_F,
		DefaultManWeapons
	};
	respawnWeapons[] = 
	{
		Aegis_arifle_M4A1_F,
		DefaultManWeapons
	};
	magazines[] = 
	{
        mag_6(30rnd_556x45_Stanag),
        mag_2(HandGrenade)
	};
	respawnMagazines[] = 
	{
        mag_6(30rnd_556x45_Stanag),
        mag_2(HandGrenade)
	};
};