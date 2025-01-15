/* FIA */
class B_Kitbag_rgr_G_TechSpec: B_Kitbag_rgr
{
    author = $STR_A3_A_Ravenholme;
	scope = protected;
    class TransportItems
	{
		item_xx(ToolKit,1);
	};
};
class B_Kitbag_rgr_G_LAT2: B_Kitbag_rgr
{
    author = $STR_A3_A_Ravenholme;
	scope = protected;
    class TransportMagazines
	{
		mag_xx(RPG7_F,3);
	};
};
class Aegis_B_Kitbag_rgr_G_HG: B_Kitbag_rgr
{
    author = $STR_A3_A_Ravenholme;
	scope = protected;
    class TransportMagazines
	{
		mag_xx(Aegis_200Rnd_762x51_MAG_Red_F,2);
        mag_xx(Aegis_200Rnd_762x51_MAG_Red_Tracer_F,1);
	};
};