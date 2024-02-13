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
// Mk-I EMR 7.62 mm (Sand) + LRCO + IR Laser Pointer + Bipod [NATO] (Sand)
class srifle_DMR_03_tan_LRCO_LP_BI_F: srifle_DMR_03_tan_F
{
	author = $STR_A3_A_AveryTheKitty;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = optic_LRCO_snd_F;
		};
		class LinkedItemsAcc
		{
			slot = PointerSlot;
			item = acc_pointer_IR_sand_lxWS;
		};
		class LinkedItemsUnder
		{
			slot = UnderBarrelSlot;
			item = bipod_01_F_snd;
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
// SPAR-16S 5.56 mm (Sand) + LRCO + IR Laser Pointer + Bipod (Sand) [NATO] + Sound Suppressor (5.56 mm)
class arifle_SPAR_02_snd_LRCO_Pointer_Bipod_Snds_F: arifle_SPAR_02_snd_F
{
	author = $STR_A3_A_AveryTheKitty;
	class LinkedItems
	{
		class LinkedItemsMuzzle
		{
			slot = MuzzleSlot;
			item = muzzle_snds_M_snd_F;
		};
		class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = optic_LRCO_snd_F;
		};
		class LinkedItemsAcc
		{
			slot = PointerSlot;
			item = acc_pointer_IR_sand_lxWS;
		};
		class LinkedItemsUnder
		{
			slot = UnderBarrelSlot;
			item = bipod_01_F_snd;
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
// Navid 9.3 mm (Tan) + IR Laser Pointer + Bipod [NATO] (Sand)
class MMG_01_tan_LP_BI_F: MMG_01_tan_F
{
	author = $STR_A3_A_AveryTheKitty;
	class LinkedItems
	{
		class LinkedItemsAcc
		{
			slot = PointerSlot;
			item = acc_pointer_IR_sand_lxWS;
		};
		class LinkedItemsUnder
		{
			slot = UnderBarrelSlot;
			item = bipod_01_F_snd;
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
			item = Aegis_acc_pointer_DM;
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
// TRG-20 5.56 mm (Black) + ACOG + DM Laser Pointer + Sound Suppressor (5.56 mm)
class arifle_TRG20_black_ACOG_pointer_snds_F: arifle_TRG20_black_F
{
	author = $STR_A3_A_AveryTheKitty;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = Aegis_optic_ACOG;
		};
		class LinkedItemsAcc
		{
			slot = PointerSlot;
			item = Aegis_acc_pointer_DM;
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
// TRG-21 5.56 mm (Black) + ACOG + IR Laser Pointer
class arifle_TRG21_black_ACOG_pointer_F: arifle_TRG21_black_F
{
	author = $STR_A3_A_AveryTheKitty;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = Aegis_optic_ACOG;
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
			item = Aegis_acc_pointer_DM;
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
// TRG-21 EGLM 5.56 mm (Black) + ACOG + IR Laser Pointer
class arifle_TRG21_GL_black_ACOG_pointer_F: arifle_TRG21_GL_black_F
{
	author = $STR_A3_A_AveryTheKitty;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = Aegis_optic_ACOG;
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
// TRG-21 EGLM 5.56 mm (Black) + ACOG + IR Laser Pointer + Sound Suppressor (5.56 mm)
class arifle_TRG21_GL_black_ACOG_pointer_snds_F: arifle_TRG21_GL_black_F
{
	author = $STR_A3_A_AveryTheKitty;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = Aegis_optic_ACOG;
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
			item = Aegis_acc_pointer_DM;
		};
		class LinkedItemsMuzzle
		{
			slot = MuzzleSlot;
			item = muzzle_snds_M;
		};
	};
};
// TRG-21 5.56 mm (Black) + ICO + IR Laser Pointer
class Atlas_arifle_TRG21_black_ICO_pointer_F: arifle_TRG21_black_F
{
	author = $STR_A3_A_AveryTheKitty;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = Aegis_optic_ICO;
		};
		class LinkedItemsAcc
		{
			slot = PointerSlot;
			item = acc_pointer_IR;
		};
	};
};
// TRG-21 EGLM 5.56 mm (Black) + ICO + IR Laser Pointer
class Atlas_arifle_TRG21_GL_black_ICO_pointer_F: arifle_TRG21_GL_black_F
{
	author = $STR_A3_A_AveryTheKitty;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = Aegis_optic_ICO;
		};
		class LinkedItemsAcc
		{
			slot = PointerSlot;
			item = acc_pointer_IR;
		};
	};
};
// TRG-20 5.56 mm (Black) + ICO + IR Laser Pointer
class Atlas_arifle_TRG20_black_ICO_pointer_F: arifle_TRG20_black_F
{
	author = $STR_A3_A_AveryTheKitty;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = Aegis_optic_ICO;
		};
		class LinkedItemsAcc
		{
			slot = PointerSlot;
			item = acc_pointer_IR;
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

// AK-12 5.45 mm + ACO (AK) + Flashlight
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
// AK-12 5.45 mm + ARCO (Black) + IR Laser + PBS-4
class arifle_AK12_545_arco_pointer_pbs_F: arifle_AK12_545_F
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
		class LinkedItemsMuzzle
		{
			slot = MuzzleSlot;
			item = aegis_muzzle_snds_pbs_545_blk;
		};
	};
};
// AK-12 5.45 mm + ACO AK (Green) + IR Laser + PBS-4
class arifle_AK12_545_aco_pointer_pbs_F: arifle_AK12_545_F
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
			item = acc_pointer_IR;
		};
		class LinkedItemsMuzzle
		{
			slot = MuzzleSlot;
			item = aegis_muzzle_snds_pbs_545_blk;
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
// AK-12 GL 5.45 mm + ARCO (Black) + IR + PBS-4
class arifle_AK12_GL_545_arco_IR_PBS_F: arifle_AK12_GL_545_F
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
		class LinkedItemsMuzzle
		{
			slot = MuzzleSlot;
			item = aegis_muzzle_snds_pbs_545_blk;
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
// AKU-12 5.45 mm + ACO AK (Green) + LP
class arifle_AK12U_545_ACO_Pointer_F: arifle_AK12U_545_F
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
			item = acc_pointer_IR;
		};
	};
};
// AKU-12 5.45 mm + ACO AK (Green) + LP + PBS-4
class arifle_AK12U_545_ACO_Pointer_pbs_F: arifle_AK12U_545_F
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
			item = acc_pointer_IR;
		};
		class LinkedItemsMuzzle
		{
			slot = MuzzleSlot;
			item = aegis_muzzle_snds_pbs_545_blk;
		};
	};
};
// RPK-12 5.45 mm +  LP
class arifle_RPK12_545_LP_F: Aegis_arifle_RPK12_545_F
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
// RPK-12 5.45 mm + ARCO (black) + LP + PBS-4
class arifle_RPK12_545_ARCO_LP_PBS_F: Aegis_arifle_RPK12_545_F
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
		class LinkedItemsMuzzle
		{
			slot = MuzzleSlot;
			item = aegis_muzzle_snds_pbs_545_blk;
		};
	};
};
//MK14 + Kahlia BLK + CSAT Black Bipod
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

