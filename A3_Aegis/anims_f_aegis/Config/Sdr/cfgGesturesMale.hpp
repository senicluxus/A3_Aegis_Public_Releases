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
		class Aegis_GestureReloadM4A1: GestureReloadBase
		{
			file="\A3_Aegis\anims_f_aegis\Data\Anim\Sdr\Gst\GestureReloadM4A1.rtm";
			speed=-3;
			weaponIK=1;
			leftHandIKCurve[]=
			{
				0, 1,
				0.075, 0,
				0.95, 0,
				1, 1
			};
		};
		class Aegis_GestureReloadM4A1_Prone: GestureReloadBase
		{
			file="\A3_Aegis\anims_f_aegis\Data\Anim\Sdr\Gst\GestureReloadM4A1_Prone.rtm";
			speed=-3;
			weaponIK=1;
			leftHandIKCurve[]=
			{
				0, 1,
				0.075, 0,
				0.95, 0,
				1, 1
			};
		};
		class Aegis_GestureReloadM4A1_Context: Aegis_GestureReloadM4A1
		{
			mask = handsWeapon_context;
		};

		class Aegis_GestureReloadRuger: GestureReloadBase
		{
			file = "A3_Aegis\anims_f_aegis\Data\Anim\Sdr\Gst\GestureReloadRuger.rtm";
			speed = -(99/30);
            mask = handsWeapon_pst;
            headBobStrength = 0.25;
            headBobMode = 2;
			weaponIK = 1;
			leftHandIKCurve[] =
			{
				0
			};
			rightHandIKCurve[] =
			{
				0
			};
		};
		class Aegis_GestureReloadRugerProne: Aegis_GestureReloadRuger
		{
			file = "A3_Aegis\anims_f_aegis\Data\Anim\Sdr\Gst\GestureReloadRugerProne.rtm";
		};
		class Aegis_GestureReloadRugerContext: Aegis_GestureReloadRuger
		{
			mask = handsWeapon_pst_context;
		};
		class Aegis_GestureReloadRugerContextAnimDrive: Aegis_GestureReloadRuger
		{
			mask = handsWeapon_pst_contextAnimDrive;
		};
		class Aegis_GestureReloadM16A4: GestureReloadBase
		{
			file="A3_Aegis\anims_f_aegis\Data\Anim\Sdr\Gst\GestureReloadM16A4.rtm";
			speed=-3;
			weaponIK=1;
			leftHandIKCurve[]=
			{
				0, 1,
				0.075, 0,
				0.95, 0,
				1, 1
			};
		};
		class Aegis_GestureReloadM16A4_Prone: GestureReloadBase
		{
			file="A3_Aegis\anims_f_aegis\Data\Anim\Sdr\Gst\GestureReloadM16A4_Prone.rtm";
			speed=-3;
			weaponIK=1;
			leftHandIKCurve[]=
			{
				0, 1,
				0.075, 0,
				0.95, 0,
				1, 1
			};
		};
		class Aegis_GestureReloadM16A4_Context: Aegis_GestureReloadM16A4
		{
			mask="handsWeapon_context";
		};
		class Aegis_GestureReloadM16A4_GL_Magazine: GestureReloadBase
		{
			file="A3_Aegis\anims_f_aegis\Data\Anim\Sdr\Gst\GestureReloadM16A4_GL_Magazine.rtm";
			speed=-3;
			weaponIK=1;
			leftHandIKCurve[]=
			{
				0, 1,
				0.075, 0,
				0.95, 0,
				1, 1
			};
		};
		class Aegis_GestureReloadM16A4_GL_Magazine_Prone: GestureReloadBase
		{
			file="A3_Aegis\anims_f_aegis\Data\Anim\Sdr\Gst\GestureReloadM16A4_GL_Magazine_Prone.rtm";
			speed=-3;
			weaponIK=1;
			leftHandIKCurve[]=
			{
				0, 1,
				0.075, 0,
				0.95, 0,
				1, 1
			};
		};
		class Aegis_GestureReloadM16A4_GL_Magazine_Context: Aegis_GestureReloadM16A4_GL_Magazine
		{
			mask="handsWeapon_context";
		};
		class Aegis_GestureReloadM16A4_GL_Shell: GestureReloadBase
		{
			file="A3_Aegis\anims_f_aegis\Data\Anim\Sdr\Gst\GestureReloadM16A4_GL_Shell.rtm";
			speed=-3;
			weaponIK=1;
			leftHandIKCurve[]=
			{
				0, 1,
				0.16, 0,
				0.85, 0,
				1, 1
			};
		};
		class Aegis_GestureReloadM16A4_GL_Shell_Prone: GestureReloadBase
		{
			file="A3_Aegis\anims_f_aegis\Data\Anim\Sdr\Gst\GestureReloadM16A4_GL_Shell_Prone.rtm";
			speed=-3;
			weaponIK=1;
			leftHandIKCurve[]=
			{
				0, 1,
				0.16, 0,
				0.85, 0,
				1, 1
			};
		};
		class Aegis_GestureReloadM16A4_GL_Shell_Context: Aegis_GestureReloadM16A4_GL_Shell
		{
			mask="handsWeapon_context";
		};
		class GestureReloadGepard: GestureReloadBase
		{
			file = "A3_Aegis\anims_f_aegis\Data\Anim\Sdr\Gst\GestureReloadGepard.rtm";
			speed = -(148/30);
			leftHandIKCurve[] =
			{
				1
			};
			rightHandIKCurve[] =
			{
				0,	1,
				(14/148),	1,
				(17/148),	0,
				(136/148),	0,
				(143/148),	1
			};
		};
		class GestureReloadGepardProne: GestureReloadGepard
		{
			file = "A3_Aegis\anims_f_aegis\Data\Anim\Sdr\Gst\GestureReloadGepardProne.rtm";
		};
		class GestureReloadGepardContext: GestureReloadGepard
		{
			mask = handsWeapon_pst_context;
		};
		class GestureReloadGepardContextAnimDrive: GestureReloadGepard
		{
			mask = handsWeapon_pst_contextAnimDrive;
		};
	};
};