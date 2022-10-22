class Opf_I_P_Offroad_01_F: I_G_Offroad_01_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\I_M_Offroad_01_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TGuerrila;
	faction = Opf_IND_P_F;
	crew = Opf_I_P_Soldier_1_F;
	typicalCargo[] = {Opf_I_P_Soldier_1_F};
	textureList[] = {Black,1};
	hiddenSelectionsTextures[] =
	{
		"\A3\Soft_F_Enoch\Offroad_01\Data\Offroad_01_ext_blk_CO.paa",
		"\A3\Soft_F_Enoch\Offroad_01\Data\Offroad_01_ext_blk_CO.paa"
	};
};
class Opf_I_P_Offroad_01_armed_F: I_G_Offroad_01_armed_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\I_M_Offroad_01_armed_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TGuerrila;
	faction = Opf_IND_P_F;
	crew = Opf_I_P_Soldier_1_F;
	typicalCargo[] = {Opf_I_P_Soldier_1_F};
	textureList[] = {Black,1};
	hiddenSelectionsTextures[] =
	{
		"\A3\Soft_F_Enoch\Offroad_01\Data\Offroad_01_ext_blk_CO.paa",
		"\A3\Soft_F_Enoch\Offroad_01\Data\Offroad_01_ext_blk_CO.paa"
	};
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
};
class Opf_I_P_Offroad_01_covered_F: Offroad_01_military_covered_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\I_M_Offroad_01_covered_F.jpg";
	scope = public;
	scopeCurator = public;
	accuracy = 1.25;
	side = TGuerrila;
	faction = Opf_IND_P_F;
	crew = Opf_I_P_Soldier_1_F;
	typicalCargo[] = {Opf_I_P_Soldier_1_F};
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