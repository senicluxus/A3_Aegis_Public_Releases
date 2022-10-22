// Arma 3
class I_G_Soldier_base_F: SoldierGB
{
	class EventHandlers;
};
class I_G_Soldier_F: I_G_Soldier_base_F{};
class O_G_Soldier_F: I_G_Soldier_F{};
// Arma 3 Opposing Forces
class Opf_O_P_soldier_base_F: O_G_Soldier_F
{
	scope = private;
	identityTypes[] =
	{
		LanguagePER_F,
		Head_TK,
		G_PARA_default
	};
	faction = Opf_OPF_P_F;
	genericNames = TakistaniMen;
	model = "\A3\Characters_F\OPFOR\O_Paramilitary.p3d";
	modelSides[] = {TFriendly};
	uniformClass = Opf_U_O_ParamilitaryBody;
    class Wounds
    {
        tex[] = {};
        mat[] =
        {
            "A3\Characters_F\Civil\Data\paramilitary_body.rvmat",
            "A3\Characters_F\Civil\Data\W1_paramilitary_body.rvmat",
            "A3\Characters_F\Civil\Data\W1_paramilitary_body.rvmat",
            "A3\Characters_F\Civil\Data\paramilitary_equip.rvmat",
            "A3\Characters_F\Civil\Data\W1_paramilitary_equip.rvmat",
            "A3\Characters_F\Civil\Data\W1_paramilitary_equip.rvmat",
			"A3\characters_f\Heads\Data\hl_white.rvmat",
			"A3\characters_f\Heads\Data\hl_white_injury.rvmat",
			"A3\characters_f\Heads\Data\hl_white_injury.rvmat",
			"A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat",
			"A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
			"A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
			"A3\Characters_F\Heads\Data\hl_white_02_bald_muscular.rvmat",
			"A3\Characters_F\Heads\Data\hl_white_02_bald_muscular_injury.rvmat",
			"A3\Characters_F\Heads\Data\hl_white_02_bald_muscular_injury.rvmat",
			"A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat",
			"A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",
			"A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",
			"A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat",
			"A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",
			"A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",
			"A3\Characters_F\Heads\Data\hl_white_old.rvmat",
			"A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",
			"A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",
			"A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat",
			"A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat",
			"A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat",
			"A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular.rvmat",
			"A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular_injury.rvmat",
			"A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular_injury.rvmat",
			"A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular.rvmat",
			"A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular_injury.rvmat",
			"A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular_injury.rvmat"
        };
    };
	class EventHandlers: EventHandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
	};
};
class Opf_O_P_soldier_1_F: Opf_O_P_soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\O_P_soldier_1_F.jpg";
	scope = public;
	displayName = $STR_A3_CfgVehicles_B_Soldier_F0;
	role = Rifleman;
	weapons[] = 
	{
		arifle_TRG21_black_FL_F,
		DefaultManWeapons
	};
	respawnWeapons[] = 
	{
		arifle_TRG21_black_FL_F,
		DefaultManWeapons
	};
	magazines[] = 
	{
        mag_6(30Rnd_556x45_Stanag_green),
        mag_2(HandGrenade_Guer)
	};
	respawnMagazines[] = 
	{
        mag_6(30Rnd_556x45_Stanag_green),
        mag_2(HandGrenade_Guer)
	};
	linkedItems[] = 
	{
		V_ChestrigF_rgr,
		H_ShemagOpen_khk,
		DefaultManGuerillaLinkedItems
	};
	respawnLinkedItems[] = 
	{
		V_ChestrigF_rgr,
		H_ShemagOpen_khk,
		DefaultManGuerillaLinkedItems
	};
    headgearList[] = 
    {
        H_Bandanna_gry,1,
        H_Bandanna_gry_hs,1,
        H_Bandanna_blu,1,
        H_Beret_gry,1,
        H_MilCap_gry,2,
        H_Headset_light,1,
        H_PASGT_basic_black_F,1,
        H_ShemagOpen_khk,2,
        H_ShemagOpen_khk_hs,2,
        H_Shemag_blk,2,
        H_Shemag_blk_hs,2,
        H_FakeHeadgear_Para_F,2
    };
};
class Opf_O_P_soldier_GL_F: Opf_O_P_soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\O_P_soldier_GL_F.jpg";
	scope = public;
	displayName = $STR_B_Soldier_GL_F0;
	weapons[] = 
	{
		arifle_TRG21_GL_black_FL_F,
		DefaultManWeapons
	};
	respawnWeapons[] = 
	{
		arifle_TRG21_GL_black_FL_F,
		DefaultManWeapons
	};
	magazines[] = 
	{
        mag_6(30Rnd_556x45_Stanag_green),
        mag_5(1Rnd_HE_Grenade_shell)
	};
	respawnMagazines[] = 
	{
        mag_6(30Rnd_556x45_Stanag_green),
        mag_5(1Rnd_HE_Grenade_shell)
	};
	cost = 200000;
	role = Grenadier;
	linkedItems[] = 
	{
		V_HarnessOGL_blk,
		H_ShemagOpen_khk_hs,
		DefaultManGuerillaLinkedItems
	};
	respawnLinkedItems[] = 
	{
		V_HarnessOGL_blk,
		H_ShemagOpen_khk_hs,
		DefaultManGuerillaLinkedItems
	};
    headgearList[] = 
    {
        H_Bandanna_gry,1,
        H_Bandanna_gry_hs,1,
        H_Bandanna_blu,1,
        H_Beret_gry,1,
        H_MilCap_gry,2,
        H_Headset_light,1,
        H_PASGT_basic_black_F,1,
        H_ShemagOpen_khk,2,
        H_ShemagOpen_khk_hs,2,
        H_Shemag_blk,2,
        H_Shemag_blk_hs,2,
        H_FakeHeadgear_Para_F,2
    };
};
class Opf_O_P_soldier_AR_F: Opf_O_P_soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\O_P_soldier_AR_F.jpg";
	scope = public;
	displayName = $STR_B_soldier_AR_F0;
	weapons[] = 
	{
		LMG_Zafir_FL_F,
		DefaultManWeapons
	};
	respawnWeapons[] = 
	{
		LMG_Zafir_FL_F,
		DefaultManWeapons
	};
	magazines[] = 
	{
        mag_6(150Rnd_762x54_Box),
        mag_2(HandGrenade_Guer)
	};
	respawnMagazines[] = 
	{
        mag_6(150Rnd_762x54_Box),
        mag_2(HandGrenade_Guer)
	};
	cost = 220000;
	icon = iconManMG;
	role = MachineGunner;
	linkedItems[] = 
	{
		V_HarnessO_blk,
		H_PASGT_basic_black_F,
		DefaultManGuerillaLinkedItems
	};
	respawnLinkedItems[] = 
	{
		V_HarnessO_blk,
		H_PASGT_basic_black_F,
		DefaultManGuerillaLinkedItems
	};
    headgearList[] = 
    {
        H_Bandanna_gry,1,
        H_Bandanna_gry_hs,1,
        H_Bandanna_blu,1,
        H_Beret_gry,1,
        H_MilCap_gry,2,
        H_Headset_light,1,
        H_PASGT_basic_black_F,1,
        H_ShemagOpen_khk,2,
        H_ShemagOpen_khk_hs,2,
        H_Shemag_blk,2,
        H_Shemag_blk_hs,2,
        H_FakeHeadgear_Para_F,2
    };
};
class Opf_O_P_soldier_TL_F: Opf_O_P_soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\O_P_soldier_TL_F.jpg";
	scope = public;
	displayName = $STR_B_Soldier_TL_F0;
	weapons[] = 
	{
		arifle_Katiba_FL_F,
		hgun_Rook40_F,
		DefaultManWeapons,
		Binocular
	};
	respawnWeapons[] = 
	{
		arifle_Katiba_FL_F,
		hgun_Rook40_F,
		DefaultManWeapons,
		Binocular
	};
	magazines[] = 
	{
        mag_6(30Rnd_65x39_caseless_green),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_Guer)
	};
	respawnMagazines[] = 
	{
        mag_6(30Rnd_65x39_caseless_green),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_Guer)
	};
	cost = 250000;
	camouflage = 1.6;
	icon = iconManLeader;
	role = Rifleman;
	linkedItems[] = 
	{
		V_TacVest_gry,
		H_Beret_gry,
		DefaultManGuerillaLinkedItems
	};
	respawnLinkedItems[] = 
	{
		V_TacVest_gry,
		H_Beret_gry,
		DefaultManGuerillaLinkedItems
	};
    headgearList[] = {H_Beret_gry,1};
};
class Opf_O_P_soldier_M_F: Opf_O_P_soldier_base_F
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
	editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\O_P_soldier_M_F.jpg";
	scope = public;
	displayName = $STR_B_soldier_M_F0;
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
	linkedItems[] = 
	{
		V_ChestrigF_rgr,
		H_Bandanna_gry,
		DefaultManGuerillaLinkedItems
	};
	respawnLinkedItems[] = 
	{
		V_ChestrigF_rgr,
		H_Bandanna_gry,
		DefaultManGuerillaLinkedItems
	};
    headgearList[] = 
    {
        H_Bandanna_gry,1,
        H_Bandanna_gry_hs,1,
        H_Bandanna_blu,1,
        H_Beret_gry,1,
        H_MilCap_gry,2,
        H_Headset_light,1,
        H_PASGT_basic_black_F,1,
        H_ShemagOpen_khk,2,
        H_ShemagOpen_khk_hs,2,
        H_Shemag_blk,2,
        H_Shemag_blk_hs,2,
        H_FakeHeadgear_Para_F,2
    };
};
class Opf_O_P_soldier_LAT_F: Opf_O_P_soldier_base_F
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
	editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\O_P_soldier_LAT_F.jpg";
	scope = public;
	displayName = $STR_B_soldier_LAT_F0;
	backpack = B_TacticalPack_blk_LAT;
	weapons[] = 
	{
		arifle_TRG20_black_FL_F,
        launch_RPG32_black_F,
		DefaultManWeapons
	};
	respawnWeapons[] = 
	{
		arifle_TRG20_black_FL_F,
        launch_RPG32_black_F,
		DefaultManWeapons
	};
	magazines[] = 
	{
        mag_6(30Rnd_556x45_Stanag_green),
        RPG32_F
	};
	respawnMagazines[] = 
	{
        mag_6(30Rnd_556x45_Stanag_green),
        RPG32_F
	};
	cost = 130000;
	threat[] = {0.8,0.8,0.3};
	icon = iconManAT;
	role = MissileSpecialist;
	linkedItems[] = 
	{
		V_TacVest_gry,
		G_Balaclava_blk,
		DefaultManGuerillaLinkedItems
	};
	respawnLinkedItems[] = 
	{
		V_TacVest_gry,
		G_Balaclava_blk,
		DefaultManGuerillaLinkedItems
	};
	secondaryAmmoCoef = 0.5;
    headgearList[] = {"",1};
};
class Opf_O_P_medic_F: Opf_O_P_soldier_base_F
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
	editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\O_P_medic_F.jpg";
	scope = public;
	displayName = $STR_A3_Medic;
	attendant = true;
	weapons[] = 
	{
		arifle_Katiba_C_FL_F,
		DefaultManWeapons
	};
	respawnWeapons[] = 
	{
		arifle_Katiba_C_FL_F,
		DefaultManWeapons
	};
	magazines[] = {mag_6(30Rnd_65x39_caseless_green)};
	respawnMagazines[] = {mag_6(30Rnd_65x39_caseless_green)};
	camouflage = 1.6;
	icon = iconManMedic;
	role = CombatLifeSaver;
	backpack = B_TacticalPack_blk_Medic;
	linkedItems[] = 
	{
		V_TacVest_gry,
		H_MilCap_gry,
		DefaultManGuerillaLinkedItems
	};
	respawnLinkedItems[] = 
	{
		V_TacVest_gry,
		H_MilCap_gry,
		DefaultManGuerillaLinkedItems
	};
	picture = pictureHeal;
    headgearList[] = 
    {
        H_Bandanna_gry,1,
        H_Bandanna_gry_hs,1,
        H_Bandanna_blu,1,
        H_Beret_gry,1,
        H_MilCap_gry,2,
        H_Headset_light,1,
        H_PASGT_basic_black_F,1,
        H_ShemagOpen_khk,2,
        H_ShemagOpen_khk_hs,2,
        H_Shemag_blk,2,
        H_Shemag_blk_hs,2,
        H_FakeHeadgear_Para_F,2
    };
};
class Opf_O_P_soldier_exp_F: Opf_O_P_soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\O_P_soldier_exp_F.jpg";
	scope = public;
	displayName = $STR_A3_CfgRoles_Sapper0;
	cost = 93000;
	camouflage = 1.6;
	backpack = B_TacticalPack_blk_Exp;
	weapons[] = 
	{
		SMG_02_flash_F,
		DefaultManWeapons
	};
	respawnWeapons[] = 
	{
		SMG_02_flash_F,
		DefaultManWeapons
	};
	magazines[] = {mag_6(30Rnd_9x21_Mag_SMG_02_Tracer_Green)};
	respawnMagazines[] = {mag_6(30Rnd_9x21_Mag_SMG_02_Tracer_Green)};
	canDeactivateMines = true;
	detectSkill = 38;
	linkedItems[] = 
	{
		V_TacVest_gry,
		H_Bandanna_gry,
		DefaultManGuerillaLinkedItems
	};
	respawnLinkedItems[] = 
	{
		V_TacVest_gry,
		H_Bandanna_gry,
		DefaultManGuerillaLinkedItems
	};
	icon = iconManExplosive;
	role = Sapper;
	picture = pictureExplosive;
    headgearList[] = 
    {
        H_Bandanna_gry,1,
        H_Bandanna_gry_hs,1,
        H_Bandanna_blu,1,
        H_Beret_gry,1,
        H_MilCap_gry,2,
        H_Headset_light,1,
        H_PASGT_basic_black_F,1,
        H_ShemagOpen_khk,2,
        H_ShemagOpen_khk_hs,2,
        H_Shemag_blk,2,
        H_Shemag_blk_hs,2,
        H_FakeHeadgear_Para_F,2
    };
};
class Opf_O_P_Soldier_universal_F: Opf_O_P_soldier_1_F
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
class Opf_O_P_Soldier_unarmed_F: Opf_O_P_soldier_1_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\O_P_Soldier_unarmed_F.jpg";
	displayName = $STR_A3_CfgVehicles_b_soldier_unarmed_f_displayName;
	weapons[] = {DefaultManWeapons};
	respawnWeapons[] = {DefaultManWeapons};
	magazines[] = {};
	respawnMagazines[] = {};
	linkedItems[] = 
	{
		V_ChestrigF_rgr,
		H_ShemagOpen_khk,
		DefaultManGuerillaLinkedItems
	};
	respawnLinkedItems[] = 
	{
		V_ChestrigF_rgr,
		H_ShemagOpen_khk,
		DefaultManGuerillaLinkedItems
	};
	role = Unarmed;
	threat[] = {0.1,0.1,0.1};
};