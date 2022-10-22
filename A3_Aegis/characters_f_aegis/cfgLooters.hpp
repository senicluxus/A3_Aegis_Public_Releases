/* Looters */
class I_L_Soldier_Base_F: I_Soldier_base_F
{
	identityTypes[] =
    {
        LanguagePOL_F,
        Head_Enoch,
        Head_Euro,
        G_LOOTER_default
    };
};
class I_L_Looter_Pistol_F: I_L_Soldier_Base_F
{
	linkedItems[] = {DefaultManLooterLinkedItems};
	respawnLinkedItems[] = {DefaultManLooterLinkedItems};
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
	magazines[] = {mag_4(10Rnd_9x21_Mag)};
	respawnMagazines[] = {mag_4(10Rnd_9x21_Mag)};
};
class I_L_Looter_SG_F: I_L_Soldier_Base_F
{
	linkedItems[] =
    {
        V_pocketed_coyote_F,
        DefaultManLooterLinkedItems
    };
	respawnLinkedItems[] =
    {
        V_pocketed_coyote_F,
        DefaultManLooterLinkedItems
    };
	magazines[] = {mag_6(2Rnd_12Gauge_Pellets)};
	respawnMagazines[] = {mag_6(2Rnd_12Gauge_Pellets)};
};
class I_L_Looter_Rifle_F: I_L_Soldier_Base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_L_Looter_Rifle_F.jpg";
	displayName = $STR_A3_A_CfgVehicles_I_L_Looter_Rifle_F0;
	uniformClass = U_IG_Guerilla3_2;
	linkedItems[] =
    {
        V_LegStrapBag_black_F,
        DefaultManLooterLinkedItems
    };
	respawnLinkedItems[] =
    {
        V_LegStrapBag_black_F,
        DefaultManLooterLinkedItems
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
	magazines[] = {mag_3(30Rnd_762x39_Mag_F)};
	respawnMagazines[] = {mag_3(30Rnd_762x39_Mag_F)};
};
class I_L_Criminal_SG_F: I_L_Soldier_Base_F
{
	linkedItems[] = {DefaultManLooterLinkedItems};
	respawnLinkedItems[] = {DefaultManLooterLinkedItems};
	weapons[] =
    {
        sgun_HunterShotgun_01_Sawedoff_F,
        hgun_G17_black_F,
        DefaultManWeapons
    };
	respawnWeapons[] =
    {
        sgun_HunterShotgun_01_Sawedoff_F,
        hgun_G17_black_F,
        DefaultManWeapons
    };
	magazines[] =
    {
        mag_6(2Rnd_12Gauge_Pellets),
        17Rnd_9x21_Mag
    };
	respawnMagazines[] =
    {
        mag_6(2Rnd_12Gauge_Pellets),
        17Rnd_9x21_Mag
    };
};
class I_L_Criminal_SMG_F: I_L_Soldier_Base_F
{
	linkedItems[] = {DefaultManLooterLinkedItems};
	respawnLinkedItems[] = {DefaultManLooterLinkedItems};
};
class I_L_Hunter_F: I_L_Soldier_Base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_L_Hunter_F.jpg";
	uniformClass = U_IG_Guerilla3_1;
	linkedItems[] = {DefaultManLooterLinkedItems};
	respawnLinkedItems[] = {DefaultManLooterLinkedItems};
};
class I_L_Deserter_base_F: I_L_Soldier_Base_F
{
	editorSubcategory = EdSubcat_Personnel_Deserters;
	identityTypes[] =
    {
        LanguagePOL_F,
        Head_Enoch,
        Head_Euro,
        G_LOOTER_default
    };
};
class I_L_Militiaman_SMG_F: I_L_Deserter_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_L_Militiaman_SMG_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_A_CfgVehicles_I_L_Militiaman_SMG_F0;
	uniformClass = U_I_L_Uniform_01_tshirt_sport_F;
	linkedItems[] =
    {
        H_Booniehat_mgrn,
        V_Pocketed_coyote_F,
        DefaultManLooterLinkedItems
    };
	respawnLinkedItems[] =
    {
        H_Booniehat_mgrn,
        V_Pocketed_coyote_F,
        DefaultManLooterLinkedItems
    };
	weapons[] =
    {
        SMG_03_TR_black,
        DefaultManWeapons
    };
	respawnWeapons[] =
    {
        SMG_03_TR_black,
        DefaultManWeapons
    };
	magazines[] =
    {
        mag_6(50Rnd_570x28_SMG_03),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
	respawnMagazines[] =
    {
        mag_6(50Rnd_570x28_SMG_03),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
};
class I_L_Militiaman_Rifle_F: I_L_Deserter_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_L_Militiaman_Rifle_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_A_CfgVehicles_I_L_Militiaman_Rifle_F0;
	uniformClass = U_I_L_Uniform_01_tshirt_black_F;
	linkedItems[] =
    {
        H_Bandanna_khk,
        V_TacVest_oli,
        DefaultManLooterLinkedItems
    };
	respawnLinkedItems[] =
    {
        H_Bandanna_khk,
        V_TacVest_oli,
        DefaultManLooterLinkedItems
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
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
	respawnMagazines[] =
    {
        mag_6(30Rnd_762x39_Mag_F),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
};
class I_L_Militiaman_Leader_F: I_L_Deserter_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_L_Militiaman_Leader_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_A_CfgVehicles_I_L_Militiaman_Leader_F0;
	uniformClass = U_I_L_Uniform_01_tshirt_skull_F;
	linkedItems[] =
    {
        H_Cap_oli,
        V_BandollierB_oli,
        DefaultManLooterLinkedItems
    };
	respawnLinkedItems[] =
    {
        H_Cap_oli,
        V_BandollierB_oli,
        DefaultManLooterLinkedItems
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
        mag_6(30Rnd_545x39_Mag_F),
        mag_2(HandGrenade),
        SmokeShell,
        SMOKESHELLS_BLUFOR
    };
	respawnMagazines[] =
    {
        mag_6(30Rnd_545x39_Mag_F),
        mag_2(HandGrenade),
        SmokeShell,
        SMOKESHELLS_BLUFOR
    };
};
class I_L_Deserter_Rifle_F: I_L_Deserter_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_L_Deserter_Rifle_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_A_CfgVehicles_I_L_Deserter_Rifle_F0;
	uniformClass = U_I_L_Uniform_01_deserter_F;
	linkedItems[] =
    {
        H_HelmetHBK_F,
        V_CarrierRigKBT_01_light_EAF_F,
        DefaultManLinkedItems
    };
	respawnLinkedItems[] =
    {
        H_HelmetHBK_F,
        V_CarrierRigKBT_01_light_EAF_F,
        DefaultManLinkedItems
    };
	weapons[] =
    {
        arifle_MSBS65_ico_FL_f,
        hgun_Pistol_heavy_01_green_F,
        DefaultManWeapons
    };
	respawnWeapons[] =
    {
        arifle_MSBS65_ico_FL_f,
        hgun_Pistol_heavy_01_green_F,
        DefaultManWeapons
    };
	magazines[] =
    {
        mag_6(30Rnd_65x39_caseless_msbs_mag),
        mag_2(11Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
	respawnMagazines[] =
    {
        mag_6(30Rnd_65x39_caseless_msbs_mag),
        mag_2(11Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
};
class I_L_Deserter_AR_F: I_L_Deserter_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_L_Deserter_AR_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_A_CfgVehicles_I_L_Deserter_AR_F0;
	uniformClass = U_I_E_Uniform_01_tanktop_F;
	linkedItems[] =
    {
        H_HelmetHBK_ear_F,
        V_CarrierRigKBT_01_light_EAF_F,
        DefaultManLinkedItems
    };
	respawnLinkedItems[] =
    {
        H_HelmetHBK_ear_F,
        V_CarrierRigKBT_01_light_EAF_F,
        DefaultManLinkedItems
    };
	weapons[] =
    {
        LMG_Mk200_black_FL_F,
        hgun_Pistol_heavy_01_green_F,
        DefaultManWeapons
    };
	respawnWeapons[] =
    {
        LMG_Mk200_black_FL_F,
        hgun_Pistol_heavy_01_green_F,
        DefaultManWeapons
    };
	magazines[] =
    {
        mag_3(200Rnd_65x39_cased_Box_Red),
        mag_2(11Rnd_45ACP_Mag),
        HandGrenade,
        mag_2(SmokeShell)
    };
	respawnMagazines[] =
    {
        mag_3(200Rnd_65x39_cased_Box_Red),
        mag_2(11Rnd_45ACP_Mag),
        HandGrenade,
        mag_2(SmokeShell)
    };
};
class I_L_Deserter_GL_F: I_L_Deserter_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_L_Deserter_GL_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_A_CfgVehicles_I_L_Deserter_GL_F0;
	uniformClass = U_I_L_Uniform_01_camo_F;
	linkedItems[] =
    {
        H_HelmetHBK_chops_F,
        V_CarrierRigKBT_01_heavy_EAF_F,
        DefaultManLinkedItems
    };
	respawnLinkedItems[] =
    {
        H_HelmetHBK_chops_F,
        V_CarrierRigKBT_01_heavy_EAF_F,
        DefaultManLinkedItems
    };
	weapons[] =
    {
        arifle_MSBS65_GL_ico_FL_f,
        hgun_Pistol_heavy_01_green_F,
        DefaultManWeapons
    };
	respawnWeapons[] =
    {
        arifle_MSBS65_GL_ico_FL_f,
        hgun_Pistol_heavy_01_green_F,
        DefaultManWeapons
    };
	magazines[] =
    {
        mag_6(30Rnd_65x39_caseless_msbs_mag),
        mag_2(11Rnd_45ACP_Mag),
        mag_4(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        mag_2(SmokeShell),
        mag_2(1Rnd_Smoke_Grenade_shell)
    };
	respawnMagazines[] =
    {
        mag_6(30Rnd_65x39_caseless_msbs_mag),
        mag_2(11Rnd_45ACP_Mag),
        mag_4(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        mag_2(SmokeShell),
        mag_2(1Rnd_Smoke_Grenade_shell)
    };
};