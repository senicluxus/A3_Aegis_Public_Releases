/* Russia */
class O_R_Mortar_01_F: O_Mortar_01_F
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
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_Mortar_01_F.jpg";
	faction = OPF_R_F;
	crew = O_R_Soldier_F;
	hiddenSelectionsTextures[] = {"\A3\Static_F\Mortar_01\Data\Mortar_01_CO.paa"};
	class assembleInfo
	{
		displayName = "";
		assembleTo = "";
		base = "";
		primary = false;
		dissasembleTo[] =
		{
            O_R_Mortar_01_Weapon_F,
            O_R_Mortar_01_support_F
		};
	};
};
class O_R_Mortar_01_support_F: B_Mortar_01_support_F
{
	author = $STR_A3_A_AveryTheKitty;
	displayName = $STR_A3_A_CfgVehicles_O_R_Mortar_01_support_F0;
	hiddenSelectionsTextures[] = {"\A3_Aegis\Supplies_F_Aegis\Bags\Data\backpack_small_rgr_CO.paa"};
	picture = "\A3_Aegis\Supplies_F_Aegis\Bags\Data\UI\icon_B_TacticalPack_rgr_CA.paa";
	faction = OPF_R_F;
};
class O_R_Mortar_01_Weapon_F: B_Mortar_01_weapon_F
{
	author = $STR_A3_A_AveryTheKitty;
	displayName = $STR_A3_A_CfgVehicles_O_R_Mortar_01_Weapon_F0;
	hiddenSelectionsTextures[] = {"\A3_Aegis\Supplies_F_Aegis\Bags\Data\backpack_small_rgr_CO.paa"};
	picture = "\A3_Aegis\Supplies_F_Aegis\Bags\Data\UI\icon_B_TacticalPack_rgr_CA.paa";
	faction = OPF_R_F;
	class assembleInfo: assembleInfo
	{
		assembleTo = O_R_Mortar_01_F;
	};
};

/* Russia (Mediterranean) */
class O_R_Mortar_01_ard_F: O_Mortar_01_F
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
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_Mortar_01_ard_F.jpg";
	faction = OPF_R_ard_F;
	crew = O_R_Soldier_ard_F;
	hiddenSelectionsTextures[] = {"\A3\Static_F\Mortar_01\Data\Mortar_01_CO.paa"};
	class assembleInfo
	{
		displayName = "";
		assembleTo = "";
		base = "";
		primary = false;
		dissasembleTo[] =
		{
            O_R_Mortar_01_Weapon_F,
            O_R_Mortar_01_support_F
		};
	};
};