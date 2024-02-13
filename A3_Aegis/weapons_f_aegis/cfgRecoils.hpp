class CfgRecoils
{
    /* Bases */
	class recoil_default;

    /* Vorona */
	class recoil_vorona: recoil_default
	{
		muzzleOuter[] =
		{
			0.2,
			0.3,
			0.25,
			0.12
		};
		kickBack[] =
		{
			0.1,
			0.12
		};
		temporary = 0.12;
	};

    /* Warfare-50 */
	class recoil_wf50: recoil_default
	{
		muzzleOuter[] =
		{
			1.3,
			3.3,
			0.6,
			0.7
		};
		kickBack[] =
		{
			0.1,
			0.1
		};
		temporary = 0.025;
	};

	/* G17 */
	class recoil_pistol_g17: recoil_default
	{
		muzzleOuter[] =
		{
			0.2,
			1,
			0.2,
			0.3
		};
		kickBack[] =
		{
			0.03,
			0.06
		};
		temporary = 0.03;
	};

    /* Mk26 */
	class recoil_pistol_mk26: recoil_default
	{
		muzzleOuter[] =
		{
			0.3,
			1.5,
			0.4,
			0.3
		};
		kickBack[] =
		{
			0.06,
			0.08
		};
		temporary = 0.06;
	};

    /* AK-12 */
	class recoil_ak12_545: recoil_default
	{
		muzzleOuter[] =
		{
			0.2,
			0.7,
			0.3,
			0.3
		};
		kickBack[] =
		{
			0.02,
			0.05
		};
		temporary = 0.01;
	};

    /* AKU-12 */
	class recoil_ak12u_545: recoil_default
	{
		muzzleOuter[] =
		{
			0.2,
			0.7,
			0.3,
			0.3
		};
		kickBack[] =
		{
			0.02,
			0.05
		};
		temporary = 0.01;
	};

	/* RPK-12 */
	class recoil_rpk12_545: recoil_default
	{
		muzzleOuter[] =
		{
			0.2,
			0.7,
			0.3,
			0.3
		};
		kickBack[] =
		{
			0.02,
			0.05
		};
		temporary = 0.01;
	};

    /* L85A3 */
	class recoil_sa80: recoil_default
	{
		muzzleOuter[] =
		{
			0.3,
			1,
			0.3,
			0.3
		};
		kickBack[] =
		{
			0.02,
			0.04
		};
		temporary = 0.01;
	};

    /* Mk17 */
	class recoil_scar: recoil_default
	{
		muzzleOuter[] =
		{
			0.3,
			1.5,
			0.5,
			0.5
		};
		kickBack[] =
		{
			0.03,
			0.07
		};
		temporary = 0.005;
	};

    /* RFL */
	class recoil_rfb: recoil_default
	{
		muzzleOuter[] =
		{
			0.3,
			1.2,
			0.5,
			0.3
		};
		kickBack[] =
		{
			0.03,
			0.05
		};
		temporary = 0.01;
	};

    /* RPK */
	class recoil_rpk: recoil_default
	{
		muzzleOuter[] =
		{
			0.3,
			1,
			0.3,
			0.4
		};
		kickBack[] =
		{
			0.04,
			0.08
		};
		temporary = 0.01;
	};
	
	/* RPK-74 */
	class recoil_rpk74: recoil_default
	{
		muzzleOuter[] =
		{
			0.2,
			0.9,
			0.3,
			0.3
		};
		kickBack[] =
		{
			0.03,
			0.07
		};
		temporary = 0.01;
	};

    /* AA-40 */
	class recoil_aa40: recoil_default
	{
		muzzleOuter[] =
		{
			1,
			2.8,
			0.8,
			0.5
		};
		kickBack[] =
		{
			0.04,
			0.06
		};
		temporary = 0.015;
	};

    /* Bulldog */
	class recoil_ksg: recoil_default
	{
		muzzleOuter[] =
		{
			1,
			3,
			0.6,
			0.6
		};
		kickBack[] =
		{
			0.08,
			0.1
		};
		temporary = 0.02;
	};

    /* M4 SSAS */
	class recoil_m4: recoil_default
	{
		muzzleOuter[] =
		{
			1,
			3,
			0.6,
			0.6
		};
		kickBack[] =
		{
			0.08,
			0.1
		};
		temporary = 0.02;
	};

    /* BK-153 */
	class recoil_mp153: recoil_default
	{
		muzzleOuter[] =
		{
			1,
			3,
			0.6,
			0.6
		};
		kickBack[] =
		{
			0.08,
			0.1
		};
		temporary = 0.02;
	};

    /* MP7 */
	class recoil_smg_04: recoil_default
	{
		muzzleOuter[] =
		{
			0.2,
			0.5,
			0.2,
			0.2
		};
		kickBack[] =
		{
			0.01,
			0.03
		};
		temporary = 0.01;
	};
	/* Mk11 / M110 */
	class Aegis_recoil_rifle_SR25: recoil_default
	{
		muzzleOuter[] = 
		{
			0.30000001,
			1.5,
			0.5,
			0.40000001
		};
		kickBack[] = 
		{
			0.029999999,
			0.059999999
		};
		temporary = 0.0099999998;
	};

	/* M4A1 Recoil*/
	class Aegis_recoil_rifle_M4A1: recoil_default
    {
        muzzleOuter[] = {
			0.2,
			0.80000001,
			0.30000001,
			0.2
		};
        kickBack[] = {
			0.0099999998,
			0.029999999
		};
        temporary = 0.0099999998;
    };
};