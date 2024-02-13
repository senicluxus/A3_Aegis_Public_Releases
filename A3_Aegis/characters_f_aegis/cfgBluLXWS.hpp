/* US (Desert )*/
class B_D_Soldier_UAV01_lxWS;
class Aegis_B_D_HeavyGunner_F: B_HeavyGunner_F
{
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_B_D_HeavyGunner_F.jpg";
    faction = BLU_NATO_lxWS;
    linkedItems[] =
    {
        V_lxWS_PlateCarrier1_desert,
        H_HelmetB_sand,
        DefaultManLinkedItems,
        NVGoggles
    };
    respawnLinkedItems[] =
    {
        V_lxWS_PlateCarrier1_desert,
        H_HelmetB_sand,
        DefaultManLinkedItems,
        NVGoggles
    };
	uniformClass = U_lxWS_B_CombatUniform_desert_tshirt;
};
class Aegis_B_D_Helicrew_F: B_Helicrew_F
{
    faction = BLU_NATO_lxWS;
};
class B_D_Pilot_lxWS : B_T_Pilot_F
{
   editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_Pilot_F.jpg";
   uniformClass = "U_B_PilotCoveralls";
   faction = "BLU_NATO_lxWS";
   weapons[] =
   {
      SMG_01_black_Holo_F,
        DefaultManWeapons
   };
   respawnWeapons[] =
   {
      SMG_01_black_Holo_F,
        DefaultManWeapons
   };
   magazines[] =
   {
        mag_4(30Rnd_45ACP_Mag_SMG_01),
        SMOKESHELLS_BLUFOR
   };
   respawnMagazines[] =
   {
        mag_4(30Rnd_45ACP_Mag_SMG_01),
        SMOKESHELLS_BLUFOR
   };
    linkedItems[] =
    {
        H_PilotHelmetHeli_B,
        DefaultManLinkedItems,
        NVGoggles
    };
    respawnLinkedItems[] =
    {
        H_PilotHelmetHeli_B,
        DefaultManLinkedItems,
        NVGoggles
    };
};
class Aegis_B_D_RadioOperator_F: B_RadioOperator_F
{
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_B_D_RadioOperator_F.jpg";
    faction = BLU_NATO_lxWS;
    backpack = Aegis_B_RadioBag_01_des_lxWS;
    uniformClass = U_lxWS_B_CombatUniform_desert_vest;
    linkedItems[] =
	{
        V_lxWS_PlateCarrier1_desert,
        H_HelmetB_sand,
		DefaultManLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
        V_lxWS_PlateCarrier1_desert,
        H_HelmetB_sand,
		DefaultManLinkedItems,
		NVGoggles
	};
};
class Aegis_B_D_Sharpshooter_F: B_Sharpshooter_F
{
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_B_D_Sharpshooter_F.jpg";
    faction = BLU_NATO_lxWS;
    uniformClass = U_lxWS_B_CombatUniform_desert_vest;
    linkedItems[] =
	{
        V_lxWS_PlateCarrier1_desert,
        H_HelmetB_sand,
		DefaultManLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
        V_lxWS_PlateCarrier1_desert,
        H_HelmetB_sand,
		DefaultManLinkedItems,
		NVGoggles
	};
};
class Aegis_B_D_Soldier_CQ_F: B_Soldier_CQ_F
{
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_B_D_Soldier_CQ_F.jpg";
    faction = BLU_NATO_lxWS;
    uniformClass = U_lxWS_B_CombatUniform_desert;
    linkedItems[] =
    {
        V_lxWS_PlateCarrier1_desert,
        H_HelmetB_sand,
        DefaultManLinkedItems,
        NVGoggles
    };
    respawnLinkedItems[] =
    {
        V_lxWS_PlateCarrier1_desert,
        H_HelmetB_sand,
        DefaultManLinkedItems,
        NVGoggles
    };
};
class Aegis_B_D_Soldier_MG_F: B_Soldier_MG_F
{
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_B_D_Soldier_MG_F.jpg";
    faction = BLU_NATO_lxWS;
    linkedItems[] =
    {
        V_lxWS_PlateCarrier2_desert,
        H_HelmetB_sand,
        DefaultManLinkedItems,
        NVGoggles
    };
    respawnLinkedItems[] =
    {
        V_lxWS_PlateCarrier2_desert,
        H_HelmetB_sand,
        DefaultManLinkedItems,
        NVGoggles
    };
    uniformClass = U_lxWS_B_CombatUniform_desert_vest;
};
class Aegis_B_D_soldier_UAV_06_F: B_D_Soldier_UAV01_lxWS
{
	//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_B_D_soldier_UAV_06_F.jpg";
	displayName = $STR_A3_B_T_soldier_UAV_06_F0;
	backpack = B_UAV_06_backpack_F;
};
class Aegis_B_D_soldier_UAV_06_medical_F: B_D_Soldier_UAV01_lxWS
{
	//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_B_D_soldier_UAV_06_medical_F.jpg";
	displayName = $STR_A3_B_T_soldier_UAV_06_medical_F0;
	backpack = B_UAV_06_medical_backpack_F;
};
class Aegis_B_D_soldier_UGV_02_Demining_F: B_D_Soldier_UAV01_lxWS
{
	//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_B_D_soldier_UGV_02_Demining_F.jpg";
	displayName = $STR_A3_C_B_soldier_UGV_02_Demining_F0;
	backpack = B_UGV_02_Demining_backpack_F;
};

