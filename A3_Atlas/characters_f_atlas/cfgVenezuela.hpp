/* Venezuela */
class O_A_soldier_base_F;
class Atlas_O_VZ_Man_Base_F: O_A_soldier_base_F
{
    scope = private;
	faction = Atlas_OPF_V_F;
	genericNames = VenezuelanMen;
	identityTypes[] =
	{
		LanguageGRE_F,
		Head_Greek,
		G_HAF_default
	};
};
class Atlas_O_VZ_Soldier_Base_F: Atlas_O_VZ_Man_Base_F
{
	uniformClass = Atlas_U_O_VZ_Officer_oli_CO_F;
};
class Atlas_O_VZ_Soldier_F: Atlas_O_VZ_Soldier_Base_F
{
	author = $STR_A3_A_BranFlakes;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_VZ_Soldier_F.jpg";
    scope = protected;
    scopeCurator = protected;
	displayName = $STR_A3_CfgVehicles_B_Soldier_F0;
	linkedItems[] =
	{
		V_PlateCarrierIA1_whex,
		H_HelmetSpecter_cover_whex_CO,
		DefaultManLinkedItems,
		Goggles_grn_F
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrierIA1_whex,
		H_HelmetSpecter_cover_whex_CO,
		DefaultManLinkedItems,
		Goggles_grn_F
	};
	weapons[] =
    {
        arifle_NCAR15_holo_pointer_F,
        hgun_G17_black_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_NCAR15_holo_pointer_F,
        hgun_G17_black_F,
        DefaultManWeapons
    };
    magazines[] =
    {
		mag_10(30Rnd_580x42_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
		mag_10(30Rnd_580x42_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
    };
	cost = 100000;
    role = Rifleman;
};
class Atlas_O_VZ_TL_F: Atlas_O_VZ_Soldier_Base_F
{
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_VZ_TL_F.jpg";
    scope = protected;
    scopeCurator = protected;
	displayName = $STR_B_Soldier_TL_F0;
	linkedItems[] =
	{
		V_PlateCarrierIAGL_whex,
		H_HelmetSpecter_cover_whex_CO,
		DefaultManLinkedItems,
		Goggles_grn_F
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrierIAGL_whex,
		H_HelmetSpecter_cover_whex_CO,
		DefaultManLinkedItems,
		Goggles_grn_F
	};
    weapons[] =
    {
        arifle_NCAR15_GL_ARCO_blk_pointer_F,
        hgun_G17_black_F,
        DefaultManWeapons,
        Binocular
    };
    respawnWeapons[] =
    {
        arifle_NCAR15_GL_ARCO_blk_pointer_F,
        hgun_G17_black_F,
        DefaultManWeapons,
        Binocular
    };
    magazines[] =
    {
        mag_4(30Rnd_580x42_Mag_F),
        mag_2(30Rnd_580x42_Mag_Tracer_F),
        mag_2(17Rnd_9x21_Mag),
        mag_6(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade_East),
        SmokeShell,
        SMOKESHELLS_OPFOR,
        1Rnd_Smoke_Grenade_shell,
		SMOKEGRENADES_OPFOR
    };
    respawnMagazines[] =
    {
        mag_4(30Rnd_580x42_Mag_F),
        mag_2(30Rnd_580x42_Mag_Tracer_F),
        mag_2(17Rnd_9x21_Mag),
        mag_6(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade_East),
        SmokeShell,
        SMOKESHELLS_OPFOR,
        1Rnd_Smoke_Grenade_shell,
		SMOKEGRENADES_OPFOR
    };
    cost = 450000;
    icon = iconManLeader;
	role = Grenadier;

};
class Atlas_O_VZ_GL_F: Atlas_O_VZ_Soldier_Base_F
{
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_VZ_GL_F.jpg";
    scope = protected;
    scopeCurator = protected;
	displayName = $STR_B_Soldier_GL_F0;
	linkedItems[] =
	{
		V_PlateCarrierIAGL_whex,
		H_HelmetSpecter_cover_whex_CO,
		DefaultManLinkedItems,
		Goggles_grn_F
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrierIAGL_whex,
		H_HelmetSpecter_cover_whex_CO,
		DefaultManLinkedItems,
		Goggles_grn_F
	};
    weapons[] =
    {
        arifle_NCAR15_GL_holo_pointer_F,
        hgun_G17_black_F,
        DefaultManWeapons,
        Binocular
    };
    respawnWeapons[] =
    {
        arifle_NCAR15_GL_holo_pointer_F,
        hgun_G17_black_F,
        DefaultManWeapons,
        Binocular
    };
    magazines[] =
    {
        mag_4(30Rnd_580x42_Mag_F),
        mag_2(30Rnd_580x42_Mag_Tracer_F),
        mag_2(17Rnd_9x21_Mag),
        mag_6(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade_East),
        SmokeShell,
        SMOKESHELLS_OPFOR,
        1Rnd_Smoke_Grenade_shell,
		SMOKEGRENADES_OPFOR
    };
    respawnMagazines[] =
    {
        mag_4(30Rnd_580x42_Mag_F),
        mag_2(30Rnd_580x42_Mag_Tracer_F),
        mag_2(17Rnd_9x21_Mag),
        mag_6(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade_East),
        SmokeShell,
        SMOKESHELLS_OPFOR,
        1Rnd_Smoke_Grenade_shell,
		SMOKEGRENADES_OPFOR
    };
    cost = 430000;
	role = Grenadier;
};
class Atlas_O_VZ_AR_F: Atlas_O_VZ_Soldier_Base_F
{
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_VZ_AR_F.jpg";
    scope = protected;
    scopeCurator = protected;
	displayName = $STR_B_Soldier_AR_F0;
	linkedItems[] =
	{
		V_PlateCarrierIA2_whex,
		H_HelmetSpecter_cover_whex_CO,
		DefaultManLinkedItems,
		Goggles_grn_F
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrierIA2_whex,
		H_HelmetSpecter_cover_whex_CO,
		DefaultManLinkedItems,
		Goggles_grn_F
	};
    weapons[] =
    {
        LMG_03_Pointer_F,
        hgun_G17_black_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        LMG_03_Pointer_F,
        hgun_G17_black_F,
        DefaultManWeapons
    };
    magazines[] =
    {
		mag_3(200Rnd_556x45_Box_Red_F),
        mag_2(17Rnd_9x21_Mag),
        HandGrenade_East,
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
		mag_3(200Rnd_556x45_Box_Red_F),
        mag_2(17Rnd_9x21_Mag),
        HandGrenade_East,
        mag_2(SmokeShell)
    };
	cost = 125000;
	icon = iconManMG;
	role = MachineGunner;
	threat[] =
    {
        1.0,    // Soft
        0.1,    // Armor
        0.3     // Air
    };
};
class Atlas_O_VZ_exp_F: Atlas_O_VZ_Soldier_Base_F
{
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_VZ_exp_F.jpg";
    scope = protected;
    scopeCurator = protected;
	displayName = $STR_B_Soldier_exp_F0;
	backpack = B_Carryall_owcamo_OWExp_F;
	linkedItems[] =
	{
		V_PlateCarrierIAGL_whex,
		H_HelmetSpecter_cover_whex_CO,
		DefaultManLinkedItems,
		Goggles_grn_F
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrierIAGL_whex,
		H_HelmetSpecter_cover_whex_CO,
		DefaultManLinkedItems,
		Goggles_grn_F
	};
    weapons[] =
    {
        arifle_NCAR15B_holo_pointer_F,
        hgun_G17_black_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_NCAR15B_holo_pointer_F,
        hgun_G17_black_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_580x42_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_3(APERSMine_Range_Mag),
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_580x42_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_3(APERSMine_Range_Mag),
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
    };
	cost = 115000;
	icon = iconManExplosive;
	role = Sapper;
	threat[] =
    {
        1.0,    // Soft
        0.5,    // Armor
        0.1     // Air
    };
};
class Atlas_O_VZ_M_F: Atlas_O_VZ_Soldier_Base_F
{
	author = $STR_A3_A_BranFlakes;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_VZ_M_F.jpg";
    scope = protected;
    scopeCurator = protected;
	displayName = $STR_B_Soldier_M_F0;
	linkedItems[] =
	{
		V_PlateCarrierIA1_whex,
		H_HelmetSpecter_cover_whex_CO,
		DefaultManLinkedItems,
		Goggles_grn_F
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrierIA1_whex,
		H_HelmetSpecter_cover_whex_CO,
		DefaultManLinkedItems,
		Goggles_grn_F
	};
	weapons[] =
    {
        srifle_dmr_06_blk_kh_bp_F,
        hgun_G17_black_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        srifle_dmr_06_blk_kh_bp_F,
        hgun_G17_black_F,
        DefaultManWeapons
    };
    magazines[] =
    {
		mag_8(20rnd_762x51_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
		mag_8(20rnd_762x51_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
    };
	cost = 100000;
    role = Marksman;
};
class Atlas_O_VZ_medic_F: Atlas_O_VZ_Soldier_Base_F
{
	author = $STR_A3_A_BranFlakes;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_VZ_medic_F.jpg";
    scope = protected;
    scopeCurator = protected;
	displayName = $STR_B_medic_F0;
	backpack = B_FieldPack_owcamo_OWMedic_F;
	linkedItems[] =
	{
		V_PlateCarrierIA2_whex,
		H_HelmetSpecter_cover_whex_CO,
		DefaultManLinkedItems,
		Goggles_grn_F
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrierIA2_whex,
		H_HelmetSpecter_cover_whex_CO,
		DefaultManLinkedItems,
		Goggles_grn_F
	};
    weapons[] =
    {
        arifle_NCAR15_holo_pointer_F,
        hgun_G17_black_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_NCAR15_holo_pointer_F,
        hgun_G17_black_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_580x42_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        SmokeShell,
        SMOKESHELLS_MEDIC
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_580x42_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        SmokeShell,
        SMOKESHELLS_MEDIC
    };
	cost = 300000;
	icon = iconManMedic;
	picture = pictureHeal;
	role = CombatLifeSaver;
	threat[] =
    {
        1.0,    // Soft
        0.1,    // Armor
        0.3     // Air
    };
};
class Atlas_O_VZ_Soldier_LAT_F: Atlas_O_VZ_Soldier_Base_F
{
	author = $STR_A3_A_BranFlakes;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_VZ_Soldier_LAT_F.jpg";
    scope = protected;
    scopeCurator = protected;
	displayName = $STR_B_Soldier_lat_F0;
	backpack = B_FieldPack_owcamo_OVZLAT_F;
	linkedItems[] =
	{
		V_PlateCarrierIA2_whex,
		H_HelmetSpecter_cover_whex_CO,
		DefaultManLinkedItems,
		Goggles_grn_F
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrierIA2_whex,
		H_HelmetSpecter_cover_whex_CO,
		DefaultManLinkedItems,
		Goggles_grn_F
	};
    weapons[] =
    {
        arifle_NCAR15_holo_pointer_F,
        launch_RPG7_F,
        hgun_G17_black_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_NCAR15_holo_pointer_F,
        launch_RPG7_F,
        hgun_G17_black_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_580x42_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        RPG7_F,
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_580x42_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        RPG7_F,
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
    };
    icon = iconManAT;
	role = MissileSpecialist;
};
class Atlas_O_VZ_A_F: Atlas_O_VZ_Soldier_Base_F
{
	author = $STR_A3_A_BranFlakes;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_VZ_A_F.jpg";
	scope = protected;
	scopeCurator = protected;
	displayName = $STR_B_Soldier_A_F0;
	backpack = B_Carryall_owcamo_OVZAmmo_F;
	linkedItems[] =
	{
		V_PlateCarrierIA1_whex,
		H_HelmetSpecter_cover_whex_CO,
		DefaultManLinkedItems,
		Goggles_grn_F
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrierIA1_whex,
		H_HelmetSpecter_cover_whex_CO,
		DefaultManLinkedItems,
		Goggles_grn_F
	};
	weapons[] =
	{
		arifle_NCAR15_holo_pointer_F,
		hgun_G17_black_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_NCAR15_holo_pointer_F,
		hgun_G17_black_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_10(30Rnd_580x42_Mag_F),
		mag_2(17Rnd_9x21_Mag),
		mag_2(HandGrenade_East),
		mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_10(30Rnd_580x42_Mag_F),
		mag_2(17Rnd_9x21_Mag),
		mag_2(HandGrenade_East),
		mag_2(SmokeShell)
	};
	cost = 110000;
};
class Atlas_O_VZ_Soldier_AAR_F: Atlas_O_VZ_Soldier_Base_F
{
	author = $STR_A3_A_BranFlakes;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_VZ_Soldier_AAR_F.jpg";
	scope = protected;
	scopeCurator = protected;
	displayName = $STR_B_Soldier_AAR_F0;
	backpack = B_FieldPack_owcamo_OVZAAR_F;
	linkedItems[] =
	{
		V_PlateCarrierIA1_whex,
		H_HelmetSpecter_cover_whex_CO,
		DefaultManLinkedItems,
		Goggles_grn_F
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrierIA1_whex,
		H_HelmetSpecter_cover_whex_CO,
		DefaultManLinkedItems,
		Goggles_grn_F
	};
	weapons[] =
	{
		arifle_NCAR15_holo_pointer_F,
		hgun_G17_black_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_NCAR15_holo_pointer_F,
		hgun_G17_black_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_10(30Rnd_580x42_Mag_F),
		mag_2(17Rnd_9x21_Mag),
		mag_2(HandGrenade_East),
		mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_10(30Rnd_580x42_Mag_F),
		mag_2(17Rnd_9x21_Mag),
		mag_2(HandGrenade_East),
		mag_2(SmokeShell)
	};
	cost = 110000;
	role = Assistant;
};
class Atlas_O_VZ_support_MG_F: Atlas_O_VZ_Soldier_Base_F
{
	author = $STR_A3_A_BranFlakes;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_VZ_support_MG_F.jpg";
  	scope = protected;
  	scopeCurator = protected;
	displayName = $STR_B_support_MG_F0;
	backpack = O_R_HMG_01_Weapon_F;
	linkedItems[] =
	{
		V_PlateCarrierIA1_whex,
		H_HelmetSpecter_cover_whex_CO,
		DefaultManLinkedItems,
		Goggles_grn_F
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrierIA1_whex,
		H_HelmetSpecter_cover_whex_CO,
		DefaultManLinkedItems,
		Goggles_grn_F
	};
	weapons[] =
	{
		arifle_NCAR15B_holo_pointer_F,
		hgun_G17_black_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_NCAR15B_holo_pointer_F,
		hgun_G17_black_F,
		DefaultManWeapons
	};
	magazines[] =
    {
        mag_8(30Rnd_580x42_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(O_IR_Grenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_8(30Rnd_580x42_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(O_IR_Grenade),
        mag_2(SmokeShell)
    };
	cost = 91000;
	role = Assistant;
};
class Atlas_O_VZ_support_AMG_F: Atlas_O_VZ_Soldier_Base_F
{
	author = $STR_A3_A_BranFlakes;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_VZ_support_AMG_F.jpg";
  	scope = protected;
  	scopeCurator = protected;
	displayName = $STR_B_support_AMG_F0;
	backpack = O_R_HMG_01_support_F;
	linkedItems[] =
	{
		V_PlateCarrierIA1_whex,
		H_HelmetSpecter_cover_whex_CO,
		DefaultManLinkedItems,
		Goggles_grn_F
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrierIA1_whex,
		H_HelmetSpecter_cover_whex_CO,
		DefaultManLinkedItems,
		Goggles_grn_F
	};
	weapons[] =
	{
		arifle_NCAR15B_holo_pointer_F,
		hgun_G17_black_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_NCAR15B_holo_pointer_F,
		hgun_G17_black_F,
		DefaultManWeapons
	};
	magazines[] =
    {
        mag_8(30Rnd_580x42_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(O_IR_Grenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_8(30Rnd_580x42_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(O_IR_Grenade),
        mag_2(SmokeShell)
    };
	cost = 91000;
	role = Assistant;
};
class Atlas_O_VZ_support_Mort_F: Atlas_O_VZ_Soldier_Base_F
{
	author = $STR_A3_A_BranFlakes;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_VZ_support_Mort_F.jpg";
  	scope = protected;
  	scopeCurator = protected;
	displayName = $STR_B_support_Mort_F0;
	backpack = O_R_Mortar_01_Weapon_F;
	linkedItems[] =
	{
		V_PlateCarrierIA1_whex,
		H_HelmetSpecter_cover_whex_CO,
		DefaultManLinkedItems,
		Goggles_grn_F
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrierIA1_whex,
		H_HelmetSpecter_cover_whex_CO,
		DefaultManLinkedItems,
		Goggles_grn_F
	};
	weapons[] =
	{
		arifle_NCAR15B_holo_pointer_F,
		hgun_G17_black_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_NCAR15B_holo_pointer_F,
		hgun_G17_black_F,
		DefaultManWeapons
	};
	magazines[] =
    {
        mag_8(30Rnd_580x42_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(O_IR_Grenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_8(30Rnd_580x42_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(O_IR_Grenade),
        mag_2(SmokeShell)
    };
	cost = 91000;
	role = Assistant;
};
class Atlas_O_VZ_support_AMort_F: Atlas_O_VZ_Soldier_Base_F
{
	author = $STR_A3_A_BranFlakes;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_VZ_support_AMort_F.jpg";
  	scope = protected;
  	scopeCurator = protected;
	displayName = $STR_B_support_AMort_F0;
	backpack = O_R_Mortar_01_support_F;
	linkedItems[] =
	{
		V_PlateCarrierIA1_whex,
		H_HelmetSpecter_cover_whex_CO,
		DefaultManLinkedItems,
		Goggles_grn_F
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrierIA1_whex,
		H_HelmetSpecter_cover_whex_CO,
		DefaultManLinkedItems,
		Goggles_grn_F
	};
	weapons[] =
	{
		arifle_NCAR15B_holo_pointer_F,
		hgun_G17_black_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_NCAR15B_holo_pointer_F,
		hgun_G17_black_F,
		DefaultManWeapons
	};
	magazines[] =
    {
        mag_8(30Rnd_580x42_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(O_IR_Grenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_8(30Rnd_580x42_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(O_IR_Grenade),
        mag_2(SmokeShell)
    };
	cost = 91000;
	role = Assistant;
};
class Atlas_O_VZ_support_AHAT_F: Atlas_O_VZ_Soldier_Base_F
{
	author = $STR_A3_A_BranFlakes;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_VZ_support_AHAT_F.jpg";
  	scope = protected;
  	scopeCurator = protected;
	displayName = $STR_A3_CfgVehicles_O_Soldier_AHAT_F0;
	Backpack = B_FieldPack_owcamo_OWHAT_F;
	linkedItems[] =
	{
		V_PlateCarrierIA1_whex,
		H_HelmetSpecter_cover_whex_CO,
		DefaultManLinkedItems,
		Goggles_grn_F
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrierIA1_whex,
		H_HelmetSpecter_cover_whex_CO,
		DefaultManLinkedItems,
		Goggles_grn_F
	};
	weapons[] =
	{
		arifle_NCAR15B_holo_pointer_F,
		hgun_G17_black_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_NCAR15B_holo_pointer_F,
		hgun_G17_black_F,
		DefaultManWeapons
	};
	magazines[] =
    {
        mag_8(30Rnd_580x42_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(O_IR_Grenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_8(30Rnd_580x42_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(O_IR_Grenade),
        mag_2(SmokeShell)
    };
	cost = 91000;
	role = Assistant;
};
class Atlas_O_VZ_support_AAA_F: Atlas_O_VZ_Soldier_Base_F
{
	author = $STR_A3_A_BranFlakes;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_VZ_support_AAA_F.jpg";
  	scope = protected;
  	scopeCurator = protected;
	displayName = $STR_B_soldier_AAA_F0;
	Backpack = B_Carryall_owcamo_OWAAA_F;
	linkedItems[] =
	{
		V_PlateCarrierIA1_whex,
		H_HelmetSpecter_cover_whex_CO,
		DefaultManLinkedItems,
		Goggles_grn_F
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrierIA1_whex,
		H_HelmetSpecter_cover_whex_CO,
		DefaultManLinkedItems,
		Goggles_grn_F
	};
	weapons[] =
	{
		arifle_NCAR15B_holo_pointer_F,
		hgun_G17_black_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_NCAR15B_holo_pointer_F,
		hgun_G17_black_F,
		DefaultManWeapons
	};
	magazines[] =
    {
        mag_8(30Rnd_580x42_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(O_IR_Grenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_8(30Rnd_580x42_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(O_IR_Grenade),
        mag_2(SmokeShell)
    };
	cost = 91000;
	role = Assistant;
};
class Atlas_O_VZ_support_AAT_F: Atlas_O_VZ_Soldier_Base_F
{
	author = $STR_A3_A_BranFlakes;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_VZ_support_AAT_F.jpg";
  	scope = protected;
  	scopeCurator = protected;
	displayName = $STR_B_soldier_AAT_F0;
	Backpack = B_Carryall_owcamo_OWAAT_F;
	linkedItems[] =
	{
		V_PlateCarrierIA1_whex,
		H_HelmetSpecter_cover_whex_CO,
		DefaultManLinkedItems,
		Goggles_grn_F
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrierIA1_whex,
		H_HelmetSpecter_cover_whex_CO,
		DefaultManLinkedItems,
		Goggles_grn_F
	};
	weapons[] =
	{
		arifle_NCAR15B_holo_pointer_F,
		hgun_G17_black_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_NCAR15B_holo_pointer_F,
		hgun_G17_black_F,
		DefaultManWeapons
	};
	magazines[] =
    {
        mag_8(30Rnd_580x42_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(O_IR_Grenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_8(30Rnd_580x42_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(O_IR_Grenade),
        mag_2(SmokeShell)
    };
	cost = 91000;
	role = Assistant;
};
class Atlas_O_VZ_Crew_F: Atlas_O_VZ_Soldier_Base_F
{
	author = $STR_A3_A_BranFlakes;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_VZ_Crew_F.jpg";
  	scope = protected;
  	scopeCurator = protected;
	displayName = $STR_B_crew_F0;
	linkedItems[] =
	{
		V_TacVest_grn,
		H_Tank_black_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_TacVest_grn,
		H_Tank_black_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	weapons[] =
	{
		arifle_NCAR15B_holo_pointer_F,
		hgun_G17_black_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_NCAR15B_holo_pointer_F,
		hgun_G17_black_F,
		DefaultManWeapons
	};
	magazines[] =
    {
        mag_4(30Rnd_580x42_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        HandGrenade_East,
        SmokeShell
    };
    respawnMagazines[] =
    {
        mag_4(30Rnd_580x42_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        HandGrenade_East,
        SmokeShell
    };
    engineer = true;
	cost = 90000;
	role = Crewman;
	camouflage = 1.6;
};
class Atlas_O_VZ_engineer_F: Atlas_O_VZ_Soldier_Base_F
{
	author = $STR_A3_A_BranFlakes;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_VZ_engineer_F.jpg";
  	scope = protected;
  	scopeCurator = protected;
	displayName = $STR_B_engineer_F0;
	Backpack = B_Carryall_owcamo_OWEng_F;
	linkedItems[] =
	{
		V_PlateCarrierIA1_whex,
		H_HelmetSpecter_cover_whex_CO,
		DefaultManLinkedItems,
		Goggles_grn_F
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrierIA1_whex,
		H_HelmetSpecter_cover_whex_CO,
		DefaultManLinkedItems,
		Goggles_grn_F
	};
	weapons[] =
	{
		arifle_NCAR15B_holo_pointer_F,
		hgun_G17_black_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_NCAR15B_holo_pointer_F,
		hgun_G17_black_F,
		DefaultManWeapons
	};
	magazines[] =
    {
        mag_8(30Rnd_580x42_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(O_IR_Grenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_8(30Rnd_580x42_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(O_IR_Grenade),
        mag_2(SmokeShell)
    };
	canDeactivateMines = true;
	detectSkill = 31;
    icon = iconManEngineer;
    picture = pictureRepair;
	cost = 220000;
    role = Sapper;
	engineer = true;
	camouflage = 1.6;
	threat[] =
    {
        1.0,    // Soft
        0.5,    // Armor
        0.1     // Air
    };
};
class Atlas_O_VZ_soldier_mine_F: Atlas_O_VZ_engineer_F
{
	author = $STR_A3_A_BranFlakes;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_VZ_soldier_mine_F.jpg";
	displayName = $STR_A3_B_T_soldier_mine_F0;
	backpack = B_Carryall_owcamo_Mine;
};
class Atlas_O_VZ_Helipilot_F: Atlas_O_VZ_Soldier_Base_F
{
	author = $STR_A3_A_BranFlakes;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_VZ_Helipilot_F.jpg";
  	scope = protected;
  	scopeCurator = protected;
	displayName = $STR_B_Helipilot_F0;
	linkedItems[] =
	{
		V_TacVest_grn,
		H_PilotHelmetHeli_O,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_TacVest_grn,
		H_PilotHelmetHeli_O,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	weapons[] =
	{
		smg_05_F,
		hgun_G17_black_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		smg_05_F,
		hgun_G17_black_F,
		DefaultManWeapons
	};
	magazines[] =
    {
        mag_4(30Rnd_9x21_Mag_SMG_02),
        mag_2(17Rnd_9x21_Mag),
        HandGrenade_East,
        SmokeShell
    };
    respawnMagazines[] =
    {
        mag_4(30Rnd_9x21_Mag_SMG_02),
        mag_2(17Rnd_9x21_Mag),
        HandGrenade_East,
        SmokeShell
    };
	camouflage = 2;
	cost = 160000;
	role = Crewman;
};
class Atlas_O_VZ_Helicrew_F: Atlas_O_VZ_Soldier_Base_F
{
	author = $STR_A3_A_BranFlakes;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_VZ_Helicrew_F.jpg";
  	scope = protected;
  	scopeCurator = protected;
	displayName = $STR_B_helicrew_F0;
	linkedItems[] =
	{
		V_TacVest_grn,
		H_CrewHelmetHeli_O,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_TacVest_grn,
		H_CrewHelmetHeli_O,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	weapons[] =
	{
		arifle_NCAR15B_holo_pointer_F,
		hgun_G17_black_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_NCAR15B_holo_pointer_F,
		hgun_G17_black_F,
		DefaultManWeapons
	};
	magazines[] =
    {
        mag_4(30Rnd_580x42_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        HandGrenade_East,
        SmokeShell
    };
    respawnMagazines[] =
    {
        mag_4(30Rnd_580x42_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        HandGrenade_East,
        SmokeShell
    };
	camouflage = 2;
	cost = 160000;
	role = Crewman;
};
class Atlas_O_VZ_Soldier_AA_F: Atlas_O_VZ_Soldier_Base_F
{
	author = $STR_A3_A_BranFlakes;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_VZ_Soldier_AA_F.jpg";
    scope = protected;
    scopeCurator = protected;
	displayName = $STR_B_Soldier_AA_F0;
	backpack = B_FieldPack_owcamo_OWAA_F;
	linkedItems[] =
	{
		V_PlateCarrierIA2_whex,
		H_HelmetSpecter_cover_whex_CO,
		DefaultManLinkedItems,
		Goggles_grn_F
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrierIA2_whex,
		H_HelmetSpecter_cover_whex_CO,
		DefaultManLinkedItems,
		Goggles_grn_F
	};
    weapons[] =
    {
        arifle_NCAR15_holo_pointer_F,
        launch_O_Titan_camo_F,
        hgun_G17_black_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_NCAR15_holo_pointer_F,
        launch_O_Titan_camo_F,
        hgun_G17_black_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_580x42_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        Titan_AA,
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_580x42_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        Titan_AA,
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
    };
    icon = iconManAT;
	role = MissileSpecialist;
};
class Atlas_O_VZ_Soldier_AT_F: Atlas_O_VZ_Soldier_Base_F
{
	author = $STR_A3_A_BranFlakes;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_VZ_Soldier_AT_F.jpg";
    scope = protected;
    scopeCurator = protected;
	displayName = $STR_B_Soldier_AT_F0;
	backpack = B_FieldPack_owcamo_OWAA_F;
	linkedItems[] =
	{
		V_PlateCarrierIA2_whex,
		H_HelmetSpecter_cover_whex_CO,
		DefaultManLinkedItems,
		Goggles_grn_F
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrierIA2_whex,
		H_HelmetSpecter_cover_whex_CO,
		DefaultManLinkedItems,
		Goggles_grn_F
	};
    weapons[] =
    {
        arifle_NCAR15_holo_pointer_F,
        launch_O_Titan_short_camo_F,
        hgun_G17_black_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_NCAR15_holo_pointer_F,
        launch_O_Titan_short_camo_F,
        hgun_G17_black_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_580x42_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        Titan_AT,
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_580x42_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        Titan_AT,
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
    };
    icon = iconManAT;
	role = MissileSpecialist;
};
class Atlas_O_VZ_Officer_F: Atlas_O_VZ_Soldier_Base_F
{
	author = $STR_A3_A_BranFlakes;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_VZ_Officer_F.jpg";
    scope = protected;
    scopeCurator = protected;
	displayName = $STR_B_officer_F0;
	linkedItems[] =
	{
		V_Rangemaster_belt,
		H_Beret_CSAT_01_F,
		DefaultManLeaderLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_Rangemaster_belt,
		H_Beret_CSAT_01_F,
		DefaultManLeaderLinkedItems
	};
	weapons[] =
    {
      	arifle_NCAR15_F,
        hgun_G17_black_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_NCAR15_F,
        hgun_G17_black_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_4(30Rnd_580x42_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        SMOKESHELLS_OPFOR
    };
    respawnMagazines[] =
    {
        mag_4(30Rnd_580x42_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        SMOKESHELLS_OPFOR
    };
	camouflage = 1.6;
    cost = 600000;
	icon = iconManOfficer;
    role = Rifleman;
};
class Atlas_O_VZ_Soldier_lite_F: Atlas_O_VZ_Soldier_Base_F
{
	author = $STR_A3_A_BranFlakes;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_VZ_Soldier_lite_F.jpg";
    scope = protected;
    scopeCurator = protected;
	displayName = $STR_B_Soldier_lite_F0;
	linkedItems[] =
	{
		V_BandollierB_rgr,
		H_MilCap_grn,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_BandollierB_rgr,
		H_MilCap_grn,
		DefaultManLinkedItems
	};
	weapons[] =
    {
        arifle_NCAR15_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_NCAR15_F,
        DefaultManWeapons
    };
    magazines[] =
    {
		mag_4(30Rnd_580x42_Mag_F),
        HandGrenade_East,
        SmokeShell
    };
    respawnMagazines[] =
    {
		mag_4(30Rnd_580x42_Mag_F),
        HandGrenade_East,
        SmokeShell
    };
	cost = 90000;
	camouflage = 1.2;
    role = Rifleman;
};
class Atlas_O_VZ_SL_F: Atlas_O_VZ_Soldier_Base_F
{
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_VZ_SL_F.jpg";
    scope = protected;
    scopeCurator = protected;
	displayName = $STR_B_Soldier_SL_F0;
	linkedItems[] =
	{
		V_PlateCarrierIA2_whex,
		H_HelmetSpecter_cover_whex_CO,
		DefaultManLinkedItems,
		Goggles_grn_F
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrierIA2_whex,
		H_HelmetSpecter_cover_whex_CO,
		DefaultManLinkedItems,
		Goggles_grn_F
	};
    weapons[] =
    {
        arifle_NCAR15_ARCO_blk_pointer_F,
        hgun_G17_black_F,
        DefaultManWeapons,
        Binocular
    };
    respawnWeapons[] =
    {
        arifle_NCAR15_ARCO_blk_pointer_F,
        hgun_G17_black_F,
        DefaultManWeapons,
        Binocular
    };
    magazines[] =
    {
        mag_4(30Rnd_580x42_Mag_F),
        mag_2(30Rnd_580x42_Mag_Tracer_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        SmokeShell,
        SMOKESHELLS_OPFOR,
		SMOKEGRENADES_OPFOR
    };
    respawnMagazines[] =
    {
        mag_4(30Rnd_580x42_Mag_F),
        mag_2(30Rnd_580x42_Mag_Tracer_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        SmokeShell,
        SMOKESHELLS_OPFOR,
		SMOKEGRENADES_OPFOR
    };
    cost = 500000;
	camouflage = 1.4;
	icon = iconManLeader;
	role = Rifleman;
};
class Atlas_O_VZ_RadioOperator_F: Atlas_O_VZ_Soldier_F
{
	author = $STR_A3_A_Bran STR_A3_A_BranFlakes;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_VZ_RadioOperator_F.jpg";
    displayName = $STR_A3_C_B_W_RadioOperator_F0;
	backpack = B_RadioBag_01_whex_F;
	linkedItems[] =
	{
		V_PlateCarrierIA1_whex,
		H_HelmetSpecter_cover_whex_CO,
		DefaultManLinkedItems,
		Goggles_grn_F
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrierIA1_whex,
		H_HelmetSpecter_cover_whex_CO,
		DefaultManLinkedItems,
		Goggles_grn_F
	};
	weapons[] =
    {
        arifle_NCAR15_holo_pointer_F,
        hgun_G17_black_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_NCAR15_holo_pointer_F,
        hgun_G17_black_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_10(30Rnd_580x42_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_10(30Rnd_580x42_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
    };
    role = RadioOperator;
};
class Atlas_O_VZ_Soldier_unarmed_F: Atlas_O_VZ_Soldier_Base_F
{
	author = $STR_A3_A_BranFlakes;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_VZ_Soldier_unarmed_F.jpg";
    scope = protected;
    scopeCurator = protected;
	displayName = $STR_A3_CfgVehicles_b_soldier_unarmed_f_displayName;
	weapons[] = {DefaultManWeapons};
	respawnWeapons[] = {DefaultManWeapons};
	magazines[] = {};
	respawnMagazines[] = {};
	linkedItems[] =
	{
		V_PlateCarrierIA1_whex,
		H_HelmetSpecter_cover_whex_CO,
		DefaultManLinkedItems,
		Goggles_grn_F
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrierIA1_whex,
		H_HelmetSpecter_cover_whex_CO,
		DefaultManLinkedItems,
		Goggles_grn_F
	};
	role = Unarmed;
	threat[] =
    {
        0.1,    // Soft
        0.1,    // Armor
        0.1     // Air
    };
};
class Atlas_O_VZ_survivor_F: Atlas_O_VZ_Soldier_Base_F
{
	author = $STR_A3_A_BranFlakes;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_VZ_survivor_F.jpg";
    scope = protected;
    scopeCurator = protected;
	displayName = $STR_A3_CfgVehicles_b_survivor_f_displayName;
	weapons[] = {DefaultManWeapons};
	respawnWeapons[] = {DefaultManWeapons};
	magazines[] = {};
	items[] = {};
	respawnItems[] = {};
	respawnMagazines[] = {};
	linkedItems[] = {};
	respawnLinkedItems[] = {};
	role = Unarmed;
};
//Recon Loadouts
class Atlas_O_VZ_Soldier_recon_base: Atlas_O_VZ_Soldier_Base_F
{
    scope = private;
    scopeCurator = private;
    textSingular = $STR_A3_nameSound_veh_infantry_SF_s;
    textPlural = $STR_A3_nameSound_veh_infantry_SF_p;
    nameSound = veh_infantry_SF_s;
    uniformClass = Atlas_U_O_VZ_Officer_oli_CO_F;
    editorsubcategory = EdSubcat_Personnel_SpecialForces;
	items[] =
	{
		FirstAidKit,
		optic_Nightstalker
	};
	respawnItems[] =
	{
		FirstAidKit,
		optic_Nightstalker
	};
    icon = iconManRecon;
	role = Rifleman;
};
class Atlas_O_VZ_Recon_F: Atlas_O_VZ_Soldier_recon_base
{
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_VZ_recon_F.jpg";
	author = $STR_A3_A_BranFlakes;
    scope = protected;
    scopeCurator = protected;
	displayName = $STR_B_recon_F0;
	linkedItems[] =
	{
		V_SmershVest_01_radio_F,
		H_Booniehat_mgrn_hs,
		DefaultManLeaderLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_SmershVest_01_radio_F,
		H_Booniehat_mgrn_hs,
		DefaultManLeaderLinkedItems,
		NVGoggles_INDEP
	};
	weapons[] =
    {
        arifle_AUG_C_black_slcr_arco_F,
        hgun_G17_black_F,
        DefaultManWeapons,
		Rangefinder
    };
    respawnWeapons[] =
    {
        arifle_AUG_C_black_slcr_arco_F,
        hgun_G17_black_F,
        DefaultManWeapons,
		Rangefinder
    };
    magazines[] =
    {
        mag_8(30Rnd_556x45_AUG_Mag_F),
        mag_2(17Rnd_9x21_Mag),
		mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_red)
    };
    respawnMagazines[] =
    {
       	mag_8(30Rnd_556x45_AUG_Mag_F),
        mag_2(17Rnd_9x21_Mag),
  		mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_red)
    };
};
class Atlas_O_VZ_recon_TL_F: Atlas_O_VZ_Soldier_recon_base
{
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_VZ_recon_TL_F.jpg";
	author = $STR_A3_A_BranFlakes;
    scope = protected;
    scopeCurator = protected;
	displayName = $STR_B_Recon_TL_F0;
	linkedItems[] =
	{
		V_SmershVest_01_radio_F,
		H_Booniehat_mgrn_hs,
		DefaultManLeaderLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_SmershVest_01_radio_F,
		H_Booniehat_mgrn_hs,
		DefaultManLeaderLinkedItems,
		NVGoggles_INDEP
	};
	weapons[] =
    {
        arifle_AUG_C_black_slcr_arco_F,
        hgun_G17_black_F,
        DefaultManWeapons,
		Rangefinder
    };
    respawnWeapons[] =
    {
        arifle_AUG_C_black_slcr_arco_F,
        hgun_G17_black_F,
        DefaultManWeapons,
		Rangefinder
    };
    magazines[] =
    {
        mag_6(30Rnd_556x45_AUG_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        SmokeShell,
        SMOKESHELLS_OPFOR,
        mag_2(Chemlight_red)
    };
    respawnMagazines[] =
    {
       	mag_6(30Rnd_556x45_AUG_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        SmokeShell,
        SMOKESHELLS_OPFOR,
        mag_2(Chemlight_red)
    };
	icon = iconManLeader;
	role = Rifleman;
	threat[] =
    {
        1.0,    // Soft
        0.1,    // Armor
        0.3     // Air
    };
};
class Atlas_O_VZ_recon_exp_F: Atlas_O_VZ_Soldier_recon_base
{
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_VZ_recon_exp_F.jpg";
	author = $STR_A3_A_BranFlakes;
    scope = protected;
    scopeCurator = protected;
	displayName = $STR_B_Recon_exp_F0;
	backpack = B_Carryall_owcamo_OWExp_F;
	linkedItems[] =
	{
		V_SmershVest_01_radio_F,
		H_Booniehat_mgrn_hs,
		DefaultManLeaderLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_SmershVest_01_radio_F,
		H_Booniehat_mgrn_hs,
		DefaultManLeaderLinkedItems,
		NVGoggles_INDEP
	};
	weapons[] =
    {
        arifle_AUG_C_black_slcr_arco_F,
        hgun_G17_black_F,
        DefaultManWeapons,
		Rangefinder
    };
    respawnWeapons[] =
    {
        arifle_AUG_C_black_slcr_arco_F,
        hgun_G17_black_F,
        DefaultManWeapons,
		Rangefinder
    };
    magazines[] =
    {
        mag_6(30Rnd_556x45_AUG_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        SmokeShell,
        SMOKESHELLS_OPFOR,
        mag_2(Chemlight_red)
    };
    respawnMagazines[] =
    {
       	mag_6(30Rnd_556x45_AUG_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        SmokeShell,
        SMOKESHELLS_OPFOR,
        mag_2(Chemlight_red)
    };
	role = Rifleman;
	threat[] =
    {
        1.0,    // Soft
        0.1,    // Armor
        0.3     // Air
    };
	icon = iconManExplosive;
	picture = pictureExplosive;
};
class Atlas_O_VZ_recon_AR_F: Atlas_O_VZ_Soldier_recon_base
{
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_VZ_recon_AR_F.jpg";
	author = $STR_A3_A_BranFlakes;
    scope = protected;
    scopeCurator = protected;
	displayName = $STR_A3_C_O_R_recon_AR_F0;
	linkedItems[] =
	{
		V_SmershVest_01_radio_F,
		H_bandanna_khk_hs,
		DefaultManLeaderLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_SmershVest_01_radio_F,
		H_badanna_khk_hs,
		DefaultManLeaderLinkedItems,
		NVGoggles_INDEP
	};
	weapons[] =
    {
        LMG_03_arco_Pointer_snds_F,
        hgun_G17_black_F,
        DefaultManWeapons,
		Rangefinder
    };
    respawnWeapons[] =
    {
        LMG_03_arco_Pointer_snds_F,
        hgun_G17_black_F,
        DefaultManWeapons,
		Rangefinder
    };
    magazines[] =
    {
        mag_3(200Rnd_556x45_Box_Red_F),
        mag_2(17Rnd_9x21_Mag),
        MiniGrenade,
        mag_2(SmokeShell),
        mag_2(Chemlight_red)
    };
    respawnMagazines[] =
    {
       	mag_3(200Rnd_556x45_Box_Red_F),
        mag_2(17Rnd_9x21_Mag),
        MiniGrenade,
        mag_2(SmokeShell),
        mag_2(Chemlight_red)
    };
	icon = iconManMG;
	role = MachineGunner;
	threat[] =
    {
        1.0,    // Soft
        0.1,    // Armor
        0.3     // Air
    };
};
class Atlas_O_VZ_recon_M_F: Atlas_O_VZ_Soldier_recon_base
{
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_VZ_recon_M_F.jpg";
	author = $STR_A3_A_BranFlakes;
    scope = protected;
    scopeCurator = protected;
	displayName = $STR_B_recon_M_F0;
	linkedItems[] =
	{
		V_SmershVest_01_radio_F,
		H_Watchcap_camo_hs,
		DefaultManLeaderLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_SmershVest_01_radio_F,
		H_Watchcap_camo_hs,
		DefaultManLeaderLinkedItems,
		NVGoggles_INDEP
	};
	weapons[] =
    {
        srifle_dmr_06_camo_dms_F,
        hgun_G17_black_F,
        DefaultManWeapons,
		Rangefinder
    };
    respawnWeapons[] =
    {
        srifle_dmr_06_camo_dms_F,
        hgun_G17_black_F,
        DefaultManWeapons,
		Rangefinder
    };
    magazines[] =
    {
        mag_8(20rnd_762x51_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        SmokeShell,
        SMOKESHELLS_OPFOR,
        mag_2(Chemlight_red)
    };
    respawnMagazines[] =
    {
       	mag_8(20rnd_762x51_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        SmokeShell,
        SMOKESHELLS_OPFOR,
        mag_2(Chemlight_red)
    };
	role = Marksman;
	threat[] =
    {
        1.0,    // Soft
        0.1,    // Armor
        0.3     // Air
    };
};
class Atlas_O_VZ_recon_medic_F: Atlas_O_VZ_Soldier_recon_base
{
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_VZ_recon_medic_F.jpg";
	author = $STR_A3_A_BranFlakes;
    scope = protected;
    scopeCurator = protected;
	displayName = $STR_B_recon_medic_F0;
	backpack = B_FieldPack_owcamo_OWMedic_F;
	linkedItems[] =
	{
		V_SmershVest_01_radio_F,
		H_Booniehat_mgrn_hs,
		DefaultManLeaderLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_SmershVest_01_radio_F,
		H_Booniehat_mgrn_hs,
		DefaultManLeaderLinkedItems,
		NVGoggles_INDEP
	};
	weapons[] =
    {
        arifle_AUG_C_black_slcr_arco_F,
        hgun_G17_black_F,
        DefaultManWeapons,
		Rangefinder
    };
    respawnWeapons[] =
    {
        arifle_AUG_C_black_slcr_arco_F,
        hgun_G17_black_F,
        DefaultManWeapons,
		Rangefinder
    };
    magazines[] =
    {
        mag_6(30Rnd_556x45_AUG_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        SmokeShell,
        SMOKESHELLS_MEDIC,
        mag_2(Chemlight_red)
    };
    respawnMagazines[] =
    {
       	mag_6(30Rnd_556x45_AUG_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        SmokeShell,
        SMOKESHELLS_MEDIC,
        mag_2(Chemlight_red)
    };
	icon = iconManMedic;
	picture = pictureHeal;
	role = CombatLifeSaver;
	threat[] =
    {
        1.0,    // Soft
        0.1,    // Armor
        0.3     // Air
    };
};
class Atlas_O_VZ_recon_GL_F: Atlas_O_VZ_Soldier_recon_base
{
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_VZ_recon_GL_F.jpg";
	author = $STR_A3_A_BranFlakes;
    scope = protected;
    scopeCurator = protected;
	displayName = $STR_A3_C_O_R_recon_GL_F0;
	linkedItems[] =
	{
		V_SmershVest_01_radio_F,
		H_bandanna_khk_hs,
		DefaultManLeaderLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_SmershVest_01_radio_F,
		H_bandanna_khk_hs,
		DefaultManLeaderLinkedItems,
		NVGoggles_INDEP
	};
	weapons[] =
    {
        arifle_AUG_GL_black_slcr_arco_F,
        hgun_G17_black_F,
        DefaultManWeapons,
		Rangefinder
    };
    respawnWeapons[] =
    {
        arifle_AUG_GL_black_slcr_arco_F,
        hgun_G17_black_F,
        DefaultManWeapons,
		Rangefinder
    };
    magazines[] =
    {
        mag_6(30Rnd_556x45_AUG_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_6(1Rnd_HE_Grenade_shell),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_red),
        mag_2(1Rnd_Smoke_Grenade_shell)
    };
    respawnMagazines[] =
    {
       	mag_6(30Rnd_556x45_AUG_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_6(1Rnd_HE_Grenade_shell),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_red),
        mag_2(1Rnd_Smoke_Grenade_shell)
    };
	role = Grenadier;
	threat[] =
    {
        1.0,    // Soft
        0.1,    // Armor
        0.3     // Air
    };
};
class Atlas_O_VZ_recon_LAT_F: Atlas_O_VZ_Soldier_recon_base
{
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_VZ_recon_LAT_F.jpg";
	author = $STR_A3_A_BranFlakes;
    scope = protected;
    scopeCurator = protected;
	displayName = $STR_B_recon_LAT_F0;
	backpack = B_FieldPack_owcamo_OVZLAT_F;
	linkedItems[] =
	{
		V_SmershVest_01_radio_F,
		H_Booniehat_mgrn_hs,
		DefaultManLeaderLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_SmershVest_01_radio_F,
		H_Booniehat_mgrn_hs,
		DefaultManLeaderLinkedItems,
		NVGoggles_INDEP
	};
	weapons[] =
    {
        arifle_AUG_C_black_slcr_arco_F,
        launch_RPG7_F,
        hgun_G17_black_F,
        DefaultManWeapons,
		Rangefinder
    };
    respawnWeapons[] =
    {
        arifle_AUG_C_black_slcr_arco_F,
        launch_RPG7_F,
        hgun_G17_black_F,
        DefaultManWeapons,
		Rangefinder
    };
    magazines[] =
    {
        mag_6(30Rnd_556x45_AUG_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        RPG7_F,
		mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_red)
    };
    respawnMagazines[] =
    {
       	mag_6(30Rnd_556x45_AUG_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        RPG7_F,
  		mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_red)
    };
	icon = iconManAT;
	role = MissileSpecialist;
	threat[] =
    {
        1.0,    // Soft
        0.1,    // Armor
        0.3     // Air
    };
};
class Atlas_O_VZ_recon_JTAC_F: Atlas_O_VZ_Soldier_recon_base
{
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_VZ_recon_JTAC_F.jpg";
	author = $STR_A3_A_BranFlakes;
    scope = protected;
    scopeCurator = protected;
	displayName = $STR_B_recon_JTAC_F0;
	linkedItems[] =
	{
		V_SmershVest_01_radio_F,
		H_Booniehat_mgrn_hs,
		DefaultManLeaderLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_SmershVest_01_radio_F,
		H_Booniehat_mgrn_hs,
		DefaultManLeaderLinkedItems,
		NVGoggles_INDEP
	};
	weapons[] =
    {
        arifle_AUG_C_black_slcr_arco_F,
        hgun_G17_black_F,
        DefaultManWeapons,
		Laserdesignator_03
    };
    respawnWeapons[] =
    {
        arifle_AUG_C_black_slcr_arco_F,
        hgun_G17_black_F,
        DefaultManWeapons,
		Laserdesignator_03
    };
    magazines[] =
    {
        mag_6(30Rnd_556x45_AUG_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_2(O_IR_Grenade),
        Laserbatteries,
        SmokeShell,
		SMOKESHELLS_OPFOR,
        mag_2(Chemlight_red)
    };
    respawnMagazines[] =
    {
       	mag_6(30Rnd_556x45_AUG_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_2(O_IR_Grenade),
        Laserbatteries,
        SmokeShell,
		SMOKESHELLS_OPFOR,
        mag_2(Chemlight_red)
    };
	role = SpecialOperative;
	threat[] =
    {
        1.0,    // Soft
        0.1,    // Armor
        0.3     // Air
    };
};
class Atlas_O_VZ_Fighter_Pilot_F: Atlas_O_VZ_Helipilot_F
{
    author = $STR_A3_A_BranFlakes;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_VZ_Fighter_Pilot_F.jpg";
    scope = protected;
    scopeCurator = protected;
    displayName = $STR_A3_B_Fighter_Pilot_name;
	uniformClass = Atlas_U_O_W_PilotCoveralls;
    linkedItems[] =
    {
        H_PilotHelmetFighter_O,
		DefaultManLinkedItems
    };
    respawnLinkedItems[] =
    {
        H_PilotHelmetFighter_O,
		DefaultManLinkedItems
    };
    weapons[] =
    {
        hgun_Pistol_01_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        hgun_Pistol_01_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_2(10Rnd_9x21_Mag),
		SMOKESHELLS_OPFOR
    };
    respawnMagazines[] =
    {
        mag_2(10Rnd_9x21_Mag),
		SMOKESHELLS_OPFOR
    };
	camouflage = 2;
    cost = 165000;
    role = Crewman;
};