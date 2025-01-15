class Atlas_B_Carryall_ardi_Ammo_F: B_Carryall_ardi_F 
{
    author = $STR_A3_A_Ravenholme;
	scope = protected;
	class TransportMagazines
	{
		mag_xx(30Rnd_545x39_Black_Mag_F,6);
		mag_xx(Aegis_45Rnd_545x39_Mag_Green_F,6);
		mag_xx(RPG7_F,2);
		mag_xx(HandGrenade,2);
		mag_xx(MiniGrenade,2);
		mag_xx(1Rnd_HE_Grenade_shell,4);
		mag_xx(Aegis_10Rnd_762x54_SVD_Green_Mag_F,4);
	};
    class TransportItems
	{
		item_xx(FirstAidKit,4);
	};
};
class Atlas_B_Carryall_Ardi_Eng_F: B_Carryall_ardi_F 
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
class Atlas_B_Carryall_Ardi_Exp_F: B_Carryall_ardi_F 
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
class Atlas_B_Carryall_Ardi_AAA_F: B_Carryall_ardi_F 
{
	author = $STR_A3_A_Ravenholme;
	scope = protected;
	class TransportMagazines
	{
		mag_xx(Titan_AA,3);
	};
};
class Atlas_B_FieldPack_Ardi_Medic_F: B_FieldPack_ardi
{
    author = $STR_A3_A_Ravenholme;
	scope = protected;
	class TransportItems
	{
		item_xx(Medikit,1);
		item_xx(FirstAidKit,10);
	};
};
class Atlas_B_FieldPack_Ardi_AA_F: B_FieldPack_ardi
{
    author = $STR_A3_A_Ravenholme;
	scope = protected;
    class TransportMagazines
	{
		mag_xx(Titan_AA,1);
	};
};
class Atlas_B_FieldPack_Ardi_LAT_F: B_FieldPack_ardi
{
    author = $STR_A3_A_Ravenholme;
	scope = protected;
    class TransportMagazines
	{
		mag_xx(RPG7_F,4);
	};
};
class Atlas_B_FieldPack_Ardi_AAR_F: B_FieldPack_ardi
{
    author = $STR_A3_A_Ravenholme;
	scope = protected;
    class TransportMagazines
	{
		mag_xx(Aegis_45Rnd_545x39_Mag_Green_F,8);
	};
};