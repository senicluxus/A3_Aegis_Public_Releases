/* NATO (US) Joint Special Operations Command*/
/* Base classes */
class B_Soldier_recon_base: B_Soldier_base_F{};
class Atlas_B_Soldier_JSOC_base: B_Soldier_recon_base
{
    scope = private;
    scopeCurator = private;
    class SpeechVariants
    {
        class Default
        {
            speechSingular[] = {veh_infantry_SF_s};
            speechPlural[] = {veh_infantry_SF_p};
        };
    };
    textSingular = $STR_A3_nameSound_veh_infantry_SF_s;
    textPlural = $STR_A3_nameSound_veh_infantry_SF_p;
    nameSound = veh_infantry_SF_s;
    items[] =
	{
		FirstAidKit,
		optic_NVS
	};
	respawnItems[] =
	{
		FirstAidKit,
		optic_NVS
	};
	vehicleClass = MenRecon;
	editorSubcategory = EdSubcat_Personnel_JSOC;
    icon = iconManRecon;
	role = Rifleman;
	camouflage = 0.6;
	detectSkill = 18;
    uniformClass = Atlas_U_B_JSOC_StealthUniform_F;
    class EventHandlers: EventHandlers
	{
		init = "[_this select 0,'NATO_JSOC_Low'] call bis_fnc_setUnitInsignia;";
	};
	class AttributeValues
	{
			unitInsignia = "NATO_JSOC_Low";
	};
};
class Atlas_B_T_Soldier_JSOC_base: Atlas_B_Soldier_JSOC_base
{
    faction = BLU_T_F;
    uniformClass = Atlas_U_B_T_JSOC_StealthUniform_F; 
};
class Atlas_B_W_Soldier_JSOC_base: Atlas_B_Soldier_JSOC_base
{
    faction = BLU_W_F;
    uniformClass = Atlas_U_B_W_JSOC_StealthUniform_F; 
};
class Atlas_B_D_Soldier_JSOC_base: Atlas_B_Soldier_JSOC_base
{
    faction = BLU_NATO_lxWS;
    uniformClass = Atlas_U_B_D_JSOC_StealthUniform_F;
};

