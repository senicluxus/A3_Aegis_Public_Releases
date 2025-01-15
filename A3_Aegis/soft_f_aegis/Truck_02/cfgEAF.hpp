/* LDF - BLUFOR */
class I_E_Truck_02_F;
class Aegis_B_E_Truck_02_F: I_E_Truck_02_F
{
	author = $STR_A3_A_Ravenholme;
	side = TWest;
	faction = BLU_EAF_F;
	crew = Aegis_B_E_Soldier_F;
	typicalCargo[] = {Aegis_B_E_Soldier_F};
};
class I_E_Truck_02_transport_F;
class Aegis_B_E_Truck_02_transport_F: I_E_Truck_02_transport_F
{
	author = $STR_A3_A_Ravenholme;
	side = TWest;
	faction = BLU_EAF_F;
	crew = Aegis_B_E_Soldier_F;
	typicalCargo[] = {Aegis_B_E_Soldier_F};
};
class I_E_Truck_02_ammo_F;
class Aegis_B_E_Truck_02_ammo_F: I_E_Truck_02_ammo_F
{
	author = $STR_A3_A_Ravenholme;
	side = TWest;
	faction = BLU_EAF_F;
	crew = Aegis_B_E_Soldier_F;
	typicalCargo[] = {Aegis_B_E_Soldier_F};
};
class I_E_Truck_02_box_F;
class Aegis_B_E_Truck_02_box_F: I_E_Truck_02_box_F
{
	author = $STR_A3_A_Ravenholme;
	side = TWest;
	faction = BLU_EAF_F;
	crew = Aegis_B_E_Soldier_F;
	typicalCargo[] = {Aegis_B_E_Soldier_F};
};
class I_E_Truck_02_fuel_F;
class Aegis_B_E_Truck_02_fuel_F: I_E_Truck_02_fuel_F
{
	author = $STR_A3_A_Ravenholme;
	side = TWest;
	faction = BLU_EAF_F;
	crew = Aegis_B_E_Soldier_F;
	typicalCargo[] = {Aegis_B_E_Soldier_F};
};
class I_E_Truck_02_medical_F;
class Aegis_B_E_Truck_02_medical_F: I_E_Truck_02_medical_F
{
	author = $STR_A3_A_Ravenholme;
	side = TWest;
	faction = BLU_EAF_F;
	crew = Aegis_B_E_Medic_F;
	typicalCargo[] = {Aegis_B_E_Medic_F};
};
class I_E_Truck_02_MRL_F;
class Aegis_B_E_Truck_02_MRL_F: I_E_Truck_02_MRL_F
{
	author = $STR_A3_A_Ravenholme;
	side = TWest;
	faction = BLU_EAF_F;
	crew = Aegis_B_E_Soldier_F;
	typicalCargo[] = {Aegis_B_E_Soldier_F};
};
class Aegis_B_E_Truck_02_cargo_lxWS: I_E_Truck_02_cargo_lxWS
{
	author = $STR_A3_A_Ravenholme;
	side = TWest;
	faction = BLU_EAF_F;
	crew = Aegis_B_E_Soldier_F;
	typicalCargo[] = {Aegis_B_E_Soldier_F};
};
class Aegis_B_E_Truck_02_flatbed_lxWS: I_E_Truck_02_flatbed_lxWS
{
	author = $STR_A3_A_Ravenholme;
	side = TWest;
	faction = BLU_EAF_F;
	crew = Aegis_B_E_Soldier_F;
	typicalCargo[] = {Aegis_B_E_Soldier_F};
};

