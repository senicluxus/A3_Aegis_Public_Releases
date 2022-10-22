/* ADF */
class Atlas_B_A_Plane_Transport_01_infantry_F: Plane_Transport_01_infantry_base_F
{
	author = $STR_A3_A_BranFlakes;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\data\CfgVehicles\Atlas_B_A_Plane_Transport_01_infantry_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_A_CfgVehicles_Plane_Transport_01_infantry_base_F0;
	radarTargetSize = 1.8;
	side = TWest;
	faction = Atlas_BLU_A_F;
	crew = Atlas_B_A_Pilot_F;
	typicalCargo[] = {Atlas_B_A_Pilot_F};
	textureList[] = {ADF,1};
	hiddenSelectionsTextures[] =
	{
		"\A3_atlas\Air_F_atlas\Plane_Transport_01\Data\Plane_Transport_01_body_adf_CO.paa",
		"\A3_atlas\Air_F_atlas\Plane_Transport_01\Data\Plane_Transport_01_wings_adf_CO.paa",
		"\A3_Aegis\Air_F_Aegis\Plane_Transport_01\Data\Plane_Transport_01_interior_CO.paa"
	};
};
class Atlas_B_A_Plane_Transport_01_vehicle_F: Plane_Transport_01_vehicle_base_F
{
	author = $STR_A3_A_BranFlakes;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\data\CfgVehicles\Atlas_B_A_Plane_Transport_01_vehicle_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_A_CfgVehicles_Plane_Transport_01_vehicle_base_F0;
	radarTargetSize = 2;
	side = TWest;
	faction = Atlas_BLU_A_F;
	crew = Atlas_B_A_Pilot_F;
	typicalCargo[] = {Atlas_B_A_Pilot_F};
	textureList[] = {ADF,1};
	hiddenSelectionsTextures[] =
	{
		"\A3_atlas\Air_F_atlas\Plane_Transport_01\Data\Plane_Transport_01_body_adf_CO.paa",
		"\A3_atlas\Air_F_atlas\Plane_Transport_01\Data\Plane_Transport_01_wings_adf_CO.paa",
		"\A3_Aegis\Air_F_Aegis\Plane_Transport_01\Data\Plane_Transport_01_interior_CO.paa"
	};
};
