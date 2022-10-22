/* FIA */
class I_G_Soldier_base_F: SoldierGB
{
	modelSides[] = {TFriendly};
    class EventHandlers;
	magazines[] =
	{
        mag_6(30Rnd_556x45_Stanag),
        HandGrenade,
        MiniGrenade,
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
        mag_6(30Rnd_556x45_Stanag),
        HandGrenade,
        MiniGrenade,
        mag_2(SmokeShell)
	};
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
};
class I_G_Soldier_F: I_G_Soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_G_Soldier_F.jpg";
    allowedHeadgear[] =
    {
        H_Bandanna_gry,
        H_Bandanna_blu,
        H_Bandanna_cbr,
        H_Bandanna_khk,
        H_Bandanna_khk_hs,
        H_Bandanna_sgg,
        H_Bandanna_sand,
        H_Bandanna_surfer,
        H_Bandanna_surfer_blk,
        H_Bandanna_surfer_grn,
        H_Bandanna_camo,
        H_Bandanna_camo_hs,
        H_Watchcap_blk,
        H_Watchcap_cbr,
        H_Watchcap_camo,
        H_Watchcap_khk,
        H_Watchcap_sgg,
        H_Watchcap_red,
        H_Watchcap_blk_hs,
        H_Watchcap_cbr_hs,
        H_Watchcap_camo_hs,
        H_Watchcap_khk_hs,
        H_Booniehat_khk,
        H_Booniehat_khk_hs,
        H_Booniehat_oli,
        H_Booniehat_tan,
        H_Booniehat_dgtl,
        H_Booniehat_mgrn,
        H_Booniehat_oli_hs,
        H_Booniehat_dgtl_hs,
        H_Booniehat_mgrn_hs,
        H_Cap_blk,
        H_Cap_grn,
        H_Cap_khk,
        H_Cap_oli,
        H_Cap_oli_hs,
        H_Cap_tan,
        H_Cap_blk_Raven,
        H_Cap_blk_Raven_hs,
        H_Shemag_olive,
        H_Shemag_olive_hs,
        H_ShemagOpen_tan,
        H_ShemagOpen_khk,
        H_ShemagOpen_khk_hs,
        H_ShemagOpen_tan_hs,
        H_HeadSet_light_F,
        H_Hat_Safari_sand_F,
        H_Hat_Safari_olive_F,
        H_PASGT_basic_black_F,
        H_PASGT_basic_green_F,
        H_PASGT_basic_olive_F
    };
    headgearList[] =
    {
        H_Bandanna_gry,1,
        H_Bandanna_blu,1,
        H_Bandanna_cbr,1,
        H_Bandanna_khk,1,
        H_Bandanna_khk_hs,1,
        H_Bandanna_sgg,1,
        H_Bandanna_sand,1,
        H_Bandanna_surfer,1,
        H_Bandanna_surfer_blk,1,
        H_Bandanna_surfer_grn,1,
        H_Bandanna_camo,1,
        H_Bandanna_camo_hs,1,
        H_Watchcap_blk,1,
        H_Watchcap_cbr,1,
        H_Watchcap_camo,1,
        H_Watchcap_khk,1,
        H_Watchcap_sgg,1,
        H_Watchcap_red,1,
        H_Watchcap_blk_hs,1,
        H_Watchcap_cbr_hs,1,
        H_Watchcap_camo_hs,1,
        H_Watchcap_khk_hs,1,
        H_Booniehat_khk,1,
        H_Booniehat_khk_hs,1,
        H_Booniehat_oli,1,
        H_Booniehat_tan,1,
        H_Booniehat_dgtl,1,
        H_Booniehat_mgrn,1,
        H_Booniehat_oli_hs,1,
        H_Booniehat_dgtl_hs,1,
        H_Booniehat_mgrn_hs,1,
        H_Cap_blk,1,
        H_Cap_grn,1,
        H_Cap_khk,1,
        H_Cap_oli,1,
        H_Cap_oli_hs,1,
        H_Cap_tan,1,
        H_Cap_blk_Raven,1,
        H_Cap_blk_Raven_hs,1,
        H_Shemag_olive,1,
        H_Shemag_olive_hs,1,
        H_ShemagOpen_tan,1,
        H_ShemagOpen_khk,1,
        H_ShemagOpen_khk_hs,1,
        H_ShemagOpen_tan_hs,1,
        H_HeadSet_light_F,1,
        H_Hat_Safari_sand_F,1,
        H_Hat_Safari_olive_F,1,
        H_PASGT_basic_black_F,1,
        H_PASGT_basic_green_F,1,
        H_PASGT_basic_olive_F,1,
        H_FakeHeadgear_F,1
    };
};
class I_G_Soldier_lite_F: I_G_Soldier_base_F
{
    hiddenSelectionsTextures[] =
    {
        "\A3\Characters_F\Civil\Data\C_Cloth1_kabeiroi_CO.paa",
        "\A3\Characters_F_Beta\INDEP\Data\IA_soldier_01_clothing_CO.paa"
    };
	uniformClass = U_IG_Guerilla1_3;
	magazines[] =
	{
        mag_4(30Rnd_556x45_Stanag),
        MiniGrenade,
        SmokeShell
	};
	respawnMagazines[] =
	{
        mag_4(30Rnd_556x45_Stanag),
        MiniGrenade,
        SmokeShell
	};
    allowedHeadgear[] =
    {
        H_Bandanna_gry,
        H_Bandanna_blu,
        H_Bandanna_cbr,
        H_Bandanna_khk,
        H_Bandanna_khk_hs,
        H_Bandanna_sgg,
        H_Bandanna_sand,
        H_Bandanna_surfer,
        H_Bandanna_surfer_blk,
        H_Bandanna_surfer_grn,
        H_Bandanna_camo,
        H_Bandanna_camo_hs,
        H_Watchcap_blk,
        H_Watchcap_cbr,
        H_Watchcap_camo,
        H_Watchcap_khk,
        H_Watchcap_sgg,
        H_Watchcap_red,
        H_Watchcap_blk_hs,
        H_Watchcap_cbr_hs,
        H_Watchcap_camo_hs,
        H_Watchcap_khk_hs,
        H_Booniehat_khk,
        H_Booniehat_khk_hs,
        H_Booniehat_oli,
        H_Booniehat_tan,
        H_Booniehat_dgtl,
        H_Booniehat_mgrn,
        H_Booniehat_oli_hs,
        H_Booniehat_dgtl_hs,
        H_Booniehat_mgrn_hs,
        H_Cap_blk,
        H_Cap_grn,
        H_Cap_khk,
        H_Cap_oli,
        H_Cap_oli_hs,
        H_Cap_tan,
        H_Cap_blk_Raven,
        H_Cap_blk_Raven_hs,
        H_Shemag_olive,
        H_Shemag_olive_hs,
        H_ShemagOpen_tan,
        H_ShemagOpen_khk,
        H_ShemagOpen_khk_hs,
        H_ShemagOpen_tan_hs,
        H_HeadSet_light_F,
        H_Hat_Safari_sand_F,
        H_Hat_Safari_olive_F,
        H_PASGT_basic_black_F,
        H_PASGT_basic_green_F,
        H_PASGT_basic_olive_F
    };
    headgearList[] =
    {
        H_Bandanna_gry,1,
        H_Bandanna_blu,1,
        H_Bandanna_cbr,1,
        H_Bandanna_khk,1,
        H_Bandanna_khk_hs,1,
        H_Bandanna_sgg,1,
        H_Bandanna_sand,1,
        H_Bandanna_surfer,1,
        H_Bandanna_surfer_blk,1,
        H_Bandanna_surfer_grn,1,
        H_Bandanna_camo,1,
        H_Bandanna_camo_hs,1,
        H_Watchcap_blk,1,
        H_Watchcap_cbr,1,
        H_Watchcap_camo,1,
        H_Watchcap_khk,1,
        H_Watchcap_sgg,1,
        H_Watchcap_red,1,
        H_Watchcap_blk_hs,1,
        H_Watchcap_cbr_hs,1,
        H_Watchcap_camo_hs,1,
        H_Watchcap_khk_hs,1,
        H_Booniehat_khk,1,
        H_Booniehat_khk_hs,1,
        H_Booniehat_oli,1,
        H_Booniehat_tan,1,
        H_Booniehat_dgtl,1,
        H_Booniehat_mgrn,1,
        H_Booniehat_oli_hs,1,
        H_Booniehat_dgtl_hs,1,
        H_Booniehat_mgrn_hs,1,
        H_Cap_blk,1,
        H_Cap_grn,1,
        H_Cap_khk,1,
        H_Cap_oli,1,
        H_Cap_oli_hs,1,
        H_Cap_tan,1,
        H_Cap_blk_Raven,1,
        H_Cap_blk_Raven_hs,1,
        H_Shemag_olive,1,
        H_Shemag_olive_hs,1,
        H_ShemagOpen_tan,1,
        H_ShemagOpen_khk,1,
        H_ShemagOpen_khk_hs,1,
        H_ShemagOpen_tan_hs,1,
        H_HeadSet_light_F,1,
        H_Hat_Safari_sand_F,1,
        H_Hat_Safari_olive_F,1,
        H_PASGT_basic_black_F,1,
        H_PASGT_basic_green_F,1,
        H_PASGT_basic_olive_F,1,
        H_FakeHeadgear_F,1
    };
};
class I_G_Soldier_SL_F: I_G_Soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_G_Soldier_SL_F.jpg";
	weapons[] =
    {
        arifle_TRG21_MRCO_F,
        hgun_ACPC2_F,
        DefaultManWeapons,
        Binocular
    };
	respawnWeapons[] =
    {
        arifle_TRG21_MRCO_F,
        hgun_ACPC2_F,
        DefaultManWeapons,
        Binocular
    };
	magazines[] =
	{
        mag_4(30Rnd_556x45_Stanag),
        mag_2(30Rnd_556x45_Stanag_Tracer_Yellow),
        mag_2(9Rnd_45ACP_Mag),
        HandGrenade,
        MiniGrenade,
        SmokeShell,
        SMOKESHELLS_DEFAULT
	};
	respawnMagazines[] =
	{
        mag_4(30Rnd_556x45_Stanag),
        mag_2(30Rnd_556x45_Stanag_Tracer_Yellow),
        mag_2(9Rnd_45ACP_Mag),
        HandGrenade,
        MiniGrenade,
        SmokeShell,
        SMOKESHELLS_DEFAULT
	};
	linkedItems[] =
	{
		H_Watchcap_blk,
		V_ChestrigF_blk,
		DefaultManGuerillaLinkedItems
	};
	respawnLinkedItems[] =
	{
		H_Watchcap_blk,
		V_ChestrigF_blk,
		DefaultManGuerillaLinkedItems
	};
    allowedHeadgear[] =
    {
        H_Bandanna_gry,
        H_Bandanna_blu,
        H_Bandanna_cbr,
        H_Bandanna_khk,
        H_Bandanna_khk_hs,
        H_Bandanna_sgg,
        H_Bandanna_sand,
        H_Bandanna_surfer,
        H_Bandanna_surfer_blk,
        H_Bandanna_surfer_grn,
        H_Bandanna_camo,
        H_Bandanna_camo_hs,
        H_Watchcap_blk,
        H_Watchcap_cbr,
        H_Watchcap_camo,
        H_Watchcap_khk,
        H_Watchcap_sgg,
        H_Watchcap_red,
        H_Watchcap_blk_hs,
        H_Watchcap_cbr_hs,
        H_Watchcap_camo_hs,
        H_Watchcap_khk_hs,
        H_Booniehat_khk,
        H_Booniehat_khk_hs,
        H_Booniehat_oli,
        H_Booniehat_tan,
        H_Booniehat_dgtl,
        H_Booniehat_mgrn,
        H_Booniehat_oli_hs,
        H_Booniehat_dgtl_hs,
        H_Booniehat_mgrn_hs,
        H_Cap_blk,
        H_Cap_grn,
        H_Cap_khk,
        H_Cap_oli,
        H_Cap_oli_hs,
        H_Cap_tan,
        H_Cap_blk_Raven,
        H_Cap_blk_Raven_hs,
        H_Shemag_olive,
        H_Shemag_olive_hs,
        H_ShemagOpen_tan,
        H_ShemagOpen_khk,
        H_ShemagOpen_khk_hs,
        H_ShemagOpen_tan_hs,
        H_HeadSet_light_F,
        H_Hat_Safari_sand_F,
        H_Hat_Safari_olive_F,
        H_PASGT_basic_black_F,
        H_PASGT_basic_green_F,
        H_PASGT_basic_olive_F
    };
    headgearList[] =
    {
        H_Bandanna_gry,1,
        H_Bandanna_blu,1,
        H_Bandanna_cbr,1,
        H_Bandanna_khk,1,
        H_Bandanna_khk_hs,1,
        H_Bandanna_sgg,1,
        H_Bandanna_sand,1,
        H_Bandanna_surfer,1,
        H_Bandanna_surfer_blk,1,
        H_Bandanna_surfer_grn,1,
        H_Bandanna_camo,1,
        H_Bandanna_camo_hs,1,
        H_Watchcap_blk,1,
        H_Watchcap_cbr,1,
        H_Watchcap_camo,1,
        H_Watchcap_khk,1,
        H_Watchcap_sgg,1,
        H_Watchcap_red,1,
        H_Watchcap_blk_hs,1,
        H_Watchcap_cbr_hs,1,
        H_Watchcap_camo_hs,1,
        H_Watchcap_khk_hs,1,
        H_Booniehat_khk,1,
        H_Booniehat_khk_hs,1,
        H_Booniehat_oli,1,
        H_Booniehat_tan,1,
        H_Booniehat_dgtl,1,
        H_Booniehat_mgrn,1,
        H_Booniehat_oli_hs,1,
        H_Booniehat_dgtl_hs,1,
        H_Booniehat_mgrn_hs,1,
        H_Cap_blk,1,
        H_Cap_grn,1,
        H_Cap_khk,1,
        H_Cap_oli,1,
        H_Cap_oli_hs,1,
        H_Cap_tan,1,
        H_Cap_blk_Raven,1,
        H_Cap_blk_Raven_hs,1,
        H_Shemag_olive,1,
        H_Shemag_olive_hs,1,
        H_ShemagOpen_tan,1,
        H_ShemagOpen_khk,1,
        H_ShemagOpen_khk_hs,1,
        H_ShemagOpen_tan_hs,1,
        H_HeadSet_light_F,1,
        H_Hat_Safari_sand_F,1,
        H_Hat_Safari_olive_F,1,
        H_PASGT_basic_black_F,1,
        H_PASGT_basic_green_F,1,
        H_PASGT_basic_olive_F,1,
        H_FakeHeadgear_F,1
    };
};
class I_G_Soldier_TL_F: I_G_Soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_G_Soldier_TL_F.jpg";
	magazines[] =
	{
        mag_4(30Rnd_556x45_Stanag),
        mag_2(30Rnd_556x45_Stanag_Tracer_Yellow),
        mag_2(9Rnd_45ACP_Mag),
        HandGrenade,
        MiniGrenade,
        mag_3(1Rnd_HE_Grenade_shell),
        SmokeShell,
        SMOKESHELLS_DEFAULT,
        1Rnd_Smoke_Grenade_shell,
        SMOKEGRENADES_DEFAULT
	};
	respawnMagazines[] =
	{
        mag_4(30Rnd_556x45_Stanag),
        mag_2(30Rnd_556x45_Stanag_Tracer_Yellow),
        mag_2(9Rnd_45ACP_Mag),
        HandGrenade,
        MiniGrenade,
        mag_3(1Rnd_HE_Grenade_shell),
        SmokeShell,
        SMOKESHELLS_DEFAULT,
        1Rnd_Smoke_Grenade_shell,
        SMOKEGRENADES_DEFAULT
	};
    allowedHeadgear[] =
    {
        H_Bandanna_gry,
        H_Bandanna_blu,
        H_Bandanna_cbr,
        H_Bandanna_khk,
        H_Bandanna_khk_hs,
        H_Bandanna_sgg,
        H_Bandanna_sand,
        H_Bandanna_surfer,
        H_Bandanna_surfer_blk,
        H_Bandanna_surfer_grn,
        H_Bandanna_camo,
        H_Bandanna_camo_hs,
        H_Watchcap_blk,
        H_Watchcap_cbr,
        H_Watchcap_camo,
        H_Watchcap_khk,
        H_Watchcap_sgg,
        H_Watchcap_red,
        H_Watchcap_blk_hs,
        H_Watchcap_cbr_hs,
        H_Watchcap_camo_hs,
        H_Watchcap_khk_hs,
        H_Booniehat_khk,
        H_Booniehat_khk_hs,
        H_Booniehat_oli,
        H_Booniehat_tan,
        H_Booniehat_dgtl,
        H_Booniehat_mgrn,
        H_Booniehat_oli_hs,
        H_Booniehat_dgtl_hs,
        H_Booniehat_mgrn_hs,
        H_Cap_blk,
        H_Cap_grn,
        H_Cap_khk,
        H_Cap_oli,
        H_Cap_oli_hs,
        H_Cap_tan,
        H_Cap_blk_Raven,
        H_Cap_blk_Raven_hs,
        H_Shemag_olive,
        H_Shemag_olive_hs,
        H_ShemagOpen_tan,
        H_ShemagOpen_khk,
        H_ShemagOpen_khk_hs,
        H_ShemagOpen_tan_hs,
        H_HeadSet_light_F,
        H_Hat_Safari_sand_F,
        H_Hat_Safari_olive_F,
        H_PASGT_basic_black_F,
        H_PASGT_basic_green_F,
        H_PASGT_basic_olive_F
    };
    headgearList[] =
    {
        H_Bandanna_gry,1,
        H_Bandanna_blu,1,
        H_Bandanna_cbr,1,
        H_Bandanna_khk,1,
        H_Bandanna_khk_hs,1,
        H_Bandanna_sgg,1,
        H_Bandanna_sand,1,
        H_Bandanna_surfer,1,
        H_Bandanna_surfer_blk,1,
        H_Bandanna_surfer_grn,1,
        H_Bandanna_camo,1,
        H_Bandanna_camo_hs,1,
        H_Watchcap_blk,1,
        H_Watchcap_cbr,1,
        H_Watchcap_camo,1,
        H_Watchcap_khk,1,
        H_Watchcap_sgg,1,
        H_Watchcap_red,1,
        H_Watchcap_blk_hs,1,
        H_Watchcap_cbr_hs,1,
        H_Watchcap_camo_hs,1,
        H_Watchcap_khk_hs,1,
        H_Booniehat_khk,1,
        H_Booniehat_khk_hs,1,
        H_Booniehat_oli,1,
        H_Booniehat_tan,1,
        H_Booniehat_dgtl,1,
        H_Booniehat_mgrn,1,
        H_Booniehat_oli_hs,1,
        H_Booniehat_dgtl_hs,1,
        H_Booniehat_mgrn_hs,1,
        H_Cap_blk,1,
        H_Cap_grn,1,
        H_Cap_khk,1,
        H_Cap_oli,1,
        H_Cap_oli_hs,1,
        H_Cap_tan,1,
        H_Cap_blk_Raven,1,
        H_Cap_blk_Raven_hs,1,
        H_Shemag_olive,1,
        H_Shemag_olive_hs,1,
        H_ShemagOpen_tan,1,
        H_ShemagOpen_khk,1,
        H_ShemagOpen_khk_hs,1,
        H_ShemagOpen_tan_hs,1,
        H_HeadSet_light_F,1,
        H_Hat_Safari_sand_F,1,
        H_Hat_Safari_olive_F,1,
        H_PASGT_basic_black_F,1,
        H_PASGT_basic_green_F,1,
        H_PASGT_basic_olive_F,1,
        H_FakeHeadgear_F,1
    };
};
class I_G_Soldier_AR_F: I_G_Soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_G_Soldier_AR_F.jpg";
	magazines[] =
	{
        mag_3(200Rnd_65x39_cased_Box),
        HandGrenade,
        MiniGrenade,
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
        mag_3(200Rnd_65x39_cased_Box),
        HandGrenade,
        MiniGrenade,
        mag_2(SmokeShell)
	};
    allowedHeadgear[] =
    {
        H_Bandanna_gry,
        H_Bandanna_blu,
        H_Bandanna_cbr,
        H_Bandanna_khk,
        H_Bandanna_khk_hs,
        H_Bandanna_sgg,
        H_Bandanna_sand,
        H_Bandanna_surfer,
        H_Bandanna_surfer_blk,
        H_Bandanna_surfer_grn,
        H_Bandanna_camo,
        H_Bandanna_camo_hs,
        H_Watchcap_blk,
        H_Watchcap_cbr,
        H_Watchcap_camo,
        H_Watchcap_khk,
        H_Watchcap_sgg,
        H_Watchcap_red,
        H_Watchcap_blk_hs,
        H_Watchcap_cbr_hs,
        H_Watchcap_camo_hs,
        H_Watchcap_khk_hs,
        H_Booniehat_khk,
        H_Booniehat_khk_hs,
        H_Booniehat_oli,
        H_Booniehat_tan,
        H_Booniehat_dgtl,
        H_Booniehat_mgrn,
        H_Booniehat_oli_hs,
        H_Booniehat_dgtl_hs,
        H_Booniehat_mgrn_hs,
        H_Cap_blk,
        H_Cap_grn,
        H_Cap_khk,
        H_Cap_oli,
        H_Cap_oli_hs,
        H_Cap_tan,
        H_Cap_blk_Raven,
        H_Cap_blk_Raven_hs,
        H_Shemag_olive,
        H_Shemag_olive_hs,
        H_ShemagOpen_tan,
        H_ShemagOpen_khk,
        H_ShemagOpen_khk_hs,
        H_ShemagOpen_tan_hs,
        H_HeadSet_light_F,
        H_Hat_Safari_sand_F,
        H_Hat_Safari_olive_F,
        H_PASGT_basic_black_F,
        H_PASGT_basic_green_F,
        H_PASGT_basic_olive_F
    };
    headgearList[] =
    {
        H_Bandanna_gry,1,
        H_Bandanna_blu,1,
        H_Bandanna_cbr,1,
        H_Bandanna_khk,1,
        H_Bandanna_khk_hs,1,
        H_Bandanna_sgg,1,
        H_Bandanna_sand,1,
        H_Bandanna_surfer,1,
        H_Bandanna_surfer_blk,1,
        H_Bandanna_surfer_grn,1,
        H_Bandanna_camo,1,
        H_Bandanna_camo_hs,1,
        H_Watchcap_blk,1,
        H_Watchcap_cbr,1,
        H_Watchcap_camo,1,
        H_Watchcap_khk,1,
        H_Watchcap_sgg,1,
        H_Watchcap_red,1,
        H_Watchcap_blk_hs,1,
        H_Watchcap_cbr_hs,1,
        H_Watchcap_camo_hs,1,
        H_Watchcap_khk_hs,1,
        H_Booniehat_khk,1,
        H_Booniehat_khk_hs,1,
        H_Booniehat_oli,1,
        H_Booniehat_tan,1,
        H_Booniehat_dgtl,1,
        H_Booniehat_mgrn,1,
        H_Booniehat_oli_hs,1,
        H_Booniehat_dgtl_hs,1,
        H_Booniehat_mgrn_hs,1,
        H_Cap_blk,1,
        H_Cap_grn,1,
        H_Cap_khk,1,
        H_Cap_oli,1,
        H_Cap_oli_hs,1,
        H_Cap_tan,1,
        H_Cap_blk_Raven,1,
        H_Cap_blk_Raven_hs,1,
        H_Shemag_olive,1,
        H_Shemag_olive_hs,1,
        H_ShemagOpen_tan,1,
        H_ShemagOpen_khk,1,
        H_ShemagOpen_khk_hs,1,
        H_ShemagOpen_tan_hs,1,
        H_HeadSet_light_F,1,
        H_Hat_Safari_sand_F,1,
        H_Hat_Safari_olive_F,1,
        H_PASGT_basic_black_F,1,
        H_PASGT_basic_green_F,1,
        H_PASGT_basic_olive_F,1,
        H_FakeHeadgear_F,1
    };
};
class I_G_medic_F: I_G_Soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_G_medic_F.jpg";
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
        mag_2(9Rnd_45ACP_Mag),
        HandGrenade,
        MiniGrenade,
        SmokeShell,
        SMOKESHELLS_DEFAULT
	};
	respawnMagazines[] =
	{
        mag_6(30Rnd_762x39_Mag_F),
        mag_2(9Rnd_45ACP_Mag),
        HandGrenade,
        MiniGrenade,
        SmokeShell,
        SMOKESHELLS_DEFAULT
	};
    allowedHeadgear[] =
    {
        H_Bandanna_gry,
        H_Bandanna_blu,
        H_Bandanna_cbr,
        H_Bandanna_khk,
        H_Bandanna_khk_hs,
        H_Bandanna_sgg,
        H_Bandanna_sand,
        H_Bandanna_surfer,
        H_Bandanna_surfer_blk,
        H_Bandanna_surfer_grn,
        H_Bandanna_camo,
        H_Bandanna_camo_hs,
        H_Watchcap_blk,
        H_Watchcap_cbr,
        H_Watchcap_camo,
        H_Watchcap_khk,
        H_Watchcap_sgg,
        H_Watchcap_red,
        H_Watchcap_blk_hs,
        H_Watchcap_cbr_hs,
        H_Watchcap_camo_hs,
        H_Watchcap_khk_hs,
        H_Booniehat_khk,
        H_Booniehat_khk_hs,
        H_Booniehat_oli,
        H_Booniehat_tan,
        H_Booniehat_dgtl,
        H_Booniehat_mgrn,
        H_Booniehat_oli_hs,
        H_Booniehat_dgtl_hs,
        H_Booniehat_mgrn_hs,
        H_Cap_blk,
        H_Cap_grn,
        H_Cap_khk,
        H_Cap_oli,
        H_Cap_oli_hs,
        H_Cap_tan,
        H_Cap_blk_Raven,
        H_Cap_blk_Raven_hs,
        H_Shemag_olive,
        H_Shemag_olive_hs,
        H_ShemagOpen_tan,
        H_ShemagOpen_khk,
        H_ShemagOpen_khk_hs,
        H_ShemagOpen_tan_hs,
        H_HeadSet_light_F,
        H_Hat_Safari_sand_F,
        H_Hat_Safari_olive_F,
        H_PASGT_basic_black_F,
        H_PASGT_basic_green_F,
        H_PASGT_basic_olive_F
    };
    headgearList[] =
    {
        H_Bandanna_gry,1,
        H_Bandanna_blu,1,
        H_Bandanna_cbr,1,
        H_Bandanna_khk,1,
        H_Bandanna_khk_hs,1,
        H_Bandanna_sgg,1,
        H_Bandanna_sand,1,
        H_Bandanna_surfer,1,
        H_Bandanna_surfer_blk,1,
        H_Bandanna_surfer_grn,1,
        H_Bandanna_camo,1,
        H_Bandanna_camo_hs,1,
        H_Watchcap_blk,1,
        H_Watchcap_cbr,1,
        H_Watchcap_camo,1,
        H_Watchcap_khk,1,
        H_Watchcap_sgg,1,
        H_Watchcap_red,1,
        H_Watchcap_blk_hs,1,
        H_Watchcap_cbr_hs,1,
        H_Watchcap_camo_hs,1,
        H_Watchcap_khk_hs,1,
        H_Booniehat_khk,1,
        H_Booniehat_khk_hs,1,
        H_Booniehat_oli,1,
        H_Booniehat_tan,1,
        H_Booniehat_dgtl,1,
        H_Booniehat_mgrn,1,
        H_Booniehat_oli_hs,1,
        H_Booniehat_dgtl_hs,1,
        H_Booniehat_mgrn_hs,1,
        H_Cap_blk,1,
        H_Cap_grn,1,
        H_Cap_khk,1,
        H_Cap_oli,1,
        H_Cap_oli_hs,1,
        H_Cap_tan,1,
        H_Cap_blk_Raven,1,
        H_Cap_blk_Raven_hs,1,
        H_Shemag_olive,1,
        H_Shemag_olive_hs,1,
        H_ShemagOpen_tan,1,
        H_ShemagOpen_khk,1,
        H_ShemagOpen_khk_hs,1,
        H_ShemagOpen_tan_hs,1,
        H_HeadSet_light_F,1,
        H_Hat_Safari_sand_F,1,
        H_Hat_Safari_olive_F,1,
        H_PASGT_basic_black_F,1,
        H_PASGT_basic_green_F,1,
        H_PASGT_basic_olive_F,1,
        H_FakeHeadgear_F,1
    };
};
class I_G_engineer_F: I_G_Soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_G_engineer_F.jpg";
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
        HandGrenade,
        MiniGrenade,
        SmokeShell,
        SMOKESHELLS_DEFAULT
	};
	respawnMagazines[] =
	{
        mag_6(30Rnd_545x39_Mag_F),
        HandGrenade,
        MiniGrenade,
        SmokeShell,
        SMOKESHELLS_DEFAULT
	};
	linkedItems[] =
	{
		H_Watchcap_camo,
		V_ChestrigF_blk,
		DefaultManGuerillaLinkedItems
	};
	respawnLinkedItems[] =
	{
		H_Watchcap_camo,
		V_ChestrigF_blk,
		DefaultManGuerillaLinkedItems
	};
    allowedHeadgear[] =
    {
        H_Bandanna_gry,
        H_Bandanna_blu,
        H_Bandanna_cbr,
        H_Bandanna_khk,
        H_Bandanna_khk_hs,
        H_Bandanna_sgg,
        H_Bandanna_sand,
        H_Bandanna_surfer,
        H_Bandanna_surfer_blk,
        H_Bandanna_surfer_grn,
        H_Bandanna_camo,
        H_Bandanna_camo_hs,
        H_Watchcap_blk,
        H_Watchcap_cbr,
        H_Watchcap_camo,
        H_Watchcap_khk,
        H_Watchcap_sgg,
        H_Watchcap_red,
        H_Watchcap_blk_hs,
        H_Watchcap_cbr_hs,
        H_Watchcap_camo_hs,
        H_Watchcap_khk_hs,
        H_Booniehat_khk,
        H_Booniehat_khk_hs,
        H_Booniehat_oli,
        H_Booniehat_tan,
        H_Booniehat_dgtl,
        H_Booniehat_mgrn,
        H_Booniehat_oli_hs,
        H_Booniehat_dgtl_hs,
        H_Booniehat_mgrn_hs,
        H_Cap_blk,
        H_Cap_grn,
        H_Cap_khk,
        H_Cap_oli,
        H_Cap_oli_hs,
        H_Cap_tan,
        H_Cap_blk_Raven,
        H_Cap_blk_Raven_hs,
        H_Shemag_olive,
        H_Shemag_olive_hs,
        H_ShemagOpen_tan,
        H_ShemagOpen_khk,
        H_ShemagOpen_khk_hs,
        H_ShemagOpen_tan_hs,
        H_HeadSet_light_F,
        H_Hat_Safari_sand_F,
        H_Hat_Safari_olive_F,
        H_PASGT_basic_black_F,
        H_PASGT_basic_green_F,
        H_PASGT_basic_olive_F
    };
    headgearList[] =
    {
        H_Bandanna_gry,1,
        H_Bandanna_blu,1,
        H_Bandanna_cbr,1,
        H_Bandanna_khk,1,
        H_Bandanna_khk_hs,1,
        H_Bandanna_sgg,1,
        H_Bandanna_sand,1,
        H_Bandanna_surfer,1,
        H_Bandanna_surfer_blk,1,
        H_Bandanna_surfer_grn,1,
        H_Bandanna_camo,1,
        H_Bandanna_camo_hs,1,
        H_Watchcap_blk,1,
        H_Watchcap_cbr,1,
        H_Watchcap_camo,1,
        H_Watchcap_khk,1,
        H_Watchcap_sgg,1,
        H_Watchcap_red,1,
        H_Watchcap_blk_hs,1,
        H_Watchcap_cbr_hs,1,
        H_Watchcap_camo_hs,1,
        H_Watchcap_khk_hs,1,
        H_Booniehat_khk,1,
        H_Booniehat_khk_hs,1,
        H_Booniehat_oli,1,
        H_Booniehat_tan,1,
        H_Booniehat_dgtl,1,
        H_Booniehat_mgrn,1,
        H_Booniehat_oli_hs,1,
        H_Booniehat_dgtl_hs,1,
        H_Booniehat_mgrn_hs,1,
        H_Cap_blk,1,
        H_Cap_grn,1,
        H_Cap_khk,1,
        H_Cap_oli,1,
        H_Cap_oli_hs,1,
        H_Cap_tan,1,
        H_Cap_blk_Raven,1,
        H_Cap_blk_Raven_hs,1,
        H_Shemag_olive,1,
        H_Shemag_olive_hs,1,
        H_ShemagOpen_tan,1,
        H_ShemagOpen_khk,1,
        H_ShemagOpen_khk_hs,1,
        H_ShemagOpen_tan_hs,1,
        H_HeadSet_light_F,1,
        H_Hat_Safari_sand_F,1,
        H_Hat_Safari_olive_F,1,
        H_PASGT_basic_black_F,1,
        H_PASGT_basic_green_F,1,
        H_PASGT_basic_olive_F,1,
        H_FakeHeadgear_F,1
    };
};
class I_G_Soldier_exp_F: I_G_Soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_G_Soldier_exp_F.jpg";
	magazines[] =
	{
        mag_6(30Rnd_556x45_Stanag),
        HandGrenade,
        MiniGrenade,
        mag_3(APERSMine_Range_Mag),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
        mag_6(30Rnd_556x45_Stanag),
        HandGrenade,
        MiniGrenade,
        mag_3(APERSMine_Range_Mag),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		H_Shemag_olive,
		V_ChestrigF_blk,
		DefaultManGuerillaLinkedItems
	};
	respawnLinkedItems[] =
	{
		H_Shemag_olive,
		V_ChestrigF_blk,
		DefaultManGuerillaLinkedItems
	};
    allowedHeadgear[] =
    {
        H_Bandanna_gry,
        H_Bandanna_blu,
        H_Bandanna_cbr,
        H_Bandanna_khk,
        H_Bandanna_khk_hs,
        H_Bandanna_sgg,
        H_Bandanna_sand,
        H_Bandanna_surfer,
        H_Bandanna_surfer_blk,
        H_Bandanna_surfer_grn,
        H_Bandanna_camo,
        H_Bandanna_camo_hs,
        H_Watchcap_blk,
        H_Watchcap_cbr,
        H_Watchcap_camo,
        H_Watchcap_khk,
        H_Watchcap_sgg,
        H_Watchcap_red,
        H_Watchcap_blk_hs,
        H_Watchcap_cbr_hs,
        H_Watchcap_camo_hs,
        H_Watchcap_khk_hs,
        H_Booniehat_khk,
        H_Booniehat_khk_hs,
        H_Booniehat_oli,
        H_Booniehat_tan,
        H_Booniehat_dgtl,
        H_Booniehat_mgrn,
        H_Booniehat_oli_hs,
        H_Booniehat_dgtl_hs,
        H_Booniehat_mgrn_hs,
        H_Cap_blk,
        H_Cap_grn,
        H_Cap_khk,
        H_Cap_oli,
        H_Cap_oli_hs,
        H_Cap_tan,
        H_Cap_blk_Raven,
        H_Cap_blk_Raven_hs,
        H_Shemag_olive,
        H_Shemag_olive_hs,
        H_ShemagOpen_tan,
        H_ShemagOpen_khk,
        H_ShemagOpen_khk_hs,
        H_ShemagOpen_tan_hs,
        H_HeadSet_light_F,
        H_Hat_Safari_sand_F,
        H_Hat_Safari_olive_F,
        H_PASGT_basic_black_F,
        H_PASGT_basic_green_F,
        H_PASGT_basic_olive_F
    };
    headgearList[] =
    {
        H_Bandanna_gry,1,
        H_Bandanna_blu,1,
        H_Bandanna_cbr,1,
        H_Bandanna_khk,1,
        H_Bandanna_khk_hs,1,
        H_Bandanna_sgg,1,
        H_Bandanna_sand,1,
        H_Bandanna_surfer,1,
        H_Bandanna_surfer_blk,1,
        H_Bandanna_surfer_grn,1,
        H_Bandanna_camo,1,
        H_Bandanna_camo_hs,1,
        H_Watchcap_blk,1,
        H_Watchcap_cbr,1,
        H_Watchcap_camo,1,
        H_Watchcap_khk,1,
        H_Watchcap_sgg,1,
        H_Watchcap_red,1,
        H_Watchcap_blk_hs,1,
        H_Watchcap_cbr_hs,1,
        H_Watchcap_camo_hs,1,
        H_Watchcap_khk_hs,1,
        H_Booniehat_khk,1,
        H_Booniehat_khk_hs,1,
        H_Booniehat_oli,1,
        H_Booniehat_tan,1,
        H_Booniehat_dgtl,1,
        H_Booniehat_mgrn,1,
        H_Booniehat_oli_hs,1,
        H_Booniehat_dgtl_hs,1,
        H_Booniehat_mgrn_hs,1,
        H_Cap_blk,1,
        H_Cap_grn,1,
        H_Cap_khk,1,
        H_Cap_oli,1,
        H_Cap_oli_hs,1,
        H_Cap_tan,1,
        H_Cap_blk_Raven,1,
        H_Cap_blk_Raven_hs,1,
        H_Shemag_olive,1,
        H_Shemag_olive_hs,1,
        H_ShemagOpen_tan,1,
        H_ShemagOpen_khk,1,
        H_ShemagOpen_khk_hs,1,
        H_ShemagOpen_tan_hs,1,
        H_HeadSet_light_F,1,
        H_Hat_Safari_sand_F,1,
        H_Hat_Safari_olive_F,1,
        H_PASGT_basic_black_F,1,
        H_PASGT_basic_green_F,1,
        H_PASGT_basic_olive_F,1,
        H_FakeHeadgear_F,1
    };
};
class I_G_Soldier_GL_F: I_G_Soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_G_Soldier_GL_F.jpg";
	magazines[] =
	{
        mag_6(30Rnd_556x45_Stanag),
        HandGrenade,
        MiniGrenade,
        mag_3(1Rnd_HE_Grenade_shell),
        mag_2(SmokeShell),
        mag_2(1Rnd_Smoke_Grenade_shell)
	};
	respawnMagazines[] =
	{
        mag_6(30Rnd_556x45_Stanag),
        HandGrenade,
        MiniGrenade,
        mag_3(1Rnd_HE_Grenade_shell),
        mag_2(SmokeShell),
        mag_2(1Rnd_Smoke_Grenade_shell)
	};
	linkedItems[] =
	{
		H_Bandanna_khk,
		V_ChestrigF_blk,
		DefaultManGuerillaLinkedItems
	};
	respawnLinkedItems[] =
	{
		H_Bandanna_khk,
		V_ChestrigF_blk,
		DefaultManGuerillaLinkedItems
	};
    allowedHeadgear[] =
    {
        H_Bandanna_gry,
        H_Bandanna_blu,
        H_Bandanna_cbr,
        H_Bandanna_khk,
        H_Bandanna_khk_hs,
        H_Bandanna_sgg,
        H_Bandanna_sand,
        H_Bandanna_surfer,
        H_Bandanna_surfer_blk,
        H_Bandanna_surfer_grn,
        H_Bandanna_camo,
        H_Bandanna_camo_hs,
        H_Watchcap_blk,
        H_Watchcap_cbr,
        H_Watchcap_camo,
        H_Watchcap_khk,
        H_Watchcap_sgg,
        H_Watchcap_red,
        H_Watchcap_blk_hs,
        H_Watchcap_cbr_hs,
        H_Watchcap_camo_hs,
        H_Watchcap_khk_hs,
        H_Booniehat_khk,
        H_Booniehat_khk_hs,
        H_Booniehat_oli,
        H_Booniehat_tan,
        H_Booniehat_dgtl,
        H_Booniehat_mgrn,
        H_Booniehat_oli_hs,
        H_Booniehat_dgtl_hs,
        H_Booniehat_mgrn_hs,
        H_Cap_blk,
        H_Cap_grn,
        H_Cap_khk,
        H_Cap_oli,
        H_Cap_oli_hs,
        H_Cap_tan,
        H_Cap_blk_Raven,
        H_Cap_blk_Raven_hs,
        H_Shemag_olive,
        H_Shemag_olive_hs,
        H_ShemagOpen_tan,
        H_ShemagOpen_khk,
        H_ShemagOpen_khk_hs,
        H_ShemagOpen_tan_hs,
        H_HeadSet_light_F,
        H_Hat_Safari_sand_F,
        H_Hat_Safari_olive_F,
        H_PASGT_basic_black_F,
        H_PASGT_basic_green_F,
        H_PASGT_basic_olive_F
    };
    headgearList[] =
    {
        H_Bandanna_gry,1,
        H_Bandanna_blu,1,
        H_Bandanna_cbr,1,
        H_Bandanna_khk,1,
        H_Bandanna_khk_hs,1,
        H_Bandanna_sgg,1,
        H_Bandanna_sand,1,
        H_Bandanna_surfer,1,
        H_Bandanna_surfer_blk,1,
        H_Bandanna_surfer_grn,1,
        H_Bandanna_camo,1,
        H_Bandanna_camo_hs,1,
        H_Watchcap_blk,1,
        H_Watchcap_cbr,1,
        H_Watchcap_camo,1,
        H_Watchcap_khk,1,
        H_Watchcap_sgg,1,
        H_Watchcap_red,1,
        H_Watchcap_blk_hs,1,
        H_Watchcap_cbr_hs,1,
        H_Watchcap_camo_hs,1,
        H_Watchcap_khk_hs,1,
        H_Booniehat_khk,1,
        H_Booniehat_khk_hs,1,
        H_Booniehat_oli,1,
        H_Booniehat_tan,1,
        H_Booniehat_dgtl,1,
        H_Booniehat_mgrn,1,
        H_Booniehat_oli_hs,1,
        H_Booniehat_dgtl_hs,1,
        H_Booniehat_mgrn_hs,1,
        H_Cap_blk,1,
        H_Cap_grn,1,
        H_Cap_khk,1,
        H_Cap_oli,1,
        H_Cap_oli_hs,1,
        H_Cap_tan,1,
        H_Cap_blk_Raven,1,
        H_Cap_blk_Raven_hs,1,
        H_Shemag_olive,1,
        H_Shemag_olive_hs,1,
        H_ShemagOpen_tan,1,
        H_ShemagOpen_khk,1,
        H_ShemagOpen_khk_hs,1,
        H_ShemagOpen_tan_hs,1,
        H_HeadSet_light_F,1,
        H_Hat_Safari_sand_F,1,
        H_Hat_Safari_olive_F,1,
        H_PASGT_basic_black_F,1,
        H_PASGT_basic_green_F,1,
        H_PASGT_basic_olive_F,1,
        H_FakeHeadgear_F,1
    };
};
class I_G_Soldier_M_F: I_G_Soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_G_Soldier_M_F.jpg";
    hideProxySelections[] = {ghillie_hide};
	magazines[] =
	{
        mag_8(30Rnd_556x45_Stanag),
        HandGrenade,
        MiniGrenade,
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
        mag_8(30Rnd_556x45_Stanag),
        HandGrenade,
        MiniGrenade,
        mag_2(SmokeShell)
	};
    allowedHeadgear[] =
    {
        H_Bandanna_gry,
        H_Bandanna_blu,
        H_Bandanna_cbr,
        H_Bandanna_khk,
        H_Bandanna_khk_hs,
        H_Bandanna_sgg,
        H_Bandanna_sand,
        H_Bandanna_surfer,
        H_Bandanna_surfer_blk,
        H_Bandanna_surfer_grn,
        H_Bandanna_camo,
        H_Bandanna_camo_hs,
        H_Watchcap_blk,
        H_Watchcap_cbr,
        H_Watchcap_camo,
        H_Watchcap_khk,
        H_Watchcap_sgg,
        H_Watchcap_red,
        H_Watchcap_blk_hs,
        H_Watchcap_cbr_hs,
        H_Watchcap_camo_hs,
        H_Watchcap_khk_hs,
        H_Booniehat_khk,
        H_Booniehat_khk_hs,
        H_Booniehat_oli,
        H_Booniehat_tan,
        H_Booniehat_dgtl,
        H_Booniehat_mgrn,
        H_Booniehat_oli_hs,
        H_Booniehat_dgtl_hs,
        H_Booniehat_mgrn_hs,
        H_Cap_blk,
        H_Cap_grn,
        H_Cap_khk,
        H_Cap_oli,
        H_Cap_oli_hs,
        H_Cap_tan,
        H_Cap_blk_Raven,
        H_Cap_blk_Raven_hs,
        H_Shemag_olive,
        H_Shemag_olive_hs,
        H_ShemagOpen_tan,
        H_ShemagOpen_khk,
        H_ShemagOpen_khk_hs,
        H_ShemagOpen_tan_hs,
        H_HeadSet_light_F,
        H_Hat_Safari_sand_F,
        H_Hat_Safari_olive_F,
        H_PASGT_basic_black_F,
        H_PASGT_basic_green_F,
        H_PASGT_basic_olive_F
    };
    headgearList[] =
    {
        H_Bandanna_gry,1,
        H_Bandanna_blu,1,
        H_Bandanna_cbr,1,
        H_Bandanna_khk,1,
        H_Bandanna_khk_hs,1,
        H_Bandanna_sgg,1,
        H_Bandanna_sand,1,
        H_Bandanna_surfer,1,
        H_Bandanna_surfer_blk,1,
        H_Bandanna_surfer_grn,1,
        H_Bandanna_camo,1,
        H_Bandanna_camo_hs,1,
        H_Watchcap_blk,1,
        H_Watchcap_cbr,1,
        H_Watchcap_camo,1,
        H_Watchcap_khk,1,
        H_Watchcap_sgg,1,
        H_Watchcap_red,1,
        H_Watchcap_blk_hs,1,
        H_Watchcap_cbr_hs,1,
        H_Watchcap_camo_hs,1,
        H_Watchcap_khk_hs,1,
        H_Booniehat_khk,1,
        H_Booniehat_khk_hs,1,
        H_Booniehat_oli,1,
        H_Booniehat_tan,1,
        H_Booniehat_dgtl,1,
        H_Booniehat_mgrn,1,
        H_Booniehat_oli_hs,1,
        H_Booniehat_dgtl_hs,1,
        H_Booniehat_mgrn_hs,1,
        H_Cap_blk,1,
        H_Cap_grn,1,
        H_Cap_khk,1,
        H_Cap_oli,1,
        H_Cap_oli_hs,1,
        H_Cap_tan,1,
        H_Cap_blk_Raven,1,
        H_Cap_blk_Raven_hs,1,
        H_Shemag_olive,1,
        H_Shemag_olive_hs,1,
        H_ShemagOpen_tan,1,
        H_ShemagOpen_khk,1,
        H_ShemagOpen_khk_hs,1,
        H_ShemagOpen_tan_hs,1,
        H_HeadSet_light_F,1,
        H_Hat_Safari_sand_F,1,
        H_Hat_Safari_olive_F,1,
        H_PASGT_basic_black_F,1,
        H_PASGT_basic_green_F,1,
        H_PASGT_basic_olive_F,1,
        H_FakeHeadgear_F,1
    };
};
class I_G_Soldier_LAT_F: I_G_Soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_G_Soldier_LAT_F.jpg";
	magazines[] =
	{
        mag_6(30Rnd_556x45_Stanag),
        RPG32_F,
        HandGrenade,
        MiniGrenade,
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
        mag_6(30Rnd_556x45_Stanag),
        RPG32_F,
        HandGrenade,
        MiniGrenade,
        mag_2(SmokeShell)
	};
    allowedHeadgear[] =
    {
        H_Bandanna_gry,
        H_Bandanna_blu,
        H_Bandanna_cbr,
        H_Bandanna_khk,
        H_Bandanna_khk_hs,
        H_Bandanna_sgg,
        H_Bandanna_sand,
        H_Bandanna_surfer,
        H_Bandanna_surfer_blk,
        H_Bandanna_surfer_grn,
        H_Bandanna_camo,
        H_Bandanna_camo_hs,
        H_Watchcap_blk,
        H_Watchcap_cbr,
        H_Watchcap_camo,
        H_Watchcap_khk,
        H_Watchcap_sgg,
        H_Watchcap_red,
        H_Watchcap_blk_hs,
        H_Watchcap_cbr_hs,
        H_Watchcap_camo_hs,
        H_Watchcap_khk_hs,
        H_Booniehat_khk,
        H_Booniehat_khk_hs,
        H_Booniehat_oli,
        H_Booniehat_tan,
        H_Booniehat_dgtl,
        H_Booniehat_mgrn,
        H_Booniehat_oli_hs,
        H_Booniehat_dgtl_hs,
        H_Booniehat_mgrn_hs,
        H_Cap_blk,
        H_Cap_grn,
        H_Cap_khk,
        H_Cap_oli,
        H_Cap_oli_hs,
        H_Cap_tan,
        H_Cap_blk_Raven,
        H_Cap_blk_Raven_hs,
        H_Shemag_olive,
        H_Shemag_olive_hs,
        H_ShemagOpen_tan,
        H_ShemagOpen_khk,
        H_ShemagOpen_khk_hs,
        H_ShemagOpen_tan_hs,
        H_HeadSet_light_F,
        H_Hat_Safari_sand_F,
        H_Hat_Safari_olive_F,
        H_PASGT_basic_black_F,
        H_PASGT_basic_green_F,
        H_PASGT_basic_olive_F
    };
    headgearList[] =
    {
        H_Bandanna_gry,1,
        H_Bandanna_blu,1,
        H_Bandanna_cbr,1,
        H_Bandanna_khk,1,
        H_Bandanna_khk_hs,1,
        H_Bandanna_sgg,1,
        H_Bandanna_sand,1,
        H_Bandanna_surfer,1,
        H_Bandanna_surfer_blk,1,
        H_Bandanna_surfer_grn,1,
        H_Bandanna_camo,1,
        H_Bandanna_camo_hs,1,
        H_Watchcap_blk,1,
        H_Watchcap_cbr,1,
        H_Watchcap_camo,1,
        H_Watchcap_khk,1,
        H_Watchcap_sgg,1,
        H_Watchcap_red,1,
        H_Watchcap_blk_hs,1,
        H_Watchcap_cbr_hs,1,
        H_Watchcap_camo_hs,1,
        H_Watchcap_khk_hs,1,
        H_Booniehat_khk,1,
        H_Booniehat_khk_hs,1,
        H_Booniehat_oli,1,
        H_Booniehat_tan,1,
        H_Booniehat_dgtl,1,
        H_Booniehat_mgrn,1,
        H_Booniehat_oli_hs,1,
        H_Booniehat_dgtl_hs,1,
        H_Booniehat_mgrn_hs,1,
        H_Cap_blk,1,
        H_Cap_grn,1,
        H_Cap_khk,1,
        H_Cap_oli,1,
        H_Cap_oli_hs,1,
        H_Cap_tan,1,
        H_Cap_blk_Raven,1,
        H_Cap_blk_Raven_hs,1,
        H_Shemag_olive,1,
        H_Shemag_olive_hs,1,
        H_ShemagOpen_tan,1,
        H_ShemagOpen_khk,1,
        H_ShemagOpen_khk_hs,1,
        H_ShemagOpen_tan_hs,1,
        H_HeadSet_light_F,1,
        H_Hat_Safari_sand_F,1,
        H_Hat_Safari_olive_F,1,
        H_PASGT_basic_black_F,1,
        H_PASGT_basic_green_F,1,
        H_PASGT_basic_olive_F,1,
        H_FakeHeadgear_F,1
    };
};
class I_G_Soldier_A_F: I_G_Soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_G_Soldier_A_F.jpg";
	uniformClass = U_IG_Guerilla1_2_F;
    hiddenSelectionsTextures[] =
    {
        "\A3\Characters_F_Orange\Uniforms\Data\C_Cloth1_olive_CO.paa",
        "\A3\Characters_F_Beta\INDEP\Data\IA_soldier_01_clothing_CO.paa"
    };
	magazines[] =
	{
        mag_12(30Rnd_556x45_Stanag),
        HandGrenade,
        MiniGrenade,
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
        mag_12(30Rnd_556x45_Stanag),
        HandGrenade,
        MiniGrenade,
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		H_Booniehat_khk,
		V_TacChestRig_oli_F,
		DefaultManGuerillaLinkedItems
	};
	respawnLinkedItems[] =
	{
		H_Booniehat_khk,
		V_TacChestRig_oli_F,
		DefaultManGuerillaLinkedItems
	};
    allowedHeadgear[] =
    {
        H_Bandanna_gry,
        H_Bandanna_blu,
        H_Bandanna_cbr,
        H_Bandanna_khk,
        H_Bandanna_khk_hs,
        H_Bandanna_sgg,
        H_Bandanna_sand,
        H_Bandanna_surfer,
        H_Bandanna_surfer_blk,
        H_Bandanna_surfer_grn,
        H_Bandanna_camo,
        H_Bandanna_camo_hs,
        H_Watchcap_blk,
        H_Watchcap_cbr,
        H_Watchcap_camo,
        H_Watchcap_khk,
        H_Watchcap_sgg,
        H_Watchcap_red,
        H_Watchcap_blk_hs,
        H_Watchcap_cbr_hs,
        H_Watchcap_camo_hs,
        H_Watchcap_khk_hs,
        H_Booniehat_khk,
        H_Booniehat_khk_hs,
        H_Booniehat_oli,
        H_Booniehat_tan,
        H_Booniehat_dgtl,
        H_Booniehat_mgrn,
        H_Booniehat_oli_hs,
        H_Booniehat_dgtl_hs,
        H_Booniehat_mgrn_hs,
        H_Cap_blk,
        H_Cap_grn,
        H_Cap_khk,
        H_Cap_oli,
        H_Cap_oli_hs,
        H_Cap_tan,
        H_Cap_blk_Raven,
        H_Cap_blk_Raven_hs,
        H_Shemag_olive,
        H_Shemag_olive_hs,
        H_ShemagOpen_tan,
        H_ShemagOpen_khk,
        H_ShemagOpen_khk_hs,
        H_ShemagOpen_tan_hs,
        H_HeadSet_light_F,
        H_Hat_Safari_sand_F,
        H_Hat_Safari_olive_F,
        H_PASGT_basic_black_F,
        H_PASGT_basic_green_F,
        H_PASGT_basic_olive_F
    };
    headgearList[] =
    {
        H_Bandanna_gry,1,
        H_Bandanna_blu,1,
        H_Bandanna_cbr,1,
        H_Bandanna_khk,1,
        H_Bandanna_khk_hs,1,
        H_Bandanna_sgg,1,
        H_Bandanna_sand,1,
        H_Bandanna_surfer,1,
        H_Bandanna_surfer_blk,1,
        H_Bandanna_surfer_grn,1,
        H_Bandanna_camo,1,
        H_Bandanna_camo_hs,1,
        H_Watchcap_blk,1,
        H_Watchcap_cbr,1,
        H_Watchcap_camo,1,
        H_Watchcap_khk,1,
        H_Watchcap_sgg,1,
        H_Watchcap_red,1,
        H_Watchcap_blk_hs,1,
        H_Watchcap_cbr_hs,1,
        H_Watchcap_camo_hs,1,
        H_Watchcap_khk_hs,1,
        H_Booniehat_khk,1,
        H_Booniehat_khk_hs,1,
        H_Booniehat_oli,1,
        H_Booniehat_tan,1,
        H_Booniehat_dgtl,1,
        H_Booniehat_mgrn,1,
        H_Booniehat_oli_hs,1,
        H_Booniehat_dgtl_hs,1,
        H_Booniehat_mgrn_hs,1,
        H_Cap_blk,1,
        H_Cap_grn,1,
        H_Cap_khk,1,
        H_Cap_oli,1,
        H_Cap_oli_hs,1,
        H_Cap_tan,1,
        H_Cap_blk_Raven,1,
        H_Cap_blk_Raven_hs,1,
        H_Shemag_olive,1,
        H_Shemag_olive_hs,1,
        H_ShemagOpen_tan,1,
        H_ShemagOpen_khk,1,
        H_ShemagOpen_khk_hs,1,
        H_ShemagOpen_tan_hs,1,
        H_HeadSet_light_F,1,
        H_Hat_Safari_sand_F,1,
        H_Hat_Safari_olive_F,1,
        H_PASGT_basic_black_F,1,
        H_PASGT_basic_green_F,1,
        H_PASGT_basic_olive_F,1,
        H_FakeHeadgear_F,1
    };
};
class I_G_officer_F: I_G_Soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_G_officer_F.jpg";
	weapons[] =
    {
        arifle_AKS_F,
        hgun_ACPC2_F,
        DefaultManWeapons
    };
	respawnweapons[] =
    {
        arifle_AKS_F,
        hgun_ACPC2_F,
        DefaultManWeapons
    };
	magazines[] =
	{
        mag_4(30Rnd_545x39_Mag_F),
        mag_2(9Rnd_45ACP_Mag),
        SMOKESHELLS_DEFAULT
	};
	respawnMagazines[] =
	{
        mag_4(30Rnd_545x39_Mag_F),
        mag_2(9Rnd_45ACP_Mag),
        SMOKESHELLS_DEFAULT
	};
	linkedItems[] =
	{
		V_ChestrigF_oli,
		H_Watchcap_blk,
        ItemGPS,
		DefaultManGuerillaLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_ChestrigF_oli,
		H_Watchcap_blk,
        ItemGPS,
		DefaultManGuerillaLinkedItems
	};
};
class B_G_Soldier_F: I_G_Soldier_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_G_Soldier_F.jpg";
	modelSides[] = {TFriendly};
};
class O_G_Soldier_F: I_G_Soldier_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_G_Soldier_F.jpg";
	modelSides[] = {TFriendly};
};
class B_G_Soldier_lite_F: I_G_Soldier_lite_F
{
	modelSides[] = {TFriendly};
    uniformClass = U_BG_Guerilla1_3;
};
class O_G_Soldier_lite_F: I_G_Soldier_lite_F
{
	modelSides[] = {TFriendly};
    uniformClass = U_OG_Guerilla1_3;
};
class B_G_Soldier_SL_F: I_G_Soldier_SL_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_G_Soldier_SL_F.jpg";
	modelSides[] = {TFriendly};
};
class O_G_Soldier_SL_F: I_G_Soldier_SL_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_G_Soldier_SL_F.jpg";
	modelSides[] = {TFriendly};
};
class B_G_Soldier_TL_F: I_G_Soldier_TL_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_G_Soldier_TL_F.jpg";
	modelSides[] = {TFriendly};
};
class O_G_Soldier_TL_F: I_G_Soldier_TL_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_G_Soldier_TL_F.jpg";
	modelSides[] = {TFriendly};
};
class B_G_Soldier_AR_F: I_G_Soldier_AR_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_G_Soldier_AR_F.jpg";
	modelSides[] = {TFriendly};
};
class O_G_Soldier_AR_F: I_G_Soldier_AR_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_G_Soldier_AR_F.jpg";
	modelSides[] = {TFriendly};
};
class B_G_medic_F: I_G_medic_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_G_medic_F.jpg";
	modelSides[] = {TFriendly};
};
class O_G_medic_F: I_G_medic_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_G_medic_F.jpg";
	modelSides[] = {TFriendly};
};
class B_G_engineer_F: I_G_engineer_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_G_engineer_F.jpg";
	modelSides[] = {TFriendly};
};
class O_G_engineer_F: I_G_engineer_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_G_engineer_F.jpg";
	modelSides[] = {TFriendly};
};
class B_G_Soldier_exp_F: I_G_Soldier_exp_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_G_Soldier_exp_F.jpg";
	modelSides[] = {TFriendly};
};
class O_G_Soldier_exp_F: I_G_Soldier_exp_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_G_Soldier_exp_F.jpg";
	modelSides[] = {TFriendly};
};
class B_G_Soldier_GL_F: I_G_Soldier_GL_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_G_Soldier_GL_F.jpg";
	modelSides[] = {TFriendly};
};
class O_G_Soldier_GL_F: I_G_Soldier_GL_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_G_Soldier_GL_F.jpg";
	modelSides[] = {TFriendly};
};
class B_G_Soldier_M_F: I_G_Soldier_M_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_G_Soldier_M_F.jpg";
	modelSides[] = {TFriendly};
};
class O_G_Soldier_M_F: I_G_Soldier_M_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_G_Soldier_M_F.jpg";
	modelSides[] = {TFriendly};
};
class B_G_Soldier_LAT_F: I_G_Soldier_LAT_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_G_Soldier_LAT_F.jpg";
	modelSides[] = {TFriendly};
};
class O_G_Soldier_LAT_F: I_G_Soldier_LAT_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_G_Soldier_LAT_F.jpg";
	modelSides[] = {TFriendly};
};
class B_G_Soldier_A_F: I_G_Soldier_A_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_G_Soldier_A_F.jpg";
    uniformClass = U_BG_Guerilla1_2_F;
	modelSides[] = {TFriendly};
};
class O_G_Soldier_A_F: I_G_Soldier_A_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_G_Soldier_A_F.jpg";
    uniformClass = U_OG_Guerilla1_2_F;
	modelSides[] = {TFriendly};
};
class B_G_officer_F: I_G_officer_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_G_officer_F.jpg";
	modelSides[] = {TFriendly};
};
class O_G_officer_F: I_G_officer_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_G_officer_F.jpg";
	modelSides[] = {TFriendly};
};
class I_G_Soldier_unarmed_F: I_G_Soldier_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_G_Soldier_unarmed_F.jpg";
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
};
class B_G_Soldier_unarmed_F: B_G_Soldier_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_G_Soldier_unarmed_F.jpg";
};
class O_G_Soldier_unarmed_F: O_G_Soldier_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_G_Soldier_unarmed_F.jpg";
};
class B_G_Soldier_universal_F: B_G_Soldier_F
{
    scopeCurator = private;
};
class O_G_Soldier_universal_F: O_G_Soldier_F
{
    scopeCurator = private;
};
class I_G_Soldier_universal_F: I_G_Soldier_F
{
    scopeCurator = private;
};
class I_G_Story_Protagonist_F: B_G_Soldier_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_G_Story_Protagonist_F.jpg";
    hiddenSelections[] =
    {
        Camo1,
        Camo2,
        insignia
    };
    hiddenSelectionsTextures[] =
    {
        "\A3\Characters_F_EPB\Guerrilla\Data\IG_Guerrilla5_1_CO.paa",
        "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\clothing1_dirty_CO.paa"
    };
	magazines[] =
	{
        mag_6(30Rnd_556x45_Stanag),
        mag_2(9Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        mag_3(1Rnd_HE_Grenade_shell),
        mag_2(SmokeShell),
        mag_2(1Rnd_Smoke_Grenade_shell)
	};
	respawnMagazines[] =
	{
        mag_6(30Rnd_556x45_Stanag),
        mag_2(9Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        mag_3(1Rnd_HE_Grenade_shell),
        mag_2(SmokeShell),
        mag_2(1Rnd_Smoke_Grenade_shell)
	};
};
class I_G_Story_SF_Captain_F: B_G_Soldier_F
{
    scope = protected;
    scopeCurator = private;
	modelSides[] = {TFriendly};
};
class I_G_resistanceLeader_F;
class I_G_Sharpshooter_F: I_G_Soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_G_Sharpshooter_F.jpg";
    model = "\A3\Characters_F_Gamma\Guerrilla\IG_Guerrilla3_1.p3d";
    uniformClass = U_IG_Guerilla3_2;
    hiddenSelectionsTextures[] = {"\A3\Characters_F_Gamma\Guerrilla\Data\IG_Guerrilla3_2_CO.paa"};
    hideProxySelections[] = {ghillie_hide};
	magazines[] =
	{
        mag_8(20Rnd_762x51_Mag),
        HandGrenade,
        MiniGrenade,
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
        mag_8(20Rnd_762x51_Mag),
        HandGrenade,
        MiniGrenade,
        mag_2(SmokeShell)
	};
    linkedItems[] =
    {
        H_ShemagOpen_khk,
        V_BandollierB_blk,
        DefaultManGuerillaLinkedItems
    };
    respawnLinkedItems[] =
    {
        H_ShemagOpen_khk,
        V_BandollierB_blk,
        DefaultManGuerillaLinkedItems
    };
    allowedHeadgear[] =
    {
        H_Bandanna_gry,
        H_Bandanna_blu,
        H_Bandanna_cbr,
        H_Bandanna_khk,
        H_Bandanna_khk_hs,
        H_Bandanna_sgg,
        H_Bandanna_sand,
        H_Bandanna_surfer,
        H_Bandanna_surfer_blk,
        H_Bandanna_surfer_grn,
        H_Bandanna_camo,
        H_Bandanna_camo_hs,
        H_Watchcap_blk,
        H_Watchcap_cbr,
        H_Watchcap_camo,
        H_Watchcap_khk,
        H_Watchcap_sgg,
        H_Watchcap_red,
        H_Watchcap_blk_hs,
        H_Watchcap_cbr_hs,
        H_Watchcap_camo_hs,
        H_Watchcap_khk_hs,
        H_Booniehat_khk,
        H_Booniehat_khk_hs,
        H_Booniehat_oli,
        H_Booniehat_tan,
        H_Booniehat_dgtl,
        H_Booniehat_mgrn,
        H_Booniehat_oli_hs,
        H_Booniehat_dgtl_hs,
        H_Booniehat_mgrn_hs,
        H_Cap_blk,
        H_Cap_grn,
        H_Cap_khk,
        H_Cap_oli,
        H_Cap_oli_hs,
        H_Cap_tan,
        H_Cap_blk_Raven,
        H_Cap_blk_Raven_hs,
        H_Shemag_olive,
        H_Shemag_olive_hs,
        H_ShemagOpen_tan,
        H_ShemagOpen_khk,
        H_ShemagOpen_khk_hs,
        H_ShemagOpen_tan_hs,
        H_HeadSet_light_F,
        H_Hat_Safari_sand_F,
        H_Hat_Safari_olive_F,
        H_PASGT_basic_black_F,
        H_PASGT_basic_green_F,
        H_PASGT_basic_olive_F
    };
    headgearList[] =
    {
        H_Bandanna_gry,1,
        H_Bandanna_blu,1,
        H_Bandanna_cbr,1,
        H_Bandanna_khk,1,
        H_Bandanna_khk_hs,1,
        H_Bandanna_sgg,1,
        H_Bandanna_sand,1,
        H_Bandanna_surfer,1,
        H_Bandanna_surfer_blk,1,
        H_Bandanna_surfer_grn,1,
        H_Bandanna_camo,1,
        H_Bandanna_camo_hs,1,
        H_Watchcap_blk,1,
        H_Watchcap_cbr,1,
        H_Watchcap_camo,1,
        H_Watchcap_khk,1,
        H_Watchcap_sgg,1,
        H_Watchcap_red,1,
        H_Watchcap_blk_hs,1,
        H_Watchcap_cbr_hs,1,
        H_Watchcap_camo_hs,1,
        H_Watchcap_khk_hs,1,
        H_Booniehat_khk,1,
        H_Booniehat_khk_hs,1,
        H_Booniehat_oli,1,
        H_Booniehat_tan,1,
        H_Booniehat_dgtl,1,
        H_Booniehat_mgrn,1,
        H_Booniehat_oli_hs,1,
        H_Booniehat_dgtl_hs,1,
        H_Booniehat_mgrn_hs,1,
        H_Cap_blk,1,
        H_Cap_grn,1,
        H_Cap_khk,1,
        H_Cap_oli,1,
        H_Cap_oli_hs,1,
        H_Cap_tan,1,
        H_Cap_blk_Raven,1,
        H_Cap_blk_Raven_hs,1,
        H_Shemag_olive,1,
        H_Shemag_olive_hs,1,
        H_ShemagOpen_tan,1,
        H_ShemagOpen_khk,1,
        H_ShemagOpen_khk_hs,1,
        H_ShemagOpen_tan_hs,1,
        H_HeadSet_light_F,1,
        H_Hat_Safari_sand_F,1,
        H_Hat_Safari_olive_F,1,
        H_PASGT_basic_black_F,1,
        H_PASGT_basic_green_F,1,
        H_PASGT_basic_olive_F,1,
        H_FakeHeadgear_F,1
    };
};
class B_G_Sharpshooter_F: I_G_Sharpshooter_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_G_Sharpshooter_F.jpg";
	modelSides[] = {TFriendly};
    uniformClass = U_BG_Guerilla3_2;
};
class O_G_Sharpshooter_F: I_G_Sharpshooter_F
{	
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_G_Sharpshooter_F.jpg";
	modelSides[] = {TFriendly};
    uniformClass = U_OG_Guerilla3_2;
};
class I_G_Soldier_LAT2_F: I_G_Soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_G_Soldier_LAT2_F.jpg";
	weapons[] =
    {
        arifle_TRG21_F,
        launch_RPG7_F,
        DefaultManWeapons
    };
	respawnWeapons[] =
    {
        arifle_TRG21_F,
        launch_RPG7_F,
        DefaultManWeapons
    };
	magazines[] =
	{
        mag_6(30Rnd_556x45_Stanag),
        RPG7_F,
        HandGrenade,
        MiniGrenade,
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
        mag_6(30Rnd_556x45_Stanag),
        RPG7_F,
        HandGrenade,
        MiniGrenade,
        mag_2(SmokeShell)
	};
    allowedHeadgear[] =
    {
        H_Bandanna_gry,
        H_Bandanna_blu,
        H_Bandanna_cbr,
        H_Bandanna_khk,
        H_Bandanna_khk_hs,
        H_Bandanna_sgg,
        H_Bandanna_sand,
        H_Bandanna_surfer,
        H_Bandanna_surfer_blk,
        H_Bandanna_surfer_grn,
        H_Bandanna_camo,
        H_Bandanna_camo_hs,
        H_Watchcap_blk,
        H_Watchcap_cbr,
        H_Watchcap_camo,
        H_Watchcap_khk,
        H_Watchcap_sgg,
        H_Watchcap_red,
        H_Watchcap_blk_hs,
        H_Watchcap_cbr_hs,
        H_Watchcap_camo_hs,
        H_Watchcap_khk_hs,
        H_Booniehat_khk,
        H_Booniehat_khk_hs,
        H_Booniehat_oli,
        H_Booniehat_tan,
        H_Booniehat_dgtl,
        H_Booniehat_mgrn,
        H_Booniehat_oli_hs,
        H_Booniehat_dgtl_hs,
        H_Booniehat_mgrn_hs,
        H_Cap_blk,
        H_Cap_grn,
        H_Cap_khk,
        H_Cap_oli,
        H_Cap_oli_hs,
        H_Cap_tan,
        H_Cap_blk_Raven,
        H_Cap_blk_Raven_hs,
        H_Shemag_olive,
        H_Shemag_olive_hs,
        H_ShemagOpen_tan,
        H_ShemagOpen_khk,
        H_ShemagOpen_khk_hs,
        H_ShemagOpen_tan_hs,
        H_HeadSet_light_F,
        H_Hat_Safari_sand_F,
        H_Hat_Safari_olive_F,
        H_PASGT_basic_black_F,
        H_PASGT_basic_green_F,
        H_PASGT_basic_olive_F
    };
    headgearList[] =
    {
        H_Bandanna_gry,1,
        H_Bandanna_blu,1,
        H_Bandanna_cbr,1,
        H_Bandanna_khk,1,
        H_Bandanna_khk_hs,1,
        H_Bandanna_sgg,1,
        H_Bandanna_sand,1,
        H_Bandanna_surfer,1,
        H_Bandanna_surfer_blk,1,
        H_Bandanna_surfer_grn,1,
        H_Bandanna_camo,1,
        H_Bandanna_camo_hs,1,
        H_Watchcap_blk,1,
        H_Watchcap_cbr,1,
        H_Watchcap_camo,1,
        H_Watchcap_khk,1,
        H_Watchcap_sgg,1,
        H_Watchcap_red,1,
        H_Watchcap_blk_hs,1,
        H_Watchcap_cbr_hs,1,
        H_Watchcap_camo_hs,1,
        H_Watchcap_khk_hs,1,
        H_Booniehat_khk,1,
        H_Booniehat_khk_hs,1,
        H_Booniehat_oli,1,
        H_Booniehat_tan,1,
        H_Booniehat_dgtl,1,
        H_Booniehat_mgrn,1,
        H_Booniehat_oli_hs,1,
        H_Booniehat_dgtl_hs,1,
        H_Booniehat_mgrn_hs,1,
        H_Cap_blk,1,
        H_Cap_grn,1,
        H_Cap_khk,1,
        H_Cap_oli,1,
        H_Cap_oli_hs,1,
        H_Cap_tan,1,
        H_Cap_blk_Raven,1,
        H_Cap_blk_Raven_hs,1,
        H_Shemag_olive,1,
        H_Shemag_olive_hs,1,
        H_ShemagOpen_tan,1,
        H_ShemagOpen_khk,1,
        H_ShemagOpen_khk_hs,1,
        H_ShemagOpen_tan_hs,1,
        H_HeadSet_light_F,1,
        H_Hat_Safari_sand_F,1,
        H_Hat_Safari_olive_F,1,
        H_PASGT_basic_black_F,1,
        H_PASGT_basic_green_F,1,
        H_PASGT_basic_olive_F,1,
        H_FakeHeadgear_F,1
    };
};
class B_G_Soldier_LAT2_F: I_G_Soldier_LAT2_F
{
    modelSides[] = {TFriendly};
};
class O_G_Soldier_LAT2_F: I_G_Soldier_LAT2_F
{
    modelSides[] = {TFriendly};
};
class I_G_crew_F: I_G_Soldier_base_F
{
    author = $STR_A3_A_AveryTheKitty;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_G_crew_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_crew_F0;
	cost = 93000;
	role = Crewman;
	camouflage = 1.6;
    uniformClass = U_IG_Guerilla1_3;
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
        HandGrenade,
        SmokeShell
    };
    respawnMagazines[] =
    {
        mag_4(30Rnd_9x21_Mag),
        HandGrenade,
        SmokeShell
    };
    linkedItems[] =
    {
        H_HelmetCrew_I,
        V_BandollierB_blk,
        DefaultManGuerillaLinkedItems
    };
    respawnLinkedItems[] =
    {
        H_HelmetCrew_I,
        V_BandollierB_blk,
        DefaultManGuerillaLinkedItems
    };
    allowedHeadgear[] = {H_HelmetCrew_I};
    headgearList[] = {H_HelmetCrew_I,1};
    engineer = true;
};
class B_G_crew_F: I_G_crew_F
{
    author = $STR_A3_A_AveryTheKitty;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_G_crew_F.jpg";
    scope = public;
    scopeCurator = public;
    side = TWest;
    faction = BLU_G_F;
    modelSides[] =
    {
        TWest,
        TCivilian
    };
    uniformClass = U_BG_Guerilla1_2_F;
};
class O_G_crew_F: I_G_crew_F
{
    author = $STR_A3_A_AveryTheKitty;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_G_crew_F.jpg";
    scope = public;
    scopeCurator = public;
    side = TEast;
    faction = OPF_G_F;
	modelSides[] =
	{
		TEast,
		TCivilian
	};
    uniformClass = U_OG_Guerilla1_2_F;
};
class I_G_Soldier_CQ_F: I_G_Soldier_base_F
{
    author = $STR_A3_A_AveryTheKitty;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_G_Soldier_CQ_F.jpg";
    scope = public;
    displayName = $STR_A3_A_CfgVehicles_B_Soldier_CQ_F0;
    cost = 130000;
	threat[] =
    {
        1.0,    // Soft
        0.1,    // Armor
        0.1     // Air
    };
    uniformClass = U_IG_Guerilla1_3;
    hiddenSelectionsTextures[] =
    {
        "\A3\Characters_F\Civil\Data\C_Cloth1_kabeiroi_CO.paa",
        "\A3\Characters_F_Beta\INDEP\Data\IA_soldier_01_clothing_CO.paa"
    };
    weapons[] =
    {
        sgun_HunterShotgun_01_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        sgun_HunterShotgun_01_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_3(2Rnd_12Gauge_Pellets),
        mag_3(2Rnd_12Gauge_Slug),
        HandGrenade,
        MiniGrenade,
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_3(2Rnd_12Gauge_Pellets),
        mag_3(2Rnd_12Gauge_Slug),
        HandGrenade,
        MiniGrenade,
        mag_2(SmokeShell)
    };
    linkedItems[] =
    {
        H_ShemagOpen_oli,
        V_ChestrigF_blk,
        DefaultManGuerillaLinkedItems
    };
    respawnLinkedItems[] =
    {
        H_ShemagOpen_oli,
        V_ChestrigF_blk,
        DefaultManGuerillaLinkedItems
    };
    allowedHeadgear[] =
    {
        H_Bandanna_gry,
        H_Bandanna_blu,
        H_Bandanna_cbr,
        H_Bandanna_khk,
        H_Bandanna_khk_hs,
        H_Bandanna_sgg,
        H_Bandanna_sand,
        H_Bandanna_surfer,
        H_Bandanna_surfer_blk,
        H_Bandanna_surfer_grn,
        H_Bandanna_camo,
        H_Bandanna_camo_hs,
        H_Watchcap_blk,
        H_Watchcap_cbr,
        H_Watchcap_camo,
        H_Watchcap_khk,
        H_Watchcap_sgg,
        H_Watchcap_red,
        H_Watchcap_blk_hs,
        H_Watchcap_cbr_hs,
        H_Watchcap_camo_hs,
        H_Watchcap_khk_hs,
        H_Booniehat_khk,
        H_Booniehat_khk_hs,
        H_Booniehat_oli,
        H_Booniehat_tan,
        H_Booniehat_dgtl,
        H_Booniehat_mgrn,
        H_Booniehat_oli_hs,
        H_Booniehat_dgtl_hs,
        H_Booniehat_mgrn_hs,
        H_Cap_blk,
        H_Cap_grn,
        H_Cap_khk,
        H_Cap_oli,
        H_Cap_oli_hs,
        H_Cap_tan,
        H_Cap_blk_Raven,
        H_Cap_blk_Raven_hs,
        H_Shemag_olive,
        H_Shemag_olive_hs,
        H_ShemagOpen_tan,
        H_ShemagOpen_khk,
        H_ShemagOpen_khk_hs,
        H_ShemagOpen_tan_hs,
        H_HeadSet_light_F,
        H_Hat_Safari_sand_F,
        H_Hat_Safari_olive_F,
        H_PASGT_basic_black_F,
        H_PASGT_basic_green_F,
        H_PASGT_basic_olive_F
    };
    headgearList[] =
    {
        H_Bandanna_gry,1,
        H_Bandanna_blu,1,
        H_Bandanna_cbr,1,
        H_Bandanna_khk,1,
        H_Bandanna_khk_hs,1,
        H_Bandanna_sgg,1,
        H_Bandanna_sand,1,
        H_Bandanna_surfer,1,
        H_Bandanna_surfer_blk,1,
        H_Bandanna_surfer_grn,1,
        H_Bandanna_camo,1,
        H_Bandanna_camo_hs,1,
        H_Watchcap_blk,1,
        H_Watchcap_cbr,1,
        H_Watchcap_camo,1,
        H_Watchcap_khk,1,
        H_Watchcap_sgg,1,
        H_Watchcap_red,1,
        H_Watchcap_blk_hs,1,
        H_Watchcap_cbr_hs,1,
        H_Watchcap_camo_hs,1,
        H_Watchcap_khk_hs,1,
        H_Booniehat_khk,1,
        H_Booniehat_khk_hs,1,
        H_Booniehat_oli,1,
        H_Booniehat_tan,1,
        H_Booniehat_dgtl,1,
        H_Booniehat_mgrn,1,
        H_Booniehat_oli_hs,1,
        H_Booniehat_dgtl_hs,1,
        H_Booniehat_mgrn_hs,1,
        H_Cap_blk,1,
        H_Cap_grn,1,
        H_Cap_khk,1,
        H_Cap_oli,1,
        H_Cap_oli_hs,1,
        H_Cap_tan,1,
        H_Cap_blk_Raven,1,
        H_Cap_blk_Raven_hs,1,
        H_Shemag_olive,1,
        H_Shemag_olive_hs,1,
        H_ShemagOpen_tan,1,
        H_ShemagOpen_khk,1,
        H_ShemagOpen_khk_hs,1,
        H_ShemagOpen_tan_hs,1,
        H_HeadSet_light_F,1,
        H_Hat_Safari_sand_F,1,
        H_Hat_Safari_olive_F,1,
        H_PASGT_basic_black_F,1,
        H_PASGT_basic_green_F,1,
        H_PASGT_basic_olive_F,1,
        H_FakeHeadgear_F,1
    };
};
class B_G_Soldier_CQ_F: I_G_Soldier_CQ_F
{
    author = $STR_A3_A_AveryTheKitty;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_G_Soldier_CQ_F.jpg";
    scope = public;
    scopeCurator = public;
    side = TWest;
    faction = BLU_G_F;
    modelSides[] =
    {
        TWest,
        TCivilian
    };
    uniformClass = U_BG_Guerilla1_3;
};
class O_G_Soldier_CQ_F: I_G_Soldier_CQ_F
{
    author = $STR_A3_A_AveryTheKitty;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_G_Soldier_CQ_F.jpg";
    scope = public;
    scopeCurator = public;
    side = TEast;
    faction = OPF_G_F;
	modelSides[] =
	{
		TEast,
		TCivilian
	};
    uniformClass = U_OG_Guerilla1_3;
};
class I_G_Soldier_TechSpec_F: I_G_engineer_F
{
    author = $STR_A3_A_Ravenholme;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_G_Soldier_TechSpec_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_A3_A_CfgVehicles_I_G_Soldier_TechSpec_F0;
    uavHacker = true;
    canDeactivateMines = false;
    cost = 150000;
	role = SpecialOperative;
    uniformClass = U_IG_Guerilla2_2;
    backpack = B_Kitbag_rgr_G_TechSpec;
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
        mag_5(30Rnd_9x21_Mag_v2),
        HandGrenade,
        SmokeShell
    };
    respawnMagazines[] =
    {
        mag_5(30Rnd_9x21_Mag_v2),
        HandGrenade,
        SmokeShell
    };
    linkedItems[] =
    {
        H_Cap_grn,
        G_Tactical_clear,
        V_Pocketed_olive_F,
        I_UAVTerminal,
        DefaultManGuerillaLinkedItems
    };
    respawnLinkedItems[] =
    {
        H_Cap_grn,
        G_Tactical_clear,
        V_Pocketed_olive_F,
        I_UAVTerminal,
        DefaultManGuerillaLinkedItems
    };
    allowedHeadgear[] =
    {
        H_Bandanna_gry,
        H_Bandanna_blu,
        H_Bandanna_cbr,
        H_Bandanna_khk,
        H_Bandanna_khk_hs,
        H_Bandanna_sgg,
        H_Bandanna_sand,
        H_Bandanna_surfer,
        H_Bandanna_surfer_blk,
        H_Bandanna_surfer_grn,
        H_Bandanna_camo,
        H_Bandanna_camo_hs,
        H_Watchcap_blk,
        H_Watchcap_cbr,
        H_Watchcap_camo,
        H_Watchcap_khk,
        H_Watchcap_sgg,
        H_Watchcap_red,
        H_Watchcap_blk_hs,
        H_Watchcap_cbr_hs,
        H_Watchcap_camo_hs,
        H_Watchcap_khk_hs,
        H_Booniehat_khk,
        H_Booniehat_khk_hs,
        H_Booniehat_oli,
        H_Booniehat_tan,
        H_Booniehat_dgtl,
        H_Booniehat_mgrn,
        H_Booniehat_oli_hs,
        H_Booniehat_dgtl_hs,
        H_Booniehat_mgrn_hs,
        H_Cap_blk,
        H_Cap_grn,
        H_Cap_khk,
        H_Cap_oli,
        H_Cap_oli_hs,
        H_Cap_tan,
        H_Cap_blk_Raven,
        H_Cap_blk_Raven_hs,
        H_Shemag_olive,
        H_Shemag_olive_hs,
        H_ShemagOpen_tan,
        H_ShemagOpen_khk,
        H_ShemagOpen_khk_hs,
        H_ShemagOpen_tan_hs,
        H_HeadSet_light_F,
        H_Hat_Safari_sand_F,
        H_Hat_Safari_olive_F,
        H_PASGT_basic_black_F,
        H_PASGT_basic_green_F,
        H_PASGT_basic_olive_F
    };
    headgearList[] =
    {
        H_Bandanna_gry,1,
        H_Bandanna_blu,1,
        H_Bandanna_cbr,1,
        H_Bandanna_khk,1,
        H_Bandanna_khk_hs,1,
        H_Bandanna_sgg,1,
        H_Bandanna_sand,1,
        H_Bandanna_surfer,1,
        H_Bandanna_surfer_blk,1,
        H_Bandanna_surfer_grn,1,
        H_Bandanna_camo,1,
        H_Bandanna_camo_hs,1,
        H_Watchcap_blk,1,
        H_Watchcap_cbr,1,
        H_Watchcap_camo,1,
        H_Watchcap_khk,1,
        H_Watchcap_sgg,1,
        H_Watchcap_red,1,
        H_Watchcap_blk_hs,1,
        H_Watchcap_cbr_hs,1,
        H_Watchcap_camo_hs,1,
        H_Watchcap_khk_hs,1,
        H_Booniehat_khk,1,
        H_Booniehat_khk_hs,1,
        H_Booniehat_oli,1,
        H_Booniehat_tan,1,
        H_Booniehat_dgtl,1,
        H_Booniehat_mgrn,1,
        H_Booniehat_oli_hs,1,
        H_Booniehat_dgtl_hs,1,
        H_Booniehat_mgrn_hs,1,
        H_Cap_blk,1,
        H_Cap_grn,1,
        H_Cap_khk,1,
        H_Cap_oli,1,
        H_Cap_oli_hs,1,
        H_Cap_tan,1,
        H_Cap_blk_Raven,1,
        H_Cap_blk_Raven_hs,1,
        H_Shemag_olive,1,
        H_Shemag_olive_hs,1,
        H_ShemagOpen_tan,1,
        H_ShemagOpen_khk,1,
        H_ShemagOpen_khk_hs,1,
        H_ShemagOpen_tan_hs,1,
        H_HeadSet_light_F,1,
        H_Hat_Safari_sand_F,1,
        H_Hat_Safari_olive_F,1,
        H_PASGT_basic_black_F,1,
        H_PASGT_basic_green_F,1,
        H_PASGT_basic_olive_F,1,
        H_FakeHeadgear_F,1
    };
};
class B_G_Soldier_TechSpec_F: I_G_Soldier_TechSpec_F
{
    author = $STR_A3_A_Ravenholme;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_G_Soldier_TechSpec_F.jpg";
    scope = public;
    scopeCurator = public;
    side = TWest;
    faction = BLU_G_F;
    modelSides[] =
    {
        TWest,
        TCivilian
    };
    uniformClass = U_BG_Guerilla2_2;
    linkedItems[] =
    {
        H_Cap_grn,
        G_Tactical_clear,
        V_Pocketed_olive_F,
        B_UAVTerminal,
        DefaultManGuerillaLinkedItems
    };
    respawnLinkedItems[] =
    {
        H_Cap_grn,
        G_Tactical_clear,
        V_Pocketed_olive_F,
        B_UAVTerminal,
        DefaultManGuerillaLinkedItems
    };
};
class O_G_Soldier_TechSpec_F: I_G_Soldier_TechSpec_F
{
    author = $STR_A3_A_Ravenholme;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_G_Soldier_TechSpec_F.jpg";
    scope = public;
    scopeCurator = public;
    side = TEast;
    faction = OPF_G_F;
	modelSides[] =
	{
		TEast,
		TCivilian
	};
    uniformClass = U_OG_Guerilla2_2;
    linkedItems[] =
    {
        H_Cap_grn,
        G_Tactical_clear,
        V_Pocketed_olive_F,
        O_UAVTerminal,
        DefaultManGuerillaLinkedItems
    };
    respawnLinkedItems[] =
    {
        H_Cap_grn,
        G_Tactical_clear,
        V_Pocketed_olive_F,
        O_UAVTerminal,
        DefaultManGuerillaLinkedItems
    };
};