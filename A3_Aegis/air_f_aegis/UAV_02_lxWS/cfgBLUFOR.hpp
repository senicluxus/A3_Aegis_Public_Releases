/*======================================
	US Bustards
======================================*/
class Aegis_B_T_UAV_02_lxWS: UAV_02_Base_lxWS
{
	scope = public;
	scopeCurator = public;
   	//editorPreview = "\lxws\editorpreviews_f_lxws\Data\CfgVehicles\B_UAV_02_lxWS.jpg";
	displayName = $STR_LXWS_UAV_NATO;
	side = TWest;
	faction = BLU_T_F;
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
		dissasembleTo[] = {Aegis_B_T_UAV_02_backpack_lxWS};
	};
	
   lxws_droneWeapon[] = {"arifle_MX_SW_khk_F","100Rnd_65x39_caseless_khaki_mag",""};	// weapon, prim mag, sec mag
};
class Aegis_B_T_UAV_02_backpack_lxWS: Weapon_Bag_Base
{
	scope = protected;
	scopeCurator = protected;
	displayName = $STR_LXWS_UAV_BAG_NATO;
	model = "\lxWS\air_f_lxWS\Bags\UAV_backpack_lxWS.p3d";
	editorCategory = EdCat_Equipment;
	editorSubcategory = EdSubcat_Backpacks;
	faction = BLU_T_F;
	picture = "\lxWS\air_f_lxWS\Data\UI\icon_B_UAV_02_backpack_lxWS_CA.paa";
	hiddenSelectionsTextures[] = {"\lxWS\air_f_lxWS\Bags\Data\UAV_backpack_NATO_CO.paa"};
	maximumLoad = 0;
	mass = 400;
	class assembleInfo: assembleInfo
	{
		base = "";
		displayName = $STR_LXWS_UAV_NATO;
		assembleTo = Aegis_B_T_UAV_02_lxWS;
	};
};
class Aegis_B_W_UAV_02_lxWS: UAV_02_Base_lxWS
{
	class SimpleObject{};
	scope = public;
	scopeCurator = public;
   	//editorPreview = "\lxws\editorpreviews_f_lxws\Data\CfgVehicles\B_UAV_02_lxWS.jpg";
	displayName = $STR_LXWS_UAV_NATO;
	side = TWest;
	faction = BLU_W_F;
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
		dissasembleTo[] = {Aegis_B_W_UAV_02_backpack_lxWS};
	};
	
   lxws_droneWeapon[] = {"arifle_MX_SW_black_F","100Rnd_65x39_caseless_black_mag",""};	// weapon, prim mag, sec mag
};
class Aegis_B_W_UAV_02_backpack_lxWS: Weapon_Bag_Base
{
	scope = protected;
	scopeCurator = protected;
	displayName = $STR_LXWS_UAV_BAG_NATO;
	model = "\lxWS\air_f_lxWS\Bags\UAV_backpack_lxWS.p3d";
	editorCategory = EdCat_Equipment;
	editorSubcategory = EdSubcat_Backpacks;
	faction = BLU_W_F;
	picture = "\lxWS\air_f_lxWS\Data\UI\icon_B_UAV_02_backpack_lxWS_CA.paa";
	hiddenSelectionsTextures[] = {"\lxWS\air_f_lxWS\Bags\Data\UAV_backpack_NATO_CO.paa"};
	maximumLoad = 0;
	mass = 400;
	class assembleInfo: assembleInfo
	{
		base = "";
		displayName = $STR_LXWS_UAV_NATO;
		assembleTo = Aegis_B_W_UAV_02_lxWS;
	};
};
class Aegis_B_D_UAV_02_lxWS: B_UAV_02_lxWS
{
	scope = public;
	scopeCurator = public;
	displayName = $STR_LXWS_UAV_NATO;
	side = TWest;
	faction = BLU_NATO_LXWS;
	crew = B_UAV_AI;
	typicalCargo[] = {B_UAV_AI};	
};

