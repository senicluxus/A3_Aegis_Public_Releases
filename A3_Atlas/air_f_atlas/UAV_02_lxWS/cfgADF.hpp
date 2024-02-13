/*======================================
	Australian Bustards
======================================*/
class Atlas_B_A_UAV_02_lxWS: UAV_02_Base_lxWS
{
	class SimpleObject{};
	scope = public;
	scopeCurator = public;
    //editorPreview = "\lxws\editorpreviews_f_lxws\Data\CfgVehicles\B_UAV_02_lxWS.jpg";
	displayName = $STR_LXWS_UAV_NATO;
	side = TWest;
	faction = Atlas_BLU_A_F;
	crew = B_UAV_AI;
	typicalCargo[] = {B_UAV_AI};
	hiddenSelectionsTextures[] = {"lxWS\air_f_lxWS\Data\Gun_Drone_CO.paa"};
	textureList[] =
	{
		Blufor,1,
		Black,0
	};
	class Components: Components{};
	class assembleInfo
	{
		primary = true;
		base = "";
		assembleTo = "";
		displayName = "";
		dissasembleTo[] = {Atlas_B_A_UAV_02_backpack_lxWS};
	};
	
   lxws_droneWeapon[] = {"LMG_03_F","200Rnd_556x45_Box_Red_F",""};	// weapon, prim mag, sec mag
};
class Atlas_B_A_UAV_02_ard_lxWS: UAV_02_Base_lxWS
{
	class SimpleObject{};
	scope = public;
	scopeCurator = public;
    //editorPreview = "\lxws\editorpreviews_f_lxws\Data\CfgVehicles\B_UAV_02_lxWS.jpg";
	displayName = $STR_LXWS_UAV_NATO;
	side = TWest;
	faction = Atlas_BLU_A_ard_F;
	crew = B_UAV_AI;
	typicalCargo[] = {B_UAV_AI};
	hiddenSelectionsTextures[] = {"lxWS\air_f_lxWS\Data\Gun_Drone_CO.paa"};
	textureList[] =
	{
		Blufor,1,
		Black,0
	};
	class Components: Components{};
	class assembleInfo
	{
		primary = true;
		base = "";
		assembleTo = "";
		displayName = "";
		dissasembleTo[] = {Atlas_B_A_UAV_02_backpack_lxWS};
	};
	
   lxws_droneWeapon[] = {"LMG_03_F","200Rnd_556x45_Box_Red_F",""};	// weapon, prim mag, sec mag
};
class Atlas_B_A_UAV_02_trp_lxWS: UAV_02_Base_lxWS
{
	class SimpleObject{};
	scope = public;
	scopeCurator = public;
    //editorPreview = "\lxws\editorpreviews_f_lxws\Data\CfgVehicles\B_UAV_02_lxWS.jpg";
	displayName = $STR_LXWS_UAV_NATO;
	side = TWest;
	faction = Atlas_BLU_A_trp_F;
	crew = B_UAV_AI;
	typicalCargo[] = {B_UAV_AI};
	hiddenSelectionsTextures[] = {"lxWS\air_f_lxWS\Data\Gun_Drone_CO.paa"};
	textureList[] =
	{
		Blufor,1,
		Black,0
	};
	class Components: Components{};
	class assembleInfo
	{
		primary = true;
		base = "";
		assembleTo = "";
		displayName = "";
		dissasembleTo[] = {Atlas_B_A_UAV_02_backpack_lxWS};
	};
	
   lxws_droneWeapon[] = {"LMG_03_F","200Rnd_556x45_Box_Red_F",""};	// weapon, prim mag, sec mag
};
class Atlas_B_A_UAV_02_backpack_lxWS: Weapon_Bag_Base
{
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_A_CfgVehicles_B_ADF_UAV_02_lxWS_backpack_F0;
	model = "\lxWS\air_f_lxWS\Bags\UAV_backpack_lxWS.p3d";
	editorCategory = EdCat_Equipment;
	editorSubcategory = EdSubcat_Backpacks;
	faction = Atlas_BLU_A_F;
	picture = "\lxWS\air_f_lxWS\Data\UI\icon_B_UAV_02_backpack_lxWS_CA.paa";
	hiddenSelectionsTextures[] = {"\A3_Atlas\Supplies_F_Atlas\Bags\Data\UAV_backpack_lxWS_aucamo_CO.paa"};
	maximumLoad = 0;
	mass = 400;
	class assembleInfo: assembleInfo
	{
		base = "";
		displayName = $STR_LXWS_UAV_NATO;
		assembleTo = Atlas_B_A_UAV_02_lxWS;
	};
};
