class Atlas_I_I_Mortar_01_F: I_Mortar_01_F
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
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\I_I_Mortar_01_F.jpg";
	faction = Atlas_IND_I_F;
	crew = Atlas_I_I_Soldier_F;
	hiddenSelectionsTextures[] = {"\A3\Static_F\Mortar_01\Data\Mortar_01_CO.paa"};
	class assembleInfo
	{
		displayName = "";
		assembleTo = "";
		base = "";
		primary = false;
		dissasembleTo[] =
		{
            Atlas_I_I_Mortar_01_weapon_F,
            Atlas_I_I_Mortar_01_support_F
		};
	};
};
class Atlas_I_I_Mortar_01_support_F: B_Mortar_01_support_F
{
	author = $STR_A3_A_AveryTheKitty;
	displayName = $STR_A3_A_CfgVehicles_I_I_Mortar_01_support_F0;
	hiddenSelectionsTextures[] = {"\A3\Weapons_F\Ammoboxes\Bags\Data\backpack_small_rgr_CO.paa"};
	picture = "\A3\Weapons_F\Ammoboxes\Bags\Data\UI\icon_B_C_Small_rgr.paa";
	faction = Atlas_IND_I_F;
};
class Atlas_I_I_Mortar_01_weapon_F: B_Mortar_01_weapon_F
{
	author = $STR_A3_A_AveryTheKitty;
	displayName = $STR_A3_A_CfgVehicles_I_I_Mortar_01_weapon_F0;
	hiddenSelectionsTextures[] = {"\A3\Weapons_F\Ammoboxes\Bags\Data\backpack_small_rgr_CO.paa"};
	picture = "\A3\Weapons_F\Ammoboxes\Bags\Data\UI\icon_B_C_Small_rgr.paa";
	faction = Atlas_IND_I_F;
	class assembleInfo: assembleInfo
	{
		assembleTo = Atlas_I_I_Mortar_01_F;
	};
};