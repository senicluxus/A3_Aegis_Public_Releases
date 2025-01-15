/* LDF BLUFOR */
class I_E_Heli_Light_03_dynamicLoadout_F;
class I_E_Heli_light_03_unarmed_F;
class Aegis_B_E_Heli_Light_03_dynamicLoadout_F: I_E_Heli_Light_03_dynamicLoadout_F
{
    author = $STR_A3_A_Ravenholme;
    side = TWest;
	faction = BLU_EAF_F;
	crew = Aegis_B_E_Helipilot_F;
	typicalCargo[] = {Aegis_B_E_Soldier_F};
};
class Aegis_B_E_Heli_Light_03_unarmed_F: I_E_Heli_Light_03_unarmed_F
{
    author = $STR_A3_A_Ravenholme;
    side = TWest;
	faction = BLU_EAF_F;
	crew = Aegis_B_E_Helipilot_F;
	typicalCargo[] = {Aegis_B_E_Soldier_F};
};
/* LDF Arid */
class Aegis_I_E_Heli_Light_03_dynamicLoadout_ard_F: I_E_Heli_Light_03_dynamicLoadout_F
{
    author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_I_E_Heli_Light_03_dynamicLoadout_ard_F.jpg";
    side = TGuerrila;
	faction = IND_E_ard_F;
	crew = I_E_Helipilot_ard_F;
	typicalCargo[] = {I_E_Soldier_ard_F};
	hiddenSelectionsTextures[] = {"\A3_Aegis\Air_F_Aegis\Heli_Light_03\Data\Heli_Light_03_base_eaf_arid_co.paa"};
	textureList[] =
	{
		EAF_arid,1,
	};
	class TransportWeapons
	{
		weap_xx(arifle_MSBS65_sand_F,2);
	};
};
class Aegis_I_E_Heli_Light_03_unarmed_ard_F: I_E_Heli_Light_03_unarmed_F
{
    author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_I_E_Heli_Light_03_unarmed_ard_F.jpg";
    side = TGuerrila;
	faction = IND_E_ard_F;
	crew = I_E_Helipilot_ard_F;
	typicalCargo[] = {I_E_Soldier_ard_F};
	hiddenSelectionsTextures[] = {"\A3_Aegis\Air_F_Aegis\Heli_Light_03\Data\Heli_Light_03_base_eaf_arid_co.paa"};
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
class Aegis_B_E_Heli_Light_03_dynamicLoadout_ard_F: Aegis_I_E_Heli_Light_03_dynamicLoadout_ard_F
{
    author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_I_E_Heli_Light_03_dynamicLoadout_ard_F.jpg";
    side = TWest;
	faction = BLU_EAF_ard_F;
	crew = Aegis_B_E_Helipilot_ard_F;
	typicalCargo[] = {Aegis_B_E_Soldier_ard_F};
	hiddenSelectionsTextures[] = {"\A3_Aegis\Air_F_Aegis\Heli_Light_03\Data\Heli_Light_03_base_eaf_arid_co.paa"};
	textureList[] =
	{
		EAF_arid,1,
	};
};
class Aegis_B_E_Heli_Light_03_unarmed_ard_F: Aegis_I_E_Heli_Light_03_unarmed_ard_F
{
    author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_I_E_Heli_Light_03_unarmed_ard_F.jpg";
    side = TWest;
	faction = BLU_EAF_ard_F;
	crew = Aegis_B_E_Helipilot_ard_F;
	typicalCargo[] = {Aegis_B_E_Soldier_ard_F};
	hiddenSelectionsTextures[] = {"\A3_Aegis\Air_F_Aegis\Heli_Light_03\Data\Heli_Light_03_base_eaf_arid_co.paa"};
	textureList[] =
	{
		EAF_arid,1,
	};
};