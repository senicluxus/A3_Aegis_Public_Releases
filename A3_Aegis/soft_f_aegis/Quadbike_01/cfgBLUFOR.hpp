/* US */
class B_Quadbike_01_F;

/* US (Woodland) */
class B_W_Quadbike_01_F: B_Quadbike_01_F
{
	author = $STR_A3_A_AveryTheKitty;
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
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_Quadbike_01_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TWest;
	faction = BLU_W_F;
	crew = B_W_Soldier_F;
	typicalCargo[] = {B_W_Soldier_F};
	textureList[] = {Olive,1};
	hiddenSelectionsTextures[] =
	{
		"\A3\Soft_F_Exp\Quadbike_01\Data\Quadbike_01_olive_CO.paa",
		"\A3\Soft_F_Exp\Quadbike_01\Data\Quadbike_01_wheel_olive_CO.paa"
	};
};

/* BAF */
class B_A_Quadbike_01_F: B_Quadbike_01_F
{
	author = $STR_A3_A_AveryTheKitty;
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
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Quadbike_01_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TWest;
	faction = BLU_A_F;
	crew = B_A_Soldier_F;
	typicalCargo[] = {B_A_Soldier_F};
	textureList[] = {Blufor,1};
	hiddenSelectionsTextures[] =
	{
		"\A3\Soft_F\Quadbike_01\Data\Quadbike_01_CO.paa",
		"\A3\Soft_F\Quadbike_01\Data\Quadbike_01_wheel_CO.paa"
	};
};

/* BAF (Pacific) */
class B_A_Quadbike_01_tna_F: B_A_Quadbike_01_F
{
	author = $STR_A3_A_AveryTheKitty;
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
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Quadbike_01_tna_F.jpg";
	faction = BLU_A_tna_F;
	crew = B_A_Soldier_tna_F;
	typicalCargo[] = {B_A_Soldier_tna_F};
	textureList[] = {Olive,1};
	hiddenSelectionsTextures[] =
	{
		"\A3\Soft_F_Exp\Quadbike_01\Data\Quadbike_01_olive_CO.paa",
		"\A3\Soft_F_Exp\Quadbike_01\Data\Quadbike_01_wheel_olive_CO.paa"
	};
};

/* BAF (Woodland) */
class B_A_Quadbike_01_wdl_F: B_A_Quadbike_01_F
{
	author = $STR_A3_A_AveryTheKitty;
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
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Quadbike_01_wdl_F.jpg";
	faction = BLU_A_wdl_F;
	crew = B_A_Soldier_wdl_F;
	typicalCargo[] = {B_A_Soldier_wdl_F};
	textureList[] = {Olive,1};
	hiddenSelectionsTextures[] =
	{
		"\A3\Soft_F_Exp\Quadbike_01\Data\Quadbike_01_olive_CO.paa",
		"\A3\Soft_F_Exp\Quadbike_01\Data\Quadbike_01_wheel_olive_CO.paa"
	};
};