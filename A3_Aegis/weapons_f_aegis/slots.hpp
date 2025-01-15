/* Slots for attachments */
class SlotInfo;
class MuzzleSlot;
class CowsSlot: SlotInfo
{
	compatibleItems[] +=
	{
		optic_tws_sniper,
		optic_srs,
		optic_dcl,
		optic_ACO_grn_AK_F,
        aegis_optic_ROS,
        aegis_optic_ROS_SMG,
        Aegis_optic_ICO,
        Aegis_optic_ICO_khaki,
        Aegis_optic_ICO_sand,
        Aegis_optic_ACOG,
        Aegis_optic_ACOG_Sand,
        Aegis_optic_ACOG_khaki,
        Aegis_optic_1p87,
        Aegis_optic_1p87_snd,
        Aegis_optic_1p87_arid,
        Aegis_optic_1p87_lush
	};
};
class PointerSlot
{
    compatibleItems[] +=
	{
		acc_flashlight_ir,
		Aegis_acc_pointer_compact_red,
		Aegis_acc_pointer_compact_green,
        Aegis_acc_pointer_DM,
        Aegis_acc_pointer_DM_Sand,
        Aegis_acc_pointer_DM_Khaki,
        Aegis_acc_pointer_DM_Arid,
        Aegis_acc_pointer_DM_Lush
	};
};
class PointerSlot_Pistol: PointerSlot
{
	compatibleItems[] +=
	{
		Aegis_acc_pointer_compact_red,
		Aegis_acc_pointer_compact_green,
        Aegis_acc_LightModule_Pistol_black,
		Aegis_acc_LightModule_Pistol_sand,
		Aegis_acc_LightModule_Pistol_khaki
	};
};
class UnderBarrelSlot;
class MuzzleSlot_556: MuzzleSlot
{
	class compatibleItems
	{
		muzzle_mzls_M = true;
	};
};
class MuzzleSlot_65: MuzzleSlot
{
	class compatibleItems
	{
		muzzle_mzls_H = true;
		muzzle_snds_65_TI_blk_F = true;
		muzzle_snds_65_TI_hex_F = true;
		muzzle_snds_65_TI_ghex_F = true;
	};
};
class MuzzleSlot_762: MuzzleSlot
{
	class compatibleItems
	{
		muzzle_snds_B_wdm_F = true;
		muzzle_mzls_B = true;
	};
};
class MuzzleSlot_MG: MuzzleSlot
{
	class compatibleItems
	{
		muzzle_mzls_H = true;
	};
};
class Aegis_MuzzleSlot_SR25: MuzzleSlot_762
{
	class compatibleItems
	{
		aegis_muzzle_snds_sr25_blk = true;
        aegis_muzzle_snds_sr25_snd = true;
        aegis_muzzle_snds_sr25_khk = true;
        muzzle_snds_B = true;
        muzzle_snds_B_khk_F = true;
        muzzle_snds_B_snd_F = true;
        muzzle_snds_B_arid_F = true;
        muzzle_snds_B_lush_F = true;
        muzzle_snds_B_wdm_F = true;
        suppressor_h_lxws = true;
        suppressor_h_lush_lxws = true;
        suppressor_h_arid_lxws = true;
        suppressor_h_sand_lxws = true;
        suppressor_h_khaki_lxws = true;
        suppressor_h_snake_lxws = true;
		muzzle_mzls_B = true;
	};
};
class MuzzleSlot_9mm: MuzzleSlot
{
	class compatibleItems
	{
		Aegis_muzzle_snds_9MM_enhanced_black = true;
		Aegis_muzzle_snds_9MM_enhanced_sand = true;
		Aegis_muzzle_snds_9MM_enhanced_khaki = true;
	};
};
class Aegis_MuzzleSlot_RP57: MuzzleSlot_9mm
{
	class compatibleItems
	{
		Aegis_Muzzle_snds_RP57 = true;
		Aegis_Muzzle_mzls_RP57 = true;
	};
};
class CowsSlot_Rail: CowsSlot
{
	class compatibleItems
	{
		optic_tws_sniper = true;
		optic_srs = true;
		optic_dcl = true;
		Aegis_optic_ACOG = true;
        Aegis_optic_ACOG_Sand = true;
        Aegis_optic_ACOG_khaki = true;
		optic_ACO_grn_AK_F = true;
        aegis_optic_ROS = true;
        aegis_optic_ROS_SMG = true;
        Aegis_optic_ICO = true;
        Aegis_optic_ICO_khaki = true;
        Aegis_optic_ICO_sand = true;
        Aegis_optic_1p87 = true;
        Aegis_optic_1p87_snd = true;
        Aegis_optic_1p87_arid = true;
        Aegis_optic_1p87_lush = true;
	};
};
class CowsSlot_AK: CowsSlot
{
	class compatibleItems
	{
		optic_Kobra_F = true;
		optic_pso_F = true;
	};
};
class CowsSlot_F2000: CowsSlot_Rail
{
	class compatibleItems: compatibleItems
	{
		acc_o_FMS = true;
	};
};
class PointerSlot_Rail: PointerSlot
{
    class compatibleItems
    {
		acc_flashlight_ir = true;
		Aegis_acc_pointer_compact_red = true;
		Aegis_acc_pointer_compact_green = true;
        Aegis_acc_pointer_DM = true;
        Aegis_acc_pointer_DM_visible_Red = true;
        Aegis_acc_pointer_DM_Sand = true;
        Aegis_acc_pointer_DM_Sand_visible_Red = true;
        Aegis_acc_pointer_DM_Khaki = true;
        Aegis_acc_pointer_DM_Khaki_visible_Red = true;
        Aegis_acc_pointer_DM_Arid = true;
        Aegis_acc_pointer_DM_Arid_visible_Red = true;
        Aegis_acc_pointer_DM_Lush = true;
        Aegis_acc_pointer_DM_Lush_visible_Red = true;
    };
};
class UnderBarrelSlot_rail;
class Aegis_CowsSlot_P320: CowsSlot
{
	class compatibleItems
	{
		Aegis_optic_PRO_black=1;
	};
};

