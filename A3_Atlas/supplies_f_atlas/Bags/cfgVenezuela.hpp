class B_FieldPack_owcamo_OVZLAT_F: B_FieldPack_owcamo
{
	author = $STR_A3_A_BranFlakes;
	scope = protected;
	class TransportMagazines
	{
		mag_xx(RPG7_F,3);
	};
};
class B_Carryall_owcamo_OVZAmmo_F: B_Carryall_owcamo
{
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	class TransportMagazines
	{
		mag_xx(30Rnd_580x42_Mag_F,6);
		mag_xx(200Rnd_556x45_Box_Red_F,2);
		mag_xx(RPG7_F,1);
		mag_xx(HandGrenade,2);
		mag_xx(MiniGrenade,2);
		mag_xx(1Rnd_HE_Grenade_shell,6);
		mag_xx(20Rnd_762x51_Mag,2);
	};
	class TransportItems
	{
		item_xx(FirstAidKit,4);
	};
};
class B_FieldPack_owcamo_OVZAAR_F: B_FieldPack_owcamo
{
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	class TransportMagazines
	{
		mag_xx(200Rnd_556x45_Box_Red_F,3);
		mag_xx(200Rnd_556x45_Box_Tracer_F,1);
	};
	class TransportItems
	{
		item_xx(optic_tws_mg,1);
		item_xx(muzzle_snds_B,1);
	};
};