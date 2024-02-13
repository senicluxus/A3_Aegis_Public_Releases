class Opf_I_I_Offroad_01_F: I_G_Offroad_01_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\I_T_Offroad_01_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TGuerrila;
	faction = Opf_IND_I_F;
	crew = Opf_I_I_Soldier_1_F;
	typicalCargo[] = {Opf_I_I_Soldier_1_F};
	textureList[] =
	{
		Insurgent_01,1,
		Insurgent_02,1,
		Insurgent_03,1,
		Insurgent_04,1,
		Insurgent_05,1,
		Insurgent_06,1
	};
	hiddenSelectionsTextures[] =
	{
		"\A3_Opf\Soft_F_Opf\Offroad_01\Data\Offroad_01_ext_INS01_CO.paa",
		"\A3_Opf\Soft_F_Opf\Offroad_01\Data\Offroad_01_ext_INS01_CO.paa"
	};
};
class Opf_I_I_Offroad_01_AT_F: I_G_Offroad_01_AT_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\I_T_Offroad_01_AT_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TGuerrila;
	faction = Opf_IND_I_F;
	crew = Opf_I_I_Soldier_1_F;
	typicalCargo[] = {Opf_I_I_Soldier_1_F};
	textureList[] =
	{
		Insurgent_01,1,
		Insurgent_02,1,
		Insurgent_03,1,
		Insurgent_04,1,
		Insurgent_05,1,
		Insurgent_06,1
	};
	hiddenSelectionsTextures[] =
	{
		"\A3_Opf\Soft_F_Opf\Offroad_01\Data\Offroad_01_ext_INS01_CO.paa",
		"\A3_Opf\Soft_F_Opf\Offroad_01\Data\Offroad_01_ext_INS01_CO.paa"
	};
};
class Opf_I_I_Offroad_01_armed_F: I_G_Offroad_01_armed_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\I_T_Offroad_01_armed_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TGuerrila;
	faction = Opf_IND_I_F;
	crew = Opf_I_I_Soldier_1_F;
	typicalCargo[] = {Opf_I_I_Soldier_1_F};
	textureList[] =
	{
		Insurgent_01,1,
		Insurgent_02,1,
		Insurgent_03,1,
		Insurgent_04,1,
		Insurgent_05,1,
		Insurgent_06,1
	};
	hiddenSelectionsTextures[] =
	{
		"\A3_Opf\Soft_F_Opf\Offroad_01\Data\Offroad_01_ext_INS01_CO.paa",
		"\A3_Opf\Soft_F_Opf\Offroad_01\Data\Offroad_01_ext_INS01_CO.paa"
	};
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
};
class Opf_I_I_Offroad_01_armor_base_F: Offroad_01_armor_base_lxWS
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\I_I_Offroad_01_armor_base_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TGuerrila;
	faction = Opf_IND_I_F;
	crew = Opf_I_I_Soldier_1_F;
	typicalCargo[] = {Opf_I_I_Soldier_1_F};
	textureList[] =
	{
		Insurgent_01,1,
		Insurgent_02,1,
		Insurgent_03,1,
		Insurgent_04,1,
		Insurgent_05,1,
		Insurgent_06,1
	};
	hiddenSelectionsTextures[] =
	{
		"\A3_Opf\Soft_F_Opf\Offroad_01\Data\Offroad_01_ext_INS01_CO.paa",
		"\A3_Opf\Soft_F_Opf\Offroad_01\Data\Offroad_01_ext_INS01_CO.paa",
		"\lxws\vehicles_f_lxws\Offroad_01\data\offroad_01_adds_black_co.paa",
        "\lxws\vehicles_f_lxws\Offroad_01\data\offroad_01_armor_rust_co.paa"
	};
	/* Inventory */
	class TransportItems
	{
		item_xx(FirstAidKit,4);
	};
};
class Opf_I_I_Offroad_01_armor_armed_F: Offroad_01_armor_armed_lxWS
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\I_I_Offroad_01_armor_armed_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TGuerrila;
	faction = Opf_IND_I_F;
	crew = Opf_I_I_Soldier_1_F;
	typicalCargo[] = {Opf_I_I_Soldier_1_F};
	textureList[] =
	{
		Insurgent_01,1,
		Insurgent_02,1,
		Insurgent_03,1,
		Insurgent_04,1,
		Insurgent_05,1,
		Insurgent_06,1
	};
	hiddenSelectionsTextures[] =
	{
		"\A3_Opf\Soft_F_Opf\Offroad_01\Data\Offroad_01_ext_INS01_CO.paa",
		"\A3_Opf\Soft_F_Opf\Offroad_01\Data\Offroad_01_ext_INS01_CO.paa",
		"\lxws\vehicles_f_lxws\Offroad_01\data\offroad_01_adds_black_co.paa",
        "\lxws\vehicles_f_lxws\Offroad_01\data\offroad_01_armor_rust_co.paa"
	};
	/* Inventory */
	class TransportItems
	{
		item_xx(FirstAidKit,4);
	};
};
class Opf_I_I_Offroad_01_armor_AT_F: Offroad_01_armor_AT_lxWS
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\I_I_Offroad_01_armor_armed_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TGuerrila;
	faction = Opf_IND_I_F;
	crew = Opf_I_I_Soldier_1_F;
	typicalCargo[] = {Opf_I_I_Soldier_1_F};
	textureList[] =
	{
		Insurgent_01,1,
		Insurgent_02,1,
		Insurgent_03,1,
		Insurgent_04,1,
		Insurgent_05,1,
		Insurgent_06,1
	};
	hiddenSelectionsTextures[] =
	{
		"\A3_Opf\Soft_F_Opf\Offroad_01\Data\Offroad_01_ext_INS01_CO.paa",
		"\A3_Opf\Soft_F_Opf\Offroad_01\Data\Offroad_01_ext_INS01_CO.paa",
		"\lxws\vehicles_f_lxws\Offroad_01\data\offroad_01_adds_black_co.paa",
        "\lxws\vehicles_f_lxws\Offroad_01\data\offroad_01_armor_rust_co.paa"
	};
	/* Inventory */
	class TransportItems
	{
		item_xx(FirstAidKit,4);
	};
};