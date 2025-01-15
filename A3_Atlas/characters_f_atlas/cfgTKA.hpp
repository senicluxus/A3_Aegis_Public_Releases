// Arma 3 Atlas
class Atlas_O_T_soldier_base_F: O_officer_F
{
	author = $STR_A3_A_AveryTheKitty;
	scope = private;
	modelSides[] = {TFriendly};
	side = TEast;
    faction = Atlas_OPF_T_F;
	icon = iconMan;
	role = Rifleman;
	camouflage = 1.6;
	uniformClass = Atlas_U_O_LightCombatFatigues_semiarid_F;
    identityTypes[] =
    {
        LanguagePER_F,
        Head_TK,
        G_IRAN_default
    };
    hiddenSelectionsTextures[] =
    {
        "\A3_Atlas\Characters_F_Atlas\Uniforms\Data\Officer_noinsignia_semiarid_CO.paa"
    };
    hiddenSelectionsMaterials[] =
    {
        "\A3\Characters_F\OPFOR\Data\Officer_noInsignia.rvmat"
    };
    items[] = {FirstAidKit};
	respawnItems[] = {FirstAidKit};
	linkedItems[] = {DefaultManLinkedItems};
	respawnLinkedItems[] = {DefaultManLinkedItems};
	weapons[] = {DefaultManWeapons};
	respawnWeapons[] = {DefaultManWeapons};
	magazines[] = {};
	respawnMagazines[] = {};
	class Wounds
    {
        mat[] =
        {
            "A3\Characters_F\OPFOR\Data\Officer_noInsignia.rvmat",
            "A3_Aegis\Characters_F_Aegis\Uniforms\Data\Officer_injury_noInsignia.rvmat",
            "A3_Aegis\Characters_F_Aegis\Uniforms\Data\Officer_injury_noInsignia.rvmat"
        };
        tex[] = {};
    };
};
class Atlas_O_T_soldier_A_F: Atlas_O_T_soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	class SpeechVariants
	{
		class Default
		{
			speechSingular[] = {veh_infantry_s};
			speechPlural[] = {veh_infantry_p};
		};
	};
	textSingular = $STR_A3_nameSound_veh_infantry_s;
	textPlural = $STR_A3_nameSound_veh_infantry_p;
	nameSound = veh_infantry_s;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_T_soldier_A_F.jpg";
	scope = public;
	displayName = $STR_B_Soldier_A_F0;
    items[] = {FirstAidKit};
	respawnItems[] = {FirstAidKit};
	linkedItems[] =
    {
        V_HarnessOSpec_tan,
        H_PASGT_basic_olive_F,
        G_shemag_white,
        DefaultManLinkedItems,
        NVGoggles_OPFOR
    };
	respawnLinkedItems[] =
    {
        V_HarnessOSpec_tan,
        H_PASGT_basic_olive_F,
        G_shemag_white,
        DefaultManLinkedItems,
        NVGoggles_OPFOR
    };
	weapons[] =
	{
		atlas_arifle_SCAR_L_FL_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		atlas_arifle_SCAR_L_FL_F,
		DefaultManWeapons
	};
    magazines[] =
    {
        mag_6(30Rnd_556x45_stanag_sand_green),
        mag_2(HandGrenade_Guer),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_556x45_stanag_sand_green),
        mag_2(HandGrenade_Guer),
        mag_2(SmokeShell)
    };
	backpack = B_Carryall_semiarid_Ammo_F;
};
class Atlas_O_T_soldier_AR_F: Atlas_O_T_soldier_base_F
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
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_T_soldier_AR_F.jpg";
	scope = public;
	displayName = $STR_B_soldier_AR_F0;
	icon = iconManMG;
	role = MachineGunner;
	cost = 220000;
	linkedItems[] =
    {
        V_HarnessOSpec_tan,
        Atlas_H_PASGT_Cover_O_SAHex_F,
        G_shemag_white,
        DefaultManLinkedItems,
        NVGoggles_OPFOR
    };
	respawnLinkedItems[] =
    {
        V_HarnessOSpec_tan,
        Atlas_H_PASGT_Cover_O_SAHex_F,
        G_shemag_white,
        DefaultManLinkedItems,
        NVGoggles_OPFOR
    };
	weapons[] =
	{
		atlas_LMG_03_Holo_blk_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		atlas_LMG_03_Holo_blk_F,
		DefaultManWeapons
	};
    magazines[] =
    {
        mag_4(200rnd_556x45_box_f),
        HandGrenade_Guer,
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_4(200rnd_556x45_box_f),
        HandGrenade_Guer,
        mag_2(SmokeShell)
    };
};
class Atlas_O_T_medic_F: Atlas_O_T_soldier_base_F
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
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_T_medic_F.jpg";
	scope = public;
	displayName = $STR_B_medic_F0;
	icon = iconManMedic;
	picture = pictureHeal;
	role = CombatLifeSaver;
	attendant = true;
	linkedItems[] =
    {
        V_HarnessOSpec_tan,
        Atlas_H_PASGT_Cover_O_SAHex_F,
        G_shemag_white,
        DefaultManLinkedItems,
        NVGoggles_OPFOR
    };
	respawnLinkedItems[] =
    {
        V_HarnessOSpec_tan,
        Atlas_H_PASGT_Cover_O_SAHex_F,
        G_shemag_white,
        DefaultManLinkedItems,
        NVGoggles_OPFOR
    };
	weapons[] =
	{
		atlas_arifle_SCAR_L_FL_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		atlas_arifle_SCAR_L_FL_F,
		DefaultManWeapons
	};
    magazines[] =
    {
        mag_6(30Rnd_556x45_stanag_sand_green),
        mag_2(HandGrenade_Guer),
        SmokeShell,
        SMOKESHELLS_MEDIC
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_556x45_stanag_sand_green),
        mag_2(HandGrenade_Guer),
        SmokeShell,
        SMOKESHELLS_MEDIC
    };
	backpack = B_FieldPack_semiarid_Medic_F;
};
class Atlas_O_T_crew_F: Atlas_O_T_soldier_base_F
{
    author = $STR_A3_A_AveryTheKitty;
    class SpeechVariants
    {
        class Default
        {
            speechSingular[] = {veh_infantry_s};
            speechPlural[] = {veh_infantry_p};
        };
    };
    textSingular = $STR_A3_nameSound_veh_infantry_s;
    textPlural = $STR_A3_nameSound_veh_infantry_p;
    nameSound = veh_infantry_s;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_T_crew_F.jpg";
    scope = public;
    displayName = $STR_B_crew_F0;
    role = Crewman;
    cost = 90000;
    engineer = true;
    linkedItems[] =
    {
        V_BandollierB_tan,
        H_Tank_black_F,
		DefaultManLinkedItems,
        NVGoggles_OPFOR
    };
    respawnLinkedItems[] =
    {
        V_BandollierB_tan,
        H_Tank_black_F,
		DefaultManLinkedItems,
        NVGoggles_OPFOR
    };
    weapons[] =
    {
        hgun_PDW2000_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        hgun_PDW2000_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_9x21_Mag),
        mag_2(HandGrenade_Guer),
        SmokeShell,
        SMOKESHELLS_OPFOR
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_9x21_Mag),
        mag_2(HandGrenade_Guer),
        SmokeShell,
        SMOKESHELLS_OPFOR
    };
};
class Atlas_O_T_engineer_F: Atlas_O_T_soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
    class SpeechVariants
    {
        class Default
        {
            speechSingular[] = {veh_infantry_s};
            speechPlural[] = {veh_infantry_p};
        };
    };
    textSingular = $STR_A3_nameSound_veh_infantry_s;
    textPlural = $STR_A3_nameSound_veh_infantry_p;
    nameSound = veh_infantry_s;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_T_engineer_F.jpg";
    scope = public;
	displayName = $STR_B_engineer_F0;
    role = Sapper;
    icon = iconManEngineer;
    picture = pictureRepair;
	cost = 220000;
	canDeactivateMines = true;
	engineer = true;
	detectSkill = 31;
	threat[] = {1,0.5,0.1};
	camouflage = 1.6;
    linkedItems[] =
    {
        V_HarnessOSpec_tan,
        H_PASGT_basic_olive_F,
        G_shemag_white,
		DefaultManLinkedItems,
        NVGoggles_OPFOR
    };
    respawnLinkedItems[] =
    {
        V_HarnessOSpec_tan,
        H_PASGT_basic_olive_F,
        G_shemag_white,
		DefaultManLinkedItems,
        NVGoggles_OPFOR
    };
    weapons[] =
    {
        atlas_arifle_SCAR_L_Short_FL_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        atlas_arifle_SCAR_L_Short_FL_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_556x45_stanag_sand_green),
        mag_2(HandGrenade_Guer),
        SmokeShell,
        SMOKESHELLS_OPFOR
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_556x45_stanag_sand_green),
        mag_2(HandGrenade_Guer),
        SmokeShell,
        SMOKESHELLS_OPFOR
    };
	backpack = B_FieldPack_semiarid_Eng_F;
};
class Atlas_O_T_soldier_GL_F: Atlas_O_T_soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
    class SpeechVariants
    {
        class Default
        {
            speechSingular[] = {veh_infantry_s};
            speechPlural[] = {veh_infantry_p};
        };
    };
    textSingular = $STR_A3_nameSound_veh_infantry_s;
    textPlural = $STR_A3_nameSound_veh_infantry_p;
    nameSound = veh_infantry_s;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_T_soldier_GL_F.jpg";
	scope = public;
	displayName = $STR_B_Soldier_GL_F0;
	role = Grenadier;
	cost = 200000;
    linkedItems[] =
    {
        V_HarnessOSpec_tan,
        Atlas_H_PASGT_Cover_O_SAHex_F,
        G_shemag_white,
		DefaultManLinkedItems,
        NVGoggles_OPFOR
    };
    respawnLinkedItems[] =
    {
        V_HarnessOSpec_tan,
        Atlas_H_PASGT_Cover_O_SAHex_F,
        G_shemag_white,
		DefaultManLinkedItems,
        NVGoggles_OPFOR
    };
    weapons[] =
    {
        atlas_arifle_SCAR_L_GL_ICO_FL_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        atlas_arifle_SCAR_L_GL_ICO_FL_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_556x45_stanag_sand_green),
        mag_4(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade_Guer),
        mag_2(SmokeShell),
        mag_2(1Rnd_Smoke_Grenade_shell)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_556x45_stanag_sand_green),
        mag_4(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade_Guer),
        mag_2(SmokeShell),
        mag_2(1Rnd_Smoke_Grenade_shell)
    };
};
class Atlas_O_T_helipilot_F: O_helipilot_F
{
    author = $STR_A3_A_AveryTheKitty;
    class SpeechVariants
    {
        class Default
        {
            speechSingular[] = {veh_infantry_pilot_s};
            speechPlural[] = {veh_infantry_pilot_p};
        };
    };
    textSingular = $STR_A3_nameSound_veh_infantry_pilot_s;
    textPlural = $STR_A3_nameSound_veh_infantry_pilot_p;
    nameSound = veh_infantry_pilot_s;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_T_helipilot_F.jpg";
    scope = public;
    identityTypes[] =
    {
        LanguagePER_F,
        Head_TK,
        G_IRAN_default
    };
    faction = Atlas_OPF_T_F;
	displayName = $STR_B_Helipilot_F0;
	role = Crewman;
	cost = 160000;
	camouflage = 2;
	uniformClass = Atlas_U_O_officer_noInsignia_semiarid_F;
    linkedItems[] =
    {
        V_TacVest_tan,
        H_PilotHelmetHeli_O,
		DefaultManLinkedItems,
        NVGoggles_OPFOR
    };
    respawnLinkedItems[] =
    {
        V_TacVest_tan,
        H_PilotHelmetHeli_O,
		DefaultManLinkedItems,
        NVGoggles_OPFOR
    };
    weapons[] =
    {
        hgun_PDW2000_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        hgun_PDW2000_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_4(30Rnd_9x21_Mag),
        SMOKESHELLS_OPFOR
    };
    respawnMagazines[] =
    {
        mag_4(30Rnd_9x21_Mag),
        SMOKESHELLS_OPFOR
    };
};
class Atlas_O_T_helicrew_F: Atlas_O_T_helipilot_F
{
    author = $STR_A3_A_AveryTheKitty;
    class SpeechVariants
    {
        class Default
        {
            speechSingular[] = {veh_infantry_pilot_s};
            speechPlural[] = {veh_infantry_pilot_p};
        };
    };
    textSingular = $STR_A3_nameSound_veh_infantry_pilot_s;
    textPlural = $STR_A3_nameSound_veh_infantry_pilot_p;
    nameSound = veh_infantry_pilot_s;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_T_helicrew_F.jpg";
    scope = public;
	displayName = $STR_B_helicrew_F0;
	role = Crewman;
	cost = 80000;
    linkedItems[] =
    {
        V_TacVest_tan,
        H_CrewHelmetHeli_O,
		DefaultManLinkedItems,
        NVGoggles_OPFOR
    };
    respawnLinkedItems[] =
    {
        V_TacVest_tan,
        H_CrewHelmetHeli_O,
		DefaultManLinkedItems,
        NVGoggles_OPFOR
    };
    weapons[] =
    {
        arifle_SCAR_L_Short_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_SCAR_L_Short_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_4(30Rnd_556x45_stanag_sand_green),
        SMOKESHELLS_OPFOR
    };
    respawnMagazines[] =
    {
        mag_4(30Rnd_556x45_stanag_sand_green),
        SMOKESHELLS_OPFOR
    };
};
class Atlas_O_T_soldier_M_F: Atlas_O_T_soldier_base_F
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
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_T_soldier_M_F.jpg";
	scope = public;
	displayName = $STR_B_Soldier_M_F0;
	role = Marksman;
	cost = 250000;
	threat[] = {0.8,0.3,0.3};
    linkedItems[] =
    {
        V_HarnessOSpec_tan,
        H_PASGT_basic_olive_F,
        G_shemag_white,
		DefaultManLinkedItems,
        NVGoggles_OPFOR
    };
    respawnLinkedItems[] =
    {
        V_HarnessOSpec_tan,
        H_PASGT_basic_olive_F,
        G_shemag_white,
		DefaultManLinkedItems,
        NVGoggles_OPFOR
    };
    weapons[] =
    {
        atlas_arifle_SCAR_ARCO_BI_F,
        DefaultManWeapons,
        Rangefinder
    };
    respawnWeapons[] =
    {
        atlas_arifle_SCAR_ARCO_BI_F,
        DefaultManWeapons,
        Rangefinder
    };
    magazines[] =
    {
        mag_8(20Rnd_762x51_Mag),
        mag_2(HandGrenade_Guer),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_8(20Rnd_762x51_Mag),
        mag_2(HandGrenade_Guer),
        mag_2(SmokeShell)
    };
};
class Atlas_O_T_soldier_AA_F: Atlas_O_T_soldier_base_F
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
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_T_soldier_AA_F.jpg";
	scope = public;
	displayName = $STR_B_Soldier_AA_F0;
	icon = iconManAT;
	role = MissileSpecialist;
	cost = 130000;
	threat[] = {0.8,0.1,1.0};
	secondaryAmmoCoef = 0.5;
    linkedItems[] =
    {
        V_HarnessOSpec_tan,
        H_PASGT_basic_olive_F,
        G_shemag_white,
		DefaultManLinkedItems,
        NVGoggles_OPFOR
    };
    respawnLinkedItems[] =
    {
        V_HarnessOSpec_tan,
        H_PASGT_basic_olive_F,
        G_shemag_white,
		DefaultManLinkedItems,
        NVGoggles_OPFOR
    };
	weapons[] =
    {
        atlas_arifle_SCAR_L_Short_FL_F,
        launch_O_Titan_F,
        DefaultManWeapons
    };
	respawnWeapons[] =
    {
        atlas_arifle_SCAR_L_Short_FL_F,
        launch_O_Titan_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_556x45_stanag_sand_green),
        Titan_AA,
        mag_2(HandGrenade_Guer),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_556x45_stanag_sand_green),
        Titan_AA,
        mag_2(HandGrenade_Guer),
        mag_2(SmokeShell)
    };
	backpack = B_FieldPack_semiarid_AA_F;
};
class Atlas_O_T_soldier_AT_F: Atlas_O_T_soldier_base_F
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
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_T_soldier_AT_F.jpg";
	scope = public;
	displayName = $STR_B_Soldier_AT_F0;
	icon = iconManAT;
	role = MissileSpecialist;
	cost = 130000;
	threat[] = {0.8,0.8,0.3};
	secondaryAmmoCoef = 0.5;
    linkedItems[] =
    {
        V_HarnessOSpec_tan,
        Atlas_H_PASGT_Cover_O_SAHex_F,
        G_shemag_white,
		DefaultManLinkedItems,
        NVGoggles_OPFOR
    };
    respawnLinkedItems[] =
    {
        V_HarnessOSpec_tan,
        Atlas_H_PASGT_Cover_O_SAHex_F,
        G_shemag_white,
		DefaultManLinkedItems,
        NVGoggles_OPFOR
    };
	weapons[] =
    {
        atlas_arifle_SCAR_L_Short_FL_F,
        launch_O_Titan_short_F,
        DefaultManWeapons
    };
	respawnWeapons[] =
    {
        atlas_arifle_SCAR_L_Short_FL_F,
        launch_O_Titan_short_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_556x45_stanag_sand_green),
        Titan_AT,
        mag_2(HandGrenade_Guer),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_556x45_stanag_sand_green),
        Titan_AT,
        mag_2(HandGrenade_Guer),
        mag_2(SmokeShell)
    };
	backpack = B_FieldPack_semiarid_AT_F;
};
class Atlas_O_T_officer_F: Atlas_O_T_soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_T_officer_F.jpg";
	scope = public;
	displayName = $STR_B_officer_F0;
    uniformClass = Atlas_U_O_officer_noInsignia_semiarid_F;
	icon = iconManOfficer;
	cost = 250000;
    linkedItems[] =
    {
        V_Rangemaster_belt_tan,
        H_Beret_CSAT_01_F,
		DefaultManLinkedItems
    };
    respawnLinkedItems[] =
    {
        V_Rangemaster_belt_tan,
        H_Beret_CSAT_01_F,
		DefaultManLinkedItems
    };
    weapons[] =
    {
        hgun_PDW2000_F,
        hgun_Pistol_01_F,
        DefaultManWeapons,
        Binocular
    };
    respawnWeapons[] =
    {
        hgun_PDW2000_F,
        hgun_Pistol_01_F,
        DefaultManWeapons,
        Binocular
    };
    magazines[] =
    {
        mag_4(30Rnd_9x21_Mag),
        mag_2(10Rnd_9x21_Mag),
        SMOKESHELLS_OPFOR
    };
    respawnMagazines[] =
    {
        mag_4(30Rnd_9x21_Mag),
        mag_2(10Rnd_9x21_Mag),
        SMOKESHELLS_OPFOR
    };
};
class Atlas_O_T_soldier_F: Atlas_O_T_soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
    class SpeechVariants
    {
        class Default
        {
            speechSingular[] = {veh_infantry_s};
            speechPlural[] = {veh_infantry_p};
        };
    };
    textSingular = $STR_A3_nameSound_veh_infantry_s;
    textPlural = $STR_A3_nameSound_veh_infantry_p;
    nameSound = veh_infantry_s;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_T_soldier_F.jpg";
	scope = public;
	displayName = $STR_A3_CfgVehicles_B_Soldier_F0;
    linkedItems[] =
    {
        V_HarnessOSpec_tan,
        Atlas_H_PASGT_Cover_O_SAHex_F,
        G_shemag_white,
		DefaultManLinkedItems,
        NVGoggles_OPFOR
    };
    respawnLinkedItems[] =
    {
        V_HarnessOSpec_tan,
        Atlas_H_PASGT_Cover_O_SAHex_F,
        G_shemag_white,
		DefaultManLinkedItems,
        NVGoggles_OPFOR
    };
    weapons[] =
    {
        atlas_arifle_SCAR_L_ICO_FL_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        atlas_arifle_SCAR_L_ICO_FL_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_10(30Rnd_556x45_stanag_sand_green),
        mag_2(HandGrenade_Guer),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_10(30Rnd_556x45_stanag_sand_green),
        mag_2(HandGrenade_Guer),
        mag_2(SmokeShell)
    };
};
class Atlas_O_T_soldier_LAT_F: Atlas_O_T_soldier_base_F
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
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_T_soldier_LAT_F.jpg";
	scope = public;
	displayName = $STR_B_Soldier_LAT_F0;
	icon = iconManAT;
	role = MissileSpecialist;
	cost = 130000;
	threat[] = {0.8,0.8,0.3};
	secondaryAmmoCoef = 0.5;
    linkedItems[] =
    {
        V_HarnessOSpec_tan,
        Atlas_H_PASGT_Cover_O_SAHex_F,
        G_shemag_white,
		DefaultManLinkedItems,
        NVGoggles_OPFOR
    };
    respawnLinkedItems[] =
    {
        V_HarnessOSpec_tan,
        Atlas_H_PASGT_Cover_O_SAHex_F,
        G_shemag_white,
		DefaultManLinkedItems,
        NVGoggles_OPFOR
    };
    weapons[] =
    {
        atlas_arifle_SCAR_L_ICO_FL_F,
        launch_RPG32_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        atlas_arifle_SCAR_L_ICO_FL_F,
        launch_RPG32_F,
        DefaultManWeapons
    };
	    magazines[] =
    {
        mag_6(30Rnd_556x45_stanag_sand_green),
        RPG32_F,
        mag_2(HandGrenade_Guer),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_556x45_stanag_sand_green),
        RPG32_F,
        mag_2(HandGrenade_Guer),
        mag_2(SmokeShell)
    };
	backpack = B_FieldPack_semiarid_LAT_F;
};
class Atlas_O_T_soldier_SL_F: Atlas_O_T_soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
    class SpeechVariants
    {
        class Default
        {
            speechSingular[] = {veh_infantry_s};
            speechPlural[] = {veh_infantry_p};
        };
    };
    textSingular = $STR_A3_nameSound_veh_infantry_s;
    textPlural = $STR_A3_nameSound_veh_infantry_p;
    nameSound = veh_infantry_s;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_T_soldier_SL_F.jpg";
	scope = public;
	displayName = $STR_B_Soldier_SL_F0;
	icon = iconManLeader;
	cost = 250000;
   linkedItems[] =
    {
        V_HarnessOSpec_tan,
        Atlas_H_HelmetCCH_Cover_semiarid_F,
        G_shemag_white,
		DefaultManLinkedItems,
        NVGoggles_OPFOR
    };
    respawnLinkedItems[] =
    {
        V_HarnessOSpec_tan,
        Atlas_H_HelmetCCH_Cover_semiarid_F,
        G_shemag_white,
		DefaultManLinkedItems,
        NVGoggles_OPFOR
    };
    weapons[] =
    {
        atlas_arifle_SCAR_L_ARCO_FL_F,
        hgun_Pistol_01_F,
        DefaultManWeapons,
        Binocular
    };
    respawnWeapons[] =
    {
        atlas_arifle_SCAR_L_ARCO_FL_F,
        hgun_Pistol_01_F,
        DefaultManWeapons,
        Binocular
    };
    magazines[] =
    {
        mag_4(30Rnd_556x45_stanag_sand_green),
        mag_2(30Rnd_556x45_stanag_sand_tracer_green),
        mag_2(10Rnd_9x21_Mag),
        mag_2(HandGrenade_Guer),
        SmokeShell,
        SMOKESHELLS_OPFOR
    };
    respawnMagazines[] =
    {
        mag_4(30Rnd_556x45_stanag_sand_green),
        mag_2(30Rnd_556x45_stanag_sand_tracer_green),
        mag_2(10Rnd_9x21_Mag),
        mag_2(HandGrenade_Guer),
        SmokeShell,
        SMOKESHELLS_OPFOR
    };
};
class Atlas_O_T_soldier_TL_F: Atlas_O_T_soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
    class SpeechVariants
    {
        class Default
        {
            speechSingular[] = {veh_infantry_s};
            speechPlural[] = {veh_infantry_p};
        };
    };
    textSingular = $STR_A3_nameSound_veh_infantry_s;
    textPlural = $STR_A3_nameSound_veh_infantry_p;
    nameSound = veh_infantry_s;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_T_soldier_TL_F.jpg";
	scope = public;
	displayName = $STR_B_Soldier_TL_F0;
	icon = iconManLeader;
	role = Grenadier;
	cost = 250000;
    linkedItems[] =
    {
        V_HarnessOSpec_tan,
        Atlas_H_HelmetCCH_Cover_semiarid_F,
        G_shemag_white,
		DefaultManLinkedItems,
        NVGoggles_OPFOR
    };
    respawnLinkedItems[] =
    {
        V_HarnessOSpec_tan,
        Atlas_H_HelmetCCH_Cover_semiarid_F,
        G_shemag_white,
		DefaultManLinkedItems,
        NVGoggles_OPFOR
    };
    weapons[] =
    {
        atlas_arifle_SCAR_L_GL_ARCO_FL_F,
        hgun_Pistol_01_F,
        DefaultManWeapons,
        Binocular
    };
    respawnWeapons[] =
    {
        atlas_arifle_SCAR_L_GL_ARCO_FL_F,
        hgun_Pistol_01_F,
        DefaultManWeapons,
        Binocular
    };
    magazines[] =
    {
        mag_4(30Rnd_556x45_stanag_sand_green),
        mag_2(30Rnd_556x45_stanag_sand_tracer_green),
        mag_2(10Rnd_9x21_Mag),
        mag_4(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade_Guer),
        SmokeShell,
        SMOKESHELLS_OPFOR,
        1Rnd_Smoke_Grenade_shell,
		SMOKEGRENADES_OPFOR
    };
    respawnMagazines[] =
    {
        mag_4(30Rnd_556x45_stanag_sand_green),
        mag_2(30Rnd_556x45_stanag_sand_tracer_green),
        mag_2(10Rnd_9x21_Mag),
        mag_4(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade_Guer),
        SmokeShell,
        SMOKESHELLS_OPFOR,
        1Rnd_Smoke_Grenade_shell,
		SMOKEGRENADES_OPFOR
    };
};
class Atlas_O_T_Fighter_Pilot_F: Atlas_O_T_soldier_base_F
{
    author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_T_Fighter_Pilot_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_A3_B_Fighter_Pilot_name;
    role = Crewman;
    cost = 165000;
	camouflage = 2;
	uniformClass = U_O_PilotCoveralls;
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
};
class Atlas_O_T_soldier_universal_F: Atlas_O_T_soldier_F
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
class Atlas_O_T_RadioOperator_F: Atlas_O_T_soldier_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_T_RadioOperator_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_A3_C_B_W_RadioOperator_F0;
	linkedItems[] =
	{
		V_HarnessOSpec_tan,
		Atlas_H_PASGT_Cover_O_SAHex_F,
        G_shemag_white,
		DefaultManLinkedItems,
        NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		V_HarnessOSpec_tan,
		Atlas_H_PASGT_Cover_O_SAHex_F,
        G_shemag_white,
		DefaultManLinkedItems,
        NVGoggles_OPFOR
	};
	backpack = B_RadioBag_01_semiarid_F;
	weapons[] =
    {
        atlas_arifle_SCAR_L_FL_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        atlas_arifle_SCAR_L_FL_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_10(30Rnd_556x45_stanag_sand_green),
        mag_2(HandGrenade_Guer),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_10(30Rnd_556x45_stanag_sand_green),
        mag_2(HandGrenade_Guer),
        mag_2(SmokeShell)
    };
    role = RadioOperator;
};