/*======================================
	Bri'ish Bustards
======================================*/
class Aegis_B_A_UAV_02_lxWS: UAV_02_Base_lxWS
{
	scope = public;
	scopeCurator = public;
   	//editorPreview = "\lxws\editorpreviews_f_lxws\Data\CfgVehicles\B_UAV_02_lxWS.jpg";
	displayName = $STR_LXWS_UAV_NATO;
	side = TWest;
	faction = BLU_A_F;
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
		dissasembleTo[] = {Aegis_B_A_UAV_02_backpack_lxWS};
	};
	
   lxws_droneWeapon[] = {"LMG_Mk200_Black_F","200Rnd_65x39_cased_box",""};	// weapon, prim mag, sec mag
};
class Aegis_B_A_UAV_02_tna_lxWS: UAV_02_Base_lxWS
{
	scope = public;
	scopeCurator = public;
   	//editorPreview = "\lxws\editorpreviews_f_lxws\Data\CfgVehicles\B_UAV_02_lxWS.jpg";
	displayName = $STR_LXWS_UAV_NATO;
	side = TWest;
	faction = BLU_A_tna_F;
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
		dissasembleTo[] = {Aegis_B_A_UAV_02_backpack_lxWS};
	};
	
   lxws_droneWeapon[] = {"LMG_Mk200_Black_F","200Rnd_65x39_cased_box",""};	// weapon, prim mag, sec mag
};
class Aegis_B_A_UAV_02_wdl_lxWS: UAV_02_Base_lxWS
{
	scope = public;
	scopeCurator = public;
   	//editorPreview = "\lxws\editorpreviews_f_lxws\Data\CfgVehicles\B_UAV_02_lxWS.jpg";
	displayName = $STR_LXWS_UAV_NATO;
	side = TWest;
	faction = BLU_A_wdl_F;
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
		dissasembleTo[] = {Aegis_B_A_UAV_02_backpack_lxWS};
	};
	
   lxws_droneWeapon[] = {"LMG_Mk200_Black_F","200Rnd_65x39_cased_box",""};	// weapon, prim mag, sec mag
};
class Aegis_B_A_UAV_02_backpack_lxWS: Weapon_Bag_Base
{
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_A_CfgVehicles_B_A_UAV_02_lxWS_backpack_F0;
	model = "\lxWS\air_f_lxWS\Bags\UAV_backpack_lxWS.p3d";
	editorCategory = EdCat_Equipment;
	editorSubcategory = EdSubcat_Backpacks;
	faction = BLU_A_F;
	picture = "\lxWS\air_f_lxWS\Data\UI\icon_B_UAV_02_backpack_lxWS_CA.paa";
	hiddenSelectionsTextures[] = {"\lxWS\air_f_lxWS\Bags\Data\UAV_backpack_NATO_CO.paa"};
	maximumLoad = 0;
	mass = 400;
	class assembleInfo: assembleInfo
	{
		base = "";
		displayName = $STR_LXWS_UAV_NATO;
		assembleTo = Aegis_B_A_UAV_02_lxWS;
	};
};

/*======================================
	Sneaky Bustards
======================================*/
class Aegis_B_CTRG_UAV_02_lxWS: UAV_02_Base_lxWS
{
	scope = public;
	scopeCurator = public;
   //	editorPreview = "\lxws\editorpreviews_f_lxws\Data\CfgVehicles\B_UAV_02_lxWS.jpg";
	displayName = $STR_LXWS_UAV_NATO;
	side = TWest;
	faction = BLU_CTRG_F;
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
		dissasembleTo[] = {Aegis_B_CTRG_UAV_02_backpack_lxWS};
	};
	
   lxws_droneWeapon[] = {"srifle_DMR_02_camo_F","10rnd_338_mag",""};	// weapon, prim mag, sec mag
};
class Aegis_B_CTRG_UAV_02_tna_lxWS: UAV_02_Base_lxWS
{
	scope = public;
	scopeCurator = public;
   	//editorPreview = "\lxws\editorpreviews_f_lxws\Data\CfgVehicles\B_UAV_02_lxWS.jpg";
	displayName = $STR_LXWS_UAV_NATO;
	side = TWest;
	faction = BLU_CTRG_tna_F;
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
		dissasembleTo[] = {Aegis_B_CTRG_UAV_02_backpack_lxWS};
	};
	
   lxws_droneWeapon[] = {"srifle_DMR_02_tna_F","10rnd_338_mag",""};	// weapon, prim mag, sec mag
};
class Aegis_B_CTRG_UAV_02_backpack_lxWS: Weapon_Bag_Base
{
	scope = public;
	scopeCurator = public;
	displayName = "UAV Bag (AP-5) [CTRG]";
	model = "\lxWS\air_f_lxWS\Bags\UAV_backpack_lxWS.p3d";
	editorCategory = EdCat_Equipment;
	editorSubcategory = EdSubcat_Backpacks;
	faction = BLU_CTRG_F;
	picture = "\lxWS\air_f_lxWS\Data\UI\icon_B_UAV_02_backpack_lxWS_CA.paa";
	hiddenSelectionsTextures[] = {"\lxWS\air_f_lxWS\Bags\Data\UAV_backpack_NATO_CO.paa"};
	maximumLoad = 0;
	mass = 400;
	class assembleInfo: assembleInfo
	{
		base = "";
		displayName = $STR_LXWS_UAV_NATO;
		assembleTo = Aegis_B_CTRG_UAV_02_lxWS;
	};
};