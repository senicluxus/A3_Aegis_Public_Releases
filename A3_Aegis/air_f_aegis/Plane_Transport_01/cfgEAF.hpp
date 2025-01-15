/* Strategic Airlift Capability */
class Aegis_I_E_Plane_Transport_01_infantry_F: Plane_Transport_01_infantry_base_F
{
	author = $STR_A3_A_BranFlakes;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\data\CfgVehicles\Aegis_I_E_Plane_Transport_01_infantry_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_A_CfgVehicles_Plane_Transport_01_infantry_base_F0;
	radarTargetSize = 1.8;
	side = TGuerrila;
	faction = IND_E_F;
	crew = Aegis_I_E_Pilot_F;
	typicalCargo[] = {Aegis_I_E_Pilot_F};
	textureList[] = {SAC,1};
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Air_F_Aegis\Plane_Transport_01\Data\Plane_Transport_01_body_SAC_CO.paa",
		"\A3_Aegis\Air_F_Aegis\Plane_Transport_01\Data\Plane_Transport_01_wings_SAC_CO.paa",
		"\A3_Aegis\Air_F_Aegis\Plane_Transport_01\Data\Plane_Transport_01_interior_CO.paa",
		"\A3_Aegis\Air_F_Aegis\Plane_Transport_01\Data\Plane_Transport_01_decal_SAC_CO.paa"
	};
};
class Aegis_I_E_Plane_Transport_01_vehicle_F: Plane_Transport_01_vehicle_base_F
{
	author = $STR_A3_A_BranFlakes;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\data\CfgVehicles\Aegis_I_E_Plane_Transport_01_infantry_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_A_CfgVehicles_Plane_Transport_01_vehicle_base_F0;
	radarTargetSize = 2;
	side = TGuerrila;
	faction = IND_E_F;
	crew = Aegis_I_E_Pilot_F;
	typicalCargo[] = {Aegis_I_E_Pilot_F};
	textureList[] = {SAC,1};
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Air_F_Aegis\Plane_Transport_01\Data\Plane_Transport_01_body_SAC_CO.paa",
		"\A3_Aegis\Air_F_Aegis\Plane_Transport_01\Data\Plane_Transport_01_wings_SAC_CO.paa",
		"\A3_Aegis\Air_F_Aegis\Plane_Transport_01\Data\Plane_Transport_01_interior_CO.paa",
		"\A3_Aegis\Air_F_Aegis\Plane_Transport_01\Data\Plane_Transport_01_decal_SAC_CO.paa"
	};
};
class Aegis_B_E_Plane_Transport_01_infantry_F: Aegis_I_E_Plane_Transport_01_infantry_F
{
	side = TWest;
	faction = BLU_EAF_F;
	crew = Aegis_B_E_Pilot_F;
	typicalCargo[] = {Aegis_B_E_Pilot_F};
};
class Aegis_B_E_Plane_Transport_01_vehicle_F: Aegis_I_E_Plane_Transport_01_vehicle_F
{
	side = TWest;
	faction = BLU_EAF_F;
	crew = Aegis_B_E_Pilot_F;
	typicalCargo[] = {Aegis_B_E_Pilot_F};
};
