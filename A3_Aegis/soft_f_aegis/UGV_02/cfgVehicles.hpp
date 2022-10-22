class CfgVehicles
{
    /* Inheritance Tree */
	class Weapon_Bag_Base;

	/* Bases */
	class UGV_02_Demining_Base_F;
	class UGV_02_Science_Base_F;
	class UGV_02_backpack_base_F: Weapon_Bag_Base
	{
		class assembleInfo;
	};
	class UGV_02_Science_backpack_base_F: UGV_02_backpack_base_F{};
	class UGV_02_Demining_backpack_base_F: UGV_02_backpack_base_F{};

    /* Factions */
    #include "cfgBLUFOR.hpp"    // US & BAF
    #include "cfgOPFOR.hpp"     // IAF & China
	class C_IDAP_UGV_02_Demining_F: UGV_02_Demining_Base_F
	{
		class assembleInfo
		{
			dissasembleTo[] = {C_IDAP_UGV_02_Demining_backpack_F};
		};
	};
    #include "cfgRUS.hpp"       // Russia
    #include "cfgION.hpp"       // ION

    /* Deprecated */
    #include "deprecated.hpp"
};