/*======================================
	Russian AP-5s
======================================*/
class Aegis_O_R_UAV_02_lxWS: UAV_02_Base_lxWS
{
	class SimpleObject{};
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_O_R_UAV_02_lxWS.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_A_CfgVehicles_O_R_UAV_02_lxWS_F0;
	side = TEast;
	faction = OPF_R_F;
	crew = O_UAV_AI;
	typicalCargo[] = {O_UAV_AI};
	hiddenSelectionsTextures[] = {"\A3_Aegis\air_f_aegis\UAV_02_lxWS\Data\O_R_Gun_Drone_CO.paa"};
	textureList[] =
	{
		Rus,1,
		Black,0
	};
	class Components: Components{};
	class assembleInfo
	{
		primary = true;
		base = "";
		assembleTo = "";
		displayName = "";
		dissasembleTo[] = {Aegis_O_R_UAV_02_backpack_lxWS};
	};
   
   lxws_droneWeapon[] = {"arifle_RPK12_F","75rnd_762x39_ak12_mag_f",""};	// weapon, prim mag, sec mag
};
class Aegis_O_R_UAV_02_ard_lxWS: UAV_02_Base_lxWS
{
	class SimpleObject{};
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_O_R_UAV_02_lxWS.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_A_CfgVehicles_O_R_UAV_02_lxWS_F0;
	side = TEast;
	faction = OPF_R_ard_F;
	crew = O_UAV_AI;
	typicalCargo[] = {O_UAV_AI};
	hiddenSelectionsTextures[] = {"\A3_Aegis\air_f_aegis\UAV_02_lxWS\Data\O_R_Gun_Drone_CO.paa"};
	textureList[] =
	{
		Rus,1,
		Black,0
	};
	class Components: Components{};
	class assembleInfo
	{
		primary = true;
		base = "";
		assembleTo = "";
		displayName = "";
		dissasembleTo[] = {Aegis_O_R_UAV_02_backpack_lxWS};
	};
   
   lxws_droneWeapon[] = {"arifle_RPK12_F","75rnd_762x39_ak12_mag_f",""};	// weapon, prim mag, sec mag
};
class Aegis_O_R_UAV_02_backpack_lxWS: Weapon_Bag_Base
{
	mapSize = 0.6;
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_A_CfgVehicles_O_R_UAV_02_lxWS_backpack_F0;
	model = "\lxWS\air_f_lxWS\Bags\UAV_backpack_lxWS.p3d";
	editorCategory = EdCat_Equipment;
	editorSubcategory = EdSubcat_Backpacks;
	faction = OPF_R_F;
	picture = "\A3_Aegis\Supplies_F_Aegis\Bags\Data\UI\icon_O_R_UAV_01_backpack_F_CA.paa";
	hiddenSelectionsTextures[] = {"\A3_Aegis\Supplies_F_Aegis\Bags\Data\UAV_backpack_lxWS_RUkhk_CO.paa"};
	maximumLoad = 0;
	mass = 400;
	class assembleInfo: assembleInfo
	{
		base = "";
		displayName = $STR_A3_A_CfgVehicles_O_R_UAV_02_lxWS_F0;
		assembleTo = Aegis_O_R_UAV_02_lxWS;
	};
};