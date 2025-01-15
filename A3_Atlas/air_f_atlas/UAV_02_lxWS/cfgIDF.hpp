/*======================================
	Israeli Bustards
======================================*/
class Atlas_I_I_UAV_02_lxWS: UAV_02_Base_lxWS
{
	class SimpleObject{};
	scope = public;
	scopeCurator = public;
    editorPreview = "\A3_Atlas\Editorpreviews_f_Atlas\Data\CfgVehicles\Atlas_I_I_UAV_02_lxWS.jpg";
	displayName = $STR_A3_A_CfgVehicles_I_I_UAV_02_lxWS_F0;
	side = TGuerrila;
	faction = Atlas_IND_I_F;
	crew = I_UAV_AI;
	typicalCargo[] = {I_UAV_AI};
	hiddenSelectionsTextures[] = {"\A3_Atlas\air_f_atlas\UAV_02_lxWS\Data\I_Gun_Drone_IDF_CO.paa"};
	textureList[] =
	{
		IDF,1,
		Blufor,0
	};
	class Components: Components{};
	class assembleInfo
	{
		primary = true;
		base = "";
		assembleTo = "";
		displayName = "";
		dissasembleTo[] = {Atlas_I_I_UAV_02_backpack_lxWS};
	};
	
   lxws_droneWeapon[] = {"Atlas_LMG_Negev_black_F","Atlas_150Rnd_762x51_Box_Yellow",""};	// weapon, prim mag, sec mag
};
class Atlas_I_I_UAV_02_backpack_lxWS: Weapon_Bag_Base
{
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_A_CfgVehicles_I_I_UAV_02_lxWS_backpack_F0;
	model = "\lxWS\air_f_lxWS\Bags\UAV_backpack_lxWS.p3d";
	editorCategory = EdCat_Equipment;
	editorSubcategory = EdSubcat_Backpacks;
	faction = Atlas_IND_I_F;
	picture = "\A3_Atlas\Supplies_F_Atlas\Bags\Data\UI\icon_I_I_UAV_01_backpack_F_CA.paa";
	hiddenSelectionsTextures[] = {"\A3_Atlas\Supplies_F_Atlas\Bags\Data\UAV_backpack_lxWS_khk_CO.paa"};
	maximumLoad = 0;
	mass = 400;
	class assembleInfo: assembleInfo
	{
		base = "";
		displayName = $STR_LXWS_UAV_NATO;
		assembleTo = Atlas_I_I_UAV_02_lxWS;
	};
};
