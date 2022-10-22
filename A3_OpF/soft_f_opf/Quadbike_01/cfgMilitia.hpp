class Opf_I_P_Quadbike_01_F: Quadbike_01_base_F
{
	author = $STR_A3_AveryTheKitty;
	class SimpleObject
	{
		eden = true;
		animate[] =
		{
			{damagehide,0},
			{damagehidevez,0},
			{damagehidehlaven,0},
			{wheel_1_1_destruct,0},
			{wheel_1_2_destruct,0},
			{wheel_1_3_destruct,0},
			{wheel_1_4_destruct,0},
			{wheel_2_1_destruct,0},
			{wheel_2_2_destruct,0},
			{wheel_2_3_destruct,0},
			{wheel_2_4_destruct,0},
			{wheel_1_1_destruct_unhide,0},
			{wheel_1_2_destruct_unhide,0},
			{wheel_1_3_destruct_unhide,0},
			{wheel_1_4_destruct_unhide,0},
			{wheel_2_1_destruct_unhide,0},
			{wheel_2_2_destruct_unhide,0},
			{wheel_2_3_destruct_unhide,0},
			{wheel_2_4_destruct_unhide,0},
			{wheel_1_4_damage,0},
			{wheel_2_4_damage,0},
			{wheel_1_4_damper_damage_backanim,0},
			{wheel_2_4_damper_damage_backanim,0},
			{wheel_1_1,0},
			{wheel_2_1,0},
			{wheel_1_2,0},
			{wheel_2_2,0},
			{daylights,0},
			{reverse_light,0},
			{wheel_1_1_damage,0},
			{wheel_1_2_damage,0},
			{wheel_1_3_damage,0},
			{wheel_2_1_damage,0},
			{wheel_2_2_damage,0},
			{wheel_2_3_damage,0},
			{wheel_1_1_damper_damage_backanim,0},
			{wheel_1_2_damper_damage_backanim,0},
			{wheel_1_3_damper_damage_backanim,0},
			{wheel_2_1_damper_damage_backanim,0},
			{wheel_2_2_damper_damage_backanim,0},
			{wheel_2_3_damper_damage_backanim,0},
			{drivingwheel,0},
			{steering_1_1,0},
			{steering_2_1,0},
			{wheel_1_1_damper,0.87},
			{wheel_2_1_damper,0.87},
			{wheel_1_2_damper,0.85},
			{wheel_2_2_damper,0.85}
		};
		hide[] =
		{
			clan,
			zasleh,
			light_l,
			light_r,
			"zadni svetlo",
			"brzdove svetlo",
			"podsvit pristroju",
			poskozeni
		};
		verticalOffset = 1.415;
		verticalOffsetWorld = -0.211;
		init = "''";
	};
	editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\O_P_Quadbike_01_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TGuerrila;
	faction = Opf_IND_P_F;
	crew = Opf_I_P_Soldier_1_F;
	typicalCargo[] = {Opf_I_P_Soldier_1_F};
	textureList[] =
	{
		Black,1,
		Guerrilla_02,1
	};
	hiddenSelectionsTextures[] =
	{
		"\A3\Soft_F_Bootcamp\Quadbike_01\Data\Quadbike_01_INDP_Hunter_CO.paa",
		"\A3\Soft_F_Gamma\Quadbike_01\Data\Quadbike_01_wheel_INDP_Hunter_CO.paa"
	};
};