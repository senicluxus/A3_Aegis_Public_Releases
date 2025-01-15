/* Livonian Civs */
class Aegis_C_Van_02_transport_Enoch_F: C_Van_02_transport_F
{
	author = $STR_A3_A_Ravenholme;
	scope = public;
	faction = Aegis_CIV_LIV_F;
	crew = Aegis_C_Man_casual_1_F_Enoch;
	typicalCargo[] = {Aegis_C_Man_casual_1_F_Enoch};
};
class Aegis_C_Van_02_vehicle_Enoch_F: C_Van_02_vehicle_F
{
	author = $STR_A3_A_Ravenholme;
	scope = public;
	faction = Aegis_CIV_LIV_F;
	crew = Aegis_C_Man_Messenger_01_F_Enoch;
	typicalCargo[] = {Aegis_C_Man_Messenger_01_F_Enoch};
};
class Aegis_C_Van_02_Service_Enoch_F: C_Van_02_service_F
{
	author = $STR_A3_A_Ravenholme;
	scope = public;
	forceinGarage = 0;
	faction = Aegis_CIV_LIV_F;
	crew = Aegis_C_Man_UtilityWorker_01_F_Enoch;
	typicalCargo[] = {Aegis_C_Man_UtilityWorker_01_F_Enoch};
	textureList[] = {White,1};
    hiddenSelectionsTextures[] = 
	{
		"\a3\Soft_F_Orange\Van_02\Data\van_body_White_CO.paa",
		"\a3\soft_f_orange\van_02\data\van_wheel_co.paa",
		"\a3\soft_f_orange\van_02\data\van_glass_utility_CA.paa",
		"\a3\Soft_F_Orange\Van_02\Data\van_body_White_CO.paa"
	};
};
class Aegis_C_Van_02_medevac_Livonia_F: C_Van_02_medevac_F
{
	author = $STR_A3_A_BranFlakes;
	scope = public;
	displayName = $STR_A3_CfgVehicles_Van_02_medevac_base_F0;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_C_Van_02_medevac_Livonia_F.jpg";
	faction = Aegis_CIV_LIV_F;
	crew = Aegis_C_Man_Paramedic_01_F_Enoch;
	typicalCargo[] = {Aegis_C_Man_Paramedic_01_F_Enoch};
	hiddenSelections[] = {"camo1","camo2","camo3","monitors","emergency_lights"};
	hiddenSelectionsTextures[] = 
	{
		"A3_Aegis\soft_f_aegis\van_02\Data\van_body_livonia_medevac_co.paa",
		"\a3\soft_f_orange\van_02\data\van_wheel_transport_CO.paa",
		"\A3_Aegis\soft_f_aegis\van_02\data\van_glass_livonia_medevac_CA.paa",
		"\a3\soft_f_orange\van_02\data\van_ambulance_monitors_co.paa",
		"A3_Aegis\soft_f_aegis\van_02\Data\van_body_livonia_medevac_co.paa",
	};
	textureList[] = {Livonia_Ambulance,1};
};