// SLR 7.62 mm (Black) + Kahlia (Old)
class atlas_arifle_SLR_V_KHS_old_lxWS: arifle_SLR_V_lxWS
{
    author=$STR_A3_A_Ravenholme;
    class LinkedItems
    {
        class LinkedItemsOptic
        {
            slot = CowsSlot;
            item = optic_KHS_old;
        };
    };
};

// MK16 5.56 mm (Sand) + Flashlight

class atlas_arifle_SCAR_L_FL_F: arifle_SCAR_L_F
{
	author = $STR_A3_A_Ravenholme;
	class LinkedItems
	{
		class LinkedItemsAcc
		{
			slot = PointerSlot;
			item = acc_flashlight;
		};
	};
};

// MK16 5.56 mm (Sand) + Holo + Flashlight
class atlas_arifle_SCAR_L_Holo_FL_F: arifle_SCAR_L_F
{
	author = $STR_A3_A_Ravenholme;
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
			item = acc_flashlight;
		};
	};
};

// MK16 5.56 mm (Sand) + ICO + Flashlight
class atlas_arifle_SCAR_L_ICO_FL_F: arifle_SCAR_L_F
{
	author = $STR_A3_A_Ravenholme;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = Aegis_optic_ICO_sand;
		};
		class LinkedItemsAcc
		{
			slot = PointerSlot;
			item = acc_flashlight;
		};
	};
};

// MK16 5.56 mm (Sand) + ARCO + Flashlight
class atlas_arifle_SCAR_L_ARCO_FL_F: arifle_SCAR_L_F
{
	author = $STR_A3_A_Ravenholme;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = optic_Arco;
		};
		class LinkedItemsAcc
		{
			slot = PointerSlot;
			item = acc_flashlight;
		};
	};
};

// MK16 5.56 mm (Sand) GL + Holo + Flashlight
class atlas_arifle_SCAR_L_GL_Holo_FL_F: arifle_SCAR_L_GL_F
{
	author = $STR_A3_A_Ravenholme;
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
			item = acc_flashlight;
		};
	};
};

// MK16 5.56 mm (Sand) GL + ICO + Flashlight
class atlas_arifle_SCAR_L_GL_ICO_FL_F: arifle_SCAR_L_GL_F
{
	author = $STR_A3_A_Ravenholme;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = Aegis_optic_ICO_sand;
		};
		class LinkedItemsAcc
		{
			slot = PointerSlot;
			item = acc_flashlight;
		};
	};
};

// MK16 5.56 mm (Sand) GL + ARCO + Flashlight
class atlas_arifle_SCAR_L_GL_ARCO_FL_F: arifle_SCAR_L_GL_F
{
	author = $STR_A3_A_Ravenholme;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = optic_Arco;
		};
		class LinkedItemsAcc
		{
			slot = PointerSlot;
			item = acc_flashlight;
		};
	};
};

// MK16C 5.56 mm (Sand) + Flashlight

class atlas_arifle_SCAR_L_Short_FL_F: arifle_SCAR_L_Short_F
{
	author = $STR_A3_A_Ravenholme;
	class LinkedItems
	{
		class LinkedItemsAcc
		{
			slot = PointerSlot;
			item = acc_flashlight;
		};
	};
};

// MK17 7.62 mm (Sand) + ARCO + Bipod
class atlas_arifle_SCAR_ARCO_BI_F: arifle_SCAR_F
{
	author = $STR_A3_A_Ravenholme;
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
			item = bipod_02_F_tan;
		};
	};
};

