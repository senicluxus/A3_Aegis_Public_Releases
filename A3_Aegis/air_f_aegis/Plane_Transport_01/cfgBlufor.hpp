/* US */
class B_Plane_Transport_01_infantry_F: Plane_Transport_01_infantry_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_Plane_Transport_01_infantry_F.jpg";
	scope = protected;
	scopeCurator = private;
	displayName = $STR_A3_A_CfgVehicles_Plane_Transport_01_infantry_base_F0;
	radarTargetSize = 1.8;
	side = TWest;
	faction = BLU_F;
	crew = B_Pilot_F;
	typicalCargo[] = {B_Pilot_F};
	textureList[] =
	{
		Blue,1,
		Olive,0
	};
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Air_F_Aegis\Plane_Transport_01\Data\Plane_Transport_01_body_blue_CO.paa",
		"\A3_Aegis\Air_F_Aegis\Plane_Transport_01\Data\Plane_Transport_01_wings_blue_CO.paa",
		"\A3_Aegis\Air_F_Aegis\Plane_Transport_01\Data\Plane_Transport_01_interior_CO.paa"
	};
};
class B_Plane_Transport_01_vehicle_F: Plane_Transport_01_vehicle_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_Plane_Transport_01_vehicle_F.jpg";
	scope = protected;
	scopeCurator = private;
	displayName = $STR_A3_A_CfgVehicles_Plane_Transport_01_vehicle_base_F0;
	radarTargetSize = 2;
	side = TWest;
	faction = BLU_F;
	crew = B_Pilot_F;
	typicalCargo[] = {B_Pilot_F};
	textureList[] =
	{
		Blue,1,
		Olive,0
	};
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Air_F_Aegis\Plane_Transport_01\Data\Plane_Transport_01_body_blue_CO.paa",
		"\A3_Aegis\Air_F_Aegis\Plane_Transport_01\Data\Plane_Transport_01_wings_blue_CO.paa",
		"\A3_Aegis\Air_F_Aegis\Plane_Transport_01\Data\Plane_Transport_01_interior_CO.paa"
	};
};

/* US (Pacific) */
class B_T_Plane_Transport_01_infantry_F: B_Plane_Transport_01_infantry_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_T_Plane_Transport_01_infantry_F.jpg";
	scope = protected;
	scopeCurator = private;
	side = TWest;
	faction = BLU_T_F;
	crew = B_T_Pilot_F;
	typicalCargo[] = {B_T_Pilot_F};
};
class B_T_Plane_Transport_01_vehicle_F: B_Plane_Transport_01_vehicle_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_T_Plane_Transport_01_vehicle_F.jpg";
	scope = protected;
	scopeCurator = private;
	side = TWest;
	faction = BLU_T_F;
	crew = B_T_Pilot_F;
	typicalCargo[] = {B_T_Pilot_F};
};

/* US (Woodland) */
class B_W_Plane_Transport_01_infantry_F: B_Plane_Transport_01_infantry_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_Plane_Transport_01_infantry_F.jpg";
	scope = protected;
	scopeCurator = private;
	side = TWest;
	faction = BLU_W_F;
	crew = B_W_Pilot_F;
	typicalCargo[] = {B_W_Pilot_F};
};
class B_W_Plane_Transport_01_vehicle_F: B_Plane_Transport_01_vehicle_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_Plane_Transport_01_vehicle_F.jpg";
	scope = protected;
	scopeCurator = private;
	side = TWest;
	faction = BLU_W_F;
	crew = B_W_Pilot_F;
	typicalCargo[] = {B_W_Pilot_F};
};

