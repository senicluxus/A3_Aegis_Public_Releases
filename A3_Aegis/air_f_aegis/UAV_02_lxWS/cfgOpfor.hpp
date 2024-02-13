/*======================================
	Chinese Bustards
======================================*/
class Aegis_O_T_UAV_02_lxWS: UAV_02_Base_lxWS
{
	class SimpleObject{};
	//editorPreview = "\lxws\editorpreviews_f_lxws\Data\CfgVehicles\O_UAV_02_lxWS.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_LXWS_UAV_CSAT;
	side = TEast;
	faction = OPF_T_F;
	crew = O_UAV_AI;
	typicalCargo[] = {O_UAV_AI};
	hiddenSelectionsTextures[] = {"lxWS\air_f_lxWS\Data\O_Gun_Drone_CO.paa"};
	textureList[] =
	{
		Opfor,1,
		Black,0
	};
	class Components: Components{};
	class assembleInfo
	{
		primary = true;
		base = "";
		assembleTo = "";
		displayName = "";
		dissasembleTo[] = {Aegis_O_T_UAV_02_backpack_lxWS};
	};
   
   lxws_droneWeapon[] = {"arifle_CTARS_blk_F","100Rnd_580x42_Mag_F",""};	// weapon, prim mag, sec mag
};
class Aegis_O_T_UAV_02_backpack_lxWS: Weapon_Bag_Base
{
	mapSize = 0.6;
	scope = protected;
	scopeCurator = protected;
	displayName = $STR_A3_A_CfgVehicles_O_T_UAV_02_lxWS_backpack_F0;
	model = "\lxWS\air_f_lxWS\Bags\UAV_backpack_lxWS.p3d";
	editorCategory = EdCat_Equipment;
	editorSubcategory = EdSubcat_Backpacks;
	faction = OPF_T_F;
	picture = "\lxWS\air_f_lxWS\Data\UI\icon_O_UAV_02_backpack_lxWS_CA.paa";
	hiddenSelectionsTextures[] = {"\lxWS\air_f_lxWS\Bags\Data\UAV_backpack_CSAT_CO.paa"};
	maximumLoad = 0;
	mass = 400;
	class assembleInfo: assembleInfo
	{
		base = "";
		displayName = $STR_LXWS_UAV_CSAT;
		assembleTo = Aegis_O_T_UAV_02_lxWS;
	};
};