/* Men (Conscripts) */

class Atlas_O_T_soldier_SL_conscript_F: Atlas_O_T_soldier_SL_F
{
	author = $STR_A3_A_Heliotrope;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_T_soldier_SL_conscript_F.jpg";
	scope = public;
    uniformClass = Atlas_U_O_Afghanka_01_semiarid_F;
    linkedItems[] =
    {
        V_HarnessO_tan,
        lxWS_H_ssh40_green,
        G_shemag_white,
		DefaultManLinkedItems
    };
    respawnLinkedItems[] =
    {
        V_HarnessO_tan,
        lxWS_H_ssh40_green,
        G_shemag_white,
		DefaultManLinkedItems
    };
    weapons[] =
    {
        arifle_SLR_V_lxWS,
        hgun_Pistol_01_F,
        DefaultManWeapons,
        Binocular
    };
    respawnWeapons[] =
    {
        arifle_SLR_V_lxWS,
        hgun_Pistol_01_F,
        DefaultManWeapons,
        Binocular
    };
    magazines[] =
    {
        mag_8(20Rnd_762x51_slr_lxWS),
        mag_2(10Rnd_9x21_Mag),
        mag_2(HandGrenade_Guer),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_8(20Rnd_762x51_slr_lxWS),
        mag_2(10Rnd_9x21_Mag),
        mag_2(HandGrenade_Guer),
        mag_2(SmokeShell)
    };
    editorSubcategory = EdSubcat_Personnel_Conscripts;
};