/* US */
class Atlas_B_JSOC_AR_F: Atlas_B_Soldier_JSOC_base
{
	author = $STR_A3_A_Ravenholme;
	editorPreview  = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_JSOC_AR_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_B_soldier_AR_F0;
	cost = 220000;
	icon = iconManMG;
	role = MachineGunner;
    threat[] = 
	{
		1,
		0.1,
		0.3
	};
	weapons[] =
    {
        Atlas_arifle_MX_SW_HAMR_IR_Snds_BI_F,
       	hgun_P07_snds_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        Atlas_arifle_MX_SW_HAMR_IR_Snds_BI_F,
       	hgun_P07_snds_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_4(100rnd_65x39_caseless_mag),
		mag_2(16Rnd_9x21_Mag_v2),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_blue)
    };
    respawnMagazines[] =
    {
        mag_4(100rnd_65x39_caseless_mag),
		mag_2(16Rnd_9x21_Mag_v2),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_blue)
    };
	linkedItems[] =
	{
		Aegis_V_PlateCarrier2_alt_MTP,
		Aegis_H_Helmet_FASTMT_Cover_MTP_F,
        G_Shemag_khk,
		ItemGPS,
		DefaultManLinkedItems,
		Aegis_NVG_IVAS_01_tan_F
	};
	respawnLinkedItems[] =
	{
		Aegis_V_PlateCarrier2_alt_MTP,
		Aegis_H_Helmet_FASTMT_Cover_MTP_F,
        G_Shemag_khk,
		ItemGPS,
		DefaultManLinkedItems,
		Aegis_NVG_IVAS_01_tan_F
	};
};
class Atlas_B_JSOC_Exp_F: Atlas_B_Soldier_JSOC_base
{
	author = $STR_A3_A_Ravenholme;
	editorPreview  = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_JSOC_Exp_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_B_Soldier_exp_F0;
	backpack = Atlas_B_AssaultPack_JSOC_Exp_F;
	canDeactivateMines = true;
	detectSkill = 38;
	icon = iconManExplosive;
	picture = pictureExplosive;
	uniformClass = Atlas_U_B_JSOC_StealthUniform_RolledUp_F;
	role = Sapper;
	weapons[] =
    {
        Atlas_arifle_MXC_Holo_IR_Snds_F,
        hgun_P07_snds_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        Atlas_arifle_MXC_Holo_IR_Snds_F,
        hgun_P07_snds_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_65x39_caseless_mag),
        mag_2(16Rnd_9x21_Mag_v2),
        mag_3(APERSMine_Range_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_blue)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_65x39_caseless_mag),
        mag_2(16Rnd_9x21_Mag_v2),
        mag_3(APERSMine_Range_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_blue)
    };
	linkedItems[] =
	{
		Aegis_V_PlateCarrier2_alt_MTP,
		Aegis_H_Helmet_FASTMT_Cover_MTP_F,
        G_Balaclava_light_MTP_F,
		ItemGPS,
		DefaultManLinkedItems,
		Aegis_NVG_IVAS_01_tan_F
	};
	respawnLinkedItems[] =
	{
		Aegis_V_PlateCarrier2_alt_MTP,
		Aegis_H_Helmet_FASTMT_Cover_MTP_F,
        G_Balaclava_light_MTP_F,
		ItemGPS,
		DefaultManLinkedItems,
		Aegis_NVG_IVAS_01_tan_F
	};
};
class Atlas_B_JSOC_GL_F: Atlas_B_Soldier_JSOC_base
{
	author = $STR_A3_A_Ravenholme;
	editorPreview  = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_JSOC_GL_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_B_Soldier_GL_F0;
	cost = 200000;
	role = Grenadier;
	weapons[] =
    {
        Atlas_arifle_MX_GL_HAMR_IR_Snds_F,
        hgun_P07_snds_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        Atlas_arifle_MX_GL_HAMR_IR_Snds_F,
        hgun_P07_snds_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_65x39_caseless_mag),
        mag_2(16Rnd_9x21_Mag_v2),
        mag_2(3Rnd_HE_Grenade_shell),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_blue),
        3Rnd_Smoke_Grenade_shell,
        3Rnd_HEDP_Grenade_shell
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_65x39_caseless_mag),
        mag_2(16Rnd_9x21_Mag_v2),
        mag_2(3Rnd_HE_Grenade_shell),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_blue),
        3Rnd_Smoke_Grenade_shell,
        3Rnd_HEDP_Grenade_shell
    };
	linkedItems[] =
	{
		Aegis_V_PlateCarrier2_alt_MTP,
		Aegis_H_Helmet_FASTMT_Cover_MTP_F,
        G_Balaclava_light_MTP_F,
		ItemGPS,
		DefaultManLinkedItems,
		Aegis_NVG_IVAS_01_tan_F
	};
	respawnLinkedItems[] =
	{
		Aegis_V_PlateCarrier2_alt_MTP,
		Aegis_H_Helmet_FASTMT_Cover_MTP_F,
        G_Balaclava_light_MTP_F,
		ItemGPS,
		DefaultManLinkedItems,
		Aegis_NVG_IVAS_01_tan_F
	};
};
class Atlas_B_JSOC_JTAC_F: Atlas_B_Soldier_JSOC_base
{
	author = $STR_A3_A_Ravenholme;
	editorPreview  = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_JSOC_JTAC_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_B_CTRG_Soldier_JTAC_tna_F0;
	role = SpecialOperative;
	backpack = B_RadioBag_01_mtp_F;
	uniformClass = Atlas_U_B_JSOC_StealthUniform_RolledUp_F;
	weapons[] =
    {
        Atlas_arifle_MX_HAMR_IR_Snds_F,
        hgun_P07_snds_F,
        DefaultManWeapons,
        Laserdesignator
    };
    respawnWeapons[] =
    {
        Atlas_arifle_MX_HAMR_IR_Snds_F,
        hgun_P07_snds_F,
        DefaultManWeapons,
        Laserdesignator
    };
    magazines[] =
    {
        mag_6(30Rnd_65x39_caseless_mag),
        mag_2(16Rnd_9x21_Mag_v2),
        mag_2(MiniGrenade),
        mag_2(B_IR_Grenade),
        Laserbatteries,
        SmokeShell,
        SMOKESHELLS_BLUFOR,
        mag_2(Chemlight_blue)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_65x39_caseless_mag),
        mag_2(16Rnd_9x21_Mag_v2),
        mag_2(MiniGrenade),
        mag_2(B_IR_Grenade),
        Laserbatteries,
        SmokeShell,
        SMOKESHELLS_BLUFOR,
        mag_2(Chemlight_blue)
    };
	linkedItems[] =
	{
		Aegis_V_PlateCarrier2_alt_MTP,
		Aegis_H_Helmet_FASTMT_Cover_MTP_F,
        G_Balaclava_light_MTP_F,
		ItemGPS,
		DefaultManLinkedItems,
		Aegis_NVG_IVAS_01_tan_F
	};
	respawnLinkedItems[] =
	{
		Aegis_V_PlateCarrier2_alt_MTP,
		Aegis_H_Helmet_FASTMT_Cover_MTP_F,
        G_Balaclava_light_MTP_F,
		ItemGPS,
		DefaultManLinkedItems,
		Aegis_NVG_IVAS_01_tan_F
	};
};
class Atlas_B_JSOC_M_F: Atlas_B_Soldier_JSOC_base
{
	author = $STR_A3_A_Ravenholme;
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
	editorPreview  = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_JSOC_M_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_B_soldier_M_F0;
	cost = 250000;
	role = Marksman;
	primaryAmmoCoef = 0.2;
	secondaryAmmoCoef = 0.05;
	handgunAmmoCoef = 0.1;
	threat[] = 
	{
		1,
		0.1
		,0.3
	};
	weapons[] =
    {
        Atlas_arifle_MXM_SOS_IR_Snds_BI_F,
        hgun_P07_snds_F,
        DefaultManWeapons,
        Rangefinder
    };
    respawnWeapons[] =
    {
        Atlas_arifle_MXM_SOS_IR_Snds_BI_F,
        hgun_P07_snds_F,
        DefaultManWeapons,
        Rangefinder
    };
    magazines[] =
    {
        mag_6(30Rnd_65x39_caseless_mag),
        mag_2(16Rnd_9x21_Mag_v2),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_blue)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_65x39_caseless_mag),
        mag_2(16Rnd_9x21_Mag_v2),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_blue)
    };
	linkedItems[] =
	{
		Aegis_V_PlateCarrier2_alt_MTP,
		Aegis_H_Helmet_FASTMT_Cover_MTP_F,
        G_Balaclava_light_MTP_F,
		ItemGPS,
		DefaultManLinkedItems,
		Aegis_NVG_IVAS_01_tan_F
	};
	respawnLinkedItems[] =
	{
		Aegis_V_PlateCarrier2_alt_MTP,
		Aegis_H_Helmet_FASTMT_Cover_MTP_F,
        G_Balaclava_light_MTP_F,
		ItemGPS,
		DefaultManLinkedItems,
		Aegis_NVG_IVAS_01_tan_F
	};
};
class Atlas_B_JSOC_Medic_F: Atlas_B_Soldier_JSOC_base
{
	author = $STR_A3_A_Ravenholme;
	editorPreview  = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_JSOC_Medic_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_B_Medic_F0;
	backpack = Atlas_B_AssaultPack_JSOC_Medic_F;
	attendant = true;
	icon = iconManMedic;
	picture = pictureHeal;
	role = CombatLifeSaver;
    threat[] = 
	{
		1,
		0.1,
		0.3
	};
	weapons[] =
    {
        Atlas_arifle_MXC_Holo_IR_Snds_F,
        hgun_P07_snds_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        Atlas_arifle_MXC_Holo_IR_Snds_F,
        hgun_P07_snds_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_65x39_caseless_mag),
        mag_2(16Rnd_9x21_Mag_v2),
        mag_2(MiniGrenade),
        SmokeShell,
        SMOKESHELLS_MEDIC,
        mag_2(Chemlight_blue)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_65x39_caseless_mag),
        mag_2(16Rnd_9x21_Mag_v2),
        mag_2(MiniGrenade),
        SmokeShell,
        SMOKESHELLS_MEDIC,
        mag_2(Chemlight_blue)
    };
	linkedItems[] =
	{
		Aegis_V_PlateCarrier2_alt_MTP,
		Aegis_H_Helmet_FASTMT_Cover_MTP_F,
        G_Balaclava_light_MTP_F,
		ItemGPS,
		DefaultManLinkedItems,
		Aegis_NVG_IVAS_01_tan_F
	};
	respawnLinkedItems[] =
	{
		Aegis_V_PlateCarrier2_alt_MTP,
		Aegis_H_Helmet_FASTMT_Cover_MTP_F,
        G_Balaclava_light_MTP_F,
		ItemGPS,
		DefaultManLinkedItems,
		Aegis_NVG_IVAS_01_tan_F
	};
};
class Atlas_B_JSOC_F: Atlas_B_Soldier_JSOC_base
{
	author = $STR_A3_A_Ravenholme;
	editorPreview  = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_JSOC_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_A_cfgVehicles_Atlas_B_JSOC_F0;
	weapons[] =
    {
        Atlas_arifle_MX_HAMR_IR_Snds_F,
        hgun_P07_snds_F,
        DefaultManWeapons,
        Binocular
    };
    respawnWeapons[] =
    {
       	Atlas_arifle_MX_HAMR_IR_Snds_F,
        hgun_P07_snds_F,
        DefaultManWeapons,
        Binocular
    };
    magazines[] =
    {
        mag_10(30Rnd_65x39_caseless_mag),
        mag_2(16Rnd_9x21_Mag_v2),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_blue)
    };
    respawnMagazines[] =
    {
    	mag_10(30Rnd_65x39_caseless_mag),
        mag_2(16Rnd_9x21_Mag_v2),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_blue)
    };
	linkedItems[] =
	{
		Aegis_V_PlateCarrier2_alt_MTP,
		Aegis_H_Helmet_FASTMT_Cover_MTP_F,
        G_Balaclava_light_MTP_F,
		ItemGPS,
		DefaultManLinkedItems,
		Aegis_NVG_IVAS_01_tan_F
	};
	respawnLinkedItems[] =
	{
		Aegis_V_PlateCarrier2_alt_MTP,
		Aegis_H_Helmet_FASTMT_Cover_MTP_F,
        G_Balaclava_light_MTP_F,
		ItemGPS,
		DefaultManLinkedItems,
		Aegis_NVG_IVAS_01_tan_F
	};
};
class Atlas_B_JSOC_LAT_F: Atlas_B_Soldier_JSOC_base
{
	author = $STR_A3_A_Ravenholme;
	editorPreview  = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_JSOC_LAT_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_A_cfgVehicles_Atlas_B_JSOC_LAT_F0;
	backpack = Atlas_B_AssaultPack_JSOC_LAT_F;
	uniformClass = Atlas_U_B_JSOC_StealthUniform_RolledUp_F;
	cost = 130000;
	threat[] = 
	{
		1,
		0.6,
		0.1
	};
	secondaryAmmoCoef = 0.5;
	icon = iconManAT;
	role = MissileSpecialist;
	weapons[] =
    {
        Atlas_arifle_MXC_Holo_IR_Snds_F,
        hgun_P07_snds_F,
		launch_MRAWS_sand_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        Atlas_arifle_MXC_Holo_IR_Snds_F,
        hgun_P07_snds_F,
		launch_MRAWS_sand_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_65x39_caseless_mag),
        mag_2(16Rnd_9x21_Mag_v2),
		MRAWS_HEAT_F,
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_blue)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_65x39_caseless_mag),
        mag_2(16Rnd_9x21_Mag_v2),
		MRAWS_HEAT_F,
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_blue)
    };
	linkedItems[] =
	{
		Aegis_V_PlateCarrier2_alt_MTP,
		Aegis_H_Helmet_FASTMT_Cover_MTP_F,
        G_Balaclava_light_MTP_F,
		ItemGPS,
		DefaultManLinkedItems,
		Aegis_NVG_IVAS_01_tan_F
	};
	respawnLinkedItems[] =
	{
		Aegis_V_PlateCarrier2_alt_MTP,
		Aegis_H_Helmet_FASTMT_Cover_MTP_F,
        G_Balaclava_light_MTP_F,
		ItemGPS,
		DefaultManLinkedItems,
		Aegis_NVG_IVAS_01_tan_F
	};
};
class Atlas_B_JSOC_TL_F: Atlas_B_Soldier_JSOC_base
{
	author = $STR_A3_A_Ravenholme;
	editorPreview  = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_JSOC_TL_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_B_Soldier_TL_F0;
	cost = 250000;
	icon = iconManLeader;
	role = Rifleman;
    threat[] = 
	{
		1,
		0.1,
		0.3
	};
	weapons[] =
    {
        Atlas_arifle_MX_HAMR_IR_Snds_F,
        hgun_P07_snds_F,
        DefaultManWeapons,
        Rangefinder
    };
    respawnWeapons[] =
    {
        Atlas_arifle_MX_HAMR_IR_Snds_F,
        hgun_P07_snds_F,
        DefaultManWeapons,
        Rangefinder
    };
    magazines[] =
    {
        mag_4(30Rnd_65x39_caseless_mag),
        mag_2(30Rnd_65x39_caseless_mag_tracer),
        mag_2(16Rnd_9x21_Mag_v2),
        mag_2(MiniGrenade),
        SmokeShell,
        SMOKESHELLS_BLUFOR,
        mag_2(Chemlight_blue)
    };
    respawnMagazines[] =
    {
        mag_4(30Rnd_65x39_caseless_mag),
        mag_2(30Rnd_65x39_caseless_mag_tracer),
        mag_2(16Rnd_9x21_Mag_v2),
        mag_2(MiniGrenade),
        SmokeShell,
        SMOKESHELLS_BLUFOR,
        mag_2(Chemlight_blue)
    };
	linkedItems[] =
	{
		Aegis_V_PlateCarrier2_alt_MTP,
		Aegis_H_Helmet_FASTMT_Cover_MTP_F,
        G_Balaclava_light_MTP_F,
		ItemGPS,
		DefaultManLinkedItems,
		Aegis_NVG_IVAS_01_tan_F
	};
	respawnLinkedItems[] =
	{
		Aegis_V_PlateCarrier2_alt_MTP,
		Aegis_H_Helmet_FASTMT_Cover_MTP_F,
        G_Balaclava_light_MTP_F,
		ItemGPS,
		DefaultManLinkedItems,
		Aegis_NVG_IVAS_01_tan_F
	};
};
class Atlas_B_JSOC_SL_F: Atlas_B_Soldier_JSOC_base
{
	author = $STR_A3_A_Ravenholme;
	editorPreview  = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_JSOC_SL_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_B_Soldier_SL_F0;
	cost = 250000;
	icon = iconManLeader;
	role = Grenadier;
    threat[] = 
	{
		1,
		0.1,
		0.3
	};
	weapons[] =
    {
        Atlas_arifle_MX_GL_HAMR_IR_Snds_F,
        hgun_P07_snds_F,
        DefaultManWeapons,
        Rangefinder
    };
    respawnWeapons[] =
    {
        Atlas_arifle_MX_GL_HAMR_IR_Snds_F,
        hgun_P07_snds_F,
        DefaultManWeapons,
        Rangefinder
    };
    magazines[] =
    {
        mag_4(30Rnd_65x39_caseless_mag),
        mag_2(30Rnd_65x39_caseless_mag_tracer),
        mag_2(16Rnd_9x21_Mag_v2),
        mag_2(3Rnd_HE_Grenade_shell),
        mag_2(MiniGrenade),
        SmokeShell,
        SMOKESHELLS_BLUFOR,
        mag_2(Chemlight_blue),
        3Rnd_Smoke_Grenade_shell,
		SMOKEGRENADES_BLUFOR
    };
    respawnMagazines[] =
    {
        mag_4(30Rnd_65x39_caseless_mag),
        mag_2(30Rnd_65x39_caseless_mag_tracer),
        mag_2(16Rnd_9x21_Mag_v2),
        mag_2(3Rnd_HE_Grenade_shell),
        mag_2(MiniGrenade),
        SmokeShell,
        SMOKESHELLS_BLUFOR,
        mag_2(Chemlight_blue),
        3Rnd_Smoke_Grenade_shell,
		SMOKEGRENADES_BLUFOR
    };
	linkedItems[] =
	{
		Aegis_V_PlateCarrier2_alt_MTP,
		Aegis_H_Helmet_FASTMT_Cover_MTP_F,
        G_Shemag_khk,
		ItemGPS,
		DefaultManLinkedItems,
		Aegis_NVG_IVAS_01_tan_F
	};
	respawnLinkedItems[] =
	{
		Aegis_V_PlateCarrier2_alt_MTP,
		Aegis_H_Helmet_FASTMT_Cover_MTP_F,
        G_Shemag_khk,
		ItemGPS,
		DefaultManLinkedItems,
		Aegis_NVG_IVAS_01_tan_F
	};
};
class Atlas_B_JSOC_Sharpshooter_F: Atlas_B_JSOC_M_F
{
	author = $STR_A3_A_Ravenholme;
	editorPreview  = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_JSOC_Sharpshooter_F.jpg";
	displayName = $STR_A3_cfgVehicles_B_Sharpshooter_F0;
	weapons[] =
    {
        Atlas_arifle_SR25_MR_Snd_MOS_IR_Snds_BI_F,
        hgun_P07_snds_F,
        DefaultManWeapons,
        Rangefinder
    };
    respawnWeapons[] =
    {
        Atlas_arifle_SR25_MR_Snd_MOS_IR_Snds_BI_F,
        hgun_P07_snds_F,
        DefaultManWeapons,
        Rangefinder
    };
    magazines[] =
    {
        mag_6(Aegis_20Rnd_762x51_Red_Sand_SMAG),
        mag_2(16Rnd_9x21_Mag_v2),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_blue)
    };
    respawnMagazines[] =
    {
        mag_6(Aegis_20Rnd_762x51_Red_Sand_SMAG),
        mag_2(16Rnd_9x21_Mag_v2),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_blue)
    };
	linkedItems[] =
	{
		Aegis_V_PlateCarrier2_alt_MTP,
		Aegis_H_Helmet_FASTMT_Cover_MTP_F,
        G_Shemag_khk,
		ItemGPS,
		DefaultManLinkedItems,
		Aegis_NVG_IVAS_01_tan_F
	};
	respawnLinkedItems[] =
	{
		Aegis_V_PlateCarrier2_alt_MTP,
		Aegis_H_Helmet_FASTMT_Cover_MTP_F,
        G_Shemag_khk,
		ItemGPS,
		DefaultManLinkedItems,
		Aegis_NVG_IVAS_01_tan_F
	};
};
class Atlas_B_JSOC_UAV_F: Atlas_B_Soldier_JSOC_base
{
	author = $STR_A3_A_Ravenholme;
	editorPreview  = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_JSOC_UAV_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_A_cfgVehicles_Atlas_B_JSOC_UAV_F0;
	uavHacker = true;
    cost = 150000;
	role = SpecialOperative;
	backpack = B_UAV_01_backpack_F;
	uniformClass = Atlas_U_B_JSOC_StealthUniform_RolledUp_F;
	weapons[] =
    {
        Atlas_arifle_MX_HAMR_IR_Snds_F,
        hgun_P07_snds_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        Atlas_arifle_MX_HAMR_IR_Snds_F,
        hgun_P07_snds_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_65x39_caseless_mag),
        mag_2(16Rnd_9x21_Mag_v2),
        mag_2(MiniGrenade),
        SmokeShell,
        SMOKESHELLS_BLUFOR,
        mag_2(Chemlight_blue)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_65x39_caseless_mag),
        mag_2(16Rnd_9x21_Mag_v2),
        mag_2(MiniGrenade),
        SmokeShell,
        SMOKESHELLS_BLUFOR,
        mag_2(Chemlight_blue)
    };
	linkedItems[] =
	{
		Aegis_V_PlateCarrier2_alt_MTP,
		Aegis_H_Helmet_FASTMT_Cover_MTP_F,
        G_Balaclava_light_MTP_F,
		ItemGPS,
		DefaultManLinkedItems,
		Aegis_NVG_IVAS_01_tan_F
	};
	respawnLinkedItems[] =
	{
		Aegis_V_PlateCarrier2_alt_MTP,
		Aegis_H_Helmet_FASTMT_Cover_MTP_F,
        G_Balaclava_light_MTP_F,
		ItemGPS,
		DefaultManLinkedItems,
		Aegis_NVG_IVAS_01_tan_F
	};
};
class Atlas_B_JSOC_UAV_lxWS: Atlas_B_Soldier_JSOC_base
{
	author = $STR_A3_A_Ravenholme;
	editorPreview  = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_JSOC_UAV_lxWS.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_A_cfgVehicles_Atlas_B_JSOC_UAV_lxWS0;
	uavHacker = true;
    cost = 150000;
	role = SpecialOperative;
	backpack = B_UAV_02_backpack_lXWS;
	weapons[] =
    {
        Atlas_arifle_MXC_Holo_IR_Snds_F,
        hgun_P07_snds_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        Atlas_arifle_MXC_Holo_IR_Snds_F,
        hgun_P07_snds_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_65x39_caseless_mag),
        mag_2(16Rnd_9x21_Mag_v2),
        mag_2(MiniGrenade),
        SmokeShell,
        SMOKESHELLS_BLUFOR,
        mag_2(Chemlight_blue)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_65x39_caseless_mag),
        mag_2(16Rnd_9x21_Mag_v2),
        mag_2(MiniGrenade),
        SmokeShell,
        SMOKESHELLS_BLUFOR,
        mag_2(Chemlight_blue)
    };
	linkedItems[] =
	{
		Aegis_V_PlateCarrier2_alt_MTP,
		Aegis_H_Helmet_FASTMT_Cover_MTP_F,
        G_Balaclava_light_MTP_F,
		ItemGPS,
		DefaultManLinkedItems,
		Aegis_NVG_IVAS_01_tan_F
	};
	respawnLinkedItems[] =
	{
		Aegis_V_PlateCarrier2_alt_MTP,
		Aegis_H_Helmet_FASTMT_Cover_MTP_F,
        G_Balaclava_light_MTP_F,
		ItemGPS,
		DefaultManLinkedItems,
		Aegis_NVG_IVAS_01_tan_F
	};
};

