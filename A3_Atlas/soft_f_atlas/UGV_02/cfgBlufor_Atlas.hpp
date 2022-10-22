class Atlas_B_G_UGV_02_Demining_F: UGV_02_Demining_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_E_UGV_02_Demining_F.jpg";
	scope = public;
	displayName = $STR_A3_C_CfgVehicles_I_UGV_02_Demining_F0;
	side = TWest;
	faction = Atlas_BLU_G_F;
	crew = B_UAV_AI;
	class assembleInfo
	{
		primary = true;
		base = "";
		assembleTo = "";
		displayName = "";
		dissasembleTo[] = {B_UGV_02_Demining_backpack_F};
	};
};