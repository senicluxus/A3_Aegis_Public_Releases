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