/* US (Desert) JSOC */
class Atlas_B_D_JSOC_AR_F: Atlas_B_D_Soldier_JSOC_base
{
	author = $STR_A3_A_Ravenholme;
	editorPreview  = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_D_JSOC_AR_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_B_soldier_AR_F0;
	cost = 220000;
	icon = iconManMG;
	role = MachineGunner;
    threat[] = 
	{
		1,
		0.1,
		0.3
	};
	weapons[] =
    {
        Atlas_arifle_MX_SW_HAMR_IR_Snds_BI_F,
       	hgun_P07_snds_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        Atlas_arifle_MX_SW_HAMR_IR_Snds_BI_F,
       	hgun_P07_snds_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_4(100rnd_65x39_caseless_mag),
		mag_2(16Rnd_9x21_Mag_v2),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_blue)
    };
    respawnMagazines[] =
    {
        mag_4(100rnd_65x39_caseless_mag),
		mag_2(16Rnd_9x21_Mag_v2),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_blue)
    };
	linkedItems[] =
	{
		Aegis_V_PlateCarrier2_alt_Desert,
		Aegis_H_Helmet_FASTMT_Cover_Desert_F,
        G_Shemag_khk,
		ItemGPS,
		DefaultManLinkedItems,
		Aegis_NVG_IVAS_01_tan_F
	};
	respawnLinkedItems[] =
	{
		Aegis_V_PlateCarrier2_alt_Desert,
		Aegis_H_Helmet_FASTMT_Cover_Desert_F,
        G_Shemag_khk,
		ItemGPS,
		DefaultManLinkedItems,
		Aegis_NVG_IVAS_01_tan_F
	};
};
class Atlas_B_D_JSOC_Exp_F: Atlas_B_D_Soldier_JSOC_base
{
	author = $STR_A3_A_Ravenholme;
	editorPreview  = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_D_JSOC_Exp_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_B_Soldier_exp_F0;
	backpack = Atlas_B_D_AssaultPack_JSOC_Exp_F;
	canDeactivateMines = true;
	detectSkill = 38;
	icon = iconManExplosive;
	picture = pictureExplosive;
	uniformClass = Atlas_U_B_D_JSOC_StealthUniform_RolledUp_F;
	role = Sapper;
	weapons[] =
    {
        Atlas_arifle_MXC_Holo_IR_Snds_F,
        hgun_P07_snds_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        Atlas_arifle_MXC_Holo_IR_Snds_F,
        hgun_P07_snds_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_65x39_caseless_mag),
        mag_2(16Rnd_9x21_Mag_v2),
        mag_3(APERSMine_Range_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_blue)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_65x39_caseless_mag),
        mag_2(16Rnd_9x21_Mag_v2),
        mag_3(APERSMine_Range_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_blue)
    };
	linkedItems[] =
	{
		Aegis_V_PlateCarrier2_alt_Desert,
		Aegis_H_Helmet_FASTMT_Cover_Desert_F,
        G_Balaclava_snd_lxWS,
		ItemGPS,
		DefaultManLinkedItems,
		Aegis_NVG_IVAS_01_tan_F
	};
	respawnLinkedItems[] =
	{
		Aegis_V_PlateCarrier2_alt_Desert,
		Aegis_H_Helmet_FASTMT_Cover_Desert_F,
        G_Balaclava_snd_lxWS,
		ItemGPS,
		DefaultManLinkedItems,
		Aegis_NVG_IVAS_01_tan_F
	};
};
class Atlas_B_D_JSOC_GL_F: Atlas_B_D_Soldier_JSOC_base
{
	author = $STR_A3_A_Ravenholme;
	editorPreview  = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_D_JSOC_GL_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_B_Soldier_GL_F0;
	cost = 200000;
	role = Grenadier;
	weapons[] =
    {
        Atlas_arifle_MX_GL_HAMR_IR_Snds_F,
        hgun_P07_snds_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        Atlas_arifle_MX_GL_HAMR_IR_Snds_F,
        hgun_P07_snds_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_65x39_caseless_mag),
        mag_2(16Rnd_9x21_Mag_v2),
        mag_2(3Rnd_HE_Grenade_shell),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_blue),
        3Rnd_Smoke_Grenade_shell,
        3Rnd_HEDP_Grenade_shell
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_65x39_caseless_mag),
        mag_2(16Rnd_9x21_Mag_v2),
        mag_2(3Rnd_HE_Grenade_shell),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_blue),
        3Rnd_Smoke_Grenade_shell,
        3Rnd_HEDP_Grenade_shell
    };
	linkedItems[] =
	{
		Aegis_V_PlateCarrier2_alt_Desert,
		Aegis_H_Helmet_FASTMT_Cover_Desert_F,
        G_Balaclava_snd_lxWS,
		ItemGPS,
		DefaultManLinkedItems,
		Aegis_NVG_IVAS_01_tan_F
	};
	respawnLinkedItems[] =
	{
		Aegis_V_PlateCarrier2_alt_Desert,
		Aegis_H_Helmet_FASTMT_Cover_Desert_F,
        G_Balaclava_snd_lxWS,
		ItemGPS,
		DefaultManLinkedItems,
		Aegis_NVG_IVAS_01_tan_F
	};
};
class Atlas_B_D_JSOC_JTAC_F: Atlas_B_D_Soldier_JSOC_base
{
	author = $STR_A3_A_Ravenholme;
	editorPreview  = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_D_JSOC_JTAC_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_B_CTRG_Soldier_JTAC_tna_F0;
	role = SpecialOperative;
	backpack = Aegis_B_RadioBag_01_des_lxWS;
	uniformClass = Atlas_U_B_D_JSOC_StealthUniform_RolledUp_F;
	weapons[] =
    {
        Atlas_arifle_MX_HAMR_IR_Snds_F,
        hgun_P07_snds_F,
        DefaultManWeapons,
        Laserdesignator
    };
    respawnWeapons[] =
    {
        Atlas_arifle_MX_HAMR_IR_Snds_F,
        hgun_P07_snds_F,
        DefaultManWeapons,
        Laserdesignator
    };
    magazines[] =
    {
        mag_6(30Rnd_65x39_caseless_mag),
        mag_2(16Rnd_9x21_Mag_v2),
        mag_2(MiniGrenade),
        mag_2(B_IR_Grenade),
        Laserbatteries,
        SmokeShell,
        SMOKESHELLS_BLUFOR,
        mag_2(Chemlight_blue)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_65x39_caseless_mag),
        mag_2(16Rnd_9x21_Mag_v2),
        mag_2(MiniGrenade),
        mag_2(B_IR_Grenade),
        Laserbatteries,
        SmokeShell,
        SMOKESHELLS_BLUFOR,
        mag_2(Chemlight_blue)
    };
	linkedItems[] =
	{
		Aegis_V_PlateCarrier2_alt_Desert,
		Aegis_H_Helmet_FASTMT_Cover_Desert_F,
        G_Balaclava_snd_lxWS,
		ItemGPS,
		DefaultManLinkedItems,
		Aegis_NVG_IVAS_01_tan_F
	};
	respawnLinkedItems[] =
	{
		Aegis_V_PlateCarrier2_alt_Desert,
		Aegis_H_Helmet_FASTMT_Cover_Desert_F,
        G_Balaclava_snd_lxWS,
		ItemGPS,
		DefaultManLinkedItems,
		Aegis_NVG_IVAS_01_tan_F
	};
};
class Atlas_B_D_JSOC_M_F: Atlas_B_D_Soldier_JSOC_base
{
	author = $STR_A3_A_Ravenholme;
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
	editorPreview  = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_D_JSOC_M_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_B_soldier_M_F0;
	cost = 250000;
	role = Marksman;
	primaryAmmoCoef = 0.2;
	secondaryAmmoCoef = 0.05;
	handgunAmmoCoef = 0.1;
	threat[] = 
	{
		1,
		0.1
		,0.3
	};
	weapons[] =
    {
        Atlas_arifle_MXM_SOS_IR_Snds_BI_F,
        hgun_P07_snds_F,
        DefaultManWeapons,
        Rangefinder
    };
    respawnWeapons[] =
    {
        Atlas_arifle_MXM_SOS_IR_Snds_BI_F,
        hgun_P07_snds_F,
        DefaultManWeapons,
        Rangefinder
    };
    magazines[] =
    {
        mag_6(30Rnd_65x39_caseless_mag),
        mag_2(16Rnd_9x21_Mag_v2),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_blue)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_65x39_caseless_mag),
        mag_2(16Rnd_9x21_Mag_v2),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_blue)
    };
	linkedItems[] =
	{
		Aegis_V_PlateCarrier2_alt_Desert,
		Aegis_H_Helmet_FASTMT_Cover_Desert_F,
        G_Balaclava_snd_lxWS,
		ItemGPS,
		DefaultManLinkedItems,
		Aegis_NVG_IVAS_01_tan_F
	};
	respawnLinkedItems[] =
	{
		Aegis_V_PlateCarrier2_alt_Desert,
		Aegis_H_Helmet_FASTMT_Cover_Desert_F,
        G_Balaclava_snd_lxWS,
		ItemGPS,
		DefaultManLinkedItems,
		Aegis_NVG_IVAS_01_tan_F
	};
};
class Atlas_B_D_JSOC_Medic_F: Atlas_B_D_Soldier_JSOC_base
{
	author = $STR_A3_A_Ravenholme;
	editorPreview  = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_D_JSOC_Medic_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_B_Medic_F0;
	backpack = Atlas_B_D_AssaultPack_JSOC_Medic_F;
	attendant = true;
	icon = iconManMedic;
	picture = pictureHeal;
	role = CombatLifeSaver;
    threat[] = 
	{
		1,
		0.1,
		0.3
	};
	weapons[] =
    {
        Atlas_arifle_MXC_Holo_IR_Snds_F,
        hgun_P07_snds_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        Atlas_arifle_MXC_Holo_IR_Snds_F,
        hgun_P07_snds_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_65x39_caseless_mag),
        mag_2(16Rnd_9x21_Mag_v2),
        mag_2(MiniGrenade),
        SmokeShell,
        SMOKESHELLS_MEDIC,
        mag_2(Chemlight_blue)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_65x39_caseless_mag),
        mag_2(16Rnd_9x21_Mag_v2),
        mag_2(MiniGrenade),
        SmokeShell,
        SMOKESHELLS_MEDIC,
        mag_2(Chemlight_blue)
    };
	linkedItems[] =
	{
		Aegis_V_PlateCarrier2_alt_Desert,
		Aegis_H_Helmet_FASTMT_Cover_Desert_F,
        G_Balaclava_snd_lxWS,
		ItemGPS,
		DefaultManLinkedItems,
		Aegis_NVG_IVAS_01_tan_F
	};
	respawnLinkedItems[] =
	{
		Aegis_V_PlateCarrier2_alt_Desert,
		Aegis_H_Helmet_FASTMT_Cover_Desert_F,
        G_Balaclava_snd_lxWS,
		ItemGPS,
		DefaultManLinkedItems,
		Aegis_NVG_IVAS_01_tan_F
	};
};
class Atlas_B_D_JSOC_F: Atlas_B_D_Soldier_JSOC_base
{
	author = $STR_A3_A_Ravenholme;
	editorPreview  = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_D_JSOC_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_A_cfgVehicles_Atlas_B_JSOC_F0;
	uniformClass = Atlas_U_B_D_JSOC_StealthUniform_RolledUp_F;
	weapons[] =
    {
        Atlas_arifle_MX_HAMR_IR_Snds_F,
        hgun_P07_snds_F,
        DefaultManWeapons,
        Binocular
    };
    respawnWeapons[] =
    {
       	Atlas_arifle_MX_HAMR_IR_Snds_F,
        hgun_P07_snds_F,
        DefaultManWeapons,
        Binocular
    };
    magazines[] =
    {
        mag_10(30Rnd_65x39_caseless_mag),
        mag_2(16Rnd_9x21_Mag_v2),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_blue)
    };
    respawnMagazines[] =
    {
    	mag_10(30Rnd_65x39_caseless_mag),
        mag_2(16Rnd_9x21_Mag_v2),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_blue)
    };
	linkedItems[] =
	{
		Aegis_V_PlateCarrier2_alt_Desert,
		Aegis_H_Helmet_FASTMT_Cover_Desert_F,
        G_Balaclava_snd_lxWS,
		ItemGPS,
		DefaultManLinkedItems,
		Aegis_NVG_IVAS_01_tan_F
	};
	respawnLinkedItems[] =
	{
		Aegis_V_PlateCarrier2_alt_Desert,
		Aegis_H_Helmet_FASTMT_Cover_Desert_F,
        G_Balaclava_snd_lxWS,
		ItemGPS,
		DefaultManLinkedItems,
		Aegis_NVG_IVAS_01_tan_F
	};
};
class Atlas_B_D_JSOC_LAT_F: Atlas_B_D_Soldier_JSOC_base
{
	author = $STR_A3_A_Ravenholme;
	editorPreview  = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_D_JSOC_LAT_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_A_cfgVehicles_Atlas_B_JSOC_LAT_F0;
	backpack = Atlas_B_D_AssaultPack_JSOC_LAT_F;
	cost = 130000;
	threat[] = 
	{
		1,
		0.6,
		0.1
	};
	secondaryAmmoCoef = 0.5;
	icon = iconManAT;
	role = MissileSpecialist;
	weapons[] =
    {
        Atlas_arifle_MXC_Holo_IR_Snds_F,
        hgun_P07_snds_F,
		launch_MRAWS_sand_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        Atlas_arifle_MXC_Holo_IR_Snds_F,
        hgun_P07_snds_F,
		launch_MRAWS_sand_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_65x39_caseless_mag),
        mag_2(16Rnd_9x21_Mag_v2),
		MRAWS_HEAT_F,
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_blue)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_65x39_caseless_mag),
        mag_2(16Rnd_9x21_Mag_v2),
		MRAWS_HEAT_F,
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_blue)
    };
	linkedItems[] =
	{
		Aegis_V_PlateCarrier2_alt_Desert,
		Aegis_H_Helmet_FASTMT_Cover_Desert_F,
        G_Balaclava_snd_lxWS,
		ItemGPS,
		DefaultManLinkedItems,
		Aegis_NVG_IVAS_01_tan_F
	};
	respawnLinkedItems[] =
	{
		Aegis_V_PlateCarrier2_alt_Desert,
		Aegis_H_Helmet_FASTMT_Cover_Desert_F,
        G_Balaclava_snd_lxWS,
		ItemGPS,
		DefaultManLinkedItems,
		Aegis_NVG_IVAS_01_tan_F
	};
};
class Atlas_B_D_JSOC_TL_F: Atlas_B_D_Soldier_JSOC_base
{
	author = $STR_A3_A_Ravenholme;
	editorPreview  = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_D_JSOC_TL_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_B_Soldier_TL_F0;
	cost = 250000;
	icon = iconManLeader;
	role = Rifleman;
    threat[] = 
	{
		1,
		0.1,
		0.3
	};
	weapons[] =
    {
        Atlas_arifle_MX_HAMR_IR_Snds_F,
        hgun_P07_snds_F,
        DefaultManWeapons,
        Rangefinder
    };
    respawnWeapons[] =
    {
        Atlas_arifle_MX_HAMR_IR_Snds_F,
        hgun_P07_snds_F,
        DefaultManWeapons,
        Rangefinder
    };
    magazines[] =
    {
        mag_4(30Rnd_65x39_caseless_mag),
        mag_2(30Rnd_65x39_caseless_mag_tracer),
        mag_2(16Rnd_9x21_Mag_v2),
        mag_2(MiniGrenade),
        SmokeShell,
        SMOKESHELLS_BLUFOR,
        mag_2(Chemlight_blue)
    };
    respawnMagazines[] =
    {
        mag_4(30Rnd_65x39_caseless_mag),
        mag_2(30Rnd_65x39_caseless_mag_tracer),
        mag_2(16Rnd_9x21_Mag_v2),
        mag_2(MiniGrenade),
        SmokeShell,
        SMOKESHELLS_BLUFOR,
        mag_2(Chemlight_blue)
    };
	linkedItems[] =
	{
		Aegis_V_PlateCarrier2_alt_Desert,
		Aegis_H_Helmet_FASTMT_Cover_Desert_F,
        G_Balaclava_snd_lxWS,
		ItemGPS,
		DefaultManLinkedItems,
		Aegis_NVG_IVAS_01_tan_F
	};
	respawnLinkedItems[] =
	{
		Aegis_V_PlateCarrier2_alt_Desert,
		Aegis_H_Helmet_FASTMT_Cover_Desert_F,
        G_Balaclava_snd_lxWS,
		ItemGPS,
		DefaultManLinkedItems,
		Aegis_NVG_IVAS_01_tan_F
	};
};
class Atlas_B_D_JSOC_SL_F: Atlas_B_D_Soldier_JSOC_base
{
	author = $STR_A3_A_Ravenholme;
	editorPreview  = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_D_JSOC_SL_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_B_Soldier_SL_F0;
	cost = 250000;
	icon = iconManLeader;
	role = Grenadier;
    threat[] = 
	{
		1,
		0.1,
		0.3
	};
	weapons[] =
    {
        Atlas_arifle_MX_GL_HAMR_IR_Snds_F,
        hgun_P07_snds_F,
        DefaultManWeapons,
        Rangefinder
    };
    respawnWeapons[] =
    {
        Atlas_arifle_MX_GL_HAMR_IR_Snds_F,
        hgun_P07_snds_F,
        DefaultManWeapons,
        Rangefinder
    };
    magazines[] =
    {
        mag_4(30Rnd_65x39_caseless_mag),
        mag_2(30Rnd_65x39_caseless_mag_tracer),
        mag_2(16Rnd_9x21_Mag_v2),
        mag_2(3Rnd_HE_Grenade_shell),
        mag_2(MiniGrenade),
        SmokeShell,
        SMOKESHELLS_BLUFOR,
        mag_2(Chemlight_blue),
        3Rnd_Smoke_Grenade_shell,
		SMOKEGRENADES_BLUFOR
    };
    respawnMagazines[] =
    {
        mag_4(30Rnd_65x39_caseless_mag),
        mag_2(30Rnd_65x39_caseless_mag_tracer),
        mag_2(16Rnd_9x21_Mag_v2),
        mag_2(3Rnd_HE_Grenade_shell),
        mag_2(MiniGrenade),
        SmokeShell,
        SMOKESHELLS_BLUFOR,
        mag_2(Chemlight_blue),
        3Rnd_Smoke_Grenade_shell,
		SMOKEGRENADES_BLUFOR
    };
	linkedItems[] =
	{
		Aegis_V_PlateCarrier2_alt_Desert,
		Aegis_H_Helmet_FASTMT_Cover_Desert_F,
        G_Shemag_khk,
		ItemGPS,
		DefaultManLinkedItems,
		Aegis_NVG_IVAS_01_tan_F
	};
	respawnLinkedItems[] =
	{
		Aegis_V_PlateCarrier2_alt_Desert,
		Aegis_H_Helmet_FASTMT_Cover_Desert_F,
        G_Shemag_khk,
		ItemGPS,
		DefaultManLinkedItems,
		Aegis_NVG_IVAS_01_tan_F
	};
};
class Atlas_B_D_JSOC_Sharpshooter_F: Atlas_B_D_JSOC_M_F
{
	author = $STR_A3_A_Ravenholme;
	editorPreview  = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_D_JSOC_Sharpshooter_F.jpg";
	displayName = $STR_A3_cfgVehicles_B_Sharpshooter_F0;
    uniformClass = Atlas_U_B_D_JSOC_StealthUniform_RolledUp_F;
	weapons[] =
    {
        Atlas_arifle_SR25_MR_Snd_MOS_IR_Snds_BI_F,
        hgun_P07_snds_F,
        DefaultManWeapons,
        Rangefinder
    };
    respawnWeapons[] =
    {
        Atlas_arifle_SR25_MR_Snd_MOS_IR_Snds_BI_F,
        hgun_P07_snds_F,
        DefaultManWeapons,
        Rangefinder
    };
    magazines[] =
    {
        mag_6(Aegis_20Rnd_762x51_Red_Sand_SMAG),
        mag_2(16Rnd_9x21_Mag_v2),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_blue)
    };
    respawnMagazines[] =
    {
        mag_6(Aegis_20Rnd_762x51_Red_Sand_SMAG),
        mag_2(16Rnd_9x21_Mag_v2),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_blue)
    };
	linkedItems[] =
	{
		Aegis_V_PlateCarrier2_alt_Desert,
		Aegis_H_Helmet_FASTMT_Cover_Desert_F,
        G_Shemag_khk,
		ItemGPS,
		DefaultManLinkedItems,
		Aegis_NVG_IVAS_01_tan_F
	};
	respawnLinkedItems[] =
	{
		Aegis_V_PlateCarrier2_alt_Desert,
		Aegis_H_Helmet_FASTMT_Cover_Desert_F,
        G_Shemag_khk,
		ItemGPS,
		DefaultManLinkedItems,
		Aegis_NVG_IVAS_01_tan_F
	};
};
class Atlas_B_D_JSOC_UAV_F: Atlas_B_D_Soldier_JSOC_base
{
	author = $STR_A3_A_Ravenholme;
	editorPreview  = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_D_JSOC_UAV_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_A_cfgVehicles_Atlas_B_JSOC_UAV_F0;
	uavHacker = true;
    cost = 150000;
	role = SpecialOperative;
	backpack = B_UAV_01_backpack_F;
	weapons[] =
    {
        Atlas_arifle_MX_HAMR_IR_Snds_F,
        hgun_P07_snds_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        Atlas_arifle_MX_HAMR_IR_Snds_F,
        hgun_P07_snds_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_65x39_caseless_mag),
        mag_2(16Rnd_9x21_Mag_v2),
        mag_2(MiniGrenade),
        SmokeShell,
        SMOKESHELLS_BLUFOR,
        mag_2(Chemlight_blue)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_65x39_caseless_mag),
        mag_2(16Rnd_9x21_Mag_v2),
        mag_2(MiniGrenade),
        SmokeShell,
        SMOKESHELLS_BLUFOR,
        mag_2(Chemlight_blue)
    };
	linkedItems[] =
	{
		Aegis_V_PlateCarrier2_alt_Desert,
		Aegis_H_Helmet_FASTMT_Cover_Desert_F,
        G_Balaclava_snd_lxWS,
		ItemGPS,
		DefaultManLinkedItems,
		Aegis_NVG_IVAS_01_tan_F
	};
	respawnLinkedItems[] =
	{
		Aegis_V_PlateCarrier2_alt_Desert,
		Aegis_H_Helmet_FASTMT_Cover_Desert_F,
        G_Balaclava_snd_lxWS,
		ItemGPS,
		DefaultManLinkedItems,
		Aegis_NVG_IVAS_01_tan_F
	};
};
class Atlas_B_D_JSOC_UAV_lxWS: Atlas_B_D_Soldier_JSOC_base
{
	author = $STR_A3_A_Ravenholme;
	editorPreview  = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_D_JSOC_UAV_lxWS.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_A_cfgVehicles_Atlas_B_JSOC_UAV_lxWS0;
	uavHacker = true;
    cost = 150000;
	role = SpecialOperative;
    uniformClass = Atlas_U_B_D_JSOC_StealthUniform_RolledUp_F;
	backpack = B_UAV_02_backpack_lXWS;
	weapons[] =
    {
        Atlas_arifle_MXC_Holo_IR_Snds_F,
        hgun_P07_snds_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        Atlas_arifle_MXC_Holo_IR_Snds_F,
        hgun_P07_snds_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_65x39_caseless_mag),
        mag_2(16Rnd_9x21_Mag_v2),
        mag_2(MiniGrenade),
        SmokeShell,
        SMOKESHELLS_BLUFOR,
        mag_2(Chemlight_blue)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_65x39_caseless_mag),
        mag_2(16Rnd_9x21_Mag_v2),
        mag_2(MiniGrenade),
        SmokeShell,
        SMOKESHELLS_BLUFOR,
        mag_2(Chemlight_blue)
    };
	linkedItems[] =
	{
		Aegis_V_PlateCarrier2_alt_Desert,
		Aegis_H_Helmet_FASTMT_Cover_Desert_F,
        G_Balaclava_snd_lxWS,
		ItemGPS,
		DefaultManLinkedItems,
		Aegis_NVG_IVAS_01_tan_F
	};
	respawnLinkedItems[] =
	{
		Aegis_V_PlateCarrier2_alt_Desert,
		Aegis_H_Helmet_FASTMT_Cover_Desert_F,
        G_Balaclava_snd_lxWS,
		ItemGPS,
		DefaultManLinkedItems,
		Aegis_NVG_IVAS_01_tan_F
	};
};

