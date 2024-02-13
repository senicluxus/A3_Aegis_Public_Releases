class CfgGesturesMale
{
	class Default;
	class States
	{
		class GestureReloadBase;
		class GestureReloadSA80: GestureReloadBase
		{
			file = "\A3_Aegis\Anims_F_Aegis\Data\Anim\Sdr\Gst\GestureReloadSA80.rtm";
			speed = 0.2;
            mask = handsWeapon;
            headBobStrength = 0.25;
            headBobMode = 2;
			weaponIK = true;
			leftHandIKCurve[] =
			{
				0,true,
				0.04,false,
				0.9,false,
				0.94,true
			};
		};
		class GestureReloadSA80Prone: GestureReloadSA80
		{
			file = "\A3_Aegis\Anims_F_Aegis\Data\Anim\Sdr\Gst\GestureReloadSA80Prone.rtm";
			leftHandIKCurve[] =
			{
				0,true,
				0.04,false,
				0.9,false,
				0.94,true
			};
		};
		class GestureReloadSA80Context: GestureReloadSA80
		{
			mask = handsWeapon_context;
		};
		class GestureReloadSA80ContextAnimDrive: GestureReloadSA80
		{
			mask = handsWeapon_contextAnimDrive;
		};
		class GestureReloadWF50: GestureReloadBase
		{
			file = "\A3_Aegis\Anims_F_Aegis\Data\Anim\Sdr\Gst\GestureReloadWF50.rtm";
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
		class GestureReloadWF50Prone: GestureReloadWF50
		{
			file = "\A3_Aegis\Anims_F_Aegis\Data\Anim\Sdr\Gst\GestureReloadWF50Prone.rtm";
			leftHandIKCurve[] =
			{
				0,true,
				0.12,false,
				0.823,false,
				0.84,true
			};
		};
		class GestureReloadWF50Context: GestureReloadWF50
		{
			mask = handsWeapon_context;
		};
		class GestureReloadWF50ContextAnimDrive: GestureReloadWF50
		{
			mask = handsWeapon_contextAnimDrive;
		};
		class GestureFireWF50: GestureReloadBase
		{
			file = "\A3_Aegis\Anims_F_Aegis\Data\Anim\Sdr\Gst\GestureFireWF50.rtm";
			speed = -2.33;
			rightHandIKCurve[] =
			{
				0,true,
				0.08,false,
				0.92,false,
				1,true
			};
		};
		class GestureFireWF50Context: GestureFireWF50
		{
			mask = handsWeapon_context;
		};
		class GestureFireWF50ContextAnimDrive: GestureFireWF50
		{
			mask = handsWeapon_contextAnimDrive;
		};
		class GestureFireWF50Prone: GestureFireWF50
		{
			file = "\A3_Aegis\Anims_F_Aegis\Data\Anim\Sdr\Gst\GestureFireWF50Prone.rtm";
		};

		class GestureReloadAKM74: GestureReloadBase
		{
			file = "\A3_Aegis\Anims_F_Aegis\Data\Anim\Sdr\Gst\GestureReloadAKM74.rtm";
			speed = -(108/30);
            mask = handsWeapon;
            headBobStrength = 0.25;
            headBobMode = 2;
			weaponIK = true;
			leftHandIKCurve[] =
			{
				0,true,
				(6/108),false,
				(74/108),false,
				(80/108),true
			};
			rightHandIKCurve[] =
			{
				0,true,
				(82/108),true,
				(87/108),false,
				(100/108),false,
				1,true
			};
		};
		class GestureReloadAKM74Prone: GestureReloadAKM74
		{
			file = "\A3_Aegis\Anims_F_Aegis\Data\Anim\Sdr\Gst\GestureReloadAKM74Prone.rtm";
			/*leftHandIKCurve[] =
			{
				0,true,
				0.12,false,
				0.823,false,
				0.84,true
			};*/
		};
		class GestureReloadAKM74Context: GestureReloadAKM74
		{
			mask = handsWeapon_context;
		};
		class GestureReloadAKM74ContextAnimDrive: GestureReloadAKM74
		{
			mask = handsWeapon_contextAnimDrive;
		};
	};
};