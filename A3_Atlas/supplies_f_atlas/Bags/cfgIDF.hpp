class B_Carryall_oli;
class B_Carryall_oli_IIAmmo_F: B_Carryall_oli
{
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	class TransportMagazines
	{
		mag_xx(30Rnd_556x45_Stanag,8);
		mag_xx(150Rnd_762x51_Box_Yellow,1);
		mag_xx(MRAWS_HEAT_F,1);
		mag_xx(HandGrenade,2);
		mag_xx(MiniGrenade,2);
		mag_xx(1Rnd_HE_Grenade_shell,6);
	};
	class TransportItems
	{
		item_xx(FirstAidKit,4);
	};
};
class B_AssaultPack_khk;
class B_AssaultPack_khk_IILAT_F: B_AssaultPack_khk
{
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	class TransportMagazines
	{
		mag_xx(MRAWS_HEAT_F,2);
		mag_xx(MRAWS_HE_F,1);
	};
};
class B_AssaultPack_khk_IIMedic_F: B_AssaultPack_khk
{
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	class TransportItems
	{
		item_xx(Medikit,1);
		item_xx(FirstAidKit,10);
	};
};
class B_AssaultPack_khk_IIRepair_F: B_AssaultPack_khk
{
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	class TransportItems
	{
		item_xx(ToolKit,1);
	};
};
class B_Kitbag_sgg_IIEng_F: B_Kitbag_sgg
{
	author = $STR_A3_A_AveryTheKitty;
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
class B_Kitbag_sgg_IIExp_F: B_Kitbag_sgg
{
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	class TransportMagazines
	{
		mag_xx(APERSBoundingMine_Range_Mag,3);
		mag_xx(ClaymoreDirectionalMine_Remote_Mag,2);
		mag_xx(SLAMDirectionalMine_Wire_Mag,2);
		mag_xx(DemoCharge_Remote_Mag,1);
	};
	class TransportItems
	{
		item_xx(ToolKit,1);
		item_xx(MineDetector,1);
	};
};
class B_Kitbag_sgg_IIAA_F: B_Kitbag_sgg
{
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	class TransportMagazines
	{
		mag_xx(Titan_AA,2);
	};
};
class B_Kitbag_sgg_IIAT_F: B_Kitbag_sgg
{
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	class TransportMagazines
	{
		mag_xx(Titan_AT,2);
	};
};
class B_ViperHarness_oli_F;
class B_ViperHarness_oli_IIAAR_F: B_ViperHarness_oli_F
{
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	class TransportMagazines
	{
		mag_xx(150Rnd_762x51_Box_Yellow,3);
		mag_xx(150Rnd_762x51_Box_Tracer_Yellow,1);
		mag_xx(HandGrenade,1);
		mag_xx(SmokeShell,1);
	};
	class TransportItems
	{
		item_xx(optic_tws_mg,1);
		item_xx(bipod_03_F_blk,1);
		item_xx(muzzle_snds_B,1);
	};
};
class B_ViperHarness_oli_IIGL_F: B_ViperHarness_oli_F
{
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	class TransportMagazines
	{
		mag_xx(1Rnd_HE_Grenade_shell,6);
		mag_xx(1Rnd_Smoke_Grenade_shell,2);
		mag_xx(HandGrenade,2);
	};
};
class B_ViperLightHarness_oli_F;
class B_ViperLightHarness_oli_IIAR_F: B_ViperLightHarness_oli_F
{
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	class TransportMagazines
	{
		mag_xx(150Rnd_762x51_Box_Yellow,2);
	};
};
class B_AssaultPack_blk;
class B_AssaultPack_blk_IIReconMedic_F: B_AssaultPack_blk
{
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	class TransportMagazines
	{
		SMOKESHELLS_BAG_MEDIC;
	};
	class TransportItems
	{
		item_xx(Medikit,1);
		item_xx(FirstAidKit,5);
	};
};
class B_AssaultPack_blk_IIReconLAT_F: B_AssaultPack_blk
{
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	class TransportMagazines
	{
		mag_xx(MRAWS_HEAT_F,2);
		mag_xx(MRAWS_HE_F,1);
	};
};
class B_Kitbag_blk;
class B_Kitbag_blk_IIReconExp_F: B_Kitbag_blk
{
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	class TransportMagazines
	{
		mag_xx(APERSBoundingMine_Range_Mag,3);
		mag_xx(ClaymoreDirectionalMine_Remote_Mag,2);
		mag_xx(SLAMDirectionalMine_Wire_Mag,2);
		mag_xx(DemoCharge_Remote_Mag,1);
	};
	class TransportItems
	{
		item_xx(ToolKit,1);
		item_xx(MineDetector,1);
	};
};