/* BLUFOR LDF */
class Aegis_B_E_UGV_02_Demining_F: UGV_02_Demining_Base_F
{
	author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3\EditorPreviews_F_Enoch\Data\CfgVehicles\I_UGV_02_Demining_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_C_CfgVehicles_I_UGV_02_Demining_F0;
	side = TWest;
	faction = BLU_EAF_F;
	crew = B_UAV_AI;
	class assembleInfo
	{
		primary = true;
		base = "";
		assembleTo = "";
		displayName = "";
		dissasembleTo[] = {Aegis_B_E_UGV_02_Demining_backpack_F};
	};
};
class Aegis_B_E_UGV_02_Demining_backpack_F: UGV_02_Demining_backpack_base_F
{
	author = $STR_A3_A_Ravenholme;
	scope = protected;
	scopeCurator = protected;
	displayName = $STR_A3_C_CfgVehicles_I_E_UGV_02_Demining_backpack_F0;
	faction = BLU_EAF_F;
	picture = "\A3\Supplies_F_Enoch\Bags\Data\UI\icon_I_UGV_02_demining_ca";
	class assembleInfo: assembleInfo
	{
		displayName = $STR_A3_C_CfgVehicles_I_E_UGV_02_Demining_backpack_F0;
		assembleTo = Aegis_B_E_UGV_02_Demining_F;
	};
};
class Aegis_B_E_UGV_02_Science_F: UGV_02_Science_Base_F
{
	author = $STR_A3_A_Ravenholme;
    class SimpleObject
	{
		eden = 1;
		animate[] = {{"science_hull",1},{"science_cam",1},{"demine_hull",0},{"demine_cam",0},{"ew_cam",0},{"hide_rearlights",1},{"hide_science_hull_lights",0.1},{"hide_science_cam_lights",0.1},{"biopsycap_1",0.4},{"biopsycap_2",0.4},{"biopsycap_3",0.4},{"biopsycap_4",0.4},{"biopsycap_5",0.4},{"biopsycap_6",0.4},{"biopsycap_7",0.4},{"biopsycap_8",0.4},{"biopsycap_9",0.4},{"biopsycap_10",0.4},{"damagehide",0},{"tracks_l_hide",0},{"tracks_r_hide",0},{"telescope_arm1_1",0},{"telescope_arm1_2",0},{"telescope_arm2_1",0},{"telescope_arm2_2",0},{"telescope_arm3_1",0},{"telescope_arm3_2",0},{"telescope_arm4_1",0},{"telescope_arm4_2",0},{"beam_reload_hide",0},{"detector3_active",50},{"detector3_cool",0},{"detector3_ready",50},{"detector3_ready2",0},{"muzzleflash_rot",0},{"mainturret",0},{"maingun",0},{"maingun2",0},{"maingun3",0},{"arm1",0},{"arm2",0},{"arm3",0},{"cam_gunner",0},{"arm2_forward",0},{"arm3_forward",0},{"wheel_1_1_damper",0},{"wheel_2_1_damper",0},{"wheel_1_5_damper",0},{"wheel_2_5_damper",0},{"wheel_1_1",0},{"wheel_1_2",0},{"wheel_1_3",0},{"wheel_1_5",0},{"wheel_2_1",0},{"wheel_2_2",0},{"wheel_2_3",0},{"wheel_2_5",0}};
		hide[] = {"zasleh","light_1","light_2","light_3","light_4","zadni svetlo","brzdove svetlo","clan","podsvit pristroju","poskozeni"};
		verticalOffset = 0.264;
		verticalOffsetWorld = 0.014;
		init = "[this, '', []] call bis_fnc_initVehicle";
	};
	editorPreview = "\A3\EditorPreviews_F_Enoch\Data\CfgVehicles\I_E_UGV_02_Science_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_C_CfgVehicles_I_UGV_02_Science_F0;
	side = TWest;
	faction = BLU_EAF_F;
	crew = B_UAV_AI;
	class assembleInfo
	{
		primary = true;
		base = "";
		assembleTo = "";
		displayName = "";
		dissasembleTo[] = {Aegis_B_E_UGV_02_Science_backpack_F};
	};
};
class Aegis_B_E_UGV_02_Science_backpack_F: UGV_02_Science_backpack_base_F
{
	author = $STR_A3_A_Ravenholme;
	scope = protected;
	scopeCurator = protected;
	displayName = $STR_A3_C_CfgVehicles_I_E_UGV_02_Science_backpack_F0;
	faction = BLU_EAF_F;
	picture = "\A3\Supplies_F_Enoch\Bags\Data\UI\icon_I_UGV_02_science_ca";
	class assembleInfo: assembleInfo
	{
		displayName = $STR_A3_C_CfgVehicles_I_E_UGV_02_Science_backpack_F0;
		assembleTo = Aegis_B_E_UGV_02_Science_F;
	};
};