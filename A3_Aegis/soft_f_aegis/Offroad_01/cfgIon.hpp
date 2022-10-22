/* ION */
class B_ION_Offroad_01_F: B_G_Offroad_01_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_ION_Offroad_01_F.jpg";
	scope = protected;
	scopeCurator = protected;
	side = TWest;
	faction = BLU_ION_F;
	crew = B_ION_Soldier_F;
	typicalCargo[] = {B_ION_Soldier_F};
	textureList[] = {Black,1};
	hiddenSelectionsTextures[] =
	{
		"\A3\Soft_F_Enoch\Offroad_01\Data\Offroad_01_ext_blk_CO.paa",
		"\A3\Soft_F_Enoch\Offroad_01\Data\Offroad_01_ext_blk_CO.paa"
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
		mag_xx(30Rnd_65x39_caseless_black_mag,8);
		mag_xx(HandGrenade,4);
		mag_xx(SmokeShell,4);
	};
	class TransportWeapons
	{
		weap_xx(arifle_MXC_Black_F,2);
	};
};
class B_ION_Offroad_01_covered_F: Offroad_01_military_covered_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_ION_Offroad_01_covered_F.jpg";
	scope = protected;
	scopeCurator = protected;
	accuracy = 1.25;
	side = TWest;
	faction = BLU_ION_F;
	crew = B_ION_Soldier_F;
	typicalCargo[] = {B_ION_Soldier_F};

    /* Inventory */
	class TransportMagazines
	{
		mag_xx(30Rnd_65x39_caseless_black_mag,8);
		mag_xx(HandGrenade,4);
		mag_xx(SmokeShell,4);
	};
	class TransportWeapons
	{
		weap_xx(arifle_MXC_Black_F,2);
	};

	animationList[] =
	{
		HideRoofRack,1,
        HideCover,0,
        HideDoor3,0,
        HideBumper1,1,
        HideBumper2,0
	};
	textureList[] = {Black,1};
	hiddenSelectionsTextures[] =
	{
		"\A3\Soft_F_Enoch\Offroad_01\Data\Offroad_01_ext_blk_CO.paa",
		"\A3\Soft_F_Enoch\Offroad_01\Data\Offroad_01_ext_blk_CO.paa",
		"\A3\Soft_F_Enoch\Offroad_01\Data\Offroad_01_cover_blk_CO.paa"
	};

    /* Scripts */
	class EventHandlers: EventHandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), """", [], true] call bis_fnc_initVehicle;};";
	};
};
class B_ION_Offroad_01_comms_F: Offroad_01_military_comms_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_ION_Offroad_01_comms_F.jpg";
	scope = protected;
	scopeCurator = protected;
	side = TWest;
	faction = BLU_ION_F;
	crew = B_ION_Soldier_F;
	typicalCargo[] = {B_ION_Soldier_F};
	accuracy = 1.25;

    /* Inventory */
	class TransportMagazines
	{
		mag_xx(30Rnd_65x39_caseless_black_mag,8);
		mag_xx(HandGrenade,4);
		mag_xx(SmokeShell,4);
	};
	class TransportWeapons
	{
		weap_xx(arifle_MXC_Black_F,2);
	};

    
	animationList[] =
    {
        HideCover,0,
        HideDoor3,0,
        HideBumper1,1,
        HideBumper2,0
    };
	textureList[] = {Black,1};
	hiddenSelectionsTextures[] =
	{
		"\A3\Soft_F_Enoch\Offroad_01\Data\Offroad_01_ext_blk_CO.paa",
		"\A3\Soft_F_Enoch\Offroad_01\Data\Offroad_01_ext_blk_CO.paa",
		"\A3\Soft_F_Enoch\Offroad_01\Data\Offroad_01_cover_blk_CO.paa"
	};
};