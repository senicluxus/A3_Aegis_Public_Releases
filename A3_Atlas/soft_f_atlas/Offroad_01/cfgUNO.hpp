/* UNO - Sahrani */
class Atlas_I_UNO_Offroad_01_F: Offroad_01_military_base_F
{
    author = $STR_A3_A_Ravenholme;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_I_UNO_Offroad_01_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TGuerrila;
	faction = Atlas_IND_UNO_F;
	crew = Atlas_I_UNO_Soldier_F;
	typicalCargo[] = {Atlas_I_UNO_Soldier_F};
	textureList[] = {UNO,1};
	hiddenSelectionsTextures[] =
    {
		"\A3_Atlas\Soft_F_Atlas\Offroad_01\Data\Offroad_01_ext_UN_CO.paa",
        "\A3_Atlas\Soft_F_Atlas\Offroad_01\Data\Offroad_01_ext_UN_CO.paa"
	};
    animationList[] =
	{
		HideBumper1,0,
		HideBumper2,0,
		HideConstruction,0,
		HideDoor3,0.33,
		HideBackpacks,0.83
	};
    /* Inventory */
	class TransportMagazines
	{
		mag_xx(30Rnd_65x39_caseless_msbs_mag,8);
		mag_xx(HandGrenade,4);
		mag_xx(SmokeShell,4);
	};
	class TransportWeapons
	{
		weap_xx(arifle_G36_F,2);
	};
	class CargoTurret;
	class Turrets: Turrets
	{
		class CargoTurret_01: CargoTurret
		{
			gunnerAction = "passenger_flatground_3";
			memoryPointsGetInGunner = "pos cargo RR";
			memoryPointsGetInGunnerDir = "pos cargo RR dir";
			gunnerName = "$STR_A3_TURRETS_CARGOTURRET_R2";
			gunnerCompartments = "Compartment2";
			proxyIndex = 2;
			isPersonTurret = 1;
			canHideGunner = 0;
			allowLauncherIn = 0;
			allowLauncherOut = 0;
			class TurnIn
			{
				limitsArrayTop[] = {{33.8208,-93.9616},{40.8906,66.5705}};
				limitsArrayBottom[] = {{-9.4643,-94.5753},{-8.3683,-67.6867},{-9.7173,43.6372},{-10.1082,78.9166}};
			};
			class dynamicViewLimits
			{
				CargoTurret_02[] = {-65,75};
			};
		};
		class CargoTurret_02: CargoTurret_01
		{
			gunnerAction = "passenger_flatground_2";
			gunnerName = "$STR_A3_TURRETS_CARGOTURRET_L2";
			memoryPointsGetInGunner = "pos cargo LR";
			memoryPointsGetInGunnerDir = "pos cargo LR dir";
			proxyIndex = 3;
			class TurnIn
			{
				limitsArrayTop[] = {{37.1488,-71.9003},{36.4967,92.2757}};
				limitsArrayBottom[] = {{-22.1832,-70.0989},{-13.9068,-22.8107},{-7.1236,75.6849},{-7.8564,102.5826}};
			};
			class dynamicViewLimits
			{
				CargoTurret_01[] = {-75,65};
			};
		};
		class CargoTurret_03: CargoTurret_01
		{
			gunnerAction = "passenger_flatground_4_vehicle_passenger_stand_1";
			gunnerInAction = "vehicle_passenger_stand_1_passenger_flatground_4";
			gunnerName = "$STR_A3_TURRETS_CARGOTURRET_R1";
			memoryPointsGetInGunner = "pos cargo RF";
			memoryPointsGetInGunnerDir = "pos cargo RF dir";
			proxyIndex = 4;
			forceHideGunner = 0;
			canHideGunner = 1;
			isPersonTurret = 2;
			LODTurnedIn = 1200;
			LODTurnedOut = -1;
			outGunnerMayFire = 1;
			inGunnerMayFire = 1;
			animationSourceHatch = "gunner_rf_turn";
			allowLauncherIn = 0;
			allowLauncherOut = 1;
			class TurnIn
			{
				limitsArrayTop[] = {{44.0899,0.4614}};
				limitsArrayBottom[] = {{-5.6161,-103.2468},{-6.3359,-86.6666},{-4.5173,-52.2224},{-2.1727,-26.9412},{-2.7195,17.1711},{-8.6474,52.2545},{-9.5587,116.7031}};
				turnOffset = -180;
			};
			class TurnOut: TurnIn
			{
				limitsArrayTop[] = {{38.5373,-12.3438}};
				limitsArrayBottom[] = {{-55.8132,-78.701},{-55.695,-42.9749},{-20.5349,-8.1766},{-18.5114,7.3282},{-19.9175,18.9012},{-20.0625,26.8051},{-19.9485,37.7768},{-34.0815,67.2254},{-48.6922,80.0348},{-47.6331,90.4505}};
			};
			class dynamicViewLimits
			{
				CargoTurret_01[] = {5,75};
				CargoTurret_02[] = {-15,75};
				CargoTurret_04[] = {-75,75};
			};
		};
		class CargoTurret_04: CargoTurret_03
		{
			gunnerAction = "passenger_flatground_4_vehicle_passenger_stand_1";
			gunnerInAction = "vehicle_passenger_stand_1_passenger_flatground_4";
			gunnerName = "$STR_A3_TURRETS_CARGOTURRET_L1";
			memoryPointsGetInGunner = "pos cargo LF";
			memoryPointsGetInGunnerDir = "pos cargo LF dir";
			proxyIndex = 5;
			animationSourceHatch = "gunner_lf_turn";
			allowLauncherIn = 0;
			allowLauncherOut = 1;
			class TurnIn
			{
				limitsArrayTop[] = {{32.7249,-3.3246}};
				limitsArrayBottom[] = {{-13.8937,-116.0915},{-15.9318,-73.9232},{-7.7741,-33.6104},{-2.2081,-11.6789},{-2.175,33.6969},{-4.7948,64.9968},{-6.1246,108.4244}};
				turnOffset = -180;
			};
			class TurnOut: TurnIn
			{
				limitsArrayTop[] = {{60.2039,-100.4401}};
				limitsArrayBottom[] = {{-39.8219,-73.3444},{-35.1597,-60.962},{-28.0802,-54.4944},{-18.1518,-30.9259},{-20.7152,12.1939},{-36.7666,33.6105},{-39.7748,75.8732}};
			};
			class dynamicViewLimits
			{
				CargoTurret_01[] = {-75,15};
				CargoTurret_02[] = {-75,-5};
				CargoTurret_03[] = {-75,75};
			};
		};
	};
};

