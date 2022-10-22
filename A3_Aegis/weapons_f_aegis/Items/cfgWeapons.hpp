class CfgWeapons
{
    /* Inheritance Tree */
	class ItemCore;
	class InventoryItem_Base_F;
	class InventoryOpticsItem_Base_F: InventoryItem_Base_F
	{
		zeroingSound[] = {"\A3\Sounds_F\arsenal\sfx\shared\zeroing_knob_tick_plastic",db0,1,5};
	};

    /* Bases */
	class UavTerminal_base: ItemCore
	{
		class ItemInfo;
	};

    /* Items */
	class B_UavTerminal: UavTerminal_base
	{
		displayName = "UAV Terminal [BLUFOR]";
	};
	class O_UavTerminal: UavTerminal_base
	{
		displayName = "UAV Terminal [OPFOR]";
	};
	class I_UavTerminal: UavTerminal_base
	{
		displayName = "UAV Terminal [Independent]";
	};
	class ItemSmartPhone: ItemCore
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_ItemSmartPhone0;
		descriptionUse = $STR_A3_CfgWeapons_Default_ItemGPS0;
		simulation = ItemGPS;
		picture = "\A3\Missions_F_Oldman\Props\Data\SmartPhone_CA.paa";
		model = "\A3\Structures_F\Items\Electronics\MobilePhone_smart_F.p3d";
		descriptionShort = $STR_A3_CfgWeapons_ItemGPS1;
		class ItemInfo
		{
			mass = 5;
		};
	};

    /* Deprecated */
    #include "deprecated.hpp"
};