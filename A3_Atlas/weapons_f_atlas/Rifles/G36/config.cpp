#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
#include "cfgVehicles.hpp"
#include "\A3_Atlas\Weapons_F_Atlas\ASDG.hpp"
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class SlotInfo;
class MuzzleSlot_65;
class CowsSlot_Rail;
class PointerSlot_Rail;
class UnderBarrelSlot_rail;
class CfgWeapons
{
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class GunParticles;
		class WeaponSlotsInfo;
	};
	class UGL_F;
	class arifle_G36_base_F: Rifle_Base_F
	{
		model = "\A3_Atlas\Weapons_F_Atlas\Rifles\G36\G36_F.p3d";
		hiddenSelections[] =
		{
			camo1,
			camo2
		};
		hiddenSelectionsTextures[] =
		{
			"\A3_Atlas\Weapons_F_Atlas\Rifles\G36\Data\G36_F_01_CO.paa",
			"\A3_Atlas\Weapons_F_Atlas\Rifles\G36\Data\G36_F_02_CO.paa"
		};
		descriptionShort = $STR_A3_A_CfgWeapons_arifle_G36_base_F1;
		class Library
		{
			libTextDesc = $STR_A3_A_CfgWeapons_arifle_G36_base_F_Library0;
		};
		handAnim[] =
		{
			OFP2_ManSkeleton,
			"\A3\Weapons_F_Exp\Rifles\SPAR_02\Data\Anim\SPAR_02.rtm"
		};
		reloadAction = GestureReloadG36;
		magazines[] =
		{
			30Rnd_65x39_caseless_msbs_mag,
			30Rnd_65x39_caseless_msbs_mag_Tracer
		};
		magazineWell[] = {MX_65x39_MSBS};
		magazineReloadSwitchPhase = 0.48;
		recoil = recoil_G36;
		initSpeed = 850;
		inertia = 0.5;
		dexterity = 1.6;
		aimTransitionSpeed = 1.2;
		maxZeroing = 800;
		discreteDistance[] =
		{
			100,
			200,
			300,
			400,
			500,
			600
		};
		discreteDistanceInitIndex = 1;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: asdg_MuzzleSlot_65
			{
				iconPosition[] =
				{
					0, // X
					0.38 // Y
				};
				iconScale = 0.2;
			};
			class CowsSlot: asdg_OpticRail1913
			{
				iconPosition[] =
				{
					0.479, // X
					0.194 // Y
				};
				iconScale = 0.2;
			};
			class PointerSlot: asdg_FrontSideRail
			{
				iconPosition[] =
				{
					0.285, // X
					0.344 // Y
				};
				iconScale = 0.2;
			};
			class UnderBarrelSlot: asdg_UnderSlot
			{
				iconPosition[] =
				{
					0.285, // X
					0.344 // Y
				};
				iconScale = 0.2;
			};
			mass = 100;
		};
		modes[] =
		{
			Single,
			Burst,
			FullAuto,
			Burst_medium,
			single_medium_optics1,
			single_medium_optics2
		};
		class Single: Mode_SemiAuto
		{
			reloadTime = 0.08;
			dispersion = 0.00102;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 250;
			maxRangeProbab = 0.2;
		};
		class Burst: Mode_Burst
		{
			textureType = dual;
			burst = 2;
			reloadTime = 0.08;
			dispersion = 0.00102;
			minRange = 2;
			minRangeProbab = 0.9;
			midRange = 50;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.05;
		};
		class FullAuto: Mode_FullAuto
		{
			reloadTime = 0.08;
			dispersion = 0.00102;
			minRange = 2;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.05;
			aiRateOfFire = 1e-006;
		};
		class Burst_medium: Burst
		{
			showToPlayer = false;
			burstRangeMax = 5;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 75;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2.0;
		};
		class single_medium_optics1: Single
		{
			requiredOpticType = 1;
			showToPlayer = false;
			minRange = 5;
			minRangeProbab = 0.2;
			midRange = 300;
			midRangeProbab = 0.7;
			maxRange = 450;
			maxRangeProbab = 0.3;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 500;
		};
		class single_medium_optics2: single_medium_optics1
		{
			requiredOpticType = 2;
			minRange = 100;
			minRangeProbab = 0.1;
			midRange = 400;
			midRangeProbab = 0.7;
			maxRange = 600;
			maxRangeProbab = 0.05;
			aiRateOfFire = 6;
			aiRateOfFireDistance = 600;
		};
		class GunParticles: GunParticles
		{
			class SecondEffect
			{
				positionName = Nabojnicestart;
				directionName = Nabojniceend;
				effectName = CaselessAmmoCloud;
			};
		};
	};
	class arifle_G36_GL_base_F: arifle_G36_base_F
	{
		model = "\A3_Atlas\Weapons_F_Atlas\Rifles\G36\G36_GL_F.p3d";
		hiddenSelections[] =
		{
			camo1,
			camo2,
			camo3
		};
		hiddenSelectionsTextures[] =
		{
			"\A3_Atlas\Weapons_F_Atlas\Rifles\G36\Data\G36_F_01_CO.paa",
			"\A3_Atlas\Weapons_F_Atlas\Rifles\G36\Data\G36_F_02_CO.paa",
			"\A3_Atlas\Weapons_F_Atlas\Rifles\G36\Data\G36_F_GL_CO.paa"
		};
		UiPicture = "\A3\Weapons_F\Data\UI\icon_gl_CA.paa";
		handAnim[] =
		{
			OFP2_ManSkeleton,
			"\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\Anim\SPAR_01_GL.rtm"
		};
		inertia = 0.6;
		aimTransitionSpeed = 1;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class UnderBarrelSlot: asdg_UnderSlot
			{
				iconPosition[] =
				{
					0.285, // X
					0.344 // Y
				};
				iconScale = 0.2;
			};
			mass = 110;
		};
		muzzles[] =
		{
			this,
			UGL
		};
		class UGL: UGL_F
		{
			displayName = $STR_A3_A_CfgWeapons_arifle_G36_GL_base_F_UGL0;
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
				250,
				300,
				350,
				400
			};
			discreteDistanceCameraPoint[] =
			{
				OP_eye_50,
				OP_eye_75,
				OP_eye_100,
				OP_eye_150,
				OP_eye_200,
				OP_eye_250,
				OP_eye_300,
				OP_eye_350,
				OP_eye_400
			};
			discreteDistanceInitIndex = 1;
			reloadAction = GestureReloadSPARUGL;
			magazineReloadSwitchPhase = 0.4;
		};
	};
	class arifle_G36C_base_F: arifle_G36_base_F
	{
		model = "\A3_Atlas\Weapons_F_Atlas\Rifles\G36\G36C_F.p3d";
		hiddenSelections[] =
		{
			camo1,
			camo2
		};
		hiddenSelectionsTextures[] =
		{
			"\A3_Atlas\Weapons_F_Atlas\Rifles\G36\Data\G36_F_01_CO.paa",
			"\A3_Atlas\Weapons_F_Atlas\Rifles\G36\Data\G36_F_02_CO.paa"
		};
		handAnim[] =
		{
			OFP2_ManSkeleton,
			"\A3\Weapons_F_Exp\Rifles\SPAR_02\Data\Anim\SPAR_02.rtm"
		};
		initSpeed = 722;
		inertia = 0.4;
		dexterity = 1.7;
		aimTransitionSpeed = 1.3;
		maxZeroing = 600;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class UnderBarrelSlot: asdg_UnderSlot
			{
				iconPosition[] =
				{
					0.285, // X
					0.344 // Y
				};
				iconScale = 0.2;
			};
			mass = 70;
		};
		class Single: Single
		{
			dispersion = 0.00131;
		};
		class Burst: Burst
		{
			dispersion = 0.00131;
		};
		class FullAuto: FullAuto
		{
			dispersion = 0.00131;
		};
	};
	class arifle_G36_F: arifle_G36_base_F
	{
		author = $STR_A3_A_AveryTheKitty_MrBrightside_and_Toadie2K;
		scope = public;
		picture = "\A3_Atlas\Weapons_F_Atlas\Rifles\G36\Data\UI\icon_arifle_G36_F_X_CA.paa";
		displayName = $STR_A3_A_CfgWeapons_arifle_G36_F0;
		baseWeapon = arifle_G36_F;
	};
	class arifle_G36_GL_F: arifle_G36_GL_base_F
	{
		author = $STR_A3_A_AveryTheKitty_MrBrightside_and_Toadie2K;
		scope = public;
		picture = "\A3_Atlas\Weapons_F_Atlas\Rifles\G36\Data\UI\icon_arifle_G36_GL_F_X_CA.paa";
		displayName = $STR_A3_A_CfgWeapons_arifle_G36_GL_F0;
		baseWeapon = arifle_G36_GL_F;
	};
	class arifle_G36C_F: arifle_G36C_base_F
	{
		author = $STR_A3_A_AveryTheKitty_MrBrightside_and_Toadie2K;
		scope = public;
		picture = "\A3_Atlas\Weapons_F_Atlas\Rifles\G36\Data\UI\icon_arifle_G36C_F_X_CA.paa";
		displayName = $STR_A3_A_CfgWeapons_arifle_G36C_F0;
		baseWeapon = arifle_G36C_F;
	};
	#include "presets.hpp"
};