// LIM-85 5.56 + Holo (Black)
class atlas_LMG_03_Holo_blk_F: LMG_03_F
{
	author = $STR_A3_A_Ravenholme;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = optic_holosight_blk_F;
		};
	};
};

// AUR-90 (Black) 5.56 mm + MRCO + Laser Pointer + Silencer
class arifle_AUG_black_F;
class arifle_AUG_black_MRCO_Snds_IR_F: arifle_AUG_black_F
{
	author = $STR_A3_A_Ravenholme;
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
// AUR-90 5.56 mm + MRCO + Laser Pointer + Silencer
class arifle_AUG_F;
class arifle_AUG_MRCO_Snds_IR_F: arifle_AUG_F
{
	author = $STR_A3_A_Ravenholme;
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
			item = muzzle_snds_M_snd_F;
		};
	};
};

// XMS 5.56 mm (Khaki) + MRCO + IR Laser + Silencer
class arifle_XMS_Base_khk_MRCO_Snds_IR_F: arifle_XMS_Base_khk_lxWS
{
	author = $STR_A3_A_Ravenholme;
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
			item = muzzle_snds_M_khk_F;
		};
	};
};

// XMS 5.56 mm GL (Khaki) + MRCO + IR Laser + Silencer
class arifle_XMS_GL_khk_MRCO_Snds_IR_F: arifle_XMS_GL_khk_lxWS
{
	author = $STR_A3_A_Ravenholme;
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
			item = muzzle_snds_M_khk_F;
		};
	};
};

// Mk200 6.5 mm (Khaki) + MRCO + IR Laser + Silencer
class LMG_Mk200_khk_MRCO_Snds_IR_F: LMG_Mk200_khk_F
{
	author = $STR_A3_A_Ravenholme;
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
			item = muzzle_snds_H_khk_F;
		};
	};
};

// XMS 5.56 mm (Khaki) + ACOG + IR Laser + Silencer
class arifle_XMS_Base_khk_ACOG_Snds_IR_F: arifle_XMS_Base_khk_lxWS
{
	author = $STR_A3_A_Ravenholme;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = Aegis_optic_ACOG_khaki;
		};
		class LinkedItemsAcc
		{
			slot = PointerSlot;
			item = acc_pointer_IR;
		};
		class LinkedItemsMuzzle
		{
			slot = MuzzleSlot;
			item = muzzle_snds_M_khk_F;
		};
	};
};

// XMS 5.56 mm GL (Khaki) + ACOG + IR Laser + Silencer
class arifle_XMS_GL_khk_ACOG_Snds_IR_F: arifle_XMS_GL_khk_lxWS
{
	author = $STR_A3_A_Ravenholme;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = Aegis_optic_ACOG_khaki;
		};
		class LinkedItemsAcc
		{
			slot = PointerSlot;
			item = acc_pointer_IR;
		};
		class LinkedItemsMuzzle
		{
			slot = MuzzleSlot;
			item = muzzle_snds_M_khk_F;
		};
	};
};

// Mk200 6.5 mm (Khaki) + ACOG + IR Laser + Silencer
class LMG_Mk200_khk_ACOG_Snds_IR_F: LMG_Mk200_khk_F
{
	author = $STR_A3_A_Ravenholme;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = Aegis_optic_ACOG_khaki;
		};
		class LinkedItemsAcc
		{
			slot = PointerSlot;
			item = acc_pointer_IR;
		};
		class LinkedItemsMuzzle
		{
			slot = MuzzleSlot;
			item = muzzle_snds_H_khk_F;
		};
	};
};

// MK200 6.5 mm (Sand) + IR Laser + Bipod [NATO] (Sand)
class LMG_Mk200_plain_F;
class Atlas_LMG_MK200_plain_IR_BI_F: LMG_Mk200_plain_F
{
	author = $STR_A3_A_Ravenholme;
	class LinkedItems
	{
		class LinkedItemsAcc
		{
			slot = PointerSlot;
			item = acc_pointer_IR_sand_lxWS;
		};
		class LinkedItemsUnder
		{
			slot = UnderBarrelSlot;
			item = bipod_01_F_snd;
		};
	};
};

// SPAR-17 7.62 mm (Khaki) + AMS + IR Pointer + Silencer
class arifle_SPAR_03_khk_ams_Pointer_Snds_F: arifle_SPAR_03_khk_F
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
			item = muzzle_snds_B_khk_F;
		};
	};
};

// Katiba 6.5 mm + ACO + IR Flashlight
class Atlas_arifle_Katiba_ACO_IRFL_F: arifle_Katiba_F
{
	author = $STR_A3_A_Ravenholme;
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
			item = saber_light_ir_lxWS;
		};
	};
};

// Katiba Carbine 6.5 mm + ACO + IR Flashlight
class Atlas_arifle_Katiba_C_ACO_IRFL_F: arifle_Katiba_C_F
{
	author = $STR_A3_A_Ravenholme;
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
			item = saber_light_ir_lxWS;
		};
	};
};

// Katiba GL 6.5 mm + ACO + IR Flashlight
class Atlas_arifle_Katiba_GL_ACO_IRFL_F: arifle_Katiba_GL_F
{
	author = $STR_A3_A_Ravenholme;
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
			item = saber_light_ir_lxWS;
		};
	};
};

// Zafir 7.62 mm (Black) + ACO + IR Flashlight
class Atlas_LMG_Zafir_Black_ACO_IRFL_F: LMG_Zafir_Black_F
{
	author = $STR_A3_A_Ravenholme;
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
			item = saber_light_ir_lxWS;
		};
	};
};

