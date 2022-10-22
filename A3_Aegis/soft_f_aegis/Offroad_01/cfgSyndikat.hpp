/* Syndikat */
class I_C_Offroad_01_F: I_G_Offroad_01_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_C_Offroad_01_F.jpg";
	scope = public;
	side = TGuerrila;
	faction = IND_C_F;
	crew = I_C_Soldier_Bandit_7_F;
	typicalCargo[] = {I_C_Soldier_Bandit_7_F};
	textureList[] =
	{
		Brown,1,
		Olive,1
	};
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Soft_F_Aegis\Offroad_01\Data\Offroad_01_ext_brn_CO.paa",
		"\A3_Aegis\Soft_F_Aegis\Offroad_01\Data\Offroad_01_ext_brn_CO.paa"
	};

    /* Scripts */
	class EventHandlers: EventHandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), """", [], true] call bis_fnc_initVehicle;};";
		killed = "_this call (uinamespace getvariable 'BIS_fnc_effectKilled'); _this select 0 animate [""DamageUnHideConstruction"",0];";
	};
};
class I_C_Offroad_01_AT_F: I_G_Offroad_01_AT_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_C_Offroad_01_AT_F.jpg";
	scope = public;
	side = TGuerrila;
	faction = IND_C_F;
	crew = I_C_Soldier_Bandit_7_F;
	typicalCargo[] = {I_C_Soldier_Bandit_7_F};
	textureList[] =
	{
		Brown,1,
		Olive,1
	};
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Soft_F_Aegis\Offroad_01\Data\Offroad_01_ext_brn_CO.paa",
		"\A3_Aegis\Soft_F_Aegis\Offroad_01\Data\Offroad_01_ext_brn_CO.paa"
	};

    /* Scripts */
	class EventHandlers: EventHandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), """", [], true] call bis_fnc_initVehicle;};";
		killed = "_this call (uinamespace getvariable 'BIS_fnc_effectKilled'); _this select 0 animate [""DamageUnHideConstruction"",0];";
	};
};
class I_C_Offroad_01_armed_F: I_G_Offroad_01_armed_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_C_Offroad_01_armed_F.jpg";
	scope = public;
	side = TGuerrila;
	faction = IND_C_F;
	crew = I_C_Soldier_Bandit_7_F;
	typicalCargo[] = {I_C_Soldier_Bandit_7_F};
	textureList[] =
	{
		Brown,1,
		Olive,1
	};
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Soft_F_Aegis\Offroad_01\Data\Offroad_01_ext_brn_CO.paa",
		"\A3_Aegis\Soft_F_Aegis\Offroad_01\Data\Offroad_01_ext_brn_CO.paa"
	};

    /* Animation Sources */
	class AnimationSources: AnimationSources
	{
		class Hide_Shield: Hide_Shield
		{
			initPhase = true;
		};
		class Hide_Rail: Hide_Rail
		{
			initPhase = true;
		};
	};

    /* Scripts */
	class EventHandlers: EventHandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), """", [], true] call bis_fnc_initVehicle;};";
		killed = "_this call (uinamespace getvariable 'BIS_fnc_effectKilled'); _this select 0 animate [""DamageUnHideConstruction"",0];";
	};
};