/*======================================
	LDF INDEP Bustards
======================================*/
class Aegis_I_E_UAV_02_lxWS: UAV_02_Base_lxWS
{
	class SimpleObject{};
	//editorPreview = "\lxws\editorpreviews_f_lxws\Data\CfgVehicles\I_E_UAV_02_lxWS.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_LXWS_UAV_NATO;
	side = TGuerrila;
	faction = IND_E_F;
	crew = I_UAV_AI;
	typicalCargo[] = {I_UAV_AI};
	hiddenSelectionsTextures[] = {"A3_Aegis\air_f_aegis\UAV_02_lxWS\Data\I_E_Gun_Drone_CO.paa"};
	textureList[] =
	{
		EAF,1,
		Blufor,0
	};
	class Components: Components{};
	class assembleInfo
	{
		primary = true;
		base = "";
		assembleTo = "";
		displayName = "";
		dissasembleTo[] = {Aegis_I_E_UAV_02_backpack_lxWS};
	};
   
   lxws_droneWeapon[] = {"arifle_MSBS65_Mark_F","30Rnd_65x39_caseless_msbs_mag",""};	// weapon, prim mag, sec mag
};
class Aegis_I_E_UAV_02_backpack_lxWS: Weapon_Bag_Base
{
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_A_CfgVehicles_I_E_UAV_02_lxWS_backpack_F0;
	model = "\lxWS\air_f_lxWS\Bags\UAV_backpack_lxWS.p3d";
	editorCategory = EdCat_Equipment;
	editorSubcategory = EdSubcat_Backpacks;
	faction = IND_E_F;
	picture = "\lxWS\air_f_lxWS\Data\UI\icon_I_UAV_02_backpack_lxWS_CA.paa";
	hiddenSelectionsTextures[] = {"\lxWS\air_f_lxWS\Bags\Data\UAV_backpack_AAF_CO.paa"};
	maximumLoad = 0;
	mass = 400;
	class assembleInfo: assembleInfo
	{
		base = "";
		displayName = $STR_LXWS_UAV_NATO;
		assembleTo = Aegis_I_E_UAV_02_lxWS;
	};
};
/*======================================
	LDF BLUFOR Bustards
======================================*/
class Aegis_B_E_UAV_02_lxWS: UAV_02_Base_lxWS
{
	class SimpleObject{};
	//editorPreview = "\lxws\editorpreviews_f_lxws\Data\CfgVehicles\I_E_UAV_02_lxWS.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_LXWS_UAV_NATO;
	side = TWest;
	faction = BLU_EAF_F;
	crew = B_UAV_AI;
	typicalCargo[] = {B_UAV_AI};
	hiddenSelectionsTextures[] = {"A3_Aegis\air_f_aegis\UAV_02_lxWS\Data\I_E_Gun_Drone_CO.paa"};
	textureList[] =
	{
		EAF,1,
		Blufor,0
	};
	class Components: Components{};
	class assembleInfo
	{
		primary = true;
		base = "";
		assembleTo = "";
		displayName = "";
		dissasembleTo[] = {Aegis_B_E_UAV_02_backpack_lxWS};
	};
   
   lxws_droneWeapon[] = {"arifle_MSBS65_Mark_F","30Rnd_65x39_caseless_msbs_mag",""};	// weapon, prim mag, sec mag
};
class Aegis_B_E_UAV_02_backpack_lxWS: Weapon_Bag_Base
{
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_A_CfgVehicles_B_EAF_UAV_02_lxWS_backpack_F0;
	model = "\lxWS\air_f_lxWS\Bags\UAV_backpack_lxWS.p3d";
	editorCategory = EdCat_Equipment;
	editorSubcategory = EdSubcat_Backpacks;
	faction = BLU_EAF_F;
	picture = "\lxWS\air_f_lxWS\Data\UI\icon_I_UAV_02_backpack_lxWS_CA.paa";
	hiddenSelectionsTextures[] = {"\lxWS\air_f_lxWS\Bags\Data\UAV_backpack_AAF_CO.paa"};
	maximumLoad = 0;
	mass = 400;
	class assembleInfo: assembleInfo
	{
		base = "";
		displayName = $STR_LXWS_UAV_NATO;
		assembleTo = Aegis_B_E_UAV_02_lxWS;
	};
};