/* Men (Recon) */
class B_D_recon_lxWS: B_recon_F
{
   editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_D_recon_lxWS.jpg";
	identityTypes[] =
	{
		LanguageENG_F,
		Head_NATO,
		G_NATO_SF
	};
    weapons[] =
    {
        arifle_SPAR_01_snd_RCO_Pointer_Snds_F,
        hgun_P07_snds_F,
        DefaultManWeapons,
        Binocular
    };
    respawnWeapons[] =
    {
        arifle_SPAR_01_snd_RCO_Pointer_Snds_F,
        hgun_P07_snds_F,
        DefaultManWeapons,
        Binocular
    };
    magazines[] =
    {
        mag_10(30Rnd_556x45_Stanag_Sand_red),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
    respawnMagazines[] =
    {
        mag_10(30Rnd_556x45_Stanag_Sand_red),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
	linkedItems[] =
	{
		V_lxWS_PlateCarrier1_desert,
      H_HelmetSpecB_light_sand,
		DefaultManLeaderLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		V_lxWS_PlateCarrier1_desert,
      H_HelmetSpecB_light_sand,
		DefaultManLeaderLinkedItems,
		NVGoggles
	};
   uniformClass = "U_lxWS_B_CombatUniform_desert_vest";
   faction = "BLU_NATO_lxWS";
};
class B_D_recon_AR_lxWS: B_recon_AR_F
{
   //editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_D_recon_AR_lxWS.jpg";
	identityTypes[] =
	{
		LanguageENG_F,
		Head_NATO,
		G_NATO_SF
	};
   weapons[] =
	{
		arifle_SPAR_02_snd_RCO_Pointer_Snds_Bipod_F,
		hgun_P07_snds_F,
      DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_SPAR_02_snd_RCO_Pointer_Snds_Bipod_F,
		hgun_P07_snds_F,
      DefaultManWeapons
	};
	magazines[] =
	{
        mag_6(150Rnd_556x45_Drum_Sand_Mag_F),
        mag_2(16Rnd_9x21_Mag),
        MiniGrenade,
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
	};
	respawnMagazines[] =
	{
        mag_6(150Rnd_556x45_Drum_Sand_Mag_F),
        mag_2(16Rnd_9x21_Mag),
        MiniGrenade,
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
	};
	linkedItems[] =
	{
		V_lxWS_PlateCarrier1_desert,
      H_HelmetSpecB_light_sand,
		DefaultManLeaderLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		V_lxWS_PlateCarrier1_desert,
      H_HelmetSpecB_light_sand,
		DefaultManLeaderLinkedItems,
		NVGoggles
	};
   uniformClass = "U_lxWS_B_CombatUniform_desert_vest";
   faction = "BLU_NATO_lxWS";
};
class B_D_recon_LAT_lxWS: B_recon_LAT_F
{
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_D_recon_LAT_lxWS.jpg";
	identityTypes[] =
	{
		LanguageENG_F,
		Head_NATO,
		G_NATO_SF
	};
    weapons[] =
    {
        arifle_SPAR_01_snd_Holo_Pointer_Snds_F,
        launch_NLAW_F,
        hgun_P07_snds_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_SPAR_01_snd_Holo_Pointer_Snds_F,
        launch_NLAW_F,
        hgun_P07_snds_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_556x45_Stanag_Sand_red),
        mag_2(16Rnd_9x21_Mag),
        NLAW_F,
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_556x45_Stanag_Sand_red),
        mag_2(16Rnd_9x21_Mag),
        NLAW_F,
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
	linkedItems[] =
	{
		V_lxWS_PlateCarrier2_desert,
        H_HelmetB,
		DefaultManLeaderLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		V_lxWS_PlateCarrier2_desert,
        H_HelmetB,
		DefaultManLeaderLinkedItems,
		NVGoggles
	};
   uniformClass = "U_lxWS_B_CombatUniform_desert_tshirt";
   faction = "BLU_NATO_lxWS";
};
class B_D_recon_medic_lxWS: B_recon_medic_F
{
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_D_recon_medic_lxWS.jpg";
	identityTypes[] =
	{
		LanguageENG_F,
		Head_NATO,
		G_NATO_SF
	};
    weapons[] =
    {
        arifle_SPAR_01_snd_Holo_Pointer_Snds_F,
        hgun_P07_snds_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_SPAR_01_snd_Holo_Pointer_Snds_F,
        hgun_P07_snds_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_556x45_Stanag_Sand_red),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        SmokeShell,
        SMOKESHELLS_MEDIC,
        mag_2(Chemlight_green)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_556x45_Stanag_Sand_red),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        SmokeShell,
        SMOKESHELLS_MEDIC,
        mag_2(Chemlight_green)
    };
	linkedItems[] =
	{
		V_lxWS_PlateCarrier1_desert,
        H_HelmetB,
		DefaultManLeaderLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		V_lxWS_PlateCarrier1_desert,
        H_HelmetB,
		DefaultManLeaderLinkedItems,
		NVGoggles
	};
   uniformClass = "U_lxWS_B_CombatUniform_desert_tshirt";
   faction = "BLU_NATO_lxWS";
};
class B_D_recon_TL_lxWS: B_recon_TL_F
{
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_D_recon_TL_lxWS.jpg";
	identityTypes[] =
	{
		LanguageENG_F,
		Head_NATO,
		G_NATO_SF
	};
    weapons[] =
    {
        arifle_SPAR_01_snd_RCO_Pointer_Snds_F,
        hgun_P07_snds_F,
        DefaultManWeapons,
        Rangefinder
    };
    respawnWeapons[] =
    {
        arifle_SPAR_01_snd_RCO_Pointer_Snds_F,
        hgun_P07_snds_F,
        DefaultManWeapons,
        Rangefinder
    };
    role = Rifleman;
    magazines[] =
    {
        mag_4(30Rnd_556x45_Stanag_Sand_red),
        mag_2(30Rnd_556x45_Stanag_Sand_Tracer_Red),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        SmokeShell,
        SMOKESHELLS_BLUFOR,
        mag_2(Chemlight_green)
    };
    respawnMagazines[] =
    {
        mag_4(30Rnd_556x45_Stanag_Sand_red),
        mag_2(30Rnd_556x45_Stanag_Sand_Tracer_Red),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        SmokeShell,
        SMOKESHELLS_BLUFOR,
        mag_2(Chemlight_green)
    };
	linkedItems[] =
	{
		V_lxWS_PlateCarrier2_desert,
      H_HelmetSpecB_light_sand,
		DefaultManLeaderLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		V_lxWS_PlateCarrier2_desert,
      H_HelmetSpecB_light_sand,
		DefaultManLeaderLinkedItems,
		NVGoggles
	};
   uniformClass = "U_lxWS_B_CombatUniform_desert_vest";
   faction = "BLU_NATO_lxWS";
};
class B_D_recon_M_lxWS: B_recon_M_F
{
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_D_recon_M_lxWS.jpg";
    weapons[] =
    {
        arifle_SPAR_03_snd_MOS_Pointer_Snds_Bipod_F,
        hgun_P07_snds_F,
        DefaultManWeapons,
        Rangefinder
    };
    respawnWeapons[] =
    {
        arifle_SPAR_03_snd_MOS_Pointer_Snds_Bipod_F,
        hgun_P07_snds_F,
        DefaultManWeapons,
        Rangefinder
    };
    magazines[] =
    {
        mag_8(20Rnd_762x51_Mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
    respawnMagazines[] =
    {
        mag_8(20Rnd_762x51_Mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
	linkedItems[] =
	{
		V_TacVest_oli,
        H_Booniehat_mcamo_hs,
		DefaultManLeaderLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		V_TacVest_oli,
        H_Booniehat_mcamo_hs,
		DefaultManLeaderLinkedItems,
		NVGoggles
	};
	items[] =
	{
		FirstAidKit,
		optic_tws_sniper
	};
	respawnItems[] =
	{
		FirstAidKit,
		optic_tws_sniper
	};
   uniformClass = "U_lxWS_B_CombatUniform_desert";
   faction = "BLU_NATO_lxWS";
};
class B_D_recon_JTAC_lxWS: B_recon_JTAC_F
{
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_D_recon_JTAC_lxWS.jpg";
	identityTypes[] =
	{
		LanguageENG_F,
		Head_NATO,
		G_NATO_SF
	};
	backpack = B_RadioBag_01_coyote_F;
    weapons[] =
    {
        arifle_SPAR_01_snd_Holo_Pointer_Snds_F,
        hgun_P07_snds_F,
        DefaultManWeapons,
        Laserdesignator
    };
    respawnWeapons[] =
    {
        arifle_SPAR_01_snd_Holo_Pointer_Snds_F,
        hgun_P07_snds_F,
        DefaultManWeapons,
        Laserdesignator
    };
    magazines[] =
    {
        mag_6(30Rnd_556x45_Stanag_Sand_red),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_2(B_IR_Grenade),
        Laserbatteries,
        SmokeShell,
		SMOKESHELLS_BLUFOR,
        mag_2(Chemlight_green)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_556x45_Stanag_Sand_red),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_2(B_IR_Grenade),
        Laserbatteries,
        SmokeShell,
		SMOKESHELLS_BLUFOR,
        mag_2(Chemlight_green)
    };
	linkedItems[] =
	{
		V_lxWS_PlateCarrier1_desert,
        H_Watchcap_camo_hs,
		DefaultManLeaderLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		V_lxWS_PlateCarrier1_desert,
      H_Watchcap_camo_hs,
		DefaultManLeaderLinkedItems,
		NVGoggles
	};
   uniformClass = "U_lxWS_B_CombatUniform_desert";
   faction = "BLU_NATO_lxWS";
};
class B_D_recon_exp_lxWS : B_recon_exp_F
{
   editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_D_recon_exp_lxWS.jpg";
   weapons[] =
   {
      arifle_SPAR_01_snd_Holo_Pointer_Snds_F,
      hgun_P07_snds_F,
      DefaultManWeapons
   };
   respawnWeapons[] =
   {
      arifle_SPAR_01_snd_Holo_Pointer_Snds_F,
      hgun_P07_snds_F,
      DefaultManWeapons
   };
   magazines[] =
   {
      mag_6(30Rnd_556x45_Stanag_Sand_red),
      mag_2(16Rnd_9x21_Mag),
      mag_3(APERSMine_Range_Mag),
      mag_2(MiniGrenade),
      mag_2(SmokeShell),
      mag_2(Chemlight_green)
   };
   respawnMagazines[] =
   {
      mag_6(30Rnd_556x45_Stanag_Sand_red),
      mag_2(16Rnd_9x21_Mag),
      mag_3(APERSMine_Range_Mag),
      mag_2(MiniGrenade),
      mag_2(SmokeShell),
      mag_2(Chemlight_green)
   };
   linkedItems[] =
   {
      V_lxWS_PlateCarrier1_desert,
      lxWS_H_Booniehat_desert,
      DefaultManLeaderLinkedItems,
      NVGoggles
   };
   respawnLinkedItems[] =
   {
      V_lxWS_PlateCarrier1_desert,
      lxWS_H_Booniehat_desert,
      DefaultManLeaderLinkedItems,
      NVGoggles
   };
   uniformClass = U_lxWS_B_CombatUniform_desert_tshirt;
   faction = BLU_NATO_lxWS;
};
class Aegis_B_D_Recon_GL_F: B_recon_GL_F
{
    author = $STR_A3_A_Ravenholme;
    faction = BLU_NATO_lxWS;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_B_D_recon_GL_F.jpg";
    uniformClass = U_lxWS_B_CombatUniform_desert_vest;
    linkedItems[] =
	{
		V_lxWS_PlateCarrier2_desert,
        H_HelmetB_light_sand,
		DefaultManLeaderLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		V_lxWS_PlateCarrier2_desert,
        H_HelmetB_light_sand,
		DefaultManLeaderLinkedItems,
		NVGoggles
	};
};
class Aegis_B_D_Recon_MG_F: B_Recon_MG_F
{
    author = $STR_A3_A_Ravenholme;
    faction = BLU_NATO_lxWS;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_B_D_recon_MG_F.jpg";
    uniformClass = U_lxWS_B_CombatUniform_desert;
    linkedItems[] =
	{
		V_lxWS_PlateCarrier2_desert,
        H_HelmetB_light_sand,
        ItemGPS,
		DefaultManLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		V_lxWS_PlateCarrier2_desert,
        H_HelmetB_light_sand,
        ItemGPS,
		DefaultManLinkedItems,
		NVGoggles
	};
};
class Aegis_B_D_Recon_CQ_F: B_Recon_CQ_F
{
    author = $STR_A3_A_Ravenholme;
    faction = BLU_NATO_lxWS;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_B_D_recon_CQ_F.jpg";
    uniformClass = U_lxWS_B_CombatUniform_desert_vest;
    linkedItems[] =
	{
		V_lxWS_PlateCarrier1_desert,
        H_HelmetB_light_sand,
        ItemGPS,
		DefaultManLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		V_lxWS_PlateCarrier1_desert,
        H_HelmetB_light_sand,
        ItemGPS,
		DefaultManLinkedItems,
		NVGoggles
	};
};
class Aegis_B_D_Recon_Sharpshooter: B_Recon_Sharpshooter_F
{
    author = $STR_A3_A_Ravenholme;
    faction = BLU_NATO_lxWS;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_B_D_recon_CQ_F.jpg";
    uniformClass = U_lxWS_B_CombatUniform_desert_tshirt;
    linkedItems[] =
	{
		V_TacVest_khk,
        lxWS_H_booniehat_desert,
		DefaultManLeaderLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		V_TacVest_khk,
        lxWS_H_booniehat_desert,
		DefaultManLeaderLinkedItems,
		NVGoggles
	};
};