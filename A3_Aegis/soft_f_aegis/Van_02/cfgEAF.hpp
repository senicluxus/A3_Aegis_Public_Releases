/* LDF Arid */
class I_E_Van_02_medevac_F;
class I_E_Van_02_transport_MP_F;
class I_E_Van_02_transport_F;
class I_E_Van_02_vehicle_F;

class Aegis_I_E_Van_02_transport_ard_F: I_E_Van_02_transport_F
{
	author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_I_E_Van_02_transport_ard_F.jpg";
	faction = IND_E_ard_F;
	crew = I_E_Soldier_ard_F;
	typicalCargo[] = {I_E_Soldier_ard_F};
	hiddenSelectionsTextures[] = 
	{
		"A3_Aegis\soft_f_aegis\Van_02\Data\van_02_body_EAF_arid_CO.paa",
		"a3\Soft_F_enoch\Van_02\Data\van_wheel_ldf_MP_CO.paa",
		"a3\soft_f_enoch\van_02\data\van_glass_MP_CA.paa",
		"A3_Aegis\soft_f_aegis\Van_02\Data\van_02_body_EAF_arid_CO.paa"
	};
	textureList[] = {LDF_Arid,1};
	class EventHandlers
    {
        init = "_this#0 forceFlagTexture 'A3\data_f_enoch\flags\flag_enoch_co.paa'";
    };
};
class Aegis_I_E_Van_02_vehicle_ard_F: I_E_Van_02_vehicle_F
{
	author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_I_E_Van_02_vehicle_ard_F.jpg";
	faction = IND_E_ard_F;
	crew = I_E_Soldier_ard_F;
	typicalCargo[] = {I_E_Soldier_ard_F};
	hiddenSelectionsTextures[] = 
	{
		"A3_Aegis\soft_f_aegis\Van_02\Data\van_02_body_EAF_arid_CO.paa",
		"a3\Soft_F_enoch\Van_02\Data\van_wheel_ldf_MP_CO.paa",
		"a3\soft_f_orange\van_02\data\van_glass_utility_ca.paa",
		"A3_Aegis\soft_f_aegis\Van_02\Data\van_02_body_EAF_arid_CO.paa"
	};
	textureList[] = {LDF_Arid,1};
	class EventHandlers
    {
        init = "_this#0 forceFlagTexture 'A3\data_f_enoch\flags\flag_enoch_co.paa'";
    };
};
class Aegis_I_E_Van_02_medevac_ard_F: I_E_Van_02_medevac_F
{
	author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_I_E_Van_02_medevac_arid_F.jpg";
	faction = IND_E_ard_F;
	crew = I_E_Soldier_ard_F;
	typicalCargo[] = {I_E_Soldier_ard_F};
	hiddenSelectionsTextures[] = 
	{
		"A3_Aegis\soft_f_aegis\Van_02\Data\van_body_LdfAmbulance_arid_CO.paa",
		"a3\Soft_F_enoch\Van_02\Data\van_wheel_ldf_MP_CO.paa",
		"a3\Soft_F_Enoch\Van_02\Data\van_glass_medevac_ldf_CA.paa",
		"a3\soft_f_orange\van_02\data\van_ambulance_monitors_co.paa",
		"A3_Aegis\soft_f_aegis\Van_02\Data\van_body_LdfAmbulance_arid_CO.paa"
	};
	textureList[] = {"LDF_Ambulance_Arid",1};
};

/* LDF - BLUFOR */
class Aegis_B_E_Van_02_medevac_F: I_E_Van_02_medevac_F
{
	author = $STR_A3_A_Ravenholme;
	side = TWest;
	faction = BLU_EAF_F;
	crew = Aegis_B_E_Medic_F;
	typicalCargo[] = {Aegis_B_E_Medic_F};
};

class Aegis_B_E_Van_02_MP_F: I_E_Van_02_transport_MP_F
{
	author = $STR_A3_A_Ravenholme;
	side = TWest;
	faction = BLU_EAF_F;
	crew = Aegis_B_E_Soldier_MP_F;
	typicalCargo[] = {Aegis_B_E_Soldier_MP_F};
};

class Aegis_B_E_Van_02_transport_F: I_E_Van_02_transport_F
{
	author = $STR_A3_A_Ravenholme;
	side = TWest;
	faction = BLU_EAF_F;
	crew = Aegis_B_E_Soldier_F;
	typicalCargo[] = {Aegis_B_E_Soldier_F};
};

class Aegis_B_E_Van_02_Vehicle_F: I_E_Van_02_vehicle_F
{
	author = $STR_A3_A_Ravenholme;
	side = TWest;
	faction = BLU_EAF_F;
	crew = Aegis_B_E_Soldier_F;
	typicalCargo[] = {Aegis_B_E_Soldier_F};
};

/* LDF BLUFOR Arid*/
class Aegis_B_E_Van_02_transport_ard_F: Aegis_I_E_Van_02_transport_ard_F
{
	author = $STR_A3_A_Ravenholme;
	side = TWest;
	faction = BLU_EAF_ard_F;
	crew = Aegis_B_E_Soldier_ard_F;
	typicalCargo[] = {Aegis_B_E_Soldier_ard_F};
};

class Aegis_B_E_Van_02_Vehicle_ard_F: Aegis_I_E_Van_02_vehicle_ard_F
{
	author = $STR_A3_A_Ravenholme;
	side = TWest;
	faction = BLU_EAF_ard_F;
	crew = Aegis_B_E_Soldier_ard_F;
	typicalCargo[] = {Aegis_B_E_Soldier_ard_F};
};
class Aegis_B_E_Van_02_medevac_ard_F: Aegis_I_E_Van_02_medevac_ard_F
{
	author = $STR_A3_A_Ravenholme;
	side = TWest;
	faction = BLU_EAF_ard_F;
	crew = Aegis_B_E_Soldier_ard_F;
	typicalCargo[] = {Aegis_B_E_Soldier_ard_F};
};