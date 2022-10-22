class B_FieldPack_cbr_Medic_F: B_FieldPack_cbr
{
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	class TransportMagazines
	{
		mag_xx(30Rnd_762x39_Mag_F,3);
	};
	class TransportItems
	{
		item_xx(Medikit,1);
		item_xx(FirstAidKit,4);
	};
};
class B_FieldPack_cbr_RPG_F: B_FieldPack_cbr
{
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	class TransportMagazines
	{
		mag_xx(RPG7_F,3);
	};
};
class B_Kitbag_tan_AR_F: B_Kitbag_tan
{
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	class TransportMagazines
	{
		mag_xx(75Rnd_762x39_Mag_F,5);
	};
};
class B_Kitbag_tan_exp_F: B_Kitbag_tan
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