class CfgWeapons
{
    /* Definitions */
	#include "\A3_Aegis\macros_weaponAcc.hpp"
    
    /* Inheritance Tree */
	#include "\A3_Aegis\cfgRifles.hpp"

    /* LIM-85 5.56 mm - Bases */
    class LMG_03_base_F: Rifle_Long_Base_F
    {
        /* Slots
        - We must hardcode this, else it won't work
        */
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            class MuzzleSlot: asdg_MuzzleSlot_556
            {
                class compatibleItems: compatibleItems
                {
                    muzzle_snds_M = true;
                    muzzle_snds_m_khk_F = true;
                    muzzle_snds_m_snd_F = true;
		            muzzle_mzls_M = true;
                };
            };
        };
        class FullAutoSlow;
    };

    /* LIM-85 5.56 mm - Weapons */
	class LMG_03_F: LMG_03_base_F
	{
		hiddenSelectionsTextures[] =
		{
			"\A3_Aegis\Weapons_F_Aegis\Machineguns\LMG_03\Data\LMG_03_F_body_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Machineguns\LMG_03\Data\LMG_03_F_acc_CO.paa",
			"\A3\Weapons_F_Enoch\Machineguns\M200\Data\grip_black_CO.paa"
		};
	};
	class LMG_03_khk_F: LMG_03_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		baseWeapon = LMG_03_khk_F;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_LMG_03_khk_F0;
		picture = "\A3_Aegis\Weapons_F_Aegis\Machineguns\LMG_03\Data\UI\icon_LMG_03_khk_F_X_CA.paa";
		hiddenSelectionsTextures[] =
		{
			"\A3_Aegis\Weapons_F_Aegis\Machineguns\LMG_03\Data\LMG_03_F_body_khk_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Machineguns\LMG_03\Data\LMG_03_F_acc_khk_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Machineguns\M200\Data\LMG_Mk200_khk_F_3_CO.paa"
		};
	};
	class LMG_03_snd_F: LMG_03_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		baseWeapon = LMG_03_snd_F;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_LMG_03_snd_F0;
		picture = "\A3_Aegis\Weapons_F_Aegis\Machineguns\LMG_03\Data\UI\icon_LMG_03_snd_F_X_CA.paa";
		hiddenSelectionsTextures[] =
		{
			"\A3_Aegis\Weapons_F_Aegis\Machineguns\LMG_03\Data\LMG_03_F_body_snd_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Machineguns\LMG_03\Data\LMG_03_F_acc_snd_CO.paa",
			"\A3\Weapons_F\Machineguns\M200\Data\grip_CO.paa"
		};
	};

    /* LIM-95 7.62 mm - Bases
    class LMG_03_762_base_F: LMG_03_base_F
    {
		descriptionShort = $STR_A3_CfgWeapons_LMG_03_762_base_F1;
		model = "\A3\Weapons_F_Exp\Machineguns\LMG_03\LMG_03_762_F.p3d";
        magazines[] =
        {
            100Rnd_762x51_Box_F,
            100Rnd_762x51_Box_Red_F,
            100Rnd_762x51_Box_Tracer_F,
            100Rnd_762x51_Box_Tracer_Red_F
        };
		inertia = 0.9;
		aimTransitionSpeed = 0.6;
		dexterity = 1.2;
		initSpeed = 800;
		recoil = recoil_lim_heavy;
		maxZeroing = 1200;
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
			mass = 300;
            class MuzzleSlot: asdg_MuzzleSlot_762
            {
                class compatibleItems: compatibleItems
                {
                    muzzle_snds_B = true;
                    muzzle_snds_b_khk_F = true;
                    muzzle_snds_b_snd_F = true;
                    muzzle_snds_B_wdm_F = true;
                    muzzle_snds_B_lush_F = true;
                    muzzle_snds_B_arid_F = true;
                    muzzle_mzls_B = true;
                };
            };
        };
        class FullAutoSlow: FullAutoSlow
		{
			reloadTime = RPM_350;
			dispersion = 0.00087;
			sounds[] =
            {
                StandardSound,
                SilencedSound
            };
			soundContinuous = false;
			soundBurst = false;
			minRange = 0;
			minRangeProbab = 0.3;
			midRange = 10;
			midRangeProbab = 0.7;
			maxRange = 20;
			maxRangeProbab = 0.04;
			showToPlayer = true;
		};
		class FullAutoFast: FullAutoSlow
		{
			reloadTime = RPM_710;
			textureType = fastAuto;
		};
		class close: FullAutoFast
		{
			burst = 10;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 10;
			minRangeProbab = 0.05;
			midRange = 25;
			midRangeProbab = 0.7;
			maxRange = 50;
			maxRangeProbab = 0.04;
			showToPlayer = false;
		};
		class short: close
		{
			burst = 8;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
			minRange = 50;
			minRangeProbab = 0.05;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.04;
		};
		class medium: FullAutoSlow
		{
			burst = 5;
			aiRateOfFire = 4;
			aiRateOfFireDistance = 600;
			minRange = 200;
			minRangeProbab = 0.05;
			midRange = 350;
			midRangeProbab = 0.7;
			maxRange = 550;
			maxRangeProbab = 0.1;
			showToPlayer = false;
		};
		class far_optic1: medium
		{
			requiredOpticType = 1;
			showToPlayer = false;
			burst = 3;
			aiRateOfFire = 10;
			aiRateOfFireDistance = 1000;
			minRange = 300;
			minRangeProbab = 0.05;
			midRange = 550;
			midRangeProbab = 0.4;
			maxRange = 650;
			maxRangeProbab = 0.01;
		};
		class far_optic2: far_optic1
		{
			burst = 1;
			requiredOpticType = 2;
			minRange = 400;
			minRangeProbab = 0.05;
			midRange = 800;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.01;
			aiRateOfFire = 10;
			aiRateOfFireDistance = 900;
		};
		aiDispersionCoefY = 23.0;
		aiDispersionCoefX = 20.0;
    };
    */

    /* LIM-95 7.62 mm - Weapons
	class LMG_03_762_F: LMG_03_762_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		baseWeapon = LMG_03_762_F;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_LMG_03_762_F0;
		picture = "\A3_Aegis\Weapons_F_Aegis\Machineguns\LMG_03\Data\UI\icon_LMG_03_762_F_X_CA.paa";
		hiddenSelectionsTextures[] =
		{
			"\A3_Aegis\Weapons_F_Aegis\Machineguns\LMG_03\Data\LMG_03_F_body_khk_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Machineguns\LMG_03\Data\LMG_03_F_acc_khk_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Machineguns\M200\Data\LMG_Mk200_khk_F_3_CO.paa"
		};
	};
	class LMG_03_762_khk_F: LMG_03_762_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		baseWeapon = LMG_03_762_khk_F;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_LMG_03_762_khk_F0;
		picture = "\A3_Aegis\Weapons_F_Aegis\Machineguns\LMG_03\Data\UI\icon_LMG_03_762_khk_F_X_CA.paa";
		hiddenSelectionsTextures[] =
		{
			"\A3_Aegis\Weapons_F_Aegis\Machineguns\LMG_03\Data\LMG_03_F_body_khk_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Machineguns\LMG_03\Data\LMG_03_F_acc_khk_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Machineguns\M200\Data\LMG_Mk200_khk_F_3_CO.paa"
		};
	};
	class LMG_03_762_snd_F: LMG_03_762_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		baseWeapon = LMG_03_762_snd_F;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_LMG_03_762_snd_F0;
		picture = "\A3_Aegis\Weapons_F_Aegis\Machineguns\LMG_03\Data\UI\icon_LMG_03_762_snd_F_X_CA.paa";
		hiddenSelectionsTextures[] =
		{
			"\A3_Aegis\Weapons_F_Aegis\Machineguns\LMG_03\Data\LMG_03_F_body_snd_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Machineguns\LMG_03\Data\LMG_03_F_acc_snd_CO.paa",
			"\A3\Weapons_F\Machineguns\M200\Data\grip_CO.paa"
		};
	};
    */
};