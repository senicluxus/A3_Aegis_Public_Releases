// UNO Sahrani
class B_Carryall_cbr_IUAmmo_F: B_Carryall_cbr
{
	author = "BranFlakes";
	scope = protected;
	class TransportMagazines
	{
		mag_xx(30Rnd_65x39_caseless_msbs_mag,6);
		mag_xx(200Rnd_65x39_cased_box_red,2);
		mag_xx(NLAW_F,1);
		mag_xx(HandGrenade,2);
		mag_xx(MiniGrenade,2);
		mag_xx(1Rnd_HE_Grenade_shell,4);
	};
	class TransportItems
	{
		item_xx(FirstAidKit,4);
	};
};
class B_AssaultPack_cbr_IUMedic_F: B_AssaultPack_cbr
{
	author = "BranFlakes";
	scope = protected;
	class TransportItems
	{
		item_xx(Medikit,1);
		item_xx(FirstAidKit,10);
	};
};
class B_Carryall_cbr_IUEng_F: B_Carryall_cbr
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
class B_AssaultPack_cbr_ILAT_F: B_AssaultPack_cbr
{
	author = "BranFlakes";
	scope = protected;
	class TransportMagazines
	{
		mag_xx(NLAW_F,1);
	};
};
// UNO Chernarussian Defence Force
class B_Carryall_green_IUAmmo_F: B_Carryall_green_F
{
	author = "Ravenholme";
	scope = protected;
	class TransportMagazines
	{
		mag_xx(30Rnd_65x39_caseless_msbs_mag,8);
		mag_xx(200Rnd_65x39_cased_Box_Red,2);
		mag_xx(RPG32_F,1);
		mag_xx(RPG32_HE_F,1);
		mag_xx(HandGrenade_Guer,4);
		mag_xx(1Rnd_HE_Grenade_shell,4);
	};
	class TransportItems
	{
		item_xx(FirstAidKit,4);
	};
};
class B_AssaultPack_rgr_IUMedic_F: B_AssaultPack_rgr
{
	author = "Ravenholme";
	scope = protected;
	class TransportItems
	{
		item_xx(Medikit,1);
		item_xx(FirstAidKit,10);
	};
};
class B_Carryall_green_IUEng_F: B_Carryall_green_F
{
	author = "Ravenholme";
	scope = protected;
	class TransportMagazines
	{
		mag_xx(HandGrenade_Guer,1);
		mag_xx(DemoCharge_Remote_Mag,1);
	};
	class TransportItems
	{
		item_xx(ToolKit,1);
		item_xx(MineDetector,1);
	};
};
class B_AssaultPack_rgr_ILAT_F: B_AssaultPack_rgr
{
	author = "Ravenholme";
	scope = protected;
	class TransportMagazines
	{
		mag_xx(RPG32_F,2);
	};
};