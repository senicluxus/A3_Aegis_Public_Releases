/* BAF */
class B_A_Boat_Transport_01_F: Rubber_duck_base_F
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
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Boat_Transport_01_F.jpg";
	scope = public;
	crew = B_A_Soldier_F;
	faction = BLU_A_F;
	side = TWest;
	typicalCargo[] =
	{
		B_A_Soldier_F,
		B_A_Soldier_F
	};
	hiddenSelectionsTextures[] = {"\A3\Boat_F\Boat_Transport_01\Data\Boat_Transport_01_CO.paa"};
	textureList[] = {Black,1};
};
class B_A_Lifeboat: Rescue_duck_base_F
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
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Lifeboat.jpg";
	scope = public;
	crew = B_A_Soldier_F;
	faction = BLU_A_F;
	side = TWest;
	typicalCargo[] =
	{
		B_A_Soldier_F,
		B_A_Soldier_F
	};
};

/* BAF (Pacific) */
class B_A_Boat_Transport_01_tna_F: B_A_Boat_Transport_01_F
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
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Boat_Transport_01_tna_F.jpg";
	faction = BLU_A_tna_F;
	crew = B_A_Soldier_tna_F;
	typicalCargo[] =
	{
		B_A_Soldier_tna_F,
		B_A_Soldier_tna_F
	};
};
class B_A_Lifeboat_tna_F: B_A_Lifeboat
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
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Lifeboat_tna_F.jpg";
	faction = BLU_A_tna_F;
	crew = B_A_Soldier_tna_F;
	typicalCargo[] =
	{
		B_A_Soldier_tna_F,
		B_A_Soldier_tna_F
	};
};