// Navid 9.3 mm (black) + ARCO + Bipod [CSAT] black
class Atlas_MMG_01_black_ARCO_BI_F: MMG_01_black_F
{
	author = $STR_A3_A_Ravenholme;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = optic_ARCO_blk_F;
		};
		class LinkedItemsUnder
		{
			slot = UnderBarrelSlot;
			item = bipod_02_F_blk;
		};
	};
};

// Rahim 7.62 mm (Black) + ARCO (Black) + IR Laser Pointer + Bipod [CSAT] (Black)
class Atlas_srifle_DMR_01_black_ARCO_IRFL_BI_F: srifle_DMR_01_black_F
{
	author = $STR_A3_A_Ravenholme;
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
			item = saber_light_ir_lxWS;
		};
		class LinkedItemsUnder
		{
			slot = UnderBarrelSlot;
			item = bipod_02_F_blk;
		};
	};
};
// Rahim 7.62 mm (Black) + ARCO (Black) + IR Laser Pointer + Bipod [CSAT] (Black) + PBS-1
class Atlas_srifle_DMR_01_black_ARCO_IR_BI_PBS_F: srifle_DMR_01_black_F
{
	author = $STR_A3_A_Ravenholme;
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
		class LinkedItemsMuzzle
		{
			slot = MuzzleSlot;
			item = aegis_muzzle_snds_pbs_762_blk;
		};
	};
};

// SPAR-17 7,62 mm (Black) + DMS + IR Laser Pointer + Bipod (Black) [NATO]
class Atlas_arifle_SPAR_03_blk_DMS_LP_BI_F: arifle_SPAR_03_blk_F
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
// M4 12G + Holosight + Flashlight
class Atlas_sgun_M4_Holo_FL_F: sgun_M4_F
{
    author = $STR_A3_A_Ravenholme;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = optic_Holosight_blk_F;
		};
		class LinkedItemsAcc
		{
			slot = PointerSlot;
			item = acc_flashlight_pistol;
		};
	};
};

// LIM-85 5.56 mm + RCO + Compact IR Laser Pointer + Stubby Suppressor
class Atlas_LMG_03_Hamr_IR_Snds_F: LMG_03_F
{
	author = $STR_A3_A_Ravenholme;
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
			item = Aegis_acc_pointer_compact_red;
		};
		class LinkedItemsMuzzle
		{
			slot = MuzzleSlot;
			item = suppressor_l_lxws;
		};
	};
};

// SPAR-16 (Black) 5.56 mm + RCO + Dual Mode Laser Pointer + Stubby Suppressor
class Atlas_arifle_SPAR_01_blk_Hamr_IR_Snds_F: arifle_SPAR_01_blk_F
{
	author = $STR_A3_A_Ravenholme;
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
			item = Aegis_acc_pointer_DM;
		};
		class LinkedItemsMuzzle
		{
			slot = MuzzleSlot;
			item = suppressor_l_lxws;
		};
	};
};

// SPAR-16 (Black) GL 5.56 mm + RCO + Dual Mode Pointer + Stubby Suppressor
class Atlas_arifle_SPAR_01_GL_blk_Hamr_IR_Snds_F: arifle_SPAR_01_GL_blk_F
{
	author = $STR_A3_A_Ravenholme;
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
			item = Aegis_acc_pointer_DM;
		};
		class LinkedItemsMuzzle
		{
			slot = MuzzleSlot;
			item = suppressor_l_lxws;
		};
	};
};
// Mk18 EBR (Black) 7.62 mm + AMS + Compact IR Laser Pointer + Stubby Suppressor
class Atlas_srifle_EBR_blk_AMS_IR_Snds_lxWS: srifle_EBR_blk_lxWS
{
	author = $STR_A3_A_Ravenholme;
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
			item = Aegis_acc_pointer_compact_red;
		};
		class LinkedItemsMuzzle
		{
			slot = MuzzleSlot;
			item = suppressor_h_lxws;
		};
	};
};

