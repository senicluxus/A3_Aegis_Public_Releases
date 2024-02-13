class Opf_B_P_Offroad_01_F: O_G_Offroad_01_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\Opf_B_P_Offroad_01_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TWest;
	faction = Opf_BLU_P_F;
	crew = Opf_B_P_Soldier_Lite_F;
	typicalCargo[] = {Opf_B_P_Soldier_Lite_F};
	textureList[] =
	{
		Green,1
	};
	hiddenSelectionsTextures[] =
	{
		"\a3\soft_f_enoch\Offroad_01\Data\Offroad_01_ext_GRN_CO.paa",
		"\a3\soft_f_enoch\Offroad_01\Data\Offroad_01_ext_GRN_CO.paa"
	};
};
class Opf_B_P_Offroad_01_AT_F: O_G_Offroad_01_AT_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\Opf_B_P_Offroad_01_AT_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TWest;
	faction = Opf_BLU_P_F;
	crew = Opf_B_P_Soldier_Lite_F;
	typicalCargo[] = {Opf_B_P_Soldier_Lite_F};
	textureList[] =
	{
		Green,1
	};
	hiddenSelectionsTextures[] =
	{
		"\a3\soft_f_enoch\Offroad_01\Data\Offroad_01_ext_GRN_CO.paa",
		"\a3\soft_f_enoch\Offroad_01\Data\Offroad_01_ext_GRN_CO.paa"
	};
};
class Opf_B_P_Offroad_01_armed_F: O_G_Offroad_01_armed_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\Opf_B_P_Offroad_01_armed_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TWest;
	faction = Opf_BLU_P_F;
	crew = Opf_B_P_Soldier_Lite_F;
	typicalCargo[] = {Opf_B_P_Soldier_Lite_F};
	textureList[] =
	{
		Green,1
	};
	hiddenSelectionsTextures[] =
	{
		"\a3\soft_f_enoch\Offroad_01\Data\Offroad_01_ext_GRN_CO.paa",
		"\a3\soft_f_enoch\Offroad_01\Data\Offroad_01_ext_GRN_CO.paa"
	};
	class AnimationSources: AnimationSources
	{
		class Hide_Shield: Hide_Shield
		{
			initPhase = false;
		};
		class Hide_Rail: Hide_Rail
		{
			initPhase = true;
		};
	};
};
class Opf_B_P_Offroad_01_repair_F: B_G_Offroad_01_repair_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\Opf_B_P_Offroad_01_repair_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TWest;
	faction = Opf_BLU_P_F;
	crew = Opf_B_P_Soldier_Lite_F;
	typicalCargo[] = {Opf_B_P_Soldier_Lite_F};
	textureList[] =
	{
		Green,1
	};
	hiddenSelectionsTextures[] =
	{
		"\a3\soft_f_enoch\Offroad_01\Data\Offroad_01_ext_GRN_CO.paa",
		"\a3\soft_f_enoch\Offroad_01\Data\Offroad_01_ext_GRN_CO.paa"
	};
};
class Opf_B_P_Offroad_01_covered_F: I_E_Offroad_01_covered_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\Opf_B_P_Offroad_01_covered_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TWest;
	faction = Opf_BLU_P_F;
	crew = Opf_B_P_Soldier_Lite_F;
	typicalCargo[] = {Opf_B_P_Soldier_Lite_F};
	textureList[] =
	{
		Green,1
	};
	hiddenSelectionsTextures[] =
	{
		"\a3\soft_f_enoch\Offroad_01\Data\Offroad_01_ext_GRN_CO.paa",
		"\a3\soft_f_enoch\Offroad_01\Data\Offroad_01_ext_GRN_CO.paa",
		"\a3\Soft_F_Enoch\Offroad_01\Data\offroad_01_cover_grn_co.paa"
	};
	class TransportMagazines{};
	class TransportWeapons{};
};