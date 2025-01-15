/* LDF Base Classes */
class I_E_Heli_light_03_dynamicLoadout_RF;
class I_E_Heli_light_03_unarmed_RF;

/* LDF BLUFOR */
class Aegis_B_E_Heli_Light_03_dynamicLoadout_RF: I_E_Heli_light_03_dynamicLoadout_RF
{
    author = $STR_A3_A_Ravenholme;
    side = TWest;
	faction = BLU_EAF_F;
	crew = Aegis_B_E_Helipilot_F;
	typicalCargo[] = {Aegis_B_E_Soldier_F};
};
class Aegis_B_E_Heli_Light_03_unarmed_RF: I_E_Heli_light_03_unarmed_RF
{
    author = $STR_A3_A_Ravenholme;
    side = TWest;
	faction = BLU_EAF_F;
	crew = Aegis_B_E_Helipilot_F;
	typicalCargo[] = {Aegis_B_E_Soldier_F};
};
/* LDF Arid */
class Aegis_I_E_Heli_Light_03_dynamicLoadout_ard_RF: I_E_Heli_light_03_dynamicLoadout_RF
{
    author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_I_E_Heli_Light_03_dynamicLoadout_ard_RF.jpg";
    side = TGuerrila;
	faction = IND_E_ard_F;
	crew = I_E_Helipilot_ard_F;
	typicalCargo[] = {I_E_Soldier_ard_F};
	hiddenSelectionsTextures[] = 
	{
		"\A3_Aegis\Air_F_Aegis\Heli_Light_03\Data\Heli_Light_03_base_eaf_arid_co.paa",
		"\A3_Aegis\Air_F_Aegis_RF\Heli_Light_03\Data\Heli_Light_03_addons_ldf_arid_CO.paa"
	};
	textureList[] =
	{
		EAF_arid,1,
	};
	class TransportWeapons
	{
		weap_xx(arifle_MSBS65_sand_F,2);
	};
};
class Aegis_I_E_Heli_Light_03_unarmed_ard_RF: I_E_Heli_light_03_unarmed_RF
{
    author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_I_E_Heli_Light_03_unarmed_ard_RF.jpg";
    side = TGuerrila;
	faction = IND_E_ard_F;
	crew = I_E_Helipilot_ard_F;
	typicalCargo[] = {I_E_Soldier_ard_F};
	hiddenSelectionsTextures[] = 
	{
		"\A3_Aegis\Air_F_Aegis\Heli_Light_03\Data\Heli_Light_03_base_eaf_arid_co.paa",
		"\A3_Aegis\Air_F_Aegis_RF\Heli_Light_03\Data\Heli_Light_03_addons_ldf_arid_CO.paa"
	};
	textureList[] =
	{
		EAF_arid,1,
	};
	class TransportWeapons
	{
		weap_xx(arifle_MSBS65_sand_F,2);
	};
};
/* LDF Arid BLUFOR */
class Aegis_B_E_Heli_Light_03_dynamicloadout_ard_FR: Aegis_I_E_Heli_Light_03_dynamicLoadout_ard_RF
{
    author = $STR_A3_A_Ravenholme;
    side = TWest;
	faction = BLU_EAF_ard_F;
	crew = Aegis_B_E_Helipilot_ard_F;
	typicalCargo[] = {Aegis_B_E_Soldier_ard_F};
};
class Aegis_B_E_Heli_Light_03_unarmed_ard_RF: Aegis_I_E_Heli_Light_03_unarmed_ard_RF
{
    author = $STR_A3_A_Ravenholme;
    side = TWest;
	faction = BLU_EAF_ard_F;
	crew = Aegis_B_E_Helipilot_ard_F;
	typicalCargo[] = {Aegis_B_E_Soldier_ard_F};
};