class CfgWeapons
{
    /* Definitions */
	#include "\A3_Aegis\macros_weaponAcc.hpp"
    
    /* Inheritance Tree */
	#include "\A3_Aegis\cfgPistols.hpp"

    /* Weapons */
	class hgun_G17_F: Pistol_Base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		baseWeapon = hgun_G17_F;
		scope = public;
		model = "\A3_Aegis\Weapons_F_Aegis\Pistols\G17\G17_F.p3d";
		picture = "\A3_Aegis\Weapons_F_Aegis\Pistols\G17\Data\UI\icon_hgun_G17_F_X_CA.paa";
		UiPicture = "\A3\Weapons_F\Data\UI\icon_regular_CA.paa";
		magazines[] = {17Rnd_9x21_Mag};
		magazineWell[] = {G17_9x21};
		reloadAction = GestureReloadPistol;
		recoil = recoil_pistol_g17;
		displayname = $STR_A3_A_CfgWeapons_hgun_G17_F0;
		hiddenSelections[] = {camo};
		hiddenSelectionsTextures[] = {"\A3_Aegis\Weapons_F_Aegis\Pistols\G17\Data\G17_CO.paa"};
		modes[] = {Single};
		class Single: Mode_SemiAuto
		{
			reloadTime = RPM_SEMI_PISTOL;
			dispersion = 0.0029;
			minRange = 5;
			minRangeProbab = 0.3;
			midRange = 25;
			midRangeProbab = 0.6;
			maxRange = 50;
			maxRangeProbab = 0.1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 25;
		};
		class Library
		{
			libTextDesc = $STR_A3_A_CfgWeapons_hgun_G17_F_Library0;
		};
		descriptionShort = $STR_A3_A_CfgWeapons_hgun_G17_F1;
		inertia = 0.1;
		aimTransitionSpeed = 1.6;
		dexterity = 1.9;
		initSpeed = 375;
		maxZeroing = 100;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 20;
			class MuzzleSlot: asdg_MuzzleSlot_9MM
			{
				iconPosition[] =
				{
					0.22,   // X
					0.26    // Y
				};
				iconScale = 0.2;
			};
			class CowsSlot{};
			class PointerSlot{};
		};
	};
	class hgun_G17_black_F: hgun_G17_F
	{
		author = $STR_A3_A_AveryTheKitty;
		baseWeapon = hgun_G17_black_F;
		displayname = $STR_A3_A_CfgWeapons_hgun_G17_black_F0;
		hiddenSelectionsTextures[] = {"\A3_Aegis\Weapons_F_Aegis\Pistols\G17\Data\G17_black_CO.paa"};
		picture = "\A3_Aegis\Weapons_F_Aegis\Pistols\G17\Data\UI\icon_hgun_G17_black_F_X_CA.paa";
	};
	class hgun_G17_khaki_F: hgun_G17_F
	{
		author = $STR_A3_A_AveryTheKitty;
		baseWeapon = hgun_G17_khaki_F;
		displayname = $STR_A3_A_CfgWeapons_hgun_G17_khaki_F0;
		hiddenSelectionsTextures[] = {"\A3_Aegis\Weapons_F_Aegis\Pistols\G17\Data\G17_khaki_CO.paa"};
		picture = "\A3_Aegis\Weapons_F_Aegis\Pistols\G17\Data\UI\icon_hgun_G17_khaki_F_X_CA.paa";
	};

    /* Accessorized Weapons */
	#include "cfgWeaponsAcc.hpp"
};