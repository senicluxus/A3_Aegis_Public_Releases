class Aegis_C_Van_02_medevac_Argana_F: C_Van_02_medevac_F
{
	author = $STR_A3_A_BranFlakes;
	scope = public;
	displayName = $STR_A3_CfgVehicles_Van_02_medevac_base_F0;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_C_Van_02_medevac_Argana_F.jpg";
	faction = Aegis_CIV_ARG_F;
	crew = Aegis_C_Man_Paramedic_01_lxWS_F;
	typicalCargo[] = {C_Tak_01_A_lxWS};
	hiddenSelectionsTextures[] = 
	{
		"A3_Aegis\soft_f_aegis\van_02\Data\van_body_argana_medevac_co.paa",
		"a3\soft_f_orange\van_02\data\van_wheel_transport_CO.paa",
		"A3_Aegis\soft_f_aegis\van_02\data\van_glass_argana_medevac_CA.paa",
		"a3\soft_f_orange\van_02\data\van_ambulance_monitors_co.paa",
		"A3_Aegis\soft_f_aegis\van_02\Data\van_body_argana_medevac_co.paa"
	};
	textureList[] = {Argana_Ambulance,1};
};
class Aegis_C_Van_02_transport_Argana_F: C_Van_02_transport_F
{
	author = $STR_A3_A_Ravenholme;
	scope = public;
	faction = Aegis_CIV_ARG_F;
	crew = C_Djella_01_lxWS;
	typicalCargo[] = {C_Djella_01_lxWS};
};
class Aegis_C_Van_02_vehicle_Argana_F: C_Van_02_vehicle_F
{
	author = $STR_A3_A_Ravenholme;
	scope = public;
	faction = Aegis_CIV_ARG_F;
	crew = C_Djella_05_lxWS;
	typicalCargo[] = {C_Djella_05_lxWS};
};
class Aegis_C_Van_02_Service_Argana_F: C_Van_02_service_F
{
	author = $STR_A3_A_Ravenholme;
	scope = public;
	forceinGarage = 0;
	faction = Aegis_CIV_ARG_F;
	crew = Aegis_C_Man_UtilityWorker_01_lxWS_F;
	typicalCargo[] = {Aegis_C_Man_UtilityWorker_01_lxWS_F};
	textureList[] = {White,1};
	hiddenSelectionsTextures[] = 
	{
		"\a3\Soft_F_Orange\Van_02\Data\van_body_White_CO.paa",
		"\a3\soft_f_orange\van_02\data\van_wheel_co.paa",
		"\a3\soft_f_orange\van_02\data\van_glass_utility_CA.paa",
		"\a3\Soft_F_Orange\Van_02\Data\van_body_White_CO.paa"
	};
};