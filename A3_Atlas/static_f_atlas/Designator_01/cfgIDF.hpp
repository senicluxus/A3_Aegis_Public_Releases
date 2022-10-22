class Atlas_I_I_Static_Designator_01_F: I_Static_Designator_01_F
{
	author = $STR_A3_A_AveryTheKitty;
	class SimpleObject
	{
		eden = true;
		animate[] =
		{
            {mainturret,0},
            {maingun,0},
            {mainelevation_01,0},
            {mainelevation_02,0},
            {mainelevation_03,0},
            {mainelevation_04,0},
            {initturret,0},
            {initgun,0},
            {initelevation_01,0},
            {initelevation_02,0},
            {initelevation_03,0},
            {initelevation_04,0}
		};
		hide[] =
		{
            light_back,
            "brzdove svetlo",
            clan,
            "podsvit pristroju",
            poskozeni
		};
		verticalOffset = 0.509;
		verticalOffsetWorld = 0.001;
		init = "''";
	};
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\I_I_Static_Designator_01_F.jpg";
	displayName = $STR_A3_A_CfgVehicles_I_I_Static_Designator_01_F0;
	faction = Atlas_IND_I_F;
	class assembleInfo
	{
		displayName = $STR_A3_A_CfgVehicles_I_I_Static_Designator_01_F_assembleInfo0;
		assembleTo = "";
		base = "";
		primary = false;
		dissasembleTo[] = {Atlas_I_I_Static_Designator_01_weapon_F};
	};
};
class Atlas_I_I_Static_Designator_01_weapon_F: I_Static_Designator_01_weapon_F
{
	author = $STR_A3_A_AveryTheKitty;
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_A_CfgVehicles_I_I_Static_Designator_01_weapon_F0;
	faction = Atlas_IND_I_F;
	picture = "\A3\Weapons_F\Ammoboxes\Bags\Data\UI\icon_B_AssaultPack_khk_CA.paa";
	hiddenSelectionsTextures[] = {"\A3\Weapons_F\Ammoboxes\Bags\Data\backpack_compact_khk_CO.paa"};
	class assembleInfo: assembleInfo
	{
		assembleTo = Atlas_I_I_Static_Designator_01_F;
	};
};