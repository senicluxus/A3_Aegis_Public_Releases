// Rahim 7.62 mm + ARCO + Bipod (Hex) [CSAT]
class srifle_DMR_01_ARCO_BI_F: srifle_DMR_01_F
{
	author = $STR_A3_A_AveryTheKitty;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = optic_Arco;
		};
		class LinkedItemsUnder
		{
			slot = UnderBarrelSlot;
			item = bipod_02_F_hex;
		};
	};
};
// Mk-I EMR 7.62 mm + LRCO + IR Laser Pointer + Bipod [NATO] (Black)
class srifle_DMR_03_LRCO_LP_BI_F: srifle_DMR_03_F
{
	author = $STR_A3_A_AveryTheKitty;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = optic_LRCO_blk_F;
		};
		class LinkedItemsAcc
		{
			slot = PointerSlot;
			item = acc_pointer_IR;
		};
		class LinkedItemsUnder
		{
			slot = UnderBarrelSlot;
			item = bipod_01_F_blk;
		};
	};
};
// Sting 9 mm + Mk17 Holosight (Black)
class SMG_02_Holo_F: SMG_02_F
{
	author = $STR_A3_A_AveryTheKitty;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = optic_Holosight_smg_blk_F;
		};
	};
};
// LIM-85 5.56 mm + Flashlight
class LMG_03_Flash_F: LMG_03_F
{
	author = $STR_A3_A_AveryTheKitty;
	class LinkedItems
	{
		class LinkedItemsAcc
		{
			slot = PointerSlot;
			item = acc_flashlight;
		};
	};
};
// LIM-85 5.56 mm + RCO + IR Laser Pointer
class LMG_03_Hamr_Pointer_F: LMG_03_F
{
	author = $STR_A3_A_AveryTheKitty;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = optic_Hamr;
		};
		class LinkedItemsAcc
		{
			slot = PointerSlot;
			item = acc_pointer_IR;
		};
	};
};
// LIM-85 5.56 mm + ERCO (Black) + IR Laser Pointer
class LMG_03_ERCO_Pointer_F: LMG_03_F
{
	author = $STR_A3_A_AveryTheKitty;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = optic_ERCO_blk_F;
		};
		class LinkedItemsAcc
		{
			slot = PointerSlot;
			item = acc_pointer_IR;
		};
	};
};
// SPAR-16 5.56 mm (Black) + LRCO + IR Laser Pointer + Sound Suppressor (5.56 mm)
class arifle_SPAR_01_blk_LRCO_Pointer_Snds_F: arifle_SPAR_01_blk_F
{
	author = $STR_A3_A_AveryTheKitty;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = optic_LRCO_blk_F;
		};
		class LinkedItemsAcc
		{
			slot = PointerSlot;
			item = acc_pointer_IR;
		};
		class LinkedItemsMuzzle
		{
			slot = MuzzleSlot;
			item = muzzle_snds_M;
		};
	};
};
// SPAR-16 GL 5.56 mm (Black) + LRCO + IR Laser Pointer + Sound Suppressor (5.56 mm)
class arifle_SPAR_01_GL_blk_LRCO_Pointer_Snds_F: arifle_SPAR_01_GL_blk_F
{
	author = $STR_A3_A_AveryTheKitty;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = optic_LRCO_blk_F;
		};
		class LinkedItemsAcc
		{
			slot = PointerSlot;
			item = acc_pointer_IR;
		};
		class LinkedItemsMuzzle
		{
			slot = MuzzleSlot;
			item = muzzle_snds_M;
		};
	};
};

// SPAR-16 GL 5.56 mm (Black) + MRCO
class arifle_SPAR_01_GL_blk_MRCO_F : arifle_SPAR_01_GL_blk_F
{
	author = $STR_A3_A_AveryTheKitty;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = optic_MRCO;
		};
	};
};

