class Opf_O_S_Offroad_01_F: O_G_Offroad_01_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\Opf_O_S_Offroad_01_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TEast;
	faction = Opf_OPF_S_F;
	crew = Opf_O_S_Soldier_1_F;
	typicalCargo[] = {Opf_O_S_Soldier_1_F};
	textureList[] =
	{
		Sep_01,1
	};
	hiddenSelectionsTextures[] =
	{
		"\A3_Opf\Soft_F_Opf\Offroad_01\Data\Offroad_01_ext_Sep_CO.paa",
		"\A3_Opf\Soft_F_Opf\Offroad_01\Data\Offroad_01_ext_Sep_CO.paa"
	};
};
class Opf_O_S_Offroad_01_AT_F: O_G_Offroad_01_AT_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\Opf_O_S_Offroad_01_AT_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TEast;
	faction = Opf_OPF_S_F;
	crew = Opf_O_S_Soldier_1_F;
	typicalCargo[] = {Opf_O_S_Soldier_1_F};
	textureList[] =
	{
		Sep_01,1
	};
	hiddenSelectionsTextures[] =
	{
		"\A3_Opf\Soft_F_Opf\Offroad_01\Data\Offroad_01_ext_Sep_CO.paa",
		"\A3_Opf\Soft_F_Opf\Offroad_01\Data\Offroad_01_ext_Sep_CO.paa"
	};
};
class Opf_O_S_Offroad_01_armed_F: O_G_Offroad_01_armed_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\Opf_O_S_Offroad_01_armed_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TEast;
	faction = Opf_OPF_S_F;
	crew = Opf_O_S_Soldier_1_F;
	typicalCargo[] = {Opf_O_S_Soldier_1_F};
	textureList[] =
	{
		Sep_01,1
	};
	hiddenSelectionsTextures[] =
	{
		"\A3_Opf\Soft_F_Opf\Offroad_01\Data\Offroad_01_ext_Sep_CO.paa",
		"\A3_Opf\Soft_F_Opf\Offroad_01\Data\Offroad_01_ext_Sep_CO.paa"
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