/* US (Pacific) JSOC */
class Atlas_B_T_JSOC_AR_F: Atlas_B_T_Soldier_JSOC_base
{
	author = $STR_A3_A_Ravenholme;
	editorPreview  = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_T_JSOC_AR_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_B_soldier_AR_F0;
    uniformClass = Atlas_U_B_T_JSOC_StealthUniform_RolledUp_F;
	cost = 220000;
	icon = iconManMG;
	role = MachineGunner;
    threat[] = 
	{
		1,
		0.1,
		0.3
	};
	weapons[] =
    {
        Atlas_arifle_MX_SW_khk_HAMR_IR_Snds_BI_F,
       	hgun_P07_khk_snds_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        Atlas_arifle_MX_SW_khk_HAMR_IR_Snds_BI_F,
       	hgun_P07_khk_snds_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_4(100rnd_65x39_caseless_khaki_mag),
		mag_2(16Rnd_9x21_Mag_v2),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_blue)
    };
    respawnMagazines[] =
    {
        mag_4(100rnd_65x39_caseless_khaki_mag),
		mag_2(16Rnd_9x21_Mag_v2),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_blue)
    };
	linkedItems[] =
	{
		Aegis_V_PlateCarrier2_alt_tna,
		Aegis_H_Helmet_FASTMT_Cover_tna_F,
        G_Shemag_oli,
		ItemGPS,
		DefaultManLinkedItems,
		Aegis_NVG_IVAS_01_grn_F
	};
	respawnLinkedItems[] =
	{
		Aegis_V_PlateCarrier2_alt_tna,
		Aegis_H_Helmet_FASTMT_Cover_tna_F,
        G_Shemag_oli,
		ItemGPS,
		DefaultManLinkedItems,
		Aegis_NVG_IVAS_01_grn_F
	};
};
class Atlas_B_T_JSOC_Exp_F: Atlas_B_T_Soldier_JSOC_base
{
	author = $STR_A3_A_Ravenholme;
	editorPreview  = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_T_JSOC_Exp_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_B_Soldier_exp_F0;
	backpack = Atlas_B_T_AssaultPack_JSOC_Exp_F;
	canDeactivateMines = true;
	detectSkill = 38;
	icon = iconManExplosive;
	picture = pictureExplosive;
	role = Sapper;
	weapons[] =
    {
        Atlas_arifle_MXC_khk_Holo_IR_Snds_F,
        hgun_P07_khk_snds_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        Atlas_arifle_MXC_khk_Holo_IR_Snds_F,
        hgun_P07_khk_snds_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_65x39_caseless_khaki_mag),
        mag_2(16Rnd_9x21_Mag_v2),
        mag_3(APERSMine_Range_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_blue)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_65x39_caseless_khaki_mag),
        mag_2(16Rnd_9x21_Mag_v2),
        mag_3(APERSMine_Range_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_blue)
    };
	linkedItems[] =
	{
		Aegis_V_PlateCarrier2_alt_tna,
		Aegis_H_Helmet_FASTMT_Cover_tna_F,
        G_Balaclava_light_tropic_F,
		ItemGPS,
		DefaultManLinkedItems,
		Aegis_NVG_IVAS_01_grn_F
	};
	respawnLinkedItems[] =
	{
		Aegis_V_PlateCarrier2_alt_tna,
		Aegis_H_Helmet_FASTMT_Cover_tna_F,
        G_Balaclava_light_tropic_F,
		ItemGPS,
		DefaultManLinkedItems,
		Aegis_NVG_IVAS_01_grn_F
	};
};
class Atlas_B_T_JSOC_GL_F: Atlas_B_T_Soldier_JSOC_base
{
	author = $STR_A3_A_Ravenholme;
	editorPreview  = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_T_JSOC_GL_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_B_Soldier_GL_F0;
    uniformClass = Atlas_U_B_T_JSOC_StealthUniform_RolledUp_F;
	cost = 200000;
	role = Grenadier;
	weapons[] =
    {
        Atlas_arifle_MX_GL_khk_HAMR_IR_Snds_F,
        hgun_P07_khk_snds_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        Atlas_arifle_MX_GL_khk_HAMR_IR_Snds_F,
        hgun_P07_khk_snds_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_65x39_caseless_khaki_mag),
        mag_2(16Rnd_9x21_Mag_v2),
        mag_2(3Rnd_HE_Grenade_shell),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_blue),
        3Rnd_Smoke_Grenade_shell,
        3Rnd_HEDP_Grenade_shell
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_65x39_caseless_khaki_mag),
        mag_2(16Rnd_9x21_Mag_v2),
        mag_2(3Rnd_HE_Grenade_shell),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_blue),
        3Rnd_Smoke_Grenade_shell,
        3Rnd_HEDP_Grenade_shell
    };
	linkedItems[] =
	{
		Aegis_V_PlateCarrier2_alt_tna,
		Aegis_H_Helmet_FASTMT_Cover_tna_F,
        G_Balaclava_light_tropic_F,
		ItemGPS,
		DefaultManLinkedItems,
		Aegis_NVG_IVAS_01_grn_F
	};
	respawnLinkedItems[] =
	{
		Aegis_V_PlateCarrier2_alt_tna,
		Aegis_H_Helmet_FASTMT_Cover_tna_F,
        G_Balaclava_light_tropic_F,
		ItemGPS,
		DefaultManLinkedItems,
		Aegis_NVG_IVAS_01_grn_F
	};
};
class Atlas_B_T_JSOC_JTAC_F: Atlas_B_T_Soldier_JSOC_base
{
	author = $STR_A3_A_Ravenholme;
	editorPreview  = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_T_JSOC_JTAC_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_B_CTRG_Soldier_JTAC_tna_F0;
	role = SpecialOperative;
	backpack = B_RadioBag_01_tropic_F;
	weapons[] =
    {
        Atlas_arifle_MX_khk_HAMR_IR_Snds_F,
        hgun_P07_khk_snds_F,
        DefaultManWeapons,
        Laserdesignator
    };
    respawnWeapons[] =
    {
        Atlas_arifle_MX_khk_HAMR_IR_Snds_F,
        hgun_P07_khk_snds_F,
        DefaultManWeapons,
        Laserdesignator
    };
    magazines[] =
    {
        mag_6(30Rnd_65x39_caseless_khaki_mag),
        mag_2(16Rnd_9x21_Mag_v2),
        mag_2(MiniGrenade),
        mag_2(B_IR_Grenade),
        Laserbatteries,
        SmokeShell,
        SMOKESHELLS_BLUFOR,
        mag_2(Chemlight_blue)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_65x39_caseless_khaki_mag),
        mag_2(16Rnd_9x21_Mag_v2),
        mag_2(MiniGrenade),
        mag_2(B_IR_Grenade),
        Laserbatteries,
        SmokeShell,
        SMOKESHELLS_BLUFOR,
        mag_2(Chemlight_blue)
    };
	linkedItems[] =
	{
		Aegis_V_PlateCarrier2_alt_tna,
		Aegis_H_Helmet_FASTMT_Cover_tna_F,
        G_Balaclava_light_tropic_F,
		ItemGPS,
		DefaultManLinkedItems,
		Aegis_NVG_IVAS_01_grn_F
	};
	respawnLinkedItems[] =
	{
		Aegis_V_PlateCarrier2_alt_tna,
		Aegis_H_Helmet_FASTMT_Cover_tna_F,
        G_Balaclava_light_tropic_F,
		ItemGPS,
		DefaultManLinkedItems,
		Aegis_NVG_IVAS_01_grn_F
	};
};
class Atlas_B_T_JSOC_M_F: Atlas_B_T_Soldier_JSOC_base
{
	author = $STR_A3_A_Ravenholme;
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
	editorPreview  = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_T_JSOC_M_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_B_soldier_M_F0;
	cost = 250000;
	role = Marksman;
	primaryAmmoCoef = 0.2;
	secondaryAmmoCoef = 0.05;
	handgunAmmoCoef = 0.1;
	threat[] = 
	{
		1,
		0.1
		,0.3
	};
	weapons[] =
    {
        Atlas_arifle_MXM_khk_SOS_IR_Snds_BI_F,
        hgun_P07_khk_snds_F,
        DefaultManWeapons,
        Rangefinder
    };
    respawnWeapons[] =
    {
        Atlas_arifle_MXM_khk_SOS_IR_Snds_BI_F,
        hgun_P07_khk_snds_F,
        DefaultManWeapons,
        Rangefinder
    };
    magazines[] =
    {
        mag_6(30Rnd_65x39_caseless_khaki_mag),
        mag_2(16Rnd_9x21_Mag_v2),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_blue)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_65x39_caseless_khaki_mag),
        mag_2(16Rnd_9x21_Mag_v2),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_blue)
    };
	linkedItems[] =
	{
		Aegis_V_PlateCarrier2_alt_tna,
		Aegis_H_Helmet_FASTMT_Cover_tna_F,
        G_Balaclava_light_tropic_F,
		ItemGPS,
		DefaultManLinkedItems,
		Aegis_NVG_IVAS_01_grn_F
	};
	respawnLinkedItems[] =
	{
		Aegis_V_PlateCarrier2_alt_tna,
		Aegis_H_Helmet_FASTMT_Cover_tna_F,
        G_Balaclava_light_tropic_F,
		ItemGPS,
		DefaultManLinkedItems,
		Aegis_NVG_IVAS_01_grn_F
	};
};
class Atlas_B_T_JSOC_Medic_F: Atlas_B_T_Soldier_JSOC_base
{
	author = $STR_A3_A_Ravenholme;
	editorPreview  = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_T_JSOC_Medic_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_B_Medic_F0;
	backpack = Atlas_B_T_AssaultPack_JSOC_Medic_F;
	attendant = true;
	icon = iconManMedic;
	picture = pictureHeal;
	role = CombatLifeSaver;
    threat[] = 
	{
		1,
		0.1,
		0.3
	};
	weapons[] =
    {
        Atlas_arifle_MXC_khk_Holo_IR_Snds_F,
        hgun_P07_khk_snds_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        Atlas_arifle_MXC_khk_Holo_IR_Snds_F,
        hgun_P07_khk_snds_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_65x39_caseless_khaki_mag),
        mag_2(16Rnd_9x21_Mag_v2),
        mag_2(MiniGrenade),
        SmokeShell,
        SMOKESHELLS_MEDIC,
        mag_2(Chemlight_blue)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_65x39_caseless_khaki_mag),
        mag_2(16Rnd_9x21_Mag_v2),
        mag_2(MiniGrenade),
        SmokeShell,
        SMOKESHELLS_MEDIC,
        mag_2(Chemlight_blue)
    };
	linkedItems[] =
	{
		Aegis_V_PlateCarrier2_alt_tna,
		Aegis_H_Helmet_FASTMT_Cover_tna_F,
        G_Balaclava_light_tropic_F,
		ItemGPS,
		DefaultManLinkedItems,
		Aegis_NVG_IVAS_01_grn_F
	};
	respawnLinkedItems[] =
	{
		Aegis_V_PlateCarrier2_alt_tna,
		Aegis_H_Helmet_FASTMT_Cover_tna_F,
        G_Balaclava_light_tropic_F,
		ItemGPS,
		DefaultManLinkedItems,
		Aegis_NVG_IVAS_01_grn_F
	};
};
class Atlas_B_T_JSOC_F: Atlas_B_T_Soldier_JSOC_base
{
	author = $STR_A3_A_Ravenholme;
	editorPreview  = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_T_JSOC_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_A_cfgVehicles_Atlas_B_JSOC_F0;
	weapons[] =
    {
        Atlas_arifle_MX_khk_HAMR_IR_Snds_F,
        hgun_P07_khk_snds_F,
        DefaultManWeapons,
        Binocular
    };
    respawnWeapons[] =
    {
       	Atlas_arifle_MX_khk_HAMR_IR_Snds_F,
        hgun_P07_khk_snds_F,
        DefaultManWeapons,
        Binocular
    };
    magazines[] =
    {
        mag_10(30Rnd_65x39_caseless_khaki_mag),
        mag_2(16Rnd_9x21_Mag_v2),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_blue)
    };
    respawnMagazines[] =
    {
    	mag_10(30Rnd_65x39_caseless_khaki_mag),
        mag_2(16Rnd_9x21_Mag_v2),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_blue)
    };
	linkedItems[] =
	{
		Aegis_V_PlateCarrier2_alt_tna,
		Aegis_H_Helmet_FASTMT_Cover_tna_F,
        G_Balaclava_light_tropic_F,
		ItemGPS,
		DefaultManLinkedItems,
		Aegis_NVG_IVAS_01_grn_F
	};
	respawnLinkedItems[] =
	{
		Aegis_V_PlateCarrier2_alt_tna,
		Aegis_H_Helmet_FASTMT_Cover_tna_F,
        G_Balaclava_light_tropic_F,
		ItemGPS,
		DefaultManLinkedItems,
		Aegis_NVG_IVAS_01_grn_F
	};
};
class Atlas_B_T_JSOC_LAT_F: Atlas_B_T_Soldier_JSOC_base
{
	author = $STR_A3_A_Ravenholme;
	editorPreview  = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_T_JSOC_LAT_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_A_cfgVehicles_Atlas_B_JSOC_LAT_F0;
	backpack = Atlas_B_T_AssaultPack_JSOC_LAT_F;
	uniformClass = Atlas_U_B_T_JSOC_StealthUniform_RolledUp_F;
	cost = 130000;
	threat[] = 
	{
		1,
		0.6,
		0.1
	};
	secondaryAmmoCoef = 0.5;
	icon = iconManAT;
	role = MissileSpecialist;
	weapons[] =
    {
        Atlas_arifle_MXC_khk_Holo_IR_Snds_F,
        hgun_P07_khk_snds_F,
		launch_MRAWS_olive_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        Atlas_arifle_MXC_khk_Holo_IR_Snds_F,
        hgun_P07_khk_snds_F,
		launch_MRAWS_olive_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_65x39_caseless_khaki_mag),
        mag_2(16Rnd_9x21_Mag_v2),
		MRAWS_HEAT_F,
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_blue)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_65x39_caseless_khaki_mag),
        mag_2(16Rnd_9x21_Mag_v2),
		MRAWS_HEAT_F,
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_blue)
    };
	linkedItems[] =
	{
		Aegis_V_PlateCarrier2_alt_tna,
		Aegis_H_Helmet_FASTMT_Cover_tna_F,
        G_Balaclava_light_tropic_F,
		ItemGPS,
		DefaultManLinkedItems,
		Aegis_NVG_IVAS_01_grn_F
	};
	respawnLinkedItems[] =
	{
		Aegis_V_PlateCarrier2_alt_tna,
		Aegis_H_Helmet_FASTMT_Cover_tna_F,
        G_Balaclava_light_tropic_F,
		ItemGPS,
		DefaultManLinkedItems,
		Aegis_NVG_IVAS_01_grn_F
	};
};
class Atlas_B_T_JSOC_TL_F: Atlas_B_T_Soldier_JSOC_base
{
	author = $STR_A3_A_Ravenholme;
	editorPreview  = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_T_JSOC_TL_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_B_Soldier_TL_F0;
	cost = 250000;
	icon = iconManLeader;
	role = Rifleman;
    threat[] = 
	{
		1,
		0.1,
		0.3
	};
	weapons[] =
    {
        Atlas_arifle_MX_khk_HAMR_IR_Snds_F,
        hgun_P07_khk_snds_F,
        DefaultManWeapons,
        Rangefinder
    };
    respawnWeapons[] =
    {
        Atlas_arifle_MX_khk_HAMR_IR_Snds_F,
        hgun_P07_khk_snds_F,
        DefaultManWeapons,
        Rangefinder
    };
    magazines[] =
    {
        mag_4(30Rnd_65x39_caseless_khaki_mag),
        mag_2(30Rnd_65x39_caseless_khaki_mag_tracer),
        mag_2(16Rnd_9x21_Mag_v2),
        mag_2(MiniGrenade),
        SmokeShell,
        SMOKESHELLS_BLUFOR,
        mag_2(Chemlight_blue)
    };
    respawnMagazines[] =
    {
        mag_4(30Rnd_65x39_caseless_khaki_mag),
        mag_2(30Rnd_65x39_caseless_khaki_mag_tracer),
        mag_2(16Rnd_9x21_Mag_v2),
        mag_2(MiniGrenade),
        SmokeShell,
        SMOKESHELLS_BLUFOR,
        mag_2(Chemlight_blue)
    };
	linkedItems[] =
	{
		Aegis_V_PlateCarrier2_alt_tna,
		Aegis_H_Helmet_FASTMT_Cover_tna_F,
        G_Balaclava_light_tropic_F,
		ItemGPS,
		DefaultManLinkedItems,
		Aegis_NVG_IVAS_01_grn_F
	};
	respawnLinkedItems[] =
	{
		Aegis_V_PlateCarrier2_alt_tna,
		Aegis_H_Helmet_FASTMT_Cover_tna_F,
        G_Balaclava_light_tropic_F,
		ItemGPS,
		DefaultManLinkedItems,
		Aegis_NVG_IVAS_01_grn_F
	};
};
class Atlas_B_T_JSOC_SL_F: Atlas_B_T_Soldier_JSOC_base
{
	author = $STR_A3_A_Ravenholme;
	editorPreview  = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_T_JSOC_SL_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_B_Soldier_SL_F0;
    uniformClass = Atlas_U_B_T_JSOC_StealthUniform_RolledUp_F;
	cost = 250000;
	icon = iconManLeader;
	role = Grenadier;
    threat[] = 
	{
		1,
		0.1,
		0.3
	};
	weapons[] =
    {
        Atlas_arifle_MX_GL_khk_HAMR_IR_Snds_F,
        hgun_P07_khk_snds_F,
        DefaultManWeapons,
        Rangefinder
    };
    respawnWeapons[] =
    {
        Atlas_arifle_MX_GL_khk_HAMR_IR_Snds_F,
        hgun_P07_khk_snds_F,
        DefaultManWeapons,
        Rangefinder
    };
    magazines[] =
    {
        mag_4(30Rnd_65x39_caseless_khaki_mag),
        mag_2(30Rnd_65x39_caseless_khaki_mag_tracer),
        mag_2(16Rnd_9x21_Mag_v2),
        mag_2(3Rnd_HE_Grenade_shell),
        mag_2(MiniGrenade),
        SmokeShell,
        SMOKESHELLS_BLUFOR,
        mag_2(Chemlight_blue),
        3Rnd_Smoke_Grenade_shell,
		SMOKEGRENADES_BLUFOR
    };
    respawnMagazines[] =
    {
        mag_4(30Rnd_65x39_caseless_khaki_mag),
        mag_2(30Rnd_65x39_caseless_khaki_mag_tracer),
        mag_2(16Rnd_9x21_Mag_v2),
        mag_2(3Rnd_HE_Grenade_shell),
        mag_2(MiniGrenade),
        SmokeShell,
        SMOKESHELLS_BLUFOR,
        mag_2(Chemlight_blue),
        3Rnd_Smoke_Grenade_shell,
		SMOKEGRENADES_BLUFOR
    };
	linkedItems[] =
	{
		Aegis_V_PlateCarrier2_alt_tna,
		Aegis_H_Helmet_FASTMT_Cover_tna_F,
        G_Shemag_oli,
		ItemGPS,
		DefaultManLinkedItems,
		Aegis_NVG_IVAS_01_grn_F
	};
	respawnLinkedItems[] =
	{
		Aegis_V_PlateCarrier2_alt_tna,
		Aegis_H_Helmet_FASTMT_Cover_tna_F,
        G_Shemag_oli,
		ItemGPS,
		DefaultManLinkedItems,
		Aegis_NVG_IVAS_01_grn_F
	};
};
class Atlas_B_T_JSOC_Sharpshooter_F: Atlas_B_T_JSOC_M_F
{
	author = $STR_A3_A_Ravenholme;
	editorPreview  = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_T_JSOC_Sharpshooter_F.jpg";
	displayName = $STR_A3_cfgVehicles_B_Sharpshooter_F0;
	weapons[] =
    {
        Atlas_arifle_SR25_MR_khk_SOS_IR_Snds_BI_F,
        hgun_P07_khk_snds_F,
        DefaultManWeapons,
        Rangefinder
    };
    respawnWeapons[] =
    {
        Atlas_arifle_SR25_MR_khk_SOS_IR_Snds_BI_F,
        hgun_P07_khk_snds_F,
        DefaultManWeapons,
        Rangefinder
    };
    magazines[] =
    {
        mag_6(Aegis_20Rnd_762x51_Red_SMAG),
        mag_2(16Rnd_9x21_Mag_v2),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_blue)
    };
    respawnMagazines[] =
    {
        mag_6(Aegis_20Rnd_762x51_Red_SMAG),
        mag_2(16Rnd_9x21_Mag_v2),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_blue)
    };
	linkedItems[] =
	{
		Aegis_V_PlateCarrier2_alt_tna,
		Aegis_H_Helmet_FASTMT_Cover_tna_F,
        G_Shemag_oli,
		ItemGPS,
		DefaultManLinkedItems,
		Aegis_NVG_IVAS_01_grn_F
	};
	respawnLinkedItems[] =
	{
		Aegis_V_PlateCarrier2_alt_tna,
		Aegis_H_Helmet_FASTMT_Cover_tna_F,
        G_Shemag_oli,
		ItemGPS,
		DefaultManLinkedItems,
		Aegis_NVG_IVAS_01_grn_F
	};
};
class Atlas_B_T_JSOC_UAV_F: Atlas_B_T_Soldier_JSOC_base
{
	author = $STR_A3_A_Ravenholme;
	editorPreview  = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_T_JSOC_UAV_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_A_cfgVehicles_Atlas_B_JSOC_UAV_F0;
	uavHacker = true;
    cost = 150000;
	role = SpecialOperative;
	backpack = B_UAV_01_backpack_F;
	uniformClass = Atlas_U_B_T_JSOC_StealthUniform_RolledUp_F;
	weapons[] =
    {
        Atlas_arifle_MX_khk_HAMR_IR_Snds_F,
        hgun_P07_khk_snds_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        Atlas_arifle_MX_khk_HAMR_IR_Snds_F,
        hgun_P07_khk_snds_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_65x39_caseless_khaki_mag),
        mag_2(16Rnd_9x21_Mag_v2),
        mag_2(MiniGrenade),
        SmokeShell,
        SMOKESHELLS_BLUFOR,
        mag_2(Chemlight_blue)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_65x39_caseless_khaki_mag),
        mag_2(16Rnd_9x21_Mag_v2),
        mag_2(MiniGrenade),
        SmokeShell,
        SMOKESHELLS_BLUFOR,
        mag_2(Chemlight_blue)
    };
	linkedItems[] =
	{
		Aegis_V_PlateCarrier2_alt_tna,
		Aegis_H_Helmet_FASTMT_Cover_tna_F,
        G_Balaclava_light_tropic_F,
		ItemGPS,
		DefaultManLinkedItems,
		Aegis_NVG_IVAS_01_grn_F
	};
	respawnLinkedItems[] =
	{
		Aegis_V_PlateCarrier2_alt_tna,
		Aegis_H_Helmet_FASTMT_Cover_tna_F,
        G_Balaclava_light_tropic_F,
		ItemGPS,
		DefaultManLinkedItems,
		Aegis_NVG_IVAS_01_grn_F
	};
};
class Atlas_B_T_JSOC_UAV_lxWS: Atlas_B_T_Soldier_JSOC_base
{
	author = $STR_A3_A_Ravenholme;
	editorPreview  = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_T_JSOC_UAV_lxWS.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_A_cfgVehicles_Atlas_B_JSOC_UAV_lxWS0;
	uavHacker = true;
    cost = 150000;
	role = SpecialOperative;
	backpack = B_UAV_02_backpack_lXWS;
	weapons[] =
    {
        Atlas_arifle_MXC_khk_Holo_IR_Snds_F,
        hgun_P07_khk_snds_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        Atlas_arifle_MXC_khk_Holo_IR_Snds_F,
        hgun_P07_khk_snds_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_65x39_caseless_khaki_mag),
        mag_2(16Rnd_9x21_Mag_v2),
        mag_2(MiniGrenade),
        SmokeShell,
        SMOKESHELLS_BLUFOR,
        mag_2(Chemlight_blue)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_65x39_caseless_khaki_mag),
        mag_2(16Rnd_9x21_Mag_v2),
        mag_2(MiniGrenade),
        SmokeShell,
        SMOKESHELLS_BLUFOR,
        mag_2(Chemlight_blue)
    };
	linkedItems[] =
	{
		Aegis_V_PlateCarrier2_alt_tna,
		Aegis_H_Helmet_FASTMT_Cover_tna_F,
        G_Balaclava_light_tropic_F,
		ItemGPS,
		DefaultManLinkedItems,
		Aegis_NVG_IVAS_01_grn_F
	};
	respawnLinkedItems[] =
	{
		Aegis_V_PlateCarrier2_alt_tna,
		Aegis_H_Helmet_FASTMT_Cover_tna_F,
        G_Balaclava_light_tropic_F,
		ItemGPS,
		DefaultManLinkedItems,
		Aegis_NVG_IVAS_01_grn_F
	};
};

