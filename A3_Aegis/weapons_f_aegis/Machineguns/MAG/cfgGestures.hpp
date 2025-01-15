class CfgMovesBasic
{
	class Default;
	class ManActions
	{
		GestureReloadFNMAG = "";
	};
	class Actions
	{
		class NoActions: ManActions
		{
			GestureReloadFNMAG[] =
			{
				GestureReloadFNMAG,
				Gesture
			};
		};
		class RifleBaseStandActions;
		class RifleProneActions: RifleBaseStandActions
		{
			GestureReloadFNMAG[] =
			{
				GestureReloadFNMAGProne,
				Gesture
			};
		};
		class RifleAdjustProneBaseActions;
		class RifleAdjustFProneActions: RifleAdjustProneBaseActions
		{
			GestureReloadFNMAG[] =
			{
				GestureReloadFNMAGContext,
				Gesture
			};
		};
		class RifleAdjustLProneActions: RifleAdjustProneBaseActions
		{
			GestureReloadFNMAG[] =
			{
				GestureReloadFNMAGContext,
				Gesture
			};
		};
		class RifleAdjustRProneActions: RifleAdjustProneBaseActions
		{
			GestureReloadFNMAG[] =
			{
				GestureReloadFNMAGContext,
				Gesture
			};
		};
		class PistolStandActions;
		class PistolProneActions: PistolStandActions
		{
			GestureReloadFNMAG[] =
			{
				GestureReloadFNMAGProne,
				Gesture
			};
		};
		class DeployedProneActions: RifleProneActions
		{
			GestureReloadFNMAG[] =
			{
				GestureReloadFNMAGProne,
				Gesture
			};
		};
	};
};

class CfgGesturesMale
{
	class Default;
	class States
	{
		class GestureReloadBase;
		class GestureReloadFNMAG: GestureReloadBase
		{
			file = "\A3_Aegis\weapons_f_aegis\Machineguns\MAG\anim\dta\GestureReloadFNMAG.rtm";
			speed = -(296/30);
            mask = handsWeapon;
            headBobStrength = 0.25;
            headBobMode = 2;
			weaponIK = 1;
			leftHandIKCurve[] =
			{
				(60/296),1,
				(67/296),0,
				(281/296),0,
				(292/296),1
			};
			rightHandIKCurve[] =
			{
				(16/296),1,
				(20/296),0,
				(45/296),0,
				(50/296),1
			};
		};
		class GestureReloadFNMAGProne: GestureReloadFNMAG
		{
			file = "\A3_Aegis\weapons_f_aegis\Machineguns\MAG\anim\dta\GestureReloadFNMAGProne.rtm";
		};
		class GestureReloadFNMAGContext: GestureReloadFNMAG
		{
			mask = handsWeapon_context;
		};
		class GestureReloadFNMAGContextAnimDrive: GestureReloadFNMAG
		{
			mask = handsWeapon_contextAnimDrive;
		};
	};
};