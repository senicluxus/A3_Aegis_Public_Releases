#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class CfgMovesBasic
{
	class Default;
	class ManActions
	{
		GestureReloadAUG = "";
		GestureReloadAUGSMG = "";
		GestureReloadG36 = "";
	};
	class Actions
	{
		class NoActions: ManActions
		{
			GestureReloadAUG[] =
			{
				GestureReloadAUG,
				Gesture
			};
			GestureReloadAUGSMG[] =
			{
				GestureReloadAUGSMG,
				Gesture
			};
			GestureReloadG36[] =
			{
				GestureReloadG36,
				Gesture
			};
		};
		class RifleBaseStandActions;
		class RifleProneActions: RifleBaseStandActions
		{
			GestureReloadAUG[] =
			{
				GestureReloadAUGProne,
				Gesture
			};
			GestureReloadAUGSMG[] =
			{
				GestureReloadAUGSMGProne,
				Gesture
			};
			GestureReloadG36[] =
			{
				GestureReloadG36Prone,
				Gesture
			};
		};
		class RifleAdjustProneBaseActions;
		class RifleAdjustFProneActions: RifleAdjustProneBaseActions
		{
			GestureReloadAUG[] =
			{
				GestureReloadAUGContext,
				Gesture
			};
			GestureReloadAUGSMG[] =
			{
				GestureReloadAUGSMGContext,
				Gesture
			};
			GestureReloadG36[] =
			{
				GestureReloadG36Context,
				Gesture
			};
		};
		class RifleAdjustLProneActions: RifleAdjustProneBaseActions
		{
			GestureReloadAUG[] =
			{
				GestureReloadAUGContext,
				Gesture
			};
			GestureReloadAUGSMG[] =
			{
				GestureReloadAUGSMGContext,
				Gesture
			};
			GestureReloadG36[] =
			{
				GestureReloadG36Context,
				Gesture
			};
		};
		class RifleAdjustRProneActions: RifleAdjustProneBaseActions
		{
			GestureReloadAUG[] =
			{
				GestureReloadAUGContext,
				Gesture
			};
			GestureReloadAUGSMG[] =
			{
				GestureReloadAUGSMGContext,
				Gesture
			};
			GestureReloadG36[] =
			{
				GestureReloadG36Context,
				Gesture
			};
		};
		class PistolStandActions;
		class PistolProneActions: PistolStandActions
		{
			GestureReloadAUG[] =
			{
				GestureReloadAUGProne,
				Gesture
			};
			GestureReloadAUGSMG[] =
			{
				GestureReloadAUGSMGProne,
				Gesture
			};
			GestureReloadG36[] =
			{
				GestureReloadG36Prone,
				Gesture
			};
		};
		class DeployedProneActions: RifleProneActions
		{
			GestureReloadAUG[] =
			{
				GestureReloadAUGProne,
				Gesture
			};
			GestureReloadAUGSMG[] =
			{
				GestureReloadAUGSMGProne,
				Gesture
			};
			GestureReloadG36[] =
			{
				GestureReloadG36Prone,
				Gesture
			};
		};
	};
};
/*
class CfgMovesMaleSdr: CfgMovesBasic
{
	class AmovPercMstpSrasWrflDnon;
	class AmovPpneMstpSrasWrflDnon: AmovPercMstpSrasWrflDnon
	{
		InterpolateTo[] += {RifleReloadProneG36,0.02};
	};
	class RifleReloadProneBase;
	class RifleReloadProneG36: RifleReloadProneBase
	{
		file = "\A3_Atlas\Anims_F_Atlas\Data\Anim\Sdr\Gst\GestureReloadG36Prone.rtm";
		speed = 0.23;
		weaponIK = true;
		leftHandIKCurve[] =
		{
			0,true,
			0.025,false,
			0.858,false,
			0.88,true
		};
	};
};
*/
class CfgGesturesMale
{
	class Default;
	class States
	{
		class GestureReloadBase;
		class GestureReloadAUG: GestureReloadBase
		{
			file = "\A3_Atlas\Anims_F_Atlas\Data\Anim\Sdr\Gst\GestureReloadAUG.rtm";
			speed = 0.18;
            mask = handsWeapon;
            headBobStrength = 0.22;
            headBobMode = 2;
			weaponIK = true;
			leftHandIKCurve[] =
			{
				0,true,
				0.036,false,
				0.836,false,
				0.873,true
			};
		};
		class GestureReloadAUGProne: GestureReloadAUG
		{
			file = "\A3_Atlas\Anims_F_Atlas\Data\Anim\Sdr\Gst\GestureReloadAUGProne.rtm";
			leftHandIKCurve[] =
			{
				0,true,
				0.036,false,
				0.836,false,
				0.873,true
			};
		};
		class GestureReloadAUGContext: GestureReloadAUG
		{
			mask = handsWeapon_context;
		};
		class GestureReloadAUGContextAnimDrive: GestureReloadAUG
		{
			mask = handsWeapon_contextAnimDrive;
		};
		class GestureReloadAUGSMG: GestureReloadBase
		{
			file = "\A3_Atlas\Anims_F_Atlas\Data\Anim\Sdr\Gst\GestureReloadAUGSMG.rtm";
			speed = 0.18;
            mask = handsWeapon;
            headBobStrength = 0.22;
            headBobMode = 2;
			weaponIK = true;
			leftHandIKCurve[] =
			{
				0,true,
				0.036,false,
				0.836,false,
				0.873,true
			};
		};
		class GestureReloadAUGSMGProne: GestureReloadAUGSMG
		{
			file = "\A3_Atlas\Anims_F_Atlas\Data\Anim\Sdr\Gst\GestureReloadAUGSMGProne.rtm";
			leftHandIKCurve[] =
			{
				0,true,
				0.036,false,
				0.836,false,
				0.873,true
			};
		};
		class GestureReloadAUGSMGContext: GestureReloadAUGSMG
		{
			mask = handsWeapon_context;
		};
		class GestureReloadAUGSMGContextAnimDrive: GestureReloadAUGSMG
		{
			mask = handsWeapon_contextAnimDrive;
		};
		class GestureReloadG36: GestureReloadBase
		{
			file = "\A3_Atlas\Anims_F_Atlas\Data\Anim\Sdr\Gst\GestureReloadG36.rtm";
			speed = 0.23;
            mask = handsWeapon;
            headBobStrength = 0.25;
            headBobMode = 2;
			weaponIK = true;
			leftHandIKCurve[] =
			{
				0,true,
				0.1,false,
				0.858,false,
				0.88,true
			};
		};
		class GestureReloadG36Prone: GestureReloadG36
		{
			file = "\A3_Atlas\Anims_F_Atlas\Data\Anim\Sdr\Gst\GestureReloadG36Prone.rtm";
			leftHandIKCurve[] =
			{
				0,true,
				0.12,false,
				0.823,false,
				0.84,true
			};
		};
		class GestureReloadG36Context: GestureReloadG36
		{
			mask = handsWeapon_context;
		};
		class GestureReloadG36ContextAnimDrive: GestureReloadG36
		{
			mask = handsWeapon_contextAnimDrive;
		};
	};
};