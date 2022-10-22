class B_FieldPack_green_IRMedic_F: B_FieldPack_green_F
{
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	class TransportItems
	{
		item_xx(Medikit,1);
		item_xx(FirstAidKit,4);
	};
};
class B_FieldPack_green_IRLAT_F: B_FieldPack_green_F
{
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	class TransportMagazines
	{
		mag_xx(RPG32_F,2);
		mag_xx(RPG32_HE_F,2);
	};
};
class B_Carryall_green_IREng_F: B_Carryall_green_F
{
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	class TransportMagazines
	{
		mag_xx(SatchelCharge_Remote_Mag,1);
		mag_xx(DemoCharge_Remote_Mag,2);
	};
	class TransportItems
	{
		item_xx(ToolKit,1);
		item_xx(MineDetector,1);
	};
};