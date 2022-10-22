/* US */
class B_UAV_02_dynamicLoadout_F;

/* US (Pacific) */
class B_T_UAV_02_dynamicLoadout_F: B_UAV_02_dynamicLoadout_F
{
	author = $STR_A3_A_AveryTheKitty;
	class SimpleObject
	{
		eden = true;
		animate[] =
		{
			{propeller,0},
			{propellerstatic,0},
			{propellerblurred,0},
			{mainturret,0},
			{maingun,0},
			{flap_1_1,0},
			{flap_2_1,0},
			{aileron_1_1,0},
			{aileron_2_1,0},
			{rudder_1_1,0},
			{rudder_2_1,0},
			{frontgear_1,0},
			{frontgear_1_support,0},
			{frontgear_1_door_l,0},
			{frontgear_1_door_r,0},
			{backgear_1_door_l,0},
			{backgear_1_door_r,0},
			{frontgearsteering,0},
			{frontgeardamper,0},
			{maingear_2_1,0},
			{maingear_2_1_support,0},
			{maingear_2_2_support,0},
			{maingear_2_2,0},
			{maingear_2_1_suspension,0},
			{maingear_2_2_suspension,0},
			{wheel_1_1,0},
			{wheel_2_1,0},
			{wheel_2_2,0},
			{damagehide,0},
			{missilea,0},
			{missileb,0},
			{missilea1,1},
			{missilea2,1},
			{missilea3,1},
			{missileb1,1},
			{missileb2,1},
			{missileb3,1},
			{positionlights,0}
		};
		hide[] =
		{
			zasleh,
			"l svetlo",
			"zadni svetlo",
			clan,
			"podsvit pristroju",
			poskozeni
		};
		verticalOffset = 1.593;
		verticalOffsetWorld = 0.025;
		init = "[this, '', []] call bis_fnc_initVehicle";
	};
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_T_UAV_02_dynamicLoadout_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TWest;
	faction = BLU_T_F;
	crew = B_UAV_AI;
	typicalCargo[] = {B_UAV_AI};
	textureList[] = {Blufor,1};
};

/* US (Woodland) */
class B_W_UAV_02_dynamicLoadout_F: B_UAV_02_dynamicLoadout_F
{
	author = $STR_A3_A_AveryTheKitty;
	class SimpleObject
	{
		eden = true;
		animate[] =
		{
			{propeller,0},
			{propellerstatic,0},
			{propellerblurred,0},
			{mainturret,0},
			{maingun,0},
			{flap_1_1,0},
			{flap_2_1,0},
			{aileron_1_1,0},
			{aileron_2_1,0},
			{rudder_1_1,0},
			{rudder_2_1,0},
			{frontgear_1,0},
			{frontgear_1_support,0},
			{frontgear_1_door_l,0},
			{frontgear_1_door_r,0},
			{backgear_1_door_l,0},
			{backgear_1_door_r,0},
			{frontgearsteering,0},
			{frontgeardamper,0},
			{maingear_2_1,0},
			{maingear_2_1_support,0},
			{maingear_2_2_support,0},
			{maingear_2_2,0},
			{maingear_2_1_suspension,0},
			{maingear_2_2_suspension,0},
			{wheel_1_1,0},
			{wheel_2_1,0},
			{wheel_2_2,0},
			{damagehide,0},
			{missilea,0},
			{missileb,0},
			{missilea1,1},
			{missilea2,1},
			{missilea3,1},
			{missileb1,1},
			{missileb2,1},
			{missileb3,1},
			{positionlights,0}
		};
		hide[] =
		{
			zasleh,
			"l svetlo",
			"zadni svetlo",
			clan,
			"podsvit pristroju",
			poskozeni
		};
		verticalOffset = 1.593;
		verticalOffsetWorld = 0.025;
		init = "[this, '', []] call bis_fnc_initVehicle";
	};
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_UAV_02_dynamicLoadout_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TWest;
	faction = BLU_W_F;
	crew = B_UAV_AI;
	typicalCargo[] = {B_UAV_AI};
	textureList[] = {Blufor,1};
};

