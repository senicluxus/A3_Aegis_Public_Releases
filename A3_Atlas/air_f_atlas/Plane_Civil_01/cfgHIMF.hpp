/* ADF */
class Plane_Civil_01_HIMF_F: Plane_Civil_01_base_F
{
	author = $STR_A3_A_BranFlakes;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\data\CfgVehicles\Plane_Civil_01_HIMF_F.jpg";
	scope = public;
	scopeCurator = public;
	radarTargetSize = 1.8;
	side = TWest;
	faction = Atlas_BLU_H_F;
	crew = Atlas_B_H_Helipilot_F;
	typicalCargo[] = {Atlas_B_H_Helipilot_F};
	textureList[] = {HIMF,1};
	hiddenSelectionsTextures[] = 
	{
		"A3_Atlas\Air_F_Atlas\Plane_Civil_01\Data\btt_ext_01_HIMF_CO.paa",
		"A3_Atlas\Air_F_Atlas\Plane_Civil_01\Data\btt_ext_02_HIMF_CO.paa",
		"A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa",
		"A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"
	};
};