class CfgSoundShaders
{
	class SKS_Closure_SoundShader
	{
		samples[] =
		{
			{"\A3_Opf\Sounds_F_Opf\arsenal\weapons\Rifles\SKS\SKS_closure_01",1},
			{"\A3_Opf\Sounds_F_Opf\arsenal\weapons\Rifles\SKS\SKS_closure_02",1}
		};
		range = 5;
		volume = db-7;
	};
	class SKS_closeShot_SoundShader
	{
		samples[] =
		{
			{"\A3_Opf\Sounds_F_Opf\arsenal\weapons\Rifles\SKS\SKS_closeShot_01",1},
			{"\A3_Opf\Sounds_F_Opf\arsenal\weapons\Rifles\SKS\SKS_closeShot_02",1},
			{"\A3_Opf\Sounds_F_Opf\arsenal\weapons\Rifles\SKS\SKS_closeShot_03",1}
		};
		volume = db0;
		range = 50;
		rangeCurve = closeShotCurve;
	};
	class SKS_midShot_SoundShader
	{
		samples[] =
		{
			{"\A3_Opf\Sounds_F_Opf\arsenal\weapons\Rifles\SKS\SKS_midShot_01",1},
			{"\A3_Opf\Sounds_F_Opf\arsenal\weapons\Rifles\SKS\SKS_midShot_02",1},
			{"\A3_Opf\Sounds_F_Opf\arsenal\weapons\Rifles\SKS\SKS_midShot_03",1}
		};
		volume = db-2;
		range = 1800;
		rangeCurve[] =
		{
			{0,0.2},
			{50,1},
			{300,0},
			{1800,0}
		};
	};
	class SKS_distShot_SoundShader
	{
		samples[] =
		{
			{"\A3_Opf\Sounds_F_Opf\arsenal\weapons\Rifles\SKS\SKS_distShot_01",1},
			{"\A3_Opf\Sounds_F_Opf\arsenal\weapons\Rifles\SKS\SKS_distShot_02",1},
			{"\A3_Opf\Sounds_F_Opf\arsenal\weapons\Rifles\SKS\SKS_distShot_03",1}
		};
		volume = db0;
		range = 1800;
		rangeCurve[] =
		{
			{0,0},
			{50,0},
			{300,1},
			{1800,1}
	  };
	};
	class SKS_tailDistant_SoundShader
	{
		samples[] =
		{
			{"\A3_Opf\Sounds_F_Opf\arsenal\weapons\Rifles\SKS\SKS_taildistant",1}
		};
		volume = db0;
		range = 2000;
		rangeCurve[] =
		{
			{0,0},
			{600,0.7},
			{2000,1}
		};
		limitation = true;
	};
	class SKS_tailForest_SoundShader
	{
		samples[] =
		{
			{"\A3_Opf\Sounds_F_Opf\arsenal\weapons\Rifles\SKS\SKS_tailforest",1}
		};
		volume = (1-interior/1.4)*forest/3;
		range = 2000;
		rangeCurve[] =
		{
			{0,1},
			{2000,0}
		};
		limitation = true;
	};
	class SKS_tailHouses_SoundShader
	{
		samples[] =
		{
			{"\A3_Opf\Sounds_F_Opf\arsenal\weapons\Rifles\SKS\SKS_tailhouses",1}
		};
		volume = (1-interior/1.4)*houses/3;
		range = 1500;
		rangeCurve[] =
		{
			{0,1},
			{250,0.3},
			{1500,0}
		};
		limitation = true;
	};
	class SKS_tailInterior_SoundShader
	{
		samples[] =
		{
			{"\A3_Opf\Sounds_F_Opf\arsenal\weapons\Rifles\SKS\SKS_tailinterior",1}
		};
		volume = interior;
		range = 350;
		rangeCurve[] =
		{
			{0,1},
			{50,0.4},
			{100,0.2},
			{350,0}
		};
		limitation = true;
	};
	class SKS_tailMeadows_SoundShader
	{
		samples[] =
		{
			{"\A3_Opf\Sounds_F_Opf\arsenal\weapons\Rifles\SKS\SKS_tailmeadows",1}
		};
		volume = (1-interior/1.4)*(meadows/2 max sea/2)/3;
		range = 2000;
		rangeCurve[] =
		{
			{0,1},
			{2000,0}
		};
		limitation = true;
	};
	class SKS_tailTrees_SoundShader
	{
		samples[] =
		{
			{"\A3_Opf\Sounds_F_Opf\arsenal\weapons\Rifles\SKS\SKS_tailtrees",1}
		};
		volume = (1-interior/1.4)*trees/3;
		range = 2000;
		rangeCurve[] =
		{
			{0,1},
			{2000,0}
		};
		limitation = true;
	};
};