/* US (Woodland) JSOC */
class Atlas_B_W_JSOC_AR_F: Atlas_B_W_Soldier_JSOC_base
{
	author = $STR_A3_A_Ravenholme;
	editorPreview  = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_W_JSOC_AR_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_B_soldier_AR_F0;
	cost = 220000;
	icon = iconManMG;
	role = MachineGunner;
    threat[] = 
	{
		1,
		0.1,
		0.3
	};
	weapons[] =
    {
        Atlas_arifle_MX_SW_blk_HAMR_IR_Snds_BI_F,
       	hgun_P07_blk_snds_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        Atlas_arifle_MX_SW_blk_HAMR_IR_Snds_BI_F,
       	hgun_P07_blk_snds_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_4(100rnd_65x39_caseless_black_mag),
		mag_2(16Rnd_9x21_Mag_v2),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_blue)
    };
    respawnMagazines[] =
    {
        mag_4(100rnd_65x39_caseless_black_mag),
		mag_2(16Rnd_9x21_Mag_v2),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_blue)
    };
	linkedItems[] =
	{
		Aegis_V_PlateCarrier2_alt_wdl,
		Aegis_H_Helmet_FASTMT_Cover_wdl_F,
        G_Shemag_oli,
		ItemGPS,
		DefaultManLinkedItems,
		Aegis_NVG_IVAS_01_grn_F
	};
	respawnLinkedItems[] =
	{
		Aegis_V_PlateCarrier2_alt_wdl,
		Aegis_H_Helmet_FASTMT_Cover_wdl_F,
        G_Shemag_oli,
		ItemGPS,
		DefaultManLinkedItems,
		Aegis_NVG_IVAS_01_grn_F
	};
};
class Atlas_B_W_JSOC_Exp_F: Atlas_B_W_Soldier_JSOC_base
{
	author = $STR_A3_A_Ravenholme;
	editorPreview  = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_W_JSOC_Exp_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_B_Soldier_exp_F0;
	backpack = Atlas_B_W_AssaultPack_JSOC_Exp_F;
	canDeactivateMines = true;
	detectSkill = 38;
	icon = iconManExplosive;
	picture = pictureExplosive;
	uniformClass = Atlas_U_B_W_JSOC_StealthUniform_RolledUp_F;
	role = Sapper;
	weapons[] =
    {
        Atlas_arifle_MXC_blk_Holo_IR_Snds_F,
        hgun_P07_blk_snds_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        Atlas_arifle_MXC_blk_Holo_IR_Snds_F,
        hgun_P07_blk_snds_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag_v2),
        mag_3(APERSMine_Range_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_blue)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag_v2),
        mag_3(APERSMine_Range_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_blue)
    };
	linkedItems[] =
	{
		Aegis_V_PlateCarrier2_alt_wdl,
		Aegis_H_Helmet_FASTMT_Cover_wdl_F,
        G_Balaclava_light_wdl_F,
		ItemGPS,
		DefaultManLinkedItems,
		Aegis_NVG_IVAS_01_grn_F
	};
	respawnLinkedItems[] =
	{
		Aegis_V_PlateCarrier2_alt_wdl,
		Aegis_H_Helmet_FASTMT_Cover_wdl_F,
        G_Balaclava_light_wdl_F,
		ItemGPS,
		DefaultManLinkedItems,
		Aegis_NVG_IVAS_01_grn_F
	};
};
class Atlas_B_W_JSOC_GL_F: Atlas_B_W_Soldier_JSOC_base
{
	author = $STR_A3_A_Ravenholme;
	editorPreview  = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_W_JSOC_GL_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_B_Soldier_GL_F0;
	cost = 200000;
	role = Grenadier;
	weapons[] =
    {
        Atlas_arifle_MX_GL_blk_HAMR_IR_Snds_F,
        hgun_P07_blk_snds_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        Atlas_arifle_MX_GL_blk_HAMR_IR_Snds_F,
        hgun_P07_blk_snds_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag_v2),
        mag_2(3Rnd_HE_Grenade_shell),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_blue),
        3Rnd_Smoke_Grenade_shell,
        3Rnd_HEDP_Grenade_shell
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag_v2),
        mag_2(3Rnd_HE_Grenade_shell),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_blue),
        3Rnd_Smoke_Grenade_shell,
        3Rnd_HEDP_Grenade_shell
    };
	linkedItems[] =
	{
		Aegis_V_PlateCarrier2_alt_wdl,
		Aegis_H_Helmet_FASTMT_Cover_wdl_F,
        G_Balaclava_light_wdl_F,
		ItemGPS,
		DefaultManLinkedItems,
		Aegis_NVG_IVAS_01_grn_F
	};
	respawnLinkedItems[] =
	{
		Aegis_V_PlateCarrier2_alt_wdl,
		Aegis_H_Helmet_FASTMT_Cover_wdl_F,
        G_Balaclava_light_wdl_F,
		ItemGPS,
		DefaultManLinkedItems,
		Aegis_NVG_IVAS_01_grn_F
	};
};
class Atlas_B_W_JSOC_JTAC_F: Atlas_B_W_Soldier_JSOC_base
{
	author = $STR_A3_A_Ravenholme;
	editorPreview  = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_W_JSOC_JTAC_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_B_CTRG_Soldier_JTAC_tna_F0;
	role = SpecialOperative;
	backpack = B_RadioBag_01_wdl_F;
	weapons[] =
    {
        Atlas_arifle_MX_blk_HAMR_IR_Snds_F,
        hgun_P07_blk_snds_F,
        DefaultManWeapons,
        Laserdesignator
    };
    respawnWeapons[] =
    {
        Atlas_arifle_MX_blk_HAMR_IR_Snds_F,
        hgun_P07_blk_snds_F,
        DefaultManWeapons,
        Laserdesignator
    };
    magazines[] =
    {
        mag_6(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag_v2),
        mag_2(MiniGrenade),
        mag_2(B_IR_Grenade),
        Laserbatteries,
        SmokeShell,
        SMOKESHELLS_BLUFOR,
        mag_2(Chemlight_blue)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag_v2),
        mag_2(MiniGrenade),
        mag_2(B_IR_Grenade),
        Laserbatteries,
        SmokeShell,
        SMOKESHELLS_BLUFOR,
        mag_2(Chemlight_blue)
    };
	linkedItems[] =
	{
		Aegis_V_PlateCarrier2_alt_wdl,
		Aegis_H_Helmet_FASTMT_Cover_wdl_F,
        G_Balaclava_light_wdl_F,
		ItemGPS,
		DefaultManLinkedItems,
		Aegis_NVG_IVAS_01_grn_F
	};
	respawnLinkedItems[] =
	{
		Aegis_V_PlateCarrier2_alt_wdl,
		Aegis_H_Helmet_FASTMT_Cover_wdl_F,
        G_Balaclava_light_wdl_F,
		ItemGPS,
		DefaultManLinkedItems,
		Aegis_NVG_IVAS_01_grn_F
	};
};
class Atlas_B_W_JSOC_M_F: Atlas_B_W_Soldier_JSOC_base
{
	author = $STR_A3_A_Ravenholme;
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
	editorPreview  = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_W_JSOC_M_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_B_soldier_M_F0;
	cost = 250000;
	role = Marksman;
    uniformClass = Atlas_U_B_W_JSOC_StealthUniform_RolledUp_F;
	primaryAmmoCoef = 0.2;
	secondaryAmmoCoef = 0.05;
	handgunAmmoCoef = 0.1;
	threat[] = 
	{
		1,
		0.1
		,0.3
	};
	weapons[] =
    {
        Atlas_arifle_MXM_blk_SOS_IR_Snds_BI_F,
        hgun_P07_blk_snds_F,
        DefaultManWeapons,
        Rangefinder
    };
    respawnWeapons[] =
    {
        Atlas_arifle_MXM_blk_SOS_IR_Snds_BI_F,
        hgun_P07_blk_snds_F,
        DefaultManWeapons,
        Rangefinder
    };
    magazines[] =
    {
        mag_6(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag_v2),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_blue)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag_v2),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_blue)
    };
	linkedItems[] =
	{
		Aegis_V_PlateCarrier2_alt_wdl,
		Aegis_H_Helmet_FASTMT_Cover_wdl_F,
        G_Balaclava_light_wdl_F,
		ItemGPS,
		DefaultManLinkedItems,
		Aegis_NVG_IVAS_01_grn_F
	};
	respawnLinkedItems[] =
	{
		Aegis_V_PlateCarrier2_alt_wdl,
		Aegis_H_Helmet_FASTMT_Cover_wdl_F,
        G_Balaclava_light_wdl_F,
		ItemGPS,
		DefaultManLinkedItems,
		Aegis_NVG_IVAS_01_grn_F
	};
};
class Atlas_B_W_JSOC_Medic_F: Atlas_B_W_Soldier_JSOC_base
{
	author = $STR_A3_A_Ravenholme;
	editorPreview  = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_W_JSOC_Medic_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_B_Medic_F0;
	backpack = Atlas_B_W_AssaultPack_JSOC_Medic_F;
	attendant = true;
	icon = iconManMedic;
	picture = pictureHeal;
	role = CombatLifeSaver;
    threat[] = 
	{
		1,
		0.1,
		0.3
	};
	weapons[] =
    {
        Atlas_arifle_MXC_blk_Holo_IR_Snds_F,
        hgun_P07_blk_snds_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        Atlas_arifle_MXC_blk_Holo_IR_Snds_F,
        hgun_P07_blk_snds_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag_v2),
        mag_2(MiniGrenade),
        SmokeShell,
        SMOKESHELLS_MEDIC,
        mag_2(Chemlight_blue)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag_v2),
        mag_2(MiniGrenade),
        SmokeShell,
        SMOKESHELLS_MEDIC,
        mag_2(Chemlight_blue)
    };
	linkedItems[] =
	{
		Aegis_V_PlateCarrier2_alt_wdl,
		Aegis_H_Helmet_FASTMT_Cover_wdl_F,
        G_Balaclava_light_wdl_F,
		ItemGPS,
		DefaultManLinkedItems,
		Aegis_NVG_IVAS_01_grn_F
	};
	respawnLinkedItems[] =
	{
		Aegis_V_PlateCarrier2_alt_wdl,
		Aegis_H_Helmet_FASTMT_Cover_wdl_F,
        G_Balaclava_light_wdl_F,
		ItemGPS,
		DefaultManLinkedItems,
		Aegis_NVG_IVAS_01_grn_F
	};
};
class Atlas_B_W_JSOC_F: Atlas_B_W_Soldier_JSOC_base
{
	author = $STR_A3_A_Ravenholme;
	editorPreview  = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_W_JSOC_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_A_cfgVehicles_Atlas_B_JSOC_F0;
	weapons[] =
    {
        Atlas_arifle_MX_blk_HAMR_IR_Snds_F,
        hgun_P07_blk_snds_F,
        DefaultManWeapons,
        Binocular
    };
    respawnWeapons[] =
    {
       	Atlas_arifle_MX_blk_HAMR_IR_Snds_F,
        hgun_P07_blk_snds_F,
        DefaultManWeapons,
        Binocular
    };
    magazines[] =
    {
        mag_10(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag_v2),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_blue)
    };
    respawnMagazines[] =
    {
    	mag_10(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag_v2),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_blue)
    };
	linkedItems[] =
	{
		Aegis_V_PlateCarrier2_alt_wdl,
		Aegis_H_Helmet_FASTMT_Cover_wdl_F,
        G_Balaclava_light_wdl_F,
		ItemGPS,
		DefaultManLinkedItems,
		Aegis_NVG_IVAS_01_grn_F
	};
	respawnLinkedItems[] =
	{
		Aegis_V_PlateCarrier2_alt_wdl,
		Aegis_H_Helmet_FASTMT_Cover_wdl_F,
        G_Balaclava_light_wdl_F,
		ItemGPS,
		DefaultManLinkedItems,
		Aegis_NVG_IVAS_01_grn_F
	};
};
class Atlas_B_W_JSOC_LAT_F: Atlas_B_W_Soldier_JSOC_base
{
	author = $STR_A3_A_Ravenholme;
	editorPreview  = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_W_JSOC_LAT_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_A_cfgVehicles_Atlas_B_JSOC_LAT_F0;
	backpack = Atlas_B_W_AssaultPack_JSOC_LAT_F;
	uniformClass = Atlas_U_B_W_JSOC_StealthUniform_RolledUp_F;
	cost = 130000;
	threat[] = 
	{
		1,
		0.6,
		0.1
	};
	secondaryAmmoCoef = 0.5;
	icon = iconManAT;
	role = MissileSpecialist;
	weapons[] =
    {
        Atlas_arifle_MXC_blk_Holo_IR_Snds_F,
        hgun_P07_blk_snds_F,
		launch_MRAWS_green_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        Atlas_arifle_MXC_blk_Holo_IR_Snds_F,
        hgun_P07_blk_snds_F,
		launch_MRAWS_green_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag_v2),
		MRAWS_HEAT_F,
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_blue)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag_v2),
		MRAWS_HEAT_F,
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_blue)
    };
	linkedItems[] =
	{
		Aegis_V_PlateCarrier2_alt_wdl,
		Aegis_H_Helmet_FASTMT_Cover_wdl_F,
        G_Balaclava_light_wdl_F,
		ItemGPS,
		DefaultManLinkedItems,
		Aegis_NVG_IVAS_01_grn_F
	};
	respawnLinkedItems[] =
	{
		Aegis_V_PlateCarrier2_alt_wdl,
		Aegis_H_Helmet_FASTMT_Cover_wdl_F,
        G_Balaclava_light_wdl_F,
		ItemGPS,
		DefaultManLinkedItems,
		Aegis_NVG_IVAS_01_grn_F
	};
};
class Atlas_B_W_JSOC_TL_F: Atlas_B_W_Soldier_JSOC_base
{
	author = $STR_A3_A_Ravenholme;
	editorPreview  = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_W_JSOC_TL_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_B_Soldier_TL_F0;
    uniformClass = Atlas_U_B_W_JSOC_StealthUniform_RolledUp_F;
	cost = 250000;
	icon = iconManLeader;
	role = Rifleman;
    threat[] = 
	{
		1,
		0.1,
		0.3
	};
	weapons[] =
    {
        Atlas_arifle_MX_blk_HAMR_IR_Snds_F,
        hgun_P07_blk_snds_F,
        DefaultManWeapons,
        Rangefinder
    };
    respawnWeapons[] =
    {
        Atlas_arifle_MX_blk_HAMR_IR_Snds_F,
        hgun_P07_blk_snds_F,
        DefaultManWeapons,
        Rangefinder
    };
    magazines[] =
    {
        mag_4(30Rnd_65x39_caseless_black_mag),
        mag_2(30Rnd_65x39_caseless_black_mag_tracer),
        mag_2(16Rnd_9x21_Mag_v2),
        mag_2(MiniGrenade),
        SmokeShell,
        SMOKESHELLS_BLUFOR,
        mag_2(Chemlight_blue)
    };
    respawnMagazines[] =
    {
        mag_4(30Rnd_65x39_caseless_black_mag),
        mag_2(30Rnd_65x39_caseless_black_mag_tracer),
        mag_2(16Rnd_9x21_Mag_v2),
        mag_2(MiniGrenade),
        SmokeShell,
        SMOKESHELLS_BLUFOR,
        mag_2(Chemlight_blue)
    };
	linkedItems[] =
	{
		Aegis_V_PlateCarrier2_alt_wdl,
		Aegis_H_Helmet_FASTMT_Cover_wdl_F,
        G_Balaclava_light_wdl_F,
		ItemGPS,
		DefaultManLinkedItems,
		Aegis_NVG_IVAS_01_grn_F
	};
	respawnLinkedItems[] =
	{
		Aegis_V_PlateCarrier2_alt_wdl,
		Aegis_H_Helmet_FASTMT_Cover_wdl_F,
        G_Balaclava_light_wdl_F,
		ItemGPS,
		DefaultManLinkedItems,
		Aegis_NVG_IVAS_01_grn_F
	};
};
class Atlas_B_W_JSOC_SL_F: Atlas_B_W_Soldier_JSOC_base
{
	author = $STR_A3_A_Ravenholme;
	editorPreview  = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_W_JSOC_SL_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_B_Soldier_SL_F0;
	cost = 250000;
	icon = iconManLeader;
	role = Grenadier;
    threat[] = 
	{
		1,
		0.1,
		0.3
	};
	weapons[] =
    {
        Atlas_arifle_MX_GL_blk_HAMR_IR_Snds_F,
        hgun_P07_blk_snds_F,
        DefaultManWeapons,
        Rangefinder
    };
    respawnWeapons[] =
    {
        Atlas_arifle_MX_GL_blk_HAMR_IR_Snds_F,
        hgun_P07_blk_snds_F,
        DefaultManWeapons,
        Rangefinder
    };
    magazines[] =
    {
        mag_4(30Rnd_65x39_caseless_black_mag),
        mag_2(30Rnd_65x39_caseless_black_mag_tracer),
        mag_2(16Rnd_9x21_Mag_v2),
        mag_2(3Rnd_HE_Grenade_shell),
        mag_2(MiniGrenade),
        SmokeShell,
        SMOKESHELLS_BLUFOR,
        mag_2(Chemlight_blue),
        3Rnd_Smoke_Grenade_shell,
		SMOKEGRENADES_BLUFOR
    };
    respawnMagazines[] =
    {
        mag_4(30Rnd_65x39_caseless_black_mag),
        mag_2(30Rnd_65x39_caseless_black_mag_tracer),
        mag_2(16Rnd_9x21_Mag_v2),
        mag_2(3Rnd_HE_Grenade_shell),
        mag_2(MiniGrenade),
        SmokeShell,
        SMOKESHELLS_BLUFOR,
        mag_2(Chemlight_blue),
        3Rnd_Smoke_Grenade_shell,
		SMOKEGRENADES_BLUFOR
    };
	linkedItems[] =
	{
		Aegis_V_PlateCarrier2_alt_wdl,
		Aegis_H_Helmet_FASTMT_Cover_wdl_F,
        G_Shemag_oli,
		ItemGPS,
		DefaultManLinkedItems,
		Aegis_NVG_IVAS_01_grn_F
	};
	respawnLinkedItems[] =
	{
		Aegis_V_PlateCarrier2_alt_wdl,
		Aegis_H_Helmet_FASTMT_Cover_wdl_F,
        G_Shemag_oli,
		ItemGPS,
		DefaultManLinkedItems,
		Aegis_NVG_IVAS_01_grn_F
	};
};
class Atlas_B_W_JSOC_Sharpshooter_F: Atlas_B_W_JSOC_M_F
{
	author = $STR_A3_A_Ravenholme;
	editorPreview  = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_W_JSOC_Sharpshooter_F.jpg";
	displayName = $STR_A3_cfgVehicles_B_Sharpshooter_F0;
	weapons[] =
    {
        Atlas_arifle_SR25_MR_SOS_IR_Snds_BI_F,
        hgun_P07_blk_snds_F,
        DefaultManWeapons,
        Rangefinder
    };
    respawnWeapons[] =
    {
        Atlas_arifle_SR25_MR_SOS_IR_Snds_BI_F,
        hgun_P07_blk_snds_F,
        DefaultManWeapons,
        Rangefinder
    };
    magazines[] =
    {
        mag_6(Aegis_20Rnd_762x51_Red_SMAG),
        mag_2(16Rnd_9x21_Mag_v2),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_blue)
    };
    respawnMagazines[] =
    {
        mag_6(Aegis_20Rnd_762x51_Red_SMAG),
        mag_2(16Rnd_9x21_Mag_v2),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_blue)
    };
	linkedItems[] =
	{
		Aegis_V_PlateCarrier2_alt_wdl,
		Aegis_H_Helmet_FASTMT_Cover_wdl_F,
        G_Shemag_oli,
		ItemGPS,
		DefaultManLinkedItems,
		Aegis_NVG_IVAS_01_grn_F
	};
	respawnLinkedItems[] =
	{
		Aegis_V_PlateCarrier2_alt_wdl,
		Aegis_H_Helmet_FASTMT_Cover_wdl_F,
        G_Shemag_oli,
		ItemGPS,
		DefaultManLinkedItems,
		Aegis_NVG_IVAS_01_grn_F
	};
};
class Atlas_B_W_JSOC_UAV_F: Atlas_B_W_Soldier_JSOC_base
{
	author = $STR_A3_A_Ravenholme;
	editorPreview  = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_W_JSOC_UAV_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_A_cfgVehicles_Atlas_B_JSOC_UAV_F0;
	uavHacker = true;
    cost = 150000;
	role = SpecialOperative;
	backpack = B_UAV_01_backpack_F;
	weapons[] =
    {
        Atlas_arifle_MX_blk_HAMR_IR_Snds_F,
        hgun_P07_blk_snds_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        Atlas_arifle_MX_blk_HAMR_IR_Snds_F,
        hgun_P07_blk_snds_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag_v2),
        mag_2(MiniGrenade),
        SmokeShell,
        SMOKESHELLS_BLUFOR,
        mag_2(Chemlight_blue)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag_v2),
        mag_2(MiniGrenade),
        SmokeShell,
        SMOKESHELLS_BLUFOR,
        mag_2(Chemlight_blue)
    };
	linkedItems[] =
	{
		Aegis_V_PlateCarrier2_alt_wdl,
		Aegis_H_Helmet_FASTMT_Cover_wdl_F,
        G_Balaclava_light_wdl_F,
		ItemGPS,
		DefaultManLinkedItems,
		Aegis_NVG_IVAS_01_grn_F
	};
	respawnLinkedItems[] =
	{
		Aegis_V_PlateCarrier2_alt_wdl,
		Aegis_H_Helmet_FASTMT_Cover_wdl_F,
        G_Balaclava_light_wdl_F,
		ItemGPS,
		DefaultManLinkedItems,
		Aegis_NVG_IVAS_01_grn_F
	};
};
class Atlas_B_W_JSOC_UAV_lxWS: Atlas_B_W_Soldier_JSOC_base
{
	author = $STR_A3_A_Ravenholme;
	editorPreview  = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_W_JSOC_UAV_lxWS.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_A_cfgVehicles_Atlas_B_JSOC_UAV_lxWS0;
	uavHacker = true;
    cost = 150000;
	role = SpecialOperative;
	backpack = B_UAV_02_backpack_lXWS;
	weapons[] =
    {
        Atlas_arifle_MXC_blk_Holo_IR_Snds_F,
        hgun_P07_blk_snds_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        Atlas_arifle_MXC_blk_Holo_IR_Snds_F,
        hgun_P07_blk_snds_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag_v2),
        mag_2(MiniGrenade),
        SmokeShell,
        SMOKESHELLS_BLUFOR,
        mag_2(Chemlight_blue)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag_v2),
        mag_2(MiniGrenade),
        SmokeShell,
        SMOKESHELLS_BLUFOR,
        mag_2(Chemlight_blue)
    };
	linkedItems[] =
	{
		Aegis_V_PlateCarrier2_alt_wdl,
		Aegis_H_Helmet_FASTMT_Cover_wdl_F,
        G_Balaclava_light_wdl_F,
		ItemGPS,
		DefaultManLinkedItems,
		Aegis_NVG_IVAS_01_grn_F
	};
	respawnLinkedItems[] =
	{
		Aegis_V_PlateCarrier2_alt_wdl,
		Aegis_H_Helmet_FASTMT_Cover_wdl_F,
        G_Balaclava_light_wdl_F,
		ItemGPS,
		DefaultManLinkedItems,
		Aegis_NVG_IVAS_01_grn_F
	};
};