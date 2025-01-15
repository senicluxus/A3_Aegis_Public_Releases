/* Malden Civilian Vans */
class Aegis_C_Van_02_minibus_Malden_F: C_Van_02_transport_F
{
	author = $STR_A3_A_BranFlakes;
	scope = public;
	displayName = $STR_A3_A_CfgVehicles_van_02_minibus_base_f0;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_C_Van_02_minibus_Malden_F.jpg";
	faction = Aegis_CIV_MA_F;
	crew = Aegis_C_Man_BusDriver_F_malden;
	typicalCargo[] = {Aegis_C_man_polo_1_F_malden};
	hiddenSelectionsTextures[] = 
	{
        "A3_Aegis\soft_f_aegis\Van_02\Data\van_body_malden_bus_co.paa",
        "\A3\Soft_F_Orange\Van_02\Data\van_wheel_transport_CO.paa",
        "\A3\Soft_F_Orange\Van_02\Data\van_glass_transport_CA.paa",
        "A3_Aegis\soft_f_aegis\Van_02\Data\van_body_malden_bus_co.paa"
    };
	textureList[] = {Malden_Bus,1};
};
class Aegis_C_Van_02_transport_Malden_F: C_Van_02_transport_F
{
	author = $STR_A3_A_Ravenholme;
	scope = public;
	faction = Aegis_CIV_MA_F;
	crew = Aegis_C_man_polo_1_F_malden;
	typicalCargo[] = {Aegis_C_man_polo_1_F_malden};
};
class Aegis_C_Van_02_service_Malden_F: C_Van_02_service_F
{
	author = $STR_A3_A_Ravenholme;
	scope = public;
	forceinGarage = 0;
	faction = Aegis_CIV_MA_F;
	crew = Aegis_C_Man_UtilityWorker_01_F_malden;
	typicalCargo[] = {Aegis_C_Man_UtilityWorker_01_F_malden};
};
class Aegis_C_Van_02_medevac_Malden_F: C_Van_02_medevac_F
{
	author = $STR_A3_A_BranFlakes;
	scope = public;
	displayName = $STR_A3_CfgVehicles_Van_02_medevac_base_F0;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_C_Van_02_medevac_Malden_F.jpg";
	faction = Aegis_CIV_MA_F;
	crew = Aegis_C_Man_Paramedic_01_F_malden;
	typicalCargo[] = {Aegis_C_man_polo_1_F_tanoan};
	hiddenSelections[] = {"camo1","camo2","camo3","monitors","emergency_lights"};
	hiddenSelectionsTextures[] = 
	{
		"A3_Aegis\soft_f_aegis\van_02\Data\van_body_malden_medevac_co.paa",
		"\a3\soft_f_orange\van_02\data\van_wheel_transport_CO.paa",
		"\A3_Aegis\soft_f_aegis\van_02\data\van_glass_malden_medevac_CA.paa",
		"\a3\soft_f_orange\van_02\data\van_ambulance_monitors_co.paa",
		"A3_Aegis\soft_f_aegis\van_02\Data\van_body_malden_medevac_co.paa",
	};
	textureList[] = {Malden_Ambulance,1};
};