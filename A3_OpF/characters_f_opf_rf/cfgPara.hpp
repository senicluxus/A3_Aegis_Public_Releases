// Arma 3 Opposing Forces - Paramilitary
class Opf_O_P_M_Soldier_Base_F;
class Opf_O_P_M_Soldier_CMort_RF: Opf_O_P_M_Soldier_Base_F
{
	author = $STR_A3_A_BranFlakes;
	editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\Opf_O_P_M_Soldier_CMort_RF.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_LXRF_Soldier_Mortar;
	backpack = O_CommandoMortar_weapon_RF;
	uniformClass = Opf_U_Uniform_03_PLR_F;
	linkedItems[] = 
	{
		Atlas_V_ORigLBV_blk_F,
		H_Watchcap_blk,
		G_Bandanna_oli,
		DefaultManGuerillaLinkedItems
	};
	respawnLinkedItems[] = 
	{
		Atlas_V_ORigLBV_blk_F,
		H_Watchcap_blk,
		G_Bandanna_oli,
		DefaultManGuerillaLinkedItems
	};
	weapons[] = 
	{
		arifle_AKSM_F,
		DefaultManWeapons
	};
	respawnWeapons[] = 
	{
		arifle_AKSM_F,
		DefaultManWeapons
	};
	magazines[] =
    {
        mag_6(30Rnd_545x39_Black_Mag_F),
		mag_2(HandGrenade_Guer)
    };
	respawnMagazines[] =
    {
        mag_6(30Rnd_545x39_Black_Mag_F),
		mag_2(HandGrenade_Guer)
    };
	cost = 220000;
	role = Assistant;
	vehicleClass = MenSupport;
};