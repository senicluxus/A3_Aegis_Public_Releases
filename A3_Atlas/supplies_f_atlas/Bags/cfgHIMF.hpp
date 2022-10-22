class B_Carryall_jungle_BHAmmo_F: B_Carryall_jungle
{
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	class TransportMagazines
	{
		mag_xx(30Rnd_65x39_caseless_msbs_mag,6);
		mag_xx(200Rnd_556x45_Box_Red_F,1);
		mag_xx(MRAWS_HEAT55_F,1);
		mag_xx(HandGrenade,2);
		mag_xx(MiniGrenade,2);
		mag_xx(1Rnd_HE_Grenade_shell,6);
		mag_xx(20Rnd_762x51_weathered_Mag,2);
	};
	class TransportItems
	{
		item_xx(FirstAidKit,4);
	};
};
class B_Carryall_jungle_BHEng_F: B_Carryall_jungle
{
	author = $STR_A3_A_AveryTheKitty;
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
class B_TacticalPack_oli;
class B_TacticalPack_oli_BHMedic_F: B_TacticalPack_oli
{
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	class TransportItems
	{
		item_xx(Medikit,1);
		item_xx(FirstAidKit,10);
	};
};
class B_TacticalPack_oli_BHLAT_F: B_TacticalPack_oli
{
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	class TransportMagazines
	{
		mag_xx(MRAWS_HEAT55_F,2);
		mag_xx(MRAWS_HE_F,1);
	};
};