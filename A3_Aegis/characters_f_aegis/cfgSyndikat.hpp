/* Syndikat */
class I_C_Soldier_base_F: I_G_Soldier_base_F
{
	headgearList[] =
	{
		"",2,
		H_FakeHeadgear_Syndikat_F,5,
		H_Bandanna_gry,1,
		H_Bandanna_blu,1,
		H_Bandanna_cbr,1,
		H_Bandanna_khk,1,
		H_Bandanna_sgg,1,
		H_Bandanna_sand,1,
		H_Bandanna_surfer_blk,1,
		H_Bandanna_camo,1,
		H_Bandanna_camo_hs,1,
		H_Booniehat_khk,1,
		H_Booniehat_khk_hs,1,
		H_Booniehat_oli,1,
		H_Booniehat_tan,1,
		H_Booniehat_oli_hs,1,
		H_Booniehat_mgrn,1,
		H_Booniehat_mgrn_hs,1,
		H_Cap_blk_Syndikat_F,1,
		H_Cap_grn_Syndikat_F,1,
		H_Cap_oli_Syndikat_F,1,
		H_Cap_tan_Syndikat_F,1
	};
};
class I_C_Soldier_Para_1_F: I_C_Soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_C_Soldier_Para_1_F.jpg";
	magazines[] =
    {
        mag_6(30Rnd_762x39_AK12_Mag_F),
        mag_2(HandGrenade_Guer)
    };
	respawnMagazines[] =
    {
        mag_6(30Rnd_762x39_AK12_Mag_F),
        mag_2(HandGrenade_Guer)
    };
	linkedItems[] =
	{
		V_TacChestrig_cbr_F,
		DefaultManGuerillaLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_TacChestrig_cbr_F,
		DefaultManGuerillaLinkedItems
	};
};
class I_C_Soldier_Para_2_F: I_C_Soldier_base_F
{
	magazines[] =
    {
        mag_6(30Rnd_762x39_AK12_Mag_F),
        mag_2(10Rnd_9x21_Mag),
        mag_2(HandGrenade_Guer)
    };
	respawnMagazines[] =
    {
        mag_6(30Rnd_762x39_AK12_Mag_F),
        mag_2(10Rnd_9x21_Mag),
        mag_2(HandGrenade_Guer)
    };
};
class I_C_Soldier_Para_3_F;
class I_C_Soldier_Para_4_F: I_C_Soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_C_Soldier_Para_4_F.jpg";
	magazines[] =
    {
        mag_3(200Rnd_556x45_Box_F),
        mag_2(10Rnd_9x21_Mag)
    };
	respawnMagazines[] =
    {
        mag_3(200Rnd_556x45_Box_F),
        mag_2(10Rnd_9x21_Mag)
    };
	linkedItems[] =
	{
		V_ChestrigF_blk,
		DefaultManGuerillaLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_ChestrigF_blk,
		DefaultManGuerillaLinkedItems
	};
};
class I_C_Soldier_Para_6_F: I_C_Soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_C_Soldier_Para_6_F.jpg";
	magazines[] =
    {
        mag_6(30Rnd_762x39_AK12_Mag_F),
        mag_4(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade_Guer)
    };
	respawnMagazines[] =
    {
        mag_6(30Rnd_762x39_AK12_Mag_F),
        mag_4(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade_Guer)
    };
	linkedItems[] =
	{
		V_ChestrigF_oli,
		DefaultManGuerillaLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_ChestrigF_oli,
		DefaultManGuerillaLinkedItems
	};
};
class I_C_Soldier_Para_7_F: I_C_Soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_C_Soldier_Para_7_F.jpg";
	magazines[] =
    {
        mag_6(30Rnd_762x39_Mag_F),
        mag_2(HandGrenade_Guer)
    };
	respawnMagazines[] =
    {
        mag_6(30Rnd_762x39_Mag_F),
        mag_2(HandGrenade_Guer)
    };
	linkedItems[] =
	{
		V_TacChestrig_cbr_F,
		DefaultManGuerillaLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_TacChestrig_cbr_F,
		DefaultManGuerillaLinkedItems
	};
};
class I_C_Soldier_Bandit_5_F: I_C_Soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_C_Soldier_Bandit_5_F.jpg";
	linkedItems[] =
	{
		V_ChestrigF_blk,
		DefaultManGuerillaLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_ChestrigF_blk,
		DefaultManGuerillaLinkedItems
	};
};
class I_C_Soldier_Bandit_6_F: I_C_Soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_C_Soldier_Bandit_6_F.jpg";
	linkedItems[] =
	{
		V_TacChestrig_cbr_F,
		DefaultManGuerillaLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_TacChestrig_cbr_F,
		DefaultManGuerillaLinkedItems
	};
};
class I_C_Soldier_universal_F: I_C_Soldier_Para_1_F
{
	scopeCurator = private;
};
class I_C_Soldier_base_unarmed_F: I_C_Soldier_Para_1_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_C_Soldier_base_unarmed_F.jpg";
	linkedItems[] =
	{
		V_TacChestrig_cbr_F,
		DefaultManGuerillaLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_TacChestrig_cbr_F,
		DefaultManGuerillaLinkedItems
	};
};
class SyndikatSoldier_Default: I_C_Soldier_Para_1_F
{
	scopeCurator = private;
};
class I_C_Sharpshooter_F: I_C_Soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	class SpeechVariants
	{
		class Default
		{
			speechSingular[] = {veh_infantry_sniper_s};
			speechPlural[] = {veh_infantry_sniper_p};
		};
	};
	textSingular = $STR_A3_nameSound_veh_infantry_sniper_s;
	textPlural = $STR_A3_nameSound_veh_infantry_sniper_p;
	nameSound = veh_infantry_sniper_s;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_C_Sharpshooter_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_CfgVehicles_B_Sharpshooter_F0;
	model = "\A3\Characters_F_Exp\Syndikat\I_C_Soldier_Para_2_F.p3d";
	uniformClass = U_I_C_Soldier_Para_2_F;
	hiddenSelectionsTextures[]=
	{
      	"\A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Para_2_F_1_CO.paa",
		"\A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Para_2_F_2_CO.paa"
	};
	role = Marksman;
	backpack = "";
	weapons[] =
	{
		srifle_DMR_06_camo_khs_F,
		DefaultManWeapons,
      	Binocular
	};
	respawnWeapons[] =
	{
		srifle_DMR_06_camo_khs_F,
		DefaultManWeapons,
      	Binocular
	};
	magazines[] = {mag_6(20Rnd_Mk14_762x51_Mag)};
	respawnMagazines[] = {mag_6(20Rnd_Mk14_762x51_Mag)};
	linkedItems[] =
	{
      	V_ChestrigF_khk,
		DefaultManGuerillaLinkedItems
	};
	respawnLinkedItems[] =
	{
     	V_ChestrigF_khk,
		DefaultManGuerillaLinkedItems
	};
};
class Aegis_I_C_Soldier_UAV_lxWS: I_C_Soldier_Para_1_F
{
	author = $STR_A3_A_Ravenholme;
	displayName = "UAV Operator (IED)";
	role = SpecialOperative;
	uavHacker = true;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_I_C_Soldier_UAV_lxWS.jpg";
	backpack = Aegis_I_C_UAV_02_IED_backpack_lxWS;
	uniformClass = U_I_C_Soldier_Para_4_F;
	weapons[] =
	{
		arifle_AKS_F,
		DefaultManWeapons,
      	Binocular
	};
	respawnWeapons[] =
	{
		arifle_AKS_F,
		DefaultManWeapons,
      	Binocular
	};
	magazines[] =
    {
        mag_6(30Rnd_545x39_Mag_F),
        mag_2(HandGrenade_Guer)
    };
	respawnMagazines[] =
    {
        mag_6(30Rnd_545x39_Mag_F),
        mag_2(HandGrenade_Guer)
    };
	linkedItems[] =
	{
		Aegis_V_ChestrigEast_khk_F,
		I_UAVTerminal,
		DefaultManGuerillaLinkedItems
	};
	respawnLinkedItems[] =
	{
		Aegis_V_ChestrigEast_khk_F,
		I_UAVTerminal,
		DefaultManGuerillaLinkedItems
	};
};
class Aegis_I_C_Soldier_TechSpec_F: I_C_Soldier_Para_1_F
{
	author = $STR_A3_A_Ravenholme;
	displayName = $STR_A3_A_CfgVehicles_I_G_Soldier_TechSpec_F0;
    uavHacker = true;
    canDeactivateMines = false;
    cost = 150000;
	role = SpecialOperative;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_I_C_Soldier_TechSpec_F.jpg";
	backpack = B_Kitbag_rgr_G_TechSpec;
	uniformClass = U_I_C_Soldier_Para_2_F;
	weapons[] =
	{
		Aegis_arifle_AKS74_oak_F,
		DefaultManWeapons,
      	Binocular
	};
	respawnWeapons[] =
	{
		Aegis_arifle_AKS74_oak_F,
		DefaultManWeapons,
      	Binocular
	};
	magazines[] =
    {
        mag_6(30Rnd_545x39_Mag_F),
        mag_2(HandGrenade_Guer)
    };
	respawnMagazines[] =
    {
        mag_6(30Rnd_545x39_Mag_F),
        mag_2(HandGrenade_Guer)
    };
	linkedItems[] =
	{
		Aegis_V_ChestrigEast_grn_F,
		I_UAVTerminal,
		DefaultManGuerillaLinkedItems
	};
	respawnLinkedItems[] =
	{
		Aegis_V_ChestrigEast_grn_F,
		I_UAVTerminal,
		DefaultManGuerillaLinkedItems
	};
};
class Aegis_I_C_HeavyGunner_Para_F: I_C_Soldier_Para_4_F
{
    author = $STR_A3_A_Ravenholme;
    editorPreview="\A3_Aegis\Editorpreviews_F_Aegis\Data\CfgVehicles\Aegis_I_C_HeavyGunner_Para_F.jpg";
    displayName = $STR_A3_A_CfgVehicles_I_Tura_HeavyGunner_2_lxWS0;
    uniformClass = U_I_C_Soldier_Para_2_F;
    backpack = Aegis_B_FieldPack_oli_C_HG;
	linkedItems[]=
	{
		V_ChestrigF_oli,
		Aegis_H_Milcap_nohs_grn_F,
        G_Aviator,
		DefaultManGuerillaLinkedItems
	};
	respawnLinkedItems[]=
	{
		V_ChestrigF_oli,
		Aegis_H_Milcap_nohs_grn_F,
        G_Aviator,
		DefaultManGuerillaLinkedItems
	};
	weapons[]=
	{
		Aegis_MMG_FNMAG_240_F,
		hgun_pistol_01_F,
		DefaultManWeapons
	};
	respawnWeapons[]=
	{
		Aegis_MMG_FNMAG_240_F,
		hgun_pistol_01_F,
		DefaultManWeapons
	};
	magazines[]=
	{
		mag_2(Aegis_200Rnd_762x51_MAG_Yellow_F),
		mag_2(10Rnd_9x21_Mag)
	};
	respawnMagazines[]=
	{
		mag_2(Aegis_200Rnd_762x51_MAG_Yellow_F),
		mag_2(10Rnd_9x21_Mag)
	};
};
class Aegis_I_C_Soldier_M_Para_F: I_C_Sharpshooter_F
{
	author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_I_C_Soldier_M_Para_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_A_CfgVehicles_I_C_Soldier_M_F0;
	uniformClass = U_I_C_Soldier_Para_4_F;
	weapons[] =
	{
		Aegis_srifle_SVD_blk_DMS_old_F,
		DefaultManWeapons,
      	Binocular
	};
	respawnWeapons[] =
	{
		Aegis_srifle_SVD_blk_DMS_old_F,
		DefaultManWeapons,
      	Binocular
	};
	magazines[] = {mag_6(Aegis_10Rnd_762x54_SVD_Yellow_Mag_F)};
	respawnMagazines[] = {mag_6(Aegis_10Rnd_762x54_SVD_Yellow_Mag_F)};
	linkedItems[] =
	{
      	V_TacVest_grn,
		H_Booniehat_oli,
		DefaultManGuerillaLinkedItems
	};
	respawnLinkedItems[] =
	{
     	V_TacVest_grn,
		H_Booniehat_oli,
		DefaultManGuerillaLinkedItems
	};
};