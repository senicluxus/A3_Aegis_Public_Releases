class CfgWeapons
{
    /* Definitions */
	#include "\A3_Aegis\macros_weaponAcc.hpp"
    
    /* Inheritance Tree */
	#include "\A3_Aegis\cfgRifles.hpp"

    /* Weapons */
	class sgun_M4_F: Rifle_Base_F
	{
		author = $STR_A3_A_AveryTheKitty_and_Tigg;
		baseWeapon = sgun_M4_F;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_sgun_M4_F0;
		model = "\A3_Aegis\Weapons_F_Aegis\Shotguns\M4_SSAS\M4_F.p3d";
		magazines[] =
		{
			8Rnd_12Gauge_Pellets,
			8Rnd_12Gauge_Slug,
			Aegis_8Rnd_12Gauge_HE,
			Aegis_8Rnd_12Gauge_Smoke
		};
		magazineWell[] = {Shotgun_12GA};
		maxZeroing = 100;
		reloadAction = GestureReloadM4SSAS;
		recoil = recoil_m4;
		cursor = sgun;
		handAnim[] =
		{
			OFP2_ManSkeleton,
			"\A3\Weapons_F_Mark\LongRangeRifles\DMR_03\Data\Anim\DMR_03.rtm"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot{};
			class CowsSlot: asdg_OpticRail1913_short
			{
				iconPosition[] =
				{
					0.486,  // X
					0.277   // Y
				};
				iconScale = 0.15;
			};
			class PointerSlot: asdg_PistolUnderRail
			{
				linkProxy = "\A3\Data_F\proxies\weapon_slots\SIDE";
				compatibleItems[] = {acc_flashlight_pistol};
				iconPosition[] =
				{
					0.088,  // X
					0.516   // Y
				};
				iconScale = 0.15;
			};
			mass = 100;
		};
		inertia = 0.6;
		aimTransitionSpeed = 1.1;
		dexterity = 1.3;
		initSpeed = -1;
		picture = "\A3_Aegis\Weapons_F_Aegis\Shotguns\M4_SSAS\Data\UI\icon_sgun_M4_F_X_CA.paa";
		UiPicture = "\A3\Weapons_F\Data\UI\icon_regular_CA.paa";
		descriptionShort = $STR_A3_A_CfgWeapons_sgun_M4_F1;
		hiddenSelections[] = {camo};
		hiddenSelectionsTextures[] = {"\A3_Aegis\Weapons_F_Aegis\Shotguns\M4_SSAS\Data\M4_SSAS_CO.paa"};
		class Library
		{
			libTextDesc = $STR_A3_A_CfgWeapons_sgun_M4_F_Library0;
		};
		distanceZoomMin = 100;
		distanceZoomMax = 100;
		modes[] = {Single};
		class Single: Mode_SemiAuto
		{
			sounds[] = {StandardSound};
			dispersion = 0.00087;
			reloadTime = RPM_SEMI;
			minRange = 1;
			minRangeProbab = 0.5;
			midRange = 60;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.05;
		};
	};

    /* Accessorized Weapons */
	#include "cfgWeaponsAcc.hpp"
};