class Atlas_I_UNO_Offroad_armed_01_F: Offroad_01_armed_base_F
{
    author = $STR_A3_A_Ravenholme;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_I_UNO_Offroad_armed_01_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TGuerrila;
	faction = Atlas_IND_UNO_F;
	crew = Atlas_I_UNO_Soldier_F;
	typicalCargo[] = {Atlas_I_UNO_Soldier_F};
	textureList[] = {UNO,1};
	hiddenSelectionsTextures[] =
    {
		"\A3_Atlas\Soft_F_Atlas\Offroad_01\Data\Offroad_01_ext_UN_CO.paa",
        "\A3_Atlas\Soft_F_Atlas\Offroad_01\Data\Offroad_01_ext_UN_CO.paa"
	};
    animationList[] =
	{
		HideBumper1,0,
		HideBumper2,0,
		HideConstruction,0,
		HideDoor3,0.33,
		HideBackpacks,0.83
	};
    /* Inventory */
	class TransportMagazines
	{
		mag_xx(30Rnd_65x39_caseless_msbs_mag,8);
		mag_xx(HandGrenade,4);
		mag_xx(SmokeShell,4);
	};
	class TransportWeapons
	{
		weap_xx(arifle_G36_F,2);
	};
};

class Atlas_I_UNO_Offroad_01_covered_F: Offroad_01_military_covered_base_F
{
	author = $STR_A3_A_Ravenholme;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_I_UNO_Offroad_covered_01_F.jpg";
	scope = public;
	scopeCurator = public;
	accuracy = 1.25;
	side = TGuerrila;
	faction = Atlas_IND_UNO_F;
	crew = Atlas_I_UNO_Soldier_F;
	typicalCargo[] = {Atlas_I_UNO_Soldier_F};
    textureList[] = {UNO,1};
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Soft_F_Atlas\Offroad_01\Data\Offroad_01_ext_UN_CO.paa",
        "\A3_Atlas\Soft_F_Atlas\Offroad_01\Data\Offroad_01_ext_UN_CO.paa",
        "\A3_Atlas\Soft_F_Atlas\Offroad_01\Data\Offroad_01_ext_cover_UN_CO.paa"
	};
    animationList[] =
	{
		HideRoofRack,1,
        HideCover,0,
        HideDoor3,0,
        HideBumper1,1,
        HideBumper2,0
	};

    /* Inventory */
	class TransportMagazines
	{
		mag_xx(30Rnd_65x39_caseless_msbs_mag,8);
		mag_xx(HandGrenade,4);
		mag_xx(SmokeShell,4);
	};
	class TransportWeapons
	{
		weap_xx(arifle_G36_F,2);
	};
    /* Scripts */
	class EventHandlers: EventHandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), """", [], true] call bis_fnc_initVehicle;};";
	};
};
class Atlas_I_UNO_Offroad_01_comms_F: Offroad_01_military_comms_base_F
{
	author = $STR_A3_A_Ravenholme;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_I_UNO_Offroad_comms_01_F.jpg";
	scope = public;
	scopeCurator = public;
	accuracy = 1.25;
	side = TGuerrila;
	faction = Atlas_IND_UNO_F;
	crew = Atlas_I_UNO_Soldier_F;
	typicalCargo[] = {Atlas_I_UNO_Soldier_F};
    textureList[] = {UNO,1};
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Soft_F_Atlas\Offroad_01\Data\Offroad_01_ext_UN_CO.paa",
        "\A3_Atlas\Soft_F_Atlas\Offroad_01\Data\Offroad_01_ext_UN_CO.paa",
        "\A3_Atlas\Soft_F_Atlas\Offroad_01\Data\Offroad_01_ext_cover_UN_CO.paa"
	};
    animationList[] =
    {
        HideCover,0,
        HideDoor3,0,
        HideBumper1,1,
        HideBumper2,0
    };
    /* Inventory */
	class TransportMagazines
	{
		mag_xx(30Rnd_65x39_caseless_msbs_mag,8);
		mag_xx(HandGrenade,4);
		mag_xx(SmokeShell,4);
	};
	class TransportWeapons
	{
		weap_xx(arifle_G36_F,2);
	};
};

/* UNO - Chernarus */
class Atlas_I_UNO_wdl_Offroad_01_F: Atlas_I_UNO_Offroad_01_F
{
    side = TGuerrila;
	faction = Atlas_IND_UNO_wdl_F;
	crew = Atlas_I_UNO_wdl_Soldier_F;
	typicalCargo[] = {Atlas_I_UNO_wdl_Soldier_F};

    /* Inventory */
    class TransportMagazines
	{
		mag_xx(30Rnd_65x39_caseless_msbs_mag,8);
		mag_xx(HandGrenade_Guer,4);
		mag_xx(SmokeShell,4);
	};
	class TransportWeapons
	{
		weap_xx(arifle_FORT652_F,2);
	};
};

class Atlas_I_UNO_wdl_Offroad_armed_01_F: Atlas_I_UNO_Offroad_armed_01_F
{
    side = TGuerrila;
	faction = Atlas_IND_UNO_wdl_F;
	crew = Atlas_I_UNO_wdl_Soldier_F;
	typicalCargo[] = {Atlas_I_UNO_wdl_Soldier_F};

    /* Inventory */
    class TransportMagazines
	{
		mag_xx(30Rnd_65x39_caseless_msbs_mag,8);
		mag_xx(HandGrenade_Guer,4);
		mag_xx(SmokeShell,4);
	};
	class TransportWeapons
	{
		weap_xx(arifle_FORT652_F,2);
	};
};

class Atlas_I_UNO_wdl_Offroad_01_covered_F: Atlas_I_UNO_Offroad_01_covered_F
{
    side = TGuerrila;
	faction = Atlas_IND_UNO_wdl_F;
	crew = Atlas_I_UNO_wdl_Soldier_F;
	typicalCargo[] = {Atlas_I_UNO_wdl_Soldier_F};

    /* Inventory */
    class TransportMagazines
	{
		mag_xx(30Rnd_65x39_caseless_msbs_mag,8);
		mag_xx(HandGrenade_Guer,4);
		mag_xx(SmokeShell,4);
	};
	class TransportWeapons
	{
		weap_xx(arifle_FORT652_F,2);
	};
};

class Atlas_I_UNO_wdl_Offroad_01_comms_F: Atlas_I_UNO_Offroad_01_comms_F
{
    side = TGuerrila;
	faction = Atlas_IND_UNO_wdl_F;
	crew = Atlas_I_UNO_wdl_Soldier_F;
	typicalCargo[] = {Atlas_I_UNO_wdl_Soldier_F};

    /* Inventory */
    class TransportMagazines
	{
		mag_xx(30Rnd_65x39_caseless_msbs_mag,8);
		mag_xx(HandGrenade_Guer,4);
		mag_xx(SmokeShell,4);
	};
	class TransportWeapons
	{
		weap_xx(arifle_FORT652_F,2);
	};
};