// Arma 3 Opposing Forces
class Opf_O_S_Man_Base_F: O_G_Soldier_F
{
    scope = private;
    scopeCurator = private;
	faction = Opf_OPF_S_F;
	genericNames = RussianMen;
	identityTypes[] = 
	{
		LanguageRUS_F,
		Head_Russian,
		Head_Euro,
		Head_Enoch,
		G_RUS_default
	};
};
class Opf_O_S_Soldier_Base_F: Opf_O_S_Man_Base_F
{
	uniformClass = Opf_U_O_S_Gorka_01_summer_F;
	class EventHandlers: EventHandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
	};
};
class Opf_O_S_Soldier_1_F: Opf_O_S_Soldier_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\O_E_Soldier_1_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_CfgVehicles_B_Soldier_F0;
	linkedItems[] = 
	{
		V_SmershVest_01_olive_F,
		H_PASGT_basic_olive_F,
		DefaultManGuerillaLinkedItems
	};
	respawnLinkedItems[] = 
	{
		V_SmershVest_01_olive_F,
		H_PASGT_basic_olive_F,
		DefaultManGuerillaLinkedItems
	};
	weapons[] = 
	{
		arifle_AKM_F,
        hgun_Pistol_01_F,
		DefaultManWeapons
	};
	respawnWeapons[] = 
	{
		arifle_AKM_F,
        hgun_Pistol_01_F,
		DefaultManWeapons
	};
	magazines[] = 
	{
        mag_6(30Rnd_762x39_Mag_Green_F),
        mag_2(10Rnd_9x21_Mag),
        mag_2(HandGrenade_Guer)
	};
	respawnMagazines[] = 
	{
        mag_6(30Rnd_762x39_Mag_Green_F),
        mag_2(10Rnd_9x21_Mag),
        mag_2(HandGrenade_Guer)
	};
	role = Rifleman;
    headgearList[] =
    {
        H_Bandanna_gry,1,
        H_Bandanna_khk_hs,1,
        H_Bandanna_khk,1,
        H_Bandanna_camo,1,
        H_Bandanna_camo_hs,1,
        H_Watchcap_blk,1,
        H_Watchcap_blk_hs,1,
        H_Watchcap_camo,1,
        H_Watchcap_camo_hs,1,
        H_Watchcap_cbr,1,
        H_Watchcap_cbr_hs,1,
        H_Watchcap_khk,1,
        H_Watchcap_khk_hs,1,
        H_Booniehat_khk_hs,1,
        H_Booniehat_khk,1,
        H_Booniehat_oli,1,
        H_Booniehat_tan,1,
        H_Booniehat_oli_hs,1,
        H_Booniehat_mgrn,1,
        H_Booniehat_mgrn_hs,1,
        H_Booniehat_taiga,1,
        H_Booniehat_taiga_hs,1,
        H_MilCap_grn,2,
        H_MilCap_taiga,2,
        H_Headset_light,1,
        H_PASGT_basic_black_F,1,
        H_PASGT_basic_green_F,1,
        H_PASGT_basic_olive_F,1,
        H_FakeHeadgear_F,2
    };
};
class Opf_O_S_Soldier_2_F: Opf_O_S_Soldier_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\O_E_Soldier_2_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_CfgVehicles_HighCommand_ModuleDescription_AnyBrain_0;
	uniformClass = Opf_U_O_S_Uniform_01_taiga_F;
	linkedItems[] = 
	{
		V_SmershVest_01_radio_olive_F,
		H_MilCap_grn,
		DefaultManGuerillaLinkedItems
	};
	respawnLinkedItems[] = 
	{
		V_SmershVest_01_radio_olive_F,
		H_MilCap_grn,
		DefaultManGuerillaLinkedItems
	};
	weapons[] = 
	{
		arifle_AK12_545_F,
		hgun_Pistol_01_F,
		DefaultManWeapons,
		Binocular
	};
	respawnWeapons[] = 
	{
		arifle_AK12_545_F,
		hgun_Pistol_01_F,
		DefaultManWeapons,
		Binocular
	};
	magazines[] = 
	{
        mag_6(30Rnd_545x39_AK12_Mag_F),
        mag_2(10Rnd_9x21_Mag),
        mag_2(HandGrenade_Guer)
	};
	respawnMagazines[] = 
	{
        mag_6(30Rnd_545x39_AK12_Mag_F),
        mag_2(10Rnd_9x21_Mag),
        mag_2(HandGrenade_Guer)
	};
	cost = 250000;
	camouflage = 1.6;
	icon = iconManLeader;
	role = Rifleman;
    headgearList[] =
    {
        H_Bandanna_gry,1,
        H_Bandanna_khk_hs,1,
        H_Bandanna_khk,1,
        H_Bandanna_camo,1,
        H_Bandanna_camo_hs,1,
        H_Watchcap_blk,1,
        H_Watchcap_blk_hs,1,
        H_Watchcap_camo,1,
        H_Watchcap_camo_hs,1,
        H_Watchcap_cbr,1,
        H_Watchcap_cbr_hs,1,
        H_Watchcap_khk,1,
        H_Watchcap_khk_hs,1,
        H_Booniehat_khk_hs,1,
        H_Booniehat_khk,1,
        H_Booniehat_oli,1,
        H_Booniehat_tan,1,
        H_Booniehat_oli_hs,1,
        H_Booniehat_mgrn,1,
        H_Booniehat_mgrn_hs,1,
        H_Booniehat_taiga,1,
        H_Booniehat_taiga_hs,1,
        H_MilCap_grn,2,
        H_MilCap_taiga,2,
        H_Headset_light,1,
        H_PASGT_basic_black_F,1,
        H_PASGT_basic_green_F,1,
        H_PASGT_basic_olive_F,1,
        H_FakeHeadgear_F,2
    };
};
class Opf_O_S_Soldier_3_F: Opf_O_S_Soldier_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
	class SpeechVariants
	{
		class Default
		{
			speechSingular[] = {veh_infantry_medic_s};
			speechPlural[] = {veh_infantry_medic_p};
		};
	};
	textSingular = $STR_A3_nameSound_veh_infantry_medic_s;
	textPlural = $STR_A3_nameSound_veh_infantry_medic_p;
	nameSound = veh_infantry_medic_s;
	editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\O_E_Soldier_3_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_Medic;
	uniformClass = Opf_U_O_S_Uniform_01_sweater_F;
	backpack = B_FieldPack_green_OSMedic_F;
	linkedItems[] = 
	{
		V_TacVest_grn,
		H_Bandanna_khk,
		DefaultManGuerillaLinkedItems
	};
	respawnLinkedItems[] = 
	{
		V_TacVest_grn,
		H_Bandanna_khk,
		DefaultManGuerillaLinkedItems
	};
	weapons[] = 
	{
		arifle_AKM_F,
		DefaultManWeapons
	};
	respawnWeapons[] = 
	{
		arifle_AKM_F,
		DefaultManWeapons
	};
	magazines[] = {mag_6(30Rnd_762x39_Mag_Green_F)};
	respawnMagazines[] = {mag_6(30Rnd_762x39_Mag_Green_F)};
	attendant = true;
	icon = iconManMedic;
	picture = pictureHeal;
	role = CombatLifeSaver;
	camouflage = 1.6;
    headgearList[] =
    {
        H_Bandanna_gry,1,
        H_Bandanna_khk_hs,1,
        H_Bandanna_khk,1,
        H_Bandanna_camo,1,
        H_Bandanna_camo_hs,1,
        H_Watchcap_blk,1,
        H_Watchcap_blk_hs,1,
        H_Watchcap_camo,1,
        H_Watchcap_camo_hs,1,
        H_Watchcap_cbr,1,
        H_Watchcap_cbr_hs,1,
        H_Watchcap_khk,1,
        H_Watchcap_khk_hs,1,
        H_Booniehat_khk_hs,1,
        H_Booniehat_khk,1,
        H_Booniehat_oli,1,
        H_Booniehat_tan,1,
        H_Booniehat_oli_hs,1,
        H_Booniehat_mgrn,1,
        H_Booniehat_mgrn_hs,1,
        H_Booniehat_taiga,1,
        H_Booniehat_taiga_hs,1,
        H_MilCap_grn,2,
        H_MilCap_taiga,2,
        H_Headset_light,1,
        H_PASGT_basic_black_F,1,
        H_PASGT_basic_green_F,1,
        H_PASGT_basic_olive_F,1,
        H_FakeHeadgear_F,2
    };
};
class Opf_O_S_Soldier_4_F: Opf_O_S_Soldier_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
	class SpeechVariants
	{
		class Default
		{
			speechSingular[] = {veh_infantry_MG_s};
			speechPlural[] = {veh_infantry_MG_p};
		};
	};
	textSingular = $STR_A3_nameSound_veh_infantry_MG_s;
	textPlural = $STR_A3_nameSound_veh_infantry_MG_p;
	nameSound = veh_infantry_MG_s;
	editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\O_E_Soldier_4_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_B_Soldier_AR_F0;
	uniformClass = Opf_U_O_S_Gorka_01_autumn_F;
	linkedItems[] = 
	{
		H_PASGT_basic_olive_F,
		V_SmershVest_01_olive_F,
		DefaultManGuerillaLinkedItems
	};
	respawnLinkedItems[] = 
	{
		H_PASGT_basic_olive_F,
		V_SmershVest_01_olive_F,
		DefaultManGuerillaLinkedItems
	};
	weapons[] = 
	{
		arifle_RPK_F,
        hgun_Pistol_01_F,
		DefaultManWeapons
	};
	respawnWeapons[] = 
	{
		arifle_RPK_F,
        hgun_Pistol_01_F,
		DefaultManWeapons
	};
	magazines[] = 
	{
        mag_8(75Rnd_762x39_Mag_F),
        mag_2(10Rnd_9x21_Mag)
	};
	respawnMagazines[] = 
	{
        mag_8(75Rnd_762x39_Mag_F),
        mag_2(10Rnd_9x21_Mag)
	};
	cost = 220000;
	icon = iconManMG;
	role = MachineGunner;
    headgearList[] =
    {
        H_Bandanna_gry,1,
        H_Bandanna_khk_hs,1,
        H_Bandanna_khk,1,
        H_Bandanna_camo,1,
        H_Bandanna_camo_hs,1,
        H_Watchcap_blk,1,
        H_Watchcap_blk_hs,1,
        H_Watchcap_camo,1,
        H_Watchcap_camo_hs,1,
        H_Watchcap_cbr,1,
        H_Watchcap_cbr_hs,1,
        H_Watchcap_khk,1,
        H_Watchcap_khk_hs,1,
        H_Booniehat_khk_hs,1,
        H_Booniehat_khk,1,
        H_Booniehat_oli,1,
        H_Booniehat_tan,1,
        H_Booniehat_oli_hs,1,
        H_Booniehat_mgrn,1,
        H_Booniehat_mgrn_hs,1,
        H_Booniehat_taiga,1,
        H_Booniehat_taiga_hs,1,
        H_MilCap_grn,2,
        H_MilCap_taiga,2,
        H_Headset_light,1,
        H_PASGT_basic_black_F,1,
        H_PASGT_basic_green_F,1,
        H_PASGT_basic_olive_F,1,
        H_FakeHeadgear_F,2
    };
};
class Opf_O_S_Soldier_5_F: Opf_O_S_Soldier_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
	class SpeechVariants
	{
		class Default
		{
			speechSingular[] = {veh_infantry_AT_s};
			speechPlural[] = {veh_infantry_AT_p};
		};
	};
	textSingular = $STR_A3_nameSound_veh_infantry_AT_s;
	textPlural = $STR_A3_nameSound_veh_infantry_AT_p;
	nameSound = veh_infantry_AT_s;
	editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\O_E_Soldier_5_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_B_soldier_LAT_F0;
	uniformClass = U_O_R_Gorka_01_F;
	backpack = B_FieldPack_green_OSRPG_AT_F;
	linkedItems[] = 
	{
		G_Balaclava_blk,
		V_TacChestRig_oli_F,
		DefaultManGuerillaLinkedItems
	};
	respawnLinkedItems[] = 
	{
		G_Balaclava_blk,
		V_TacChestRig_oli_F,
		DefaultManGuerillaLinkedItems
	};
	weapons[] = 
	{
		arifle_AKS_F,
        launch_RPG32_camo_F,
		DefaultManWeapons
	};
	respawnWeapons[] = 
	{
		arifle_AKS_F,
        launch_RPG32_camo_F,
		DefaultManWeapons
	};
	magazines[] = 
	{
        mag_6(30Rnd_545x39_Mag_Green_F),
        RPG32_F
	};
	respawnMagazines[] = 
	{
        mag_6(30Rnd_545x39_Mag_Green_F),
        RPG32_F
	};
	cost = 130000;
	threat[] = {0.8,0.8,0.3};
	icon = iconManAT;
	role = MissileSpecialist;
    headgearList[] =
    {
        H_Bandanna_gry,1,
        H_Bandanna_khk_hs,1,
        H_Bandanna_khk,1,
        H_Bandanna_camo,1,
        H_Bandanna_camo_hs,1,
        H_Watchcap_blk,1,
        H_Watchcap_blk_hs,1,
        H_Watchcap_camo,1,
        H_Watchcap_camo_hs,1,
        H_Watchcap_cbr,1,
        H_Watchcap_cbr_hs,1,
        H_Watchcap_khk,1,
        H_Watchcap_khk_hs,1,
        H_Booniehat_khk_hs,1,
        H_Booniehat_khk,1,
        H_Booniehat_oli,1,
        H_Booniehat_tan,1,
        H_Booniehat_oli_hs,1,
        H_Booniehat_mgrn,1,
        H_Booniehat_mgrn_hs,1,
        H_Booniehat_taiga,1,
        H_Booniehat_taiga_hs,1,
        H_MilCap_grn,2,
        H_MilCap_taiga,2,
        H_Headset_light,1,
        H_PASGT_basic_black_F,1,
        H_PASGT_basic_green_F,1,
        H_PASGT_basic_olive_F,1,
        H_FakeHeadgear_F,2
    };
};
class Opf_O_S_Soldier_6_F: Opf_O_S_Soldier_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\O_E_Soldier_6_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_B_Soldier_GL_F0;
	uniformClass = Opf_U_O_S_Uniform_01_taiga_F;
	linkedItems[] = 
	{
		G_Balaclava_blk,
		V_TacChestRig_grn_F,
		DefaultManGuerillaLinkedItems
	};
	respawnLinkedItems[] = 
	{
		G_Balaclava_blk,
		V_TacChestRig_grn_F,
		DefaultManGuerillaLinkedItems
	};
	weapons[] = 
	{
		arifle_AK12_GL_545_F,
		DefaultManWeapons
	};
	respawnWeapons[] = 
	{
		arifle_AK12_GL_545_F,
		DefaultManWeapons
	};
	magazines[] = 
	{
        mag_6(30Rnd_545x39_AK12_Mag_F),
        mag_5(1Rnd_HE_Grenade_shell)
	};
	respawnMagazines[] = 
	{
        mag_6(30Rnd_545x39_AK12_Mag_F),
        mag_5(1Rnd_HE_Grenade_shell)
	};
	cost = 200000;
	role = Grenadier;
    headgearList[] =
    {
        H_Bandanna_gry,1,
        H_Bandanna_khk_hs,1,
        H_Bandanna_khk,1,
        H_Bandanna_camo,1,
        H_Bandanna_camo_hs,1,
        H_Watchcap_blk,1,
        H_Watchcap_blk_hs,1,
        H_Watchcap_camo,1,
        H_Watchcap_camo_hs,1,
        H_Watchcap_cbr,1,
        H_Watchcap_cbr_hs,1,
        H_Watchcap_khk,1,
        H_Watchcap_khk_hs,1,
        H_Booniehat_khk_hs,1,
        H_Booniehat_khk,1,
        H_Booniehat_oli,1,
        H_Booniehat_tan,1,
        H_Booniehat_oli_hs,1,
        H_Booniehat_mgrn,1,
        H_Booniehat_mgrn_hs,1,
        H_Booniehat_taiga,1,
        H_Booniehat_taiga_hs,1,
        H_MilCap_grn,2,
        H_MilCap_taiga,2,
        H_Headset_light,1,
        H_PASGT_basic_black_F,1,
        H_PASGT_basic_green_F,1,
        H_PASGT_basic_olive_F,1,
        H_FakeHeadgear_F,2
    };
};
class Opf_O_S_Soldier_7_F: Opf_O_S_Soldier_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
    class SpeechVariants
    {
        class Default
        {
            speechSingular[] = {veh_infantry_sniper_s};
            speechPlural[] = {veh_infantry_sniper_p};
        };
    };
    textSingular = $STR_A3_nameSound_veh_infantry_sniper_s;
    textPlural = $STR_A3_nameSound_veh_infantry_sniper_p;
    nameSound = veh_infantry_sniper_s;
	editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\O_E_Soldier_7_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_B_Sniper_F0;
	uniformClass = Opf_U_O_S_Gorka_01_autumn_F;
	linkedItems[] = 
	{
		H_Booniehat_mgrn,
		V_TacChestRig_oli_F,
		DefaultManGuerillaLinkedItems
	};
	respawnLinkedItems[] = 
	{
		H_Booniehat_mgrn,
		V_TacChestRig_oli_F,
		DefaultManGuerillaLinkedItems
	};
	weapons[] =
	{
		srifle_DMR_01_black_KHS_BI_F,
		DefaultManWeapons,
		Binocular
	};
	respawnWeapons[] =
	{
		srifle_DMR_01_black_KHS_BI_F,
		DefaultManWeapons,
		Binocular
	};
	magazines[] = {mag_6(10Rnd_762x54_Mag)};
	respawnMagazines[] = {mag_6(10Rnd_762x54_Mag)};
	cost = 250000;
	role = Marksman;
    headgearList[] =
    {
        H_Bandanna_gry,1,
        H_Bandanna_khk_hs,1,
        H_Bandanna_khk,1,
        H_Bandanna_camo,1,
        H_Bandanna_camo_hs,1,
        H_Watchcap_blk,1,
        H_Watchcap_blk_hs,1,
        H_Watchcap_camo,1,
        H_Watchcap_camo_hs,1,
        H_Watchcap_cbr,1,
        H_Watchcap_cbr_hs,1,
        H_Watchcap_khk,1,
        H_Watchcap_khk_hs,1,
        H_Booniehat_khk_hs,1,
        H_Booniehat_khk,1,
        H_Booniehat_oli,1,
        H_Booniehat_tan,1,
        H_Booniehat_oli_hs,1,
        H_Booniehat_mgrn,1,
        H_Booniehat_mgrn_hs,1,
        H_Booniehat_taiga,1,
        H_Booniehat_taiga_hs,1,
        H_MilCap_grn,2,
        H_MilCap_taiga,2,
        H_Headset_light,1,
        H_PASGT_basic_black_F,1,
        H_PASGT_basic_green_F,1,
        H_PASGT_basic_olive_F,1,
        H_FakeHeadgear_F,2
    };
};
class Opf_O_S_Soldier_8_F: Opf_O_S_Soldier_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\O_E_Soldier_8_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_CfgRoles_Sapper0;
	uniformClass = U_C_E_LooterJacket_01_F;
	backpack = B_FieldPack_green_OSExp_F;
	linkedItems[] = 
	{
		V_ChestrigF_rgr,
		H_Watchcap_camo,
		DefaultManGuerillaLinkedItems
	};
	respawnLinkedItems[] = 
	{
		V_ChestrigF_rgr,
		H_Watchcap_camo,
		DefaultManGuerillaLinkedItems
	};
	weapons[] = 
	{
		sgun_Mp153_classic_F,
		DefaultManWeapons
	};
	respawnWeapons[] = 
	{
		sgun_Mp153_classic_F,
		DefaultManWeapons
	};
	magazines[] =
    {
        mag_3(4Rnd_12Gauge_Pellets),
        mag_3(4Rnd_12Gauge_Slug)
    };
	respawnMagazines[] =
    {
        mag_3(4Rnd_12Gauge_Pellets),
        mag_3(4Rnd_12Gauge_Slug)
    };
	canDeactivateMines = true;
	detectSkill = 38;
	icon = iconManExplosive;
	picture = pictureExplosive;
	role = Sapper;
	camouflage = 1.6;
    headgearList[] =
    {
        H_Bandanna_gry,1,
        H_Bandanna_khk_hs,1,
        H_Bandanna_khk,1,
        H_Bandanna_camo,1,
        H_Bandanna_camo_hs,1,
        H_Watchcap_blk,1,
        H_Watchcap_blk_hs,1,
        H_Watchcap_camo,1,
        H_Watchcap_camo_hs,1,
        H_Watchcap_cbr,1,
        H_Watchcap_cbr_hs,1,
        H_Watchcap_khk,1,
        H_Watchcap_khk_hs,1,
        H_Booniehat_khk_hs,1,
        H_Booniehat_khk,1,
        H_Booniehat_oli,1,
        H_Booniehat_tan,1,
        H_Booniehat_oli_hs,1,
        H_Booniehat_mgrn,1,
        H_Booniehat_mgrn_hs,1,
        H_Booniehat_taiga,1,
        H_Booniehat_taiga_hs,1,
        H_MilCap_grn,2,
        H_MilCap_taiga,2,
        H_Headset_light,1,
        H_PASGT_basic_black_F,1,
        H_PASGT_basic_green_F,1,
        H_PASGT_basic_olive_F,1,
        H_FakeHeadgear_F,2
    };
};
class Opf_O_S_Soldier_9_F: Opf_O_S_Soldier_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\O_E_Soldier_9_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = "Partisan";
	uniformClass = Opf_U_O_S_Uniform_01_sweater_F;
	linkedItems[] = 
	{
		V_TacChestRig_oli_F,
		H_Beret_blk,
		DefaultManGuerillaLinkedItems
	};
	respawnLinkedItems[] = 
	{
		V_TacChestRig_oli_F,
		H_Beret_blk,
		DefaultManGuerillaLinkedItems
	};
	weapons[] = 
	{
		Opf_arifle_SKS_F,
		DefaultManWeapons
	};
	respawnWeapons[] = 
	{
		Opf_arifle_SKS_F,
		DefaultManWeapons
	};
	magazines[] = 
	{
        mag_6(30Rnd_762x39_Mag_Green_F),
        mag_2(HandGrenade_Guer)
	};
	respawnMagazines[] = 
	{
        mag_6(30Rnd_762x39_Mag_Green_F),
        mag_2(HandGrenade_Guer)
	};
	role = Rifleman;
    headgearList[] =
    {
        H_Bandanna_gry,1,
        H_Bandanna_khk_hs,1,
        H_Bandanna_khk,1,
        H_Bandanna_camo,1,
        H_Bandanna_camo_hs,1,
        H_Watchcap_blk,1,
        H_Watchcap_blk_hs,1,
        H_Watchcap_camo,1,
        H_Watchcap_camo_hs,1,
        H_Watchcap_cbr,1,
        H_Watchcap_cbr_hs,1,
        H_Watchcap_khk,1,
        H_Watchcap_khk_hs,1,
        H_Booniehat_khk_hs,1,
        H_Booniehat_khk,1,
        H_Booniehat_oli,1,
        H_Booniehat_tan,1,
        H_Booniehat_oli_hs,1,
        H_Booniehat_mgrn,1,
        H_Booniehat_mgrn_hs,1,
        H_Booniehat_taiga,1,
        H_Booniehat_taiga_hs,1,
        H_MilCap_grn,2,
        H_MilCap_taiga,2,
        H_Headset_light,1,
        H_PASGT_basic_black_F,1,
        H_PASGT_basic_green_F,1,
        H_PASGT_basic_olive_F,1,
        H_FakeHeadgear_F,2
    };
};
class Opf_O_S_Crew_F: Opf_O_S_Soldier_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\O_E_Crew_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_B_crew_F0;
	uniformClass = Opf_U_O_S_Uniform_01_sweater_F;
	linkedItems[] = 
	{
		V_BandollierB_taiga_F,
		H_Tank_black_F,
		DefaultManGuerillaLinkedItems
	};
	respawnLinkedItems[] = 
	{
		V_BandollierB_taiga_F,
		H_Tank_black_F,
		DefaultManGuerillaLinkedItems
	};
	weapons[] = 
	{
		arifle_AKS_F,
		DefaultManWeapons
	};
	respawnWeapons[] = 
	{
		arifle_AKS_F,
		DefaultManWeapons
	};
	magazines[] = 
	{
        mag_4(30Rnd_545x39_Mag_Green_F),
        mag_2(HandGrenade_Guer)
	};
	respawnMagazines[] = 
	{
        mag_4(30Rnd_545x39_Mag_Green_F),
        mag_2(HandGrenade_Guer)
	};
	camouflage = 1.6;
    cost = 93000;
	role = Crewman;
};
class Opf_O_S_Soldier_universal_F: Opf_O_S_Soldier_1_F
{
	author = $STR_A3_A_AveryTheKitty;
	class SpeechVariants
	{
		class Default
		{
			speechSingular[] = {veh_infantry_medic_s};
			speechPlural[] = {veh_infantry_medic_p};
		};
	};
	textSingular = $STR_A3_nameSound_veh_infantry_medic_s;
	textPlural = $STR_A3_nameSound_veh_infantry_medic_p;
	nameSound = veh_infantry_medic_s;
	scope = protected;
    scopeCurator = private;
	displayName = $STR_A3_CfgVehicles_b_soldier_universal_f_displayName;
	attendant = true;
	engineer = true;
	canDeactivateMines = true;
	role = Rifleman;
};
class Opf_O_S_Soldier_Base_unarmed_F: Opf_O_S_Soldier_1_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\O_E_Soldier_Base_unarmed_F.jpg";
	displayName = $STR_A3_CfgVehicles_b_soldier_unarmed_f_displayName;
	weapons[] = {DefaultManWeapons};
	respawnWeapons[] = {DefaultManWeapons};
	magazines[] = {};
	respawnMagazines[] = {};
	linkedItems[] = 
	{
		V_SmershVest_01_olive_F,
		H_PASGT_basic_olive_F,
		DefaultManGuerillaLinkedItems
	};
	respawnLinkedItems[] = 
	{
		V_SmershVest_01_olive_F,
		H_PASGT_basic_olive_F,
		DefaultManGuerillaLinkedItems
	};
	role = Unarmed;
	threat[] = {0.1,0.1,0.1};
};