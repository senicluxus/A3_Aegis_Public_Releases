class Opf_O_P_Offroad_01_F: O_G_Offroad_01_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\O_P_Offroad_01_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TEast;
	faction = Opf_OPF_P_F;
	crew = Opf_O_P_Soldier_1_F;
	typicalCargo[] = {Opf_O_P_Soldier_1_F};
	textureList[] = {Black,1};
	hiddenSelectionsTextures[] =
	{
		"\A3\Soft_F_Enoch\Offroad_01\Data\Offroad_01_ext_blk_CO.paa",
		"\A3\Soft_F_Enoch\Offroad_01\Data\Offroad_01_ext_blk_CO.paa"
	};
};
class Opf_O_P_Offroad_01_AT_F: O_G_Offroad_01_AT_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\O_P_Offroad_01_AT_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TEast;
	faction = Opf_OPF_P_F;
	crew = Opf_O_P_Soldier_1_F;
	typicalCargo[] = {Opf_O_P_Soldier_1_F};
	textureList[] = {Black,1};
	hiddenSelectionsTextures[] =
	{
		"\A3\Soft_F_Enoch\Offroad_01\Data\Offroad_01_ext_blk_CO.paa",
		"\A3\Soft_F_Enoch\Offroad_01\Data\Offroad_01_ext_blk_CO.paa"
	};
};
class Opf_O_P_Offroad_01_armed_F: O_G_Offroad_01_armed_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\O_P_Offroad_01_armed_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TEast;
	faction = Opf_OPF_P_F;
	crew = Opf_O_P_Soldier_1_F;
	typicalCargo[] = {Opf_O_P_Soldier_1_F};
	textureList[] = {Black,1};
	hiddenSelectionsTextures[] =
	{
		"\A3\Soft_F_Enoch\Offroad_01\Data\Offroad_01_ext_blk_CO.paa",
		"\A3\Soft_F_Enoch\Offroad_01\Data\Offroad_01_ext_blk_CO.paa"
	};
	class Turrets: Turrets
	{
		class M2_Turret: M2_Turret
		{
			magazines[] = {mag_3(100Rnd_127x99_mag_Tracer_Green)};
		};
	};
	class AnimationSources: AnimationSources
	{
		class Hide_Shield: Hide_Shield
		{
			initPhase = false;
		};
		class Hide_Rail: Hide_Rail
		{
			initPhase = true;
		};
	};
};
class Opf_O_P_Offroad_01_covered_F: Offroad_01_military_covered_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\O_P_Offroad_01_covered_F.jpg";
	scope = public;
	scopeCurator = public;
	accuracy = 1.25;
	side = TEast;
	faction = Opf_OPF_P_F;
	crew = Opf_O_P_Soldier_1_F;
	typicalCargo[] = {Opf_O_P_Soldier_1_F};
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
	class EventHandlers: EventHandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), """", [], true] call bis_fnc_initVehicle;};";
	};
};
class Opf_O_P_Offroad_01_comms_F: Offroad_01_military_comms_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\O_P_Offroad_01_comms_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TEast;
	faction = Opf_OPF_P_F;
	crew = Opf_O_P_Soldier_1_F;
	typicalCargo[] = {Opf_O_P_Soldier_1_F};
	accuracy = 1.25;
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