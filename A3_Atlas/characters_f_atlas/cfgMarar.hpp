class Atlas_B_M_Man_Base_F: B_Soldier_F
{
    scope = private;
    scopeCurator = private;
	faction = Atlas_BLU_M_F;
	genericNames = TakistaniMen;
	identityTypes[] =
	{
        LanguagePER_F,
        Head_TK,
        G_IRAN_default
	};
};
class Atlas_B_M_Soldier_base_F: Atlas_B_M_Man_Base_F
{
	uniformClass = Atlas_U_B_M_CombatUniform_des;
};
class Atlas_B_M_Soldier_F: Atlas_B_M_Soldier_Base_F
{
	author = $STR_A3_A_BranFlakes;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_M_Soldier_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_A3_CfgVehicles_B_Soldier_F0;
	linkedItems[] =
	{
		V_PlateCarrier2_snd,
		H_MK7_Marar_F,
		DefaultManLinkedItems,
		NVgoggles
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier2_snd,
		H_MK7_Marar_F,
		DefaultManLinkedItems,
		NVgoggles
	};
	weapons[] =
    {
        arifle_mk20_plain_arco_pointer_F,
        hgun_G17_black_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_mk20_plain_arco_pointer_F,
        hgun_G17_black_F,
        DefaultManWeapons
    };
    magazines[] =
    {
		mag_10(30Rnd_556x45_Stanag_red),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
		mag_10(30Rnd_556x45_Stanag_red),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
    };
	cost = 100000;
    role = Rifleman;
};
class Atlas_B_M_TL_F: Atlas_B_M_Soldier_Base_F
{
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_M_TL_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_Soldier_TL_F0;
    uniformClass = Atlas_U_B_M_CombatUniform_shortsleeve_des;
	linkedItems[] =
	{
		V_PlateCarrier2_snd,
		H_MK7_Marar_F,
		DefaultManLinkedItems,
		NVgoggles
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier2_snd,
		H_MK7_Marar_F,
		DefaultManLinkedItems,
		NVgoggles
	};
    weapons[] =
    {
        arifle_mk20_gl_plain_arco_pointer_F,
        hgun_G17_black_F,
        DefaultManWeapons,
        Binocular
    };
    respawnWeapons[] =
    {
        arifle_mk20_gl_plain_arco_pointer_F,
        hgun_G17_black_F,
        DefaultManWeapons,
        Binocular
    };
    magazines[] =
    {
        mag_6(30Rnd_556x45_Stanag_red),
        mag_2(17Rnd_9x21_Mag),
        mag_6(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade_East),
        SmokeShell,
        SMOKESHELLS_BLUFOR,
        1Rnd_Smoke_Grenade_shell,
		SMOKEGRENADES_BLUFOR
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_556x45_Stanag_red),
        mag_2(17Rnd_9x21_Mag),
        mag_6(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade_East),
        SmokeShell,
        SMOKESHELLS_BLUFOR,
        1Rnd_Smoke_Grenade_shell,
		SMOKEGRENADES_BLUFOR
    };
    cost = 450000;
};
class Atlas_B_M_GL_F: Atlas_B_M_Soldier_Base_F
{
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_M_GL_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_Soldier_GL_F0;
	linkedItems[] =
	{
		V_PlateCarrier2_snd,
		H_MK7_Marar_F,
		DefaultManLinkedItems,
		NVgoggles
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier2_snd,
		H_MK7_Marar_F,
		DefaultManLinkedItems,
		NVgoggles
	};
    weapons[] =
    {
        arifle_mk20_gl_plain_holo_pointer_F,
        hgun_G17_black_F,
        DefaultManWeapons,
        Binocular
    };
    respawnWeapons[] =
    {
        arifle_mk20_gl_plain_holo_pointer_F,
        hgun_G17_black_F,
        DefaultManWeapons,
        Binocular
    };
    magazines[] =
    {
        mag_6(30Rnd_556x45_Stanag_red),
        mag_2(17Rnd_9x21_Mag),
        mag_6(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade_East),
        SmokeShell,
        SMOKESHELLS_BLUFOR,
        1Rnd_Smoke_Grenade_shell,
		SMOKEGRENADES_BLUFOR
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_556x45_Stanag_red),
        mag_2(17Rnd_9x21_Mag),
        mag_6(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade_East),
        SmokeShell,
        SMOKESHELLS_BLUFOR,
        1Rnd_Smoke_Grenade_shell,
		SMOKEGRENADES_BLUFOR
    };
    cost = 450000;
};
class Atlas_B_M_AR_F: Atlas_B_M_Soldier_Base_F
{
	author = $STR_A3_A_BranFlakes;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_M_AR_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_Soldier_AR_F0;
	uniformClass = Atlas_U_B_M_CombatUniform_tee_des;
	linkedItems[] =
	{
		V_PlateCarrier2_snd,
		H_MK7_Marar_F,
		DefaultManLinkedItems,
		NVgoggles
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier2_snd,
		H_MK7_Marar_F,
		DefaultManLinkedItems,
		NVgoggles
	};
	weapons[] =
    {
        lmg_03_snd_holo,
        hgun_G17_black_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        lmg_03_snd_holo,
        hgun_G17_black_F,
        DefaultManWeapons
    };
    magazines[] =
    {
		mag_3(200Rnd_556x45_Box_Red_F),
		mag_2(17Rnd_9x21_Mag),
        HandGrenade,
        SmokeShell
    };
    respawnMagazines[] =
    {
		mag_3(200Rnd_556x45_Box_Red_F),
		mag_2(17Rnd_9x21_Mag),
        HandGrenade,
        SmokeShell
    };
	cost = 125000;
	threat[] =
    {
        1.0,    // Soft
        0.1,    // Armor
        0.3     // Air
    };
};
class Atlas_B_M_M_F: Atlas_B_M_Soldier_Base_F
{
    author = $STR_A3_A_BranFlakes;
    editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_M_M_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_B_Soldier_M_F0;
    linkedItems[] =
    {
        V_PlateCarrier2_snd,
        H_MK7_Marar_F,
        DefaultManLinkedItems,
        NVgoggles
    };
    respawnLinkedItems[] =
    {
        V_PlateCarrier2_snd,
        H_MK7_Marar_F,
        DefaultManLinkedItems,
        NVgoggles
    };
    weapons[] =
    {
        arifle_scar_SV_F,
        hgun_G17_black_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_scar_SV_F,
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
    role = Rifleman;
};
class Atlas_B_M_medic_F: Atlas_B_M_Soldier_Base_F
{
    author = $STR_A3_A_BranFlakes;
    editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_M_medic_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_B_medic_F0;
    backpack = B_AssaultPack_marar_medic;
    linkedItems[] =
    {
        V_PlateCarrier2_snd,
        H_MK7_Marar_F,
        DefaultManLinkedItems,
        NVgoggles
    };
    respawnLinkedItems[] =
    {
        V_PlateCarrier2_snd,
        H_MK7_Marar_F,
        DefaultManLinkedItems,
        NVgoggles
    };
    weapons[] =
    {
        arifle_mk20_plain_holo_pointer_F,
        hgun_G17_black_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_mk20_plain_holo_pointer_F,
        hgun_G17_black_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_10(30Rnd_556x45_Stanag_red),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        SmokeShell,
        SMOKESHELLS_MEDIC
    };
    respawnMagazines[] =
    {
        mag_10(30Rnd_556x45_Stanag_red),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        SmokeShell,
        SMOKESHELLS_MEDIC
    };
    cost = 300000;
    threat[] =
    {
        1.0,    // Soft
        0.1,    // Armor
        0.3     // Air
    };
};
class Atlas_B_M_Soldier_LAT_F: Atlas_B_M_Soldier_Base_F
{
	author = $STR_A3_A_BranFlakes;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_M_Soldier_LAT_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_Soldier_lat_F0;
	backpack = B_AssaultPack_marar_lat;
	linkedItems[] =
	{
		V_PlateCarrier2_snd,
		H_MK7_Marar_F,
		DefaultManLinkedItems,
		NVgoggles
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier2_snd,
		H_MK7_Marar_F,
		DefaultManLinkedItems,
		NVgoggles
	};
	weapons[] =
    {
        arifle_mk20_plain_holo_pointer_F,
        launch_MRAWS_sand_rail_F,
        hgun_G17_black_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_mk20_plain_holo_pointer_F,
        launch_MRAWS_sand_rail_F,
        hgun_G17_black_F,
        DefaultManWeapons
    };
    magazines[] =
    {
		mag_10(30Rnd_556x45_Stanag_red),
        mag_2(17Rnd_9x21_Mag),
        MRAWS_HEAT55_F,
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
		mag_10(30Rnd_556x45_Stanag_red),
        mag_2(17Rnd_9x21_Mag),
        MRAWS_HEAT55_F,
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
    };
	cost = 100000;
    role = Rifleman;
};
class Atlas_B_M_A_F: Atlas_B_M_Soldier_Base_F
{
	author = $STR_A3_A_BranFlakes;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_M_A_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_Soldier_A_F0;
	backpack = B_Carryall_CBR_ammo_F;
	linkedItems[] =
	{
		V_PlateCarrier2_snd,
		H_MK7_Marar_F,
		DefaultManLinkedItems,
		NVgoggles
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier2_snd,
		H_MK7_Marar_F,
		DefaultManLinkedItems,
		NVgoggles
	};
	weapons[] =
    {
        arifle_mk20_plain_holo_pointer_F,
        hgun_G17_black_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_mk20_plain_holo_pointer_F,
        hgun_G17_black_F,
        DefaultManWeapons
    };
    magazines[] =
    {
		mag_12(30Rnd_556x45_Stanag_red),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
		mag_12(30Rnd_556x45_Stanag_red),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
    };
	cost = 100000;
    role = Rifleman;
};
class Atlas_B_M_Helipilot_F: Atlas_B_M_Soldier_Base_F
{
	author = $STR_A3_A_BranFlakes;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_M_Helipilot_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_Helipilot_F0;
	uniformClass = Atlas_U_B_M_Tank_Marar_F;
	linkedItems[] =
	{
		V_TacVest_brn,
		H_PilotHelmetHeli_B,
		DefaultManLinkedItems,
		NVgoggles
	};
	respawnLinkedItems[] =
	{
		V_TacVest_brn,
		H_PilotHelmetHeli_B,
		DefaultManLinkedItems,
		NVgoggles
	};
	weapons[] =
    {
        SMG_04_blk_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        SMG_04_blk_F,
        DefaultManWeapons
    };
    magazines[] =
    {
		mag_4(40Rnd_460x30_Mag_F),
        SMOKESHELLS_BLUFOR
    };
    respawnMagazines[] =
    {
		mag_4(40Rnd_460x30_Mag_F),
        SMOKESHELLS_BLUFOR
    };
	camouflage = 2;
	cost = 160000;
	role = Crewman;
};
class Atlas_B_M_Helicrew_F: Atlas_B_M_Soldier_Base_F
{
	author = $STR_A3_A_BranFlakes;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_M_Helicrew_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_helicrew_F0;
	uniformClass = Atlas_U_B_M_Tank_Marar_F;
	linkedItems[] =
	{
		V_TacVest_brn,
		H_CrewHelmetHeli_B,
		DefaultManLinkedItems,
		NVgoggles
	};
	respawnLinkedItems[] =
	{
		V_TacVest_brn,
		H_CrewHelmetHeli_B,
		DefaultManLinkedItems,
		NVgoggles
	};
	weapons[] =
    {
        arifle_mk20_plain_holo_pointer_F,
        hgun_G17_black_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_mk20_plain_holo_pointer_F,
        hgun_G17_black_F,
        DefaultManWeapons
    };
    magazines[] =
    {
		mag_4(30Rnd_556x45_Stanag_red),
        mag_2(17Rnd_9x21_Mag),
        HandGrenade_East,
        SmokeShell
    };
    respawnMagazines[] =
    {
		mag_4(30Rnd_556x45_Stanag_red),
        mag_2(17Rnd_9x21_Mag),
        HandGrenade_East,
        SmokeShell
    };
	camouflage = 2;
	cost = 160000;
	role = Crewman;
};
class Atlas_B_M_Crew_F: Atlas_B_M_Soldier_Base_F
{
	author = $STR_A3_A_BranFlakes;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_M_Crew_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_crew_F0;
	uniformClass = Atlas_U_B_M_Tank_Marar_F;
	linkedItems[] =
	{
		V_TacVest_brn,
		H_HelmetCrew_B,
		DefaultManLinkedItems,
		NVgoggles
	};
	respawnLinkedItems[] =
	{
		V_TacVest_brn,
		H_HelmetCrew_B,
		DefaultManLinkedItems,
		NVgoggles
	};
	weapons[] =
    {
        arifle_mk20_plain_holo_pointer_F,
        hgun_G17_black_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_mk20_plain_holo_pointer_F,
        hgun_G17_black_F,
        DefaultManWeapons
    };
    magazines[] =
    {
		mag_4(30Rnd_556x45_Stanag_red),
        mag_2(17Rnd_9x21_Mag),
        HandGrenade_East,
        SmokeShell
    };
    respawnMagazines[] =
    {
		mag_4(30Rnd_556x45_Stanag_red),
        mag_2(17Rnd_9x21_Mag),
        HandGrenade_East,
        SmokeShell
    };
	camouflage = 2;
	cost = 160000;
	role = Crewman;
};
class Atlas_B_M_SL_F: Atlas_B_M_Soldier_Base_F
{
	author = $STR_A3_A_BranFlakes;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_M_SL_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_Soldier_SL_F0;
	uniformClass = Atlas_U_B_M_CombatUniform_shortsleeve_des;
	linkedItems[] =
	{
		V_PlateCarrier2_snd,
		H_MK7_Marar_F,
		DefaultManLinkedItems,
		NVgoggles
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier2_snd,
		H_MK7_Marar_F,
		DefaultManLinkedItems,
		NVgoggles
	};
	weapons[] =
    {
        arifle_mk20_plain_arco_pointer_F,
        hgun_G17_black_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_mk20_plain_arco_pointer_F,
        hgun_G17_black_F,
        DefaultManWeapons
    };
    magazines[] =
    {
		mag_10(30Rnd_556x45_Stanag_red),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
		mag_6(30Rnd_556x45_Stanag_red),
        mag_2(17Rnd_9x21_Mag),
        SmokeShell,
        SMOKESHELLS_BLUFOR,
        SMOKEGRENADES_BLUFOR
    };
    cost = 500000;
    camouflage = 1.4;
    icon = iconManLeader;
    role = Rifleman;
};
class Atlas_B_M_Officer_F: Atlas_B_M_Soldier_Base_F
{
	author = $STR_A3_A_BranFlakes;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_M_Officer_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_officer_F0;
	linkedItems[] =
	{
		V_Rangemaster_Belt_cbr,
		H_Beret_grn,
		DefaultManLinkedItems,
	};
	respawnLinkedItems[] =
	{
		V_Rangemaster_Belt_cbr,
		H_Beret_grn,
		DefaultManLinkedItems,
	};
	weapons[] =
    {
        arifle_mk20_plain_F,
        hgun_G17_black_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_mk20_plain_F,
        hgun_G17_black_F,
        DefaultManWeapons
    };
    magazines[] =
    {
		mag_4(30Rnd_556x45_Stanag_red),
        mag_2(17Rnd_9x21_Mag),
        SMOKESHELLS_BLUFOR
    };
    respawnMagazines[] =
    {
		mag_4(30Rnd_556x45_Stanag_red),
        mag_2(17Rnd_9x21_Mag),
        SMOKESHELLS_BLUFOR
    };
	cost = 100000;
    role = Rifleman;
};
class Atlas_B_M_RadioOperator_F: Atlas_B_M_Soldier_Base_F
{
    author = $STR_A3_A_BranFlakes;
    editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_M_RadioOperator_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_A3_C_B_W_RadioOperator_F0;
    uniformClass = Atlas_U_B_M_CombatUniform_shortsleeve_des;
    backpack = B_RadioBag_01_marar_F;
    linkedItems[] =
    {
        V_PlateCarrier2_snd,
        H_MK7_Marar_F,
        DefaultManLinkedItems,
        NVgoggles
    };
    respawnLinkedItems[] =
    {
        V_PlateCarrier2_snd,
        H_MK7_Marar_F,
        DefaultManLinkedItems,
        NVgoggles
    };
    weapons[] =
    {
        arifle_mk20_plain_holo_pointer_F,
        hgun_G17_black_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_mk20_plain_holo_pointer_F,
        hgun_G17_black_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_10(30Rnd_556x45_Stanag_red),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_10(30Rnd_556x45_Stanag_red),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
    };
    cost = 100000;
    role = Rifleman;
};
class Atlas_B_M_Engineer_F: Atlas_B_M_Soldier_Base_F
{
    author = $STR_A3_A_BranFlakes;
    editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_M_Engineer_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_B_engineer_F0;
    backpack = B_Carryall_CBREng_F;
    linkedItems[] =
    {
        V_PlateCarrier2_snd,
        H_MK7_Marar_F,
        DefaultManLinkedItems,
        NVgoggles
    };
    respawnLinkedItems[] =
    {
        V_PlateCarrier2_snd,
        H_MK7_Marar_F,
        DefaultManLinkedItems,
        NVgoggles
    };
    weapons[] =
    {
        arifle_mk20_plain_holo_pointer_F,
        hgun_G17_black_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_mk20_plain_holo_pointer_F,
        hgun_G17_black_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_10(30Rnd_556x45_Stanag_red),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_8(30Rnd_556x45_Stanag_red),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
    };
    engineer = true;
    cost = 90000;
    role = Crewman;
    camouflage = 1.6;
};
class Atlas_B_M_Soldier_unarmed_F: Atlas_B_M_Soldier_Base_F
{
    author = $STR_A3_A_BranFlakes;
    editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_M_Soldier_unarmed_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_A3_CfgVehicles_b_soldier_unarmed_f_displayName;
    weapons[] = {DefaultManWeapons};
	respawnWeapons[] = {DefaultManWeapons};
	magazines[] = {};
	respawnMagazines[] = {};
    linkedItems[] =
    {
        V_PlateCarrier2_snd,
        H_MK7_Marar_F,
        DefaultManLinkedItems,
        NVgoggles
    };
    respawnLinkedItems[] =
    {
        V_PlateCarrier2_snd,
        H_MK7_Marar_F,
        DefaultManLinkedItems,
        NVgoggles
    };
    role = Unarmed;
    threat[] =
    {
        0.1,    // Soft
        0.1,    // Armor
        0.1     // Air
    };
};
class Atlas_B_M_Soldier_CBRN_F: Atlas_B_M_Soldier_Base_F
{
	author = $STR_A3_A_BranFlakes;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_M_Soldier_CBRN_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_A3_C_B_W_Soldier_CBRN_F0;
	uniformClass = Atlas_U_B_M_CBRN_Suit_01_Marar_F;
	backpack = B_CombinationUnitRespirator_01_F;
	linkedItems[] =
	{
		V_PlateCarrier2_snd,
		H_MK7_Marar_F,
		G_AirPurifyingRespirator_01_F,
		DefaultManCbrnLinkedItems,
		NVgoggles
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier2_snd,
		H_MK7_Marar_F,
		G_AirPurifyingRespirator_01_F,
		DefaultManCbrnLinkedItems,
		NVgoggles
	};
	weapons[] =
    {
        arifle_mk20_plain_holo_pointer_F,
        hgun_G17_black_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_mk20_plain_holo_pointer_F,
        hgun_G17_black_F,
        DefaultManWeapons
    };
    magazines[] =
    {
		mag_10(30Rnd_556x45_Stanag_red),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
		mag_10(30Rnd_556x45_Stanag_red),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
    };
    cost = 93000;
	camouflage = 1.6;
    icon = iconManEngineer;
    picture = pictureRepair;
    role = Sapper;
	class EventHandlers: EventHandlers
	{
		class BIN_CBRN_INIT
		{
			init = "_this call bin_fnc_CBRNHoseInit;";
		};
	};
};
class Atlas_B_M_Fighter_Pilot_F: Atlas_B_M_Soldier_Base_F
{
    author = $STR_A3_A_BranFlakes;
    editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_M_Helipilot_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_A3_B_Fighter_Pilot_name;
    uniformClass = Atlas_U_B_M_Tank_Marar_F;
    linkedItems[] =
    {
        V_TacVest_brn,
        H_PilotHelmetFighter_I_E,
        DefaultManLinkedItems,
    };
    respawnLinkedItems[] =
    {
        V_TacVest_brn,
        H_PilotHelmetFighter_I_E,
        DefaultManLinkedItems,
    };
    weapons[] =
    {
        hgun_G17_black_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        hgun_G17_black_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_2(11Rnd_45ACP_Mag),
        SMOKESHELLS_BLUFOR
    };
    respawnMagazines[] =
    {
        mag_2(11Rnd_45ACP_Mag),
        SMOKESHELLS_BLUFOR
    };
    camouflage = 2;
    cost = 160000;
    role = Crewman;
};