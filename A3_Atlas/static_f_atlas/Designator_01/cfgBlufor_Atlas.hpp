class Atlas_B_G_Static_Designator_01_F: B_Static_Designator_01_F
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
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_E_Static_Designator_01_F.jpg";
	side = TWest;
	faction = Atlas_BLU_G_F;
	crew = B_UAV_AI;
	hiddenSelections[] =
	{
		camo,
		camo1
	};
	hiddenSelectionsTextures[] =
	{
		"\A3\Static_F_Enoch\Designator_01\Data\LD01_remote_khk_CO.paa",
		"\A3\Weapons_F_Exp\Binocular\Data\Laserdesignator_01_khk_F_CO.paa"
	};
	class assembleInfo
	{
		displayName = "";
		assembleTo = "";
		base = "";
		primary = false;
		dissasembleTo[] = {B_W_Static_Designator_01_weapon_F};
	};
};

/* Bundeswehr Arid */
class Atlas_B_G_Static_Designator_01_ard_F: Atlas_B_G_Static_Designator_01_F
{
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\I_I_Static_Designator_01_F.jpg";
	side = TWest;
	faction = Atlas_BLU_G_ard_F;
	crew = B_UAV_AI;
	hiddenSelections[] =
	{
		camo,
		camo1
	};
	hiddenSelectionsTextures[] =
	{
		"\A3\Static_F_Mark\Designator_01\Data\LD01_remote_CO.paa",
		"\A3\Weapons_F_Mark\binocular\data\ltlm_snd_co.paa"
	};
	class assembleInfo
	{
		displayName = "";
		assembleTo = "";
		base = "";
		primary = false;
		dissasembleTo[] = {B_Static_Designator_01_weapon_F};
	};	
};