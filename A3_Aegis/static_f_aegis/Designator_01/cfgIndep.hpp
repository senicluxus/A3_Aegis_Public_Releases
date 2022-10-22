/* AAF */
class I_Static_Designator_01_F: Static_Designator_01_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	mapSize = 0.9;
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
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_Static_Designator_01_F.jpg";
	displayName = $STR_A3_A_CfgVehicles_I_Static_Designator_01_F0;
	scope = public;
	side = TGuerrila;
	faction = IND_F;
	crew = I_UAV_AI;
	hiddenSelections[] =
	{
		camo,
		camo1
	};
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Static_F_Aegis\Designator_01\Data\LD01_remote_oli_CO.paa",
		"\A3\Weapons_F_Mark\Binocular\Data\LTLM_oli_CO.paa"
	};
	class assembleInfo
	{
		displayName = $STR_A3_A_CfgVehicles_I_Static_Designator_01_F_assembleInfo0;
		assembleTo = "";
		base = "";
		primary = false;
		dissasembleTo[] = {I_Static_Designator_01_weapon_F};
	};
};
class I_Static_Designator_01_weapon_F: B_Static_Designator_01_weapon_F
{
	author = $STR_A3_A_AveryTheKitty;
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_A_CfgVehicles_I_Static_Designator_01_weapon_F0;
	faction = IND_F;
	picture = "\A3\Weapons_F\Ammoboxes\Bags\Data\UI\icon_B_C_Compact_dgtl_CA.paa";
	hiddenSelectionsTextures[] = {"\A3\Weapons_F\Ammoboxes\Bags\Data\backpack_compact_digi_CO.paa"};
	class assembleInfo: assembleInfo
	{
		assembleTo = I_Static_Designator_01_F;
	};
};