// SPAR-16 5.56 mm (Black) + MRCO
class arifle_SPAR_01_blk_MRCO_F : arifle_SPAR_01_blk_F
{
	author = $STR_A3_A_AveryTheKitty;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = optic_MRCO;
		};
	};
};
// SPAR-16S 5.56 mm (Black) + LRCO + IR Laser Pointer + Bipod (Black) [NATO] + Sound Suppressor (5.56 mm)
class arifle_SPAR_02_blk_LRCO_Pointer_Bipod_Snds_F: arifle_SPAR_02_blk_F
{
	author = $STR_A3_A_AveryTheKitty;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = optic_LRCO_blk_F;
		};
		class LinkedItemsAcc
		{
			slot = PointerSlot;
			item = acc_pointer_IR;
		};
		class LinkedItemsMuzzle
		{
			slot = MuzzleSlot;
			item = muzzle_snds_M;
		};
		class LinkedItemsUnder
		{
			slot = UnderBarrelSlot;
			item = bipod_01_F_blk;
		};
	};
};
//SPAR16 Khaki MRCO slcr
class arifle_SPAR_01_khk_F;
class arifle_SPAR_01_khk_mrco_snds_F: arifle_SPAR_01_khk_F
{
	author = $STR_A3_A_AveryTheKitty;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = optic_MRCO;
		};
		class LinkedItemsAcc
		{
			slot = PointerSlot;
			item = acc_pointer_IR;
		};
		class LinkedItemsMuzzle
		{
			slot = MuzzleSlot;
			item = muzzle_snds_M;
		};
	};
};
// Mk14 7.62 mm (Classic) + Kahlia (Old) + Bipod (Black) [AAF]
class srifle_DMR_06_hunter_khs_bipod_F: srifle_DMR_06_hunter_F
{
	author = $STR_A3_A_AveryTheKitty;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = optic_KHS_old;
		};
		class LinkedItemsUnder
		{
			slot = UnderBarrelSlot;
			item = bipod_03_F_blk;
		};
	};
};
// Promet 6.5 mm (Black) + ACO + IR Laser Pointer
class arifle_MSBS65_black_aco_pointer_f: arifle_MSBS65_black_F
{
	author = $STR_A3_A_AveryTheKitty;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = optic_ACO;
		};
		class LinkedItemsAcc
		{
			slot = PointerSlot;
			item = acc_pointer_IR;
		};
	};
};
// Promet MR 6.5 mm (Black) + DMS + IR Laser Pointer + Bipod (Black) [NATO]
class arifle_MSBS65_Mark_black_DMS_LP_BI_F: arifle_MSBS65_Mark_black_F
{
	author = $STR_A3_A_AveryTheKitty;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = optic_DMS;
		};
		class LinkedItemsAcc
		{
			slot = PointerSlot;
			item = acc_pointer_IR;
		};
		class LinkedItemsUnder
		{
			slot = UnderBarrelSlot;
			item = bipod_01_F_blk;
		};
	};
};
// Promet GL 6.5 mm (Black) + ACO + IR Laser Pointer
class arifle_MSBS65_GL_black_aco_pointer_f: arifle_MSBS65_GL_black_F
{
	author = $STR_A3_A_AveryTheKitty;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = optic_ACO;
		};
		class LinkedItemsAcc
		{
			slot = PointerSlot;
			item = acc_pointer_IR;
		};
	};
};
// Rahim 7.62 mm (Black) + ARCO (Black) + IR Laser Pointer + Bipod [CSAT] (Black)
class srifle_DMR_01_black_ARCO_LP_BI_F: srifle_DMR_01_black_F
{
	author = $STR_A3_A_AveryTheKitty;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = optic_Arco_blk_F;
		};
		class LinkedItemsAcc
		{
			slot = PointerSlot;
			item = acc_pointer_IR;
		};
		class LinkedItemsUnder
		{
			slot = UnderBarrelSlot;
			item = bipod_02_F_blk;
		};
	};
};
// Zafir 7.62 mm (Black) + MRCO + IR Laser Pointer
class LMG_Zafir_black_MRCO_pointer_F: LMG_Zafir_black_F
{
	author = $STR_A3_A_AveryTheKitty;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = optic_MRCO;
		};
		class LinkedItemsAcc
		{
			slot = PointerSlot;
			item = acc_pointer_IR;
		};
	};
};
// Zafir 7.62 mm (Black) + MRCO + IR Laser Pointer + Sound Suppressor (7.62 mm)
class LMG_Zafir_black_MRCO_pointer_snds_F: LMG_Zafir_black_F
{
	author = $STR_A3_A_AveryTheKitty;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = optic_MRCO;
		};
		class LinkedItemsAcc
		{
			slot = PointerSlot;
			item = acc_pointer_IR;
		};
		class LinkedItemsMuzzle
		{
			slot = MuzzleSlot;
			item = muzzle_snds_B;
		};
	};
};
// Navid 9.3 mm (Black) + IR Laser Pointer
class MMG_01_black_LP_F: MMG_01_black_F
{
	author = $STR_A3_A_AveryTheKitty;
	class LinkedItems
	{
		class LinkedItemsAcc
		{
			slot = PointerSlot;
			item = acc_pointer_IR;
		};
		class LinkedItemsUnder
		{
			slot = UnderBarrelSlot;
			item = bipod_01_F_blk;
		};
	};
};
// Navid 9.3 mm (Black) + LRCO + IR Laser Pointer + Sound Suppressor (9.3 mm, Black)
class MMG_01_black_LRCO_LP_S_F: MMG_01_black_F
{
	author = $STR_A3_A_AveryTheKitty;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = optic_LRCO_blk_F;
		};
		class LinkedItemsAcc
		{
			slot = PointerSlot;
			item = acc_pointer_IR;
		};
		class LinkedItemsUnder
		{
			slot = UnderBarrelSlot;
			item = bipod_01_F_blk;
		};
		class LinkedItemsMuzzle
		{
			slot = MuzzleSlot;
			item = muzzle_snds_93mmg;
		};
	};
};
// TRG-20 5.56 mm (Black) + ACO
class arifle_TRG20_black_ACO_F: arifle_TRG20_black_F
{
	author = $STR_A3_A_AveryTheKitty;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = optic_ACO_grn;
		};
	};
};
// TRG-20 5.56 mm (Black) + ACO + IR Laser Pointer
class arifle_TRG20_black_ACO_pointer_F: arifle_TRG20_black_F
{
	author = $STR_A3_A_AveryTheKitty;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = optic_ACO_grn;
		};
		class LinkedItemsAcc
		{
			slot = PointerSlot;
			item = acc_pointer_IR;
		};
	};
};
// TRG-20 5.56 mm (Black) + ACO + Flashlight
class arifle_TRG20_black_ACO_flash_F: arifle_TRG20_black_F
{
	author = $STR_A3_A_AveryTheKitty;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = optic_ACO_grn;
		};
		class LinkedItemsAcc
		{
			slot = PointerSlot;
			item = acc_flashlight;
		};
	};
};
// TRG-20 5.56 mm (Black) + SRS + IR Laser Pointer
class arifle_TRG20_black_SRS_pointer_F: arifle_TRG20_black_F
{
	author = $STR_A3_A_AveryTheKitty;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = /*optic_srs*/ optic_Holosight_blk_F;
		};
		class LinkedItemsAcc
		{
			slot = PointerSlot;
			item = acc_pointer_IR;
		};
	};
};
// TRG-20 5.56 mm (Black) + SRS + IR Laser Pointer + Sound Suppressor (5.56 mm)
class arifle_TRG20_black_SRS_pointer_snds_F: arifle_TRG20_black_F
{
	author = $STR_A3_A_AveryTheKitty;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = /*optic_srs*/ optic_Holosight_blk_F;
		};
		class LinkedItemsAcc
		{
			slot = PointerSlot;
			item = acc_pointer_IR;
		};
		class LinkedItemsMuzzle
		{
			slot = MuzzleSlot;
			item = muzzle_snds_M;
		};
	};
};
// TRG-20 5.56 mm (Black) + MRCO + IR Laser Pointer + Sound Suppressor (5.56 mm)
class arifle_TRG20_black_MRCO_pointer_snds_F: arifle_TRG20_black_F
{
	author = $STR_A3_A_AveryTheKitty;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = optic_MRCO;
		};
		class LinkedItemsAcc
		{
			slot = PointerSlot;
			item = acc_pointer_IR;
		};
		class LinkedItemsMuzzle
		{
			slot = MuzzleSlot;
			item = muzzle_snds_M;
		};
	};
};
// TRG-21 5.56 mm (Black) + ACO + IR Laser Pointer
class arifle_TRG21_black_ACO_pointer_F: arifle_TRG21_black_F
{
	author = $STR_A3_A_AveryTheKitty;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = optic_ACO_grn;
		};
		class LinkedItemsAcc
		{
			slot = PointerSlot;
			item = acc_pointer_IR;
		};
	};
};
// TRG-21 5.56 mm (Black) + ACO + IR Laser Pointer + Sound Suppressor (5.56 mm)
class arifle_TRG21_black_ACO_pointer_snds_F: arifle_TRG21_black_F
{
	author = $STR_A3_A_AveryTheKitty;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = optic_ACO_grn;
		};
		class LinkedItemsAcc
		{
			slot = PointerSlot;
			item = acc_pointer_IR;
		};
		class LinkedItemsMuzzle
		{
			slot = MuzzleSlot;
			item = muzzle_snds_M;
		};
	};
};
// TRG-21 5.56 mm (Black) + MRCO + IR Laser Pointer
class arifle_TRG21_black_MRCO_pointer_F: arifle_TRG21_black_F
{
	author = $STR_A3_A_AveryTheKitty;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = optic_MRCO;
		};
		class LinkedItemsAcc
		{
			slot = PointerSlot;
			item = acc_pointer_IR;
		};
	};
};
// TRG-21 5.56 mm (Black) + MRCO + IR Laser Pointer + Sound Suppressor (5.56 mm)
class arifle_TRG21_black_MRCO_pointer_snds_F: arifle_TRG21_black_F
{
	author = $STR_A3_A_AveryTheKitty;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = optic_MRCO;
		};
		class LinkedItemsAcc
		{
			slot = PointerSlot;
			item = acc_pointer_IR;
		};
		class LinkedItemsMuzzle
		{
			slot = MuzzleSlot;
			item = muzzle_snds_M;
		};
	};
};
// TRG-21 5.56 mm (Black) + MOS + IR Laser Pointer
class arifle_TRG21_black_SOS_pointer_F: arifle_TRG21_black_F
{
	author = $STR_A3_A_AveryTheKitty;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = optic_SOS;
		};
		class LinkedItemsAcc
		{
			slot = PointerSlot;
			item = acc_pointer_IR;
		};
	};
};
// TRG-21 5.56 mm (Black) + MOS + IR Laser Pointer + Sound Suppressor (5.56 mm)
class arifle_TRG21_black_SOS_pointer_snds_F: arifle_TRG21_black_F
{
	author = $STR_A3_A_AveryTheKitty;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = optic_SOS;
		};
		class LinkedItemsAcc
		{
			slot = PointerSlot;
			item = acc_pointer_IR;
		};
		class LinkedItemsMuzzle
		{
			slot = MuzzleSlot;
			item = muzzle_snds_M;
		};
	};
};
// TRG-21 5.56 mm (Black) + SRS + IR Laser Pointer
class arifle_TRG21_black_SRS_pointer_F: arifle_TRG21_black_F
{
	author = $STR_A3_A_AveryTheKitty;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = /*optic_srs*/ optic_Holosight_blk_F;
		};
		class LinkedItemsAcc
		{
			slot = PointerSlot;
			item = acc_pointer_IR;
		};
	};
};
// TRG-21 5.56 mm (Black) + SRS + IR Laser Pointer + Sound Suppressor (5.56 mm)
class arifle_TRG21_black_SRS_pointer_snds_F: arifle_TRG21_black_F
{
	author = $STR_A3_A_AveryTheKitty;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = /*optic_srs*/ optic_Holosight_blk_F;
		};
		class LinkedItemsAcc
		{
			slot = PointerSlot;
			item = acc_pointer_IR;
		};
		class LinkedItemsMuzzle
		{
			slot = MuzzleSlot;
			item = muzzle_snds_M;
		};
	};
};
// TRG-21 EGLM 5.56 mm (Black) + ACO (Green) + IR Laser Pointer
class arifle_TRG21_GL_black_ACO_pointer_F: arifle_TRG21_GL_black_F
{
	author = $STR_A3_A_AveryTheKitty;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = optic_ACO_grn;
		};
		class LinkedItemsAcc
		{
			slot = PointerSlot;
			item = acc_pointer_IR;
		};
	};
};
// TRG-21 EGLM 5.56 mm (Black) + MRCO + IR Laser Pointer
class arifle_TRG21_GL_black_MRCO_pointer_F: arifle_TRG21_GL_black_F
{
	author = $STR_A3_A_AveryTheKitty;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = optic_MRCO;
		};
		class LinkedItemsAcc
		{
			slot = PointerSlot;
			item = acc_pointer_IR;
		};
	};
};
// TRG-21 EGLM 5.56 mm (Black) + MRCO + IR Laser Pointer + Sound Suppressor (5.56 mm)
class arifle_TRG21_GL_black_MRCO_pointer_snds_F: arifle_TRG21_GL_black_F
{
	author = $STR_A3_A_AveryTheKitty;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = optic_MRCO;
		};
		class LinkedItemsAcc
		{
			slot = PointerSlot;
			item = acc_pointer_IR;
		};
		class LinkedItemsMuzzle
		{
			slot = MuzzleSlot;
			item = muzzle_snds_M;
		};
	};
};
// TRG-21 EGLM 5.56 mm (Black) + SRS + IR Laser Pointer + Sound Suppressor (5.56 mm)
class arifle_TRG21_GL_black_SRS_pointer_snds_F: arifle_TRG21_GL_black_F
{
	author = $STR_A3_A_AveryTheKitty;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = /*optic_srs*/ optic_Holosight_blk_F;
		};
		class LinkedItemsAcc
		{
			slot = PointerSlot;
			item = acc_pointer_IR;
		};
		class LinkedItemsMuzzle
		{
			slot = MuzzleSlot;
			item = muzzle_snds_M;
		};
	};
};
// AK-12 5.45 mm + IR Laser Pointer
class arifle_AK12_545_pointer_F: arifle_AK12_545_F
{
	author = $STR_A3_A_AveryTheKitty;
	class LinkedItems
	{
		class LinkedItemsAcc
		{
			slot = PointerSlot;
			item = acc_pointer_IR;
		};
	};
};
class arifle_AK12_545_aco_FL_F: arifle_AK12_545_F
{
	author = $STR_A3_A_AveryTheKitty;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = optic_ACO_grn_AK_F;
		};
		class LinkedItemsAcc
		{
			slot = PointerSlot;
			item = acc_flashlight;
		};
	};
};
// AK-12 5.45 mm + Flashlight
class arifle_AK12_545_FL_F: arifle_AK12_545_F
{
	author = $STR_A3_A_AveryTheKitty;
	class LinkedItems
	{
		class LinkedItemsAcc
		{
			slot = PointerSlot;
			item = acc_flashlight;
		};
	};
};
// AK-12 5.45 mm + ARCO (Black) + Flashlight
class arifle_AK12_545_arco_FL_F: arifle_AK12_545_F
{
	author = $STR_A3_A_AveryTheKitty;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = optic_Arco_blk_F;
		};
		class LinkedItemsAcc
		{
			slot = PointerSlot;
			item = acc_flashlight;
		};
	};
};
// AK-12 GL 5.45 mm + ACO AK (Green)
class arifle_AK12_GL_545_aco_F: arifle_AK12_GL_545_F
{
	author = $STR_A3_A_AveryTheKitty;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = optic_ACO_grn_AK_F;
		};
	};
};
// AK-12 GL 5.45 mm + ACO AK (Green) + Flashlight
class arifle_AK12_GL_545_aco_FL_F: arifle_AK12_GL_545_F
{
	author = $STR_A3_A_AveryTheKitty;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = optic_ACO_grn_AK_F;
		};
		class LinkedItemsAcc
		{
			slot = PointerSlot;
			item = acc_flashlight;
		};
	};
};
// AK-12 GL 5.45 mm + ARCO (Black) + Flashlight
class arifle_AK12_GL_545_arco_FL_F: arifle_AK12_GL_545_F
{
	author = $STR_A3_A_AveryTheKitty;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = optic_Arco_blk_F;
		};
		class LinkedItemsAcc
		{
			slot = PointerSlot;
			item = acc_flashlight;
		};
	};
};
// AKU-12 5.45 mm + IR Laser Pointer
class arifle_AK12U_545_pointer_F: arifle_AK12U_545_F
{
	author = $STR_A3_A_AveryTheKitty;
	class LinkedItems
	{
		class LinkedItemsAcc
		{
			slot = PointerSlot;
			item = acc_pointer_IR;
		};
	};
};
// AKU-12 5.45 mm + Flashlight
class arifle_AK12U_545_FL_F: arifle_AK12U_545_F
{
	author = $STR_A3_A_AveryTheKitty;
	class LinkedItems
	{
		class LinkedItemsAcc
		{
			slot = PointerSlot;
			item = acc_flashlight;
		};
	};
};
//MK14 + Kahlia BLK + CSAT Black Bipod
class srifle_dmr_06_black_F;
class srifle_dmr_06_blk_kh_bp_F: srifle_dmr_06_black_F
{
	author = $STR_A3_A_AveryTheKitty;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = optic_KHS_blk;
		};
		class LinkedItemsUnder
		{
			slot = UnderBarrelSlot;
			item = bipod_02_F_blk;
		};
	};
};
//LIM + Laser Pointer
class LMG_03_Pointer_F: LMG_03_F
{
	author = $STR_A3_A_AveryTheKitty;
	class LinkedItems
	{
		class LinkedItemsAcc
		{
			slot = PointerSlot;
			item = acc_pointer_IR;
		};
	};
};
class arifle_AUG_C_black_F;
class arifle_AUG_C_black_slcr_arco_F: arifle_AUG_C_black_F
{
	author = $STR_A3_A_AveryTheKitty;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = optic_arco_blk_F;
		};
		class LinkedItemsAcc
		{
			slot = PointerSlot;
			item = acc_pointer_IR;
		};
		class LinkedItemsMuzzle
		{
			slot = MuzzleSlot;
			item = muzzle_snds_M;
		};
	};
};
class srifle_dmr_06_camo_F;
class srifle_dmr_06_camo_dms_F: srifle_dmr_06_camo_F
{
	author = $STR_A3_A_BranFlakes;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = optic_DMS;
		};
		class LinkedItemsUnder
		{
			slot = UnderBarrelSlot;
			item = bipod_02_F_lush;
		};
		class LinkedItemsMuzzle
		{
			slot = MuzzleSlot;
			item = muzzle_snds_B_Lush_F;
		};
	};
};
class LMG_03_arco_Pointer_snds_F: LMG_03_F
{
	author = $STR_A3_A_AveryTheKitty;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = optic_arco_blk_F;
		};
		class LinkedItemsAcc
		{
			slot = PointerSlot;
			item = acc_pointer_IR;
		};
		class LinkedItemsMuzzle
		{
			slot = MuzzleSlot;
			item = muzzle_snds_m;
		};
	};
};
class arifle_AUG_GL_black_F;
class arifle_AUG_GL_black_slcr_arco_F: arifle_AUG_GL_black_F
{
	author = $STR_A3_A_AveryTheKitty;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = optic_arco_blk_F;
		};
		class LinkedItemsAcc
		{
			slot = PointerSlot;
			item = acc_pointer_IR;
		};
		class LinkedItemsMuzzle
		{
			slot = MuzzleSlot;
			item = muzzle_snds_M;
		};
	};
};
class arifle_Mk20_plain_F;
class arifle_mk20_plain_arco_pointer_F: arifle_Mk20_plain_F
{
	author = $STR_A3_A_AveryTheKitty;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = optic_arco_blk_F;
		};
		class LinkedItemsAcc
		{
			slot = PointerSlot;
			item = acc_pointer_IR;
		};
	};
};
class arifle_mk20_plain_holo_pointer_F: arifle_Mk20_plain_F
{
	author = $STR_A3_A_AveryTheKitty;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = acc_o_FMS;
		};
		class LinkedItemsAcc
		{
			slot = PointerSlot;
			item = acc_pointer_IR;
		};
	};
};
class arifle_Mk20_gl_plain_F;
class arifle_mk20_gl_plain_arco_pointer_F: arifle_Mk20_gl_plain_F
{
	author = $STR_A3_A_AveryTheKitty;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = optic_arco_blk_F;
		};
		class LinkedItemsAcc
		{
			slot = PointerSlot;
			item = acc_pointer_IR;
		};
	};
};
class arifle_mk20_gl_plain_holo_pointer_F: arifle_Mk20_gl_plain_F
{
	author = $STR_A3_A_AveryTheKitty;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = acc_o_FMS;
		};
		class LinkedItemsAcc
		{
			slot = PointerSlot;
			item = acc_pointer_IR;
		};
	};
};
class lmg_03_snd_F;
class lmg_03_snd_holo: lmg_03_snd_F
{
	author = $STR_A3_A_AveryTheKitty;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = optic_holosight;
		};
		class LinkedItemsAcc
		{
			slot = PointerSlot;
			item = acc_pointer_IR;
		};
	};
};
class arifle_scar_F;
class arifle_scar_SV_F: arifle_scar_F
{
	author = $STR_A3_A_AveryTheKitty;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = optic_AMS;
		};
		class LinkedItemsAcc
		{
			slot = PointerSlot;
			item = acc_pointer_IR;
		};
		class LinkedItemsUnder
		{
			slot = UnderBarrelSlot;
			item = bipod_01_F_blk;
		};
	};
};
class arifle_G36C_F;
class arifle_G36C_mrco_snds_F: arifle_G36C_F
{
	author = "BranFlakes";
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = optic_MRCO;
		};
		class LinkedItemsAcc
		{
			slot = PointerSlot;
			item = acc_pointer_IR;
		};
		class LinkedItemsMuzzle
		{
			slot = MuzzleSlot;
			item = muzzle_snds_H;
		};
	};
};
class arifle_G36_GL_F;
class arifle_G36_GL_mrco_snds_F: arifle_G36_GL_F
{
	author = "BranFlakes";
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = optic_MRCO;
		};
		class LinkedItemsAcc
		{
			slot = PointerSlot;
			item = acc_pointer_IR;
		};
		class LinkedItemsMuzzle
		{
			slot = MuzzleSlot;
			item = muzzle_snds_H;
		};
	};
};
class LMG_MK200_black_snds_F: LMG_MK200_black_F
{
	author = "BranFlakes";
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = optic_MRCO;
		};
		class LinkedItemsAcc
		{
			slot = PointerSlot;
			item = acc_pointer_IR;
		};
		class LinkedItemsMuzzle
		{
			slot = MuzzleSlot;
			item = muzzle_snds_H;
		};
	};
};
class LMG_MK200_black_cdf_F: LMG_MK200_black_F
{
	author = "BranFlakes";
	class LinkedItems
	{
		class LinkedItemsUnder
		{
			slot = UnderBarrelSlot;
			item = bipod_01_F_blk;
		};
	};
};
class arifle_SPAR_03_blk_F;
class arifle_SPAR_03_blk_ams_Pointer_Snds_F: arifle_SPAR_03_blk_F
{
	author = $STR_A3_A_AveryTheKitty;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = optic_AMS;
		};
		class LinkedItemsAcc
		{
			slot = PointerSlot;
			item = acc_pointer_IR;
		};
		class LinkedItemsMuzzle
		{
			slot = MuzzleSlot;
			item = muzzle_snds_B;
		};
	};
};
class srifle_EBR_blk_F;
class srifle_EBR_blk_MRCO_LP_BI_F: srifle_EBR_blk_F
{
	author = $STR_A3_A_AveryTheKitty;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = optic_AMS;
		};
		class LinkedItemsAcc
		{
			slot = PointerSlot;
			item = acc_pointer_IR;
		};
		class LinkedItemsUnder
		{
			slot = UnderBarrelSlot;
			item = bipod_01_F_blk;
		};
	};
};
// Mk18 ABR 7.62 mm (Black) + AMS + Bipod [NATO]
class srifle_EBR_blk_AMS_BI_F: srifle_EBR_blk_F
{
	author = $STR_A3_A_AveryTheKitty;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = optic_AMS;
		};
		class LinkedItemsUnder
		{
			slot = UnderBarrelSlot;
			item = bipod_01_F_blk;
		};
	};
};

