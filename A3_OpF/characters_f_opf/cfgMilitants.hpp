// Arma 3 Opposing Forces
class O_Soldier_base_F;
class Opf_O_P_M_Man_Base_F: O_Soldier_base_F
{
    scope = private;
    scopeCurator = private;
	faction = Opf_OPF_P_F;
	genericNames = TakistaniMen;
	identityTypes[] = 
	{
		LanguagePER_F,
		Head_TK,
		G_PARA_default
	};
};
class Opf_O_P_M_Soldier_Base_F: Opf_O_P_M_Man_Base_F
{
	uniformClass = Opf_U_Uniform_01_PLR_F;
};
class Opf_O_P_M_Soldier_1_F: Opf_O_P_M_Soldier_Base_F
{
	author = $STR_A3_A_BranFlakes;
	editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\Opf_O_P_M_Soldier_1_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_CfgVehicles_B_Soldier_F0;
	linkedItems[] = 
	{
		Atlas_V_OCarrierRig_Lite_blk_F,
		H_PASGT_basic_black_F,
		Aegis_G_Armband_OPF_F,
		DefaultManGuerillaLinkedItems
	};
	respawnLinkedItems[] = 
	{
		Atlas_V_OCarrierRig_Lite_blk_F,
		H_PASGT_basic_black_F,
		Aegis_G_Armband_OPF_F,
		DefaultManGuerillaLinkedItems
	};
	weapons[] = 
	{
		Aegis_arifle_AKM74_F,
        hgun_Pistol_01_F,
		DefaultManWeapons
	};
	respawnWeapons[] = 
	{
		Aegis_arifle_AKM74_F,
        hgun_Pistol_01_F,
		DefaultManWeapons
	};
	magazines[] = 
	{
        mag_6(30Rnd_545x39_Black_Mag_Yellow_F),
        mag_2(10Rnd_9x21_Mag),
        mag_2(HandGrenade_Guer)
	};
	respawnMagazines[] = 
	{
        mag_6(30Rnd_545x39_Black_Mag_Yellow_F),
        mag_2(10Rnd_9x21_Mag),
        mag_2(HandGrenade_Guer)
	};
	role = Rifleman;
};
class Opf_O_P_M_Soldier_2_F: Opf_O_P_M_Soldier_Base_F
{
	author = $STR_A3_A_BranFlakes;
	editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\Opf_O_P_M_Soldier_2_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_CfgVehicles_HighCommand_ModuleDescription_AnyBrain_0;
	uniformClass = Opf_U_Uniform_02_PLR_F;
	linkedItems[] = 
	{
		Atlas_V_OCarrierRig_Lite_alt_blk_F,
		H_Beret_grn,
		G_Aviator,
		DefaultManGuerillaLinkedItems
	};
	respawnLinkedItems[] = 
	{
		Atlas_V_OCarrierRig_Lite_alt_blk_F,
		H_Beret_grn,
		G_Aviator,
		DefaultManGuerillaLinkedItems
	};
	weapons[] = 
	{
		arifle_AKSM_F,
		hgun_Mk26_F,
		DefaultManWeapons,
		Binocular
	};
	respawnWeapons[] = 
	{
		arifle_AKSM_F,
		hgun_Mk26_F,
		DefaultManWeapons,
		Binocular
	};
	magazines[] = 
	{
        mag_6(30Rnd_545x39_Black_Mag_F),
        mag_2(7Rnd_127x33_Mag),
        mag_2(HandGrenade_Guer)
	};
	respawnMagazines[] = 
	{
        mag_6(30Rnd_545x39_black_Mag_F),
        mag_2(7Rnd_127x33_Mag),
        mag_2(HandGrenade_Guer)
	};
	cost = 250000;
	camouflage = 1.6;
	icon = iconManLeader;
	role = Rifleman;
};
class Opf_O_P_M_Soldier_3_F: Opf_O_P_M_Soldier_Base_F
{
	author = $STR_A3_A_BranFlakes;
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
	editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\Opf_O_P_M_Soldier_3_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_Medic;
	uniformClass = Opf_U_Uniform_02_PLR_F;
	backpack = B_FieldPack_green_OSMedic_F;
	linkedItems[] = 
	{
		Atlas_V_OCarrierRig_Lite_blk_F,
		H_Shemag_olive,
		Aegis_G_Armband_OPF_F,
		DefaultManGuerillaLinkedItems
	};
	respawnLinkedItems[] = 
	{
		Atlas_V_OCarrierRig_Lite_blk_F,
		H_Shemag_olive,
		Aegis_G_Armband_OPF_F,
		DefaultManGuerillaLinkedItems
	};
	weapons[] = 
	{
		arifle_Katiba_F,
		DefaultManWeapons
	};
	respawnWeapons[] = 
	{
		arifle_Katiba_F,
		DefaultManWeapons
	};
	magazines[] = {mag_6(30Rnd_65x39_caseless_green)};
	respawnMagazines[] = {mag_6(30Rnd_65x39_caseless_green)};
	attendant = true;
	icon = iconManMedic;
	picture = pictureHeal;
	role = CombatLifeSaver;
	camouflage = 1.6;
};
class Opf_O_P_M_Soldier_4_F: Opf_O_P_M_Soldier_Base_F
{
	author = $STR_A3_A_BranFlakes;
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
	editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\Opf_O_P_M_Soldier_4_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_B_Soldier_AR_F0;
	linkedItems[] = 
	{
		H_turban_02_mask_black_lxws,
		Atlas_V_OCarrierRig_Lite_blk_F,
		Aegis_G_Armband_OPF_F,
		DefaultManGuerillaLinkedItems
	};
	respawnLinkedItems[] = 
	{
		H_turban_02_mask_black_lxws,
		Atlas_V_OCarrierRig_Lite_blk_F,
		Aegis_G_Armband_OPF_F,
		DefaultManGuerillaLinkedItems
	};
	weapons[] = 
	{
		Aegis_arifle_RPK74M_F,
        hgun_Pistol_01_F,
		DefaultManWeapons
	};
	respawnWeapons[] = 
	{
		Aegis_arifle_RPK74M_F,
        hgun_Pistol_01_F,
		DefaultManWeapons
	};
	magazines[] = 
	{
        mag_8(Aegis_45Rnd_545x39_Mag_Green_F),
        mag_2(10Rnd_9x21_Mag)
	};
	respawnMagazines[] = 
	{
        mag_8(Aegis_45Rnd_545x39_Mag_Green_F),
        mag_2(10Rnd_9x21_Mag)
	};
	cost = 220000;
	icon = iconManMG;
	role = MachineGunner;
};
class Opf_O_P_M_Soldier_5_F: Opf_O_P_M_Soldier_Base_F
{
	author = $STR_A3_A_BranFlakes;
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
	editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\Opf_O_P_M_Soldier_5_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_B_soldier_LAT_F0;
	uniformClass = Opf_U_Uniform_03_PLR_F;
	backpack = B_FieldPack_green_OSRPG_AT_F;
	linkedItems[] = 
	{
		H_ShemagOpen_khk,
		V_TacChestRig_oli_F,
		DefaultManGuerillaLinkedItems
	};
	respawnLinkedItems[] = 
	{
		H_ShemagOpen_khk,
		V_TacChestRig_oli_F,
		DefaultManGuerillaLinkedItems
	};
	weapons[] = 
	{
		Aegis_arifle_AKM74_F,
        Aegis_launch_RPG7M_F,
		DefaultManWeapons
	};
	respawnWeapons[] = 
	{
		Aegis_arifle_AKM74_F,
        Aegis_launch_RPG7M_F,
		DefaultManWeapons
	};
	magazines[] = 
	{
        mag_6(30Rnd_545x39_Black_Mag_Yellow_F),
        RPG7_F
	};
	respawnMagazines[] = 
	{
        mag_6(30Rnd_545x39_Black_Mag_Yellow_F),
        RPG7_F
	};
	cost = 130000;
	threat[] = {0.8,0.8,0.3};
	icon = iconManAT;
	role = MissileSpecialist;
};
class Opf_O_P_M_Soldier_6_F: Opf_O_P_M_Soldier_Base_F
{
	author = $STR_A3_A_BranFlakes;
	editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\Opf_O_P_M_Soldier_6_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_B_Soldier_GL_F0;
	uniformClass = Opf_U_Uniform_02_PLR_F;
	linkedItems[] = 
	{
		G_Balaclava_blk,
		H_PASGT_basic_black_F,
		Atlas_V_OCarrierRig_GL_blk_F,
		DefaultManGuerillaLinkedItems
	};
	respawnLinkedItems[] = 
	{
		G_Balaclava_blk,
		H_PASGT_basic_black_F,
		Atlas_V_OCarrierRig_GL_blk_F,
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
};
class Opf_O_P_M_Soldier_7_F: Opf_O_P_M_Soldier_Base_F
{
	author = $STR_A3_A_BranFlakes;
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
	editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\Opf_O_P_M_Soldier_7_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_B_Sniper_F0;
	uniformClass = Opf_U_Uniform_02_PLR_F;
	linkedItems[] = 
	{
		lxWS_H_turban_03_green,
		Aegis_G_Armband_OPF_F,
		Atlas_V_ORigLBV_blk_F,
		DefaultManGuerillaLinkedItems
	};
	respawnLinkedItems[] = 
	{
		lxWS_H_turban_03_green,
		Aegis_G_Armband_OPF_F,
		Atlas_V_ORigLBV_blk_F,
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
};
class Opf_O_P_M_Soldier_8_F: Opf_O_P_M_Soldier_Base_F
{
	author = $STR_A3_A_BranFlakes;
	editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\Opf_O_P_M_Soldier_8_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_CfgRoles_Sapper0;
	uniformClass = Opf_U_Uniform_03_PLR_F;
	backpack = B_FieldPack_green_OSExp_F;
	linkedItems[] = 
	{
		Atlas_V_OCarrierRig_Lite_blk_F,
		H_Watchcap_blk,
		G_Bandanna_oli,
		DefaultManGuerillaLinkedItems
	};
	respawnLinkedItems[] = 
	{
		Atlas_V_OCarrierRig_Lite_blk_F,
		H_Watchcap_blk,
		G_Bandanna_oli,
		DefaultManGuerillaLinkedItems
	};
	weapons[] = 
	{
		sgun_Mp153_black_F,
		DefaultManWeapons
	};
	respawnWeapons[] = 
	{
		sgun_Mp153_black_F,
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
};
class Opf_O_P_M_Crew_F: Opf_O_P_M_Soldier_Base_F
{
	author = $STR_A3_A_BranFlakes;
	editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\Opf_O_P_M_Crew_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_B_crew_F0;
	uniformClass = Opf_U_Uniform_03_PLR_F;
	linkedItems[] = 
	{
		Atlas_V_OCarrierRig_blk_F,
		H_Tank_black_F,
		DefaultManGuerillaLinkedItems
	};
	respawnLinkedItems[] = 
	{
		Atlas_V_OCarrierRig_blk_F,
		H_Tank_black_F,
		DefaultManGuerillaLinkedItems
	};
	weapons[] = 
	{
		arifle_AKSM_alt_F,
		DefaultManWeapons
	};
	respawnWeapons[] = 
	{
		arifle_AKSM_alt_F,
		DefaultManWeapons
	};
	magazines[] = 
	{
        mag_4(30Rnd_545x39_Black_Mag_F),
        mag_2(HandGrenade_Guer)
	};
	respawnMagazines[] = 
	{
        mag_4(30Rnd_545x39_Black_Mag_F),
        mag_2(HandGrenade_Guer)
	};
	camouflage = 1.6;
    cost = 93000;
	role = Crewman;
};
class Opf_O_P_M_Soldier_universal_F: Opf_O_P_M_Soldier_1_F
{
	author = $STR_A3_A_BranFlakes;
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
class Opf_O_P_M_Soldier_unarmed_F: Opf_O_P_M_Soldier_1_F
{
	author = $STR_A3_A_BranFlakes;
	editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\Opf_O_P_M_Soldier_unarmed_F.jpg";
	displayName = $STR_A3_CfgVehicles_b_soldier_unarmed_f_displayName;
	weapons[] = {DefaultManWeapons};
	respawnWeapons[] = {DefaultManWeapons};
	magazines[] = {};
	respawnMagazines[] = {};
	linkedItems[] = 
	{
		Atlas_V_OCarrierRig_Lite_blk_F,
		H_PASGT_basic_black_F,
		Aegis_G_Armband_OPF_F,
		DefaultManGuerillaLinkedItems
	};
	respawnLinkedItems[] = 
	{
		Atlas_V_OCarrierRig_Lite_blk_F,
		H_PASGT_basic_black_F,
		Aegis_G_Armband_OPF_F,
		DefaultManGuerillaLinkedItems
	};
	role = Unarmed;
	threat[] = {0.1,0.1,0.1};
};