// G17 (Black) 9mm + IR + Suppressor
class Atlas_hgun_G17_black_Snds_F: hgun_G17_black_F
{
	author = $STR_A3_A_Ravenholme;
	class LinkedItems
	{
		class LinkedItemsMuzzle
		{
			slot = MuzzleSlot;
			item = muzzle_snds_L;
		};
	};
};
// AK-74M (Plum) 5.45 mm + ACO AK (Green) + Flashlight
class Atlas_arifle_AKM74_plum_ACO_FL_F: Aegis_arifle_AKM74_plum_F
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
			item = acc_flashlight_pistol;
		};
	};
};
// AK-74M (Plum) 5.45 mm + MRCO + Flashlight
class Atlas_arifle_AKM74_plum_MRCO_FL_F: Aegis_arifle_AKM74_plum_F
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
			item = acc_flashlight_pistol;
		};
	};
};
// AK-74M (Plum) 5.45 mm + Flashlight
class Atlas_arifle_AKM74_plum_FL_F: Aegis_arifle_AKM74_plum_F
{
	author = $STR_A3_A_AveryTheKitty;
	class LinkedItems
	{
		class LinkedItemsAcc
		{
			slot = PointerSlot;
			item = acc_flashlight_pistol;
		};
	};
};
// AK-74M GL (Plum) 5.45 mm + ACO AK (Green) + Flashlight
class Atlas_arifle_AKM74_GL_plum_ACO_FL_F: Aegis_arifle_AKM74_GL_plum_F
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
			item = acc_flashlight_pistol;
		};
	};
};
// AK-74M GL (Plum) 5.45 mm + MRCO + Flashlight
class Atlas_arifle_AKM74_GL_plum_MRCO_FL_F: Aegis_arifle_AKM74_GL_plum_F
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
			item = acc_flashlight_pistol;
		};
	};
};
// AK-74M GL (Plum) 5.45 mm + Flashlight
class Atlas_arifle_AKM74_GL_plum_FL_F: Aegis_arifle_AKM74_GL_plum_F
{
	author = $STR_A3_A_AveryTheKitty;
	class LinkedItems
	{
		class LinkedItemsAcc
		{
			slot = PointerSlot;
			item = acc_flashlight_pistol;
		};
	};
};
// RPK-74M (Plum) 5.45 mm + ACO AK (Green) + Flashlight (replace base class with RPK-74M (Plum) when integrated)
/*class Atlas_arifle_RPK74M_plum_ACO_FL_F: Aegis_arifle_RPK74_F
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
			item = acc_flashlight_pistol;
		};
	};
};*/
// MK14 (Olive) 7.62 mm + Kahlia
class Atlas_srifle_DMR_06_Olive_KHS_F: srifle_DMR_06_olive_F
{
	author = $STR_A3_A_AveryTheKitty;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = optic_KHS_blk;
		};
	};
};

