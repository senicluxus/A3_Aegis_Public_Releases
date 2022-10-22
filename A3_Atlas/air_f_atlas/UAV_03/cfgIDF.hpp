class Atlas_I_I_UAV_03_dynamicLoadout_F: UAV_03_dynamicLoadout_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	mapSize = 11.82;
	class SimpleObject
	{
		eden = true;
		animate[] =
		{
			{rotor_1,1},
			{rotor_2,0},
			{gear_1,0},
			{gear_1_d4_f1,0},
			{gear_1_d4_f2,0},
			{gear_1_d3,0},
			{gear_1_d1_f1,0},
			{gear_1_d1_f2,0},
			{gear_1_d2,0},
			{gear_1_damper_1,-0.08},
			{gear_1_damper_2,-0.08},
			{gear_1_hatch,0},
			{gear_2,0},
			{gear_2_d4_f1,0},
			{gear_2_d4_f2,0},
			{gear_2_d3,0},
			{gear_2_d1_f1,0},
			{gear_2_d1_f2,0},
			{gear_2_d2,0},
			{gear_2_damper_1,-0.08},
			{gear_2_damper_2,-0.08},
			{gear_2_hatch,0},
			{gear_3_damper,-0.08},
			{gear_3_stabil_1,-0.08},
			{gear_3_stabil_2,-0.08},
			{mainturret,0},
			{maingun,0},
			{positionlights,0},
			{collisionlight_red_blinking,0},
			{rocketa1_hide,1},
			{rocketa2_hide,1},
			{rocketa3_hide,1},
			{rocketa4_hide,1},
			{rocketa5_hide,1},
			{rocketa6_hide,1},
			{rocketa7_hide,1},
			{rocketa8_hide,1},
			{rocketa9_hide,1},
			{rocketa10_hide,1},
			{rocketa11_hide,1},
			{rocketa12_hide,1},
			{rocketb1_hide,1},
			{rocketb2_hide,1},
			{rocketb3_hide,1},
			{rocketb4_hide,1},
			{rocketb5_hide,1},
			{rocketb6_hide,1},
			{rocketb7_hide,1},
			{rocketb8_hide,1},
			{rocketb9_hide,1},
			{rocketb10_hide,1},
			{rocketb11_hide,1},
			{rocketb12_hide,1},
			{damage_hide,0}
		};
		hide[] =
		{
			zasleh,
			light_r,
			rotor_2_blur,
			rotor_1_blur,
			"zadni svetlo",
			clan,
			"podsvit pristroju",
			poskozeni
		};
		verticalOffset = 1.536;
		verticalOffsetWorld = -0.001;
		init = "[this, '', []] call bis_fnc_initVehicle";
	};
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\I_I_UAV_03_dynamicLoadout_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_A_CfgVehicles_I_I_UAV_03_dynamicLoadout_F0;
	side = TGuerrila;
	faction = Atlas_IND_I_F;
	crew = I_UAV_AI;
	typicalCargo[] = {I_UAV_AI};
	textureList[] = {Desert,1};
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Air_F_Atlas\UAV_03\Data\UAV_03_1_desert_CO.paa",
		"\A3_Atlas\Air_F_Atlas\UAV_03\Data\UAV_03_2_desert_CO.paa"
	};
};