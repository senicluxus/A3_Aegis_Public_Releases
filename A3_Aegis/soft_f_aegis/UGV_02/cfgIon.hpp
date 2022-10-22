/* ION */
class B_ION_UGV_02_Demining_F: UGV_02_Demining_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_ION_UGV_02_Demining_F.jpg";
	scope = protected;
	scopeCurator = protected;
	displayName = $STR_A3_C_CfgVehicles_C_IDAP_UGV_02_Demining_F0;
	side = TWest;
	faction = BLU_ION_F;
	crew = B_UAV_AI;
	class assembleInfo
	{
		primary = true;
		base = "";
		assembleTo = "";
		displayName = "";
		dissasembleTo[] = {B_ION_UGV_02_Demining_backpack_F};
	};
};
class B_ION_UGV_02_Demining_backpack_F: UGV_02_Demining_backpack_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	scopeCurator = protected;
	displayName = $STR_A3_A_CfgVehicles_B_ION_UGV_02_Demining_backpack_F0;
	faction = BLU_ION_F;
	picture = "\A3\Supplies_F_Enoch\Bags\Data\UI\icon_B_UGV_02_demining_CA.paa";
	class assembleInfo: assembleInfo
	{
		displayName = $STR_A3_C_CfgVehicles_C_IDAP_UGV_02_Demining_backpack_F_assembleInfo0;
		assembleTo = B_ION_UGV_02_Demining_F;
	};
};