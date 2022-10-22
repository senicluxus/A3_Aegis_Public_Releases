class CfgVehicles
{
    /* Definitions */
    #include "\A3_Aegis\macros_itemHolders.hpp"

    /* Bases */
	class Item_Base_F;

    /* Items */
	class Item_B_UavTerminal: Item_Base_F
	{
		displayName = "UAV Terminal [BLUFOR]";
	};
	class Item_O_UavTerminal: Item_B_UavTerminal
	{
		displayName = "UAV Terminal [OPFOR]";
	};
	class Item_I_UavTerminal: Item_B_UavTerminal
	{
		displayName = "UAV Terminal [Independent]";
	};
	ITEM_HOLDER(ItemSmartPhone,$STR_A3_A_CfgWeapons_ItemSmartPhone0);

    /* Deprecated */
    DEPRECATED_CLASS(Item_I_E_UavTerminal,Item_Base_F);
    DEPRECATED_CLASS(Item_O_R_UavTerminal,Item_Base_F);
    DEPRECATED_CLASS(Item_B_ION_UavTerminal,Item_Base_F);
};