/* AAF */
class I_AssaultPack_dgtl_Medic: B_AssaultPack_dgtl
{
    author = $STR_A3_A_Ravenholme;
	scope = protected;
	class TransportItems
	{
		item_xx(FirstAidKit,10);
		item_xx(Medikit,1);
	};
};
class I_AssaultPack_dgtl_Repair: B_AssaultPack_dgtl
{
    author = $STR_A3_A_Ravenholme;
	scope = protected;
	class TransportItems
	{
		item_xx(ToolKit,1);
	};
};
class Aegis_I_AssaultPack_dgtl_HG: B_AssaultPack_dgtl
{
    author = $STR_A3_A_Ravenholme;
	scope = protected;
    class TransportMagazines
	{
		mag_xx(Aegis_200Rnd_762x51_MAG_Yellow_F,1);
        mag_xx(Aegis_200Rnd_762x51_MAG_Yellow_Tracer_F,1);
	};
};
class Aegis_I_Kitbag_dgtl_ReconEXP: B_kitbag_dgtl
{
	author = $STR_A3_A_Ravenholme;
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