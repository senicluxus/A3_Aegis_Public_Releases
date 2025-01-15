/* Russia */
class B_FieldPack_taiga_Medic_F: B_FieldPack_taiga_F
{
	class TransportMagazines
	{
		delete _xx_SmokeShellRed;
		delete _xx_SmokeShellBlue;
		delete _xx_SmokeShellOrange;
	};
};
class B_FieldPack_green_Medic_F: B_FieldPack_green_F
{
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	class TransportItems
	{
		item_xx(Medikit,1);
		item_xx(FirstAidKit,10);
	};
};
class B_FieldPack_green_AAR_F: B_FieldPack_green_F
{
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	class TransportMagazines
	{
		mag_xx(Aegis_60Rnd_545x39_Mag_Green_F,1);
		mag_xx(Aegis_60Rnd_545x39_Mag_Tracer_Green_F,1);
	};
	class TransportItems
	{
		item_xx(optic_tws_mg,1);
		item_xx(bipod_02_F_blk,1);
		item_xx(muzzle_snds_545,1);
	};
};
class B_FieldPack_green_AA_F: B_FieldPack_green_F
{
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	class TransportMagazines
	{
		mag_xx(Titan_AA,1);
	};
};
class B_FieldPack_green_AT_F: B_FieldPack_green_F
{
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	class TransportMagazines
	{
		mag_xx(Titan_AT,1);
		mag_xx(Titan_AP,1);
	};
};
class B_FieldPack_green_RPG_AT_F: B_FieldPack_green_F
{
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	class TransportMagazines
	{
		mag_xx(RPG32_F,2);
		mag_xx(RPG32_HE_F,2);
	};
};
class B_FieldPack_green_HAT_F: B_FieldPack_green_F
{
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	class TransportMagazines
	{
		mag_xx(Vorona_HEAT,1);
	};
};
class B_FieldPack_green_Repair_F: B_FieldPack_green_F
{
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	class TransportItems
	{
		item_xx(ToolKit,1);
	};
};
class B_FieldPack_green_ReconMedic_F: B_FieldPack_green_F
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
class B_FieldPack_taiga_AA_F: B_FieldPack_taiga_F
{
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	class TransportMagazines
	{
		mag_xx(Titan_AA,1);
	};
};
class B_FieldPack_taiga_Repair_F: B_FieldPack_taiga_F
{
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	class TransportItems
	{
		item_xx(ToolKit,1);
	};
};
class B_FieldPack_taiga_HAT_F: B_FieldPack_taiga_F
{
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	class TransportMagazines
	{
		mag_xx(Vorona_HEAT,1);
	};
};
class B_FieldPack_taiga_ReconMedic_F: B_FieldPack_taiga_F
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
class B_Carryall_green_Ammo_F: B_Carryall_green_F
{
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	class TransportMagazines
	{
		mag_xx(30Rnd_545x39_AK12_Mag_F,6);
		mag_xx(Aegis_60Rnd_545x39_Mag_Green_F,1);
		mag_xx(RPG32_F,1);
		mag_xx(HandGrenade_East,2);
		mag_xx(MiniGrenade,2);
		mag_xx(1Rnd_HE_Grenade_shell,6);
		mag_xx(10Rnd_93x64_DMR_05_Mag,2);
		mag_xx(10Rnd_762x54_Mag,2);
	};
	class TransportItems
	{
		item_xx(FirstAidKit,4);
	};
};
class B_Carryall_green_AAT_F: B_Carryall_green_F
{
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	class TransportMagazines
	{
		mag_xx(Titan_AT,2);
		mag_xx(Titan_AP,2);
	};
};
class B_Carryall_green_AAA_F: B_Carryall_green_F
{
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	class TransportMagazines
	{
		mag_xx(Titan_AA,3);
	};
};
class B_Carryall_green_AHAT_F: B_Carryall_green_F
{
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	class TransportMagazines
	{
		mag_xx(Vorona_HEAT,2);
	};
};
class B_Carryall_green_eng_F: B_Carryall_green_F
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
class B_Carryall_green_exp_F: B_Carryall_green_F
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
class B_Carryall_green_Mine: B_Carryall_green_F
{
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	class TransportMagazines
	{
		mag_xx(APERSMine_Range_Mag,2);
		mag_xx(APERSBoundingMine_Range_Mag,2);
		mag_xx(APERSMineDispenser_Mag,2);
		mag_xx(APERSTripMine_Wire_Mag,2);
	};
	class TransportItems
	{
		item_xx(ToolKit,1);
		item_xx(MineDetector,1);
	};
};
class B_Carryall_taiga_AAA_F: B_Carryall_taiga_F
{
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	class TransportMagazines
	{
		mag_xx(Titan_AA,3);
	};
};
class B_Carryall_taiga_AHAT_F: B_Carryall_taiga_F
{
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	class TransportMagazines
	{
		mag_xx(Vorona_HEAT,2);
	};
};
class B_Carryall_taiga_eng_F: B_Carryall_taiga_F
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
class B_Carryall_taiga_Mine: B_Carryall_taiga_F
{
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	class TransportMagazines
	{
		mag_xx(APERSMine_Range_Mag,2);
		mag_xx(APERSBoundingMine_Range_Mag,2);
		mag_xx(APERSMineDispenser_Mag,2);
		mag_xx(APERSTripMine_Wire_Mag,2);
	};
	class TransportItems
	{
		item_xx(ToolKit,1);
		item_xx(MineDetector,1);
	};
};

/* Conscript Backpacks */
class Aegis_B_FieldPack_Taiga_ConLAT_F: B_FieldPack_taiga_F
{
	author = $STR_A3_A_Ravenholme;
	scope = protected;
	class TransportMagazines
	{
		mag_xx(RPG7_F,3);
	};
};
class Aegis_B_FieldPack_Green_ConLAT_F: B_FieldPack_green_F
{
	author = $STR_A3_A_Ravenholme;
	scope = protected;
	class TransportMagazines
	{
		mag_xx(RPG7_F,3);
	};
};