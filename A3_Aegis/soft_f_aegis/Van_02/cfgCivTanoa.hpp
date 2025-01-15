class Aegis_C_Van_02_medevac_Tanoa_F: C_Van_02_medevac_F
{
	author = $STR_A3_A_BranFlakes;
	scope = public;
	displayName = $STR_A3_CfgVehicles_Van_02_medevac_base_F0;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_C_Van_02_medevac_Tanoa_F.jpg";
	faction = Aegis_CIV_HI_F;
	crew = Aegis_C_man_Paramedic_01_F_tanoan;
	typicalCargo[] = {Aegis_C_man_polo_1_F_tanoan};
	hiddenSelections[] = {"camo1","camo2","camo3","monitors","emergency_lights"};
	hiddenSelectionsTextures[] = 
	{
		"A3_Aegis\soft_f_aegis\van_02\Data\van_body_tanoa_medevac_co.paa",
		"\a3\soft_f_orange\van_02\data\van_wheel_transport_CO.paa",
		"\A3_Aegis\soft_f_aegis\van_02\data\van_glass_tanoa_medevac_CA.paa",
		"\a3\soft_f_orange\van_02\data\van_ambulance_monitors_co.paa",
		"A3_Aegis\soft_f_aegis\van_02\Data\van_body_tanoa_medevac_co.paa",
	};
	textureList[] = {Tanoa_Ambulance,1};
};
class Aegis_C_Van_02_transport_Tanoa_F: C_Van_02_transport_F
{
	author = $STR_A3_A_Ravenholme;
	scope = public;
	faction = Aegis_CIV_HI_F;
	crew = Aegis_C_man_polo_6_F_tanoan;
	typicalCargo[] = {Aegis_C_man_polo_6_F_tanoan};
};
class Aegis_C_Van_02_vehicle_Tanoa_F: C_Van_02_vehicle_F
{
	author = $STR_A3_A_Ravenholme;
	scope = public;
	faction = Aegis_CIV_HI_F;
	crew = Aegis_C_Man_Messenger_01_F_Tanoan;
	typicalCargo[] = {Aegis_C_Man_Messenger_01_F_Tanoan};
};
class Aegis_C_Van_02_Service_Tanoa_F: C_Van_02_service_F
{
	author = $STR_A3_A_Ravenholme;
	scope = public;
	forceinGarage = 0;
	faction = Aegis_CIV_HI_F;
	crew = Aegis_C_Man_UtilityWorker_01_F_Tanoan;
	typicalCargo[] = {Aegis_C_Man_UtilityWorker_01_F_Tanoan};
};