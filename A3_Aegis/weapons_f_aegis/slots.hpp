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
		optic_ACOG,
		optic_ACO_grn_AK_F
	};
};
class PointerSlot
{
    compatibleItems[] +=
	{
		acc_flashlight_ir
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
class CowsSlot_Rail: CowsSlot
{
	class compatibleItems
	{
		optic_tws_sniper = true;
		optic_srs = true;
		optic_dcl = true;
		optic_ACOG = true;
		optic_ACO_grn_AK_F = true;
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
class PointerSlot_Rail;
class UnderBarrelSlot_rail;

/* Slots used by CBA's Joint Rails functionality */
class asdg_SlotInfo;
class asdg_OpticRail;
class asdg_MuzzleSlot;
class asdg_FrontSideRail
{
    class compatibleItems
    {
		acc_flashlight_ir = true;
    };
};
class asdg_UnderSlot;
class asdg_PistolUnderRail;
class asdg_PistolOpticMount;
class asdg_PistolOpticRail1913;
class asdg_OpticRail1913: asdg_OpticRail
{
    class compatibleItems
    {
		optic_tws_sniper = true;
		optic_srs = true;
		optic_dcl = true;
		optic_ACOG = true;
		optic_ACO_grn_AK_F = true;
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
    };
};