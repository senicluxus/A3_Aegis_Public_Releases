/* Civilian Base Classes */
class C_Heli_EC_04_Rescue_RF;
class C_Heli_EC_01_civ_RF;
class C_Heli_EC_01A_civ_RF;

/* Argana */
class Aegis_C_Heli_EC_01_civ_RF_lxWS : C_Heli_EC_01_civ_RF
{
    author = $STR_A3_A_Ravenholme;
    faction = Aegis_CIV_ARG_F;
    crew = Aegis_C_Pilot_RF_lxws;
	typicalCargo[] = {Aegis_C_Pilot_RF_lxws};
};
class Aegis_C_Heli_EC_01A_civ_RF_lxWS : C_Heli_EC_01A_civ_RF
{
    author = $STR_A3_A_Ravenholme;
    faction = Aegis_CIV_ARG_F;
    crew = Aegis_C_Pilot_RF_lxws;
	typicalCargo[] = {Aegis_C_Pilot_RF_lxws};
};

/* Horizon Islands */
class Aegis_C_Heli_EC_01_civ_RF_tanoa : C_Heli_EC_01_civ_RF
{
    author = $STR_A3_A_Ravenholme;
    faction = Aegis_CIV_HI_F;
    crew = Aegis_C_Pilot_RF_tanoan;
	typicalCargo[] = {Aegis_C_Pilot_RF_tanoan};
};
class Aegis_C_Heli_EC_01A_civ_RF_tanoa : C_Heli_EC_01A_civ_RF
{
    author = $STR_A3_A_Ravenholme;
    faction = Aegis_CIV_HI_F;
    crew = Aegis_C_Pilot_RF_tanoan;
	typicalCargo[] = {Aegis_C_Pilot_RF_tanoan};
};
class Aegis_C_Heli_EC_04_Rescue_RF_tanoa : C_Heli_EC_04_Rescue_RF
{
    author = $STR_A3_A_Ravenholme;
    faction = Aegis_CIV_HI_F;
    crew = Aegis_C_Pilot_Rescue_RF_tanoan;
	typicalCargo[] = {Aegis_C_Pilot_Rescue_RF_tanoan};
};

/* Livonia */
class Aegis_C_Heli_EC_01_civ_RF_Enoch : C_Heli_EC_01_civ_RF
{
    author = $STR_A3_A_Ravenholme;
    faction = Aegis_CIV_LIV_F;
    crew = Aegis_C_Pilot_RF_Enoch;
	typicalCargo[] = {Aegis_C_Pilot_RF_Enoch};
};
class Aegis_C_Heli_EC_01A_civ_RF_Enoch : C_Heli_EC_01A_civ_RF
{
    author = $STR_A3_A_Ravenholme;
    faction = Aegis_CIV_LIV_F;
    crew = Aegis_C_Pilot_RF_Enoch;
	typicalCargo[] = {Aegis_C_Pilot_RF_Enoch};
};
class Aegis_C_Heli_EC_04_Rescue_RF_Enoch : C_Heli_EC_04_Rescue_RF
{
    author = $STR_A3_A_Ravenholme;
    faction = Aegis_CIV_LIV_F;
    crew = Aegis_C_Pilot_Rescue_RF_Enoch;
	typicalCargo[] = {Aegis_C_Pilot_Rescue_RF_Enoch};
    textureList[] = {CIV_RED, 1};
	hiddenSelectionsTextures[] = 
    {
        "\lxRF\air_rf\heli_medium_ec\data\as332_exterior_35_red_co.paa", 
        "\lxRF\air_rf\heli_medium_ec\data\as332_int_cargo_light_co.paa", 
        "#(rgb,1024,1024,1)ui('lxRF_MFDMinimap','lxRF_MFDMinimap')", 
        "\lxRF\air_rf\heli_medium_ec\data\as332_adds_35_red_co.paa", 
        "\lxRF\air_rf\heli_medium_ec\data\as332_exterior_35_red_co.paa", 
        "\lxRF\air_rf\heli_medium_ec\data\as332_int_cargo_light_co.paa"
    };
};

/* Malden */
class Aegis_C_Heli_EC_01_civ_RF_Malden : C_Heli_EC_01_civ_RF
{
    author = $STR_A3_A_Ravenholme;
    faction = Aegis_CIV_MA_F;
    crew = Aegis_C_Pilot_RF_Malden;
	typicalCargo[] = {Aegis_C_Pilot_RF_Malden};
};
class Aegis_C_Heli_EC_01A_civ_RF_Malden : C_Heli_EC_01A_civ_RF
{
    author = $STR_A3_A_Ravenholme;
    faction = Aegis_CIV_MA_F;
    crew = Aegis_C_Pilot_RF_Malden;
	typicalCargo[] = {Aegis_C_Pilot_RF_Malden};
};
class Aegis_C_Heli_EC_04_Rescue_RF_Malden : C_Heli_EC_04_Rescue_RF
{
    author = $STR_A3_A_Ravenholme;
    faction = Aegis_CIV_MA_F;
    crew = Aegis_C_Pilot_Rescue_RF_Malden;
	typicalCargo[] = {Aegis_C_Pilot_Rescue_RF_Malden};
    textureList[] = {YELLOW, 1};
	hiddenSelectionsTextures[] = 
    {
        "\lxRF\air_rf\heli_medium_ec\data\as332_exterior_12_yellow_co.paa", 
        "\lxRF\air_rf\heli_medium_ec\data\as332_int_cargo_light_co.paa", 
        "#(rgb,1024,1024,1)ui('lxRF_MFDMinimap','lxRF_MFDMinimap')", 
        "\lxRF\air_rf\heli_medium_ec\data\as332_adds_12_yellow_co.paa", 
        "\lxRF\air_rf\heli_medium_ec\data\as332_exterior_12_yellow_co.paa", 
        "\lxRF\air_rf\heli_medium_ec\data\as332_int_cargo_light_co.paa"
    };
};