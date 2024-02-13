class I_E_Offroad_01_armed_F: Offroad_01_armed_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_Offroad_01_armed_F.jpg";
	scope = public;
	side = TGuerrila;
	faction = IND_E_F;
	crew = I_E_Soldier_F;
	typicalCargo[] = {I_E_Soldier_F};

    /* Inventory */
	class TransportMagazines
	{
		mag_xx(SmokeShell,4);
		mag_xx(HandGrenade,4);
		mag_xx(30Rnd_65x39_caseless_msbs_mag,8);
	};
	class TransportWeapons
	{
		weap_xx(arifle_MSBS65_F,2);
	};

	hiddenSelectionsTextures[] =
	{
		"\A3\Soft_F_Enoch\Offroad_01\Data\Offroad_01_ext_EAF_CO.paa",
		"\A3\Soft_F_Enoch\Offroad_01\Data\Offroad_01_ext_EAF_CO.paa"
	};
	textureList[] = {EAF,1};
	animationList[] =
	{
		HideBumper1,1,
		HideBumper2,0
	};

    /* Turrets */
	class Turrets: Turrets
	{
		class M2_Turret: M2_Turret
		{
            /* Weapons & Ammuniton */
		    magazines[] = {mag_3(100Rnd_127x99_mag_Tracer_Red)};
		};
	};

    /* Animation Sources */
	class AnimationSources: AnimationSources
	{
		class Hide_Shield: Hide_Shield
		{
			initPhase = false;
		};
		class Hide_Rail: Hide_Rail
		{
		    initPhase = false;
		};
	};

    /* Scripts */
	class EventHandlers: EventHandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), """", [], true] call bis_fnc_initVehicle;};";
		killed = "_this call (uinamespace getvariable 'BIS_fnc_effectKilled'); _this select 0 animate [""DamageUnHideConstruction"",0];";
	};
};

/* LDF - BLUFOR */
class Aegis_B_E_Offroad_01_armed_F: I_E_Offroad_01_armed_F
{
	author = $STR_A3_A_Ravenholme;
	side = TWest;
	faction = BLU_EAF_F;
	crew = Aegis_B_E_Soldier_F;
	typicalCargo[] = {Aegis_B_E_Soldier_F};
};

class I_E_Offroad_01_F;
class Aegis_B_E_Offroad_01_F: I_E_Offroad_01_F
{
	author = $STR_A3_A_Ravenholme;
	side = TWest;
	faction = BLU_EAF_F;
	crew = Aegis_B_E_Soldier_F;
	typicalCargo[] = {Aegis_B_E_Soldier_F};
};

class I_E_Offroad_01_covered_F;
class Aegis_B_E_Offroad_01_covered_F: I_E_Offroad_01_covered_F
{
	author = $STR_A3_A_Ravenholme;
	side = TWest;
	faction = BLU_EAF_F;
	crew = Aegis_B_E_Soldier_F;
	typicalCargo[] = {Aegis_B_E_Soldier_F};
};

class I_E_Offroad_01_comms_F;
class Aegis_B_E_Offroad_01_comms_F: I_E_Offroad_01_comms_F
{
	author = $STR_A3_A_Ravenholme;
	side = TWest;
	faction = BLU_EAF_F;
	crew = Aegis_B_E_Soldier_F;
	typicalCargo[] = {Aegis_B_E_Soldier_F};
};