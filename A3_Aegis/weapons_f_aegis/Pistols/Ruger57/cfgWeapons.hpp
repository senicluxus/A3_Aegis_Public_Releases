// Arma 3 Bases
class CowsSlot_Pistol;
class PointerSlot_Pistol;
class MuzzleSlot_9mm;

// Arma 3 Aegis
class Aegis_MuzzleSlot_RP57;

class CfgWeapons
{
	/* Definitions */
	#include "\A3_Aegis\macros_weaponAcc.hpp"
    
    /* Inheritance Tree */
	#include "\A3_Aegis\cfgPistols.hpp"

	/* Weapons */
	class Aegis_hgun_Pistol_R57_F: Pistol_Base_F
	{
		author = $STR_A3_A_POLPOX_Akinaro;
		baseWeapon = Aegis_hgun_Pistol_R57_F;
		scope = public;
		model = "A3_Aegis\weapons_f_aegis\Pistols\Ruger57\ruger57.p3d";
		picture = "\A3_Aegis\weapons_f_aegis\Pistols\Ruger57\Data\UI\icon_Aegis_hgun_Pistol_R57_F_ca.paa";
		UiPicture = "\A3\Weapons_F\Data\UI\icon_regular_CA.paa";
		magazines[] = {Aegis_10Rnd_570x28_RP57_Mag};
		magazineWell[] = {Aegis_RP57_57x28};
		displayName = $STR_A3_A_CfgWeapons_hgun_Pistol_R57_base_F0;
		descriptionShort = $STR_A3_A_CfgWeapons_hgun_Pistol_R57_F1;
		class Library
		{
			libTextDesc = $STR_A3_A_CfgWeapons_hgun_Pistol_R57_F_Library0;
		};
		reloadAction = "Aegis_GestureReloadRuger";
		recoil = Aegis_recoil_pistol_RP57;
		hiddenSelections[] = {camo};
		hiddenSelectionsTextures[] = {"A3_Aegis\weapons_f_aegis\Pistols\Ruger57\data\Ruger_57_co.paa"};
		modes[] = {Single};
		drySound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\dry_4_Five",0.39810717,1,20};
		reloadMagazineSound[] = {"A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Pistols\Ruger57\ruger_reload",0.56234133,1,30};
		class Single: Mode_SemiAuto
		{
			sounds[] = 
			{
				StandardSound,
				SilencedSound
			};
			class BaseSoundModeType{};
			class StandardSound: BaseSoundModeType{};
			class SilencedSound: BaseSoundModeType{};
			recoil = recoil_pistol_light;
			recoilProne = recoil_prone_pistol_light;
			reloadTime = RPM_SEMI_PISTOL;
			dispersion = 0.00493;
			minRange = 5;
			minRangeProbab = 0.1;
			midRange = 25;
			midRangeProbab = 0.3;
			maxRange = 50;
			maxRangeProbab = 0.1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 25;
		};
		inertia = 0.3;
		aimTransitionSpeed = 1.5;
		dexterity = 1.7;
		initSpeed = 520;
		maxZeroing = 100;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 16;
			holsterScale = 0.9;
			class CowsSlot: asdg_PistolOpticMount
			{
				iconPosition[] =
				{
					0.60,   // X
					0.16    // Y
				};
				iconScale = 0.2;
			};
			class MuzzleSlot: Aegis_MuzzleSlot_RP57
			{
				iconPosition[] = {0.12,0.26};
				iconScale = 0.24;
			};
			class PointerSlot: asdg_PistolUnderRail
			{
				iconPosition[] =
				{
					0.32,   // X
					0.53    // Y
				};
				iconScale = 0.3;
			};
		};
	};
	class Aegis_hgun_Pistol_R57_sand_F: Aegis_hgun_Pistol_R57_F
	{
		author = $STR_A3_A_POLPOX_Akinaro;
		baseWeapon = Aegis_hgun_Pistol_R57_sand;
		displayName = $STR_A3_A_CfgWeapons_hgun_Pistol_R57_Sand_F0;
		picture = "\A3_Aegis\weapons_f_aegis\Pistols\Ruger57\Data\UI\icon_Aegis_hgun_Pistol_R57_sand_F_ca.paa";
		hiddenSelectionsTextures[] = {"A3_Aegis\weapons_f_aegis\Pistols\Ruger57\data\Ruger_57_sand_co.paa"};
	};
	class Aegis_hgun_Pistol_R57_olive_F: Aegis_hgun_Pistol_R57_F
	{
		author = $STR_A3_A_POLPOX_Akinaro;
		baseWeapon = Aegis_hgun_Pistol_R57_olive_F;
		displayName = $STR_A3_A_CfgWeapons_hgun_Pistol_R57_Olive_F0;
		picture = "\A3_Aegis\weapons_f_aegis\Pistols\Ruger57\Data\UI\icon_Aegis_hgun_Pistol_R57_olive_F_CA.paa";
		hiddenSelectionsTextures[] = {"A3_Aegis\weapons_f_aegis\Pistols\Ruger57\data\Ruger_57_olive_co.paa"};
	};
	class Aegis_hgun_Pistol_R57_silver_F: Aegis_hgun_Pistol_R57_F
	{
		author = $STR_A3_A_POLPOX_Akinaro;
		baseWeapon = Aegis_hgun_Pistol_R57_silver;
		displayName = $STR_A3_A_CfgWeapons_hgun_Pistol_R57_Silver_F0;
		picture = "\A3_Aegis\weapons_f_aegis\Pistols\Ruger57\Data\UI\icon_Aegis_hgun_Pistol_R57_silver_F_CA.paa";
		hiddenSelections[] = {camo,camo2};
		hiddenSelectionsTextures[] = {"A3_Aegis\weapons_f_aegis\Pistols\Ruger57\data\Ruger_57_silver_co.paa"};
		hiddenSelectionsMaterials[] = {"","A3_Aegis\weapons_f_aegis\Pistols\Ruger57\data\Ruger_57_silver.rvmat"};
	};

	/* Accessorized Weapons */
	#include "cfgWeaponsAcc.hpp"
};