class Atlas_O_T_soldier_TL_conscript_F: Atlas_O_T_soldier_TL_F
{
	author = $STR_A3_A_Heliotrope;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_T_soldier_TL_conscript_F.jpg";
	scope = public;
    uniformClass = Atlas_U_O_Afghanka_02_semiarid_F;
    linkedItems[] =
    {
        V_HarnessO_tan,
        lxWS_H_ssh40_green,
        G_shemag_white,
		DefaultManLinkedItems
    };
    respawnLinkedItems[] =
    {
        V_HarnessO_tan,
        lxWS_H_ssh40_green,
        G_shemag_white,
		DefaultManLinkedItems
    };
    weapons[] =
    {
        arifle_SLR_V_GL_lxWS,
        hgun_Pistol_01_F,
        DefaultManWeapons,
        Binocular
    };
    respawnWeapons[] =
    {
        arifle_SLR_V_GL_lxWS,
        hgun_Pistol_01_F,
        DefaultManWeapons,
        Binocular
    };
    magazines[] =
    {
        mag_6(20Rnd_762x51_slr_lxWS),
        mag_2(10Rnd_9x21_Mag),
        mag_2(HandGrenade_Guer),
        SmokeShell,
        mag_3(1Rnd_40mm_HE_lxWS),
        mag_2(1Rnd_58mm_AT_lxWS),
        1Rnd_50mm_Smoke_lxWS
    };
    respawnMagazines[] =
    {
        mag_6(20Rnd_762x51_slr_lxWS),
        mag_2(10Rnd_9x21_Mag),
        mag_2(HandGrenade_Guer),
        mag_3(1Rnd_40mm_HE_lxWS),
        mag_2(1Rnd_58mm_AT_lxWS),
        1Rnd_50mm_Smoke_lxWS
    };
    editorSubcategory = EdSubcat_Personnel_Conscripts;
};

