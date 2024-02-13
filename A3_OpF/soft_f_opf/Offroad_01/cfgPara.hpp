class Opf_O_P_Offroad_01_F: Offroad_01_base_lxWS
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\Opf_O_P_Offroad_01_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TEast;
	faction = Opf_OPF_P_F;
	crew = Opf_O_P_M_Soldier_1_F;
	typicalCargo[] = {Opf_O_P_M_Soldier_1_F};
	textureList[] = {Beige,1};
	hiddenSelectionsTextures[] =
	{
		"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE01_CO.paa",
		"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE01_CO.paa",
		"\lxws\vehicles_f_lxws\Offroad_01\data\offroad_01_adds_black_co.paa",
		"\lxws\vehicles_f_lxws\Offroad_01\data\offroad_01_armor_sfia2_co.paa"
	};
};
class Opf_O_P_Offroad_01_AT_F: Offroad_01_AT_lxWS
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\Opf_O_P_Offroad_01_AT_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TEast;
	faction = Opf_OPF_P_F;
	crew = Opf_O_P_M_Soldier_1_F;
	typicalCargo[] = {Opf_O_P_M_Soldier_1_F};
	textureList[] = {Beige,1};
	hiddenSelectionsTextures[] =
	{
		"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE01_CO.paa",
		"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE01_CO.paa",
		"\lxws\vehicles_f_lxws\Offroad_01\data\offroad_01_adds_black_co.paa",
		"\lxws\vehicles_f_lxws\Offroad_01\data\offroad_01_armor_sfia2_co.paa"
	};
};
class Opf_O_P_Offroad_01_armed_F: Offroad_01_armed_lxWS
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\Opf_O_P_Offroad_01_armed_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TEast;
	faction = Opf_OPF_P_F;
	crew = Opf_O_P_M_Soldier_1_F;
	typicalCargo[] = {Opf_O_P_M_Soldier_1_F};
	textureList[] = {Beige,1};
	hiddenSelectionsTextures[] =
	{
		"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE01_CO.paa",
		"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE01_CO.paa",
		"\lxws\vehicles_f_lxws\Offroad_01\data\offroad_01_adds_black_co.paa",
		"\lxws\vehicles_f_lxws\Offroad_01\data\offroad_01_armor_sfia2_co.paa"
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
class Opf_O_P_Offroad_01_armor_base_F: Offroad_01_armor_base_lxWS
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\Opf_O_P_Offroad_01_armor_base_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TEast;
	faction = Opf_OPF_P_F;
	crew = Opf_O_P_M_Soldier_1_F;
	typicalCargo[] = {Opf_I_I_Soldier_1_F};
	textureList[] =
	{
		Beige,1
	};
	hiddenSelectionsTextures[] =
	{
		"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE01_CO.paa",
		"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE01_CO.paa",
		"\lxws\vehicles_f_lxws\Offroad_01\data\offroad_01_adds_black_co.paa",
		"\lxws\vehicles_f_lxws\Offroad_01\data\offroad_01_armor_sfia2_co.paa"
	};
	/* Inventory */
	class TransportItems
	{
		item_xx(FirstAidKit,4);
	};
};
class Opf_O_P_Offroad_01_armor_armed_F: Offroad_01_armor_armed_lxWS
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\Opf_O_P_Offroad_01_armor_armed_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TEast;
	faction = Opf_OPF_P_F;
	crew = Opf_O_P_M_Soldier_1_F;
	typicalCargo[] = {Opf_O_P_Soldier_1_F};
	textureList[] =
	{
		Beige,1
	};
	hiddenSelectionsTextures[] =
	{
		"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE01_CO.paa",
		"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE01_CO.paa",
		"\lxws\vehicles_f_lxws\Offroad_01\data\offroad_01_adds_black_co.paa",
		"\lxws\vehicles_f_lxws\Offroad_01\data\offroad_01_armor_sfia2_co.paa"
	};
	/* Inventory */
	class TransportItems
	{
		item_xx(FirstAidKit,4);
	};
};
class Opf_O_P_Offroad_01_armor_AT_F: Offroad_01_armor_AT_lxWS
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\Opf_O_P_Offroad_01_armor_armed_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TEast;
	faction = Opf_OPF_P_F;
	crew = Opf_O_P_M_Soldier_1_F;
	typicalCargo[] = {Opf_O_P_M_Soldier_1_F};
	textureList[] =
	{
		Beige,1
	};
	hiddenSelectionsTextures[] =
	{
		"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE01_CO.paa",
		"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE01_CO.paa",
		"\lxws\vehicles_f_lxws\Offroad_01\data\offroad_01_adds_black_co.paa",
		"\lxws\vehicles_f_lxws\Offroad_01\data\offroad_01_armor_sfia2_co.paa"
	};
	/* Inventory */
	class TransportItems
	{
		item_xx(FirstAidKit,4);
	};
};
/*class Opf_O_P_Offroad_01_covered_F: Offroad_01_military_covered_base_F
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
};*/