/* BAF */
class B_A_UAV_02_dynamicLoadout_F: B_UAV_02_dynamicLoadout_F
{
	author = $STR_A3_A_AveryTheKitty;
	class SimpleObject
	{
		eden = true;
		animate[] =
		{
			{propeller,0},
			{propellerstatic,0},
			{propellerblurred,0},
			{mainturret,0},
			{maingun,0},
			{flap_1_1,0},
			{flap_2_1,0},
			{aileron_1_1,0},
			{aileron_2_1,0},
			{rudder_1_1,0},
			{rudder_2_1,0},
			{frontgear_1,0},
			{frontgear_1_support,0},
			{frontgear_1_door_l,0},
			{frontgear_1_door_r,0},
			{backgear_1_door_l,0},
			{backgear_1_door_r,0},
			{frontgearsteering,0},
			{frontgeardamper,0},
			{maingear_2_1,0},
			{maingear_2_1_support,0},
			{maingear_2_2_support,0},
			{maingear_2_2,0},
			{maingear_2_1_suspension,0},
			{maingear_2_2_suspension,0},
			{wheel_1_1,0},
			{wheel_2_1,0},
			{wheel_2_2,0},
			{damagehide,0},
			{missilea,0},
			{missileb,0},
			{missilea1,1},
			{missilea2,1},
			{missilea3,1},
			{missileb1,1},
			{missileb2,1},
			{missileb3,1},
			{positionlights,0}
		};
		hide[] =
		{
			zasleh,
			"l svetlo",
			"zadni svetlo",
			clan,
			"podsvit pristroju",
			poskozeni
		};
		verticalOffset = 1.593;
		verticalOffsetWorld = 0.025;
		init = "[this, '', []] call bis_fnc_initVehicle";
	};
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_UAV_02_dynamicLoadout_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TWest;
	faction = BLU_A_F;
	crew = B_UAV_AI;
	typicalCargo[] = {B_UAV_AI};
	textureList[] = {BAF,1};
	hiddenSelectionsTextures[] = {"\A3_Aegis\Air_F_Aegis\UAV_02\Data\UAV_02_CO.paa"};
};

/* BAF (Pacific) */
class B_A_UAV_02_dynamicLoadout_tna_F: B_A_UAV_02_dynamicLoadout_F
{
	author = $STR_A3_A_AveryTheKitty;
	class SimpleObject
	{
		eden = true;
		animate[] =
		{
			{propeller,0},
			{propellerstatic,0},
			{propellerblurred,0},
			{mainturret,0},
			{maingun,0},
			{flap_1_1,0},
			{flap_2_1,0},
			{aileron_1_1,0},
			{aileron_2_1,0},
			{rudder_1_1,0},
			{rudder_2_1,0},
			{frontgear_1,0},
			{frontgear_1_support,0},
			{frontgear_1_door_l,0},
			{frontgear_1_door_r,0},
			{backgear_1_door_l,0},
			{backgear_1_door_r,0},
			{frontgearsteering,0},
			{frontgeardamper,0},
			{maingear_2_1,0},
			{maingear_2_1_support,0},
			{maingear_2_2_support,0},
			{maingear_2_2,0},
			{maingear_2_1_suspension,0},
			{maingear_2_2_suspension,0},
			{wheel_1_1,0},
			{wheel_2_1,0},
			{wheel_2_2,0},
			{damagehide,0},
			{missilea,0},
			{missileb,0},
			{missilea1,1},
			{missilea2,1},
			{missilea3,1},
			{missileb1,1},
			{missileb2,1},
			{missileb3,1},
			{positionlights,0}
		};
		hide[] =
		{
			zasleh,
			"l svetlo",
			"zadni svetlo",
			clan,
			"podsvit pristroju",
			poskozeni
		};
		verticalOffset = 1.593;
		verticalOffsetWorld = 0.025;
		init = "[this, '', []] call bis_fnc_initVehicle";
	};
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_UAV_02_dynamicLoadout_tna_F.jpg";
	faction = BLU_A_tna_F;
};

/* BAF (Woodland) */
class B_A_UAV_02_dynamicLoadout_wdl_F: B_A_UAV_02_dynamicLoadout_F
{
	author = $STR_A3_A_AveryTheKitty;
	class SimpleObject
	{
		eden = true;
		animate[] =
		{
			{propeller,0},
			{propellerstatic,0},
			{propellerblurred,0},
			{mainturret,0},
			{maingun,0},
			{flap_1_1,0},
			{flap_2_1,0},
			{aileron_1_1,0},
			{aileron_2_1,0},
			{rudder_1_1,0},
			{rudder_2_1,0},
			{frontgear_1,0},
			{frontgear_1_support,0},
			{frontgear_1_door_l,0},
			{frontgear_1_door_r,0},
			{backgear_1_door_l,0},
			{backgear_1_door_r,0},
			{frontgearsteering,0},
			{frontgeardamper,0},
			{maingear_2_1,0},
			{maingear_2_1_support,0},
			{maingear_2_2_support,0},
			{maingear_2_2,0},
			{maingear_2_1_suspension,0},
			{maingear_2_2_suspension,0},
			{wheel_1_1,0},
			{wheel_2_1,0},
			{wheel_2_2,0},
			{damagehide,0},
			{missilea,0},
			{missileb,0},
			{missilea1,1},
			{missilea2,1},
			{missilea3,1},
			{missileb1,1},
			{missileb2,1},
			{missileb3,1},
			{positionlights,0}
		};
		hide[] =
		{
			zasleh,
			"l svetlo",
			"zadni svetlo",
			clan,
			"podsvit pristroju",
			poskozeni
		};
		verticalOffset = 1.593;
		verticalOffsetWorld = 0.025;
		init = "[this, '', []] call bis_fnc_initVehicle";
	};
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_UAV_02_dynamicLoadout_wdl_F.jpg";
	faction = BLU_A_wdl_F;
};