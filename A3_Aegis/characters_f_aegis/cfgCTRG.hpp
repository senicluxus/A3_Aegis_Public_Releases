/* CTRG */
class B_Story_SF_Captain_F: B_Soldier_02_f
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_Story_SF_Captain_F.jpg";
	modelSides[] = {TFriendly};
	faction = BLU_CTRG_F;
    weapons[] =
    {
        arifle_MX_Black_Hamr_pointer_F,
        hgun_P07_blk_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_MX_Black_Hamr_pointer_F,
        hgun_P07_blk_F,
        DefaultManWeapons
    };
	magazines[] =
    {
        mag_10(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell)
    };
	respawnMagazines[] =
    {
        mag_10(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell)
    };
};
class B_CTRG_soldier_GL_LAT_F: B_Soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_CTRG_soldier_GL_LAT_F.jpg";
	faction = BLU_CTRG_F;
    weapons[] =
    {
        arifle_MX_Black_Hamr_pointer_F,
        launch_NLAW_F,
        hgun_P07_blk_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_MX_Black_Hamr_pointer_F,
        launch_NLAW_F,
        hgun_P07_blk_F,
        DefaultManWeapons
    };
	magazines[] =
    {
        mag_6(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag),
		NLAW_F,
        mag_2(MiniGrenade),
        mag_2(3Rnd_HE_Grenade_shell),
        mag_2(SmokeShell),
        mag_2(Chemlight_green),
        mag_2(1Rnd_Smoke_Grenade_shell)
    };
	respawnMagazines[] =
    {
        mag_6(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag),
		NLAW_F,
        mag_2(MiniGrenade),
        mag_2(3Rnd_HE_Grenade_shell),
        mag_2(SmokeShell),
        mag_2(Chemlight_green),
        mag_2(1Rnd_Smoke_Grenade_shell)
    };
	linkedItems[] =
    {
        V_PlateCarrierH_CTRG,
        H_HelmetSpecB_light_snakeskin,
        DefaultManLeaderLinkedItems,
        NVGogglesB_blk_F
    };
	respawnLinkedItems[] =
    {
        V_PlateCarrierH_CTRG,
        H_HelmetSpecB_light_snakeskin,
        DefaultManLeaderLinkedItems,
        NVGogglesB_blk_F
    };
};
class B_CTRG_soldier_engineer_exp_F: B_Soldier_02_f
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_CTRG_soldier_engineer_exp_F.jpg";
	faction = BLU_CTRG_F;
	hiddenSelections[] =
    {
        camo2,
        camo
    };
	hiddenSelectionsTextures[] =
    {
        "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\basicbody_green_CO.paa",
        "\A3\Characters_F_EPA\BLUFOR\Data\clothing1_mtp_CO.paa"
    };
    weapons[] =
    {
        arifle_MX_Black_Hamr_pointer_F,
        hgun_P07_blk_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_MX_Black_Hamr_pointer_F,
        hgun_P07_blk_F,
        DefaultManWeapons
    };
	magazines[] =
    {
        mag_6(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
		mag_3(APERSMine_Range_Mag),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
	respawnMagazines[] =
    {
        mag_6(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
		mag_3(APERSMine_Range_Mag),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
	linkedItems[] =
    {
        V_PlateCarrierL_CTRG,
        H_Cap_khaki_specops_UK_hs,
        DefaultManLeaderLinkedItems
    };
	respawnLinkedItems[] =
    {
        V_PlateCarrierL_CTRG,
        H_Cap_khaki_specops_UK_hs,
        DefaultManLeaderLinkedItems
    };
};
class B_CTRG_soldier_M_medic_F: B_Soldier_03_f
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_CTRG_soldier_M_medic_F.jpg";
    faction = BLU_CTRG_F;
    attendant = true;
	weapons[] =
    {
        srifle_EBR_Hamr_pointer_F,
        hgun_P07_blk_F,
        DefaultManWeapons,
        Rangefinder
    };
	respawnWeapons[] =
    {
        srifle_EBR_Hamr_pointer_F,
        hgun_P07_blk_F,
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
        V_PlateCarrierH_CTRG,
        H_Watchcap_blk,
        DefaultManLeaderLinkedItems
    };
	respawnLinkedItems[] =
    {
        V_PlateCarrierH_CTRG,
        H_Watchcap_blk,
        DefaultManLeaderLinkedItems
    };
};
class B_CTRG_soldier_AR_A_F: B_Soldier_03_f
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_CTRG_soldier_AR_A_F.jpg";
	faction = BLU_CTRG_F;
    weapons[] =
    {
        arifle_MX_SW_Black_Hamr_pointer_F,
        hgun_P07_blk_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_MX_SW_Black_Hamr_pointer_F,
        hgun_P07_blk_F,
        DefaultManWeapons
    };
	magazines[] =
    {
        mag_6(100Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag),
        MiniGrenade,
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
	respawnMagazines[] =
    {
        mag_6(100Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag),
        MiniGrenade,
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
	linkedItems[] =
    {
        V_PlateCarrierL_CTRG,
        H_HelmetSpecB_light_snakeskin,
        DefaultManLeaderLinkedItems,
        NVGogglesB_blk_F
    };
	respawnLinkedItems[] =
    {
        V_PlateCarrierL_CTRG,
        H_HelmetSpecB_light_snakeskin,
        DefaultManLeaderLinkedItems,
        NVGogglesB_blk_F
    };
};
class B_Captain_Jay_F: B_Soldier_02_f
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_Captain_Jay_F.jpg";
    modelSides[] = {TFriendly};
	faction = BLU_CTRG_F;
    weapons[] =
    {
        arifle_MX_Black_Hamr_pointer_F,
        hgun_P07_blk_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_MX_Black_Hamr_pointer_F,
        hgun_P07_blk_F,
        DefaultManWeapons
    };
	magazines[] =
    {
        mag_10(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
	respawnMagazines[] =
    {
        mag_10(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
};
class B_CTRG_Sharphooter_F: B_Soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_CTRG_Sharphooter_F.jpg";
	faction = BLU_CTRG_F;
	weapons[] =
    {
        srifle_DMR_02_camo_AMS_LP_F,
        hgun_P07_blk_F,
        DefaultManWeapons,
        Rangefinder
    };
	respawnWeapons[] =
    {
        srifle_DMR_02_camo_AMS_LP_F,
        hgun_P07_blk_F,
        DefaultManWeapons,
        Rangefinder
    };
	magazines[] =
    {
        mag_8(10Rnd_338_Mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
	respawnMagazines[] =
    {
        mag_8(10Rnd_338_Mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
	linkedItems[] =
    {
        H_HelmetB_light_snakeskin,
        V_PlateCarrierL_CTRG,
        DefaultManLeaderLinkedItems,
        NVGogglesB_blk_F
    };
	respawnLinkedItems[] =
    {
        H_HelmetB_light_snakeskin,
        V_PlateCarrierL_CTRG,
        DefaultManLeaderLinkedItems,
        NVGogglesB_blk_F
    };
};
class B_CTRG_Soldier_base_F: B_Soldier_base_F
{
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
	identityTypes[] =
   	{
        LanguageENG_F,
        Head_NATO,
        G_NATO_SF
    };
	weapons[] =
    {
        arifle_SPAR_01_blk_ERCO_Pointer_Snds_F,
        hgun_P07_blk_Snds_F,
        DefaultManWeapons,
        Rangefinder
    };
	respawnWeapons[] =
    {
        arifle_SPAR_01_blk_ERCO_Pointer_Snds_F,
        hgun_P07_blk_Snds_F,
        DefaultManWeapons,
        Rangefinder
    };
	magazines[] =
    {
        mag_10(30Rnd_556x45_Stanag_red),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
	respawnMagazines[] =
    {
        mag_10(30Rnd_556x45_Stanag_red),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
	linkedItems[] =
	{
		V_PlateCarrier2_rgr_noflag_F,
		H_HelmetB_TI_tna_F,
		G_Balaclava_TI_G_tna_F,
        DefaultManLeaderLinkedItems,
        NVGogglesB_grn_F
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier2_rgr_noflag_F,
		H_HelmetB_TI_tna_F,
		G_Balaclava_TI_G_tna_F,
        DefaultManLeaderLinkedItems,
        NVGogglesB_grn_F
	};
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
};
class B_CTRG_Soldier_F: B_CTRG_Soldier_base_F
{
    faction = BLU_CTRG_tna_F;
	hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\U_B_CTRG_Soldier_F_CO.paa"};
};
class B_CTRG_Soldier_arid_F: B_CTRG_Soldier_F
{
	hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\U_B_CTRG_Soldier_arid_F_CO.paa"};
};
class B_CTRG_Soldier_Black_F: B_CTRG_Soldier_F
{
	hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\U_B_CTRG_Soldier_black_F_CO.paa"};
};
class B_CTRG_Soldier_2_F: B_CTRG_Soldier_base_F
{
    faction = BLU_CTRG_tna_F;
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\U_B_CTRG_Soldier_F_CO.paa",
		"\A3\Characters_F_Exp\BLUFOR\Data\U_BT_Soldier_AR_F_tna_01_CO.paa"
	};
};
class B_CTRG_Soldier_2_arid_F: B_CTRG_Soldier_2_F
{
	hiddenSelectionsTextures[] =
    {
        "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\U_B_CTRG_Soldier_arid_F_CO.paa",
        "\A3\Characters_F\Common\Data\basicbody_black_CO.paa"
    };
};
class B_CTRG_Soldier_2_Black_F: B_CTRG_Soldier_2_F
{
	hiddenSelectionsTextures[] =
    {
        "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\U_B_CTRG_Soldier_black_F_CO.paa",
        "\A3\Characters_F\Common\Data\basicbody_black_CO.paa"
    };
};
class B_CTRG_Soldier_3_F: B_CTRG_Soldier_base_F
{
    faction = BLU_CTRG_tna_F;
	hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\U_B_CTRG_Soldier_F_CO.paa"};
};
class B_CTRG_Soldier_3_arid_F: B_CTRG_Soldier_3_F
{
	hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\U_B_CTRG_Soldier_arid_F_CO.paa"};
};
class B_CTRG_Soldier_3_black_F: B_CTRG_Soldier_3_F
{
	hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\U_B_CTRG_Soldier_black_F_CO.paa"};
};
class B_CTRG_Soldier_TL_F: B_CTRG_Soldier_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_CTRG_Soldier_TL_F.jpg";
	faction = BLU_CTRG_F;
	editorSubcategory = EdSubcat_Personnel_Mediterranean;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_NATO,
		G_NATO_SF
	};
	scope = public;
	displayName = $STR_B_SOLDIER_TL_F0;
	icon = iconManLeader;
	cost = 450000;
	uniformClass = U_B_CTRG_3;
	weapons[] =
    {
        arifle_MX_Black_Hamr_Pointer_Snds_F,
        hgun_P07_blk_Snds_F,
        DefaultManWeapons,
        Rangefinder
    };
	respawnWeapons[] =
    {
        arifle_MX_Black_Hamr_Pointer_Snds_F,
        hgun_P07_blk_Snds_F,
        DefaultManWeapons,
        Rangefinder
    };
	magazines[] =
    {
        mag_4(30Rnd_65x39_caseless_black_mag),
        mag_2(30Rnd_65x39_caseless_black_mag_Tracer),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        SmokeShell,
		SMOKESHELLS_BLUFOR,
        mag_2(Chemlight_green)
    };
	respawnMagazines[] =
    {
        mag_4(30Rnd_65x39_caseless_black_mag),
        mag_2(30Rnd_65x39_caseless_black_mag_Tracer),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        SmokeShell,
		SMOKESHELLS_BLUFOR,
        mag_2(Chemlight_green)
    };
	linkedItems[] =
	{
		V_PlateCarrierH_CTRG,
		H_HelmetSpecB_light_snakeskin,
        DefaultManLeaderLinkedItems,
        NVGogglesB_blk_F
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrierH_CTRG,
		H_HelmetSpecB_light_snakeskin,
        DefaultManLeaderLinkedItems,
        NVGogglesB_blk_F
	};
};
class B_CTRG_Soldier_Exp_F: B_CTRG_Soldier_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_CTRG_Soldier_Exp_F.jpg";
	faction = BLU_CTRG_F;
	editorSubcategory = EdSubcat_Personnel_Mediterranean;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_NATO,
		G_NATO_recon
	};
	scope = public;
	displayName = $STR_A3_B_CTRG_Soldier_Exp_tna_F0;
	role = Sapper;
	icon = iconManExplosive;
	picture = pictureExplosive;
	cost = 115000;
	canDeactivateMines = true;
	detectSkill = 38;
	uniformClass = U_B_CTRG_3;
	backpack = B_Kitbag_rgr_CTRGExp_F;
	weapons[] =
    {
        arifle_MX_Black_Hamr_Pointer_Snds_F,
        hgun_P07_blk_Snds_F,
        DefaultManWeapons
    };
	respawnWeapons[] =
    {
        arifle_MX_Black_Hamr_Pointer_Snds_F,
        hgun_P07_blk_Snds_F,
        DefaultManWeapons
    };
	magazines[] =
    {
        mag_6(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
		mag_3(APERSMine_Range_Mag),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
	respawnMagazines[] =
    {
        mag_6(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
		mag_3(APERSMine_Range_Mag),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
	linkedItems[] =
	{
		V_PlateCarrierL_CTRG,
		H_Cap_khaki_specops_UK_hs,
        DefaultManLeaderLinkedItems,
        NVGogglesB_blk_F
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrierL_CTRG,
		H_Cap_khaki_specops_UK_hs,
        DefaultManLeaderLinkedItems,
        NVGogglesB_blk_F
	};
};
class B_CTRG_Soldier_Medic_F: B_CTRG_Soldier_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_CTRG_Soldier_Medic_F.jpg";
	faction = BLU_CTRG_F;
	editorSubcategory = EdSubcat_Personnel_Mediterranean;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_NATO,
		G_NATO_recon
	};
	scope = public;
	displayName = $STR_A3_B_CTRG_Soldier_Medic_tna_F0;
	role = CombatLifeSaver;
	icon = iconManMedic;
	picture = pictureHeal;
	cost = 300000;
    attendant = true;
	uniformClass = U_B_CTRG_2;
	backpack = B_AssaultPack_rgr_CTRGMedic_F;
	weapons[] =
    {
        arifle_MX_Black_Hamr_Pointer_Snds_F,
        hgun_P07_blk_Snds_F,
        DefaultManWeapons
    };
	respawnWeapons[] =
    {
        arifle_MX_Black_Hamr_Pointer_Snds_F,
        hgun_P07_blk_Snds_F,
        DefaultManWeapons
    };
	magazines[] =
    {
        mag_6(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
		SmokeShell,
		SMOKESHELLS_MEDIC,
        mag_2(Chemlight_green)
    };
	respawnMagazines[] =
    {
        mag_6(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
		SmokeShell,
		SMOKESHELLS_MEDIC,
        mag_2(Chemlight_green)
    };
	linkedItems[] =
	{
		V_PlateCarrierL_CTRG,
		H_Cap_blk,
        DefaultManLeaderLinkedItems,
        NVGogglesB_blk_F
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrierL_CTRG,
		H_Cap_blk,
        DefaultManLeaderLinkedItems,
        NVGogglesB_blk_F
	};
};
class B_CTRG_Soldier_M_F: B_CTRG_Soldier_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_CTRG_Soldier_M_F.jpg";
	faction = BLU_CTRG_F;
	editorSubcategory = EdSubcat_Personnel_Mediterranean;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_NATO,
		G_NATO_recon
	};
	scope = public;
	displayName = $STR_B_SOLDIER_M_F0;
	role = Marksman;
	cost = 150000;
	uniformClass = U_B_CTRG_2;
	weapons[] =
    {
        arifle_MXM_Black_MOS_Pointer_Bipod_Snds_F,
        hgun_P07_blk_Snds_F,
        DefaultManWeapons,
		Rangefinder
    };
	respawnWeapons[] =
    {
        arifle_MXM_Black_MOS_Pointer_Bipod_Snds_F,
        hgun_P07_blk_Snds_F,
        DefaultManWeapons,
		Rangefinder
    };
	magazines[] =
    {
        mag_8(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
	respawnMagazines[] =
    {
        mag_8(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
	linkedItems[] =
	{
		V_PlateCarrierL_CTRG,
		H_Watchcap_blk_hs,
        DefaultManLeaderLinkedItems,
        NVGogglesB_blk_F
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrierL_CTRG,
		H_Watchcap_blk_hs,
        DefaultManLeaderLinkedItems,
        NVGogglesB_blk_F
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
};
class B_CTRG_Soldier_v2_F: B_CTRG_Soldier_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_CTRG_Soldier_v2_F.jpg";
	faction = BLU_CTRG_F;
	editorSubcategory = EdSubcat_Personnel_Mediterranean;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_NATO,
		G_NATO_SF
	};
	scope = public;
	displayName = $STR_A3_B_CTRG_Soldier_tna_F0;
	role = Rifleman;
	uniformClass = U_B_CTRG_3;
	weapons[] =
    {
        arifle_MX_Black_Hamr_Pointer_Snds_F,
        hgun_P07_blk_Snds_F,
        DefaultManWeapons,
        Rangefinder
    };
	respawnWeapons[] =
    {
        arifle_MX_Black_Hamr_Pointer_Snds_F,
        hgun_P07_blk_Snds_F,
        DefaultManWeapons,
        Rangefinder
    };
	magazines[] =
    {
        mag_10(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
	respawnMagazines[] =
    {
        mag_10(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
	linkedItems[] =
	{
		V_PlateCarrierH_CTRG,
		H_HelmetB_snakeskin,
        DefaultManLeaderLinkedItems,
        NVGogglesB_blk_F
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrierH_CTRG,
		H_HelmetB_snakeskin,
        DefaultManLeaderLinkedItems,
        NVGogglesB_blk_F
	};
};
class B_CTRG_Soldier_LAT_F: B_CTRG_Soldier_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_CTRG_Soldier_LAT_F.jpg";
	faction = BLU_CTRG_F;
	editorSubcategory = EdSubcat_Personnel_Mediterranean;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_NATO,
		G_NATO_SF
	};
	scope = public;
	displayName = $STR_A3_B_CTRG_Soldier_LAT_tna_F0;
	role = MissileSpecialist;
	icon = iconManAT;
	cost = 180000;
	threat[] =
    {
        1,      // Soft
        0.7,    // Armor
        0.3     // Air
    };
	uniformClass = U_B_CTRG_2;
	backpack = B_AssaultPack_rgr_CTRGLAT_F;
	weapons[] =
	{
        arifle_MX_Black_Hamr_Pointer_Snds_F,
        hgun_P07_blk_Snds_F,
		launch_NLAW_F,
        DefaultManWeapons
    };
	respawnWeapons[] =
    {
        arifle_MX_Black_Hamr_Pointer_Snds_F,
        hgun_P07_blk_Snds_F,
		launch_NLAW_F,
        DefaultManWeapons
    };
	magazines[] =
    {
        mag_6(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag),
		NLAW_F,
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
	respawnMagazines[] =
    {
        mag_6(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag),
		NLAW_F,
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
	linkedItems[] =
	{
		H_HelmetB_snakeskin,
		V_PlateCarrierH_CTRG,
        DefaultManLeaderLinkedItems,
        NVGogglesB_blk_F
	};
	respawnLinkedItems[] =
	{
		H_HelmetB_snakeskin,
		V_PlateCarrierH_CTRG,
        DefaultManLeaderLinkedItems,
        NVGogglesB_blk_F
	};
};
class B_CTRG_Soldier_LAT2_F: B_CTRG_Soldier_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_CTRG_Soldier_LAT2_F.jpg";
	faction = BLU_CTRG_F;
	editorSubcategory = EdSubcat_Personnel_Mediterranean;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_NATO,
		G_NATO_SF
	};
	scope = public;
	displayName = $STR_A3_A_CfgVehicles_CTRG_Soldier_LAT2_tna_F0;
	role = MissileSpecialist;
	icon = iconManAT;
	cost = 180000;
	threat[] =
    {
        1,      // Soft
        0.7,    // Armor
        0.3     // Air
    };
	uniformClass = U_B_CTRG_2;
	backpack = B_AssaultPack_rgr_CTRGLAT2_F;
	weapons[] =
	{
        arifle_MX_Black_Hamr_Pointer_Snds_F,
        hgun_P07_blk_Snds_F,
		launch_MRAWS_sand_F,
        DefaultManWeapons
    };
	respawnWeapons[] =
    {
        arifle_MX_Black_Hamr_Pointer_Snds_F,
        hgun_P07_blk_Snds_F,
		launch_MRAWS_sand_F,
        DefaultManWeapons
    };
	magazines[] =
    {
        mag_6(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag),
		MRAWS_HEAT_F,
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
	respawnMagazines[] =
    {
        mag_6(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag),
		MRAWS_HEAT_F,
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
	linkedItems[] =
	{
		H_HelmetB_snakeskin,
		V_PlateCarrierH_CTRG,
        DefaultManLeaderLinkedItems,
        NVGogglesB_blk_F
	};
	respawnLinkedItems[] =
	{
		H_HelmetB_snakeskin,
		V_PlateCarrierH_CTRG,
        DefaultManLeaderLinkedItems,
        NVGogglesB_blk_F
	};
};
class B_CTRG_Soldier_AR_F: B_CTRG_Soldier_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_CTRG_Soldier_AR_F.jpg";
	faction = BLU_CTRG_F;
	editorSubcategory = EdSubcat_Personnel_Mediterranean;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_NATO,
		G_NATO_recon
	};
	scope = public;
	displayName = $STR_B_SOLDIER_AR_F0;
	role = MachineGunner;
	icon = iconManMG;
	cost = 125000;
	threat[] =
    {
        1,      // Soft
        0.1,    // Armor
        0.3     // Air
    };
	uniformClass = U_B_CTRG_3;
	weapons[] =
    {
        arifle_MX_SW_Black_Hamr_Pointer_Bipod_Snds_F,
        hgun_P07_blk_Snds_F,
        DefaultManWeapons
    };
	respawnWeapons[] =
    {
        arifle_MX_SW_Black_Hamr_Pointer_Bipod_Snds_F,
        hgun_P07_blk_Snds_F,
        DefaultManWeapons
    };
	magazines[] =
    {
        mag_6(100Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag),
        MiniGrenade,
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
	respawnMagazines[] =
    {
        mag_6(100Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag),
        MiniGrenade,
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
	linkedItems[] =
	{
		V_PlateCarrierH_CTRG,
		H_Beret_blk,
        DefaultManLeaderLinkedItems,
        NVGogglesB_blk_F
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrierH_CTRG,
		H_Beret_blk,
        DefaultManLeaderLinkedItems,
        NVGogglesB_blk_F
	};
	items[] =
	{
		FirstAidKit,
		optic_tws_mg
	};
	respawnItems[] =
	{
		FirstAidKit,
		optic_tws_mg
	};
};
class B_CTRG_Soldier_JTAC_F: B_CTRG_Soldier_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_CTRG_Soldier_JTAC_F.jpg";
	faction = BLU_CTRG_F;
	editorSubcategory = EdSubcat_Personnel_Mediterranean;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_NATO,
		G_NATO_SF
	};
	scope = public;
	displayName = $STR_A3_B_CTRG_Soldier_JTAC_tna_F0;
	role = SpecialOperative;
	cost = 200000;
	uniformClass = U_B_CTRG_1;
	backpack = B_RadioBag_01_mtp_F;
	weapons[] =
    {
        arifle_MX_GL_Black_Hamr_Pointer_Snds_F,
        hgun_P07_blk_Snds_F,
        DefaultManWeapons,
        Laserdesignator
    };
	respawnWeapons[] =
    {
        arifle_MX_GL_Black_Hamr_Pointer_Snds_F,
        hgun_P07_blk_Snds_F,
        DefaultManWeapons,
        Laserdesignator
    };
	magazines[] =
    {
        mag_6(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
		mag_2(B_IR_Grenade),
        mag_2(3Rnd_HE_Grenade_shell),
        Laserbatteries,
        SmokeShell,
		SMOKESHELLS_BLUFOR,
        mag_2(Chemlight_green),
        1Rnd_Smoke_Grenade_shell,
		SMOKEGRENADES_BLUFOR
    };
	respawnMagazines[] =
    {
        mag_6(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
		mag_2(B_IR_Grenade),
        mag_2(3Rnd_HE_Grenade_shell),
        Laserbatteries,
        SmokeShell,
		SMOKESHELLS_BLUFOR,
        mag_2(Chemlight_green),
        1Rnd_Smoke_Grenade_shell,
		SMOKEGRENADES_BLUFOR
    };
	linkedItems[] =
	{
		V_PlateCarrierL_CTRG,
		H_HelmetSpecB_light_snakeskin,
        DefaultManLeaderLinkedItems,
        NVGogglesB_blk_F
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrierL_CTRG,
		H_HelmetSpecB_light_snakeskin,
        DefaultManLeaderLinkedItems,
        NVGogglesB_blk_F
	};
};
class Aegis_B_CTRG_Sniper_F: B_Sniper_F
{
    author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_B_CTRG_Sniper_F.jpg";
	faction = BLU_CTRG_F;
	editorSubcategory = EdSubcat_Personnel_Mediterranean;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_NATO,
		G_NATO_sniper
	};
	scope = public;
	uniformClass = Aegis_U_B_Sniper_Fatigues_CTRG_F;
	weapons[] =
    {
        Aegis_srifle_GM6B_LRPS_PointerDM_F,
        hgun_P07_blk_Snds_F,
        DefaultManWeapons,
        Rangefinder
    };
	respawnWeapons[] =
    {
        Aegis_srifle_GM6B_LRPS_PointerDM_F,
        hgun_P07_blk_Snds_F,
        DefaultManWeapons,
        Rangefinder
    };
	magazines[] =
    {
        mag_4(Aegis_5Rnd_127x99_Mag),
        mag_2(Aegis_5Rnd_127x99_AP_Mag),
        mag_2(16Rnd_9x21_Mag),
        ClaymoreDirectionalMine_Remote_Mag,
        APERSTripMine_Wire_Mag,
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
	respawnMagazines[] =
    {
        mag_4(Aegis_5Rnd_127x99_Mag),
        mag_2(Aegis_5Rnd_127x99_AP_Mag),
        mag_2(16Rnd_9x21_Mag),
        ClaymoreDirectionalMine_Remote_Mag,
        APERSTripMine_Wire_Mag,
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
	linkedItems[] =
	{
		V_PlateCarrierH_CTRG,
		H_HelmetB_snakeskin,
        DefaultManLeaderLinkedItems,
        NVGogglesB_blk_F
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrierH_CTRG,
		H_HelmetB_snakeskin,
        DefaultManLeaderLinkedItems,
        NVGogglesB_blk_F
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
};
class Aegis_B_CTRG_Spotter_F: B_Spotter_F
{
    author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_B_CTRG_Spotter_F.jpg";
	faction = BLU_CTRG_F;
	editorSubcategory = EdSubcat_Personnel_Mediterranean;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_NATO,
		G_NATO_sniper
	};
	scope = public;
	uniformClass = Aegis_U_B_Sniper_Fatigues_CTRG_F;
	weapons[] =
    {
        arifle_MX_Black_Hamr_Pointer_Snds_F,
        hgun_P07_blk_Snds_F,
        DefaultManWeapons,
        Laserdesignator
    };
    respawnWeapons[] =
    {
        arifle_MX_Black_Hamr_Pointer_Snds_F,
        hgun_P07_blk_Snds_F,
        DefaultManWeapons,
        Laserdesignator
    };
    magazines[] =
    {
        mag_6(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag),
        ClaymoreDirectionalMine_Remote_Mag,
        APERSTripMine_Wire_Mag,
        mag_2(MiniGrenade),
        mag_2(B_IR_Grenade),
        Laserbatteries,
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag),
        ClaymoreDirectionalMine_Remote_Mag,
        APERSTripMine_Wire_Mag,
        mag_2(MiniGrenade),
        mag_2(B_IR_Grenade),
        Laserbatteries,
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
    linkedItems[] =
	{
		V_PlateCarrierH_CTRG,
		H_HelmetB_snakeskin,
        DefaultManLeaderLinkedItems,
        NVGogglesB_blk_F
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrierH_CTRG,
		H_HelmetB_snakeskin,
        DefaultManLeaderLinkedItems,
        NVGogglesB_blk_F
	};
	items[] =
	{
		FirstAidKit,
		optic_tws
	};
	respawnItems[] =
	{
		FirstAidKit,
		optic_tws
	};
};
/* Group 13 */
class B_CTRG_Soldier_TL_arid_F: B_CTRG_Soldier_arid_F
{
	author = $STR_A3_A_Heliotrope;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_CTRG_Soldier_TL_arid_F.jpg";
	faction = BLU_CTRG_F;
	editorSubcategory = EdSubcat_Personnel_Camo_Arid;
	scope = public;
	displayName = $STR_B_SOLDIER_TL_F0;
	uniformClass = U_B_CTRG_Soldier_Arid_F;
	icon = iconManLeader;
	cost = 450000;
	weapons[] =
    {
        arifle_SPAR_01_blk_ERCO_Pointer_Snds_F,
        hgun_P07_blk_Snds_F,
        DefaultManWeapons,
        Rangefinder
    };
	respawnWeapons[] =
    {
        arifle_SPAR_01_blk_ERCO_Pointer_Snds_F,
        hgun_P07_blk_Snds_F,
        DefaultManWeapons,
        Rangefinder
    };
	magazines[] =
    {
        mag_4(30Rnd_556x45_Stanag_red),
        mag_2(30Rnd_556x45_Stanag_Tracer_Red),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        SmokeShell,
		SMOKESHELLS_BLUFOR,
        mag_2(Chemlight_green)
    };
	respawnMagazines[] =
    {
        mag_4(30Rnd_556x45_Stanag_red),
        mag_2(30Rnd_556x45_Stanag_Tracer_Red),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        SmokeShell,
		SMOKESHELLS_BLUFOR,
        mag_2(Chemlight_green)
    };
	linkedItems[] =
	{
		V_PlateCarrier2_blk,
		H_HelmetB_TI_arid_F,
		G_Balaclava_TI_G_alt_F,
        DefaultManLeaderLinkedItems,
        Aegis_NVG_IVAS_01_grn_F
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier2_blk,
		H_HelmetB_TI_arid_F,
		G_Balaclava_TI_G_alt_F,
        DefaultManLeaderLinkedItems,
        Aegis_NVG_IVAS_01_grn_F
	};
};
class B_CTRG_Soldier_Exp_arid_F: B_CTRG_Soldier_arid_F
{
	author = $STR_A3_A_Heliotrope;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_CTRG_Soldier_Exp_arid_F.jpg";
	faction = BLU_CTRG_F;
	editorSubcategory = EdSubcat_Personnel_Camo_Arid;
	scope = public;
	displayName = $STR_A3_B_CTRG_Soldier_Exp_tna_F0;
	uniformClass = U_B_CTRG_Soldier_Arid_F;
	role = Sapper;
	icon = iconManExplosive;
	picture = pictureExplosive;
	cost = 115000;
	canDeactivateMines = true;
	detectSkill = 38;
	backpack = B_Kitbag_blk_CTRGexp_F;
	weapons[] =
    {
        arifle_SPAR_01_blk_ERCO_Pointer_Snds_F,
        hgun_P07_blk_Snds_F,
        DefaultManWeapons
    };
	respawnWeapons[] =
    {
        arifle_SPAR_01_blk_ERCO_Pointer_Snds_F,
        hgun_P07_blk_Snds_F,
        DefaultManWeapons
    };
	magazines[] =
    {
        mag_6(30Rnd_556x45_Stanag_red),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
		mag_3(APERSMine_Range_Mag),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
	respawnMagazines[] =
    {
        mag_6(30Rnd_556x45_Stanag_red),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
		mag_3(APERSMine_Range_Mag),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
	linkedItems[] =
	{
		V_PlateCarrier1_blk,
		H_HelmetSpecB_light_black,
        G_Balaclava_TI_blk_F,
        DefaultManLeaderLinkedItems,
        Aegis_NVG_IVAS_01_blk_F
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier1_blk,
		H_HelmetSpecB_light_black,
        G_Balaclava_TI_blk_F,
        DefaultManLeaderLinkedItems,
        Aegis_NVG_IVAS_01_blk_F
	};
};
class B_CTRG_Soldier_Medic_arid_F: B_CTRG_Soldier_arid_F
{
	author = $STR_A3_A_Heliotrope;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_CTRG_Soldier_Medic_arid_F.jpg";
	faction = BLU_CTRG_F;
	editorSubcategory = EdSubcat_Personnel_Camo_Arid;
	scope = public;
	displayName = $STR_A3_B_CTRG_Soldier_Medic_tna_F0;
	uniformClass = U_B_CTRG_Soldier_Arid_F;
	role = CombatLifeSaver;
	icon = iconManMedic;
	picture = pictureHeal;
    attendant = true;
	cost = 300000;
	backpack = B_AssaultPack_blk_CTRGMedic_F;
	weapons[] =
    {
        arifle_SPAR_01_blk_ERCO_Pointer_Snds_F,
        hgun_P07_blk_Snds_F,
        DefaultManWeapons
    };
	respawnWeapons[] =
    {
        arifle_SPAR_01_blk_ERCO_Pointer_Snds_F,
        hgun_P07_blk_Snds_F,
        DefaultManWeapons
    };
	magazines[] =
    {
        mag_6(30Rnd_556x45_Stanag_red),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
		SmokeShell,
		SMOKESHELLS_MEDIC,
        mag_2(Chemlight_green)
    };
	respawnMagazines[] =
    {
        mag_6(30Rnd_556x45_Stanag_red),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
		SmokeShell,
		SMOKESHELLS_MEDIC,
        mag_2(Chemlight_green)
    };
	linkedItems[] =
	{
		V_PlateCarrier1_blk,
		H_HelmetSpecB_light_black,
        G_Balaclava_TI_blk_F,
        DefaultManLeaderLinkedItems,
        Aegis_NVG_IVAS_01_blk_F
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier1_blk,
		H_HelmetSpecB_light_black,
        G_Balaclava_TI_blk_F,
        DefaultManLeaderLinkedItems,
        Aegis_NVG_IVAS_01_blk_F
	};
};
class B_CTRG_Soldier_M_arid_F: B_CTRG_Soldier_arid_F
{
	author = $STR_A3_A_Heliotrope;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_CTRG_Soldier_M_arid_F.jpg";
	faction = BLU_CTRG_F;
	editorSubcategory = EdSubcat_Personnel_Camo_Arid;
	displayName = $STR_B_SOLDIER_M_F0;
	uniformClass = U_B_CTRG_Soldier_Arid_F;
	scope = public;
	role = Marksman;
	cost = 150000;
	weapons[] =
    {
        arifle_SPAR_03_blk_MOS_Pointer_Bipod_Snds_F,
        hgun_P07_blk_Snds_F,
        DefaultManWeapons,
		Rangefinder
    };
	respawnWeapons[] =
    {
        arifle_SPAR_03_blk_MOS_Pointer_Bipod_Snds_F,
        hgun_P07_blk_Snds_F,
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
		V_PlateCarrier1_blk,
		H_HelmetSpecB_light_black,
        G_Balaclava_TI_blk_F,
        DefaultManLeaderLinkedItems,
        Aegis_NVG_IVAS_01_blk_F
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier1_blk,
		H_HelmetSpecB_light_black,
        G_Balaclava_TI_blk_F,
        DefaultManLeaderLinkedItems,
        Aegis_NVG_IVAS_01_blk_F
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
};
class B_CTRG_Soldier_arid_v2_F: B_CTRG_Soldier_arid_F
{
	author = $STR_A3_A_Heliotrope;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_CTRG_Soldier_arid_v2_F.jpg";
	faction = BLU_CTRG_F;
	editorSubcategory = EdSubcat_Personnel_Camo_Arid;
	scope = public;
	displayName = $STR_A3_B_CTRG_Soldier_tna_F0;
	uniformClass = U_B_CTRG_Soldier_Arid_F;
	role = Rifleman;
	weapons[] =
    {
        arifle_SPAR_01_blk_ERCO_Pointer_Snds_F,
        hgun_P07_blk_Snds_F,
        DefaultManWeapons,
        Rangefinder
    };
	respawnWeapons[] =
    {
        arifle_SPAR_01_blk_ERCO_Pointer_Snds_F,
        hgun_P07_blk_Snds_F,
        DefaultManWeapons,
        Rangefinder
    };
	magazines[] =
    {
        mag_10(30Rnd_556x45_Stanag_red),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
	respawnMagazines[] =
    {
        mag_10(30Rnd_556x45_Stanag_red),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
	linkedItems[] =
	{
		V_PlateCarrier2_blk,
		H_HelmetB_TI_arid_F,
        G_Balaclava_TI_G_alt_F,
        DefaultManLeaderLinkedItems,
        Aegis_NVG_IVAS_01_grn_F
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier2_blk,
		H_HelmetB_TI_arid_F,
        G_Balaclava_TI_G_alt_F,
        DefaultManLeaderLinkedItems,
        Aegis_NVG_IVAS_01_grn_F
	};
};
class B_CTRG_Soldier_LAT_arid_F: B_CTRG_Soldier_arid_F
{
	author = $STR_A3_A_Heliotrope;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_CTRG_Soldier_LAT_arid_F.jpg";
	faction = BLU_CTRG_F;
	editorSubcategory = EdSubcat_Personnel_Camo_Arid;
	scope = public;
	displayName = $STR_A3_B_CTRG_Soldier_LAT_tna_F0;
	uniformClass = U_B_CTRG_Soldier_Arid_F;
	role = MissileSpecialist;
	icon = iconManAT;
	cost = 180000;
	threat[] =
    {
        1,      // Soft
        0.7,    // Armor
        0.3     // Air
    };
	backpack = B_AssaultPack_blk_CTRGLAT_F;
	weapons[] =
	{
        arifle_SPAR_01_blk_ERCO_Pointer_Snds_F,
        hgun_P07_blk_Snds_F,
		launch_NLAW_F,
        DefaultManWeapons
    };
	respawnWeapons[] =
    {
        arifle_SPAR_01_blk_ERCO_Pointer_Snds_F,
        hgun_P07_blk_Snds_F,
		launch_NLAW_F,
        DefaultManWeapons
    };
	magazines[] =
    {
        mag_6(30Rnd_556x45_Stanag_red),
        mag_2(16Rnd_9x21_Mag),
		NLAW_F,
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
	respawnMagazines[] =
    {
        mag_6(30Rnd_556x45_Stanag_red),
        mag_2(16Rnd_9x21_Mag),
		NLAW_F,
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
	linkedItems[] =
	{
		V_PlateCarrier2_blk,
		H_HelmetB_TI_arid_F,
        G_Balaclava_TI_G_alt_F,
        DefaultManLeaderLinkedItems,
        Aegis_NVG_IVAS_01_grn_F
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier2_blk,
		H_HelmetB_TI_arid_F,
        G_Balaclava_TI_G_alt_F,
        DefaultManLeaderLinkedItems,
        Aegis_NVG_IVAS_01_grn_F
	};
};
class B_CTRG_Soldier_LAT2_arid_F: B_CTRG_Soldier_arid_F
{
	author = $STR_A3_A_Heliotrope;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_CTRG_Soldier_LAT2_arid_F.jpg";
	faction = BLU_CTRG_F;
	editorSubcategory = EdSubcat_Personnel_Camo_Arid;
	scope = public;
	displayName = $STR_A3_A_CfgVehicles_CTRG_Soldier_LAT2_tna_F0;
	uniformClass = U_B_CTRG_Soldier_Arid_F;
	role = MissileSpecialist;
	icon = iconManAT;
	cost = 180000;
	threat[] =
    {
        1,      // Soft
        0.7,    // Armor
        0.3     // Air
    };
	backpack = B_AssaultPack_blk_CTRGLAT2_F;
	weapons[] =
	{
        arifle_SPAR_01_blk_ERCO_Pointer_Snds_F,
        hgun_P07_blk_Snds_F,
		launch_MRAWS_sand_F,
        DefaultManWeapons
    };
	respawnWeapons[] =
    {
        arifle_SPAR_01_blk_ERCO_Pointer_Snds_F,
        hgun_P07_blk_Snds_F,
		launch_MRAWS_sand_F,
        DefaultManWeapons
    };
	magazines[] =
    {
        mag_6(30Rnd_556x45_Stanag_red),
        mag_2(16Rnd_9x21_Mag),
		MRAWS_HEAT_F,
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
	respawnMagazines[] =
    {
        mag_6(30Rnd_556x45_Stanag_red),
        mag_2(16Rnd_9x21_Mag),
		MRAWS_HEAT_F,
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
	linkedItems[] =
	{
		V_PlateCarrier2_blk,
		H_HelmetB_TI_arid_F,
        G_Balaclava_TI_G_alt_F,
        DefaultManLeaderLinkedItems,
        Aegis_NVG_IVAS_01_grn_F
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier2_blk,
		H_HelmetB_TI_arid_F,
        G_Balaclava_TI_G_alt_F,
        DefaultManLeaderLinkedItems,
        Aegis_NVG_IVAS_01_grn_F
	};
};
class B_CTRG_Soldier_AR_arid_F: B_CTRG_Soldier_arid_F
{
	author = $STR_A3_A_Heliotrope;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_CTRG_Soldier_AR_arid_F.jpg";
	faction = BLU_CTRG_F;
	editorSubcategory = EdSubcat_Personnel_Camo_Arid;
	scope = public;
	displayName = $STR_B_SOLDIER_AR_F0;
	uniformClass = U_B_CTRG_Soldier_Arid_F;
	role = MachineGunner;
	icon = iconManMG;
	cost = 125000;
	threat[] =
    {
        1,      // Soft
        0.1,    // Armor
        0.3     // Air
    };
	weapons[] =
    {
        arifle_SPAR_02_blk_ERCO_Pointer_Bipod_Snds_F,
        hgun_P07_blk_Snds_F,
        DefaultManWeapons
    };
	respawnWeapons[] =
    {
        arifle_SPAR_02_blk_ERCO_Pointer_Bipod_Snds_F,
        hgun_P07_blk_Snds_F,
        DefaultManWeapons
    };
	magazines[] =
    {
        mag_6(150Rnd_556x45_Drum_Mag_F),
        mag_2(16Rnd_9x21_Mag),
        MiniGrenade,
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
	respawnMagazines[] =
    {
        mag_6(150Rnd_556x45_Drum_Mag_F),
        mag_2(16Rnd_9x21_Mag),
        MiniGrenade,
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
	linkedItems[] =
	{
		V_PlateCarrier2_blk,
		H_HelmetB_TI_arid_F,
        G_Balaclava_TI_G_alt_F,
        DefaultManLeaderLinkedItems,
        Aegis_NVG_IVAS_01_grn_F
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier2_blk,
		H_HelmetB_TI_arid_F,
        G_Balaclava_TI_G_alt_F,
        DefaultManLeaderLinkedItems,
        Aegis_NVG_IVAS_01_grn_F
	};
	items[] =
	{
		FirstAidKit,
		optic_tws_mg
	};
	respawnItems[] =
	{
		FirstAidKit,
		optic_tws_mg
	};
};
class B_CTRG_Soldier_JTAC_arid_F: B_CTRG_Soldier_arid_F
{
	author = $STR_A3_A_Heliotrope;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_CTRG_Soldier_JTAC_arid_F.jpg";
	faction = BLU_CTRG_F;
	editorSubcategory = EdSubcat_Personnel_Camo_Arid;
	scope = public;
	displayName = $STR_A3_B_CTRG_Soldier_JTAC_tna_F0;
	uniformClass = U_B_CTRG_Soldier_Arid_F;
	role = SpecialOperative;
	cost = 200000;
	backpack = B_RadioBag_01_black_F;
	weapons[] =
    {
        arifle_SPAR_01_GL_blk_ERCO_Pointer_Snds_F,
        hgun_P07_blk_Snds_F,
        DefaultManWeapons,
        Laserdesignator
    };
	respawnWeapons[] =
    {
        arifle_SPAR_01_GL_blk_ERCO_Pointer_Snds_F,
        hgun_P07_blk_Snds_F,
        DefaultManWeapons,
        Laserdesignator
    };
	magazines[] =
    {
        mag_6(30Rnd_556x45_Stanag_red),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
		mag_2(B_IR_Grenade),
        mag_6(1Rnd_HE_Grenade_shell),
        Laserbatteries,
        SmokeShell,
		SMOKESHELLS_BLUFOR,
        mag_2(Chemlight_green),
        1Rnd_Smoke_Grenade_shell,
		SMOKEGRENADES_BLUFOR
    };
	respawnMagazines[] =
    {
        mag_6(30Rnd_556x45_Stanag_red),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
		mag_2(B_IR_Grenade),
        mag_6(1Rnd_HE_Grenade_shell),
        Laserbatteries,
        SmokeShell,
		SMOKESHELLS_BLUFOR,
        mag_2(Chemlight_green),
        1Rnd_Smoke_Grenade_shell,
		SMOKEGRENADES_BLUFOR
    };
	linkedItems[] =
	{
		V_PlateCarrier1_blk,
		H_HelmetB_TI_arid_F,
        G_Balaclava_TI_G_alt_F,
        DefaultManLeaderLinkedItems,
        Aegis_NVG_IVAS_01_grn_F
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier1_blk,
		H_HelmetB_TI_arid_F,
        G_Balaclava_TI_G_alt_F,
        DefaultManLeaderLinkedItems,
        Aegis_NVG_IVAS_01_grn_F
	};
};
class B_CTRG_ghillie_base_F: B_ghillie_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	faction = BLU_CTRG_F;
	editorSubcategory = EdSubcat_Personnel_Mediterranean;
	displayName = "";
	backpack = "";
	weapons[] =
    {
        srifle_DMR_02_camo_AMS_LP_F,
        hgun_P07_blk_Snds_F,
        DefaultManWeapons,
        Rangefinder
    };
	respawnWeapons[] =
    {
        srifle_DMR_02_camo_AMS_LP_F,
        hgun_P07_blk_Snds_F,
        DefaultManWeapons,
        Rangefinder
    };
	items[] =
    {
        FirstAidKit,
        optic_tws_sniper,
        muzzle_snds_338_black
    };
    respawnItems[] =
    {
        FirstAidKit,
        optic_tws_sniper,
        muzzle_snds_338_black
	};
	magazines[] =
    {
        mag_6(10Rnd_338_Mag),
        mag_2(16Rnd_9x21_Mag),
        ClaymoreDirectionalMine_Remote_Mag,
        APERSTripMine_Wire_Mag,
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
	respawnMagazines[] =
    {
        mag_6(10Rnd_338_Mag),
        mag_2(16Rnd_9x21_Mag),
        ClaymoreDirectionalMine_Remote_Mag,
        APERSTripMine_Wire_Mag,
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
	linkedItems[] =
    {
        V_Chestrig_rgr,
        DefaultManLeaderLinkedItems,
        NVGogglesB_blk_F
    };
	respawnLinkedItems[] =
    {
        V_Chestrig_rgr,
        DefaultManLeaderLinkedItems,
        NVGogglesB_blk_F
    };
};
class B_CTRG_ghillie_lsh_F: B_CTRG_ghillie_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_CTRG_ghillie_lsh_F.jpg";
	scope = public;
	displayName = $STR_A3_CfgVehicles_B_ghillie_lsh_F0;
	hiddenSelectionsTextures[] =
    {
        "\A3\Characters_F_Mark\BLUFOR\Data\ghillie_coverall_NATO_CO.paa",
        "\A3\Characters_F_Mark\Common\Data\ghillie_threads_lsh_CA.paa",
        "\A3\Characters_F_Mark\Common\Data\ghillie_threads_5LOD_lsh_CO.paa"
    };
    identityTypes[] =
    {
        LanguageENGB_F,
        Head_NATO_camo_lush,
        G_NATO_sniper
    };
};
class B_CTRG_ghillie_sard_F: B_CTRG_ghillie_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_CTRG_ghillie_sard_F.jpg";
	scope = public;
	displayName = $STR_A3_CfgVehicles_B_ghillie_sard_F0;
	uniformClass = U_B_FullGhillie_sard;
	hiddenSelectionsTextures[] =
    {
        "\A3\Characters_F_Mark\BLUFOR\Data\ghillie_coverall_NATO_CO.paa",
        "\A3\Characters_F_Mark\Common\Data\ghillie_threads_sard_CA.paa",
        "\A3\Characters_F_Mark\Common\Data\ghillie_threads_5LOD_sard_CO.paa"
    };
    identityTypes[] =
    {
        LanguageENGB_F,
        Head_NATO_camo_semiarid,
        G_NATO_sniper
    };
};
class B_CTRG_ghillie_ard_F: B_CTRG_ghillie_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_CTRG_ghillie_ard_F.jpg";
	scope = public;
	displayName = $STR_A3_CfgVehicles_B_ghillie_ard_F0;
	uniformClass = U_B_FullGhillie_ard;
	hiddenSelectionsTextures[] =
    {
        "\A3\Characters_F_Mark\BLUFOR\Data\ghillie_coverall_NATO_CO.paa",
        "\A3\Characters_F_Mark\Common\Data\ghillie_threads_ard_CA.paa",
        "\A3\Characters_F_Mark\Common\Data\ghillie_threads_5LOD_ard_CO.paa"
    };
    identityTypes[] =
    {
        LanguageENGB_F,
        Head_NATO_camo_arid,
        G_NATO_sniper
    };
};
class B_CTRG_ghillie_spotter_lsh_F: B_CTRG_ghillie_lsh_F
{
	author = $STR_A3_A_AveryTheKitty;
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
	scope = public;
	displayName = $STR_A3_A_CfgVehicles_B_ghillie_spotter_lsh_F0;
	cost = 250000;
    weapons[] =
    {
        arifle_MX_Black_Hamr_Pointer_Snds_F,
        hgun_P07_blk_Snds_F,
        DefaultManWeapons,
        Laserdesignator
    };
    respawnWeapons[] =
    {
        arifle_MX_Black_Hamr_Pointer_Snds_F,
        hgun_P07_blk_Snds_F,
        DefaultManWeapons,
        Laserdesignator
    };
    magazines[] =
    {
        mag_6(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag),
        ClaymoreDirectionalMine_Remote_Mag,
        APERSTripMine_Wire_Mag,
        mag_2(MiniGrenade),
        mag_2(B_IR_Grenade),
        Laserbatteries,
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag),
        ClaymoreDirectionalMine_Remote_Mag,
        APERSTripMine_Wire_Mag,
        mag_2(MiniGrenade),
        mag_2(B_IR_Grenade),
        Laserbatteries,
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
	items[] =
	{
		FirstAidKit,
		optic_tws
	};
	respawnItems[] =
	{
		FirstAidKit,
		optic_tws
	};
};
class B_CTRG_ghillie_spotter_sard_F: B_CTRG_ghillie_sard_F
{
	author = $STR_A3_A_AveryTheKitty;
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
	scope = public;
	displayName = $STR_A3_A_CfgVehicles_B_ghillie_spotter_sard_F0;
	cost = 250000;
    weapons[] =
    {
        arifle_MX_Black_Hamr_Pointer_Snds_F,
        hgun_P07_blk_Snds_F,
        DefaultManWeapons,
        Laserdesignator
    };
    respawnWeapons[] =
    {
        arifle_MX_Black_Hamr_Pointer_Snds_F,
        hgun_P07_blk_Snds_F,
        DefaultManWeapons,
        Laserdesignator
    };
    magazines[] =
    {
        mag_6(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag),
        ClaymoreDirectionalMine_Remote_Mag,
        APERSTripMine_Wire_Mag,
        mag_2(MiniGrenade),
        mag_2(B_IR_Grenade),
        Laserbatteries,
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag),
        ClaymoreDirectionalMine_Remote_Mag,
        APERSTripMine_Wire_Mag,
        mag_2(MiniGrenade),
        mag_2(B_IR_Grenade),
        Laserbatteries,
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
	items[] =
	{
		FirstAidKit,
		optic_tws
	};
	respawnItems[] =
	{
		FirstAidKit,
		optic_tws
	};
};
class B_CTRG_ghillie_spotter_ard_F: B_CTRG_ghillie_ard_F
{
	author = $STR_A3_A_AveryTheKitty;
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
	scope = public;
	displayName = $STR_A3_A_CfgVehicles_B_ghillie_spotter_ard_F0;
	cost = 250000;
    weapons[] =
    {
        arifle_MX_Black_Hamr_Pointer_Snds_F,
        hgun_P07_blk_Snds_F,
        DefaultManWeapons,
        Laserdesignator
    };
    respawnWeapons[] =
    {
        arifle_MX_Black_Hamr_Pointer_Snds_F,
        hgun_P07_blk_Snds_F,
        DefaultManWeapons,
        Laserdesignator
    };
    magazines[] =
    {
        mag_6(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag),
        ClaymoreDirectionalMine_Remote_Mag,
        APERSTripMine_Wire_Mag,
        mag_2(MiniGrenade),
        mag_2(B_IR_Grenade),
        Laserbatteries,
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag),
        ClaymoreDirectionalMine_Remote_Mag,
        APERSTripMine_Wire_Mag,
        mag_2(MiniGrenade),
        mag_2(B_IR_Grenade),
        Laserbatteries,
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
	items[] =
	{
		FirstAidKit,
		optic_tws
	};
	respawnItems[] =
	{
		FirstAidKit,
		optic_tws
	};
};

/* CTRG (Pacific) */
class B_CTRG_Soldier_TL_tna_F: B_CTRG_Soldier_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_CTRG_Soldier_TL_tna_F.jpg";
	icon = iconManLeader;
	weapons[] =
    {
        arifle_SPAR_01_blk_ERCO_Pointer_Snds_F,
        hgun_P07_blk_Snds_F,
        DefaultManWeapons,
        Rangefinder
    };
	respawnWeapons[] =
    {
        arifle_SPAR_01_blk_ERCO_Pointer_Snds_F,
        hgun_P07_blk_Snds_F,
        DefaultManWeapons,
        Rangefinder
    };
	magazines[] =
    {
        mag_4(30Rnd_556x45_Stanag_red),
        mag_2(30Rnd_556x45_Stanag_Tracer_Red),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        SmokeShell,
		SMOKESHELLS_BLUFOR,
        mag_2(Chemlight_green)
    };
	respawnMagazines[] =
    {
        mag_4(30Rnd_556x45_Stanag_red),
        mag_2(30Rnd_556x45_Stanag_Tracer_Red),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        SmokeShell,
		SMOKESHELLS_BLUFOR,
        mag_2(Chemlight_green)
    };
	linkedItems[] =
	{
		V_PlateCarrier2_rgr_noflag_F,
		H_HelmetB_TI_tna_F,
		G_Balaclava_TI_G_tna_F,
        DefaultManLeaderLinkedItems,
        NVGogglesB_grn_F
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier2_rgr_noflag_F,
		H_HelmetB_TI_tna_F,
		G_Balaclava_TI_G_tna_F,
        DefaultManLeaderLinkedItems,
        NVGogglesB_grn_F
	};
};
class B_CTRG_Soldier_Exp_tna_F: B_CTRG_Soldier_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_CTRG_Soldier_Exp_tna_F.jpg";
	icon = iconManExplosive;
	picture = pictureExplosive;
	weapons[] =
    {
        arifle_SPAR_01_blk_ERCO_Pointer_Snds_F,
        hgun_P07_blk_Snds_F,
        DefaultManWeapons
    };
	respawnWeapons[] =
    {
        arifle_SPAR_01_blk_ERCO_Pointer_Snds_F,
        hgun_P07_blk_Snds_F,
        DefaultManWeapons
    };
	magazines[] =
    {
        mag_6(30Rnd_556x45_Stanag_red),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
		mag_3(APERSMine_Range_Mag),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
	respawnMagazines[] =
    {
        mag_6(30Rnd_556x45_Stanag_red),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
		mag_3(APERSMine_Range_Mag),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
	linkedItems[] =
	{
		V_PlateCarrier1_rgr_noflag_F,
		H_HelmetB_TI_tna_F,
		G_Balaclava_TI_G_tna_F,
        DefaultManLeaderLinkedItems,
        NVGogglesB_grn_F
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier1_rgr_noflag_F,
		H_HelmetB_TI_tna_F,
		G_Balaclava_TI_G_tna_F,
        DefaultManLeaderLinkedItems,
        NVGogglesB_grn_F
	};
};
class B_CTRG_Soldier_Medic_tna_F: B_CTRG_Soldier_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_CTRG_Soldier_Medic_tna_F.jpg";
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
	icon = iconManMedic;
	picture = pictureHeal;
    attendant = true;
	weapons[] =
    {
        arifle_SPAR_01_blk_ERCO_Pointer_Snds_F,
        hgun_P07_blk_Snds_F,
        DefaultManWeapons
    };
	respawnWeapons[] =
    {
        arifle_SPAR_01_blk_ERCO_Pointer_Snds_F,
        hgun_P07_blk_Snds_F,
        DefaultManWeapons
    };
	magazines[] =
    {
        mag_6(30Rnd_556x45_Stanag_red),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
		SmokeShell,
		SMOKESHELLS_MEDIC,
        mag_2(Chemlight_green)
    };
	respawnMagazines[] =
    {
        mag_6(30Rnd_556x45_Stanag_red),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
		SmokeShell,
		SMOKESHELLS_MEDIC,
        mag_2(Chemlight_green)
    };
	linkedItems[] =
	{
		V_PlateCarrier1_rgr_noflag_F,
		H_HelmetB_TI_tna_F,
		G_Balaclava_TI_G_tna_F,
        DefaultManLeaderLinkedItems,
        NVGogglesB_grn_F
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier1_rgr_noflag_F,
		H_HelmetB_TI_tna_F,
		G_Balaclava_TI_G_tna_F,
        DefaultManLeaderLinkedItems,
        NVGogglesB_grn_F
	};
};
class B_CTRG_Soldier_M_tna_F: B_CTRG_Soldier_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_CTRG_Soldier_M_tna_F.jpg";
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
	weapons[] =
    {
        arifle_SPAR_03_blk_MOS_Pointer_Bipod_Snds_F,
        hgun_P07_blk_Snds_F,
        DefaultManWeapons,
		Rangefinder
    };
	respawnWeapons[] =
    {
        arifle_SPAR_03_blk_MOS_Pointer_Bipod_Snds_F,
        hgun_P07_blk_Snds_F,
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
		V_PlateCarrier1_rgr_noflag_F,
		H_HelmetB_TI_tna_F,
		G_Balaclava_TI_G_tna_F,
        DefaultManLeaderLinkedItems,
        NVGogglesB_grn_F
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier1_rgr_noflag_F,
		H_HelmetB_TI_tna_F,
		G_Balaclava_TI_G_tna_F,
        DefaultManLeaderLinkedItems,
        NVGogglesB_grn_F
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
};
class B_CTRG_Soldier_LAT_tna_F: B_CTRG_Soldier_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_CTRG_Soldier_LAT_tna_F.jpg";
	icon = iconManAT;
	weapons[] =
    {
        arifle_SPAR_01_blk_ERCO_Pointer_Snds_F,
        hgun_P07_blk_Snds_F,
		launch_NLAW_F,
        DefaultManWeapons
    };
	respawnWeapons[] =
    {
        arifle_SPAR_01_blk_ERCO_Pointer_Snds_F,
        hgun_P07_blk_Snds_F,
		launch_NLAW_F,
        DefaultManWeapons
    };
	magazines[] =
    {
        mag_6(30Rnd_556x45_Stanag_red),
        mag_2(16Rnd_9x21_Mag),
		NLAW_F,
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
	respawnMagazines[] =
    {
        mag_6(30Rnd_556x45_Stanag_red),
        mag_2(16Rnd_9x21_Mag),
		NLAW_F,
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
	linkedItems[] =
	{
		V_PlateCarrier2_rgr_noflag_F,
		H_HelmetB_TI_tna_F,
		G_Balaclava_TI_G_tna_F,
        DefaultManLeaderLinkedItems,
        NVGogglesB_grn_F
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier2_rgr_noflag_F,
		H_HelmetB_TI_tna_F,
		G_Balaclava_TI_G_tna_F,
        DefaultManLeaderLinkedItems,
        NVGogglesB_grn_F
	};
};
class B_CTRG_Soldier_AR_tna_F: B_CTRG_Soldier_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_CTRG_Soldier_AR_tna_F.jpg";
	weapons[] =
    {
        arifle_SPAR_02_blk_ERCO_Pointer_Bipod_Snds_F,
        hgun_P07_blk_Snds_F,
        DefaultManWeapons
    };
	respawnWeapons[] =
    {
        arifle_SPAR_02_blk_ERCO_Pointer_Bipod_Snds_F,
        hgun_P07_blk_Snds_F,
        DefaultManWeapons
    };
	magazines[] =
    {
        mag_6(150Rnd_556x45_Drum_Mag_F),
        mag_2(16Rnd_9x21_Mag),
        MiniGrenade,
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
	respawnMagazines[] =
    {
        mag_6(150Rnd_556x45_Drum_Mag_F),
        mag_2(16Rnd_9x21_Mag),
        MiniGrenade,
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
	linkedItems[] =
	{
		V_PlateCarrier2_rgr_noflag_F,
		H_HelmetB_TI_tna_F,
		G_Balaclava_TI_G_tna_F,
        DefaultManLeaderLinkedItems,
        NVGogglesB_grn_F
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier2_rgr_noflag_F,
		H_HelmetB_TI_tna_F,
		G_Balaclava_TI_G_tna_F,
        DefaultManLeaderLinkedItems,
        NVGogglesB_grn_F
	};
	items[] =
	{
		FirstAidKit,
		optic_tws_mg
	};
	respawnItems[] =
	{
		FirstAidKit,
		optic_tws_mg
	};
};
class B_CTRG_Soldier_JTAC_tna_F: B_CTRG_Soldier_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_CTRG_Soldier_JTAC_tna_F.jpg";
	backpack = B_RadioBag_01_green_F;
	weapons[] =
    {
        arifle_SPAR_01_GL_blk_ERCO_Pointer_Snds_F,
        hgun_P07_blk_Snds_F,
        DefaultManWeapons,
        Laserdesignator_01_khk_F
    };
	respawnWeapons[] =
    {
        arifle_SPAR_01_GL_blk_ERCO_Pointer_Snds_F,
        hgun_P07_blk_Snds_F,
        DefaultManWeapons,
        Laserdesignator_01_khk_F
    };
	magazines[] =
    {
        mag_6(30Rnd_556x45_Stanag_red),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
		mag_2(B_IR_Grenade),
        mag_6(1Rnd_HE_Grenade_shell),
        Laserbatteries,
        SmokeShell,
		SMOKESHELLS_BLUFOR,
        mag_2(Chemlight_green),
        1Rnd_Smoke_Grenade_shell,
		SMOKEGRENADES_BLUFOR
    };
	respawnMagazines[] =
    {
        mag_6(30Rnd_556x45_Stanag_red),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
		mag_2(B_IR_Grenade),
        mag_6(1Rnd_HE_Grenade_shell),
        Laserbatteries,
        SmokeShell,
		SMOKESHELLS_BLUFOR,
        mag_2(Chemlight_green),
        1Rnd_Smoke_Grenade_shell,
		SMOKEGRENADES_BLUFOR
    };
	linkedItems[] =
	{
		V_PlateCarrier1_rgr_noflag_F,
		H_HelmetB_TI_tna_F,
		G_Balaclava_TI_G_tna_F,
        DefaultManLeaderLinkedItems,
        NVGogglesB_grn_F
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier1_rgr_noflag_F,
		H_HelmetB_TI_tna_F,
		G_Balaclava_TI_G_tna_F,
        DefaultManLeaderLinkedItems,
        NVGogglesB_grn_F
	};
};
class B_CTRG_Miller_F: B_CTRG_Soldier_3_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_CTRG_Miller_F.jpg";
    faction = BLU_CTRG_tna_F;
	weapons[] =
    {
        arifle_SPAR_01_blk_ERCO_Pointer_Snds_F,
        hgun_P07_blk_Snds_F,
        DefaultManWeapons,
        Rangefinder
    };
	respawnWeapons[] =
    {
        arifle_SPAR_01_blk_ERCO_Pointer_Snds_F,
        hgun_P07_blk_Snds_F,
        DefaultManWeapons,
        Rangefinder
    };
	magazines[] =
    {
        mag_10(30Rnd_556x45_Stanag_red),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
	respawnMagazines[] =
    {
        mag_10(30Rnd_556x45_Stanag_red),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
	linkedItems[] =
	{
		V_PlateCarrier2_rgr_noflag_F,
		G_Tactical_Black,
        DefaultManLeaderLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier2_rgr_noflag_F,
		G_Tactical_Black,
        DefaultManLeaderLinkedItems
	};
};
class B_CTRG_Soldier_urb_1_F: B_CTRG_Soldier_F
{
    faction = BLU_CTRG_tna_F;
	//hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\clothing1_mtp_urban_CO.paa"};
};
class B_CTRG_Soldier_urb_2_F: B_CTRG_Soldier_2_F
{
    faction = BLU_CTRG_tna_F;
	/*hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\clothing1_mtp_urban_CO.paa",
		"\A3\Characters_F_Exp\BLUFOR\Data\U_BT_Soldier_AR_F_tna_01_CO.paa"
	};*/
};
class B_CTRG_Soldier_urb_3_F: B_CTRG_Soldier_3_F
{
    faction = BLU_CTRG_tna_F;
	//hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\clothing1_mtp_urban_CO.paa"};
};
class B_CTRG_Soldier_LAT2_tna_F: B_CTRG_Soldier_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_CTRG_Soldier_LAT2_tna_F.jpg";
	displayName = $STR_A3_A_CfgVehicles_CTRG_Soldier_LAT2_tna_F0;
	weapons[] =
    {
        arifle_SPAR_01_blk_ERCO_Pointer_Snds_F,
        hgun_P07_blk_Snds_F,
		launch_MRAWS_green_F,
        DefaultManWeapons
    };
	respawnWeapons[] =
    {
        arifle_SPAR_01_blk_ERCO_Pointer_Snds_F,
        hgun_P07_blk_Snds_F,
		launch_MRAWS_green_F,
        DefaultManWeapons
    };
	magazines[] =
    {
        mag_6(30Rnd_556x45_Stanag_red),
        mag_2(16Rnd_9x21_Mag),
		MRAWS_HEAT_F,
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
	respawnMagazines[] =
    {
        mag_6(30Rnd_556x45_Stanag_red),
        mag_2(16Rnd_9x21_Mag),
		MRAWS_HEAT_F,
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
	linkedItems[] =
	{
		V_PlateCarrier2_rgr_noflag_F,
		H_HelmetB_TI_tna_F,
		G_Balaclava_TI_G_tna_F,
        DefaultManLeaderLinkedItems,
        NVGogglesB_grn_F
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier2_rgr_noflag_F,
		H_HelmetB_TI_tna_F,
		G_Balaclava_TI_G_tna_F,
        DefaultManLeaderLinkedItems,
        NVGogglesB_grn_F
	};
};
class B_CTRG_Soldier_TL_urb_F: B_CTRG_Soldier_urb_3_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_CTRG_Soldier_TL_urb_F.jpg";
	editorSubcategory = EdSubcat_Personnel_Camo_Urban;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_NATO,
		G_NATO_SF
	};
	scope = public;
	displayName = $STR_B_SOLDIER_TL_F0;
	uniformClass = U_B_CTRG_Soldier_urb_3_F;
	icon = iconManLeader;
	cost = 450000;
	weapons[] =
    {
        arifle_SPAR_01_blk_ERCO_Pointer_Snds_F,
        hgun_P07_blk_Snds_F,
        DefaultManWeapons,
        Rangefinder
    };
	respawnWeapons[] =
    {
        arifle_SPAR_01_blk_ERCO_Pointer_Snds_F,
        hgun_P07_blk_Snds_F,
        DefaultManWeapons,
        Rangefinder
    };
	magazines[] =
    {
        mag_4(30Rnd_556x45_Stanag_red),
        mag_2(30Rnd_556x45_Stanag_Tracer_Red),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        SmokeShell,
		SMOKESHELLS_BLUFOR,
        mag_2(Chemlight_green)
    };
	respawnMagazines[] =
    {
        mag_4(30Rnd_556x45_Stanag_red),
        mag_2(30Rnd_556x45_Stanag_Tracer_Red),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        SmokeShell,
		SMOKESHELLS_BLUFOR,
        mag_2(Chemlight_green)
    };
	linkedItems[] =
	{
		V_PlateCarrierH_CTRG_grn_F,
		H_HelmetB_TI_tna_F,
		G_Balaclava_TI_tna_F,
        DefaultManLeaderLinkedItems,
        NVGogglesB_grn_F
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrierH_CTRG_grn_F,
		H_HelmetB_TI_tna_F,
		G_Balaclava_TI_tna_F,
        DefaultManLeaderLinkedItems,
        NVGogglesB_grn_F
	};
};
class B_CTRG_Soldier_Exp_urb_F: B_CTRG_Soldier_urb_3_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_CTRG_Soldier_Exp_urb_F.jpg";
	editorSubcategory = EdSubcat_Personnel_Camo_Urban;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_NATO,
		G_NATO_recon
	};
	scope = public;
	displayName = $STR_A3_B_CTRG_Soldier_Exp_tna_F0;
	uniformClass = U_B_CTRG_Soldier_urb_3_F;
	role = Sapper;
	icon = iconManExplosive;
	picture = pictureExplosive;
	cost = 115000;
	canDeactivateMines = true;
	detectSkill = 38;
	backpack = B_Kitbag_rgr_CTRGExp_F;
	weapons[] =
    {
        arifle_SPAR_01_blk_ERCO_Pointer_Snds_F,
        hgun_P07_blk_Snds_F,
        DefaultManWeapons
    };
	respawnWeapons[] =
    {
        arifle_SPAR_01_blk_ERCO_Pointer_Snds_F,
        hgun_P07_blk_Snds_F,
        DefaultManWeapons
    };
	magazines[] =
    {
        mag_6(30Rnd_556x45_Stanag_red),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
		mag_3(APERSMine_Range_Mag),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
	respawnMagazines[] =
    {
        mag_6(30Rnd_556x45_Stanag_red),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
		mag_3(APERSMine_Range_Mag),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
	linkedItems[] =
	{
		V_PlateCarrierL_CTRG_grn_F,
		G_Balaclava_TI_tna_F,
        DefaultManLeaderLinkedItems,
        NVGogglesB_grn_F
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrierL_CTRG_grn_F,
		G_Balaclava_TI_tna_F,
        DefaultManLeaderLinkedItems,
        NVGogglesB_grn_F
	};
};
class B_CTRG_Soldier_Medic_urb_F: B_CTRG_Soldier_urb_2_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_CTRG_Soldier_Medic_urb_F.jpg";
	editorSubcategory = EdSubcat_Personnel_Camo_Urban;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_NATO,
		G_NATO_recon
	};
	scope = public;
	displayName = $STR_A3_B_CTRG_Soldier_Medic_tna_F0;
	uniformClass = U_B_CTRG_Soldier_urb_2_F;
	role = CombatLifeSaver;
	icon = iconManMedic;
	picture = pictureHeal;
    attendant = true;
	cost = 300000;
	backpack = B_AssaultPack_rgr_CTRGMedic_F;
	weapons[] =
    {
        arifle_SPAR_01_blk_ERCO_Pointer_Snds_F,
        hgun_P07_blk_Snds_F,
        DefaultManWeapons
    };
	respawnWeapons[] =
    {
        arifle_SPAR_01_blk_ERCO_Pointer_Snds_F,
        hgun_P07_blk_Snds_F,
        DefaultManWeapons
    };
	magazines[] =
    {
        mag_6(30Rnd_556x45_Stanag_red),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
		SmokeShell,
		SMOKESHELLS_MEDIC,
        mag_2(Chemlight_green)
    };
	respawnMagazines[] =
    {
        mag_6(30Rnd_556x45_Stanag_red),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
		SmokeShell,
		SMOKESHELLS_MEDIC,
        mag_2(Chemlight_green)
    };
	linkedItems[] =
	{
		V_PlateCarrierL_CTRG_grn_F,
        DefaultManLeaderLinkedItems,
        NVGogglesB_grn_F
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrierL_CTRG_grn_F,
        H_Cap_blk,
        DefaultManLeaderLinkedItems,
        NVGogglesB_grn_F
	};
};
class B_CTRG_Soldier_M_urb_F: B_CTRG_Soldier_urb_1_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_CTRG_Soldier_M_urb_F.jpg";
	editorSubcategory = EdSubcat_Personnel_Camo_Urban;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_NATO,
		G_NATO_recon
	};
	displayName = $STR_B_SOLDIER_M_F0;
	uniformClass = U_B_CTRG_Soldier_urb_1_F;
	scope = public;
	role = Marksman;
	cost = 150000;
	weapons[] =
    {
        arifle_SPAR_03_blk_MOS_Pointer_Bipod_Snds_F,
        hgun_P07_blk_Snds_F,
        DefaultManWeapons,
		Rangefinder
    };
	respawnWeapons[] =
    {
        arifle_SPAR_03_blk_MOS_Pointer_Bipod_Snds_F,
        hgun_P07_blk_Snds_F,
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
		V_PlateCarrierL_CTRG_grn_F,
		G_Balaclava_TI_tna_F,
        DefaultManLeaderLinkedItems,
        NVGogglesB_grn_F
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrierL_CTRG_grn_F,
		G_Balaclava_TI_tna_F,
        DefaultManLeaderLinkedItems,
        NVGogglesB_grn_F
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
};
class B_CTRG_Soldier_urb_F: B_CTRG_Soldier_urb_3_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_CTRG_Soldier_urb_F.jpg";
	editorSubcategory = EdSubcat_Personnel_Camo_Urban;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_NATO,
		G_NATO_SF
	};
	scope = public;
	displayName = $STR_A3_B_CTRG_Soldier_tna_F0;
	uniformClass = U_B_CTRG_Soldier_urb_3_F;
	role = Rifleman;
	weapons[] =
    {
        arifle_SPAR_01_blk_ERCO_Pointer_Snds_F,
        hgun_P07_blk_Snds_F,
        DefaultManWeapons,
        Rangefinder
    };
	respawnWeapons[] =
    {
        arifle_SPAR_01_blk_ERCO_Pointer_Snds_F,
        hgun_P07_blk_Snds_F,
        DefaultManWeapons,
        Rangefinder
    };
	magazines[] =
    {
        mag_10(30Rnd_556x45_Stanag_red),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
	respawnMagazines[] =
    {
        mag_10(30Rnd_556x45_Stanag_red),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
	linkedItems[] =
	{
		V_PlateCarrierH_CTRG_grn_F,
		H_HelmetB_TI_tna_F,
        G_Balaclava_TI_tna_F,
        DefaultManLeaderLinkedItems,
        NVGogglesB_grn_F
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrierH_CTRG_grn_F,
		H_HelmetB_TI_tna_F,
        G_Balaclava_TI_tna_F,
        DefaultManLeaderLinkedItems,
        NVGogglesB_grn_F
	};
};
class B_CTRG_Soldier_LAT_urb_F: B_CTRG_Soldier_urb_2_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_CTRG_Soldier_LAT_urb_F.jpg";
	editorSubcategory = EdSubcat_Personnel_Camo_Urban;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_NATO,
		G_NATO_SF
	};
	scope = public;
	displayName = $STR_A3_B_CTRG_Soldier_LAT_tna_F0;
	uniformClass = U_B_CTRG_Soldier_urb_2_F;
	role = MissileSpecialist;
	icon = iconManAT;
	cost = 180000;
	threat[] =
    {
        1,      // Soft
        0.7,    // Armor
        0.3     // Air
    };
	backpack = B_AssaultPack_rgr_CTRGLAT_F;
	weapons[] =
	{
        arifle_SPAR_01_blk_ERCO_Pointer_Snds_F,
        hgun_P07_blk_Snds_F,
		launch_NLAW_F,
        DefaultManWeapons
    };
	respawnWeapons[] =
    {
        arifle_SPAR_01_blk_ERCO_Pointer_Snds_F,
        hgun_P07_blk_Snds_F,
		launch_NLAW_F,
        DefaultManWeapons
    };
	magazines[] =
    {
        mag_6(30Rnd_556x45_Stanag_red),
        mag_2(16Rnd_9x21_Mag),
		NLAW_F,
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
	respawnMagazines[] =
    {
        mag_6(30Rnd_556x45_Stanag_red),
        mag_2(16Rnd_9x21_Mag),
		NLAW_F,
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
	linkedItems[] =
	{
		V_PlateCarrierH_CTRG_grn_F,
		H_HelmetB_TI_tna_F,
        G_Balaclava_TI_tna_F,
        DefaultManLeaderLinkedItems,
        NVGogglesB_grn_F
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrierH_CTRG_grn_F,
		H_HelmetB_TI_tna_F,
        G_Balaclava_TI_tna_F,
        DefaultManLeaderLinkedItems,
        NVGogglesB_grn_F
	};
};
class B_CTRG_Soldier_LAT2_urb_F: B_CTRG_Soldier_urb_2_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_CTRG_Soldier_LAT2_urb_F.jpg";
	editorSubcategory = EdSubcat_Personnel_Camo_Urban;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_NATO,
		G_NATO_SF
	};
	scope = public;
	displayName = $STR_A3_A_CfgVehicles_CTRG_Soldier_LAT2_tna_F0;
	uniformClass = U_B_CTRG_Soldier_urb_2_F;
	role = MissileSpecialist;
	icon = iconManAT;
	cost = 180000;
	threat[] =
    {
        1,      // Soft
        0.7,    // Armor
        0.3     // Air
    };
	backpack = B_AssaultPack_rgr_CTRGLAT2_F;
	weapons[] =
	{
        arifle_SPAR_01_blk_ERCO_Pointer_Snds_F,
        hgun_P07_blk_Snds_F,
		launch_MRAWS_green_F,
        DefaultManWeapons
    };
	respawnWeapons[] =
    {
        arifle_SPAR_01_blk_ERCO_Pointer_Snds_F,
        hgun_P07_blk_Snds_F,
		launch_MRAWS_green_F,
        DefaultManWeapons
    };
	magazines[] =
    {
        mag_6(30Rnd_556x45_Stanag_red),
        mag_2(16Rnd_9x21_Mag),
		MRAWS_HEAT_F,
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
	respawnMagazines[] =
    {
        mag_6(30Rnd_556x45_Stanag_red),
        mag_2(16Rnd_9x21_Mag),
		MRAWS_HEAT_F,
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
	linkedItems[] =
	{
		V_PlateCarrierH_CTRG_grn_F,
		H_HelmetB_TI_tna_F,
        G_Balaclava_TI_tna_F,
        DefaultManLeaderLinkedItems,
        NVGogglesB_grn_F
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrierH_CTRG_grn_F,
		H_HelmetB_TI_tna_F,
        G_Balaclava_TI_tna_F,
        DefaultManLeaderLinkedItems,
        NVGogglesB_grn_F
	};
};
class B_CTRG_Soldier_AR_urb_F: B_CTRG_Soldier_urb_2_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_CTRG_Soldier_AR_urb_F.jpg";
	editorSubcategory = EdSubcat_Personnel_Camo_Urban;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_NATO,
		G_NATO_SF
	};
	scope = public;
	displayName = $STR_B_SOLDIER_AR_F0;
	uniformClass = U_B_CTRG_Soldier_urb_3_F;
	role = MachineGunner;
	icon = iconManMG;
	cost = 125000;
	threat[] =
    {
        1,      // Soft
        0.1,    // Armor
        0.3     // Air
    };
	weapons[] =
    {
        arifle_SPAR_02_blk_ERCO_Pointer_Bipod_Snds_F,
        hgun_P07_blk_Snds_F,
        DefaultManWeapons
    };
	respawnWeapons[] =
    {
        arifle_SPAR_02_blk_ERCO_Pointer_Bipod_Snds_F,
        hgun_P07_blk_Snds_F,
        DefaultManWeapons
    };
	magazines[] =
    {
        mag_6(150Rnd_556x45_Drum_Mag_F),
        mag_2(16Rnd_9x21_Mag),
        MiniGrenade,
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
	respawnMagazines[] =
    {
        mag_6(150Rnd_556x45_Drum_Mag_F),
        mag_2(16Rnd_9x21_Mag),
        MiniGrenade,
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
	linkedItems[] =
	{
		V_PlateCarrierH_CTRG_grn_F,
		H_HelmetB_TI_tna_F,
        G_Balaclava_TI_tna_F,
        DefaultManLeaderLinkedItems,
        NVGogglesB_grn_F
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrierH_CTRG_grn_F,
		H_HelmetB_TI_tna_F,
        G_Balaclava_TI_tna_F,
        DefaultManLeaderLinkedItems,
        NVGogglesB_grn_F
	};
	items[] =
	{
		FirstAidKit,
		optic_tws_mg
	};
	respawnItems[] =
	{
		FirstAidKit,
		optic_tws_mg
	};
};
class B_CTRG_Soldier_JTAC_urb_F: B_CTRG_Soldier_urb_1_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_CTRG_Soldier_JTAC_urb_F.jpg";
	editorSubcategory = EdSubcat_Personnel_Camo_Urban;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_NATO,
		G_NATO_recon
	};
	scope = public;
	displayName = $STR_A3_B_CTRG_Soldier_JTAC_tna_F0;
	uniformClass = U_B_CTRG_Soldier_urb_1_F;
	role = SpecialOperative;
	cost = 200000;
	backpack = B_RadioBag_01_green_F;
	weapons[] =
    {
        arifle_SPAR_01_GL_blk_ERCO_Pointer_Snds_F,
        hgun_P07_blk_Snds_F,
        DefaultManWeapons,
        Laserdesignator_01_khk_F
    };
	respawnWeapons[] =
    {
        arifle_SPAR_01_GL_blk_ERCO_Pointer_Snds_F,
        hgun_P07_blk_Snds_F,
        DefaultManWeapons,
        Laserdesignator_01_khk_F
    };
	magazines[] =
    {
        mag_6(30Rnd_556x45_Stanag_red),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
		mag_2(B_IR_Grenade),
        mag_6(1Rnd_HE_Grenade_shell),
        Laserbatteries,
        SmokeShell,
		SMOKESHELLS_BLUFOR,
        mag_2(Chemlight_green),
        1Rnd_Smoke_Grenade_shell,
		SMOKEGRENADES_BLUFOR
    };
	respawnMagazines[] =
    {
        mag_6(30Rnd_556x45_Stanag_red),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
		mag_2(B_IR_Grenade),
        mag_6(1Rnd_HE_Grenade_shell),
        Laserbatteries,
        SmokeShell,
		SMOKESHELLS_BLUFOR,
        mag_2(Chemlight_green),
        1Rnd_Smoke_Grenade_shell,
		SMOKEGRENADES_BLUFOR
    };
	linkedItems[] =
	{
		V_PlateCarrierL_CTRG_grn_F,
		G_Balaclava_TI_tna_F,
        DefaultManLeaderLinkedItems,
        NVGogglesB_grn_F
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrierL_CTRG_grn_F,
		G_Balaclava_TI_tna_F,
        DefaultManLeaderLinkedItems,
        NVGogglesB_grn_F
	};
};
class B_CTRG_ghillie_tna_F: B_CTRG_ghillie_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_CTRG_ghillie_tna_F.jpg";
    faction = BLU_CTRG_tna_F;
	editorSubcategory = EdSubcat_Personnel_Pacific;
	scope = public;
	displayName = $STR_A3_O_T_ghillie_tna_F0;
	uniformClass = U_B_T_FullGhillie_tna_F;
	hiddenSelectionsTextures[] =
    {
        "\A3\Characters_F_Exp\BLUFOR\Data\ghillie_coverall_NATO_CO.paa",
        "\A3\Characters_F_Exp\BLUFOR\Data\ghillie_threads_tna_CA.paa",
        "\A3\Characters_F_Exp\BLUFOR\Data\ghillie_threads_5LOD_tna_CO.paa"
    };
	weapons[] =
    {
        srifle_DMR_02_tna_AMS_Pointer_Bipod_F,
        hgun_P07_blk_Snds_F,
        DefaultManWeapons,
        Rangefinder
    };
	respawnWeapons[] =
    {
        srifle_DMR_02_tna_AMS_Pointer_Bipod_F,
        hgun_P07_blk_Snds_F,
        DefaultManWeapons,
        Rangefinder
    };
	linkedItems[] =
    {
        V_Chestrig_rgr,
        DefaultManLeaderLinkedItems,
        NVGogglesB_grn_F
    };
	respawnLinkedItems[] =
    {
        V_Chestrig_rgr,
        DefaultManLeaderLinkedItems,
        NVGogglesB_grn_F
    };
};
class B_CTRG_ghillie_spotter_tna_F: B_CTRG_ghillie_tna_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_CTRG_ghillie_spotter_tna_F.jpg";
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
	scope = public;
	displayName = $STR_A3_A_CfgVehicles_O_T_ghillie_spotter_tna_F0;
	cost = 250000;
    weapons[] =
    {
        arifle_SPAR_01_blk_ERCO_Pointer_Snds_F,
        hgun_P07_blk_Snds_F,
        DefaultManWeapons,
        Laserdesignator_01_khk_F
    };
    respawnWeapons[] =
    {
        arifle_SPAR_01_blk_ERCO_Pointer_Snds_F,
        hgun_P07_blk_Snds_F,
        DefaultManWeapons,
        Laserdesignator_01_khk_F
    };
    magazines[] =
    {
        mag_6(30Rnd_556x45_Stanag_red),
        mag_2(16Rnd_9x21_Mag),
        ClaymoreDirectionalMine_Remote_Mag,
        APERSTripMine_Wire_Mag,
        mag_2(MiniGrenade),
        mag_2(B_IR_Grenade),
        Laserbatteries,
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_556x45_Stanag_red),
        mag_2(16Rnd_9x21_Mag),
        ClaymoreDirectionalMine_Remote_Mag,
        APERSTripMine_Wire_Mag,
        mag_2(MiniGrenade),
        mag_2(B_IR_Grenade),
        Laserbatteries,
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
	items[] =
	{
		FirstAidKit,
		optic_tws
	};
	respawnItems[] =
	{
		FirstAidKit,
		optic_tws
	};
};

/* West Saharan CTRG */
class B_D_CTRG_Soldier_Exp_LxWS: B_CTRG_Soldier_Exp_tna_F
{
    faction = BLU_CTRG_F;
};
class B_D_CTRG_Soldier_HG_LxWS: B_CTRG_Soldier_AR_tna_F
{
    faction = BLU_CTRG_F;
};
class B_D_CTRG_Soldier_JTAC_LxWS: B_CTRG_Soldier_JTAC_tna_F
{
    faction = BLU_CTRG_F;
};
class B_D_CTRG_Soldier_M_LxWS: B_CTRG_Soldier_M_tna_F
{
    faction = BLU_CTRG_F;
};
class B_D_CTRG_Soldier_Medic_LxWS: B_CTRG_Soldier_Medic_tna_F
{
    faction = BLU_CTRG_F;
};
class B_CTRG_soldier_tna_F;
class B_D_CTRG_Soldier_LxWS: B_CTRG_soldier_tna_F
{
    scope = public;
    faction = BLU_CTRG_F;
};
class B_D_CTRG_Soldier_LAT2_LxWS: B_CTRG_Soldier_LAT2_tna_F
{
    faction = BLU_CTRG_F;
};
class B_D_CTRG_Soldier_TL_LxWS: B_CTRG_Soldier_TL_tna_F
{
    faction = BLU_CTRG_F;
};