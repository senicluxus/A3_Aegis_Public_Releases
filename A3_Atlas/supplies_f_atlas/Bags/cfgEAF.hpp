// LDF Reservist backpacks
class B_FieldPack_green_F;
class Atlas_B_FieldPack_Green_ResLAT_F: B_FieldPack_green_F
{
	author = $STR_A3_A_Ravenholme;
	scope = protected;
	class TransportMagazines
	{
		mag_xx(MRAWS_Heat55_F,2);
        mag_xx(MRAWS_HE_F,1);
	};
};
class Atlas_B_FieldPack_Green_ResMedic_F: B_FieldPack_green_F
{
	author = $STR_A3_A_Ravenholme;
	scope = protected;
	class TransportItems
	{
		item_xx(Medikit,1);
		item_xx(FirstAidKit,5);
	};
};
class Atlas_B_FieldPack_Green_ResEng_F: B_FieldPack_green_F
{
	author = $STR_A3_A_Ravenholme;
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
class Atlas_B_Carryall_green_ResAmmo_F: B_Carryall_green_F
{
	author = $STR_A3_A_Ravenholme;
	scope = protected;
	class TransportMagazines
	{
		mag_xx(30rnd_545x39_Steel_Mag_Red_F,6);
		mag_xx(Aegis_60Rnd_545x39_Mag_Green_F,1);
		mag_xx(MRAWS_Heat55_F,1);
		mag_xx(HandGrenade,2);
		mag_xx(1Rnd_HE_Grenade_shell,6);
		mag_xx(200rnd_556x45_box_f,1);
	};
	class TransportItems
	{
		item_xx(FirstAidKit,4);
	};
};