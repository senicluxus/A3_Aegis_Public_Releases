/* Russia */
class O_R_Boat_Transport_01_F: Rubber_duck_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	class SimpleObject
	{
		eden = true;
		animate[] =
		{
            {damagehide,0},
            {damagehide_zbytek,0},
            {damage_unhide,0},
            {drivingwheel,0},
            {propeller,0},
            {vehicletransported_engine,0},
            {vehicletransported_drivingwheel,0}
		};
		hide[] =
		{
            zasleh,
            "zadni svetlo",
            "brzdove svetlo",
            clan,
            "podsvit pristroju",
            poskozeni
		};
		verticalOffset = 1.242;
		verticalOffsetWorld = -0.168;
		init = "''";
	};
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_Boat_Transport_01_F.jpg";
	scope = protected;
	scopeCurator = private;
	crew = O_R_Soldier_F;
	faction = OPF_R_F;
	side = TEast;
	typicalCargo[] =
	{
		O_R_Soldier_F,
		O_R_Soldier_F
	};
	hiddenSelectionsTextures[] = {"\A3_Aegis\Boat_F_Aegis\Boat_Transport_01\Data\Boat_Transport_01_RUkhk_CO.paa"};
	textureList[] = {Rus,1};
};
class O_R_Lifeboat: Rescue_duck_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	class SimpleObject
	{
		eden = true;
		animate[] =
		{
            {damagehide,0},
            {damagehide_zbytek,0},
            {damage_unhide,0},
            {drivingwheel,0},
            {propeller,0},
            {vehicletransported_engine,0},
            {vehicletransported_drivingwheel,0}
		};
		hide[] =
		{
            zasleh,
            "zadni svetlo",
            "brzdove svetlo",
            clan,
            "podsvit pristroju",
            poskozeni
		};
		verticalOffset = 1.242;
		verticalOffsetWorld = -0.168;
		init = "''";
	};
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_Lifeboat.jpg";
	scope = protected;
	scopeCurator = private;
	crew = O_R_Soldier_F;
	faction = OPF_R_F;
	side = TEast;
	typicalCargo[] =
	{
		O_R_Soldier_F,
		O_R_Soldier_F
	};
};

/* Russia (Mediterranean) */
class O_R_Boat_Transport_01_ard_F: O_R_Boat_Transport_01_F
{
	author = $STR_A3_A_AveryTheKitty;
	class SimpleObject
	{
		eden = true;
		animate[] =
		{
            {damagehide,0},
            {damagehide_zbytek,0},
            {damage_unhide,0},
            {drivingwheel,0},
            {propeller,0},
            {vehicletransported_engine,0},
            {vehicletransported_drivingwheel,0}
		};
		hide[] =
		{
            zasleh,
            "zadni svetlo",
            "brzdove svetlo",
            clan,
            "podsvit pristroju",
            poskozeni
		};
		verticalOffset = 1.242;
		verticalOffsetWorld = -0.168;
		init = "''";
	};
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_Boat_Transport_01_ard_F.jpg";
	scope = public;
	scopeCurator = public;
	crew = O_R_Soldier_ard_F;
	faction = OPF_R_ard_F;
	typicalCargo[] =
	{
		O_R_Soldier_ard_F,
		O_R_Soldier_ard_F
	};
};
class O_R_Lifeboat_ard_F: O_R_Lifeboat
{
	author = $STR_A3_A_AveryTheKitty;
	class SimpleObject
	{
		eden = true;
		animate[] =
		{
            {damagehide,0},
            {damagehide_zbytek,0},
            {damage_unhide,0},
            {drivingwheel,0},
            {propeller,0},
            {vehicletransported_engine,0},
            {vehicletransported_drivingwheel,0}
		};
		hide[] =
		{
            zasleh,
            "zadni svetlo",
            "brzdove svetlo",
            clan,
            "podsvit pristroju",
            poskozeni
		};
		verticalOffset = 1.242;
		verticalOffsetWorld = -0.168;
		init = "''";
	};
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_Lifeboat_ard_F.jpg";
	scope = public;
	scopeCurator = public;
	crew = O_R_Soldier_ard_F;
	faction = OPF_R_ard_F;
	typicalCargo[] =
	{
		O_R_Soldier_ard_F,
		O_R_Soldier_ard_F
	};
};