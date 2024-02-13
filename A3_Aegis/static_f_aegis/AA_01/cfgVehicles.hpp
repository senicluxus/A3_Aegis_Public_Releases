class CfgVehicles
{
    /* Definitions */
    #include "\A3_Aegis\macros_supportBags.hpp"
    
	/* Inheritance Tree */
    class StaticMGWeapon;
	class Bag_Base;
	class Weapon_Bag_Base: Bag_Base
	{
		class assembleInfo;
	};

    /* Bases */
    class AA_01_base_F: StaticMGWeapon
    {
	    displayName = $STR_A3_A_CfgVehicles_B_static_AA_F0;
    };

    /* Factions */
    #include "cfgBLUFOR.hpp"    // US & BAF
    #include "cfgOPFOR.hpp"     // IAF, China & Argana
    class I_static_AA_F: AA_01_base_F
    {
	    displayName = $STR_A3_A_CfgVehicles_B_static_AA_F0;
    };
	class I_AA_01_weapon_F: Weapon_Bag_Base
	{
		class assembleInfo: assembleInfo
		{
			base[] = {SUPPORT_BAGS_HMG_01};
		};
	};
	class I_E_Static_AA_F: I_static_AA_F
	{
	    displayName = $STR_A3_A_CfgVehicles_B_static_AA_F0;
	};
	class I_E_AA_01_weapon_F: I_AA_01_weapon_F
	{
		hiddenSelectionsTextures[] = {"\A3_Aegis\Supplies_F_Aegis\Bags\Data\backpack_small_eaf_CO.paa"};
		picture = "\A3_Aegis\Supplies_F_Aegis\Bags\Data\UI\icon_B_TacticalPack_eaf_F_CA.paa";
	};
    #include "cfgRUS.hpp"       // Russia
	#include "cfgEAF.hpp"		// LDF Blufor
};