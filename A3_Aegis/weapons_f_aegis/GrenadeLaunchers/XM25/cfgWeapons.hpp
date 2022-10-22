class CfgWeapons
{
    /* Definitions */
	#include "\A3_Aegis\macros_weaponAcc.hpp"
    
    /* Inheritance Tree */
	#include "\A3_Aegis\cfgRifles.hpp"

    /* Weapons */
	class GL_XM25_F: Rifle_Base_F
	{
		author = $STR_A3_A_AveryTheKitty_and_Ataboo;
		baseWeapon = GL_XM25_F;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_GL_XM25_F0;
		model = "\A3_Aegis\Weapons_F_Aegis\GrenadeLaunchers\XM25\XM25_F.p3d";
		picture = "\A3_Aegis\Weapons_F_Aegis\GrenadeLaunchers\XM25\Data\UI\icon_GL_XM25_F_X_CA.paa";
		UiPicture = "\A3\Weapons_F\Data\UI\icon_gl_CA.paa";
		weaponInfoType = RscOptics_punisher;
		modelOptics = "\A3\Weapons_F\Acc\reticle_cdtes.p3d";
		magazines[] =
		{
			5Rnd_25x40mm_HE,
			5Rnd_25x40mm_airburst
		};
		magazineWell[] = {XM25_25x40};
		cursor = mgl;
		handAnim[] =
		{
			OFP2_ManSkeleton,
			"\A3_Aegis\Weapons_F_Aegis\GrenadeLaunchers\XM25\Data\Anim\XM25.rtm"
		};
		reloadAction = GestureReloadKatiba;
		recoil = recoil_default;
		htMin = 1;
		htMax = 600;
		afMax = 0;
		mfMax = 0;
		mFact = 1;
		tBody = 100;
		maxZeroing = 1000;
		modes[] = {Single};
		class Single: Mode_SemiAuto
		{
			sounds[] = {StandardSound};
			reloadTime = 0.25;
			dispersion = 0.00102;
			minRange = 0;
			minRangeProbab = 0.1;
			midRange = 500;
			midRangeProbab = 0.7;
			maxRange = 1000;
			maxRangeProbab = 0.05;
		};
		hiddenSelections[] = {camo};
		hiddenSelectionsTextures[] = {"\A3_Aegis\Weapons_F_Aegis\GrenadeLaunchers\XM25\Data\XM25_CO.paa"};
		class Library
		{
			libTextDesc = $STR_A3_A_CfgWeapons_GL_XM25_F_Library0;
		};
		initSpeed = 210;
		descriptionShort = $STR_A3_A_CfgWeapons_GL_XM25_F1;
		inertia = 0.8;
		aimTransitionSpeed = 0.8;
		dexterity = 1.2;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot{};
			class CowsSlot{};
			class PointerSlot{};
			mass = 240;
		};
		opticsPPEffects[] =
		{
			OpticsCHAbera1,
			OpticsBlur1
		};
		opticsZoomMin = 0.1875;
		opticsZoomMax = 0.0625;
		opticsZoomInit = 0.1875;
		class OpticsModes
		{
			class optic
			{
				opticsID = 1;
				useModelOptics = true;
				opticsPPEffects[] =
				{
					OpticsCHAbera1,
					OpticsBlur1
				};
				opticsFlare = true;
				opticsZoomMin = 0.1875;
				opticsZoomMax = 0.0625;
				opticsZoomInit = 0.1875;
				distanceZoomMin = 100;
				distanceZoomMax = 100;
				memoryPointCamera = eye;
				cameraDir = look;
				visionMode[] =
				{
					Normal,
					NVG,
					Ti
				};
				thermalMode[] = {2,3};
				opticsDisablePeripherialVision = true;
				discretefov[] = {0.1875,0.0625};
				discreteInitIndex = 0;
			};
		};
		class GunParticles
		{
			class effect1
			{
				positionName = "usti hlavne";
				directionName = "konec hlavne";
				effectName = GrenadeLauncherCloud;
			};
		};
	};
};