// LIM-85 5.56 mm + Flashlight
class Atlas_I_E_LMG_03_ACO_Flash_F: LMG_03_F
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
// Mk11 7.62 mm + MRCO + Laser Pointer + Bipod
class Atlas_arifle_SR25_blk_MRCO_LP_BI_F: Aegis_arifle_SR25_blk_F
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
// Mk11 7.62 mm + MOS + IR Laser Pointer + Mk11 Suppressor
class Atlas_arifle_SR25_blk_SOS_pointer_snds_F: Aegis_arifle_SR25_blk_F
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
			item = aegis_muzzle_snds_sr25_blk;
		};
	};
};
// MK11 7.62 mm (Khaki) + AMS + IR Pointer + Silencer
class Atlas_arifle_SR25_khk_ams_Pointer_Snds_F: Aegis_arifle_SR25_khk_F
{
	author = $STR_A3_A_AveryTheKitty;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = optic_AMS_khk;
		};
		class LinkedItemsAcc
		{
			slot = PointerSlot;
			item = acc_pointer_IR;
		};
		class LinkedItemsMuzzle
		{
			slot = MuzzleSlot;
			item = muzzle_snds_B_khk_F;
		};
	};
};
// M110 7.62 mm + AMS + Dual Mode Laser Pointer + Stubby Suppressor
class Atlas_arifle_SR25_MR_blk_AMS_IR_Snds_lxWS: Aegis_arifle_SR25_MR_blk_F
{
	author = $STR_A3_A_Ravenholme;
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
			item = Aegis_acc_pointer_DM;
		};
		class LinkedItemsMuzzle
		{
			slot = MuzzleSlot;
			item = suppressor_h_lxws;
		};
	};
};
// M110 7.62 mm (Sand) + AMS + Bipod [NATO]
class Atlas_arifle_SR25_MR_Snd_AMS_BI_F: Aegis_arifle_SR25_MR_Snd_F
{
	author = $STR_A3_A_AveryTheKitty;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = optic_AMS_snd;
		};
		class LinkedItemsUnder
		{
			slot = UnderBarrelSlot;
			item = bipod_01_F_snd;
		};
	};
};
// M4A1 5.56 mm (Black) + ACOG + IR Laser Pointer
class Atlas_arifle_M4A1_ACOG_pointer_F: Aegis_arifle_M4A1_F
{
	author = $STR_A3_A_AveryTheKitty;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = Aegis_optic_ACOG;
		};
		class LinkedItemsAcc
		{
			slot = PointerSlot;
			item = acc_pointer_IR;
		};
	};
};
// M4A1 5.56 mm (Black) + ACOG + DM Laser Pointer + Sound Suppressor (5.56 mm)
class Atlas_arifle_M4A1_ACOG_pointer_snds_F: Aegis_arifle_M4A1_F
{
	author = $STR_A3_A_AveryTheKitty;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = Aegis_optic_ACOG;
		};
		class LinkedItemsAcc
		{
			slot = PointerSlot;
			item = Aegis_acc_pointer_DM;
		};
		class LinkedItemsMuzzle
		{
			slot = MuzzleSlot;
			item = muzzle_snds_M;
		};
	};
};
// M4A1 5.56 mm (Black) + ICO + IR Laser Pointer + Sound Suppressor (5.56 mm)
class Atlas_arifle_M4A1_ICO_pointer_snds_F: Aegis_arifle_M4A1_F
{
	author = $STR_A3_A_AveryTheKitty;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = Aegis_optic_ICO;
		};
		class LinkedItemsAcc
		{
			slot = PointerSlot;
			item = Aegis_acc_pointer_DM;
		};
		class LinkedItemsMuzzle
		{
			slot = MuzzleSlot;
			item = muzzle_snds_M;
		};
	};
};
// M4A1 GL 5.56 mm (Black) + ACOG + IR Laser Pointer + Sound Suppressor (5.56 mm)
class Atlas_arifle_M4A1_GL_ACOG_pointer_snds_F: Aegis_arifle_M4A1_GL_F
{
	author = $STR_A3_A_AveryTheKitty;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = Aegis_optic_ACOG;
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
// M4A1 5.56 mm (Sand) + Holosight + Saber Light
class Atlas_arifle_M4A1_Sand_Holo_FL_F: Aegis_arifle_M4A1_sand_F
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
			item = saber_light_sand_lxWS;
		};
	};
};
// M4A1 5.56 mm (Sand) + ACOG + Saber Light
class Atlas_arifle_M4A1_Sand_ACOG_FL_F: Aegis_arifle_M4A1_sand_F
{
	author = $STR_A3_A_AveryTheKitty;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = Aegis_optic_ACOG_sand;
		};
		class LinkedItemsAcc
		{
			slot = PointerSlot;
			item = saber_light_sand_lxWS;
		};
	};
};
// M4A1 GL 5.56 mm (Sand) + Holosight + Saber Light
class Atlas_arifle_M4A1_GL_Sand_Holo_FL_F: Aegis_arifle_M4A1_GL_sand_F
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
			item = saber_light_sand_lxWS;
		};
	};
};
// M4A1 GL 5.56 mm (Sand) + ACOG + Saber Light
class Atlas_arifle_M4A1_GL_Sand_ACOG_FL_F: Aegis_arifle_M4A1_GL_sand_F
{
	author = $STR_A3_A_AveryTheKitty;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = Aegis_optic_ACOG_sand;
		};
		class LinkedItemsAcc
		{
			slot = PointerSlot;
			item = saber_light_sand_lxWS;
		};
	};
};
// LIM-85 5.56 mm (Sand) + Holo + Saber Light
class Atlas_lmg_03_snd_Holo_FL_F: lmg_03_snd_F
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
			item = saber_light_sand_lxWS;
		};
	};
};
// M4A1 FG 5.56 mm + Flashlight
class Atlas_arifle_M4A1_Grip_FL_F: Aegis_arifle_M4A1_Grip_F
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
// M4A1 SBR 5.56 mm + Flashlight
class Atlas_arifle_M4A1_Short_FL_F: Aegis_arifle_M4A1_Short_F
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
// M4A1 FG 5.56 mm + RDS (High) + Flashlight
class Atlas_arifle_M4A1_Grip_ROS_FL_F: Aegis_arifle_M4A1_Grip_F
{
	author = $STR_A3_A_AveryTheKitty;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = optic_r1_high_lxWS;
		};
		class LinkedItemsAcc
		{
			slot = PointerSlot;
			item = acc_flashlight;
		};
	};
};
// M4A1 FG 5.56 mm + ACOG + Flashlight
class Atlas_arifle_M4A1_Grip_ACOG_FL_F: Aegis_arifle_M4A1_Grip_F
{
	author = $STR_A3_A_AveryTheKitty;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = Aegis_optic_ACOG;
		};
		class LinkedItemsAcc
		{
			slot = PointerSlot;
			item = acc_flashlight;
		};
	};
};
// M4A1 GL 5.56 mm + RDS (High) + Flashlight
class Atlas_arifle_M4A1_GL_ROS_FL_F: Aegis_arifle_M4A1_GL_F
{
	author = $STR_A3_A_AveryTheKitty;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = optic_r1_high_lxWS;
		};
		class LinkedItemsAcc
		{
			slot = PointerSlot;
			item = acc_flashlight;
		};
	};
};
// M4A1 GL 5.56 mm + ACOG + Flashlight
class Atlas_arifle_M4A1_GL_ACOG_FL_F: Aegis_arifle_M4A1_GL_F
{
	author = $STR_A3_A_AveryTheKitty;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = Aegis_optic_ACOG;
		};
		class LinkedItemsAcc
		{
			slot = PointerSlot;
			item = acc_flashlight;
		};
	};
};
// Mk14 7.62 mm (Black) + Kahlia (Black) + Bipod (Black) [AAF]
class Atlas_srifle_DMR_06_black_khs_bipod_F: srifle_DMR_06_black_F
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
			item = bipod_03_F_blk;
		};
	};
};

/* JSOC Weapons */
// MX 6.5 mm + RCO (Sand) + Dual Mode Laser Module (Sand) + Suppressor (Sand)
class Atlas_arifle_MX_HAMR_IR_Snds_F: arifle_MX_F
{
	author = $STR_A3_A_Ravenholme;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = optic_HAMR_sand_LxWS;
		};
		class LinkedItemsAcc
		{
			slot = PointerSlot;
			item = Aegis_acc_pointer_DM_Sand;
		};
		class LinkedItemsMuzzle
		{
			slot = MuzzleSlot;
			item = muzzle_snds_H_snd_F;
		};
	};
};

// MXC 6.5 mm + Holosight + Dual Mode Laser Module (Sand) + Suppressor (Sand)
class Atlas_arifle_MXC_Holo_IR_Snds_F: arifle_MXC_F
{
	author = $STR_A3_A_Ravenholme;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = optic_Holosight;
		};
		class LinkedItemsAcc
		{
			slot = PointerSlot;
			item = Aegis_acc_pointer_DM_Sand;
		};
		class LinkedItemsMuzzle
		{
			slot = MuzzleSlot;
			item = muzzle_snds_H_snd_F;
		};
	};
};

