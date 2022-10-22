class CfgRecoils
{
	class recoil_default;
	// AUR 90 5.56 mm
	class recoil_aug: recoil_default
	{
		muzzleOuter[] =
		{
			0.2,
			0.8,
			0.3,
			0.2
		};
		kickBack[] =
		{
			0.02,
			0.04
		};
		temporary = 0.01;
	};
	// G36K 6.5 mm
	class recoil_G36: recoil_default
	{
		muzzleOuter[] =
		{
			0.3,
			0.8,
			0.3,
			0.3
		};
		kickBack[] =
		{
			0.02,
			0.03
		};
		temporary = 0.01;
	};
};