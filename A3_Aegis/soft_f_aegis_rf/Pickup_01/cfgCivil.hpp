/* Civilian Base Classes */
class C_Pickup_RF;
class C_Pickup_Covered_RF;
class C_Pickup_Repair_RF;

/* Argana */
class Aegis_C_Pickup_lxWS: C_Pickup_RF
{
    author = $STR_A3_A_Ravenholme;
    faction = Aegis_CIV_ARG_F;
    crew = C_Djella_05_lxWS;
	typicalCargo[] = {C_Djella_05_lxWS};
    animationList[] = {"hide_bullbar", 1, "hide_snorkel", 0, "hide_frame", 0.8, "hide_trunk_cover", 0.9};
};
class Aegis_C_Pickup_Covered_lxWS: C_Pickup_Covered_RF
{
    author = $STR_A3_A_Ravenholme;
    faction = Aegis_CIV_ARG_F;
    crew = C_Djella_05_lxWS;
	typicalCargo[] = {C_Djella_05_lxWS};
    animationList[] = {"hide_bullbar", 0.5, "hide_snorkel", 0, "hide_sidesteps", 1, "hide_rack", 0.9, "hide_box", 0, "hide_box_door", 0};
    scopeArsenal = protected;
    forceInGarage = 0;
};

/* Horizon Islands */
class Aegis_C_Pickup_RF_Tanoa: C_Pickup_RF
{
    author = $STR_A3_A_Ravenholme;
    faction = Aegis_CIV_HI_F;
    crew = C_Man_casual_2_F_tanoan;
	typicalCargo[] = {C_Man_casual_2_F_tanoan};
};
class Aegis_C_Pickup_Covered_RF_Tanoa: C_Pickup_Covered_RF
{
    author = $STR_A3_A_Ravenholme;
    faction = Aegis_CIV_HI_F;
    crew = C_Man_casual_4_F_tanoan;
	typicalCargo[] = {C_Man_casual_4_F_tanoan};
    scopeArsenal = protected;
    forceInGarage = 0;
};
class Aegis_C_Pickup_Repair_RF_Tanoa: C_Pickup_Repair_RF
{
    author = $STR_A3_A_Ravenholme;
    faction = Aegis_CIV_HI_F;
    crew = Aegis_C_Man_UtilityWorker_01_F_Tanoan;
	typicalCargo[] = {Aegis_C_Man_UtilityWorker_01_F_Tanoan};
};

/* Livonia */
class Aegis_C_Pickup_RF_Enoch: C_Pickup_RF
{
    author = $STR_A3_A_Ravenholme;
    faction = Aegis_CIV_LIV_F;
    crew = C_Man_3_enoch_F;
	typicalCargo[] = {C_Man_3_enoch_F};
};
class Aegis_C_Pickup_Covered_RF_Enoch: C_Pickup_Covered_RF
{
    author = $STR_A3_A_Ravenholme;
    faction = Aegis_CIV_LIV_F;
    crew = Aegis_C_Man_casual_1_F_Enoch;
	typicalCargo[] = {Aegis_C_Man_casual_1_F_Enoch};
    scopeArsenal = protected;
    forceInGarage = 0;
};
class Aegis_C_Pickup_Repair_RF_Enoch: C_Pickup_Repair_RF
{
    author = $STR_A3_A_Ravenholme;
    faction = Aegis_CIV_LIV_F;
    editorPreview = "\A3_Aegis\Editorpreviews_F_Aegis\Data\CfgVehicles\Aegis_C_Pickup_Repair_RF_Enoch.jpg";
    crew = Aegis_C_Man_UtilityWorker_01_F_Enoch;
	typicalCargo[] = {Aegis_C_Man_UtilityWorker_01_F_Enoch};
	textureList[] = {RescueTeam, 1};
};

/* Malden */
class Aegis_C_Pickup_RF_Malden: C_Pickup_RF
{
    author = $STR_A3_A_Ravenholme;
    faction = Aegis_CIV_MA_F;
    crew = Aegis_C_man_polo_1_F_malden;
	typicalCargo[] = {Aegis_C_man_polo_1_F_malden};
};
class Aegis_C_Pickup_Covered_RF_Malden: C_Pickup_Covered_RF
{
    author = $STR_A3_A_Ravenholme;
    faction = Aegis_CIV_MA_F;
    crew = Aegis_C_Man_casual_6_v2_F_malden;
	typicalCargo[] = {Aegis_C_Man_casual_6_v2_F_malden};
    scopeArsenal = protected;
    forceInGarage = 0;
};
class Aegis_C_Pickup_Repair_RF_Malden: C_Pickup_Repair_RF
{
    author = $STR_A3_A_Ravenholme;
    faction = Aegis_CIV_MA_F;
    crew = Aegis_C_Man_UtilityWorker_01_F_malden;
	typicalCargo[] = {Aegis_C_Man_UtilityWorker_01_F_malden};
};