// MX 3GL 6.5 mm + RCO (Sand) + Dual Mode Laser Module (Sand) + Suppressor (Sand)
class Atlas_arifle_MX_GL_HAMR_IR_Snds_F: arifle_MX_GL_F
{
	author = $STR_A3_A_Ravenholme;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = optic_HAMR_sand_LxWS;
		};
		class LinkedItemsAcc
		{
			slot = PointerSlot;
			item = Aegis_acc_pointer_DM_Sand;
		};
		class LinkedItemsMuzzle
		{
			slot = MuzzleSlot;
			item = muzzle_snds_H_snd_F;
		};
	};
};

// MX SW 6.5 mm + RCO (Sand) + Dual Mode Laser Module (Sand) + Suppressor (Sand) + Bipod [NATO]
class Atlas_arifle_MX_SW_HAMR_IR_Snds_BI_F: arifle_MX_SW_F
{
	author = $STR_A3_A_Ravenholme;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = optic_HAMR_sand_LxWS;
		};
		class LinkedItemsAcc
		{
			slot = PointerSlot;
			item = Aegis_acc_pointer_DM_Sand;
		};
		class LinkedItemsMuzzle
		{
			slot = MuzzleSlot;
			item = muzzle_snds_H_snd_F;
		};
		class LinkedItemsUnder
		{
			slot = UnderBarrelSlot;
			item = bipod_01_F_snd;
		};
	};
};


// MXM 6.5 mm + MOS + Dual Mode Laser Module (Sand) + Suppressor (Sand) + Bipod [NATO]
class Atlas_arifle_MXM_SOS_IR_Snds_BI_F: arifle_MXM_F
{
	author = $STR_A3_A_Ravenholme;
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
			item = Aegis_acc_pointer_DM_Sand;
		};
		class LinkedItemsMuzzle
		{
			slot = MuzzleSlot;
			item = muzzle_snds_H_snd_F;
		};
		class LinkedItemsUnder
		{
			slot = UnderBarrelSlot;
			item = bipod_01_F_snd;
		};
	};
};

// M110 7.62 mm (Sand) + MOS (Sand) + Dual Mode Laser Pointer (Sand) + Bipod [NATO]
class Atlas_arifle_SR25_MR_Snd_MOS_IR_Snds_BI_F: Aegis_arifle_SR25_MR_Snd_F
{
	author = $STR_A3_A_Ravenholme;
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
			item = Aegis_acc_pointer_DM_Sand;
		};
		class LinkedItemsMuzzle
		{
			slot = MuzzleSlot;
			item = Aegis_muzzle_snds_sr25_snd;
		};
		class LinkedItemsUnder
		{
			slot = UnderBarrelSlot;
			item = bipod_01_F_snd;
		};
	};
};
// MX 6.5 mm (Khaki) + RCO (Khaki) + Dual Mode Laser Module (Khaki) + Suppressor (Khaki)
class Atlas_arifle_MX_khk_HAMR_IR_Snds_F: arifle_MX_khk_F
{
	author = $STR_A3_A_Ravenholme;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = optic_HAMR_khk_F;
		};
		class LinkedItemsAcc
		{
			slot = PointerSlot;
			item = Aegis_acc_pointer_DM_Khaki;
		};
		class LinkedItemsMuzzle
		{
			slot = MuzzleSlot;
			item = muzzle_snds_H_khk_F;
		};
	};
};

// MXC 6.5 mm (Khaki) + Holosight (Khaki) + Dual Mode Laser Module (khaki) + Suppressor (Khaki)
class Atlas_arifle_MXC_khk_Holo_IR_Snds_F: arifle_MXC_khk_F
{
	author = $STR_A3_A_Ravenholme;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = optic_Holosight_khk_F;
		};
		class LinkedItemsAcc
		{
			slot = PointerSlot;
			item = Aegis_acc_pointer_DM_Khaki;
		};
		class LinkedItemsMuzzle
		{
			slot = MuzzleSlot;
			item = muzzle_snds_H_khk_F;
		};
	};
};

// MX 3GL 6.5 mm (Khaki) + RCO (Khaki) + Dual Mode Laser Module (Khaki) + Suppressor (Khaki)
class Atlas_arifle_MX_GL_khk_HAMR_IR_Snds_F: arifle_MX_GL_khk_F
{
	author = $STR_A3_A_Ravenholme;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = optic_HAMR_khk_F;
		};
		class LinkedItemsAcc
		{
			slot = PointerSlot;
			item = Aegis_acc_pointer_DM_Khaki;
		};
		class LinkedItemsMuzzle
		{
			slot = MuzzleSlot;
			item = muzzle_snds_H_khk_F;
		};
	};
};

// MX SW 6.5 mm (Khaki) + RCO (Khaki) + Dual Mode Laser Module (Khaki) + Suppressor (Khaki) + Bipod [NATO]
class Atlas_arifle_MX_SW_khk_HAMR_IR_Snds_BI_F: arifle_MX_SW_khk_F
{
	author = $STR_A3_A_Ravenholme;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = optic_HAMR_khk_F;
		};
		class LinkedItemsAcc
		{
			slot = PointerSlot;
			item = Aegis_acc_pointer_DM_Khaki;
		};
		class LinkedItemsMuzzle
		{
			slot = MuzzleSlot;
			item = muzzle_snds_H_khk_F;
		};
		class LinkedItemsUnder
		{
			slot = UnderBarrelSlot;
			item = bipod_01_F_khk;
		};
	};
};


