
class B_Carryall_CBREng_F: B_Carryall_cbr
{
	author = "BranFlakes";
	scope = protected;
	class TransportMagazines
	{
		mag_xx(HandGrenade,1);
		mag_xx(DemoCharge_Remote_Mag,1);
	};
	class TransportItems
	{
		item_xx(ToolKit,1);
		item_xx(MineDetector,1);
	};
};
class B_AssaultPack_marar_medic: B_AssaultPack_marar
{
	author = "BranFlakes";
	scope = protected;
	class TransportItems
	{
		item_xx(Medikit,1);
		item_xx(FirstAidKit,10);
	};
};
class B_AssaultPack_marar_lat: B_AssaultPack_marar
{
	author = "BranFlakes";
	scope = protected;
	class TransportMagazines
	{
		mag_xx(MRAWS_HEAT55_F,2);
		mag_xx(MRAWS_HE_F,1);
	};
};
class B_Carryall_CBR_ammo_F: B_Carryall_cbr
{
	author = "BranFlakes";
	scope = protected;
	class TransportMagazines
	{
		mag_xx(30Rnd_556x45_Stanag_red,6);
		mag_xx(200Rnd_556x45_Box_Red_F,2);
		mag_xx(MRAWS_HEAT55_F,1);
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
