class CfgGesturesMale
{
	class Default;
	class States
	{
		class GestureReloadBase;
		class GestureReloadSKS: GestureReloadBase
		{
			file = "\A3_Opf\Anims_F_Opf\Data\Anim\Sdr\Gst\GestureReloadSKS.rtm";
			speed = -4.8;
            mask = handsWeapon;
            headBobStrength = 0.2;
            headBobMode = 2;
			weaponIK = true;
			rightHandIKCurve[] =
			{
				0.631944,true,
				0.657922,false,
				0.840278,false,
				0.875,true
			};
			leftHandIKCurve[] =
			{
				0,true,
				0.03125,false,
				0.868056,false,
				0.96,true
			};
            leftHandIKBeg = false;
            leftHandIKEnd = true;
            rightHandIKBeg = true;
            rightHandIKEnd = true;
		};
		class GestureReloadSKSProne: GestureReloadSKS
		{
			file = "\A3_Opf\Anims_F_Opf\Data\Anim\Sdr\Gst\GestureReloadSKSProne.rtm";
			rightHandIKCurve[] =
			{
				0,true,
				0.027778,false,
				0.84,false,
				0.86,true
			};
			leftHandIKCurve[] =
			{
				0,true,
				0.075,false,
				0.868,false,
				0.96,true
			};
            leftHandIKBeg = false;
            leftHandIKEnd = true;
            rightHandIKBeg = true;
            rightHandIKEnd = true;
		};
		class GestureReloadSKSContext: GestureReloadSKS
		{
			mask = handsWeapon_context;
		};
		class GestureReloadSKSContextAnimDrive: GestureReloadSKS
		{
			mask = handsWeapon_contextAnimDrive;
		};
	};
};