// Mk18 ABR 7.62 mm (Coyote) + AMS (Sand) + IR Laser Pointer + Bipod [NATO] (Sand)
class srifle_EBR_cbr_AMS_LP_BI_F: srifle_EBR_cbr_F
{
	author = $STR_A3_A_AveryTheKitty;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = optic_AMS_snd;
		};
		class LinkedItemsAcc
		{
			slot = PointerSlot;
			item = acc_pointer_IR;
		};
		class LinkedItemsUnder
		{
			slot = UnderBarrelSlot;
			item = bipod_01_F_snd;
		};
	};
};

// TRG-21 5.56 mm + ACO
class arifle_TRG21_F;
class arifle_TRG21_ACO_F: arifle_TRG21_F
{
	author = $STR_A3_A_AveryTheKitty;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = optic_ACO;
		};
	};
};
// TRG-21 EGLM 5.56 mm + ACO
class arifle_TRG21_GL_F;
class arifle_TRG21_GL_ACO_F: arifle_TRG21_GL_F
{
	author = $STR_A3_A_AveryTheKitty;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = optic_ACO;
		};
	};
};
// Cyrus 9.3 mm (Black) + AMS + Bipod
class srifle_DMR_05_blk_F;
class srifle_DMR_05_blk_AMS_BI_F: srifle_DMR_05_blk_F
{
	author = $STR_A3_A_AveryTheKitty;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = optic_AMS;
		};
		class LinkedItemsUnder
		{
			slot = UnderBarrelSlot;
			item = bipod_01_F_blk;
		};
	};
};