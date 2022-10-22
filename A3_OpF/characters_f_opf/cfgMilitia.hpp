// Arma 3 Opposing Forces
class Opf_I_P_Man_Base_F: I_G_Soldier_F
{
    scope = private;
    scopeCurator = private;
	faction = Opf_IND_P_F;
	genericNames = NATOMen;
	identityTypes[] = 
	{
		LanguageENG_F,
		Head_NATO,
		G_NATO_casual
	};
};
class Opf_I_P_Soldier_Base_F: Opf_I_P_Man_Base_F
{
	uniformClass = PLACEHOLDER_UNIFORM;
	class EventHandlers: EventHandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
	};
};
class Opf_I_P_Soldier_1_F: Opf_I_P_Soldier_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\I_M_Soldier_1_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_CfgVehicles_B_Soldier_F0;
	linkedItems[] = 
	{
		V_Pocketed_wdl_F,
		H_Cap_usblack,
		DefaultManGuerillaLinkedItems
	};
	respawnLinkedItems[] = 
	{
		V_Pocketed_wdl_F,
		H_Cap_usblack,
		DefaultManGuerillaLinkedItems
	};
	weapons[] = 
	{
		arifle_MX_Black_F,
        hgun_C1911_F,
		DefaultManWeapons
	};
	respawnWeapons[] = 
	{
		arifle_MX_Black_F,
        hgun_C1911_F,
		DefaultManWeapons
	};
	magazines[] = 
	{
        mag_6(30Rnd_65x39_caseless_black_mag),
        mag_2(9Rnd_45ACP_Mag),
        mag_2(HandGrenade)
	};
	respawnMagazines[] = 
	{
        mag_6(30Rnd_65x39_caseless_black_mag),
        mag_2(9Rnd_45ACP_Mag),
        mag_2(HandGrenade)
	};
	role = Rifleman;
    headgearList[] = 
    {
        H_Beret_02,1,
        H_Beret_grn_SF,1,
        H_Cap_red,1,
        H_Cap_oli,1,
        H_Cap_tan,1,
        H_Cap_blk,1,
        H_Cap_blk_CMMG,1,
        H_Cap_tan_specops_US,1,
        H_Cap_grn,1,
        H_Cap_oli_hs,1,
        H_Cap_usblack,1,
        H_Cap_surfer,1,
        H_Cap_brn_SERO,1,
        H_Cap_tan_specops_US_hs,1,
        H_Cap_usblack_hs,1,
        H_Cap_tna_F,1,
        H_Cap_tna_hs_F,1,
        H_Cap_redburger,1,
        H_Booniehat_khk_hs,1,
        H_Booniehat_khk,1,
        H_Booniehat_oli,1,
        H_Booniehat_tan,1,
        H_Booniehat_oli_hs,1,
        H_Booniehat_mgrn,1,
        H_Booniehat_mgrn_hs,1,
        H_Booniehat_mcamo,1,
        H_Booniehat_mcamo_hs,1,
        H_Booniehat_tna_F,1,
        H_Booniehat_tna_hs_F,1,
        H_Booniehat_wdl,1,
        H_Booniehat_wdl_hs,1,
		H_Cap_headphones,1,
		H_Cap_headphones_gry,1,
		H_Cap_headphones_tan,1,
		H_Cap_headphones_blk,1,
        H_Headset_light,1,
        H_Hat_Tinfoil_F,1,
        H_FakeHeadgear_F,2
    };
};
class Opf_I_P_Soldier_2_F: Opf_I_P_Soldier_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\I_M_Soldier_2_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_CfgVehicles_HighCommand_ModuleDescription_AnyBrain_0;
	linkedItems[] = 
	{
		V_PlateCarrier1_blk,
		H_Cap_headphones,
		DefaultManGuerillaLinkedItems
	};
	respawnLinkedItems[] = 
	{
		V_PlateCarrier1_blk,
		H_Cap_headphones,
		DefaultManGuerillaLinkedItems
	};
	weapons[] = 
	{
		arifle_MX_Black_F,
		hgun_Pistol_heavy_01_black_F,
		DefaultManWeapons,
		Binocular
	};
	respawnWeapons[] = 
	{
		arifle_MX_Black_F,
		hgun_Pistol_heavy_01_black_F,
		DefaultManWeapons,
		Binocular
	};
	magazines[] = 
	{
        mag_6(30Rnd_65x39_caseless_black_mag),
        mag_2(11Rnd_45ACP_Mag),
        mag_2(HandGrenade)
	};
	respawnMagazines[] = 
	{
        mag_6(30Rnd_65x39_caseless_black_mag),
        mag_2(11Rnd_45ACP_Mag),
        mag_2(HandGrenade)
	};
	cost = 250000;
	camouflage = 1.6;
	icon = iconManLeader;
	role = Rifleman;
    headgearList[] = 
    {
        H_Cap_red,1,
        H_Cap_oli,1,
        H_Cap_tan,1,
        H_Cap_blk,1,
        H_Cap_blk_CMMG,1,
        H_Cap_tan_specops_US,1,
        H_Cap_grn,1,
        H_Cap_oli_hs,1,
        H_Cap_usblack,1,
        H_Cap_surfer,1,
        H_Cap_brn_SERO,1,
        H_Cap_tan_specops_US_hs,1,
        H_Cap_usblack_hs,1,
        H_Cap_tna_F,1,
        H_Cap_tna_hs_F,1,
        H_Cap_redburger,1,
        H_Booniehat_khk_hs,1,
        H_Booniehat_khk,1,
        H_Booniehat_oli,1,
        H_Booniehat_tan,1,
        H_Booniehat_oli_hs,1,
        H_Booniehat_mgrn,1,
        H_Booniehat_mgrn_hs,1,
        H_Booniehat_mcamo,1,
        H_Booniehat_mcamo_hs,1,
        H_Booniehat_tna_F,1,
        H_Booniehat_tna_hs_F,1,
        H_Booniehat_wdl,1,
        H_Booniehat_wdl_hs,1,
		H_Cap_headphones,1,
		H_Cap_headphones_gry,1,
		H_Cap_headphones_tan,1,
		H_Cap_headphones_blk,1,
        H_Headset_light,1,
        H_Hat_Tinfoil_F,1,
        H_FakeHeadgear_F,2
    };
};
class Opf_I_P_Soldier_3_F: Opf_I_P_Soldier_Base_F
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
	editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\I_M_Soldier_3_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_Medic;
	backpack = B_AssaultPack_mcamo_IMMedic_F;
	linkedItems[] = 
	{
		V_TacVest_camo,
		H_Cap_brn_SERO,
        G_Cigarette,
		DefaultManGuerillaLinkedItems
	};
	respawnLinkedItems[] = 
	{
		V_TacVest_camo,
		H_Cap_brn_SERO,
        G_Cigarette,
		DefaultManGuerillaLinkedItems
	};
	weapons[] = 
	{
		arifle_RFB_F,
		DefaultManWeapons
	};
	respawnWeapons[] = 
	{
		arifle_RFB_F,
		DefaultManWeapons
	};
	magazines[] = {mag_6(20Rnd_762x51_Mag)};
	respawnMagazines[] = {mag_6(20Rnd_762x51_Mag)};
	attendant = true;
	icon = iconManMedic;
	picture = pictureHeal;
	role = CombatLifeSaver;
	camouflage = 1.6;
    headgearList[] = 
    {
        H_Cap_red,1,
        H_Cap_oli,1,
        H_Cap_tan,1,
        H_Cap_blk,1,
        H_Cap_blk_CMMG,1,
        H_Cap_tan_specops_US,1,
        H_Cap_grn,1,
        H_Cap_oli_hs,1,
        H_Cap_usblack,1,
        H_Cap_surfer,1,
        H_Cap_brn_SERO,1,
        H_Cap_tan_specops_US_hs,1,
        H_Cap_usblack_hs,1,
        H_Cap_tna_F,1,
        H_Cap_tna_hs_F,1,
        H_Cap_redburger,1,
        H_Booniehat_khk_hs,1,
        H_Booniehat_khk,1,
        H_Booniehat_oli,1,
        H_Booniehat_tan,1,
        H_Booniehat_oli_hs,1,
        H_Booniehat_mgrn,1,
        H_Booniehat_mgrn_hs,1,
        H_Booniehat_mcamo,1,
        H_Booniehat_mcamo_hs,1,
        H_Booniehat_tna_F,1,
        H_Booniehat_tna_hs_F,1,
        H_Booniehat_wdl,1,
        H_Booniehat_wdl_hs,1,
		H_Cap_headphones,1,
		H_Cap_headphones_gry,1,
		H_Cap_headphones_tan,1,
		H_Cap_headphones_blk,1,
        H_Headset_light,1,
        H_Hat_Tinfoil_F,1,
        H_FakeHeadgear_F,2
    };
};
class Opf_I_P_Soldier_4_F: Opf_I_P_Soldier_Base_F
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
	editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\I_M_Soldier_4_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_B_Soldier_AR_F0;
	linkedItems[] = 
	{
		V_TacVest_camo,
		H_Cap_blk_CMMG,
		DefaultManGuerillaLinkedItems
	};
	respawnLinkedItems[] = 
	{
		V_TacVest_camo,
		H_Cap_blk_CMMG,
		DefaultManGuerillaLinkedItems
	};
	weapons[] = 
	{
		arifle_SPAR_02_blk_F,
        hgun_C1911_F,
		DefaultManWeapons
	};
	respawnWeapons[] = 
	{
		arifle_SPAR_02_blk_F,
        hgun_C1911_F,
		DefaultManWeapons
	};
	magazines[] = 
	{
        mag_6(150Rnd_556x45_Drum_Mag_F),
        mag_2(9Rnd_45ACP_Mag)
	};
	respawnMagazines[] = 
	{
        mag_6(150Rnd_556x45_Drum_Mag_F),
        mag_2(9Rnd_45ACP_Mag)
	};
	cost = 220000;
	icon = iconManMG;
	role = MachineGunner;
    headgearList[] = 
    {
        H_Cap_red,1,
        H_Cap_oli,1,
        H_Cap_tan,1,
        H_Cap_blk,1,
        H_Cap_blk_CMMG,1,
        H_Cap_tan_specops_US,1,
        H_Cap_grn,1,
        H_Cap_oli_hs,1,
        H_Cap_usblack,1,
        H_Cap_surfer,1,
        H_Cap_brn_SERO,1,
        H_Cap_tan_specops_US_hs,1,
        H_Cap_usblack_hs,1,
        H_Cap_tna_F,1,
        H_Cap_tna_hs_F,1,
        H_Cap_redburger,1,
        H_Booniehat_khk_hs,1,
        H_Booniehat_khk,1,
        H_Booniehat_oli,1,
        H_Booniehat_tan,1,
        H_Booniehat_oli_hs,1,
        H_Booniehat_mgrn,1,
        H_Booniehat_mgrn_hs,1,
        H_Booniehat_mcamo,1,
        H_Booniehat_mcamo_hs,1,
        H_Booniehat_tna_F,1,
        H_Booniehat_tna_hs_F,1,
        H_Booniehat_wdl,1,
        H_Booniehat_wdl_hs,1,
		H_Cap_headphones,1,
		H_Cap_headphones_gry,1,
		H_Cap_headphones_tan,1,
		H_Cap_headphones_blk,1,
        H_Headset_light,1,
        H_Hat_Tinfoil_F,1,
        H_FakeHeadgear_F,2
    };
};
class Opf_I_P_Soldier_5_F: Opf_I_P_Soldier_Base_F
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
	editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\I_M_Soldier_5_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_B_soldier_LAT_F0;
	backpack = B_TacticalPack_rgr_IMLAT_F;
	linkedItems[] = 
	{
		V_TacVest_blk,
		H_Cap_headphones_gry,
        DefaultManGuerillaLinkedItems
	};
	respawnLinkedItems[] = 
	{
		V_TacVest_blk,
		H_Cap_headphones_gry,
        DefaultManGuerillaLinkedItems
	};
	weapons[] = 
	{
		SMG_01_black_mzls_F,
        launch_RPG7_black_F,
		DefaultManWeapons
	};
	respawnWeapons[] = 
	{
		SMG_01_black_mzls_F,
        launch_RPG7_black_F,
		DefaultManWeapons
	};
	magazines[] = 
	{
        mag_6(30Rnd_45ACP_Mag_SMG_01),
        RPG7_F
	};
	respawnMagazines[] = 
	{
        mag_6(30Rnd_45ACP_Mag_SMG_01),
        RPG7_F
	};
	cost = 130000;
	threat[] = {0.8,0.8,0.3};
	icon = iconManAT;
	role = MissileSpecialist;
    headgearList[] = 
    {
        H_Cap_red,1,
        H_Cap_oli,1,
        H_Cap_tan,1,
        H_Cap_blk,1,
        H_Cap_blk_CMMG,1,
        H_Cap_tan_specops_US,1,
        H_Cap_grn,1,
        H_Cap_oli_hs,1,
        H_Cap_usblack,1,
        H_Cap_surfer,1,
        H_Cap_brn_SERO,1,
        H_Cap_tan_specops_US_hs,1,
        H_Cap_usblack_hs,1,
        H_Cap_tna_F,1,
        H_Cap_tna_hs_F,1,
        H_Cap_redburger,1,
        H_Booniehat_khk_hs,1,
        H_Booniehat_khk,1,
        H_Booniehat_oli,1,
        H_Booniehat_tan,1,
        H_Booniehat_oli_hs,1,
        H_Booniehat_mgrn,1,
        H_Booniehat_mgrn_hs,1,
        H_Booniehat_mcamo,1,
        H_Booniehat_mcamo_hs,1,
        H_Booniehat_tna_F,1,
        H_Booniehat_tna_hs_F,1,
        H_Booniehat_wdl,1,
        H_Booniehat_wdl_hs,1,
		H_Cap_headphones,1,
		H_Cap_headphones_gry,1,
		H_Cap_headphones_tan,1,
		H_Cap_headphones_blk,1,
        H_Headset_light,1,
        H_Hat_Tinfoil_F,1,
        H_FakeHeadgear_F,2
    };
};
class Opf_I_P_Soldier_6_F: Opf_I_P_Soldier_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\I_M_Soldier_6_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_B_Soldier_GL_F0;
	linkedItems[] = 
	{
		V_Pocketed_hunter_F,
        H_Booniehat_khk,
		DefaultManGuerillaLinkedItems
	};
	respawnLinkedItems[] = 
	{
		V_Pocketed_hunter_F,
        H_Booniehat_khk,
		DefaultManGuerillaLinkedItems
	};
	weapons[] = 
	{
		GL_M32_F,
        hgun_C1911_F,
		DefaultManWeapons
	};
	respawnWeapons[] = 
	{
		GL_M32_F,
        hgun_C1911_F,
		DefaultManWeapons
	};
	magazines[] = 
	{
        mag_4(6Rnd_Pellets_Grenade_shell),
        mag_2(9Rnd_45ACP_Mag)
	};
	respawnMagazines[] = 
	{
        mag_4(6Rnd_Pellets_Grenade_shell),
        mag_2(9Rnd_45ACP_Mag)
	};
	cost = 200000;
	role = Grenadier;
    headgearList[] = 
    {
        H_Cap_red,1,
        H_Cap_oli,1,
        H_Cap_tan,1,
        H_Cap_blk,1,
        H_Cap_blk_CMMG,1,
        H_Cap_tan_specops_US,1,
        H_Cap_grn,1,
        H_Cap_oli_hs,1,
        H_Cap_usblack,1,
        H_Cap_surfer,1,
        H_Cap_brn_SERO,1,
        H_Cap_tan_specops_US_hs,1,
        H_Cap_usblack_hs,1,
        H_Cap_tna_F,1,
        H_Cap_tna_hs_F,1,
        H_Cap_redburger,1,
        H_Booniehat_khk_hs,1,
        H_Booniehat_khk,1,
        H_Booniehat_oli,1,
        H_Booniehat_tan,1,
        H_Booniehat_oli_hs,1,
        H_Booniehat_mgrn,1,
        H_Booniehat_mgrn_hs,1,
        H_Booniehat_mcamo,1,
        H_Booniehat_mcamo_hs,1,
        H_Booniehat_tna_F,1,
        H_Booniehat_tna_hs_F,1,
        H_Booniehat_wdl,1,
        H_Booniehat_wdl_hs,1,
		H_Cap_headphones,1,
		H_Cap_headphones_gry,1,
		H_Cap_headphones_tan,1,
		H_Cap_headphones_blk,1,
        H_Headset_light,1,
        H_Hat_Tinfoil_F,1,
        H_FakeHeadgear_F,2
    };
};
class Opf_I_P_Soldier_7_F: Opf_I_P_Soldier_Base_F
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
	editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\I_M_Soldier_7_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_B_Sniper_F0;
	linkedItems[] = 
	{
        V_Pocketed_hunter_F,
		H_Booniehat_tan,
		DefaultManGuerillaLinkedItems
	};
	respawnLinkedItems[] = 
	{
        V_Pocketed_hunter_F,
		H_Booniehat_tan,
		DefaultManGuerillaLinkedItems
	};
	weapons[] =
	{
		srifle_DMR_03_woodland_AMS_BI_F,
		DefaultManWeapons,
		Binocular
	};
	respawnWeapons[] =
	{
		srifle_DMR_03_woodland_AMS_BI_F,
		DefaultManWeapons,
		Binocular
	};
	magazines[] = {mag_6(20Rnd_762x51_Mag)};
	respawnMagazines[] = {mag_6(20Rnd_762x51_Mag)};
	cost = 250000;
	role = Marksman;
    headgearList[] = 
    {
        H_Cap_red,1,
        H_Cap_oli,1,
        H_Cap_tan,1,
        H_Cap_blk,1,
        H_Cap_blk_CMMG,1,
        H_Cap_tan_specops_US,1,
        H_Cap_grn,1,
        H_Cap_oli_hs,1,
        H_Cap_usblack,1,
        H_Cap_surfer,1,
        H_Cap_brn_SERO,1,
        H_Cap_tan_specops_US_hs,1,
        H_Cap_usblack_hs,1,
        H_Cap_tna_F,1,
        H_Cap_tna_hs_F,1,
        H_Cap_redburger,1,
        H_Booniehat_khk_hs,1,
        H_Booniehat_khk,1,
        H_Booniehat_oli,1,
        H_Booniehat_tan,1,
        H_Booniehat_oli_hs,1,
        H_Booniehat_mgrn,1,
        H_Booniehat_mgrn_hs,1,
        H_Booniehat_mcamo,1,
        H_Booniehat_mcamo_hs,1,
        H_Booniehat_tna_F,1,
        H_Booniehat_tna_hs_F,1,
        H_Booniehat_wdl,1,
        H_Booniehat_wdl_hs,1,
		H_Cap_headphones,1,
		H_Cap_headphones_gry,1,
		H_Cap_headphones_tan,1,
		H_Cap_headphones_blk,1,
        H_Headset_light,1,
        H_Hat_Tinfoil_F,1,
        H_FakeHeadgear_F,2
    };
};
class Opf_I_P_Soldier_8_F: Opf_I_P_Soldier_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\I_M_Soldier_8_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_CfgRoles_Sapper0;
	backpack = B_Kitbag_wdl_IMExp_F;
	linkedItems[] = 
	{
		V_TacVest_camo,
		H_Cap_tan_specops_US,
		DefaultManGuerillaLinkedItems
	};
	respawnLinkedItems[] = 
	{
		V_TacVest_camo,
		H_Cap_tan_specops_US,
		DefaultManGuerillaLinkedItems
	};
	weapons[] = 
	{
		arifle_SPAR_01_blk_F,
		DefaultManWeapons
	};
	respawnWeapons[] = 
	{
		arifle_SPAR_01_blk_F,
		DefaultManWeapons
	};
	magazines[] = {mag_6(30Rnd_556x45_Stanag)};
	respawnMagazines[] = {mag_6(30Rnd_556x45_Stanag)};
	canDeactivateMines = true;
	detectSkill = 38;
	icon = iconManExplosive;
	picture = pictureExplosive;
	role = Sapper;
	camouflage = 1.6;
    headgearList[] = 
    {
        H_Cap_red,1,
        H_Cap_oli,1,
        H_Cap_tan,1,
        H_Cap_blk,1,
        H_Cap_blk_CMMG,1,
        H_Cap_tan_specops_US,1,
        H_Cap_grn,1,
        H_Cap_oli_hs,1,
        H_Cap_usblack,1,
        H_Cap_surfer,1,
        H_Cap_brn_SERO,1,
        H_Cap_tan_specops_US_hs,1,
        H_Cap_usblack_hs,1,
        H_Cap_tna_F,1,
        H_Cap_tna_hs_F,1,
        H_Cap_redburger,1,
        H_Booniehat_khk_hs,1,
        H_Booniehat_khk,1,
        H_Booniehat_oli,1,
        H_Booniehat_tan,1,
        H_Booniehat_oli_hs,1,
        H_Booniehat_mgrn,1,
        H_Booniehat_mgrn_hs,1,
        H_Booniehat_mcamo,1,
        H_Booniehat_mcamo_hs,1,
        H_Booniehat_tna_F,1,
        H_Booniehat_tna_hs_F,1,
        H_Booniehat_wdl,1,
        H_Booniehat_wdl_hs,1,
		H_Cap_headphones,1,
		H_Cap_headphones_gry,1,
		H_Cap_headphones_tan,1,
		H_Cap_headphones_blk,1,
        H_Headset_light,1,
        H_Hat_Tinfoil_F,1,
        H_FakeHeadgear_F,2
    };
};
class Opf_I_P_Soldier_universal_F: Opf_I_P_Soldier_1_F
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
	displayName = $STR_A3_CfgVehicles_b_soldier_universal_f_displayName;
	attendant = true;
	engineer = true;
	canDeactivateMines = true;
	role = Rifleman;
};
class Opf_I_P_Soldier_Base_unarmed_F: Opf_I_P_Soldier_1_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\I_M_Soldier_Base_unarmed_F.jpg";
	displayName = $STR_A3_CfgVehicles_b_soldier_unarmed_f_displayName;
	weapons[] = {DefaultManWeapons};
	respawnWeapons[] = {DefaultManWeapons};
	magazines[] = {};
	respawnMagazines[] = {};
	linkedItems[] = 
	{
		V_Pocketed_wdl_F,
		H_Cap_usblack,
		DefaultManGuerillaLinkedItems
	};
	respawnLinkedItems[] = 
	{
		V_Pocketed_wdl_F,
		H_Cap_usblack,
		DefaultManGuerillaLinkedItems
	};
	role = Unarmed;
	threat[] = {0.1,0.1,0.1};
};