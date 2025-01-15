/* Civilian*/
class Aegis_C_Plane_Transport_01_civil_F: Aegis_Plane_Transport_01_civil_base_F
{
	author = $STR_A3_A_Lowaltitude;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_C_Plane_Transport_01_civil_F.jpg";
	scope = public;
	scopeCurator = public;
	scopeArsenal = public;
	forceInGarage = 1;
	displayName = $STR_A3_A_CfgVehicles_Plane_Transport_01_civil_base_F0;
	radarTargetSize = 2;
	faction = CIV_F;
	side = TCivilian;
	crew = Aegis_C_Man_CargoPilot_F;
	typicalCargo[] = {Aegis_C_Man_CargoPilot_F};
	textureList[] =
	{
		WhiteTwoTone,1,
		AirFreight,1,
        White,0,
        //Armazon,0,
		AltAir,0
	};
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Air_F_Aegis\Plane_Transport_01\Data\Plane_Transport_01_body_white_CO.paa",
		"\A3_Aegis\Air_F_Aegis\Plane_Transport_01\Data\Plane_Transport_01_wings_twotone_CO.paa",
		"\A3_Aegis\Air_F_Aegis\Plane_Transport_01\Data\Plane_Transport_01_interior_CO.paa"
	};
};

/* Argana */
class Aegis_C_Plane_Transport_01_civil_F_LXWS: Aegis_C_Plane_Transport_01_civil_F
{
	faction = Aegis_CIV_ARG_F;
	side = TCivilian;
	scopeArsenal = private;
	forceInGarage = 0;
	crew = Aegis_C_Man_CargoPilot_lxWS_F;
	typicalCargo[] = {Aegis_C_Man_CargoPilot_lxWS_F};
};

/* Livonia */
class Aegis_C_Plane_Transport_01_civil_F_Enoch: Aegis_C_Plane_Transport_01_civil_F
{
	faction = Aegis_CIV_LIV_F;
	side = TCivilian;
	scopeArsenal = private;
	forceInGarage = 0;
	crew = Aegis_C_Man_CargoPilot_enoch_F;
	typicalCargo[] = {Aegis_C_Man_CargoPilot_enoch_F};
};

/* Malden */
class Aegis_C_Plane_Transport_01_civil_F_Malden: Aegis_C_Plane_Transport_01_civil_F
{
	faction = Aegis_CIV_MA_F;
	side = TCivilian;
	scopeArsenal = private;
	forceInGarage = 0;
	crew = Aegis_C_Man_CargoPilot_malden_F;
	typicalCargo[] = {Aegis_C_Man_CargoPilot_malden_F};
};

/* Tanoa */
class Aegis_C_Plane_Transport_01_civil_F_Tanoa: Aegis_C_Plane_Transport_01_civil_F
{
	faction = Aegis_CIV_HI_F;
	side = TCivilian;
	scopeArsenal = private;
	forceInGarage = 0;
	crew = Aegis_C_Man_CargoPilot_tna_F;
	typicalCargo[] = {Aegis_C_Man_CargoPilot_tna_F};
};

/* IDAP */
class Aegis_C_IDAP_Plane_Transport_01_civil_F: Aegis_Plane_Transport_01_civil_base_F
{
	author = $STR_A3_A_Lowaltitude;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_C_IDAP_Plane_Transport_01_civil_F.jpg";
	scope = public;
	scopeCurator = public;
	scopeArsenal = private;
	forceInGarage = 0;
	displayName = $STR_A3_A_CfgVehicles_Plane_Transport_01_civil_base_F0;
	radarTargetSize = 2;
	faction = CIV_IDAP_F;
	side = TCivilian;
	crew = C_IDAP_Pilot_01_F;
	typicalCargo[] = {C_IDAP_Pilot_01_F};
	textureList[] =
	{
		IDAP,1
	};
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Air_F_Aegis\Plane_Transport_01\Data\Plane_Transport_01_body_white_CO.paa",
		"\A3_Aegis\Air_F_Aegis\Plane_Transport_01\Data\Plane_Transport_01_wings_IDAP_CO.paa",
		"\A3_Aegis\Air_F_Aegis\Plane_Transport_01\Data\Plane_Transport_01_interior_CO.paa"
	};
};