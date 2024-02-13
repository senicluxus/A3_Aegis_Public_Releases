class CfgVehicles
{
	/* Definitions */
    #include "\A3_Aegis\macros_supportBags.hpp"
	
	/* Inheritance Tree */
	class Land;
	class LandVehicle: Land
	{
		class NewTurret;
	};
	class StaticWeapon: LandVehicle
	{
		class Turrets
		{
			class MainTurret: NewTurret{};
		};
	};
	class StaticGrenadeLauncher: StaticWeapon
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewOptics;
			};
		};
	};
	class GMG_TriPod: StaticGrenadeLauncher
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
	class B_HMG_01_weapon_F: Weapon_Bag_Base{};
	class B_HMG_01_high_weapon_F: B_HMG_01_weapon_F{};

    /* Bases */
	class GMG_01_base_F: GMG_TriPod
	{
		displayName = $STR_A3_A_CfgVehicles_GMG_01_base_F0;
		descriptionShort = $STR_A3_CfgVehicles_GMG_01_Base1;

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
				
				magazines[] = {
					"40Rnd_20mm_g_belt",
					"40Rnd_20mm_g_belt",
					"40Rnd_20mm_g_belt",
					"40Rnd_20mm_g_belt",
					"40Rnd_20mm_ab_g_belt"
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
	class GMG_01_high_base_F: GMG_01_base_F
	{
		displayName = $STR_A3_A_CfgVehicles_GMG_01_high_base_F0;
	};
	class GMG_01_A_base_F: GMG_01_base_F
	{
		displayName = $STR_A3_A_CfgVehicles_GMG_01_A_base_F0;

        /* Turrets */
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
                /* Weapons & Ammunition */
				weapons[] = {GMG_20mm_autonomous};
            };
        };

        /* Animation Sources */
		class AnimationSources: AnimationSources
		{
			class muzzle_source: muzzle_source
			{
				weapon = GMG_20mm_autonomous;
			};
			class muzzle_source_rot: muzzle_source_rot
			{
				weapon = GMG_20mm_autonomous;
			};
			class ReloadAnim: ReloadAnim
			{
				weapon = GMG_20mm_autonomous;
			};
			class ReloadMagazine: ReloadMagazine
			{
				weapon = GMG_20mm_autonomous;
			};
			class Revolving: Revolving
			{
				weapon = GMG_20mm_autonomous;
			};
		};
	};

    /* Factions */
    class B_GMG_01_weapon_F: B_HMG_01_weapon_F
    {
        hiddenSelectionsTextures[] = {"\A3_Aegis\Supplies_F_Aegis\Bags\Data\backpack_small_mcamo_CO.paa"};
    };
    class B_GMG_01_A_weapon_F: B_HMG_01_weapon_F
    {
        hiddenSelectionsTextures[] = {"\A3_Aegis\Supplies_F_Aegis\Bags\Data\backpack_small_mcamo_CO.paa"};
    };
    class B_GMG_01_high_weapon_F: B_HMG_01_high_weapon_F
    {
        hiddenSelectionsTextures[] = {"\A3_Aegis\Supplies_F_Aegis\Bags\Data\backpack_small_mcamo_CO.paa"};
    };
	class I_GMG_01_weapon_F: B_GMG_01_weapon_F{};
	class I_GMG_01_A_weapon_F: B_GMG_01_A_weapon_F{};
	class I_GMG_01_high_weapon_F: B_GMG_01_high_weapon_F{};
    #include "cfgBLUFOR.hpp"    // US & BAF
    #include "cfgOPFOR.hpp"     // IAF, China & Argana
    #include "cfgRUS.hpp"       // Russia
	class I_E_GMG_01_Weapon_F: I_GMG_01_weapon_F
	{
		hiddenSelectionsTextures[] = {"\A3_Aegis\Supplies_F_Aegis\Bags\Data\backpack_small_eaf_CO.paa"};
		picture = "\A3_Aegis\Supplies_F_Aegis\Bags\Data\UI\icon_B_TacticalPack_eaf_F_CA.paa";
	};
	class I_E_GMG_01_A_Weapon_F: I_GMG_01_A_weapon_F
	{
		hiddenSelectionsTextures[] = {"\A3_Aegis\Supplies_F_Aegis\Bags\Data\backpack_small_eaf_CO.paa"};
		picture = "\A3_Aegis\Supplies_F_Aegis\Bags\Data\UI\icon_B_TacticalPack_eaf_F_CA.paa";
		class assembleInfo;
	};
	class I_E_GMG_01_high_Weapon_F: I_GMG_01_high_weapon_F
	{
		hiddenSelectionsTextures[] = {"\A3_Aegis\Supplies_F_Aegis\Bags\Data\backpack_small_eaf_CO.paa"};
		picture = "\A3_Aegis\Supplies_F_Aegis\Bags\Data\UI\icon_B_TacticalPack_eaf_F_CA.paa";
	};
	#include "cfgEAF.hpp"	//Blufor LDF
};