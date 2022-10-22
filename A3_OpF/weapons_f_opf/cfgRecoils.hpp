class CfgRecoils
{
    /* Bases */
	class recoil_default;

    /* SKS */
	class recoil_sks: recoil_default
	{
		muzzleOuter[] =
		{
			0.5,
			2.2,
			0.7,
			0.5
		};
		kickBack[] =
		{
			0.07,
			0.1
		};
		temporary = 0.01;
	};
};