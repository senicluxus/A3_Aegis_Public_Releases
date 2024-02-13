class CfgGesturesMale
{
	class Default;
	class States
	{
		class GestureReloadBase;
		class GestureReloadSKS: GestureReloadBase
		{
			file = "\A3_Opf\Anims_F_Opf\Data\Anim\Sdr\Gst\GestureReloadSKS.rtm";
			speed = -(108/30);
            mask = handsWeapon;
            headBobStrength = 0.2;
            headBobMode = 2;
			weaponIK = true;
			rightHandIKCurve[] =
			{
				true
			};
			leftHandIKCurve[] =
			{
				0,true,
				(7/108),false,
				(103/108),false,
				(108/108),true
			};
		};
		class GestureReloadSKSProne: GestureReloadSKS
		{
			file = "\A3_Opf\Anims_F_Opf\Data\Anim\Sdr\Gst\GestureReloadSKSProne.rtm";
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