/* LDF Arid - INDEP */
class Aegis_I_E_Truck_02_ard_F: I_E_Truck_02_F
{
    author = $STR_A3_A_BranFlakes;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_I_E_Truck_02_ard_F.jpg";
	faction = IND_E_ard_F;
	crew = I_E_Soldier_ard_F;
	typicalCargo[] = {Aegis_B_E_Soldier_ard_F};
    textureList[] = {EAF_Arid,1};
    hiddenSelectionsTextures[] =
    {
		"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kab_LDF_arid_CO.paa",
		"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kuz_LDF_arid_CO.paa",
		"\A3\soft_f_Enoch\Truck_02\Data\Truck_02_int_EAF_co.paa",
		"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_CO.paa"			
    };
	class EventHandlers
    {
        init = "_this#0 forceFlagTexture 'A3\data_f_enoch\flags\flag_enoch_co.paa'";
    };
};
class Aegis_I_E_Truck_02_transport_ard_F: I_E_Truck_02_transport_F
{
    author = $STR_A3_A_BranFlakes;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_I_E_Truck_02_transport_ard_F.jpg";
	faction = IND_E_ard_F;
	crew = I_E_Soldier_ard_F;
	typicalCargo[] = {Aegis_I_E_Soldier_ard_F};
    textureList[] = {EAF_Arid,1};
    hiddenSelectionsTextures[] =
    {
		"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kab_LDF_arid_CO.paa",
		"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kuz_LDF_arid_CO.paa",
		"\A3\soft_f_Enoch\Truck_02\Data\Truck_02_int_EAF_co.paa",
		"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_CO.paa"			
    };
	class EventHandlers
    {
        init = "_this#0 forceFlagTexture 'A3\data_f_enoch\flags\flag_enoch_co.paa'";
    };
};
class Aegis_I_E_Truck_02_ammo_ard_F: I_E_Truck_02_ammo_F
{
    author = $STR_A3_A_BranFlakes;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_I_E_Truck_02_ammo_ard_F.jpg";
	faction = IND_E_ard_F;
	crew = I_E_Soldier_ard_F;
	typicalCargo[] = {Aegis_I_E_Soldier_ard_F};
    textureList[] = {EAF_Arid,1};
    hiddenSelectionsTextures[] =
    {
		"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kab_LDF_arid_CO.paa",
		"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_repair_LDF_arid_CO.paa",
		"\A3\soft_f_Enoch\Truck_02\Data\Truck_02_int_EAF_co.paa",
		"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_CO.paa"				
    };
	class EventHandlers
    {
        init = "_this#0 forceFlagTexture 'A3\data_f_enoch\flags\flag_enoch_co.paa'";
    };
};
class Aegis_I_E_Truck_02_box_ard_F: I_E_Truck_02_box_F
{
    author = $STR_A3_A_BranFlakes;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_I_E_Truck_02_box_ard_F.jpg";
	faction = IND_E_ard_F;
	crew = I_E_Soldier_ard_F;
	typicalCargo[] = {Aegis_I_E_Soldier_ard_F};
    textureList[] = {EAF_Arid,1};
    hiddenSelectionsTextures[] =
    {
		"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kab_LDF_arid_CO.paa",
		"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_repair_LDF_arid_CO.paa",
		"\A3\soft_f_Enoch\Truck_02\Data\Truck_02_int_EAF_co.paa",
		"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_CO.paa"				
    };
	class EventHandlers
    {
        init = "_this#0 forceFlagTexture 'A3\data_f_enoch\flags\flag_enoch_co.paa'";
    };
};
class Aegis_I_E_Truck_02_fuel_ard_F: I_E_Truck_02_fuel_F
{
    author = $STR_A3_A_BranFlakes;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_I_E_Truck_02_fuel_ard_F.jpg";
	faction = IND_E_ard_F;
	crew = I_E_Soldier_ard_F;
	typicalCargo[] = {Aegis_I_E_Soldier_ard_F};
    textureList[] = {EAF_Arid,1};
    hiddenSelectionsTextures[] =
    {
		"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kab_LDF_arid_CO.paa",
		"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_fuel_LDF_arid_CO.paa",
		"\A3\soft_f_Enoch\Truck_02\Data\Truck_02_int_EAF_co.paa",
		"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_CO.paa"				
    };
	class EventHandlers
    {
        init = "_this#0 forceFlagTexture 'A3\data_f_enoch\flags\flag_enoch_co.paa'";
    };
};
class Aegis_I_E_Truck_02_medical_ard_F: I_E_Truck_02_medical_F
{
    author = $STR_A3_A_BranFlakes;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_I_E_Truck_02_medical_ard_F.jpg";
	faction = IND_E_ard_F;
	crew = I_E_Soldier_ard_F;
	typicalCargo[] = {Aegis_I_E_Soldier_ard_F};
    textureList[] = {EAF_Arid,1};
    hiddenSelectionsTextures[] =
    {
		"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kab_LDF_arid_CO.paa",
		"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kuz_LDF_arid_CO.paa",
		"\A3\soft_f_Enoch\Truck_02\Data\Truck_02_int_EAF_co.paa",
		"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_CO.paa"			
    };
	class EventHandlers
    {
        init = "_this#0 forceFlagTexture 'A3\data_f_enoch\flags\flag_enoch_co.paa'";
    };
};
class Aegis_I_E_Truck_02_MRL_ard_F: I_E_Truck_02_MRL_F
{
    author = $STR_A3_A_BranFlakes;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_I_E_Truck_02_MRL_ard_F.jpg";
	faction = IND_E_ard_F;
	crew = I_E_Soldier_ard_F;
	typicalCargo[] = {Aegis_I_E_Soldier_ard_F};
    textureList[] = {EAF_Arid,1};
    hiddenSelectionsTextures[] =
    {
		"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kab_LDF_arid_CO.paa",
		"\A3\soft_f_Enoch\Truck_02\Data\Truck_02_int_EAF_co.paa",
		"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_MRL_LDF_arid_CO.paa",
		"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_CO.paa"				
    };
	class EventHandlers
    {
        init = "_this#0 forceFlagTexture 'A3\data_f_enoch\flags\flag_enoch_co.paa'";
    };
};
class Aegis_I_E_Truck_02_cargo_ard_F: I_E_Truck_02_cargo_lxWS
{
	author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_I_E_Truck_02_Cargo_ard_F.jpg";
	faction = IND_E_ard_F;
	crew = I_E_Soldier_ard_F;
	typicalCargo[] = {Aegis_I_E_Soldier_ard_F};
    textureList[] = {EAF_Arid,1};
    hiddenSelectionsTextures[] =
    {
		"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kab_LDF_arid_CO.paa",
		"\lxws\vehicles_f_lxws\Truck_02\data\truck_02_cargo_EAF_CO.paa",
		"\A3\soft_f_Enoch\Truck_02\Data\Truck_02_int_EAF_co.paa",
		"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_CO.paa",
		"lxws\vehicles_f_lxws\Truck_02\data\addons_black_co.paa"			
    };
	class EventHandlers
    {
        init = "_this#0 forceFlagTexture 'A3\data_f_enoch\flags\flag_enoch_co.paa'";
    };
};
class Aegis_I_E_Truck_02_flatbed_ard_F: I_E_Truck_02_flatbed_lxWS
{
	author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_I_E_Truck_02_flatbed_ard_F.jpg";
	faction = IND_E_ard_F;
	crew = I_E_Soldier_ard_F;
	typicalCargo[] = {Aegis_I_E_Soldier_ard_F};
    textureList[] = {EAF_Arid,1};
    hiddenSelectionsTextures[] =
    {
		"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kab_LDF_arid_CO.paa",
		"\lxws\vehicles_f_lxws\Truck_02\data\truck_02_cargo_EAF_CO.paa",
		"\A3\soft_f_Enoch\Truck_02\Data\Truck_02_int_EAF_co.paa",
		"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_CO.paa",
		"lxws\vehicles_f_lxws\Truck_02\data\addons_black_co.paa"				
    };
	class EventHandlers
    {
        init = "_this#0 forceFlagTexture 'A3\data_f_enoch\flags\flag_enoch_co.paa'";
    };
};

