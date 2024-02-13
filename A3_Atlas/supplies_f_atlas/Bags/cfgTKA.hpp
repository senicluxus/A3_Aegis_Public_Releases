class B_Carryall_semiarid_Ammo_F: B_Carryall_semiarid
{
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	class TransportMagazines
	{
		mag_xx(30Rnd_556x45_stanag_sand_green,8);
		mag_xx(20Rnd_762x51_Mag,4);
		mag_xx(200rnd_556x45_box_f,2);
	};
};
class B_FieldPack_semiarid_Medic_F: B_FieldPack_semiarid
{
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	class TransportItems
	{
		item_xx(Medikit,1);
		item_xx(FirstAidKit,5);
	};
};
class B_FieldPack_semiarid_Eng_F: B_FieldPack_semiarid
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
		item_xx(MineDetector,1);
	};
};
class B_FieldPack_semiarid_AA_F: B_FieldPack_semiarid
{
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	class TransportMagazines
	{
		mag_xx(Titan_AA,1);
	};
};
class B_FieldPack_semiarid_AT_F: B_FieldPack_semiarid
{
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	class TransportMagazines
	{
		mag_xx(Titan_AT,1);
	};
};
class B_FieldPack_semiarid_LAT_F: B_FieldPack_semiarid
{
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	class TransportMagazines
	{
		mag_xx(RPG32_F,1);
		mag_xx(RPG32_HE_F,1);
	};
};
class B_FieldPack_semiarid_LAT_conscript: B_FieldPack_semiarid
{
	author = $STR_A3_A_Heliotrope;
	scope = protected;
	class TransportMagazines
	{
		mag_xx(RPG7_F,3);
	};
};