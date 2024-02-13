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
	class Atlas_recoil_PzF3: recoil_default
	{
		muzzleOuter[] =
		{// X       Y       a       b
			0.1,    0.15,   0.25,   0.12
        };
		kickBack[] =
		{// Min     Max
			0.04,   0.08
		};

        permanent = 0.1;
		temporary = 0.1;
	};
};