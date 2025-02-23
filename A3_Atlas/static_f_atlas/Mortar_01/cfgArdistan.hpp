/* Ardistan */
class Atlas_I_AR_Mortar_01_F: O_R_Mortar_01_F
{
	author = $STR_A3_A_AveryTheKitty;
	class SimpleObject
	{
		eden = true;
		animate[] =
		{
            {mainturret,0},
            {maingun,0},
            {optics,0},
            {optics_stabilization,0},
            {legs_zeroing,0},
            {uplegs_zeroing,0}
		};
		hide[] =
		{
            light_back,
            "brzdove svetlo",
            clan,
            "podsvit pristroju",
            poskozeni
		};
		verticalOffset = 0.759;
		verticalOffsetWorld = 0.037;
		init = "''";
	};
	//editorPreview = "\A3_Atlas\//editorPreviews_F_Atlas\Data\CfgVehicles\O_C_Mortar_01_F.jpg";
    side = TGuerrila;
	faction = Atlas_IND_AR_F;
	crew = Atlas_I_AR_Soldier_F;
	class assembleInfo
	{
		displayName = "";
		assembleTo = "";
		base = "";
		primary = false;
		dissasembleTo[] =
		{
            O_R_Mortar_01_weapon_F,
            O_R_Mortar_01_support_F
		};
	};
};