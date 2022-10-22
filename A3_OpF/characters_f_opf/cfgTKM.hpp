// Arma 3 Opposing Forces
class Opf_I_I_Man_Base_F: I_G_Soldier_F
{
    scope = private;
    scopeCurator = private;
	faction = Opf_IND_I_F;
	genericNames = TakistaniMen;
	identityTypes[] = 
	{
		LanguagePER_F,
		Head_TK,
		G_GUERIL_default
	};
};
class Opf_I_I_Soldier_Base_F: Opf_I_I_Man_Base_F
{
	uniformClass = Opf_U_I_I_Uniform_01_tshirt_black_F;
	class EventHandlers: EventHandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
	};
};
class Opf_I_I_Soldier_1_F: Opf_I_I_Soldier_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\I_T_Soldier_1_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = "Militiaman (Rifle)";
	linkedItems[] = 
	{
		V_Pocketed_wdl_F,
		DefaultManGuerillaLinkedItems
	};
	respawnLinkedItems[] = 
	{
		V_Pocketed_wdl_F,
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
	magazines[] = 
	{
        mag_6(30Rnd_762x39_Mag_F),
        mag_2(HandGrenade_Guer)
	};
	respawnMagazines[] = 
	{
        mag_6(30Rnd_762x39_Mag_F),
        mag_2(HandGrenade_Guer)
	};
	role = Rifleman;
    headgearList[] =
	{
		"",2,
        H_Headset_light,1,
        H_ShemagOpen_khk,2,
        H_ShemagOpen_khk_hs,2,
        H_FakeHeadgear_F,1
	};
};
class Opf_I_I_Soldier_2_F: Opf_I_I_Soldier_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\I_T_Soldier_2_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = "Militia Leader (Rifle)";
	uniformClass = Opf_U_I_I_Uniform_01_urb_F;
	linkedItems[] = 
	{
		V_TacVest_gry,
		DefaultManGuerillaLinkedItems
	};
	respawnLinkedItems[] = 
	{
		V_TacVest_gry,
		DefaultManGuerillaLinkedItems
	};
	weapons[] = 
	{
		arifle_Katiba_F,
		hgun_Pistol_01_F,
		DefaultManWeapons,
		Binocular
	};
	respawnWeapons[] = 
	{
		arifle_Katiba_F,
		hgun_Pistol_01_F,
		DefaultManWeapons,
		Binocular
	};
	magazines[] = 
	{
        mag_6(30Rnd_65x39_caseless_green),
        mag_2(10Rnd_9x21_Mag),
        mag_2(HandGrenade_Guer)
	};
	respawnMagazines[] = 
	{
        mag_6(30Rnd_65x39_caseless_green),
        mag_2(10Rnd_9x21_Mag),
        mag_2(HandGrenade_Guer)
	};
	cost = 250000;
	camouflage = 1.6;
	icon = iconManLeader;
	role = Rifleman;
    headgearList[] =
	{
		"",2,
		H_Beret_blk,1,
        H_Headset_light,1,
        H_ShemagOpen_khk,2,
        H_ShemagOpen_khk_hs,2,
        H_FakeHeadgear_F,1
	};
};
class Opf_I_I_Soldier_3_F: Opf_I_I_Soldier_Base_F
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
	editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\I_T_Soldier_3_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = "Bonesetter (Medikit)";
	uniformClass = U_C_E_LooterJacket_01_F;
	backpack = B_FieldPack_cbr_Medic_F;
	linkedItems[] = {DefaultManGuerillaLinkedItems};
	respawnLinkedItems[] = {DefaultManGuerillaLinkedItems};
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
	magazines[] = {mag_3(30Rnd_762x39_Mag_F)};
	respawnMagazines[] = {mag_3(30Rnd_762x39_Mag_F)};
	attendant = true;
	icon = iconManMedic;
	picture = pictureHeal;
	role = CombatLifeSaver;
	camouflage = 1.6;
    headgearList[] =
	{
		"",2,
        H_Headset_light,1,
        H_Shemag_blk,2,
        H_Shemag_blk_hs,2,
        H_FakeHeadgear_F,1
	};
};
class Opf_I_I_Soldier_4_F: Opf_I_I_Soldier_Base_F
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
	editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\I_T_Soldier_4_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = "Militiaman (Machine Gun)";
	uniformClass = U_I_C_Soldier_Bandit_3_F;
	backpack = B_Kitbag_tan_AR_F;
	linkedItems[] =
	{
		V_Pocketed_wdl_F,
		DefaultManGuerillaLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_Pocketed_wdl_F,
		DefaultManGuerillaLinkedItems
	};
	weapons[] = 
	{
		arifle_RPK_F,
		DefaultManWeapons
	};
	respawnWeapons[] = 
	{
		arifle_RPK_F,
		DefaultManWeapons
	};
	magazines[] = {mag_3(75Rnd_762x39_Mag_F)};
	respawnMagazines[] = {mag_3(75Rnd_762x39_Mag_F)};
	cost = 220000;
	icon = iconManMG;
	role = MachineGunner;
    headgearList[] =
	{
		"",2,
        H_Headset_light,1,
        H_Shemag_red,2,
        H_Shemag_red_hs,2,
        H_FakeHeadgear_F,1
	};
};
class Opf_I_I_Soldier_5_F: Opf_I_I_Soldier_Base_F
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
	editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\I_T_Soldier_5_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = "Militiaman (Launcher)";
	uniformClass = Opf_U_IG_Guerilla3_3_F;
	backpack = B_FieldPack_cbr_RPG_F;
	linkedItems[] =
	{
		V_BandollierB_blk,
		DefaultManGuerillaLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_BandollierB_blk,
		DefaultManGuerillaLinkedItems
	};
	weapons[] = 
	{
		arifle_AKS_F,
        launch_RPG7_F,
		DefaultManWeapons
	};
	respawnWeapons[] = 
	{
		arifle_AKS_F,
        launch_RPG7_F,
		DefaultManWeapons
	};
	magazines[] = 
	{
        mag_6(30Rnd_545x39_Mag_F),
        RPG7_F
	};
	respawnMagazines[] = 
	{
        mag_6(30Rnd_545x39_Mag_F),
        RPG7_F
	};
	cost = 130000;
	threat[] = {0.8,0.8,0.3};
	icon = iconManAT;
	role = MissileSpecialist;
    headgearList[] =
	{
		"",2,
        H_Headset_light,1,
        H_ShemagOpen_khk,2,
        H_ShemagOpen_khk_hs,2,
        H_FakeHeadgear_F,1
	};
};
class Opf_I_I_Soldier_6_F: Opf_I_I_Soldier_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\I_T_Soldier_6_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = "Militiaman (UGL)";
	uniformClass = Opf_U_I_I_Uniform_01_hex_F;
	linkedItems[] = 
	{
		V_ChestrigF_khk,
		DefaultManGuerillaLinkedItems
	};
	respawnLinkedItems[] = 
	{
		V_ChestrigF_khk,
		DefaultManGuerillaLinkedItems
	};
	weapons[] = 
	{
		arifle_Katiba_GL_F,
		DefaultManWeapons
	};
	respawnWeapons[] = 
	{
		arifle_Katiba_GL_F,
		DefaultManWeapons
	};
	magazines[] = 
	{
        mag_6(30Rnd_65x39_caseless_green),
        mag_5(1Rnd_HE_Grenade_shell)
	};
	respawnMagazines[] = 
	{
        mag_6(30Rnd_65x39_caseless_green),
        mag_5(1Rnd_HE_Grenade_shell)
	};
	cost = 200000;
	role = Grenadier;
    headgearList[] =
	{
		"",2,
        H_Headset_light,1,
        H_ShemagOpen_khk,2,
        H_ShemagOpen_khk_hs,2,
        H_FakeHeadgear_F,1
	};
};
class Opf_I_I_Soldier_7_F: Opf_I_I_Soldier_Base_F
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
	editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\I_T_Soldier_7_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = "Watcher (Rifle)";
	uniformClass = U_IG_Guerilla3_1;
	linkedItems[] = 
	{
		V_BandollierB_khk,
		DefaultManGuerillaLinkedItems
	};
	respawnLinkedItems[] = 
	{
		V_BandollierB_khk,
		DefaultManGuerillaLinkedItems
	};
	weapons[] =
	{
		srifle_DMR_06_hunter_khs_F,
		DefaultManWeapons,
		Binocular
	};
	respawnWeapons[] =
	{
		srifle_DMR_06_hunter_khs_F,
		DefaultManWeapons,
		Binocular
	};
	magazines[] = {mag_6(10Rnd_Mk14_762x51_Mag)};
	respawnMagazines[] = {mag_6(10Rnd_Mk14_762x51_Mag)};
	cost = 250000;
	role = Marksman;
    headgearList[] =
	{
		"",2,
        H_Headset_light,1,
        H_Shemag_olive,2,
        H_Shemag_olive_hs,2,
        H_FakeHeadgear_F,1
	};
};
class Opf_I_I_Soldier_8_F: Opf_I_I_Soldier_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\I_T_Soldier_8_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = "Trapper (Explosives)";
	uniformClass = U_C_Mechanic_01_F;
	backpack = B_Kitbag_tan_exp_F;
	linkedItems[] =
	{
		V_TacChestRig_cbr_F,
		DefaultManGuerillaLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_TacChestRig_cbr_F,
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
	magazines[] = {mag_6(30Rnd_545x39_Mag_F)};
	respawnMagazines[] = {mag_6(30Rnd_545x39_Mag_F)};
	canDeactivateMines = true;
	detectSkill = 38;
	icon = iconManExplosive;
	picture = pictureExplosive;
	role = Sapper;
	camouflage = 1.6;
    headgearList[] =
	{
		"",2,
        H_Headset_light,1,
        H_FakeHeadgear_F,1
	};
};
class Opf_I_I_Soldier_9_F: Opf_I_I_Soldier_1_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\I_T_Soldier_9_F.jpg";
	identityTypes[] =
	{
        LanguagePER_F,
        Head_TK,
		G_IRAN_default
	};
	scope = public;
	scopeCurator = public;
	displayName = "Operative (Rifle)";
	uniformClass = U_C_E_LooterJacket_01_F;
	linkedItems[] =
	{
		V_ChestrigF_blk,
		G_AirPurifyingRespirator_02_sand_F,
        DefaultManGuerillaLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_ChestrigF_blk,
		G_AirPurifyingRespirator_02_sand_F,
        DefaultManGuerillaLinkedItems
	};
	weapons[] = 
	{
		arifle_Katiba_C_ACO_F,
        hgun_Rook40_snds_F,
		DefaultManWeapons,
        Binocular
	};
	respawnWeapons[] = 
	{
		arifle_Katiba_C_ACO_F,
        hgun_Rook40_snds_F,
		DefaultManWeapons,
        Binocular
	};
	magazines[] =
    {
        mag_6(30Rnd_65x39_caseless_green),
        mag_2(17Rnd_9x21_Mag),
        mag_2(MiniGrenade)
    };
	respawnMagazines[] =
    {
        mag_6(30Rnd_65x39_caseless_green),
        mag_2(17Rnd_9x21_Mag),
        mag_2(MiniGrenade)
    };
	cost = 200000;
	camouflage = 1.6;
	role = SpecialOperative;
    headgearList[] = {"",1};
};
class Opf_I_I_Soldier_universal_F: Opf_I_I_Soldier_1_F
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
class Opf_I_I_Soldier_Base_unarmed_F: Opf_I_I_Soldier_1_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\I_T_Soldier_Base_unarmed_F.jpg";
	displayName = $STR_A3_CfgVehicles_b_soldier_unarmed_f_displayName;
	weapons[] = {DefaultManWeapons};
	respawnWeapons[] = {DefaultManWeapons};
	magazines[] = {};
	respawnMagazines[] = {};
	linkedItems[] = 
	{
		V_Pocketed_wdl_F,
		DefaultManGuerillaLinkedItems
	};
	respawnLinkedItems[] = 
	{
		V_Pocketed_wdl_F,
		DefaultManGuerillaLinkedItems
	};
	role = Unarmed;
	threat[] = {0.1,0.1,0.1};
};
class Opf_I_I_Officer_F: Opf_I_I_Soldier_Base_F
{
	author = $STR_A3_A_Ravenholme;
	class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_officer_s"};
				speechPlural[] = {"veh_infantry_officer_p"};
			};
		};
	textSingular = "$STR_A3_nameSound_veh_infantry_officer_s";
	textPlural = "$STR_A3_nameSound_veh_infantry_officer_p";
	editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\Opf_I_I_Officer_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = "Warlord";
	icon = "iconManOfficer";
	role = "Rifleman";
	cost = 250000;
	camouflage = 1.6;
	uniformClass = Opf_U_O_S_Uniform_01_arid_F;
	linkedItems[] = 
	{
		H_Beret_brn,
		V_TacVest_khk,
		DefaultManGuerillaLinkedItems
	};
	respawnLinkedItems[] = 
	{
		H_Beret_brn,
		V_TacVest_khk,
		DefaultManGuerillaLinkedItems
	};
	weapons[] = 
	{
		arifle_CTAR_GL_hex_F,
		hgun_Pistol_heavy_02_Yorris_F,
		DefaultManWeapons
	};
	respawnWeapons[] = 
	{
		arifle_CTAR_GL_hex_F,
		hgun_Pistol_heavy_02_Yorris_F,
		DefaultManWeapons
	};
	magazines[] = 
	{
        mag_6(30Rnd_580x42_mag_f),
		mag_3(6Rnd_45ACP_Cylinder),
        mag_5(1Rnd_HE_Grenade_shell)
	};
	respawnMagazines[] = 
	{
        mag_6(30Rnd_580x42_mag_f),
		mag_3(6Rnd_45ACP_Cylinder),
        mag_5(1Rnd_HE_Grenade_shell)
	};
	headgearList[] = 
	{
		H_Beret_brn,1
	};
};