/* LDF Base Classes */
class I_E_Heli_EC_01A_military_RF;

/* LDF BLUFOR */
class Aegis_B_E_Heli_EC_01A_military_RF: I_E_Heli_EC_01A_military_RF
{
    author = $STR_A3_A_Ravenholme;
    side = TWest;
	faction = BLU_EAF_F;
	crew = Aegis_B_E_Helipilot_F;
	typicalCargo[] = {Aegis_B_E_Soldier_F};
};

/* LDF Arid */

class Aegis_I_E_Heli_EC_01A_military_RF_ard: I_E_Heli_EC_01A_military_RF
{
    author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_I_E_Heli_EC_01A_military_RF_ard.jpg";
    side = TGuerrila;
	faction = IND_E_ard_F;
	crew = I_E_Helipilot_ard_F;
	typicalCargo[] = {I_E_Soldier_ard_F};
	textureList[] = {"EAF_arid",1};
	hiddenSelectionsTextures[] = 
	{
		"\A3_Aegis\Air_F_Aegis_rf\Heli_Medium_EC\Data\as332_exterior_ldf_arid_co.paa",
		"\lxRF\air_rf\heli_medium_ec\data\as332_int_cargo_co.paa",
		"#(rgb,1024,1024,1)ui('lxRF_MFDMinimap','lxRF_MFDMinimap')",
		"\A3_Aegis\Air_F_Aegis_rf\Heli_Medium_EC\Data\as332_adds_ldf_arid_CO.paa",
		"\A3_Aegis\Air_F_Aegis_rf\Heli_Medium_EC\Data\as332_exterior_ldf_arid_co.paa",
		"\lxRF\air_rf\heli_medium_ec\data\as332_int_cargo_co.paa"
	};
	class TransportWeapons
	{
		weap_xx(arifle_MSBS65_sand_F,2);
	};
};
class Aegis_B_E_Heli_EC_01A_military_RF_ard: Aegis_I_E_Heli_EC_01A_military_RF_ard
{
    author = $STR_A3_A_Ravenholme;
    side = TWest;
	faction = BLU_EAF_ard_F;
	crew = Aegis_B_E_Helipilot_ard_F;
	typicalCargo[] = {Aegis_B_E_Soldier_ard_F};
};