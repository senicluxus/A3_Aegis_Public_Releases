class CfgVehicles
{
	/* Definitions */
    #include "\A3_Aegis\macros_supportBags.hpp"
	
	/* Inheritance Tree */
	class StaticWeapon;
	class StaticMGWeapon: StaticWeapon
	{
		class Turrets;
	};
	class Bag_Base;
	class Weapon_Bag_Base: Bag_Base
	{
		class assembleInfo;
	};

    /* Bases */
	class HMG_02_base_F: StaticMGWeapon
	{
		class Turrets: Turrets
		{
			class MainTurret;
		};
		class AnimationSources
		{
			class Hide_Rail;
		};
	};
	class HMG_02_high_base_F: HMG_02_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret{};
		};
	};

	/* Factions */
    #include "cfgBLUFOR.hpp"    // US & BAF
    #include "cfgOPFOR.hpp"     // IAF & Argana
	class I_G_HMG_02_support_F: B_HMG_02_support_F
	{
		hiddenSelectionsTextures[] = {"\A3\Weapons_F\Ammoboxes\Bags\Data\backpack_small_blk_CO.paa"};
		picture = "\A3\Weapons_F\Ammoboxes\Bags\data\UI\icon_B_C_Small_blk.paa";
	};
	class I_G_HMG_02_support_high_F: B_HMG_02_support_high_F
	{
		hiddenSelectionsTextures[] = {"\A3\Weapons_F\Ammoboxes\Bags\Data\backpack_small_blk_CO.paa"};
		picture = "\A3\Weapons_F\Ammoboxes\Bags\data\UI\icon_B_C_Small_blk.paa";
	};
	class I_G_HMG_02_weapon_F: B_HMG_02_weapon_F
	{
		hiddenSelectionsTextures[] = {"\A3\Weapons_F\Ammoboxes\Bags\Data\backpack_small_blk_CO.paa"};
		picture = "\A3\Weapons_F\Ammoboxes\Bags\data\UI\icon_B_C_Small_blk.paa";
	};
	class I_G_HMG_02_high_weapon_F: B_HMG_02_high_weapon_F
	{
		hiddenSelectionsTextures[] = {"\A3\Weapons_F\Ammoboxes\Bags\Data\backpack_small_blk_CO.paa"};
		picture = "\A3\Weapons_F\Ammoboxes\Bags\data\UI\icon_B_C_Small_blk.paa";
	};
	class I_E_HMG_02_support_F: B_HMG_02_support_F
	{
		hiddenSelectionsTextures[] = {"\A3_Aegis\Supplies_F_Aegis\Bags\Data\backpack_small_eaf_CO.paa"};
		picture = "\A3_Aegis\Supplies_F_Aegis\Bags\Data\UI\icon_B_TacticalPack_eaf_F_CA.paa";
	};
	class I_E_HMG_02_support_high_F: B_HMG_02_support_high_F
	{
		hiddenSelectionsTextures[] = {"\A3_Aegis\Supplies_F_Aegis\Bags\Data\backpack_small_eaf_CO.paa"};
		picture = "\A3_Aegis\Supplies_F_Aegis\Bags\Data\UI\icon_B_TacticalPack_eaf_F_CA.paa";
	};
	class I_E_HMG_02_weapon_F: B_HMG_02_weapon_F
	{
		hiddenSelectionsTextures[] = {"\A3_Aegis\Supplies_F_Aegis\Bags\Data\backpack_small_eaf_CO.paa"};
		picture = "\A3_Aegis\Supplies_F_Aegis\Bags\Data\UI\icon_B_TacticalPack_eaf_F_CA.paa";
	};
	class I_E_HMG_02_high_weapon_F: B_HMG_02_high_weapon_F
	{
		hiddenSelectionsTextures[] = {"\A3_Aegis\Supplies_F_Aegis\Bags\Data\backpack_small_eaf_CO.paa"};
		picture = "\A3_Aegis\Supplies_F_Aegis\Bags\Data\UI\icon_B_TacticalPack_eaf_F_CA.paa";
	};
};