/* LDF Arid - BLUFOR*/
class Aegis_B_E_Truck_02_ard_F: Aegis_I_E_Truck_02_ard_F
{
	author = $STR_A3_A_Ravenholme;
	side = TWest;
	faction = BLU_EAF_ard_F;
	crew = Aegis_B_E_Soldier_ard_F;
	typicalCargo[] = {Aegis_B_E_Soldier_ard_F};
};
class Aegis_B_E_Truck_02_transport_ard_F: Aegis_I_E_Truck_02_transport_ard_F
{
	author = $STR_A3_A_Ravenholme;
	side = TWest;
	faction = BLU_EAF_ard_F;
	crew = Aegis_B_E_Soldier_ard_F;
	typicalCargo[] = {Aegis_B_E_Soldier_ard_F};
};
class Aegis_B_E_Truck_02_ammo_ard_F: Aegis_I_E_Truck_02_ammo_ard_F
{
	author = $STR_A3_A_Ravenholme;
	side = TWest;
	faction = BLU_EAF_ard_F;
	crew = Aegis_B_E_Soldier_ard_F;
	typicalCargo[] = {Aegis_B_E_Soldier_ard_F};
};
class Aegis_B_E_Truck_02_box_ard_F: Aegis_I_E_Truck_02_box_ard_F
{
	author = $STR_A3_A_Ravenholme;
	side = TWest;
	faction = BLU_EAF_ard_F;
	crew = Aegis_B_E_Soldier_ard_F;
	typicalCargo[] = {Aegis_B_E_Soldier_ard_F};
};
class Aegis_B_E_Truck_02_fuel_ard_F: Aegis_I_E_Truck_02_fuel_ard_F
{
	author = $STR_A3_A_Ravenholme;
	side = TWest;
	faction = BLU_EAF_ard_F;
	crew = Aegis_B_E_Soldier_ard_F;
	typicalCargo[] = {Aegis_B_E_Soldier_ard_F};
};
class Aegis_B_E_Truck_02_medical_ard_F: Aegis_I_E_Truck_02_medical_ard_F
{
	author = $STR_A3_A_Ravenholme;
	side = TWest;
	faction = BLU_EAF_ard_F;
	crew = Aegis_B_E_Soldier_ard_F;
	typicalCargo[] = {Aegis_B_E_Soldier_ard_F};
};
class Aegis_B_E_Truck_02_MRL_ard_F: Aegis_I_E_Truck_02_MRL_ard_F
{
	author = $STR_A3_A_Ravenholme;
	side = TWest;
	faction = BLU_EAF_ard_F;
	crew = Aegis_B_E_Soldier_ard_F;
	typicalCargo[] = {Aegis_B_E_Soldier_ard_F};
};
class Aegis_B_E_Truck_02_cargo_ard_F: Aegis_I_E_Truck_02_cargo_ard_F
{
	author = $STR_A3_A_Ravenholme;
	side = TWest;
	faction = BLU_EAF_ard_F;
	crew = Aegis_B_E_Soldier_ard_F;
	typicalCargo[] = {Aegis_B_E_Soldier_ard_F};
};
class Aegis_B_E_Truck_02_flatbed_ard_F: Aegis_I_E_Truck_02_flatbed_ard_F
{
	author = $STR_A3_A_Ravenholme;
	side = TWest;
	faction = BLU_EAF_ard_F;
	crew = Aegis_B_E_Soldier_ard_F;
	typicalCargo[] = {Aegis_B_E_Soldier_ard_F};
};