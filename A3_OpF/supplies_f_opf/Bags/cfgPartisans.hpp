class Opf_B_patrolBackpack_grn_Partisan_Ammo_F: Aegis_B_patrolBackpack_grn_F
{
    author = $STR_A3_A_Ravenholme;
	scope = protected;
	class TransportMagazines
	{
		mag_xx(30Rnd_556x45_stanag,6);
		mag_xx(Atlas_150Rnd_762x51_Box_Yellow,1);
		mag_xx(MRAWS_HEAT55_F,1);
		mag_xx(HandGrenade,2);
		mag_xx(MiniGrenade,2);
		mag_xx(1Rnd_HE_Grenade_shell,6);
		mag_xx(20rnd_762x51_mag,2);
	};
    class TransportItems
	{
		item_xx(FirstAidKit,4);
	};
};
class B_Carryall_green_Partisan_Eng_F: B_Carryall_green_F
{
	author = $STR_A3_A_Ravenholme;
	scope = protected;
	class TransportMagazines
	{
		mag_xx(DemoCharge_Remote_Mag,2);
        mag_xx(SatchelCharge_Remote_Mag,1);
	};
	class TransportItems
	{
		item_xx(ToolKit,1);
		item_xx(MineDetector,1);
	};
};
class B_Carryall_green_Partisan_Exp_F: B_Carryall_green_F
{
	author = $STR_A3_A_Ravenholme;
	scope = protected;
	class TransportMagazines
	{
		mag_xx(DemoCharge_Remote_Mag,1);
        mag_xx(APERSBoundingMine_Range_Mag,2);
        mag_xx(SLAMDirectionalMine_Wire_Mag,1);
	};
	class TransportItems
	{
		item_xx(ToolKit,1);
		item_xx(MineDetector,1);
	};
};
class B_FieldPack_green_Partisan_Medic_F: B_FieldPack_green_F
{
    author = $STR_A3_A_Ravenholme;
	scope = protected;
	class TransportItems
	{
		item_xx(Medikit,1);
		item_xx(FirstAidKit,10);
	};
};
class B_FieldPack_green_F_Partisan_AT_F: B_FieldPack_green_F
{
    author = $STR_A3_A_Ravenholme;
	scope = protected;
    class TransportMagazines
	{
		mag_xx(MRAWS_HEAT55_F,3);
	};
};
class B_FieldPack_green_F_Partisan_LAT_F: B_FieldPack_green_F
{
    author = $STR_A3_A_Ravenholme;
	scope = protected;
    class TransportMagazines
	{
		mag_xx(RPG7_F,3);
	};
};
class Opf_B_AssaultPack_flecktarn_Partisan_HG_F: B_AssaultPack_flecktarn
{
    author = $STR_A3_A_Ravenholme;
	scope = protected;
    class TransportMagazines
	{
		mag_xx(Aegis_200Rnd_762x51_MAG_Yellow_F,1);
        mag_xx(Aegis_200Rnd_762x51_MAG_Yellow_Tracer_F,1);
	};
};