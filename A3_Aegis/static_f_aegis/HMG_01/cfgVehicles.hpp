class CfgVehicles
{
	/* Definitions */
    #include "\A3_Aegis\macros_supportBags.hpp"
	
	/* Inheritance Tree */
	class All;
	class Strategic;
	class Land;
	class LandVehicle: Land
	{
		class ViewPilot;
		class NewTurret;
	};
	class StaticWeapon: LandVehicle
	{
		class Turrets
		{
			class MainTurret: NewTurret{};
		};
	};
	class StaticMGWeapon: StaticWeapon
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewOptics;
			};
		};
	};
	class Bag_Base;
	class Weapon_Bag_Base: Bag_Base
	{
		class assembleInfo;
	};

    /* Bases */
	class HMG_01_base_F: StaticMGWeapon
	{
        /* Turrets */
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
                /* Optics */
				class ViewOptics: ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.4375;
					minFov = 0.03482;
					maxFov = 0.4375;
					visionMode[] =
					{
						Normal,
						NVG
					};
				};
			};
		};

		class AnimationSources
		{
            class autonomous_unhide;
			class muzzle_source;
			class muzzle_source_rot;
			class ReloadAnim;
			class ReloadMagazine;
			class Revolving;
        };
	};
	class HMG_01_A_base_F: HMG_01_base_F
    {
        /* Animation Sources */
		class AnimationSources: AnimationSources
		{
			class muzzle_source: muzzle_source
			{
				weapon = HMG_static_autonomous;
			};
			class muzzle_source_rot: muzzle_source_rot
			{
				weapon = HMG_static_autonomous;
			};
			class ReloadAnim: ReloadAnim
			{
				weapon = HMG_static_autonomous;
			};
			class ReloadMagazine: ReloadMagazine
			{
				weapon = HMG_static_autonomous;
			};
			class Revolving: Revolving
			{
				weapon = HMG_static_autonomous;
			};
        };

        /* Turrets */
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
                /* Weapons & Ammunition */
				weapons[] = {HMG_static_autonomous};
            };
        };
    };
	class HMG_01_high_base_F: HMG_01_base_F{};

    /* Factions */
	class B_HMG_01_support_F: Bag_Base
	{
		hiddenSelectionsTextures[] = {"\A3_Aegis\Supplies_F_Aegis\Bags\Data\backpack_small_mcamo_CO.paa"};
	};
	class B_HMG_01_support_high_F: B_HMG_01_support_F
	{
		hiddenSelectionsTextures[] = {"\A3_Aegis\Supplies_F_Aegis\Bags\Data\backpack_small_mcamo_CO.paa"};
	};
	class B_HMG_01_weapon_F: Weapon_Bag_Base
	{
		hiddenSelectionsTextures[] = {"\A3_Aegis\Supplies_F_Aegis\Bags\Data\backpack_small_mcamo_CO.paa"};
		class assembleInfo: assembleInfo
		{
			base[] = {SUPPORT_BAGS_HMG_01};
		};
	};
	class B_HMG_01_A_weapon_F: B_HMG_01_weapon_F
	{
		hiddenSelectionsTextures[] = {"\A3_Aegis\Supplies_F_Aegis\Bags\Data\backpack_small_mcamo_CO.paa"};
		class assembleInfo: assembleInfo
		{
			base[] = {SUPPORT_BAGS_HMG_01};
		};
	};
	class B_HMG_01_high_weapon_F: B_HMG_01_weapon_F
	{
		hiddenSelectionsTextures[] = {"\A3_Aegis\Supplies_F_Aegis\Bags\Data\backpack_small_mcamo_CO.paa"};
		class assembleInfo: assembleInfo
		{
			base[] = {SUPPORT_BAGS_HMG_01_HIGH};
		};
	};
	class O_HMG_01_weapon_F: Weapon_Bag_Base
	{
		class assembleInfo: assembleInfo
		{
			base[] = {SUPPORT_BAGS_HMG_01};
		};
	};
	class O_HMG_01_high_weapon_F: O_HMG_01_weapon_F
	{
		class assembleInfo: assembleInfo
		{
			base[] = {SUPPORT_BAGS_HMG_01_HIGH};
		};
	};
	class O_HMG_01_A_weapon_F: O_HMG_01_weapon_F
	{
		class assembleInfo: assembleInfo
		{
			base[] = {SUPPORT_BAGS_HMG_01};
		};
	};
	class I_HMG_01_support_F: B_HMG_01_support_F{};
	class I_HMG_01_support_high_F: B_HMG_01_support_high_F{};
	class I_HMG_01_weapon_F: B_HMG_01_weapon_F{};
	class I_HMG_01_A_weapon_F: B_HMG_01_A_weapon_F{};
	class I_HMG_01_high_weapon_F: B_HMG_01_high_weapon_F{};
    #include "cfgBLUFOR.hpp"    // US & BAF
    #include "cfgOPFOR.hpp"     // IAF, China & Argana
    #include "cfgRUS.hpp"       // Russia
	class I_E_HMG_01_support_F: I_HMG_01_support_F
	{
		hiddenSelectionsTextures[] = {"\A3_Aegis\Supplies_F_Aegis\Bags\Data\backpack_small_eaf_CO.paa"};
		picture = "\A3_Aegis\Supplies_F_Aegis\Bags\Data\UI\icon_B_TacticalPack_eaf_F_CA.paa";
	};
	class I_E_HMG_01_support_high_F: I_HMG_01_support_high_F
	{
		hiddenSelectionsTextures[] = {"\A3_Aegis\Supplies_F_Aegis\Bags\Data\backpack_small_eaf_CO.paa"};
		picture = "\A3_Aegis\Supplies_F_Aegis\Bags\Data\UI\icon_B_TacticalPack_eaf_F_CA.paa";
	};
	class I_E_HMG_01_Weapon_F: I_HMG_01_weapon_F
	{
		hiddenSelectionsTextures[] = {"\A3_Aegis\Supplies_F_Aegis\Bags\Data\backpack_small_eaf_CO.paa"};
		picture = "\A3_Aegis\Supplies_F_Aegis\Bags\Data\UI\icon_B_TacticalPack_eaf_F_CA.paa";
	};
	class I_E_HMG_01_A_Weapon_F: I_HMG_01_A_weapon_F
	{
		hiddenSelectionsTextures[] = {"\A3_Aegis\Supplies_F_Aegis\Bags\Data\backpack_small_eaf_CO.paa"};
		picture = "\A3_Aegis\Supplies_F_Aegis\Bags\Data\UI\icon_B_TacticalPack_eaf_F_CA.paa";
	};
	class I_E_HMG_01_high_Weapon_F: I_HMG_01_high_weapon_F
	{
		hiddenSelectionsTextures[] = {"\A3_Aegis\Supplies_F_Aegis\Bags\Data\backpack_small_eaf_CO.paa"};
		picture = "\A3_Aegis\Supplies_F_Aegis\Bags\Data\UI\icon_B_TacticalPack_eaf_F_CA.paa";
	};
};