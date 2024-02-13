// TNG-7 7.62 mm (Black) + MRCO + IR Laser Pointer
class Atlas_LMG_Negev_black_MRCO_pointer_F: Atlas_LMG_Negev_black_F
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
// TNG-7 7.62 mm (Black) + MRCO + IR Laser Pointer + Sound Suppressor (7.62 mm)
class Atlas_LMG_Negev_black_MRCO_pointer_snds_F: Atlas_LMG_Negev_black_F
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
// TNG-7 7.62 mm (Black) + ACOG + IR Laser Pointer
class Atlas_LMG_Negev_black_ACOG_pointer_F: Atlas_LMG_Negev_black_F
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
// TNG-7 7.62 mm (Black) + ACOG + DM Laser Pointer + Sound Suppressor (7.62 mm)
class Atlas_LMG_Negev_black_ACOG_pointer_snds_F: Atlas_LMG_Negev_black_F
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
			item = muzzle_snds_B;
		};
	};
};