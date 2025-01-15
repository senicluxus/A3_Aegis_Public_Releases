// Arma 3 Bases
class CowsSlot_Pistol;
class PointerSlot_Pistol;
class MuzzleSlot_9mm;

// Arma 3 Aegis
class Aegis_CowsSlot_P320;


class CfgWeapons
{
	class Pistol;
	class Pistol_Base_F: Pistol
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	
	/* Base class */
	class Aegis_hgun_P320_base_F: Pistol_Base_F
	{
		author = $STR_A3_A_Grave;
		_generalMacro = "Aegis_hgun_P320_base_F";
		baseWeapon = Aegis_hgun_P320_base_F;
		scope = private;
		model = "\A3_Aegis\Weapons_F_Aegis\Pistols\P320\Aegis_P320_F.p3d";
		UiPicture = "\A3\Weapons_F\Data\UI\icon_regular_CA.paa";
		magazines[]= {17Rnd_9x21_Mag};
		magazineWell[]=
		{
			P320_9x21
		};
		reloadAction = GestureReloadPistol;
		descriptionShort = $STR_A3_A_CfgWeapons_hgun_P320_F1;
		class Library
		{
			libTextDesc = $STR_A3_A_CfgWeapons_hgun_P320_F_Library0;
		};
		hiddenSelections[]=
		{
			camo
		};
		modes[]=
		{
			Single
		};
		class Single: Mode_SemiAuto
		{
			reloadTime = 0.1;
			dispersion = 0.0043500001;
			minRange = 5;
			minRangeProbab = 0.30000001;
			midRange = 25;
			midRangeProbab = 0.60000002;
			maxRange = 50;
			maxRangeProbab = 0.1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 25;
		};
		inertia = 0.30000001;
		aimTransitionSpeed = 1.5;
		dexterity = 1.7;
		initSpeed = 380;
		recoil = Aegis_recoil_pistol_P320;
		maxZeroing = 100;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 23;
			class CowsSlot: Aegis_CowsSlot_P320
			{
				iconPosition[]={0.40000001,0.30000001};
				iconScale=0.15000001;
			};
			class MuzzleSlot: asdg_MuzzleSlot_9MM
			{
				iconPosition[]= {0.23999999,0.34999999};
				iconScale = 0.2;
			};
			class PointerSlot: asdg_PistolUnderRail
			{
				iconPosition[]= {0.47,0.55000001};
				iconScale = 0.30000001;
			};
		};
		ACE_barrelTwist=254;
		ACE_barrelLength=120;
	};
	
	class Aegis_hgun_P320_black_F: Aegis_hgun_P320_base_F
	{
		author = $STR_A3_A_Grave;
		scope = public;
		baseWeapon = Aegis_hgun_P320_black_F;
		displayname = $STR_A3_A_CfgWeapons_hgun_P320_black_F0;
		picture = "\A3_Aegis\Weapons_F_Aegis\Pistols\P320\Data\UI\Icon_hgun_P320_black_F_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3_Aegis\Weapons_F_Aegis\Pistols\P320\Data\hgun_P320_black_CO.paa"
		};
	};
    class Aegis_hgun_P320_sand_F: Aegis_hgun_P320_base_F
	{
		author = $STR_A3_A_Grave;
		scope = public;
		baseWeapon = Aegis_hgun_P320_sand_F;
		displayname = $STR_A3_A_CfgWeapons_hgun_P320_Sand_F0;
		picture = "\A3_Aegis\Weapons_F_Aegis\Pistols\P320\Data\UI\Icon_hgun_P320_sand_F_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3_Aegis\Weapons_F_Aegis\Pistols\P320\Data\hgun_P320_sand_CO.paa"
		};
	};
    class Aegis_hgun_P320_khaki_F: Aegis_hgun_P320_base_F
	{
		author = $STR_A3_A_Grave;
		scope = public;
		baseWeapon = Aegis_hgun_P320_khaki_F;
		displayname = $STR_A3_A_CfgWeapons_hgun_P320_khaki_F0;
		picture = "\A3_Aegis\Weapons_F_Aegis\Pistols\P320\Data\UI\Icon_hgun_P320_khaki_F_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3_Aegis\Weapons_F_Aegis\Pistols\P320\Data\hgun_P320_khaki_CO.paa"
		};
	};
};