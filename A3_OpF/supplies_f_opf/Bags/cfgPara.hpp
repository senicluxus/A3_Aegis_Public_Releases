class B_TacticalPack_blk_Medic: B_TacticalPack_blk
{
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	class TransportItems
	{
		item_xx(Medikit,1);
		item_xx(FirstAidKit,4);
	};
};
class B_TacticalPack_blk_LAT: B_TacticalPack_blk
{
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	class TransportMagazines
	{
		mag_xx(RPG32_F,2);
		mag_xx(RPG32_HE_F,1);
	};
};
class B_TacticalPack_blk_Exp: B_TacticalPack_blk
{
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	class TransportMagazines
	{
		mag_xx(DemoCharge_Remote_Mag,1);
	};
	class TransportItems
	{
		item_xx(ToolKit,1);
	};
};