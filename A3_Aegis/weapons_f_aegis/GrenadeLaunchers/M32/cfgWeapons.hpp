class CfgWeapons
{
    /* Definitions */
	#include "\A3_Aegis\macros_weaponAcc.hpp"
    
    /* Inheritance Tree */
	#include "\A3_Aegis\cfgRifles.hpp"

    /* Bases */
	class GL_M32_F: Rifle_Base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		baseWeapon = GL_M32_F;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_GL_M32_F0;
		model = "\A3_Aegis\Weapons_F_Aegis\GrenadeLaunchers\M32\M32_F.p3d";
		picture = "\A3_Aegis\Weapons_F_Aegis\GrenadeLaunchers\M32\Data\UI\icon_GL_M32_F_X_CA.paa";
		UiPicture = "\A3\Weapons_F\Data\UI\icon_gl_CA.paa";
		magazines[] =
		{
			6Rnd_HE_Grenade_shell,
			6Rnd_HEDP_Grenade_shell,
			6Rnd_Pellets_Grenade_shell,
			6Rnd_UGL_FlareWhite_F,
			6Rnd_UGL_FlareGreen_F,
			6Rnd_UGL_FlareRed_F,
			6Rnd_UGL_FlareYellow_F,
			6Rnd_UGL_FlareCIR_F,
			6Rnd_Smoke_Grenade_shell,
			6Rnd_SmokeRed_Grenade_shell,
			6Rnd_SmokeGreen_Grenade_shell,
			6Rnd_SmokeYellow_Grenade_shell,
			6Rnd_SmokePurple_Grenade_shell,
			6Rnd_SmokeBlue_Grenade_shell,
			6Rnd_SmokeOrange_Grenade_shell,
			6Rnd_APERSMine_Grenade_shell
		};
		magazineWell[] = {M32_40x36};
		cursor = mgl;
		handAnim[] =
		{
			OFP2_ManSkeleton,
			"\A3_Aegis\Weapons_F_Aegis\GrenadeLaunchers\M32\Data\Anim\M32.rtm"
		};
		//reloadAction = GestureReloadM32;
		recoil = recoil_default;
		htMin = 1;
		htMax = 600;
		afMax = 0;
		mfMax = 0;
		mFact = 1;
		tBody = 100;
		maxZeroing = 400;
		modes[] = {Single};
		class Single: Mode_SemiAuto
		{
			sounds[] = {StandardSound};
			reloadTime = 0.25;
			dispersion = 0.00203;
			minRange = 0;
			minRangeProbab = 0.1;
			midRange = 200;
			midRangeProbab = 0.7;
			maxRange = 400;
			maxRangeProbab = 0.05;
		};
		hiddenSelections[] = {camo};
		hiddenSelectionsTextures[] = {"\A3_Aegis\Weapons_F_Aegis\GrenadeLaunchers\M32\Data\AO_CO.paa"};
		class Library
		{
			libTextDesc = $STR_A3_A_CfgWeapons_GL_M32_F_Library0;
		};
		useModelOptics = false;
		useExternalOptic = false;
		cameraDir = OP_look;
		discreteDistance[] =
		{
			50,
			75,
			100,
			150,
			200,
			250
		};
		discreteDistanceCameraPoint[] =
		{
			OP_eye_50,
			OP_eye_75,
			OP_eye_100,
			OP_eye_150,
			OP_eye_200,
			OP_eye_250
		};
		discreteDistanceInitIndex = 1;
		initSpeed = -1;
		descriptionShort = $STR_A3_A_CfgWeapons_GL_M32_F1;
		inertia = 0.9;
		aimTransitionSpeed = 0.8;
		dexterity = 1.2;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot{};
			class CowsSlot{};
	    	class PointerSlot: asdg_FrontSideRail
	    	{
	      		iconPosition[] =
                {
                    0.35,   // X
                    0.45    // Y
                };
	    	  	iconScale = 0.2;
	    	};
			mass = 220;
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