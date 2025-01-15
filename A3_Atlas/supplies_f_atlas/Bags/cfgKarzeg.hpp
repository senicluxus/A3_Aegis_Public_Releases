class B_PatrolBackpack_KZG_Ammo_F: B_Carryall_kzg_F // Change to PatrolBackPack later
{
    author = $STR_A3_A_Ravenholme;
	scope = protected;
	class TransportMagazines
	{
		mag_xx(30Rnd_556x45_Stanag_red,6);
		mag_xx(200rnd_556x45_box_red_f,1);
		mag_xx(Atlas_DM12_HEAT_F,1);
		mag_xx(HandGrenade,2);
		mag_xx(MiniGrenade,2);
		mag_xx(1Rnd_HE_Grenade_shell,4);
		mag_xx(20rnd_762x51_mag,2);
	};
    class TransportItems
	{
		item_xx(FirstAidKit,4);
	};
};
class B_Carryall_KZG_Eng_F: B_Carryall_kzg_F
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
class B_Carryall_KZG_Exp_F: B_Carryall_kzg_F
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
class B_Carryall_KZG_AAA_F: B_Carryall_kzg_F
{
	author = $STR_A3_A_Ravenholme;
	scope = protected;
	class TransportMagazines
	{
		mag_xx(Titan_AA,3);
	};
};
class B_AssaultPack_KZG_Medic_F: B_AssaultPack_kzg_F
{
    author = $STR_A3_A_Ravenholme;
	scope = protected;
	class TransportItems
	{
		item_xx(Medikit,1);
		item_xx(FirstAidKit,10);
	};
};
class B_AssaultPack_KZG_AA_F: B_AssaultPack_kzg_F
{
    author = $STR_A3_A_Ravenholme;
	scope = protected;
    class TransportMagazines
	{
		mag_xx(Titan_AA,1);
	};
};
class B_AssaultPack_KZG_AT_F: B_AssaultPack_kzg_F
{
    author = $STR_A3_A_Ravenholme;
	scope = protected;
    class TransportMagazines
	{
		mag_xx(Atlas_DM12_HEAT_F,2);
	};
};
class B_AssaultPack_KZG_AAR_F: B_AssaultPack_kzg_F
{
    author = $STR_A3_A_Ravenholme;
	scope = protected;
    class TransportMagazines
	{
		mag_xx(200rnd_556x45_box_red_f,2);
		mag_xx(200rnd_556x45_box_tracer_red_f,1);
	};
};
class B_AssaultPack_KZG_HG_F: B_AssaultPack_kzg_F
{
    author = $STR_A3_A_Ravenholme;
	scope = protected;
    class TransportMagazines
	{
		mag_xx(Aegis_200Rnd_762x51_MAG_Red_F,1);
		mag_xx(Aegis_200Rnd_762x51_MAG_Red_Tracer_F,1);
	};
};