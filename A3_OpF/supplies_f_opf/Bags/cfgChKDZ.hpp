class B_FieldPack_green_OSMedic_F: B_FieldPack_green_F
{
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	class TransportItems
	{
		item_xx(Medikit,1);
		item_xx(FirstAidKit,4);
	};
};
class B_FieldPack_green_OSRPG_AT_F: B_FieldPack_green_F
{
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	class TransportMagazines
	{
		mag_xx(RPG32_F,2);
		mag_xx(RPG32_HE_F,2);
	};
};
class B_FieldPack_green_OSExp_F: B_FieldPack_green_F
{
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	class TransportMagazines
	{
		mag_xx(DemoCharge_Remote_Mag,3);
		mag_xx(SatchelCharge_Remote_Mag,1);
	};
	class TransportItems
	{
		item_xx(ToolKit,1);
	};
};