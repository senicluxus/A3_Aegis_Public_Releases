/* Raven - INDEP */
class I_Raven_Heli_Light_02_dynamicLoadout_ard_F: O_R_Heli_Light_02_dynamicLoadout_ard_F
{
	author = $STR_A3_A_Heliotrope;
	faction = IND_Raven_F;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_Raven_Heli_Light_02_dynamicLoadout_ard_F.jpg";
	side = TGuerrila;
	crew = I_Raven_Soldier_helipilot_F;
	typicalCargo[] = {I_Raven_Soldier_helipilot_F};
	textureList[] =
	{
		Green,1
	};
	hiddenSelectionsTextures[] = {"\A3_Aegis\Air_F_Aegis\Heli_Light_02\Data\Heli_Light_02_ext_raven_CO.paa"};
};
class I_Raven_Heli_Light_02_unarmed_ard_F: O_R_Heli_Light_02_unarmed_ard_F
{
	author = $STR_A3_A_Heliotrope;
	faction = IND_Raven_F;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_Raven_Heli_Light_02_unarmed_ard_F.jpg";
	side = TGuerrila;
	crew = I_Raven_Soldier_helipilot_F;
	typicalCargo[] = {I_Raven_Soldier_helipilot_F};
	textureList[] =
	{
		Green,1
	};
	hiddenSelectionsTextures[] = {"\A3_Aegis\Air_F_Aegis\Heli_Light_02\Data\Heli_Light_02_ext_raven_CO.paa"};
};

/* Raven - OPFOR */
class O_Raven_Heli_Light_02_dynamicLoadout_F: I_Raven_Heli_Light_02_dynamicLoadout_ard_F
{
	faction = OPF_Raven_F;
	side = TEast;
	crew = O_Raven_Soldier_helipilot_F;
	typicalCargo[] = {O_Raven_Soldier_helipilot_F};
};
class O_Raven_Heli_Light_02_unarmed_F: I_Raven_Heli_Light_02_unarmed_ard_F
{
	faction = OPF_Raven_F;
	side = TEast;
	crew = O_Raven_Soldier_helipilot_F;
	typicalCargo[] = {O_Raven_Soldier_helipilot_F};
};