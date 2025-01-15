// Arma 3 Opposing Forces
class Opf_O_S_Soldier_Base_F;
class Opf_O_S_Soldier_CMort_RF: Opf_O_S_Soldier_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\Opf_O_S_Soldier_CMort_RF.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_LXRF_Soldier_Mortar;
	backpack = I_CommandoMortar_weapon_RF;
	uniformClass = Opf_U_O_S_Uniform_01_taiga_F;
	cost = 220000;
	role = Assistant;
	vehicleClass = MenSupport;
	linkedItems[] = 
	{
		V_ChestrigF_rgr,
		H_Watchcap_camo,
		DefaultManGuerillaLinkedItems
	};
	respawnLinkedItems[] = 
	{
		V_ChestrigF_rgr,
		H_Watchcap_camo,
		DefaultManGuerillaLinkedItems
	};
	weapons[] = 
	{
		arifle_AKSM_alt_F,
		DefaultManWeapons
	};
	respawnWeapons[] = 
	{
		arifle_AKSM_alt_F,
		DefaultManWeapons
	};
	magazines[] = 
	{
        mag_6(30Rnd_545x39_Mag_Green_F),
        mag_2(HandGrenade_Guer)
	};
	respawnMagazines[] = 
	{
        mag_6(30Rnd_545x39_Mag_Green_F),
        mag_2(HandGrenade_Guer)
	};
    headgearList[] =
    {
        H_Bandanna_gry,1,
        H_Bandanna_khk_hs,1,
        H_Bandanna_khk,1,
        H_Bandanna_camo,1,
        H_Bandanna_camo_hs,1,
        H_Watchcap_blk,1,
        H_Watchcap_blk_hs,1,
        H_Watchcap_camo,1,
        H_Watchcap_camo_hs,1,
        H_Watchcap_cbr,1,
        H_Watchcap_cbr_hs,1,
        H_Watchcap_khk,1,
        H_Watchcap_khk_hs,1,
        H_Booniehat_khk_hs,1,
        H_Booniehat_khk,1,
        H_Booniehat_oli,1,
        H_Booniehat_tan,1,
        H_Booniehat_oli_hs,1,
        H_Booniehat_mgrn,1,
        H_Booniehat_mgrn_hs,1,
        H_Booniehat_taiga,1,
        H_Booniehat_taiga_hs,1,
        H_MilCap_grn,2,
        H_MilCap_taiga,2,
        H_Headset_light,1,
        H_PASGT_basic_green_F,1,
        lxWS_H_ssh40_green,1,
        H_PASGT_basic_olive_F,1,
        H_FakeHeadgear_F,2
    };
};
class Opf_O_S_Soldier_CQ_RF: Opf_O_S_Soldier_Base_F
{
    author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\Opf_O_S_Soldier_CQ_RF.jpg";
	scope = public;
	displayName = $STR_A3_A_CfgVehicles_O_Soldier_CQ_H_F0;
	role = Rifleman;
    uniformClass = Opf_U_O_S_Gorka_01_autumn_F;
	weapons[] = 
	{
		arifle_ash12_wood_RF,
		DefaultManWeapons
	};
	respawnWeapons[] = 
	{
		arifle_ash12_wood_RF,
		DefaultManWeapons
	};
	magazines[] = 
	{
        mag_6(10rnd_127x55_mag_wood_rf),
		HandGrenade_Guer,
		SmokeShell
	};
	respawnMagazines[] = 
	{
        mag_6(10rnd_127x55_mag_wood_rf),
		HandGrenade_Guer,
		SmokeShell
	};
	linkedItems[] = 
	{
		H_HelmetHeavy_olive_RF,
		Aegis_V_ChestRigEast_oli_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] = 
	{
		H_HelmetHeavy_olive_RF,
		Aegis_V_ChestRigEast_oli_F,
		DefaultManLinkedItems
	};
    headgearList[] =
    {
        H_HelmetHeavy_olive_RF,1,
		H_HelmetHeavy_simple_olive_RF,1,
		H_HelmetHeavy_visorUp_olive_RF,1
    };
};