// MXM 6.5 mm (Khaki) + MOS (Khaki) + Dual Mode Laser Module (Khaki) + Suppressor (Khaki) + Bipod [NATO]
class Atlas_arifle_MXM_khk_SOS_IR_Snds_BI_F: arifle_MXM_khk_F
{
	author = $STR_A3_A_Ravenholme;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = optic_SOS_khk_F;
		};
		class LinkedItemsAcc
		{
			slot = PointerSlot;
			item = Aegis_acc_pointer_DM_Khaki;
		};
		class LinkedItemsMuzzle
		{
			slot = MuzzleSlot;
			item = muzzle_snds_H_khk_F;
		};
		class LinkedItemsUnder
		{
			slot = UnderBarrelSlot;
			item = bipod_01_F_khk;
		};
	};
};

// M110 7.62 mm (Khaki) + MOS (Khaki) + Dual Mode Laser Pointer (Khaki) + Bipod [NATO]
class Atlas_arifle_SR25_MR_khk_SOS_IR_Snds_BI_F: Aegis_arifle_SR25_MR_khk_F
{
	author = $STR_A3_A_Ravenholme;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = optic_SOS_khk_F;
		};
		class LinkedItemsAcc
		{
			slot = PointerSlot;
			item = Aegis_acc_pointer_DM_Khaki;
		};
		class LinkedItemsMuzzle
		{
			slot = MuzzleSlot;
			item = Aegis_muzzle_snds_sr25_khk;
		};
		class LinkedItemsUnder
		{
			slot = UnderBarrelSlot;
			item = bipod_01_F_khk;
		};
	};
};
// MX 6.5 mm (Black) + RCO + Dual Mode Laser Module + Suppressor
class Atlas_arifle_MX_blk_HAMR_IR_Snds_F: arifle_MX_black_F
{
	author = $STR_A3_A_Ravenholme;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = optic_HAMR;
		};
		class LinkedItemsAcc
		{
			slot = PointerSlot;
			item = Aegis_acc_pointer_DM;
		};
		class LinkedItemsMuzzle
		{
			slot = MuzzleSlot;
			item = muzzle_snds_H;
		};
	};
};

// MXC 6.5 mm (Black) + Holosight (Black) + Dual Mode Laser Module + Suppressor
class Atlas_arifle_MXC_blk_Holo_IR_Snds_F: arifle_MXC_black_F
{
	author = $STR_A3_A_Ravenholme;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = optic_Holosight_blk_F;
		};
		class LinkedItemsAcc
		{
			slot = PointerSlot;
			item = Aegis_acc_pointer_DM;
		};
		class LinkedItemsMuzzle
		{
			slot = MuzzleSlot;
			item = muzzle_snds_H;
		};
	};
};

// MX 3GL 6.5 mm (Black) + RCO + Dual Mode Laser Module + Suppressor
class Atlas_arifle_MX_GL_blk_HAMR_IR_Snds_F: arifle_MX_GL_black_F
{
	author = $STR_A3_A_Ravenholme;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = optic_HAMR;
		};
		class LinkedItemsAcc
		{
			slot = PointerSlot;
			item = Aegis_acc_pointer_DM;
		};
		class LinkedItemsMuzzle
		{
			slot = MuzzleSlot;
			item = muzzle_snds_H;
		};
	};
};

// MX SW 6.5 mm (Black) + RCO + Dual Mode Laser Module + Suppressor + Bipod [NATO]
class Atlas_arifle_MX_SW_blk_HAMR_IR_Snds_BI_F: arifle_MX_SW_black_F
{
	author = $STR_A3_A_Ravenholme;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = optic_HAMR;
		};
		class LinkedItemsAcc
		{
			slot = PointerSlot;
			item = Aegis_acc_pointer_DM;
		};
		class LinkedItemsMuzzle
		{
			slot = MuzzleSlot;
			item = muzzle_snds_H;
		};
		class LinkedItemsUnder
		{
			slot = UnderBarrelSlot;
			item = bipod_01_F_blk;
		};
	};
};


// MXM 6.5 mm (Black) + MOS + Dual Mode Laser Module + Suppressor + Bipod [NATO]
class Atlas_arifle_MXM_blk_SOS_IR_Snds_BI_F: arifle_MXM_black_F
{
	author = $STR_A3_A_Ravenholme;
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
			item = Aegis_acc_pointer_DM;
		};
		class LinkedItemsMuzzle
		{
			slot = MuzzleSlot;
			item = muzzle_snds_H;
		};
		class LinkedItemsUnder
		{
			slot = UnderBarrelSlot;
			item = bipod_01_F_blk;
		};
	};
};

// M110 7.62 mm + MOS + Dual Mode Laser Pointer (Black) + Suppressor + Bipod [NATO]
class Atlas_arifle_SR25_MR_SOS_IR_Snds_BI_F: Aegis_arifle_SR25_MR_blk_F
{
	author = $STR_A3_A_Ravenholme;
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
			item = Aegis_acc_pointer_DM;
		};
		class LinkedItemsMuzzle
		{
			slot = MuzzleSlot;
			item = Aegis_muzzle_snds_sr25_blk;
		};
		class LinkedItemsUnder
		{
			slot = UnderBarrelSlot;
			item = bipod_01_F_blk;
		};
	};
};