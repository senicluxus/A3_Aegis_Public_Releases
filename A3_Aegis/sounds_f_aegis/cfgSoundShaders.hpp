class CfgSoundShaders
{
	// Punisher 25 mm
	class XM25_Closure_SoundShader
	{
		samples[] =
		{
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\GrenadeLaunchers\XM25\XM25_closure_01",1},
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\GrenadeLaunchers\XM25\XM25_closure_02",1}
		};
		range = 5;
		volume = db-5;
	};
	class XM25_closeShot_SoundShader
	{
		samples[] =
		{
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\GrenadeLaunchers\XM25\XM25_closeShot_01",1},
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\GrenadeLaunchers\XM25\XM25_closeShot_02",1},
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\GrenadeLaunchers\XM25\XM25_closeShot_03",1}
		};
		volume = db-1;
		range = 50;
		rangeCurve = closeShotCurve;
	};
	class XM25_midShot_SoundShader
	{
		samples[] =
		{
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\GrenadeLaunchers\XM25\XM25_midShot_01",1},
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\GrenadeLaunchers\XM25\XM25_midShot_02",1},
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\GrenadeLaunchers\XM25\XM25_midShot_03",1}
		};
		volume = db-3;
		range = 1300;
		rangeCurve[] =
		{
			{0,0.2},
			{50,1},
			{200,0},
			{1300,0}
		};
	};
	class XM25_distShot_SoundShader
	{
		samples[] =
		{
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\GrenadeLaunchers\XM25\XM25_distShot_01",1},
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\GrenadeLaunchers\XM25\XM25_distShot_02",1},
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\GrenadeLaunchers\XM25\XM25_distShot_03",1}
		};
		volume = db0;
		range = 1300;
		rangeCurve[] =
		{
			{0,0},
			{50,0},
			{200,1},
			{1300,1}
		};
	};
	class XM25_tailDistant_SoundShader
	{
		samples[] =
		{
			{"\A3\Sounds_F\arsenal\weapons_static\Static_GMG\GMG20mm_taildistant",1}
		};
		volume = db0;
		range = 1300;
		rangeCurve[] =
		{
			{0,0},
			{600,1},
			{1300,1}
		};
		limitation = true;
	};
	class XM25_tailForest_SoundShader
	{
		samples[] =
		{
			{"\A3\Sounds_F\arsenal\weapons_static\Static_GMG\GMG20mm_tailforest",1}
		};
		volume = (1-interior/1.4)*forest/3;
		range = 1300;
		rangeCurve[] =
		{
			{0,1},
			{1300,0.3}
		};
		limitation = true;
	};
	class XM25_tailHouses_SoundShader
	{
		samples[] =
		{
			{"\A3\Sounds_F\arsenal\weapons_static\Static_GMG\GMG20mm_tailhouses",1}
		};
		volume = (1-interior/1.4)*houses/3;
		range = 800;
		rangeCurve[] =
		{
			{0,1},
			{150,0.5},
			{800,0.3}
		};
		limitation = true;
	};
	class XM25_tailInterior_SoundShader
	{
		samples[] =
		{
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\GrenadeLaunchers\XM25\XM25_tailinterior",1}
		};
		volume = interior;
		range = 350;
		rangeCurve[] =
		{
			{0,1},
			{30,0.4},
			{100,0.2},
			{350,0}
		};
		limitation = true;
	};
	class XM25_tailMeadows_SoundShader
	{
		samples[] =
		{
			{"\A3\Sounds_F\arsenal\weapons_static\Static_GMG\GMG20mm_tailmeadows",1}
		};
		volume = (1-interior/1.4)*(meadows/2 max sea/2)/3;
		range = 1300;
		rangeCurve[] =
		{
			{0,1},
			{1300,0.3}
		};
		limitation = true;
	};
	class XM25_tailTrees_SoundShader
	{
		samples[] =
		{
			{"\A3\Sounds_F\arsenal\weapons_static\Static_GMG\GMG20mm_tailtrees",1}
		};
		volume = (1-interior/1.4)*trees/3;
		range = 1300;
		rangeCurve[] =
		{
			{0,1},
			{1300,0.3}
		};
		limitation = true;
	};
	// GM6 Lynx 12.7 mm
	class GM6Lynx_Bolt_SoundShader
	{
		samples[] =
		{
			{"\A3\Sounds_F\weapons\GM6Lynx\GM6_lynx_hlaven",1}
		};
		range = 5;
		volume = db-13;
	};
	// M320 LRR .408
	class M320_silencerShot_SoundShader
	{
		samples[] =
		{
			{"\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\DMR05_silencerShot_01",1},
			{"\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\DMR05_silencerShot_02",1},
			{"\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\DMR05_silencerShot_03",1}
		};
		volume = db0;
		range = 150;
		rangeCurve = closeShotCurve;
	};
	class M320_silencerTailForest_SoundShader
	{
		samples[] =
		{
			{"\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\DMR05_silencerTailForest",1}
		};
		volume = (1-interior/1.4)*forest/3;
		range = 150;
		rangeCurve[] =
		{
			{0,1},
			{150,0.3}
		};
		limitation = true;
	};
	class M320_silencerTailHouses_SoundShader
	{
		samples[] =
		{
			{"\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\DMR05_silencerTailHouses",1}
		};
		volume = (1-interior/1.4)*houses/3;
		range = 150;
		rangeCurve[] =
		{
			{0,1},
			{150,0}
		};
		limitation = true;
	};
	class M320_silencerTailInterior_SoundShader
	{
		samples[] =
		{
			{"\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\DMR05_silencerTailInterior",1}
		};
		volume = interior;
		range = 150;
		rangeCurve[] =
		{
			{0,1},
			{50,0.3},
			{150,0}
		};
		limitation = true;
	};
	class M320_silencerTailMeadows_SoundShader
	{
		samples[] =
		{
			{"\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\DMR05_silencerTailMeadows",1}
		};
		volume = (1-interior/1.4)*(meadows/2 max sea/2)/3;
		range = 150;
		rangeCurve[] =
		{
			{0,1},
			{150,0.3}
		};
		limitation = true;
	};
	class M320_silencerTailTrees_SoundShader
	{
		samples[] =
		{
			{"\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\DMR05_silencerTailTrees",1}
		};
		volume = (1-interior/1.4)*trees/3;
		range = 150;
		rangeCurve[] =
		{
			{0,1},
			{150,0.3}
		};
		limitation = true;
	};
	// Warfare-50 12.7 mm
	class WF50_Closure_SoundShader
	{
		samples[] =
		{
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\LongRangeRifles\WF50\WF50_closure_01",1},
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\LongRangeRifles\WF50\WF50_closure_02",1}
		};
		range = 5;
		volume = db-7;
	};
	class WF50_Bolt_SoundShader
	{
		samples[] =
		{
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\LongRangeRifles\WF50\WF50_bolt_01",1},
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\LongRangeRifles\WF50\WF50_bolt_02",1}
		};
		range = 5;
		volume = db0;
	};
	class WF50_closeShot_SoundShader
	{
		samples[] =
		{
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\LongRangeRifles\WF50\WF50_closeShot_01",1},
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\LongRangeRifles\WF50\WF50_closeShot_02",1}
		};
		volume = db0;
		range = 100;
		rangeCurve = closeShotCurve;
	};
	class WF50_midShot_SoundShader
	{
		samples[] =
		{
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\LongRangeRifles\WF50\WF50_midShot_01",1},
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\LongRangeRifles\WF50\WF50_midShot_02",1},
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\LongRangeRifles\WF50\WF50_midShot_03",1}
		};
		volume = db-3;
		range = 2500;
		rangeCurve[] =
		{
			{0,0.2},
			{100,1},
			{300,0},
			{1500,0}
		};
	};
	class WF50_distShot_SoundShader
	{
		samples[] =
		{
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\LongRangeRifles\WF50\WF50_distShot_01",1},
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\LongRangeRifles\WF50\WF50_distShot_02",1},
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\LongRangeRifles\WF50\WF50_distShot_03",1}
		};
		volume = db6;
		range = 2500;
		rangeCurve[] =
		{
			{0,0},
			{100,0},
			{300,1},
			{1500,1}
		};
	};
	class WF50_tailDistant_SoundShader
	{
		samples[] =
		{
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\LongRangeRifles\WF50\WF50_taildistant",1}
		};
		volume = db0;
		range = 2500;
		rangeCurve[] =
		{
			{0,0},
			{300,1},
			{2500,1}
		};
		limitation = true;
	};
	class WF50_tailForest_SoundShader
	{
		samples[] =
		{
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\LongRangeRifles\WF50\WF50_tailforest",1}
		};
		volume = (1-interior/1.4)*forest/3;
		range = 2500;
		rangeCurve[] =
		{
			{0,1},
			{2500,0.3}
		};
		limitation = true;
	};
	class WF50_tailHouses_SoundShader
	{
		samples[] =
		{
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\LongRangeRifles\WF50\WF50_tailhouses",1}
		};
		volume = (1-interior/1.4)*houses/3;
		range = 1500;
		rangeCurve[] =
		{
			{0,1},
			{300,0.3},
			{1500,0.3}
		};
		limitation = true;
	};
	class WF50_tailInterior_SoundShader
	{
		samples[] =
		{
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\LongRangeRifles\WF50\WF50_tailinterior",1}
		};
		volume = interior;
		range = 350;
		rangeCurve[] =
		{
			{0,1},
			{50,0.2},
			{100,0.05},
			{350,0}
		};
		limitation = true;
	};
	class WF50_tailMeadows_SoundShader
	{
		samples[] =
		{
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\LongRangeRifles\WF50\WF50_tailmeadows",1}
		};
		volume = (1-interior/1.4)*(meadows/2 max sea/2)/3;
		range = 2500;
		rangeCurve[] =
		{
			{0,1},
			{2500,0.3}
		};
		limitation = true;
	};
	class WF50_tailTrees_SoundShader
	{
		samples[] =
		{
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\LongRangeRifles\WF50\WF50_tailtrees",1}
		};
		volume = (1-interior/1.4)*trees/3;
		range = 2500;
		rangeCurve[] =
		{
			{0,1},
			{2500,0.3}
		};
		limitation = true;
	};
	// Zafir 7.62 mm
	class Zafir_silencerShot_SoundShader
	{
		samples[] =
		{
			{"\A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR01_silencerShot_01",1},
			{"\A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR01_silencerShot_02",1},
			{"\A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR01_silencerShot_03",1}
		};
		volume = db0;
		range = 150;
		rangeCurve = closeShotCurve;
	};
	class Zafir_silencerTailForest_SoundShader
	{
		samples[] =
		{
			{"\A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR01_silencerTailForest",1}
		};
		volume = (1-interior/1.4)*forest/3;
		range = 150;
		rangeCurve[] =
		{
			{0,1},
			{150,0.3}
		};
		limitation = true;
	};
	class Zafir_silencerTailHouses_SoundShader
	{
		samples[] =
		{
			{"\A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR01_silencerTailHouses",1}
		};
		volume = (1-interior/1.4)*houses/3;
		range = 150;
		rangeCurve[] =
		{
			{0,1},
			{150,0}
		};
		limitation = true;
	};
	class Zafir_silencerTailInterior_SoundShader
	{
		samples[] =
		{
			{"\A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR01_silencerTailInterior",1}
		};
		volume = interior;
		range = 150;
		rangeCurve[] =
		{
			{50,0.3},
			{150,0}
		};
		limitation = true;
	};
	class Zafir_silencerTailMeadows_SoundShader
	{
		samples[] =
		{
			{"\A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR01_silencerTailMeadows",1}
		};
		volume = (1-interior/1.4)*(meadows/2 max sea/2)/3;
		range = 150;
		rangeCurve[] =
		{
			{0,1},
			{150,0.3}
		};
		limitation = true;
	};
	class Zafir_silencerTailTrees_SoundShader
	{
		samples[] =
		{
			{"\A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR01_silencerTailTrees",1}
		};
		volume = (1-interior/1.4)*trees/3;
		range = 150;
		rangeCurve[] =
		{
			{0,1},
			{150,0.3}
		};
		limitation = true;
	};
	// G17 9 mm
	class G17_Closure_SoundShader
	{
		samples[] =
		{
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Pistols\G17\G17_closure_01",1},
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Pistols\G17\G17_closure_02",1}
		};
		range = 5;
		volume = db-11;
	};
	class G17_closeShot_SoundShader
	{
		samples[] =
		{
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Pistols\G17\G17_closeShot_01",1},
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Pistols\G17\G17_closeShot_02",1},
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Pistols\G17\G17_closeShot_03",1}
		};
		volume = db0;
		range = 50;
		rangeCurve = closeShotCurve;
	};
	class G17_midShot_SoundShader
	{
		samples[] =
		{
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Pistols\G17\G17_midShot_01",1},
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Pistols\G17\G17_midShot_02",1},
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Pistols\G17\G17_midShot_03",1}
		};
		volume = db-3;
		range = 1200;
		rangeCurve[] =
		{
			{0,0.2},
			{50,1},
			{150,0},
			{1200,0}
		};
	};
	class G17_distShot_SoundShader
	{
		samples[] =
		{
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Pistols\G17\G17_distShot_01",1},
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Pistols\G17\G17_distShot_02",1},
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Pistols\G17\G17_distShot_03",1}
		};
		volume = db0;
		range = 1200;
		rangeCurve[] =
		{
			{0,0},
			{50,0},
			{150,1},
			{1200,1}
		};
	};
	class G17_tailDistant_SoundShader
	{
		samples[] =
		{
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Pistols\G17\G17_taildistant",1}
		};
		volume = db0;
		range = 1200;
		rangeCurve[] =
		{
			{0,0},
			{300,0.7},
			{1200,1}
		};
		limitation = true;
	};
	class G17_tailForest_SoundShader
	{
		samples[] =
		{
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Pistols\G17\G17_tailforest",1}
		};
		volume = (1-interior/1.4)*forest/3;
		range = 1200;
		rangeCurve[] =
		{
			{0,1},
			{1200,0}
		};
		limitation = true;
	};
	class G17_tailHouses_SoundShader
	{
		samples[] =
		{
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Pistols\G17\G17_tailhouses",1}
		};
		volume = (1-interior/1.4)*houses/3;
		range = 1200;
		rangeCurve[] =
		{
			{0,1},
			{150,0.3},
			{1200,0}
		};
		limitation = true;
	};
	class G17_tailInterior_SoundShader
	{
		samples[] =
		{
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Pistols\G17\G17_tailinterior",1}
		};
		volume = interior;
		range = 250;
		rangeCurve[] =
		{
			{0,1},
			{30,0.4},
			{100,0.2},
			{250,0}
		};
		limitation = true;
	};
	class G17_tailMeadows_SoundShader
	{
		samples[] =
		{
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Pistols\G17\G17_tailmeadows",1}
		};
		volume = (1-interior/1.4)*(meadows/2 max sea/2)/3;
		range = 1200;
		rangeCurve[] =
		{
			{0,1},
			{1200,0}
		};
		limitation = true;
	};
	class G17_tailTrees_SoundShader
	{
		samples[] =
		{
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Pistols\G17\G17_tailtrees",1}
		};
		volume = (1-interior/1.4)*trees/3;
		range = 1200;
		rangeCurve[] =
		{
			{0,1},
			{1200,0}
		};
		limitation = true;
	};
	class G17_silencerShot_SoundShader
	{
		samples[] =
		{
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Pistols\G17\G17_silencerShot_01",1},
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Pistols\G17\G17_silencerShot_02",1},
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Pistols\G17\G17_silencerShot_03",1}
		};
		volume = db0;
		range = 150;
		rangeCurve = closeShotCurve;
	};
	class G17_silencerTailForest_SoundShader
	{
		samples[] =
		{
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Pistols\G17\G17_silencerTailForest",1}
		};
		volume = (1-interior/1.4)*forest/3;
		range = 150;
		rangeCurve[] =
		{
			{0,1},
			{150,0.3}
		};
		limitation = true;
	};
	class G17_silencerTailHouses_SoundShader
	{
		samples[] =
		{
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Pistols\G17\G17_silencerTailHouses",1}
		};
		volume = (1-interior/1.4)*houses/3;
		range = 150;
		rangeCurve[] =
		{
			{0,1},
			{150,0}
		};
		limitation = true;
	};
	class G17_silencerTailInterior_SoundShader
	{
		samples[] =
		{
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Pistols\G17\G17_silencerTailInterior",1}
		};
		volume = interior;
		range = 150;
		rangeCurve[] =
		{
			{0,1},
			{50,0.3},
			{150,0}
		};
		limitation = true;
	};
	class G17_silencerTailMeadows_SoundShader
	{
		samples[] =
		{
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Pistols\G17\G17_silencerTailMeadows",1}
		};
		volume = (1-interior/1.4)*(meadows/2 max sea/2)/3;
		range = 150;
		rangeCurve[] =
		{
			{0,1},
			{150,0.3}
		};
		limitation = true;
	};
	class G17_silencerTailTrees_SoundShader
	{
		samples[] =
		{
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Pistols\G17\G17_silencerTailTrees",1}
		};
		volume = (1-interior/1.4)*trees/3;
		range = 150;
		rangeCurve[] =
		{
			{0,1},
			{150,0.3}
		};
		limitation = true;
	};
	// Mk26 12.7 mm
	class Mk26_Closure_SoundShader
	{
		samples[] =
		{
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Pistols\Mk26\Mk26_closure_01",1},
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Pistols\Mk26\Mk26_closure_02",1}
		};
		range = 5;
		volume = db-8;
	};
	class Mk26_closeShot_SoundShader
	{
		samples[] =
		{
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Pistols\Mk26\Mk26_closeShot_01",1},
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Pistols\Mk26\Mk26_closeShot_02",1},
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Pistols\Mk26\Mk26_closeShot_03",1}
		};
		volume = db-4;
		range = 50;
		rangeCurve = closeShotCurve;
	};
	class Mk26_midShot_SoundShader
	{
		samples[] =
		{
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Pistols\Mk26\Mk26_midShot_01",1},
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Pistols\Mk26\Mk26_midShot_02",1},
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Pistols\Mk26\Mk26_midShot_03",1}
		};
		volume = db0;
		range = 1200;
		rangeCurve[] =
		{
			{0,0.2},
			{50,1},
			{150,0},
			{1200,0}
		};
	};
	class Mk26_distShot_SoundShader
	{
		samples[] =
		{
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Pistols\Mk26\Mk26_distShot_01",1},
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Pistols\Mk26\Mk26_distShot_02",1},
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Pistols\Mk26\Mk26_distShot_03",1}
		};
		volume = db0;
		range = 1200;
		rangeCurve[] =
		{
			{0,0},
			{50,0},
			{150,1},
			{1200,1}
		};
	};
	class Mk26_tailForest_SoundShader
	{
		samples[] =
		{
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Pistols\Mk26\Mk26_tailforest",1}
		};
		volume = (1-interior/1.4)*forest/3;
		range = 1200;
		rangeCurve[] =
		{
			{0,1},
			{1200,0}
		};
		limitation = true;
	};
	class Mk26_tailHouses_SoundShader
	{
		samples[] =
		{
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Pistols\Mk26\Mk26_tailhouses",1}
		};
		volume = (1-interior/1.4)*houses/3;
		range = 1200;
		rangeCurve[] =
		{
			{0,1},
			{150,0.3},
			{1200,0}
		};
		limitation = true;
	};
	class Mk26_tailInterior_SoundShader
	{
		samples[] =
		{
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Pistols\Mk26\Mk26_tailinterior",1}
		};
		volume = interior;
		range = 250;
		rangeCurve[] =
		{
			{0,1},
			{30,0.4},
			{100,0.2},
			{250,0}
		};
		limitation = true;
	};
	class Mk26_tailMeadows_SoundShader
	{
		samples[] =
		{
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Pistols\Mk26\Mk26_tailmeadows",1}
		};
		volume = (1-interior/1.4)*(meadows/2 max sea/2)/3;
		range = 1200;
		rangeCurve[] =
		{
			{0,1},
			{1200,0}
		};
		limitation = true;
	};
	class Mk26_tailTrees_SoundShader
	{
		samples[] =
		{
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Pistols\Mk26\Mk26_tailtrees",1}
		};
		volume = (1-interior/1.4)*trees/3;
		range = 1200;
		rangeCurve[] =
		{
			{0,1},
			{1200,0}
		};
		limitation = true;
	};
	// RFL 7.62 mm
	class RFL_Closure_SoundShader
	{
		samples[] =
		{
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Rifles\RFL\RFL_closure_01",1},
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Rifles\RFL\RFL_closure_02",1}
		};
		range = 5;
		volume = db-7;
	};
	class RFL_closeShot_SoundShader
	{
		samples[] =
		{
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Rifles\RFL\RFL_closeShot_01",1},
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Rifles\RFL\RFL_closeShot_02",1},
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Rifles\RFL\RFL_closeShot_03",1}
		};
		volume = db-2;
		range = 50;
		rangeCurve = closeShotCurve;
	};
	class RFL_midShot_SoundShader
	{
		samples[] =
		{
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Rifles\RFL\RFL_midShot_01",1},
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Rifles\RFL\RFL_midShot_02",1},
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Rifles\RFL\RFL_midShot_03",1}
		};
		volume = db-4;
		range = 1800;
		rangeCurve[] =
		{
			{0,0.2},
			{50,1},
			{300,0},
			{1800,0}
		};
	};
	class RFL_distShot_SoundShader
	{
		samples[] =
		{
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Rifles\RFL\RFL_distShot_01",1},
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Rifles\RFL\RFL_distShot_02",1},
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Rifles\RFL\RFL_distShot_03",1}
		};
		volume = db-4;
		range = 1800;
		rangeCurve[] =
		{
			{0,0},
			{50,0},
			{300,1},
			{1800,1}
	  };
	};
	class RFL_tailDistant_SoundShader
	{
		samples[] =
		{
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Rifles\RFL\RFL_taildistant",1}
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
	class RFL_tailForest_SoundShader
	{
		samples[] =
		{
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Rifles\RFL\RFL_tailforest",1}
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
	class RFL_tailHouses_SoundShader
	{
		samples[] =
		{
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Rifles\RFL\RFL_tailhouses",1}
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
	class RFL_tailInterior_SoundShader
	{
		samples[] =
		{
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Rifles\RFL\RFL_tailinterior",1}
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
	class RFL_tailMeadows_SoundShader
	{
		samples[] =
		{
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Rifles\RFL\RFL_tailmeadows",1}
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
	class RFL_tailTrees_SoundShader
	{
		samples[] =
		{
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Rifles\RFL\RFL_tailtrees",1}
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
	// L85A3 6.5 mm
	class L85A3_Closure_SoundShader
	{
		samples[] =
		{
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Rifles\L85A3\L85A3_closure_01",1},
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Rifles\L85A3\L85A3_closure_02",1}
		};
		range = 5;
		volume = db-7;
	};
	class L85A3_closeShot_SoundShader
	{
		samples[] =
		{
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Rifles\L85A3\L85A3_closeShot_01",1},
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Rifles\L85A3\L85A3_closeShot_02",1},
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Rifles\L85A3\L85A3_closeShot_03",1}
		};
		volume = db-2;
		range = 50;
		rangeCurve = closeShotCurve;
	};
	class L85A3_midShot_SoundShader
	{
		samples[] =
		{
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Rifles\L85A3\L85A3_midShot_01",1},
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Rifles\L85A3\L85A3_midShot_02",1},
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Rifles\L85A3\L85A3_midShot_03",1}
		};
		volume = db-4;
		range = 1800;
		rangeCurve[] =
		{
			{0,0.2},
			{50,1},
			{300,0},
			{1800,0}
		};
	};
	class L85A3_distShot_SoundShader
	{
		samples[] =
		{
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Rifles\L85A3\L85A3_distShot_01",1},
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Rifles\L85A3\L85A3_distShot_02",1},
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Rifles\L85A3\L85A3_distShot_03",1}
		};
		volume = db-4;
		range = 1800;
		rangeCurve[] =
		{
			{0,0},
			{50,0},
			{300,1},
			{1800,1}
	  };
	};
	class L85A3_tailDistant_SoundShader
	{
		samples[] =
		{
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Rifles\L85A3\L85A3_taildistant",1}
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
	class L85A3_tailForest_SoundShader
	{
		samples[] =
		{
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Rifles\L85A3\L85A3_tailforest",1}
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
	class L85A3_tailHouses_SoundShader
	{
		samples[] =
		{
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Rifles\L85A3\L85A3_tailhouses",1}
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
	class L85A3_tailInterior_SoundShader
	{
		samples[] =
		{
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Rifles\L85A3\L85A3_tailinterior",1}
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
	class L85A3_tailMeadows_SoundShader
	{
		samples[] =
		{
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Rifles\L85A3\L85A3_tailmeadows",1}
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
	class L85A3_tailTrees_SoundShader
	{
		samples[] =
		{
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Rifles\L85A3\L85A3_tailtrees",1}
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
	class L85A3_silencerShot_SoundShader
	{
		samples[] =
		{
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Rifles\L85A3\L85A3_silencerShot_01",1},
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Rifles\L85A3\L85A3_silencerShot_02",1},
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Rifles\L85A3\L85A3_silencerShot_03",1}
		};
		volume = db0;
		range = 150;
		rangeCurve = closeShotCurve;
	};
	class L85A3_silencerTailForest_SoundShader
	{
		samples[] =
		{
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Rifles\L85A3\L85A3_silencerTailForest",1}
		};
		volume = (1-interior/1.4)*forest/3;
		range = 150;
		rangeCurve[] =
		{
			{0,1},
			{150,0.3}
		};
		limitation = true;
	};
	class L85A3_silencerTailHouses_SoundShader
	{
		samples[] =
		{
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Rifles\L85A3\L85A3_silencerTailHouses",1}
		};
		volume = (1-interior/1.4)*houses/3;
		range = 150;
		rangeCurve[] =
		{
			{0,1},
			{150,0}
		};
		limitation = true;
	};
	class L85A3_silencerTailInterior_SoundShader
	{
		samples[] =
		{
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Rifles\L85A3\L85A3_silencerTailInterior",1}
		};
		volume = interior;
		range = 150;
		rangeCurve[] =
		{
			{0,1},
			{50,0.3},
			{150,0}
		};
		limitation = true;
	};
	class L85A3_silencerTailMeadows_SoundShader
	{
		samples[] =
		{
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Rifles\L85A3\L85A3_silencerTailMeadows",1}
		};
		volume = (1-interior/1.4)*(meadows/2 max sea/2)/3;
		range = 150;
		rangeCurve[] =
		{
			{0,1},{150,0.3}
		};
		limitation = true;
	};
	class L85A3_silencerTailTrees_SoundShader
	{
		samples[] =
		{
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Rifles\L85A3\L85A3_silencerTailTrees",1}
		};
		volume = (1-interior/1.4)*trees/3;
		range = 150;
		rangeCurve[] =
		{
			{0,1},
			{150,0.3}
		};
		limitation = true;
	};
	// Mk17 7.62 mm
	class SCAR_Closure_SoundShader
	{
		samples[] =
		{
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Rifles\SCAR\SCAR_closure_01",1},
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Rifles\SCAR\SCAR_closure_02",1}
		};
		range = 5;
		volume = db-7;
	};
	class SCAR_closeShot_SoundShader
	{
		samples[] =
		{
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Rifles\SCAR\SCAR_closeShot_01",1},
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Rifles\SCAR\SCAR_closeShot_02",1},
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Rifles\SCAR\SCAR_closeShot_03",1}
		};
		volume = db0;
		range = 50;
		rangeCurve = closeShotCurve;
	};
	class SCAR_midShot_SoundShader
	{
		samples[] =
		{
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Rifles\SCAR\SCAR_midShot_01",1},
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Rifles\SCAR\SCAR_midShot_02",1},
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Rifles\SCAR\SCAR_midShot_03",1}
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
	class SCAR_distShot_SoundShader
	{
		samples[] =
		{
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Rifles\SCAR\SCAR_distShot_01",1},
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Rifles\SCAR\SCAR_distShot_02",1},
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Rifles\SCAR\SCAR_distShot_03",1}
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
	class SCAR_tailDistant_SoundShader
	{
		samples[] =
		{
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Rifles\SCAR\SCAR_taildistant",1}
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
	class SCAR_tailForest_SoundShader
	{
		samples[] =
		{
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Rifles\SCAR\SCAR_tailforest",1}
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
	class SCAR_tailHouses_SoundShader
	{
		samples[] =
		{
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Rifles\SCAR\SCAR_tailhouses",1}
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
	class SCAR_tailInterior_SoundShader
	{
		samples[] =
		{
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Rifles\SCAR\SCAR_tailinterior",1}
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
	class SCAR_tailMeadows_SoundShader
	{
		samples[] =
		{
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Rifles\SCAR\SCAR_tailmeadows",1}
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
	class SCAR_tailTrees_SoundShader
	{
		samples[] =
		{
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Rifles\SCAR\SCAR_tailtrees",1}
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
	class SCAR_silencerShot_SoundShader
	{
		samples[] =
		{
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Rifles\SCAR\SCAR_silencerShot_01",1},
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Rifles\SCAR\SCAR_silencerShot_02",1},
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Rifles\SCAR\SCAR_silencerShot_03",1}
		};
		volume = db0;
		range = 150;
		rangeCurve = closeShotCurve;
	};
	class SCAR_silencerTailForest_SoundShader
	{
		samples[] =
		{
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Rifles\SCAR\SCAR_silencerTailForest",1}
		};
		volume = (1-interior/1.4)*forest/3;
		range = 150;
		rangeCurve[] =
		{
			{0,1},
			{150,0.3}
		};
		limitation = true;
	};
	class SCAR_silencerTailHouses_SoundShader
	{
		samples[] =
		{
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Rifles\SCAR\SCAR_silencerTailHouses",1}
		};
		volume = (1-interior/1.4)*houses/3;
		range = 150;
		rangeCurve[] =
		{
			{0,1},
			{150,0}
		};
		limitation = true;
	};
	class SCAR_silencerTailInterior_SoundShader
	{
		samples[] =
		{
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Rifles\SCAR\SCAR_silencerTailInterior",1}
		};
		volume = interior;
		range = 150;
		rangeCurve[] =
		{
			{0,1},
			{50,0.3},
			{150,0}
		};
		limitation = true;
	};
	class SCAR_silencerTailMeadows_SoundShader
	{
		samples[] =
		{
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Rifles\SCAR\SCAR_silencerTailMeadows",1}
		};
		volume = (1-interior/1.4)*(meadows/2 max sea/2)/3;
		range = 150;
		rangeCurve[] =
		{
			{0,1},{150,0.3}
		};
		limitation = true;
	};
	class SCAR_silencerTailTrees_SoundShader
	{
		samples[] =
		{
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Rifles\SCAR\SCAR_silencerTailTrees",1}
		};
		volume = (1-interior/1.4)*trees/3;
		range = 150;
		rangeCurve[] =
		{
			{0,1},
			{150,0.3}
		};
		limitation = true;
	};
	// AA-40 12G
	class AA12_Closure_SoundShader
	{
		samples[] =
		{
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Shotguns\AA12\AA12_closure_01",1},
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Shotguns\AA12\AA12_closure_02",1}
		};
		range = 5;
		volume = db-3;
	};
	class AA12_closeShot_SoundShader
	{
		samples[] =
		{
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Shotguns\AA12\AA12_closeShot_01",1},
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Shotguns\AA12\AA12_closeShot_02",1},
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Shotguns\AA12\AA12_closeShot_03",1}
		};
		volume = db0;
		range = 50;
		rangeCurve = closeShotCurve;
	};
	class AA12_midShot_SoundShader
	{
		samples[] =
		{
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Shotguns\AA12\AA12_midShot_01",1},
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Shotguns\AA12\AA12_midShot_02",1},
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Shotguns\AA12\AA12_midShot_03",1}
		};
		volume = db-3;
		range = 1200;
		rangeCurve[] =
		{
			{0,0.2},
			{50,1},
			{150,0},
			{1200,0}
		};
	};
	class AA12_distShot_SoundShader
	{
		samples[] =
		{
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Shotguns\AA12\AA12_distShot_01",1},
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Shotguns\AA12\AA12_distShot_02",1},
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Shotguns\AA12\AA12_distShot_03",1}
		};
		volume = db0;
		range = 1200;
		rangeCurve[] =
		{
			{0,0},
			{50,0},
			{150,1},
			{1200,1}
		};
	};
	class AA12_tailForest_SoundShader
	{
		samples[] =
		{
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Shotguns\AA12\AA12_tailforest",1}
		};
		volume = (1-interior/1.4)*forest/3;
		range = 1200;
		rangeCurve[] =
		{
			{0,1},
			{1200,0}
		};
		limitation = true;
	};
	class AA12_tailHouses_SoundShader
	{
		samples[] =
		{
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Shotguns\AA12\AA12_tailhouses",1}
		};
		volume = (1-interior/1.4)*houses/3;
		range = 1200;
		rangeCurve[] =
		{
			{0,1},
			{150,0.3},
			{1200,0}
		};
		limitation = true;
	};
	class AA12_tailInterior_SoundShader
	{
		samples[] =
		{
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Shotguns\AA12\AA12_tailinterior",1}
		};
		volume = interior;
		range = 250;
		rangeCurve[] =
		{
			{0,1},
			{30,0.4},
			{100,0.2},
			{250,0}
		};
		limitation = true;
	};
	class AA12_tailMeadows_SoundShader
	{
		samples[] =
		{
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Shotguns\AA12\AA12_tailmeadows",1}
		};
		volume = (1-interior/1.4)*(meadows/2 max sea/2)/3;
		range = 1200;
		rangeCurve[] =
		{
			{0,1},
			{1200,0}
		};
		limitation = true;
	};
	class AA12_tailTrees_SoundShader
	{
		samples[] =
		{
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Shotguns\AA12\AA12_tailtrees",1}
		};
		volume = (1-interior/1.4)*trees/3;
		range = 1200;
		rangeCurve[] =
		{
			{0,1},
			{1200,0}
		};
		limitation = true;
	};
	// Bulldog 12G
	class KSG_Closure_SoundShader
	{
		samples[] =
		{
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Shotguns\KSG\KSG_closure_01",1},
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Shotguns\KSG\KSG_closure_02",1}
		};
		range = 5;
		volume = db-3;
	};
	class KSG_closeShot_SoundShader
	{
		samples[] =
		{
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Shotguns\KSG\KSG_closeShot_01",1},
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Shotguns\KSG\KSG_closeShot_02",1},
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Shotguns\KSG\KSG_closeShot_03",1}
		};
		volume = db0;
		range = 50;
		rangeCurve = closeShotCurve;
	};
	class KSG_midShot_SoundShader
	{
		samples[] =
		{
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Shotguns\KSG\KSG_midShot_01",1},
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Shotguns\KSG\KSG_midShot_02",1},
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Shotguns\KSG\KSG_midShot_03",1}
		};
		volume = db-3;
		range = 1200;
		rangeCurve[] =
		{
			{0,0.2},
			{50,1},
			{150,0},
			{1200,0}
		};
	};
	class KSG_distShot_SoundShader
	{
		samples[] =
		{
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Shotguns\KSG\KSG_distShot_01",1},
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Shotguns\KSG\KSG_distShot_02",1},
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Shotguns\KSG\KSG_distShot_03",1}
		};
		volume = db0;
		range = 1200;
		rangeCurve[] =
		{
			{0,0},
			{50,0},
			{150,1},
			{1200,1}
		};
	};
	class KSG_tailForest_SoundShader
	{
		samples[] =
		{
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Shotguns\KSG\KSG_tailforest",1}
		};
		volume = (1-interior/1.4)*forest/3;
		range = 1200;
		rangeCurve[] =
		{
			{0,1},
			{1200,0}
		};
		limitation = true;
	};
	class KSG_tailHouses_SoundShader
	{
		samples[] =
		{
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Shotguns\KSG\KSG_tailhouses",1}
		};
		volume = (1-interior/1.4)*houses/3;
		range = 1200;
		rangeCurve[] =
		{
			{0,1},
			{150,0.3},
			{1200,0}
		};
		limitation = true;
	};
	class KSG_tailInterior_SoundShader
	{
		samples[] =
		{
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Shotguns\KSG\KSG_tailinterior",1}
		};
		volume = interior;
		range = 250;
		rangeCurve[] =
		{
			{0,1},
			{30,0.4},
			{100,0.2},
			{250,0}
		};
		limitation = true;
	};
	class KSG_tailMeadows_SoundShader
	{
		samples[] =
		{
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Shotguns\KSG\KSG_tailmeadows",1}
		};
		volume = (1-interior/1.4)*(meadows/2 max sea/2)/3;
		range = 1200;
		rangeCurve[] =
		{
			{0,1},
			{1200,0}
		};
		limitation = true;
	};
	class KSG_tailTrees_SoundShader
	{
		samples[] =
		{
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Shotguns\KSG\KSG_tailtrees",1}
		};
		volume = (1-interior/1.4)*trees/3;
		range = 1200;
		rangeCurve[] =
		{
			{0,1},
			{1200,0}
		};
		limitation = true;
	};
	class KSG_Pump_SoundShader
	{
		samples[] =
		{
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Shotguns\KSG\KSG_pump_01",1}
		};
		range = 5;
		volume = db-4;
	};
	// M4 SSAS 12G
	class M4_SSAS_Closure_SoundShader
	{
		samples[] =
		{
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Shotguns\M4_SSAS\M4_SSAS_closure_01",1},
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Shotguns\M4_SSAS\M4_SSAS_closure_02",1}
		};
		range = 5;
		volume = db-3;
	};
	class M4_SSAS_closeShot_SoundShader
	{
		samples[] =
		{
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Shotguns\M4_SSAS\M4_SSAS_closeShot_01",1},
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Shotguns\M4_SSAS\M4_SSAS_closeShot_02",1},
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Shotguns\M4_SSAS\M4_SSAS_closeShot_03",1}
		};
		volume = db0;
		range = 50;
		rangeCurve = closeShotCurve;
	};
	class M4_SSAS_midShot_SoundShader
	{
		samples[] =
		{
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Shotguns\M4_SSAS\M4_SSAS_midShot_01",1},
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Shotguns\M4_SSAS\M4_SSAS_midShot_02",1},
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Shotguns\M4_SSAS\M4_SSAS_midShot_03",1}
		};
		volume = db-3;
		range = 1200;
		rangeCurve[] =
		{
			{0,0.2},
			{50,1},
			{150,0},
			{1200,0}
		};
	};
	class M4_SSAS_distShot_SoundShader
	{
		samples[] =
		{
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Shotguns\M4_SSAS\M4_SSAS_distShot_01",1},
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Shotguns\M4_SSAS\M4_SSAS_distShot_02",1},
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Shotguns\M4_SSAS\M4_SSAS_distShot_03",1}
		};
		volume = db0;
		range = 1200;
		rangeCurve[] =
		{
			{0,0},
			{50,0},
			{150,1},
			{1200,1}
		};
	};
	class M4_SSAS_tailForest_SoundShader
	{
		samples[] =
		{
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Shotguns\M4_SSAS\M4_SSAS_tailforest",1}
		};
		volume = (1-interior/1.4)*forest/3;
		range = 1200;
		rangeCurve[] =
		{
			{0,1},
			{1200,0}
		};
		limitation = true;
	};
	class M4_SSAS_tailHouses_SoundShader
	{
		samples[] =
		{
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Shotguns\M4_SSAS\M4_SSAS_tailhouses",1}
		};
		volume = (1-interior/1.4)*houses/3;
		range = 1200;
		rangeCurve[] =
		{
			{0,1},
			{150,0.3},
			{1200,0}
		};
		limitation = true;
	};
	class M4_SSAS_tailInterior_SoundShader
	{
		samples[] =
		{
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Shotguns\M4_SSAS\M4_SSAS_tailinterior",1}
		};
		volume = interior;
		range = 250;
		rangeCurve[] =
		{
			{0,1},
			{30,0.4},
			{100,0.2},
			{250,0}
		};
		limitation = true;
	};
	class M4_SSAS_tailMeadows_SoundShader
	{
		samples[] =
		{
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Shotguns\M4_SSAS\M4_SSAS_tailmeadows",1}
		};
		volume = (1-interior/1.4)*(meadows/2 max sea/2)/3;
		range = 1200;
		rangeCurve[] =
		{
			{0,1},
			{1200,0}
		};
		limitation = true;
	};
	class M4_SSAS_tailTrees_SoundShader
	{
		samples[] =
		{
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Shotguns\M4_SSAS\M4_SSAS_tailtrees",1}
		};
		volume = (1-interior/1.4)*trees/3;
		range = 1200;
		rangeCurve[] =
		{
			{0,1},
			{1200,0}
		};
		limitation = true;
	};
	// SK-12 12G
	class MP153_Closure_SoundShader
	{
		samples[] =
		{
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Shotguns\MP153\MP153_closure_01",1},
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Shotguns\MP153\MP153_closure_02",1}
		};
		range = 5;
		volume = db-13;
	};
	class MP153_closeShot_SoundShader
	{
		samples[] =
		{
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Shotguns\MP153\MP153_closeShot_01",1},
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Shotguns\MP153\MP153_closeShot_02",1},
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Shotguns\MP153\MP153_closeShot_03",1}
		};
		volume = db0;
		range = 50;
		rangeCurve = closeShotCurve;
	};
	class MP153_midShot_SoundShader
	{
		samples[] =
		{
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Shotguns\MP153\MP153_midShot_01",1},
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Shotguns\MP153\MP153_midShot_02",1},
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Shotguns\MP153\MP153_midShot_03",1}
		};
		volume = db-3;
		range = 1200;
		rangeCurve[] =
		{
			{0,0.2},
			{50,1},
			{150,0},
			{1200,0}
		};
	};
	class MP153_distShot_SoundShader
	{
		samples[] =
		{
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Shotguns\MP153\MP153_distShot_01",1},
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Shotguns\MP153\MP153_distShot_02",1},
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Shotguns\MP153\MP153_distShot_03",1}
		};
		volume = db0;
		range = 1200;
		rangeCurve[] =
		{
			{0,0},
			{50,0},
			{150,1},
			{1200,1}
		};
	};
	class MP153_tailForest_SoundShader
	{
		samples[] =
		{
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Shotguns\MP153\MP153_tailforest",1}
		};
		volume = (1-interior/1.4)*forest/3;
		range = 1200;
		rangeCurve[] =
		{
			{0,1},
			{1200,0}
		};
		limitation = true;
	};
	class MP153_tailHouses_SoundShader
	{
		samples[] =
		{
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Shotguns\MP153\MP153_tailhouses",1}
		};
		volume = (1-interior/1.4)*houses/3;
		range = 1200;
		rangeCurve[] =
		{
			{0,1},
			{150,0.3},
			{1200,0}
		};
		limitation = true;
	};
	class MP153_tailInterior_SoundShader
	{
		samples[] =
		{
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Shotguns\MP153\MP153_tailinterior",1}
		};
		volume = interior;
		range = 250;
		rangeCurve[] =
		{
			{0,1},
			{30,0.4},
			{100,0.2},
			{250,0}
		};
		limitation = true;
	};
	class MP153_tailMeadows_SoundShader
	{
		samples[] =
		{
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Shotguns\MP153\MP153_tailmeadows",1}
		};
		volume = (1-interior/1.4)*(meadows/2 max sea/2)/3;
		range = 1200;
		rangeCurve[] =
		{
			{0,1},
			{1200,0}
		};
		limitation = true;
	};
	class MP153_tailTrees_SoundShader
	{
		samples[] =
		{
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Shotguns\MP153\MP153_tailtrees",1}
		};
		volume = (1-interior/1.4)*trees/3;
		range = 1200;
		rangeCurve[] =
		{
			{0,1},
			{1200,0}
		};
		limitation = true;
	};
	// MP7 4.6 mm
	class SMG04_Closure_SoundShader
	{
		samples[] =
		{
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\SMGs\SMG04\SMG04_closure_01",1},
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\SMGs\SMG04\SMG04_closure_02",1}
		};
		range = 5;
		volume = db-7;
	};
	class SMG04_closeShot_SoundShader
	{
		samples[] =
		{
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\SMGs\SMG04\SMG04_closeShot_01",1},
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\SMGs\SMG04\SMG04_closeShot_02",1},
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\SMGs\SMG04\SMG04_closeShot_03",1}
		};
		volume = db-2;
		range = 50;
		rangeCurve = closeShotCurve;
	};
	class SMG04_midShot_SoundShader
	{
		samples[] =
		{
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\SMGs\SMG04\SMG04_midShot_01",1},
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\SMGs\SMG04\SMG04_midShot_02",1},
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\SMGs\SMG04\SMG04_midShot_03",1}
		};
		volume = db-6;
		range = 2000;
		rangeCurve[] =
		{
			{0,0.2},
			{50,1},
			{300,0},
			{2000,0}
		};
	};
	class SMG04_distShot_SoundShader
	{
		samples[] =
		{
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\SMGs\SMG04\SMG04_distShot_01",1},
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\SMGs\SMG04\SMG04_distShot_02",1},
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\SMGs\SMG04\SMG04_distShot_03",1}
		};
		volume = db0;
		range = 2000;
		rangeCurve[] =
		{
			{0,0},
			{50,0},
			{300,1},
			{2000,1}
		};
	};
	class SMG04_tailDistant_SoundShader
	{
		samples[] =
		{
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\SMGs\SMG04\SMG04_taildistant",1}
		};
		volume = db5;
		range = 1500;
		rangeCurve[] =
		{
			{0,0},
			{300,0.7},
			{1500,1}
		};
		limitation = true;
	};
	class SMG04_tailForest_SoundShader
	{
		samples[] =
		{
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\SMGs\SMG04\SMG04_tailforest",1}
		};
		volume = (1-interior/1.4)*forest/3;
		range = 1500;
		rangeCurve[] =
		{
			{0,1},
			{1500,0.3}
		};
		limitation = true;
	};
	class SMG04_tailHouses_SoundShader
	{
		samples[] =
		{
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\SMGs\SMG04\SMG04_tailhouses",1}
		};
		volume = (1-interior/1.4)*houses/3;
		range = 1500;
		rangeCurve[] =
		{
			{0,1},
			{200,0.3},
			{1500,0.3}
		};
		limitation = true;
	};
	class SMG04_tailInterior_SoundShader
	{
		samples[] =
		{
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\SMGs\SMG04\SMG04_tailinterior",1}
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
	class SMG04_tailMeadows_SoundShader
	{
		samples[] =
		{
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\SMGs\SMG04\SMG04_tailmeadows",1}
		};
		volume = (1-interior/1.4)*(meadows/2 max sea/2)/3;
		range = 1500;
		rangeCurve[] =
		{
			{0,1},
			{1500,0.3}
		};
		limitation = true;
	};
	class SMG04_tailTrees_SoundShader
	{
		samples[] =
		{
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\SMGs\SMG04\SMG04_tailtrees",1}
		};
		volume = (1-interior/1.4)*trees/3;
		range = 1500;
		rangeCurve[] =
		{
			{0,1},
			{1500,0.3}
		};
		limitation = true;
	};
	class SMG04_silencerShot_SoundShader
	{
		samples[] =
		{
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\SMGs\SMG04\SMG04_silencerShot_01",1},
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\SMGs\SMG04\SMG04_silencerShot_02",1},
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\SMGs\SMG04\SMG04_silencerShot_03",1}
		};
		volume = db-5;
		range = 150;
		rangeCurve = closeShotCurve;
	};
	class SMG04_silencerTailForest_SoundShader
	{
		samples[] =
		{
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\SMGs\SMG04\SMG04_silencerTailForest",1}
		};
		volume = (1-interior/1.4)*forest/3;
		range = 150;
		rangeCurve[] =
		{
			{0,1},
			{150,0.3}
		};
		limitation = true;
	};
	class SMG04_silencerTailHouses_SoundShader
	{
		samples[] =
		{
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\SMGs\SMG04\SMG04_silencerTailHouses",1}
		};
		volume = (1-interior/1.4)*houses/3;
		range = 150;
		rangeCurve[] =
		{
			{0,1},
			{150,0}
		};
		limitation = true;
	};
	class SMG04_silencerTailInterior_SoundShader
	{
		samples[] =
		{
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\SMGs\SMG04\SMG04_silencerTailInterior",1}
		};
		volume = interior;
		range = 150;
		rangeCurve[] =
		{
			{0,1},
			{50,0.3},
			{150,0}
		};
		limitation = true;
	};
	class SMG04_silencerTailMeadows_SoundShader
	{
		samples[] =
		{
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\SMGs\SMG04\SMG04_silencerTailMeadows",1}
		};
		volume = (1-interior/1.4)*(meadows/2 max sea/2)/3;
		range = 150;
		rangeCurve[] =
		{
			{0,1},{150,0.3}
		};
		limitation = true;
	};
	class SMG04_silencerTailTrees_SoundShader
	{
		samples[] =
		{
			{"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\SMGs\SMG04\SMG04_silencerTailTrees",1}
		};
		volume = (1-interior/1.4)*trees/3;
		range = 150;
		rangeCurve[] =
		{
			{0,1},
			{150,0.3}
		};
		limitation = true;
	};
	class Plane_Fighter_RainExt_SoundShader
	{
		samples[] =
		{
			{"\A3\Sounds_F\vehicles\noises\rain1_ext",1}
		};
		frequency = 1;
		volume = camPos*rain*(speed factor[50,0]);
		range = 60;
	};
	class Plane_Fighter_RainInt_SoundShader
	{
		samples[] =
		{
			{"\A3\Sounds_F\vehicles\noises\rain1_int",1}
		};
		frequency = 1;
		volume = (1-camPos)*rain*(speed factor[50,0]);
		range = 60;
	};
	class Plane_Fighter_GStress_SoundShader
	{
		samples[] =
		{
			{"\A3\Sounds_F\vehicles\noises\vehicle_stress2e",1}
		};
		frequency = 1;
		volume = engineOn * (1-camPos) * (gmeterZ factor[1, 2.5]);
		range = 50;
	};
	class Plane_Fighter_SpeedStress_SoundShader
	{
		samples[] =
		{
			{"\A3\Sounds_F\vehicles\noises\vehicle_stress3",1}
		};
		frequency = 1;
		volume = (1-camPos)*(speed factor[60,80]);
		range = 50;
	};
	class Plane_Fighter_GBreathing_SoundShader
	{
		samples[] =
		{
			{"\A3\Sounds_F\characters\human-sfx\diver-breath-4",1}
		};
		frequency = 1;
		volume = engineOn * (1-camPos) * (gmeterZ factor[1, 2.5]);
		range = 50;
	};
	// F-38C Peregrine
	class Plane_Fighter_05_EngineLowExt_SoundShader
	{
		samples[] =
		{
			{"\A3_Aegis\Sounds_F_Aegis\vehicles\air\Plane_Fighter_05\B_Plane_Fighter_05_engine_low_ext",1}
		};
		frequency = 1 min (rpm + 0.5)*(rpm factor[0, 1]);
		volume = 0.6 * machcone*engineOn*camPos*(rpm factor[0, 1])*(thrust factor[0.75, 0]);
		range = 1200;
	};
	class Plane_Fighter_05_EngineHighExt_SoundShader
	{
		samples[] =
		{
			{"\A3_Aegis\Sounds_F_Aegis\vehicles\air\Plane_Fighter_05\B_Plane_Fighter_05_engine_high_ext",1}
		};
		frequency = 1 min (rpm + 0.5)*(rpm factor[0.5, 1.1]);
		volume = 0.6 * machcone*engineOn*camPos*(rpm factor[0, 1])*(thrust factor[0, 0.75]);
		range = 1300;
	};
	class Plane_Fighter_05_ForsageExt_SoundShader
	{
		samples[] =
		{
			{"\A3_Aegis\Sounds_F_Aegis\vehicles\air\Plane_Fighter_05\B_Plane_Fighter_05_engine_forsage_ext",1}
		};
		frequency = 1.1;
		volume = 0.6 * machcone*engineOn*camPos*(thrust factor[0.6, 1.0]);
		range = 1500;
		rangeCurve[] =
		{
			{0,1},
			{200,0.75},
			{1000,0.25},
			{1500,0}
		};
	};
	class Plane_Fighter_05_WindNoiseExt_SoundShader
	{
		samples[] =
		{
			{"\A3\Sounds_F_Jets\vehicles\air\Shared\FX_Plane_Jet_wind_ext",1}
		};
		frequency = 3*(speed factor[1, 200]);
		volume = 0.6 * machcone*4*camPos*(speed factor[1, 200]);
		range = 200;
	};
	class Plane_Fighter_05_EngineExt_Middle_SoundShader
	{
		samples[] =
		{
			{"\A3_Aegis\Sounds_F_Aegis\vehicles\air\Plane_Fighter_05\B_Plane_Fighter_05_engine_middle",1}
		};
		frequency = 1;
		volume = 0.6 * machcone*camPos*(rpm factor[0.5, 1]);
		range = 4000;
		rangeCurve[] =
		{
			{0,1},
			{50,1},
			{4000,1}
		};
	};
	class Plane_Fighter_05_EngineExt_Dist_Front_SoundShader
	{
		samples[] =
		{
			{"\A3_Aegis\Sounds_F_Aegis\vehicles\air\Plane_Fighter_05\B_Plane_Fighter_05_engine_front",1}
		};
		frequency = 1;
		volume = 0.6 * machcone*camPos*(rpm factor[0.5, 1]);
		range = 5000;
		rangeCurve[] =
		{
			{0,0},
			{50,1},
			{5000,1}
		};
	};
	class Plane_Fighter_05_EngineExt_Dist_Rear_SoundShader
	{
		samples[] =
		{
			{"\A3_Aegis\Sounds_F_Aegis\vehicles\air\Plane_Fighter_05\B_Plane_Fighter_05_engine_back",1}
		};
		frequency = 1;
		volume = 0.6 * machcone*camPos*(rpm factor[0.5, 1]);
		range = 5000;
		rangeCurve[] =
		{
			{0,0},
			{50,1},
			{5000,1}
		};
	};
	class Plane_Fighter_05_EngineLowInt_SoundShader
	{
		samples[] =
		{
			{"\A3_Aegis\Sounds_F_Aegis\vehicles\air\Plane_Fighter_05\B_Plane_Fighter_05_engine_low_int",1}
		};
		frequency = 1 min (rpm + 0.5)*(rpm factor[0, 1]);
		volume = 1 * engineOn*(1-camPos)*(rpm factor[0.5, 1]);
	};
	class Plane_Fighter_05_EngineHighInt_SoundShader
	{
		samples[] =
		{
			{"\A3_Aegis\Sounds_F_Aegis\vehicles\air\Plane_Fighter_05\B_Plane_Fighter_05_engine_high_int",1}
		};
		frequency = 1 min (rpm + 0.25)*(rpm factor[0.25, 1.1]);
		volume = 1 * engineOn*(1-camPos)*(rpm factor[0, 1]);
	};
	class Plane_Fighter_05_ForsageInt_SoundShader
	{
		samples[] =
		{
			{"\A3_Aegis\Sounds_F_Aegis\vehicles\air\Plane_Fighter_05\B_Plane_Fighter_05_engine_forsage_int",1}
		};
		frequency = 1 min (rpm + 0.5)*(rpm factor[0, 1]);
		volume = 1 * engineOn*(1-camPos)*(rpm factor[0.5, 1])*(thrust factor[0.5, 1.0]);
	};
	class Plane_Fighter_05_WindNoiseInt_SoundShader
	{
		samples[] =
		{
			{"\A3\Sounds_F_Jets\vehicles\air\Shared\FX_Plane_Jet_wind_int",1}
		};
		frequency = 3*(speed factor[1, 200]);
		volume = 1 * 3*(1-camPos)*(speed factor[1, 200]);
	};
	class Plane_Fighter_05_VelocityInt_SoundShader
	{
		samples[] =
		{
			{"\A3\Sounds_F_Jets\vehicles\air\Shared\FX_Plane_Jet_velocity_int",1}
		};
		frequency = 0.75*(speed factor[1, 150]);
		volume = 1 * (1-camPos)*(gmeterZ factor[1.5, 6])*(speed factor[1, 50]);
	};
};