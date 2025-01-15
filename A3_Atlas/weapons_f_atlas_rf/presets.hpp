// Hades H6 (Digital) 5.56 mm + AMS + IR Laser Pointer + Bipod [AAF] (Black)
class Atlas_srifle_h6_digi_AMS_LP_BI_F: srifle_h6_digi_rf
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
			item = acc_pointer_IR;
		};
		class LinkedItemsUnder
		{
			slot = UnderBarrelSlot;
			item = bipod_03_F_blk;
		};
	};
};