/* Slots used by CBA's Joint Rails functionality */
class asdg_SlotInfo;
class asdg_OpticRail;
class asdg_MuzzleSlot;
class asdg_FrontSideRail
{
    class compatibleItems
    {
		acc_flashlight_ir = true;
		Aegis_acc_pointer_compact_red = true;
		Aegis_acc_pointer_compact_green = true;
        Aegis_acc_pointer_DM = true;
        Aegis_acc_pointer_DM_visible_Red = true;
        Aegis_acc_pointer_DM_Sand = true;
        Aegis_acc_pointer_DM_Sand_visible_Red = true;
        Aegis_acc_pointer_DM_Khaki = true;
        Aegis_acc_pointer_DM_Khaki_visible_Red = true;
        Aegis_acc_pointer_DM_Arid = true;
        Aegis_acc_pointer_DM_Arid_visible_Red = true;
        Aegis_acc_pointer_DM_Lush = true;
        Aegis_acc_pointer_DM_Lush_visible_Red = true;
    };
};
class asdg_UnderSlot;
class asdg_PistolUnderRail
{
    class compatibleItems
    {
		Aegis_acc_pointer_compact_pistol_red = true;
		Aegis_acc_pointer_compact_pistol_green = true;
        Aegis_acc_LightModule_Pistol_black = true;
		Aegis_acc_LightModule_Pistol_sand = true;
		Aegis_acc_LightModule_Pistol_khaki = true;
    };
};;
class asdg_PistolOpticMount;
class asdg_PistolOpticRail1913;
class asdg_OpticRail1913: asdg_OpticRail
{
    class compatibleItems
    {
		optic_tws_sniper = true;
		optic_srs = true;
		optic_dcl = true;
		Aegis_optic_ACOG = true;
        Aegis_optic_ACOG_Sand = true;
        Aegis_optic_ACOG_khaki = true;
		optic_ACO_grn_AK_F = true;
        aegis_optic_ROS = true;
        aegis_optic_ROS_SMG = true;
        Aegis_optic_ICO = true;
        Aegis_optic_ICO_khaki = true;
        Aegis_optic_ICO_sand = true;
        Aegis_optic_1p87 = true;
        Aegis_optic_1p87_snd = true;
        Aegis_optic_1p87_arid = true;
        Aegis_optic_1p87_lush = true;
    };
};
class asdg_OpticRail1913_short;
class asdg_OpticRail1913_short_MG;
class asdg_OpticRail1913_long;
class asdg_OpticSideMount;
class asdg_OpticSideRail_AK;
class asdg_OpticSideRail_SVD;
class asdg_OpticSideRail_AKSVD;
class asdg_MuzzleSlot_762: asdg_MuzzleSlot
{
    class compatibleItems
    {
		muzzle_snds_B_wdm_F = true;
		muzzle_mzls_B = true;
    };
};
class asdg_MuzzleSlot_65: asdg_MuzzleSlot
{
    class compatibleItems
    {
        muzzle_snds_h = true;
        muzzle_snds_h_khk_F = true;
        muzzle_snds_h_snd_F = true;
        muzzle_snds_65_TI_blk_F = true;
        muzzle_snds_65_TI_hex_F = true;
        muzzle_snds_65_TI_ghex_F = true;
        muzzle_tma_65 = true;
		muzzle_mzls_H = true;
    };
};
class asdg_MuzzleSlot_556: asdg_MuzzleSlot
{
    class compatibleItems
    {
		muzzle_mzls_M = true;
    };
};
class asdg_MuzzleSlot_762MG;
class asdg_MuzzleSlot_338;
class asdg_MuzzleSlot_93x64;
class asdg_MuzzleSlot_9MM: asdg_MuzzleSlot
{
    class compatibleItems
    {
        muzzle_mzls_L = true;
        Aegis_muzzle_snds_9MM_enhanced_black = true;
	    Aegis_muzzle_snds_9MM_enhanced_sand = true;
	    Aegis_muzzle_snds_9MM_enhanced_khaki = true;
    };
};
class asdg_MuzzleSlot_9MM_SMG: asdg_MuzzleSlot
{
    class compatibleItems
    {
        muzzle_mzls_L = true;
    };
};
class asdg_MuzzleSlot_45ACP: asdg_MuzzleSlot
{
    class compatibleItems
    {
        muzzle_snds_pistol_heavy_01 = true;
        muzzle_mzls_acp = true;
    };
};
class asdg_MuzzleSlot_45ACP_SMG: asdg_MuzzleSlot
{
    class compatibleItems
    {
        muzzle_mzls_acp = true;
        muzzle_mzls_smg_01 = true;
    };
};
class asdg_MuzzleSlot_545R: asdg_MuzzleSlot
{
    class compatibleItems
    {
        muzzle_snds_545 = true;
        muzzle_snds_545_wdm_F = true;
        muzzle_snds_545_lush_F = true;
        muzzle_snds_545_arid_F = true;
        muzzle_mzls_545 = true;
        aegis_muzzle_snds_pbs_545_blk = true;
        aegis_muzzle_snds_pbs_545_arid = true;
        aegis_muzzle_snds_pbs_545_lush = true;
    };
};
class asdg_MuzzleSlot_762R: asdg_MuzzleSlot
{
    class compatibleItems
    {
        muzzle_snds_B = true;
        muzzle_snds_B_wdm_F = true;
        muzzle_snds_B_lush_F = true;
        muzzle_snds_B_arid_F = true;
        muzzle_mzls_B = true;
        aegis_muzzle_snds_pbs_762_blk = true;
        aegis_muzzle_snds_pbs_762_arid = true;
        aegis_muzzle_snds_pbs_762_lush = true;
    };
};
class asdg_MuzzleSlot_762R_PK: asdg_MuzzleSlot
{
    class compatibleItems
    {
        muzzle_snds_B = true;
        muzzle_snds_B_wdm_F = true;
        muzzle_snds_B_lush_F = true;
        muzzle_snds_B_arid_F = true;
        muzzle_mzls_B = true;
        aegis_muzzle_snds_pbs_762_blk = true;
        aegis_muzzle_snds_pbs_762_arid = true;
        aegis_muzzle_snds_pbs_762_lush = true;
    };
};
class asdg_MuzzleSlot_762R_SVD: asdg_MuzzleSlot
{
    class compatibleItems
    {
        muzzle_snds_B = true;
        muzzle_snds_B_wdm_F = true;
        muzzle_snds_B_lush_F = true;
        muzzle_snds_B_arid_F = true;
        muzzle_mzls_B = true;
        aegis_muzzle_snds_pbs_762_blk = true;
        aegis_muzzle_snds_pbs_762_arid = true;
        aegis_muzzle_snds_pbs_762_lush = true;
    };
};
class asdg_MuzzleSlot_58: asdg_MuzzleSlot
{
    class compatibleItems
    {
        muzzle_mzls_58_F = true;
    };
};
class asdg_MuzzleSlot_46: asdg_MuzzleSlot
{
    class compatibleItems
    {
        muzzle_snds_460 = true;
        Aegis_muzzle_snds_460_khaki = true;
        Aegis_muzzle_snds_460_sand = true;
    };
};