class Atlas_O_T_medic_conscript_F: Atlas_O_T_medic_F
{
	author = $STR_A3_A_Heliotrope;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_T_medic_conscript_F.jpg";
    uniformClass = Atlas_U_O_Afghanka_02_semiarid_F;
	linkedItems[] =
    {
        V_HarnessO_tan,
        lxWS_H_ssh40_green,
        G_shemag_white,
        DefaultManLinkedItems
    };
	respawnLinkedItems[] =
    {
        V_HarnessO_tan,
        lxWS_H_ssh40_green,
        G_shemag_white,
        DefaultManLinkedItems
    };
	weapons[] =
	{
		Aegis_arifle_AKM74_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		Aegis_arifle_AKM74_F,
		DefaultManWeapons
	};
    magazines[] =
    {
        mag_6(30Rnd_545x39_black_Mag_F),
        mag_2(HandGrenade_Guer),
        mag_2(SmokeShell),
        SMOKESHELLS_MEDIC
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_545x39_black_Mag_F),
        mag_2(HandGrenade_Guer),
        mag_2(SmokeShell),
        SMOKESHELLS_MEDIC
    };
    editorSubcategory = EdSubcat_Personnel_Conscripts;
	backpack = B_FieldPack_semiarid_Medic_F;
};
class Atlas_O_T_soldier_1_conscript_F: Atlas_O_T_soldier_F
{
	author = $STR_A3_A_Heliotrope;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_T_soldier_1_conscript_F.jpg";
	scope = public;
	displayName = "Rifleman (AK-74)";
    uniformClass = Atlas_U_O_Afghanka_01_semiarid_F;
    linkedItems[] =
    {
        V_HarnessO_tan,
        lxWS_H_ssh40_green,
        G_shemag_white,
        DefaultManLinkedItems
    };
	respawnLinkedItems[] =
    {
        V_HarnessO_tan,
        lxWS_H_ssh40_green,
        G_shemag_white,
        DefaultManLinkedItems
    };
    weapons[] =
    {
        Aegis_arifle_AKM74_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        Aegis_arifle_AKM74_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_10(30Rnd_545x39_black_Mag_F),
        mag_2(HandGrenade_Guer)
    };
    respawnMagazines[] =
    {
        mag_10(30Rnd_545x39_black_Mag_F),
        mag_2(HandGrenade_Guer)
    };
    editorSubcategory = EdSubcat_Personnel_Conscripts;
};
class Atlas_O_T_soldier_2_conscript_F: Atlas_O_T_soldier_F
{
	author = $STR_A3_A_Heliotrope;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_T_soldier_2_conscript_F.jpg";
	scope = public;
	displayName = "Rifleman (SLR)";
    uniformClass = Atlas_U_O_Afghanka_02_semiarid_F;
    linkedItems[] =
    {
        V_HarnessO_tan,
        lxWS_H_ssh40_green,
        G_shemag_white,
        DefaultManLinkedItems
    };
	respawnLinkedItems[] =
    {
        V_HarnessO_tan,
        lxWS_H_ssh40_green,
        G_shemag_white,
        DefaultManLinkedItems
    };
    weapons[] =
    {
        arifle_SLR_V_lxWS,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_SLR_V_lxWS,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_8(20Rnd_762x51_slr_lxWS),
        mag_2(HandGrenade_Guer)
    };
    respawnMagazines[] =
    {
        mag_8(20Rnd_762x51_slr_lxWS),
        mag_2(HandGrenade_Guer)
    };
    editorSubcategory = EdSubcat_Personnel_Conscripts;
};
class Atlas_O_T_soldier_LAT_conscript_F: Atlas_O_T_soldier_LAT_F
{
	author = $STR_A3_A_Heliotrope;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_T_soldier_LAT_conscript_F.jpg";
	scope = public;
    uniformClass = Atlas_U_O_Afghanka_01_semiarid_F;
    linkedItems[] =
    {
        V_HarnessO_tan,
        lxWS_H_ssh40_green,
        G_shemag_white,
        DefaultManLinkedItems
    };
	respawnLinkedItems[] =
    {
        V_HarnessO_tan,
        lxWS_H_ssh40_green,
        G_shemag_white,
        DefaultManLinkedItems
    };
	weapons[] =
    {
        Aegis_arifle_AKM74_F,
        launch_RPG7_F,
        DefaultManWeapons
    };
	respawnWeapons[] =
    {
        Aegis_arifle_AKM74_F,
        launch_RPG7_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_545x39_black_Mag_F),
        RPG7_F,
        mag_2(HandGrenade_Guer)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_545x39_black_Mag_F),
        RPG7_F,
        mag_2(HandGrenade_Guer)
    };
    editorSubcategory = EdSubcat_Personnel_Conscripts;
	backpack = B_FieldPack_semiarid_LAT_conscript;
};
class Atlas_O_T_soldier_M_conscript_F: Atlas_O_T_soldier_M_F
{
	author = $STR_A3_A_Heliotrope;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_T_soldier_M_conscript_F.jpg";
    uniformClass = Atlas_U_O_Afghanka_01_semiarid_F;
    linkedItems[] =
    {
        V_HarnessO_tan,
        lxWS_H_ssh40_green,
        G_shemag_white,
        DefaultManLinkedItems
    };
	respawnLinkedItems[] =
    {
        V_HarnessO_tan,
        lxWS_H_ssh40_green,
        G_shemag_white,
        DefaultManLinkedItems
    };
    weapons[] =
    {
        atlas_arifle_SLR_V_KHS_old_lxWS,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        atlas_arifle_SLR_V_KHS_old_lxWS,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_8(20Rnd_762x51_slr_lxWS),
        mag_2(HandGrenade_Guer)
    };
    respawnMagazines[] =
    {
        mag_8(20Rnd_762x51_slr_lxWS),
        mag_2(HandGrenade_Guer)
    };
    editorSubcategory = EdSubcat_Personnel_Conscripts;
};
class Atlas_O_T_soldier_AR_conscript_F: Atlas_O_T_soldier_base_F
{
	author = $STR_A3_A_Heliotrope;
    scope = public;
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
    displayName = $STR_B_soldier_AR_F0;
    uniformClass = Atlas_U_O_Afghanka_02_semiarid_F;
	icon = iconManMG;
	role = MachineGunner;
	cost = 220000;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_T_soldier_AR_conscript_F.jpg";
    linkedItems[] =
    {
        V_HarnessO_tan,
        lxWS_H_ssh40_green,
        G_shemag_white,
        DefaultManLinkedItems
    };
	respawnLinkedItems[] =
    {
        V_HarnessO_tan,
        lxWS_H_ssh40_green,
        G_shemag_white,
        DefaultManLinkedItems
    };
	weapons[] =
	{
		Aegis_arifle_RPK74M_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		Aegis_arifle_RPK74M_F,
		DefaultManWeapons
	};
    magazines[] =
    {
        mag_8(Aegis_45Rnd_545x39_Mag_Green_F)
    };
    respawnMagazines[] =
    {
        mag_8(Aegis_45Rnd_545x39_Mag_Green_F)
    };
    editorSubcategory = EdSubcat_Personnel_Conscripts;
};
class Atlas_O_T_RadioOperator_conscript_F: Atlas_O_T_RadioOperator_F
{
    author = $STR_A3_A_Heliotrope;
    editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_T_RadioOperator_conscript_F.jpg";
    uniformClass = Atlas_U_O_Afghanka_01_semiarid_F;
    linkedItems[] =
    {
        V_HarnessO_tan,
        lxWS_H_ssh40_green,
        G_headset_lxWS,
        DefaultManLinkedItems
    };
	respawnLinkedItems[] =
    {
        V_HarnessO_tan,
        lxWS_H_ssh40_green,
        G_headset_lxWS,
        DefaultManLinkedItems
    };
    weapons[] =
    {
        Aegis_arifle_AKM74_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        Aegis_arifle_AKM74_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_8(30Rnd_545x39_black_Mag_F),
        mag_2(HandGrenade_Guer)
    };
    respawnMagazines[] =
    {
        mag_8(30Rnd_545x39_black_Mag_F),
        mag_2(HandGrenade_Guer)
    };
    editorSubcategory = EdSubcat_Personnel_Conscripts;
};
class Atlas_O_T_Soldier_GL_Conscript_F: Atlas_O_T_soldier_GL_F
{
    author = $STR_A3_A_Heliotrope;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_T_Soldier_GL_Conscript_F.jpg";
	scope = public;
    uniformClass = Atlas_U_O_Afghanka_02_semiarid_F;
    linkedItems[] =
    {
        V_HarnessO_tan,
        lxWS_H_ssh40_green,
        G_shemag_white,
		DefaultManLinkedItems
    };
    respawnLinkedItems[] =
    {
        V_HarnessO_tan,
        lxWS_H_ssh40_green,
        G_shemag_white,
		DefaultManLinkedItems
    };
    weapons[] =
    {
        arifle_SLR_V_GL_lxWS,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_SLR_V_GL_lxWS,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(20Rnd_762x51_slr_lxWS),
        mag_2(HandGrenade_Guer),
        mag_3(1Rnd_40mm_HE_lxWS),
        mag_2(1Rnd_58mm_AT_lxWS),
        1Rnd_50mm_Smoke_lxWS
    };
    respawnMagazines[] =
    {
        mag_6(20Rnd_762x51_slr_lxWS),
        mag_2(HandGrenade_Guer),
        mag_3(1Rnd_40mm_HE_lxWS),
        mag_2(1Rnd_58mm_AT_lxWS),
        1Rnd_50mm_Smoke_lxWS
    };
    editorSubcategory = EdSubcat_Personnel_Conscripts;
};