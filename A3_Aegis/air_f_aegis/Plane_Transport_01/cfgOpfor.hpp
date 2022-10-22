/* IAF */
class O_Plane_Transport_01_infantry_F: Plane_Transport_01_infantry_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_Plane_Transport_01_infantry_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_A_CfgVehicles_O_Plane_Transport_01_infantry_F0;
	radarTargetSize = 2;
	side = TEast;
	faction = OPF_F;
	crew = O_pilot_F;
	typicalCargo[] = {O_pilot_F};
	textureList[] =
	{
		Hex,1,
		Grey,0
	};
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Air_F_Aegis\Plane_Transport_01\Data\Plane_Transport_01_body_OPFOR_CO.paa",
		"\A3_Aegis\Air_F_Aegis\Plane_Transport_01\Data\Plane_Transport_01_wings_OPFOR_CO.paa",
		"\A3_Aegis\Air_F_Aegis\Plane_Transport_01\Data\Plane_Transport_01_interior_OPFOR_CO.paa"
	};
};
class O_Plane_Transport_01_vehicle_F: Plane_Transport_01_vehicle_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_Plane_Transport_01_vehicle_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_A_CfgVehicles_O_Plane_Transport_01_vehicle_F0;
	radarTargetSize = 2;
	side = TEast;
	faction = OPF_F;
	crew = O_pilot_F;
	typicalCargo[] = {O_pilot_F};
	textureList[] =
	{
		Hex,1,
		Grey,0
	};
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Air_F_Aegis\Plane_Transport_01\Data\Plane_Transport_01_body_OPFOR_CO.paa",
		"\A3_Aegis\Air_F_Aegis\Plane_Transport_01\Data\Plane_Transport_01_wings_OPFOR_CO.paa",
		"\A3_Aegis\Air_F_Aegis\Plane_Transport_01\Data\Plane_Transport_01_interior_OPFOR_CO.paa"
	};
};

/* China */
class O_T_Plane_Transport_01_infantry_ghex_F: O_Plane_Transport_01_infantry_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_T_Plane_Transport_01_infantry_ghex_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TEast;
	faction = OPF_T_F;
	crew = O_T_Pilot_F;
	typicalCargo[] = {O_T_Pilot_F};
	textureList[] =
	{
		GreenHex,1,
		Grey,0
	};
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Air_F_Aegis\Plane_Transport_01\Data\Plane_Transport_01_body_ghex_CO.paa",
		"\A3_Aegis\Air_F_Aegis\Plane_Transport_01\Data\Plane_Transport_01_wings_ghex_CO.paa",
		"\A3_Aegis\Air_F_Aegis\Plane_Transport_01\Data\Plane_Transport_01_interior_OPFOR_CO.paa"
	};
};
class O_T_Plane_Transport_01_vehicle_ghex_F: O_Plane_Transport_01_vehicle_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_T_Plane_Transport_01_vehicle_ghex_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TEast;
	faction = OPF_T_F;
	crew = O_T_Pilot_F;
	typicalCargo[] = {O_T_Pilot_F};
	textureList[] =
	{
		GreenHex,1,
		Grey,0
	};
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Air_F_Aegis\Plane_Transport_01\Data\Plane_Transport_01_body_ghex_CO.paa",
		"\A3_Aegis\Air_F_Aegis\Plane_Transport_01\Data\Plane_Transport_01_wings_ghex_CO.paa",
		"\A3_Aegis\Air_F_Aegis\Plane_Transport_01\Data\Plane_Transport_01_interior_OPFOR_CO.paa"
	};
};