/* BAF */
class B_A_Plane_Transport_01_infantry_F: B_Plane_Transport_01_infantry_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Plane_Transport_01_infantry_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TWest;
	faction = BLU_A_F;
	crew = B_A_Pilot_F;
	typicalCargo[] = {B_A_Pilot_F};
	textureList[] = {BAF,1};
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Air_F_Aegis\Plane_Transport_01\Data\Plane_Transport_01_body_BAF_CO.paa",
		"\A3_Aegis\Air_F_Aegis\Plane_Transport_01\Data\Plane_Transport_01_wings_BAF_CO.paa",
		"\A3_Aegis\Air_F_Aegis\Plane_Transport_01\Data\Plane_Transport_01_interior_CO.paa",
		"\A3_Aegis\Air_F_Aegis\Plane_Transport_01\Data\Plane_Transport_01_decals_baf_ca.paa"
	};
};
class B_A_Plane_Transport_01_vehicle_F: B_Plane_Transport_01_vehicle_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Plane_Transport_01_infantry_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TWest;
	faction = BLU_A_F;
	crew = B_A_Pilot_F;
	typicalCargo[] = {B_A_Pilot_F};
	textureList[] = {BAF,1};
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Air_F_Aegis\Plane_Transport_01\Data\Plane_Transport_01_body_BAF_CO.paa",
		"\A3_Aegis\Air_F_Aegis\Plane_Transport_01\Data\Plane_Transport_01_wings_BAF_CO.paa",
		"\A3_Aegis\Air_F_Aegis\Plane_Transport_01\Data\Plane_Transport_01_interior_CO.paa",
		"\A3_Aegis\Air_F_Aegis\Plane_Transport_01\Data\Plane_Transport_01_decals_baf_ca.paa"
	};
};

/* BAF (Pacific) */
class B_A_Plane_Transport_01_infantry_tna_F: B_A_Plane_Transport_01_infantry_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Plane_Transport_01_infantry_tna_F.jpg";
	faction = BLU_A_tna_F;
	crew = B_A_Pilot_tna_F;
	typicalCargo[] = {B_A_Pilot_tna_F};
	textureList[] = {BAF_Grey,1};
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Air_F_Aegis\Plane_Transport_01\Data\Plane_Transport_01_body_grey_BAF_CO.paa",
		"\A3_Aegis\Air_F_Aegis\Plane_Transport_01\Data\Plane_Transport_01_wings_grey_BAF_CO.paa",
		"\A3_Aegis\Air_F_Aegis\Plane_Transport_01\Data\Plane_Transport_01_interior_CO.paa",
		"\A3_Aegis\Air_F_Aegis\Plane_Transport_01\Data\Plane_Transport_01_decals_baf_ca.paa"
	};
};
class B_A_Plane_Transport_01_vehicle_tna_F: B_A_Plane_Transport_01_vehicle_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Plane_Transport_01_infantry_tna_F.jpg";
	faction = BLU_A_tna_F;
	crew = B_A_Pilot_tna_F;
	typicalCargo[] = {B_A_Pilot_tna_F};
	textureList[] = {BAF_Grey,1};
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Air_F_Aegis\Plane_Transport_01\Data\Plane_Transport_01_body_grey_BAF_CO.paa",
		"\A3_Aegis\Air_F_Aegis\Plane_Transport_01\Data\Plane_Transport_01_wings_grey_BAF_CO.paa",
		"\A3_Aegis\Air_F_Aegis\Plane_Transport_01\Data\Plane_Transport_01_interior_CO.paa",
		"\A3_Aegis\Air_F_Aegis\Plane_Transport_01\Data\Plane_Transport_01_decals_baf_ca.paa"
	};
};

/* BAF (Woodland) */
class B_A_Plane_Transport_01_infantry_wdl_F: B_A_Plane_Transport_01_infantry_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Plane_Transport_01_infantry_wdl_F.jpg";
	faction = BLU_A_wdl_F;
	crew = B_A_Pilot_wdl_F;
	typicalCargo[] = {B_A_Pilot_wdl_F};
};
class B_A_Plane_Transport_01_vehicle_wdl_F: B_A_Plane_Transport_01_vehicle_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Plane_Transport_01_vehicle_wdl_F.jpg";
	faction = BLU_A_wdl_F;
	crew = B_A_Pilot_wdl_F;
	typicalCargo[] = {B_A_Pilot_wdl_F};
};