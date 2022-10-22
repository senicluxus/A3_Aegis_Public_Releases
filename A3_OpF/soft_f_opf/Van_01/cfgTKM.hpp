class Opf_I_I_Van_01_transport_F: Van_01_transport_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\I_T_Van_01_transport_F.jpg";
	scope = public;
	displayName = $STR_A3_CfgVehicles_C_Van_01;
	model = "\A3\Soft_F_Gamma\Van_01\Van_01_transport_F.p3d";
	icon = "\A3\Soft_F_Gamma\Van_01\Data\UI\map_Van_01_dropside_CA.paa";
	picture = "\A3\Soft_F_Gamma\Van_01\Data\UI\portrait_Van_01_dropside_CA.paa";
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
	hiddenSelections[] =
    {
        Camo1,
        Camo2,
        Camo3
    };
	hiddenSelectionsTextures[] =
	{
		"\A3_Opf\Soft_F_Opf\Van_01\Data\Van_01_ext_INS01_CO.paa",
		"\A3_Opf\Soft_F_Opf\Van_01\Data\Van_01_adds_INS01_CO.paa",
		"\A3\Soft_F_Exp\Van_01\Data\Van_01_int_base_2_CO.paa"
	};
};