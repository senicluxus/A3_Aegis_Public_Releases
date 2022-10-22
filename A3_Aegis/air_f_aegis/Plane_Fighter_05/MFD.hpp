defaultUserMFDvalues[] =
{
	0.082,  // R
	0.408,  // G
	0.039,  // B
	0.8     // A
};
class MFD
{
	class F38_MFD_HORIZON
	{
		topLeft = "mfd lh";
		topRight = "mfd ph";
		bottomLeft = "mfd ld";
		borderLeft = 0.1;
		borderRight = 0.1;
		borderTop = 0.1;
		borderBottom = 0.1;
		color[] =
		{
			0.082, // R
			0.408, // G
			0.039, // B
			1 // A
		};
		enableParallax = false;
		class Pos10Vector
		{
			type = vector;
			pos0[] = 
			{
				0.5, // X
				0.5 // Y
			};
			pos10[] = 
			{
				1.225, // X
				1.1 // Y
			};
		};
		class Bones
		{
			class PlaneOrientation
			{
				type = "fixed";
				pos[] = {0.5,0.4};
			};
			class WeaponAim
			{
				type = "vector";
				source = "weapon";
				pos0[] = {0.5,0.555};
				pos10[] = {1.5,1.555};
			};
			class Velocity
			{
				type = "vector";
				source = "velocityToView";
				pos0[] = {0.5,0.53};
				pos10[] = {1.5,1.53};
			};
			class Level0: Pos10Vector
			{
				pos0[] = {0.5,0.4};
				pos10[] = {0.774,0.67};
				type = "horizon";
				angle = 0;
			};
			class LevelP5: Level0
			{
				angle = 5;
			};
			class LevelM5: Level0
			{
				angle = -5;
			};
			class LevelP10: Level0
			{
				angle = 10;
			};
			class LevelM10: Level0
			{
				angle = -10;
			};
			class LevelP15: Level0
			{
				angle = 15;
			};
			class LevelM15: Level0
			{
				angle = -15;
			};
			class LevelP20: Level0
			{
				angle = 20;
			};
			class LevelM20: Level0
			{
				angle = -20;
			};
			class LevelP25: Level0
			{
				angle = 25;
			};
			class LevelM25: Level0
			{
				angle = -25;
			};
			class LevelP30: Level0
			{
				angle = 30;
			};
			class LevelM30: Level0
			{
				angle = -30;
			};
			class LevelP35: Level0
			{
				angle = 35;
			};
			class LevelM35: Level0
			{
				angle = -35;
			};
			class LevelP40: Level0
			{
				angle = 40;
			};
			class LevelM40: Level0
			{
				angle = -40;
			};
			class LevelP45: Level0
			{
				angle = 45;
			};
			class LevelM45: Level0
			{
				angle = -45;
			};
			class LevelP50: Level0
			{
				angle = 50;
			};
			class LevelM50: Level0
			{
				angle = -50;
			};
			class LevelP60: Level0
			{
				angle = 60;
			};
			class LevelM60: Level0
			{
				angle = -60;
			};
			class LevelP70: Level0
			{
				angle = 70;
			};
			class LevelM70: Level0
			{
				angle = -70;
			};
			class LevelP80: Level0
			{
				angle = 80;
			};
			class LevelM80: Level0
			{
				angle = -80;
			};
			class LevelP90: Level0
			{
				angle = 90;
			};
			class LevelM90: Level0
			{
				angle = -90;
			};
		};
		class Draw
		{
			color[] = {0.082,0.408,0.039,1};
			alpha = 1.0;
			condition = "on";
			enableParallax = 0;
			class Horizont
			{
				clipTL[] = {0.255,0.105};
				clipBR[] = {0.845,0.725};
				class Dimmed
				{
					class Level0
					{
						type = "line";
						width = 3.0;
						points[] = {{"Level0",{0.75,0.0},1},{"Level0",{0.1,0.0},1},{},{"Level0",{-0.1,0.0},1},{"Level0",{-0.75,0.0},1}};
					};
					class LevelM5: Level0
					{
						type = "line";
						points[] = {{"LevelM5",{-0.235,-0.02},1},{"LevelM5",{-0.235,0},1},{},{"LevelM5",{-0.22,0},1},{"LevelM5",{-0.205,0},1},{},{"LevelM5",{-0.19,0},1},{"LevelM5",{-0.175,0},1},{},{"LevelM5",{-0.16,0},1},{"LevelM5",{-0.145,0},1},{},{"LevelM5",{-0.13,0},1},{"LevelM5",{-0.115,0},1},{},{"LevelM5",{-0.1,0},1},{"LevelM5",{-0.085,0},1},{},{"LevelM5",{-0.07,0},1},{"LevelM5",{-0.055,0},1},{},{},{"LevelM5",{0.235,-0.02},1},{"LevelM5",{0.235,0},1},{},{"LevelM5",{0.22,0},1},{"LevelM5",{0.205,0},1},{},{"LevelM5",{0.19,0},1},{"LevelM5",{0.175,0},1},{},{"LevelM5",{0.16,0},1},{"LevelM5",{0.145,0},1},{},{"LevelM5",{0.13,0},1},{"LevelM5",{0.115,0},1},{},{"LevelM5",{0.1,0},1},{"LevelM5",{0.085,0},1},{},{"LevelM5",{0.07,0},1},{"LevelM5",{0.055,0},1},{}};
					};
					class VALM_1_5
					{
						type = "text";
						source = "static";
						text = -5;
						align = "left";
						scale = 1;
						sourceScale = 1;
						pos[] = {"LevelM5",{-0.26,-0.032},1};
						right[] = {"LevelM5",{-0.2,-0.032},1};
						down[] = {"LevelM5",{-0.26,0.018},1};
					};
					class VALM_1_5_R
					{
						type = "text";
						source = "static";
						text = -5;
						align = "right";
						scale = 1;
						sourceScale = 1;
						pos[] = {"LevelM5",{0.26,-0.032},1};
						right[] = {"LevelM5",{0.32,-0.032},1};
						down[] = {"LevelM5",{0.26,0.018},1};
					};
					class LevelP5: Level0
					{
						type = "line";
						points[] = {{"LevelP5",{"-0.22-0.015",0.02},1},{"LevelP5",{"-0.22-0.015",0},1},{"LevelP5",{-0.06,0},1},{},{"LevelP5",{0.06,0},1},{"LevelP5",{"+0.22+0.015",0},1},{"LevelP5",{"+0.22+0.015",0.02},1}};
					};
					class VALP_1_5
					{
						type = "text";
						source = "static";
						text = "5";
						align = "left";
						scale = 1;
						sourceScale = 1;
						pos[] = {"LevelP5",{-0.26,-0.017},1};
						right[] = {"LevelP5",{-0.2,-0.017},1};
						down[] = {"LevelP5",{-0.26,0.033},1};
					};
					class VALP_1_5_R
					{
						type = "text";
						source = "static";
						text = "5";
						align = "right";
						scale = 1;
						sourceScale = 1;
						pos[] = {"LevelP5",{0.26,-0.017},1};
						right[] = {"LevelP5",{0.32,-0.017},1};
						down[] = {"LevelP5",{0.26,0.033},1};
					};
					class LevelM10: Level0
					{
						type = "line";
						points[] = {{"LevelM10",{-0.235,-0.02},1},{"LevelM10",{-0.235,0},1},{},{"LevelM10",{-0.22,0},1},{"LevelM10",{-0.205,0},1},{},{"LevelM10",{-0.19,0},1},{"LevelM10",{-0.175,0},1},{},{"LevelM10",{-0.16,0},1},{"LevelM10",{-0.145,0},1},{},{"LevelM10",{-0.13,0},1},{"LevelM10",{-0.115,0},1},{},{"LevelM10",{-0.1,0},1},{"LevelM10",{-0.085,0},1},{},{"LevelM10",{-0.07,0},1},{"LevelM10",{-0.055,0},1},{},{},{"LevelM10",{0.235,-0.02},1},{"LevelM10",{0.235,0},1},{},{"LevelM10",{0.22,0},1},{"LevelM10",{0.205,0},1},{},{"LevelM10",{0.19,0},1},{"LevelM10",{0.175,0},1},{},{"LevelM10",{0.16,0},1},{"LevelM10",{0.145,0},1},{},{"LevelM10",{0.13,0},1},{"LevelM10",{0.115,0},1},{},{"LevelM10",{0.1,0},1},{"LevelM10",{0.085,0},1},{},{"LevelM10",{0.07,0},1},{"LevelM10",{0.055,0},1},{}};
					};
					class VALM_1_10
					{
						type = "text";
						source = "static";
						text = -10;
						align = "left";
						scale = 1;
						sourceScale = 1;
						pos[] = {"LevelM10",{-0.26,-0.032},1};
						right[] = {"LevelM10",{-0.2,-0.032},1};
						down[] = {"LevelM10",{-0.26,0.018},1};
					};
					class VALM_1_10_R
					{
						type = "text";
						source = "static";
						text = -10;
						align = "right";
						scale = 1;
						sourceScale = 1;
						pos[] = {"LevelM10",{0.26,-0.032},1};
						right[] = {"LevelM10",{0.32,-0.032},1};
						down[] = {"LevelM10",{0.26,0.018},1};
					};
					class LevelP10: Level0
					{
						type = "line";
						points[] = {{"LevelP10",{"-0.22-0.015",0.02},1},{"LevelP10",{"-0.22-0.015",0},1},{"LevelP10",{-0.06,0},1},{},{"LevelP10",{0.06,0},1},{"LevelP10",{"+0.22+0.015",0},1},{"LevelP10",{"+0.22+0.015",0.02},1}};
					};
					class VALP_1_10
					{
						type = "text";
						source = "static";
						text = "10";
						align = "left";
						scale = 1;
						sourceScale = 1;
						pos[] = {"LevelP10",{-0.26,-0.017},1};
						right[] = {"LevelP10",{-0.2,-0.017},1};
						down[] = {"LevelP10",{-0.26,0.033},1};
					};
					class VALP_1_10_R
					{
						type = "text";
						source = "static";
						text = "10";
						align = "right";
						scale = 1;
						sourceScale = 1;
						pos[] = {"LevelP10",{0.26,-0.017},1};
						right[] = {"LevelP10",{0.32,-0.017},1};
						down[] = {"LevelP10",{0.26,0.033},1};
					};
					class LevelM15: Level0
					{
						type = "line";
						points[] = {{"LevelM15",{-0.235,-0.02},1},{"LevelM15",{-0.235,0},1},{},{"LevelM15",{-0.22,0},1},{"LevelM15",{-0.205,0},1},{},{"LevelM15",{-0.19,0},1},{"LevelM15",{-0.175,0},1},{},{"LevelM15",{-0.16,0},1},{"LevelM15",{-0.145,0},1},{},{"LevelM15",{-0.13,0},1},{"LevelM15",{-0.115,0},1},{},{"LevelM15",{-0.1,0},1},{"LevelM15",{-0.085,0},1},{},{"LevelM15",{-0.07,0},1},{"LevelM15",{-0.055,0},1},{},{},{"LevelM15",{0.235,-0.02},1},{"LevelM15",{0.235,0},1},{},{"LevelM15",{0.22,0},1},{"LevelM15",{0.205,0},1},{},{"LevelM15",{0.19,0},1},{"LevelM15",{0.175,0},1},{},{"LevelM15",{0.16,0},1},{"LevelM15",{0.145,0},1},{},{"LevelM15",{0.13,0},1},{"LevelM15",{0.115,0},1},{},{"LevelM15",{0.1,0},1},{"LevelM15",{0.085,0},1},{},{"LevelM15",{0.07,0},1},{"LevelM15",{0.055,0},1},{}};
					};
					class VALM_1_15
					{
						type = "text";
						source = "static";
						text = -15;
						align = "left";
						scale = 1;
						sourceScale = 1;
						pos[] = {"LevelM15",{-0.26,-0.032},1};
						right[] = {"LevelM15",{-0.2,-0.032},1};
						down[] = {"LevelM15",{-0.26,0.018},1};
					};
					class VALM_1_15_R
					{
						type = "text";
						source = "static";
						text = -15;
						align = "right";
						scale = 1;
						sourceScale = 1;
						pos[] = {"LevelM15",{0.26,-0.032},1};
						right[] = {"LevelM15",{0.32,-0.032},1};
						down[] = {"LevelM15",{0.26,0.018},1};
					};
					class LevelP15: Level0
					{
						type = "line";
						points[] = {{"LevelP15",{"-0.22-0.015",0.02},1},{"LevelP15",{"-0.22-0.015",0},1},{"LevelP15",{-0.06,0},1},{},{"LevelP15",{0.06,0},1},{"LevelP15",{"+0.22+0.015",0},1},{"LevelP15",{"+0.22+0.015",0.02},1}};
					};
					class VALP_1_15
					{
						type = "text";
						source = "static";
						text = "15";
						align = "left";
						scale = 1;
						sourceScale = 1;
						pos[] = {"LevelP15",{-0.26,-0.017},1};
						right[] = {"LevelP15",{-0.2,-0.017},1};
						down[] = {"LevelP15",{-0.26,0.033},1};
					};
					class VALP_1_15_R
					{
						type = "text";
						source = "static";
						text = "15";
						align = "right";
						scale = 1;
						sourceScale = 1;
						pos[] = {"LevelP15",{0.26,-0.017},1};
						right[] = {"LevelP15",{0.32,-0.017},1};
						down[] = {"LevelP15",{0.26,0.033},1};
					};
					class LevelM20: Level0
					{
						type = "line";
						points[] = {{"LevelM20",{-0.235,-0.02},1},{"LevelM20",{-0.235,0},1},{},{"LevelM20",{-0.22,0},1},{"LevelM20",{-0.205,0},1},{},{"LevelM20",{-0.19,0},1},{"LevelM20",{-0.175,0},1},{},{"LevelM20",{-0.16,0},1},{"LevelM20",{-0.145,0},1},{},{"LevelM20",{-0.13,0},1},{"LevelM20",{-0.115,0},1},{},{"LevelM20",{-0.1,0},1},{"LevelM20",{-0.085,0},1},{},{"LevelM20",{-0.07,0},1},{"LevelM20",{-0.055,0},1},{},{},{"LevelM20",{0.235,-0.02},1},{"LevelM20",{0.235,0},1},{},{"LevelM20",{0.22,0},1},{"LevelM20",{0.205,0},1},{},{"LevelM20",{0.19,0},1},{"LevelM20",{0.175,0},1},{},{"LevelM20",{0.16,0},1},{"LevelM20",{0.145,0},1},{},{"LevelM20",{0.13,0},1},{"LevelM20",{0.115,0},1},{},{"LevelM20",{0.1,0},1},{"LevelM20",{0.085,0},1},{},{"LevelM20",{0.07,0},1},{"LevelM20",{0.055,0},1},{}};
					};
					class VALM_1_20
					{
						type = "text";
						source = "static";
						text = -20;
						align = "left";
						scale = 1;
						sourceScale = 1;
						pos[] = {"LevelM20",{-0.26,-0.032},1};
						right[] = {"LevelM20",{-0.2,-0.032},1};
						down[] = {"LevelM20",{-0.26,0.018},1};
					};
					class VALM_1_20_R
					{
						type = "text";
						source = "static";
						text = -20;
						align = "right";
						scale = 1;
						sourceScale = 1;
						pos[] = {"LevelM20",{0.26,-0.032},1};
						right[] = {"LevelM20",{0.32,-0.032},1};
						down[] = {"LevelM20",{0.26,0.018},1};
					};
					class LevelP20: Level0
					{
						type = "line";
						points[] = {{"LevelP20",{"-0.22-0.015",0.02},1},{"LevelP20",{"-0.22-0.015",0},1},{"LevelP20",{-0.06,0},1},{},{"LevelP20",{0.06,0},1},{"LevelP20",{"+0.22+0.015",0},1},{"LevelP20",{"+0.22+0.015",0.02},1}};
					};
					class VALP_1_20
					{
						type = "text";
						source = "static";
						text = "20";
						align = "left";
						scale = 1;
						sourceScale = 1;
						pos[] = {"LevelP20",{-0.26,-0.017},1};
						right[] = {"LevelP20",{-0.2,-0.017},1};
						down[] = {"LevelP20",{-0.26,0.033},1};
					};
					class VALP_1_20_R
					{
						type = "text";
						source = "static";
						text = "20";
						align = "right";
						scale = 1;
						sourceScale = 1;
						pos[] = {"LevelP20",{0.26,-0.017},1};
						right[] = {"LevelP20",{0.32,-0.017},1};
						down[] = {"LevelP20",{0.26,0.033},1};
					};
					class LevelM25: Level0
					{
						type = "line";
						points[] = {{"LevelM25",{-0.235,-0.02},1},{"LevelM25",{-0.235,0},1},{},{"LevelM25",{-0.22,0},1},{"LevelM25",{-0.205,0},1},{},{"LevelM25",{-0.19,0},1},{"LevelM25",{-0.175,0},1},{},{"LevelM25",{-0.16,0},1},{"LevelM25",{-0.145,0},1},{},{"LevelM25",{-0.13,0},1},{"LevelM25",{-0.115,0},1},{},{"LevelM25",{-0.1,0},1},{"LevelM25",{-0.085,0},1},{},{"LevelM25",{-0.07,0},1},{"LevelM25",{-0.055,0},1},{},{},{"LevelM25",{0.235,-0.02},1},{"LevelM25",{0.235,0},1},{},{"LevelM25",{0.22,0},1},{"LevelM25",{0.205,0},1},{},{"LevelM25",{0.19,0},1},{"LevelM25",{0.175,0},1},{},{"LevelM25",{0.16,0},1},{"LevelM25",{0.145,0},1},{},{"LevelM25",{0.13,0},1},{"LevelM25",{0.115,0},1},{},{"LevelM25",{0.1,0},1},{"LevelM25",{0.085,0},1},{},{"LevelM25",{0.07,0},1},{"LevelM25",{0.055,0},1},{}};
					};
					class VALM_1_25
					{
						type = "text";
						source = "static";
						text = -25;
						align = "left";
						scale = 1;
						sourceScale = 1;
						pos[] = {"LevelM25",{-0.26,-0.032},1};
						right[] = {"LevelM25",{-0.2,-0.032},1};
						down[] = {"LevelM25",{-0.26,0.018},1};
					};
					class VALM_1_25_R
					{
						type = "text";
						source = "static";
						text = -25;
						align = "right";
						scale = 1;
						sourceScale = 1;
						pos[] = {"LevelM25",{0.26,-0.032},1};
						right[] = {"LevelM25",{0.32,-0.032},1};
						down[] = {"LevelM25",{0.26,0.018},1};
					};
					class LevelP25: Level0
					{
						type = "line";
						points[] = {{"LevelP25",{"-0.22-0.015",0.02},1},{"LevelP25",{"-0.22-0.015",0},1},{"LevelP25",{-0.06,0},1},{},{"LevelP25",{0.06,0},1},{"LevelP25",{"+0.22+0.015",0},1},{"LevelP25",{"+0.22+0.015",0.02},1}};
					};
					class VALP_1_25
					{
						type = "text";
						source = "static";
						text = "25";
						align = "left";
						scale = 1;
						sourceScale = 1;
						pos[] = {"LevelP25",{-0.26,-0.017},1};
						right[] = {"LevelP25",{-0.2,-0.017},1};
						down[] = {"LevelP25",{-0.26,0.033},1};
					};
					class VALP_1_25_R
					{
						type = "text";
						source = "static";
						text = "25";
						align = "right";
						scale = 1;
						sourceScale = 1;
						pos[] = {"LevelP25",{0.26,-0.017},1};
						right[] = {"LevelP25",{0.32,-0.017},1};
						down[] = {"LevelP25",{0.26,0.033},1};
					};
					class LevelM30: Level0
					{
						type = "line";
						points[] = {{"LevelM30",{-0.235,-0.02},1},{"LevelM30",{-0.235,0},1},{},{"LevelM30",{-0.22,0},1},{"LevelM30",{-0.205,0},1},{},{"LevelM30",{-0.19,0},1},{"LevelM30",{-0.175,0},1},{},{"LevelM30",{-0.16,0},1},{"LevelM30",{-0.145,0},1},{},{"LevelM30",{-0.13,0},1},{"LevelM30",{-0.115,0},1},{},{"LevelM30",{-0.1,0},1},{"LevelM30",{-0.085,0},1},{},{"LevelM30",{-0.07,0},1},{"LevelM30",{-0.055,0},1},{},{},{"LevelM30",{0.235,-0.02},1},{"LevelM30",{0.235,0},1},{},{"LevelM30",{0.22,0},1},{"LevelM30",{0.205,0},1},{},{"LevelM30",{0.19,0},1},{"LevelM30",{0.175,0},1},{},{"LevelM30",{0.16,0},1},{"LevelM30",{0.145,0},1},{},{"LevelM30",{0.13,0},1},{"LevelM30",{0.115,0},1},{},{"LevelM30",{0.1,0},1},{"LevelM30",{0.085,0},1},{},{"LevelM30",{0.07,0},1},{"LevelM30",{0.055,0},1},{}};
					};
					class VALM_1_30
					{
						type = "text";
						source = "static";
						text = -30;
						align = "left";
						scale = 1;
						sourceScale = 1;
						pos[] = {"LevelM30",{-0.26,-0.032},1};
						right[] = {"LevelM30",{-0.2,-0.032},1};
						down[] = {"LevelM30",{-0.26,0.018},1};
					};
					class VALM_1_30_R
					{
						type = "text";
						source = "static";
						text = -30;
						align = "right";
						scale = 1;
						sourceScale = 1;
						pos[] = {"LevelM30",{0.26,-0.032},1};
						right[] = {"LevelM30",{0.32,-0.032},1};
						down[] = {"LevelM30",{0.26,0.018},1};
					};
					class LevelP30: Level0
					{
						type = "line";
						points[] = {{"LevelP30",{"-0.22-0.015",0.02},1},{"LevelP30",{"-0.22-0.015",0},1},{"LevelP30",{-0.06,0},1},{},{"LevelP30",{0.06,0},1},{"LevelP30",{"+0.22+0.015",0},1},{"LevelP30",{"+0.22+0.015",0.02},1}};
					};
					class VALP_1_30
					{
						type = "text";
						source = "static";
						text = "30";
						align = "left";
						scale = 1;
						sourceScale = 1;
						pos[] = {"LevelP30",{-0.26,-0.017},1};
						right[] = {"LevelP30",{-0.2,-0.017},1};
						down[] = {"LevelP30",{-0.26,0.033},1};
					};
					class VALP_1_30_R
					{
						type = "text";
						source = "static";
						text = "30";
						align = "right";
						scale = 1;
						sourceScale = 1;
						pos[] = {"LevelP30",{0.26,-0.017},1};
						right[] = {"LevelP30",{0.32,-0.017},1};
						down[] = {"LevelP30",{0.26,0.033},1};
					};
					class LevelM35: Level0
					{
						type = "line";
						points[] = {{"LevelM35",{-0.235,-0.02},1},{"LevelM35",{-0.235,0},1},{},{"LevelM35",{-0.22,0},1},{"LevelM35",{-0.205,0},1},{},{"LevelM35",{-0.19,0},1},{"LevelM35",{-0.175,0},1},{},{"LevelM35",{-0.16,0},1},{"LevelM35",{-0.145,0},1},{},{"LevelM35",{-0.13,0},1},{"LevelM35",{-0.115,0},1},{},{"LevelM35",{-0.1,0},1},{"LevelM35",{-0.085,0},1},{},{"LevelM35",{-0.07,0},1},{"LevelM35",{-0.055,0},1},{},{},{"LevelM35",{0.235,-0.02},1},{"LevelM35",{0.235,0},1},{},{"LevelM35",{0.22,0},1},{"LevelM35",{0.205,0},1},{},{"LevelM35",{0.19,0},1},{"LevelM35",{0.175,0},1},{},{"LevelM35",{0.16,0},1},{"LevelM35",{0.145,0},1},{},{"LevelM35",{0.13,0},1},{"LevelM35",{0.115,0},1},{},{"LevelM35",{0.1,0},1},{"LevelM35",{0.085,0},1},{},{"LevelM35",{0.07,0},1},{"LevelM35",{0.055,0},1},{}};
					};
					class VALM_1_35
					{
						type = "text";
						source = "static";
						text = -35;
						align = "left";
						scale = 1;
						sourceScale = 1;
						pos[] = {"LevelM35",{-0.26,-0.032},1};
						right[] = {"LevelM35",{-0.2,-0.032},1};
						down[] = {"LevelM35",{-0.26,0.018},1};
					};
					class VALM_1_35_R
					{
						type = "text";
						source = "static";
						text = -35;
						align = "right";
						scale = 1;
						sourceScale = 1;
						pos[] = {"LevelM35",{0.26,-0.032},1};
						right[] = {"LevelM35",{0.32,-0.032},1};
						down[] = {"LevelM35",{0.26,0.018},1};
					};
					class LevelP35: Level0
					{
						type = "line";
						points[] = {{"LevelP35",{"-0.22-0.015",0.02},1},{"LevelP35",{"-0.22-0.015",0},1},{"LevelP35",{-0.06,0},1},{},{"LevelP35",{0.06,0},1},{"LevelP35",{"+0.22+0.015",0},1},{"LevelP35",{"+0.22+0.015",0.02},1}};
					};
					class VALP_1_35
					{
						type = "text";
						source = "static";
						text = "35";
						align = "left";
						scale = 1;
						sourceScale = 1;
						pos[] = {"LevelP35",{-0.26,-0.017},1};
						right[] = {"LevelP35",{-0.2,-0.017},1};
						down[] = {"LevelP35",{-0.26,0.033},1};
					};
					class VALP_1_35_R
					{
						type = "text";
						source = "static";
						text = "35";
						align = "right";
						scale = 1;
						sourceScale = 1;
						pos[] = {"LevelP35",{0.26,-0.017},1};
						right[] = {"LevelP35",{0.32,-0.017},1};
						down[] = {"LevelP35",{0.26,0.033},1};
					};
					class LevelM40: Level0
					{
						type = "line";
						points[] = {{"LevelM40",{-0.235,-0.02},1},{"LevelM40",{-0.235,0},1},{},{"LevelM40",{-0.22,0},1},{"LevelM40",{-0.205,0},1},{},{"LevelM40",{-0.19,0},1},{"LevelM40",{-0.175,0},1},{},{"LevelM40",{-0.16,0},1},{"LevelM40",{-0.145,0},1},{},{"LevelM40",{-0.13,0},1},{"LevelM40",{-0.115,0},1},{},{"LevelM40",{-0.1,0},1},{"LevelM40",{-0.085,0},1},{},{"LevelM40",{-0.07,0},1},{"LevelM40",{-0.055,0},1},{},{},{"LevelM40",{0.235,-0.02},1},{"LevelM40",{0.235,0},1},{},{"LevelM40",{0.22,0},1},{"LevelM40",{0.205,0},1},{},{"LevelM40",{0.19,0},1},{"LevelM40",{0.175,0},1},{},{"LevelM40",{0.16,0},1},{"LevelM40",{0.145,0},1},{},{"LevelM40",{0.13,0},1},{"LevelM40",{0.115,0},1},{},{"LevelM40",{0.1,0},1},{"LevelM40",{0.085,0},1},{},{"LevelM40",{0.07,0},1},{"LevelM40",{0.055,0},1},{}};
					};
					class VALM_1_40
					{
						type = "text";
						source = "static";
						text = -40;
						align = "left";
						scale = 1;
						sourceScale = 1;
						pos[] = {"LevelM40",{-0.26,-0.032},1};
						right[] = {"LevelM40",{-0.2,-0.032},1};
						down[] = {"LevelM40",{-0.26,0.018},1};
					};
					class VALM_1_40_R
					{
						type = "text";
						source = "static";
						text = -40;
						align = "right";
						scale = 1;
						sourceScale = 1;
						pos[] = {"LevelM40",{0.26,-0.032},1};
						right[] = {"LevelM40",{0.32,-0.032},1};
						down[] = {"LevelM40",{0.26,0.018},1};
					};
					class LevelP40: Level0
					{
						type = "line";
						points[] = {{"LevelP40",{"-0.22-0.015",0.02},1},{"LevelP40",{"-0.22-0.015",0},1},{"LevelP40",{-0.06,0},1},{},{"LevelP40",{0.06,0},1},{"LevelP40",{"+0.22+0.015",0},1},{"LevelP40",{"+0.22+0.015",0.02},1}};
					};
					class VALP_1_40
					{
						type = "text";
						source = "static";
						text = "40";
						align = "left";
						scale = 1;
						sourceScale = 1;
						pos[] = {"LevelP40",{-0.26,-0.017},1};
						right[] = {"LevelP40",{-0.2,-0.017},1};
						down[] = {"LevelP40",{-0.26,0.033},1};
					};
					class VALP_1_40_R
					{
						type = "text";
						source = "static";
						text = "40";
						align = "right";
						scale = 1;
						sourceScale = 1;
						pos[] = {"LevelP40",{0.26,-0.017},1};
						right[] = {"LevelP40",{0.32,-0.017},1};
						down[] = {"LevelP40",{0.26,0.033},1};
					};
					class LevelM45: Level0
					{
						type = "line";
						points[] = {{"LevelM45",{-0.235,-0.02},1},{"LevelM45",{-0.235,0},1},{},{"LevelM45",{-0.22,0},1},{"LevelM45",{-0.205,0},1},{},{"LevelM45",{-0.19,0},1},{"LevelM45",{-0.175,0},1},{},{"LevelM45",{-0.16,0},1},{"LevelM45",{-0.145,0},1},{},{"LevelM45",{-0.13,0},1},{"LevelM45",{-0.115,0},1},{},{"LevelM45",{-0.1,0},1},{"LevelM45",{-0.085,0},1},{},{"LevelM45",{-0.07,0},1},{"LevelM45",{-0.055,0},1},{},{},{"LevelM45",{0.235,-0.02},1},{"LevelM45",{0.235,0},1},{},{"LevelM45",{0.22,0},1},{"LevelM45",{0.205,0},1},{},{"LevelM45",{0.19,0},1},{"LevelM45",{0.175,0},1},{},{"LevelM45",{0.16,0},1},{"LevelM45",{0.145,0},1},{},{"LevelM45",{0.13,0},1},{"LevelM45",{0.115,0},1},{},{"LevelM45",{0.1,0},1},{"LevelM45",{0.085,0},1},{},{"LevelM45",{0.07,0},1},{"LevelM45",{0.055,0},1},{}};
					};
					class VALM_1_45
					{
						type = "text";
						source = "static";
						text = -45;
						align = "left";
						scale = 1;
						sourceScale = 1;
						pos[] = {"LevelM45",{-0.26,-0.032},1};
						right[] = {"LevelM45",{-0.2,-0.032},1};
						down[] = {"LevelM45",{-0.26,0.018},1};
					};
					class VALM_1_45_R
					{
						type = "text";
						source = "static";
						text = -45;
						align = "right";
						scale = 1;
						sourceScale = 1;
						pos[] = {"LevelM45",{0.26,-0.032},1};
						right[] = {"LevelM45",{0.32,-0.032},1};
						down[] = {"LevelM45",{0.26,0.018},1};
					};
					class LevelP45: Level0
					{
						type = "line";
						points[] = {{"LevelP45",{"-0.22-0.015",0.02},1},{"LevelP45",{"-0.22-0.015",0},1},{"LevelP45",{-0.06,0},1},{},{"LevelP45",{0.06,0},1},{"LevelP45",{"+0.22+0.015",0},1},{"LevelP45",{"+0.22+0.015",0.02},1}};
					};
					class VALP_1_45
					{
						type = "text";
						source = "static";
						text = "45";
						align = "left";
						scale = 1;
						sourceScale = 1;
						pos[] = {"LevelP45",{-0.26,-0.017},1};
						right[] = {"LevelP45",{-0.2,-0.017},1};
						down[] = {"LevelP45",{-0.26,0.033},1};
					};
					class VALP_1_45_R
					{
						type = "text";
						source = "static";
						text = "45";
						align = "right";
						scale = 1;
						sourceScale = 1;
						pos[] = {"LevelP45",{0.26,-0.017},1};
						right[] = {"LevelP45",{0.32,-0.017},1};
						down[] = {"LevelP45",{0.26,0.033},1};
					};
					class LevelM50: Level0
					{
						type = "line";
						points[] = {{"LevelM50",{-0.235,-0.02},1},{"LevelM50",{-0.235,0},1},{},{"LevelM50",{-0.22,0},1},{"LevelM50",{-0.205,0},1},{},{"LevelM50",{-0.19,0},1},{"LevelM50",{-0.175,0},1},{},{"LevelM50",{-0.16,0},1},{"LevelM50",{-0.145,0},1},{},{"LevelM50",{-0.13,0},1},{"LevelM50",{-0.115,0},1},{},{"LevelM50",{-0.1,0},1},{"LevelM50",{-0.085,0},1},{},{"LevelM50",{-0.07,0},1},{"LevelM50",{-0.055,0},1},{},{},{"LevelM50",{0.235,-0.02},1},{"LevelM50",{0.235,0},1},{},{"LevelM50",{0.22,0},1},{"LevelM50",{0.205,0},1},{},{"LevelM50",{0.19,0},1},{"LevelM50",{0.175,0},1},{},{"LevelM50",{0.16,0},1},{"LevelM50",{0.145,0},1},{},{"LevelM50",{0.13,0},1},{"LevelM50",{0.115,0},1},{},{"LevelM50",{0.1,0},1},{"LevelM50",{0.085,0},1},{},{"LevelM50",{0.07,0},1},{"LevelM50",{0.055,0},1},{}};
					};
					class VALM_1_50
					{
						type = "text";
						source = "static";
						text = -50;
						align = "left";
						scale = 1;
						sourceScale = 1;
						pos[] = {"LevelM50",{-0.26,-0.032},1};
						right[] = {"LevelM50",{-0.2,-0.032},1};
						down[] = {"LevelM50",{-0.26,0.018},1};
					};
					class VALM_1_50_R
					{
						type = "text";
						source = "static";
						text = -50;
						align = "right";
						scale = 1;
						sourceScale = 1;
						pos[] = {"LevelM50",{0.26,-0.032},1};
						right[] = {"LevelM50",{0.32,-0.032},1};
						down[] = {"LevelM50",{0.26,0.018},1};
					};
					class LevelP50: Level0
					{
						type = "line";
						points[] = {{"LevelP50",{"-0.22-0.015",0.02},1},{"LevelP50",{"-0.22-0.015",0},1},{"LevelP50",{-0.06,0},1},{},{"LevelP50",{0.06,0},1},{"LevelP50",{"+0.22+0.015",0},1},{"LevelP50",{"+0.22+0.015",0.02},1}};
					};
					class VALP_1_50
					{
						type = "text";
						source = "static";
						text = "50";
						align = "left";
						scale = 1;
						sourceScale = 1;
						pos[] = {"LevelP50",{-0.26,-0.017},1};
						right[] = {"LevelP50",{-0.2,-0.017},1};
						down[] = {"LevelP50",{-0.26,0.033},1};
					};
					class VALP_1_50_R
					{
						type = "text";
						source = "static";
						text = "50";
						align = "right";
						scale = 1;
						sourceScale = 1;
						pos[] = {"LevelP50",{0.26,-0.017},1};
						right[] = {"LevelP50",{0.32,-0.017},1};
						down[] = {"LevelP50",{0.26,0.033},1};
					};
					class LevelM60: Level0
					{
						type = "line";
						points[] = {{"LevelM60",{-0.235,-0.02},1},{"LevelM60",{-0.235,0},1},{},{"LevelM60",{-0.22,0},1},{"LevelM60",{-0.205,0},1},{},{"LevelM60",{-0.19,0},1},{"LevelM60",{-0.175,0},1},{},{"LevelM60",{-0.16,0},1},{"LevelM60",{-0.145,0},1},{},{"LevelM60",{-0.13,0},1},{"LevelM60",{-0.115,0},1},{},{"LevelM60",{-0.1,0},1},{"LevelM60",{-0.085,0},1},{},{"LevelM60",{-0.07,0},1},{"LevelM60",{-0.055,0},1},{},{},{"LevelM60",{0.235,-0.02},1},{"LevelM60",{0.235,0},1},{},{"LevelM60",{0.22,0},1},{"LevelM60",{0.205,0},1},{},{"LevelM60",{0.19,0},1},{"LevelM60",{0.175,0},1},{},{"LevelM60",{0.16,0},1},{"LevelM60",{0.145,0},1},{},{"LevelM60",{0.13,0},1},{"LevelM60",{0.115,0},1},{},{"LevelM60",{0.1,0},1},{"LevelM60",{0.085,0},1},{},{"LevelM60",{0.07,0},1},{"LevelM60",{0.055,0},1},{}};
					};
					class VALM_1_60
					{
						type = "text";
						source = "static";
						text = -60;
						align = "left";
						scale = 1;
						sourceScale = 1;
						pos[] = {"LevelM60",{-0.26,-0.032},1};
						right[] = {"LevelM60",{-0.2,-0.032},1};
						down[] = {"LevelM60",{-0.26,0.018},1};
					};
					class VALM_1_60_R
					{
						type = "text";
						source = "static";
						text = -60;
						align = "right";
						scale = 1;
						sourceScale = 1;
						pos[] = {"LevelM60",{0.26,-0.032},1};
						right[] = {"LevelM60",{0.32,-0.032},1};
						down[] = {"LevelM60",{0.26,0.018},1};
					};
					class LevelP60: Level0
					{
						type = "line";
						points[] = {{"LevelP60",{"-0.22-0.015",0.02},1},{"LevelP60",{"-0.22-0.015",0},1},{"LevelP60",{-0.06,0},1},{},{"LevelP60",{0.06,0},1},{"LevelP60",{"+0.22+0.015",0},1},{"LevelP60",{"+0.22+0.015",0.02},1}};
					};
					class VALP_1_60
					{
						type = "text";
						source = "static";
						text = "60";
						align = "left";
						scale = 1;
						sourceScale = 1;
						pos[] = {"LevelP60",{-0.26,-0.017},1};
						right[] = {"LevelP60",{-0.2,-0.017},1};
						down[] = {"LevelP60",{-0.26,0.033},1};
					};
					class VALP_1_60_R
					{
						type = "text";
						source = "static";
						text = "60";
						align = "right";
						scale = 1;
						sourceScale = 1;
						pos[] = {"LevelP60",{0.26,-0.017},1};
						right[] = {"LevelP60",{0.32,-0.017},1};
						down[] = {"LevelP60",{0.26,0.033},1};
					};
					class LevelM70: Level0
					{
						type = "line";
						points[] = {{"LevelM70",{-0.235,-0.02},1},{"LevelM70",{-0.235,0},1},{},{"LevelM70",{-0.22,0},1},{"LevelM70",{-0.205,0},1},{},{"LevelM70",{-0.19,0},1},{"LevelM70",{-0.175,0},1},{},{"LevelM70",{-0.16,0},1},{"LevelM70",{-0.145,0},1},{},{"LevelM70",{-0.13,0},1},{"LevelM70",{-0.115,0},1},{},{"LevelM70",{-0.1,0},1},{"LevelM70",{-0.085,0},1},{},{"LevelM70",{-0.07,0},1},{"LevelM70",{-0.055,0},1},{},{},{"LevelM70",{0.235,-0.02},1},{"LevelM70",{0.235,0},1},{},{"LevelM70",{0.22,0},1},{"LevelM70",{0.205,0},1},{},{"LevelM70",{0.19,0},1},{"LevelM70",{0.175,0},1},{},{"LevelM70",{0.16,0},1},{"LevelM70",{0.145,0},1},{},{"LevelM70",{0.13,0},1},{"LevelM70",{0.115,0},1},{},{"LevelM70",{0.1,0},1},{"LevelM70",{0.085,0},1},{},{"LevelM70",{0.07,0},1},{"LevelM70",{0.055,0},1},{}};
					};
					class VALM_1_70
					{
						type = "text";
						source = "static";
						text = -70;
						align = "left";
						scale = 1;
						sourceScale = 1;
						pos[] = {"LevelM70",{-0.26,-0.032},1};
						right[] = {"LevelM70",{-0.2,-0.032},1};
						down[] = {"LevelM70",{-0.26,0.018},1};
					};
					class VALM_1_70_R
					{
						type = "text";
						source = "static";
						text = -70;
						align = "right";
						scale = 1;
						sourceScale = 1;
						pos[] = {"LevelM70",{0.26,-0.032},1};
						right[] = {"LevelM70",{0.32,-0.032},1};
						down[] = {"LevelM70",{0.26,0.018},1};
					};
					class LevelP70: Level0
					{
						type = "line";
						points[] = {{"LevelP70",{"-0.22-0.015",0.02},1},{"LevelP70",{"-0.22-0.015",0},1},{"LevelP70",{-0.06,0},1},{},{"LevelP70",{0.06,0},1},{"LevelP70",{"+0.22+0.015",0},1},{"LevelP70",{"+0.22+0.015",0.02},1}};
					};
					class VALP_1_70
					{
						type = "text";
						source = "static";
						text = "70";
						align = "left";
						scale = 1;
						sourceScale = 1;
						pos[] = {"LevelP70",{-0.26,-0.017},1};
						right[] = {"LevelP70",{-0.2,-0.017},1};
						down[] = {"LevelP70",{-0.26,0.033},1};
					};
					class VALP_1_70_R
					{
						type = "text";
						source = "static";
						text = "70";
						align = "right";
						scale = 1;
						sourceScale = 1;
						pos[] = {"LevelP70",{0.26,-0.017},1};
						right[] = {"LevelP70",{0.32,-0.017},1};
						down[] = {"LevelP70",{0.26,0.033},1};
					};
					class LevelM80: Level0
					{
						type = "line";
						points[] = {{"LevelM80",{-0.235,-0.02},1},{"LevelM80",{-0.235,0},1},{},{"LevelM80",{-0.22,0},1},{"LevelM80",{-0.205,0},1},{},{"LevelM80",{-0.19,0},1},{"LevelM80",{-0.175,0},1},{},{"LevelM80",{-0.16,0},1},{"LevelM80",{-0.145,0},1},{},{"LevelM80",{-0.13,0},1},{"LevelM80",{-0.115,0},1},{},{"LevelM80",{-0.1,0},1},{"LevelM80",{-0.085,0},1},{},{"LevelM80",{-0.07,0},1},{"LevelM80",{-0.055,0},1},{},{},{"LevelM80",{0.235,-0.02},1},{"LevelM80",{0.235,0},1},{},{"LevelM80",{0.22,0},1},{"LevelM80",{0.205,0},1},{},{"LevelM80",{0.19,0},1},{"LevelM80",{0.175,0},1},{},{"LevelM80",{0.16,0},1},{"LevelM80",{0.145,0},1},{},{"LevelM80",{0.13,0},1},{"LevelM80",{0.115,0},1},{},{"LevelM80",{0.1,0},1},{"LevelM80",{0.085,0},1},{},{"LevelM80",{0.07,0},1},{"LevelM80",{0.055,0},1},{}};
					};
					class VALM_1_80
					{
						type = "text";
						source = "static";
						text = -80;
						align = "left";
						scale = 1;
						sourceScale = 1;
						pos[] = {"LevelM80",{-0.26,-0.032},1};
						right[] = {"LevelM80",{-0.2,-0.032},1};
						down[] = {"LevelM80",{-0.26,0.018},1};
					};
					class VALM_1_80_R
					{
						type = "text";
						source = "static";
						text = -80;
						align = "right";
						scale = 1;
						sourceScale = 1;
						pos[] = {"LevelM80",{0.26,-0.032},1};
						right[] = {"LevelM80",{0.32,-0.032},1};
						down[] = {"LevelM80",{0.26,0.018},1};
					};
					class LevelP80: Level0
					{
						type = "line";
						points[] = {{"LevelP80",{"-0.22-0.015",0.02},1},{"LevelP80",{"-0.22-0.015",0},1},{"LevelP80",{-0.06,0},1},{},{"LevelP80",{0.06,0},1},{"LevelP80",{"+0.22+0.015",0},1},{"LevelP80",{"+0.22+0.015",0.02},1}};
					};
					class VALP_1_80
					{
						type = "text";
						source = "static";
						text = "80";
						align = "left";
						scale = 1;
						sourceScale = 1;
						pos[] = {"LevelP80",{-0.26,-0.017},1};
						right[] = {"LevelP80",{-0.2,-0.017},1};
						down[] = {"LevelP80",{-0.26,0.033},1};
					};
					class VALP_1_80_R
					{
						type = "text";
						source = "static";
						text = "80";
						align = "right";
						scale = 1;
						sourceScale = 1;
						pos[] = {"LevelP80",{0.26,-0.017},1};
						right[] = {"LevelP80",{0.32,-0.017},1};
						down[] = {"LevelP80",{0.26,0.033},1};
					};
					class LevelM90: Level0
					{
						type = "line";
						points[] = {{"LevelM90",{-0.235,-0.02},1},{"LevelM90",{-0.235,0},1},{},{"LevelM90",{-0.22,0},1},{"LevelM90",{-0.205,0},1},{},{"LevelM90",{-0.19,0},1},{"LevelM90",{-0.175,0},1},{},{"LevelM90",{-0.16,0},1},{"LevelM90",{-0.145,0},1},{},{"LevelM90",{-0.13,0},1},{"LevelM90",{-0.115,0},1},{},{"LevelM90",{-0.1,0},1},{"LevelM90",{-0.085,0},1},{},{"LevelM90",{-0.07,0},1},{"LevelM90",{-0.055,0},1},{},{},{"LevelM90",{0.235,-0.02},1},{"LevelM90",{0.235,0},1},{},{"LevelM90",{0.22,0},1},{"LevelM90",{0.205,0},1},{},{"LevelM90",{0.19,0},1},{"LevelM90",{0.175,0},1},{},{"LevelM90",{0.16,0},1},{"LevelM90",{0.145,0},1},{},{"LevelM90",{0.13,0},1},{"LevelM90",{0.115,0},1},{},{"LevelM90",{0.1,0},1},{"LevelM90",{0.085,0},1},{},{"LevelM90",{0.07,0},1},{"LevelM90",{0.055,0},1},{}};
					};
					class VALM_1_90
					{
						type = "text";
						source = "static";
						text = -90;
						align = "left";
						scale = 1;
						sourceScale = 1;
						pos[] = {"LevelM90",{-0.26,-0.032},1};
						right[] = {"LevelM90",{-0.2,-0.032},1};
						down[] = {"LevelM90",{-0.26,0.018},1};
					};
					class VALM_1_90_R
					{
						type = "text";
						source = "static";
						text = -90;
						align = "right";
						scale = 1;
						sourceScale = 1;
						pos[] = {"LevelM90",{0.26,-0.032},1};
						right[] = {"LevelM90",{0.32,-0.032},1};
						down[] = {"LevelM90",{0.26,0.018},1};
					};
					class LevelP90: Level0
					{
						type = "line";
						points[] = {{"LevelP90",{"-0.22-0.015",0.02},1},{"LevelP90",{"-0.22-0.015",0},1},{"LevelP90",{-0.06,0},1},{},{"LevelP90",{0.06,0},1},{"LevelP90",{"+0.22+0.015",0},1},{"LevelP90",{"+0.22+0.015",0.02},1}};
					};
					class VALP_1_90
					{
						type = "text";
						source = "static";
						text = "90";
						align = "left";
						scale = 1;
						sourceScale = 1;
						pos[] = {"LevelP90",{-0.26,-0.017},1};
						right[] = {"LevelP90",{-0.2,-0.017},1};
						down[] = {"LevelP90",{-0.26,0.033},1};
					};
					class VALP_1_90_R
					{
						type = "text";
						source = "static";
						text = "90";
						align = "right";
						scale = 1;
						sourceScale = 1;
						pos[] = {"LevelP90",{0.26,-0.017},1};
						right[] = {"LevelP90",{0.32,-0.017},1};
						down[] = {"LevelP90",{0.26,0.033},1};
					};
				};
			};
		};
	};
	class F38_MFD_HORIZON_NUMBERS
	{
		topLeft = "mfd lh";
		topRight = "mfd ph";
		bottomLeft = "mfd ld";
		borderLeft = 0.0;
		borderRight = 0.0;
		borderTop = 0.0;
		borderBottom = 0.0;
		color[] =
		{
			0.082, // R
			0.408, // G
			0.039, // B
			1 // A
		};
		enableParallax = false;
		class Bones
		{
			class PlaneOrientation
			{
				type = fixed;
				pos[] =
				{
					0.5, // X
					0.5 // Y
				};
			};
		};
		class Draw
		{
			color[] =
			{
				0.082, // R
				0.408, // G
				0.039, // B
				1 // A
			};
			alpha = 0.7;
			condition = on;
			enableParallax = false;
			class ASNumber
			{
				type = text;
				source = speed;
				sourceScale = 3.6;
				align = center;
				scale = 1;
				pos[] =
				{
					PlaneOrientation,
					{
						-0.375,
						-0.47 + 0.05
					},
					1
				};
				right[] =
				{
					PlaneOrientation,
					{
						-0.375 + 0.08,
						-0.47 + 0.05
					},
					1
				};
				down[] =
				{
					PlaneOrientation,
					{
						-0.375,
						-0.47 + 0.145
					},
					1
				};
			};
			class ALTNumber
			{
				type = text;
				source = altitudeASL;
				sourceScale = 1;
				align = center;
				scale = 1;
				pos[] =
				{
					PlaneOrientation,
					{
						0.35,
						-0.47 + 0.05
					},
					1
				};
				right[] =
				{
					PlaneOrientation,
					{
						0.35 + 0.08,
						-0.47 + 0.05
					},
					1
				};
				down[] =
				{
					PlaneOrientation,
					{
						0.35,
						-0.47 + 0.145
					},
					1
				};
			};
		};
	};
	class F38_MFD_CENTRAL
	{
		topLeft = "MFD_1_TL";
		topRight = "MFD_1_TR";
		bottomLeft = "MFD_1_BL";
		borderLeft = 0.0;
		borderRight = 0.0;
		borderTop = 0.0;
		borderBottom = 0.0;
		color[] =
		{
			0.082, // R
			0.408, // G
			0.039, // B
			1 // A
		};
		enableParallax = false;
		class Bones
		{
			class Center
			{
				type = fixed;
				pos[] =
				{
					0.37, // X
					0.37 // Y
				};
			};
		};
		class Draw
		{
			color[] =
			{
				0, // R
				0.12, // G
				0 // B
			};
			alpha = 1;
			condition = on;
			class Pylon1
			{
				type = pylonicon;
				pos[] = {{0.83,0.5},1};
				pylon = 1;
				name = Plane_Fighter_05;
			};
			class Pylon2: Pylon1
			{
				pos[] = {{0.16,0.5},1};
				pylon = 2;
			};
			class Pylon3: Pylon1
			{
				pos[] = {{0.715,0.44},1};
				pylon = 3;
			};
			class Pylon4: Pylon1
			{
				pos[] = {{0.275,0.44},1};
				pylon = 4;
			};
			class Pylon5: Pylon1
			{
				pos[] = {{0.615,0.37},1};
				pylon = 5;
			};
			class Pylon6: Pylon1
			{
				pos[] = {{0.375,0.37},1};
				pylon = 6;
			};
			class Pylon7: Pylon1
			{
				pos[] = {{0.665,0.58},1};
				pylon = 7;
			};
			class Pylon8: Pylon1
			{
				pos[] = {{0.325,0.58},1};
				pylon = 8;
			};
			class Pylon9: Pylon1
			{
				pos[] = {{0.595,0.55},1};
				pylon = 9;
			};
			class Pylon10: Pylon1
			{
				pos[] = {{0.395,0.55},1};
				pylon = 10;
			};
			class Pylon11: Pylon1
			{
				pos[] = {{0.53,0.52},1};
				pylon = 11;
			};
			class Pylon12: Pylon1
			{
				pos[] = {{0.46,0.52},1};
				pylon = 12;
			};
			class Gatling_Ammo
			{
				type = "text";
				source = "ammo";
				sourceIndex = 0;
				scale = 1;
				sourceScale = 1;
				align = "center";
				pos[] = {{0.49,0.27},1};
				right[] = {{0.56,0.27},1};
				down[] = {{0.49,0.331},1};
			};
			class PylonText1
			{
				type = "text";
				source = "static";
				text = "SELECTED WEAPON";
				scale = 1;
				sourceScale = 1;
				align = "center";
				pos[] = {{"0.49 - 0.015",0.66},1};
				right[] = {{0.525,0.66},1};
				down[] = {{"0.49 - 0.015",0.705},1};
			};
			class WeaponText
			{
				type = "text";
				source = "weapon";
				scale = 1;
				sourceScale = 1;
				align = "center";
				pos[] = {{"0.49 - 0.015",0.7},1};
				right[] = {{0.545,0.7},1};
				down[] = {{"0.49 - 0.015",0.765},1};
			};
			class AmmoText
			{
				type = "text";
				source = "ammo";
				scale = 1;
				sourceScale = 1;
				align = "center";
				pos[] = {{"0.49 - 0.015",0.76},1};
				right[] = {{0.545,0.76},1};
				down[] = {{"0.49 - 0.015",0.825},1};
			};
			class CM_Name
			{
				type = "text";
				source = "CMWeapon";
				scale = 1;
				sourceScale = 1;
				align = "left";
				pos[] = {{0.285,0.12},1};
				right[] = {{0.345,0.12},1};
				down[] = {{0.285,0.171},1};
			};
			class CM_Ammo
			{
				type = "text";
				source = "CMAmmo";
				scale = 1;
				sourceScale = 1;
				align = "left";
				pos[] = {{0.285,0.16},1};
				right[] = {{0.345,0.16},1};
				down[] = {{0.285,0.211},1};
			};
			class Static
			{
				type = "line";
				width = 4.0;
				points[] = {{{0.11,0.12},1},{{0.33,0.12},1},{{0.33,0.22},1},{{0.11,0.22},1},{{0.11,0.12},1}};
			};
		};
	};
	class B_Plane_Fighter_05_static_HUD
	{
		enableParallax = false;
		helmetMountedDisplay = true;
		helmetPosition[] =
		{
			-0.0325, // X
			0.0325, // Y
			0.1 // Z
		};
		helmetRight[] =
		{
			0.065, // X
			0.0, // Y
			0.0 // Z
		};
		helmetDown[] =
		{
			0.0, // X
			-0.065, // Y
			0.0 // Z
		};
		class Pos10Vector
		{
			type = vector;
			pos0[] =
			{
				0.5, // X
				0.5 // Y
			};
			pos10[] =
			{
				1.225, // X
				1.1 // Y
			};
		};
		topLeft = "HUD LH";
		topRight = "HUD PH";
		bottomLeft = "HUD LD";
		borderLeft = 0;
		borderRight = 0;
		borderTop = 0;
		borderBottom = 0;
		color[] =
		{
			0.082, // R
			0.408, // G
			0.039, // B
			1 // A
		};
		class Bones
		{
			class PlaneW
			{
				type = "fixed";
				pos[] = {0.5,0.5};
				pos10[] = {0.774,0.77};
			};
			class Velocity: Pos10Vector
			{
				type = "vector";
				source = "velocityToView";
				pos0[] = {0.5,0.5};
				pos10[] = {0.774,0.77};
			};
			class PlaneOrientation
			{
				type = "vector";
				source = "forward";
				pos[] = {0.5,0.5};
				pos0[] = {0.5,0.5};
				pos10[] = {0.774,0.77};
			};
			class WeaponAim
			{
				type = "vector";
				source = "weaponToView";
				pos0[] = {0.5,0.5};
				pos10[] = {0.774,0.77};
			};
			class MissileFlightTimeRot1
			{
				type = "rotational";
				source = "MissileFlightTime";
				sourceScale = 1.0;
				center[] = {0,0};
				min = 0;
				max = 0.5;
				minAngle = 0;
				maxAngle = 18;
				aspectRatio = 0.985402;
			};
			class MissileFlightTimeRot2: MissileFlightTimeRot1
			{
				maxAngle = 36;
				max = 1;
			};
			class MissileFlightTimeRot3: MissileFlightTimeRot1
			{
				maxAngle = 54;
				max = 1.5;
			};
			class MissileFlightTimeRot4: MissileFlightTimeRot1
			{
				maxAngle = 72;
				max = 2;
			};
			class MissileFlightTimeRot5: MissileFlightTimeRot1
			{
				maxAngle = 90;
				max = 2.5;
			};
			class MissileFlightTimeRot6: MissileFlightTimeRot1
			{
				maxAngle = 108;
				max = 3;
			};
			class MissileFlightTimeRot7: MissileFlightTimeRot1
			{
				maxAngle = 126;
				max = 3.5;
			};
			class MissileFlightTimeRot8: MissileFlightTimeRot1
			{
				maxAngle = 144;
				max = 4;
			};
			class MissileFlightTimeRot9: MissileFlightTimeRot1
			{
				maxAngle = 162;
				max = 4.5;
			};
			class MissileFlightTimeRot10: MissileFlightTimeRot1
			{
				maxAngle = 180;
				max = 5;
			};
			class MissileFlightTimeRot11: MissileFlightTimeRot1
			{
				maxAngle = 198;
				max = 5.5;
			};
			class MissileFlightTimeRot12: MissileFlightTimeRot1
			{
				maxAngle = 216;
				max = 6;
			};
			class MissileFlightTimeRot13: MissileFlightTimeRot1
			{
				maxAngle = 234;
				max = 6.5;
			};
			class MissileFlightTimeRot14: MissileFlightTimeRot1
			{
				maxAngle = 252;
				max = 7;
			};
			class MissileFlightTimeRot15: MissileFlightTimeRot1
			{
				maxAngle = 270;
				max = 7.5;
			};
			class MissileFlightTimeRot16: MissileFlightTimeRot1
			{
				maxAngle = 288;
				max = 8;
			};
			class MissileFlightTimeRot17: MissileFlightTimeRot1
			{
				maxAngle = 306;
				max = 8.5;
			};
			class MissileFlightTimeRot18: MissileFlightTimeRot1
			{
				maxAngle = 324;
				max = 9;
			};
			class MissileFlightTimeRot19: MissileFlightTimeRot1
			{
				maxAngle = 342;
				max = 9.5;
			};
			class MissileFlightTimeRot20: MissileFlightTimeRot1
			{
				maxAngle = 360;
				max = 10;
			};
			class Target
			{
				type = "vector";
				source = "targetToView";
				pos0[] = {0.5,0.5};
				pos10[] = {0.774,0.77};
			};
			class TargetingPodDir
			{
				source = "pilotcameratoview";
				type = "vector";
				pos0[] = {0.5,0.5};
				pos10[] = {0.774,0.77};
			};
			class TargetingPodTarget
			{
				source = "pilotcameratargettoview";
				type = "vector";
				pos0[] = {0.5,0.5};
				pos10[] = {0.774,0.77};
			};
			class ImpactPoint
			{
				type = "vector";
				source = "ImpactPointToView";
				pos0[] = {0.5,0.5};
				pos10[] = {0.774,0.77};
			};
			class ImpactPointRelative
			{
				type = "vector";
				source = "impactpointtoviewweaponRelative";
				pos0[] = {0.5,0.5};
				pos10[] = {0.774,0.77};
			};
			class NormalizeBombCircle
			{
				type = "normalizedorsmaller";
				limit = 0.08;
				aspectRatio = 0.985402;
			};
			class Limit0109
			{
				type = "limit";
				limits[] = {0.1,0.1,0.9,0.9};
			};
			class LimitWaypoint
			{
				type = "limit";
				limits[] = {0.2,0.1,0.8,0.1};
			};
			class WPPoint
			{
				type = "vector";
				source = "WPPoint";
				pos0[] = {0.5,0.5};
				pos10[] = {0.774,0.77};
			};
			class WPPointToView: WPPoint
			{
				source = "WPPointToView";
			};
			class Airport1
			{
				type = "vector";
				source = "airportCorner1ToView";
				pos0[] = {0.5,0.5};
				pos10[] = {0.774,0.77};
			};
			class Airport2: Airport1
			{
				source = "airportCorner2ToView";
			};
			class Airport3: Airport1
			{
				source = "airportCorner3ToView";
			};
			class Airport4: Airport1
			{
				source = "airportCorner4ToView";
			};
			class ILS_H
			{
				type = "ils";
				pos0[] = {0.5,0.5};
				pos3[] = {0.5822,0.5};
			};
			class ILS_W: ILS_H
			{
				pos3[] = {0.5,0.581};
			};
			class HorizonBankRot
			{
				type = "rotational";
				source = "horizonBank";
				center[] = {0.5,0.5};
				min = "-rad(30)";
				max = "rad(30)";
				minAngle = "180.25-30";
				maxAngle = "180.75+30";
				aspectRatio = 1;
			};
			class Level0: Pos10Vector
			{
				pos0[] = {0.5,0.5};
				pos10[] = {0.884,0.88};
				type = "horizontoview";
				angle = 0;
			};
			class LevelP5: Level0
			{
				angle = 5;
			};
			class LevelM5: Level0
			{
				angle = -5;
			};
			class LevelP10: Level0
			{
				angle = 10;
			};
			class LevelM10: Level0
			{
				angle = -10;
			};
			class LevelP15: Level0
			{
				angle = 15;
			};
			class LevelM15: Level0
			{
				angle = -15;
			};
			class LevelP20: Level0
			{
				angle = 20;
			};
			class LevelM20: Level0
			{
				angle = -20;
			};
			class LevelP25: Level0
			{
				angle = 25;
			};
			class LevelM25: Level0
			{
				angle = -25;
			};
			class LevelP30: Level0
			{
				angle = 30;
			};
			class LevelM30: Level0
			{
				angle = -30;
			};
			class LevelP35: Level0
			{
				angle = 35;
			};
			class LevelM35: Level0
			{
				angle = -35;
			};
			class LevelP40: Level0
			{
				angle = 40;
			};
			class LevelM40: Level0
			{
				angle = -40;
			};
			class LevelP45: Level0
			{
				angle = 45;
			};
			class LevelM45: Level0
			{
				angle = -45;
			};
			class LevelP50: Level0
			{
				angle = 50;
			};
			class LevelM50: Level0
			{
				angle = -50;
			};
			class LevelP60: Level0
			{
				angle = 60;
			};
			class LevelM60: Level0
			{
				angle = -60;
			};
			class LevelP70: Level0
			{
				angle = 70;
			};
			class LevelM70: Level0
			{
				angle = -70;
			};
			class LevelP80: Level0
			{
				angle = 80;
			};
			class LevelM80: Level0
			{
				angle = -80;
			};
			class LevelP90: Level0
			{
				angle = 90;
			};
			class LevelM90: Level0
			{
				angle = -90;
			};
			class LarAmmoMax
			{
				type = "linear";
				source = "LarAmmoMax";
				sourceScale = 1.0;
				min = 0;
				max = 1;
				minPos[] = {0.0,1.0};
				maxPos[] = {0.0,0.0};
			};
			class LarAmmoMin: LarAmmoMax
			{
				source = "LarAmmoMin";
			};
			class LarTargetDist: LarAmmoMax
			{
				source = "LarTargetDist";
			};
		};
		class Draw
		{
			width = 1.0;
			alpha = "user3";
			color[] = {"user0","user1","user2"};
			condition = "(1 - (cameraHeadingDiffY<=-19) + (abs(cameraHeadingDiffX)>=24))*on";
			class PlaneW
			{
				clipTL[] = {0.0,1.0};
				clipBR[] = {1.0,0.0};
				type = "line";
				width = 3.0;
				points[] = {{PlaneOrientation,{-0.04,0},1},{PlaneOrientation,{-0.015,0},1},{PlaneOrientation,{-0.0075,0.015},1},{PlaneOrientation,{0.0,0},1},{PlaneOrientation,{0.0075,0.015},1},{PlaneOrientation,{0.015,0},1},{PlaneOrientation,{0.04,0},1}};
			};
			class PlaneMovementCrosshair
			{
				type = "line";
				width = 3.0;
				points[] = {{"Velocity",{0,-0.02},1},{"Velocity",{0.01,-0.01732},1},{"Velocity",{0.01732,-0.01},1},{"Velocity",{0.02,0},1},{"Velocity",{0.01732,0.01},1},{"Velocity",{0.01,0.01732},1},{"Velocity",{0,0.02},1},{"Velocity",{-0.01,0.01732},1},{"Velocity",{-0.01732,0.01},1},{"Velocity",{-0.02,0},1},{"Velocity",{-0.01732,-0.01},1},{"Velocity",{-0.01,-0.01732},1},{"Velocity",{0,-0.02},1},{},{"Velocity",{0.04,0},1},{"Velocity",{0.02,0},1},{},{"Velocity",{-0.04,0},1},{"Velocity",{-0.02,0},1},{},{"Velocity",{0,-0.04},1},{"Velocity",{0,-0.02},1}};
			};
			class MachineGunCrosshairGroup
			{
				type = "group";
				condition = "-2+(mgun+rocket)*ImpactDistance";
				class MachineGunCrosshair
				{
					type = "line";
					width = 3.0;
					points[] = {{"ImpactPointRelative",{0.0,-0.0886861},1},{"ImpactPointRelative",{0.0,-0.0788321},1},{},{"ImpactPointRelative",{0.0,0.0886861},1},{"ImpactPointRelative",{0.0,0.0788321},1},{},{"ImpactPointRelative",{-0.09,0.0},1},{"ImpactPointRelative",{-0.08,0.0},1},{},{"ImpactPointRelative",{0.09,0.0},1},{"ImpactPointRelative",{0.08,0.0},1},{},{"ImpactPointRelative",{0.0,-0.0019708},1},{"ImpactPointRelative",{0.0,0.0019708},1},{},{"ImpactPointRelative",{-0.002,0.0},1},{"ImpactPointRelative",{0.002,0.0},1},{}};
				};
				class Circle
				{
					type = "line";
					width = 6.0;
					points[] = {{"ImpactPointRelative",{0,-0.0630657},1},{"ImpactPointRelative",{0,-0.0788321},1},{"MissileFlightTimeRot1",{0,0.08},1,"ImpactPointRelative",1},{"MissileFlightTimeRot2",{0,0.08},1,"ImpactPointRelative",1},{"MissileFlightTimeRot3",{0,0.08},1,"ImpactPointRelative",1},{"MissileFlightTimeRot4",{0,0.08},1,"ImpactPointRelative",1},{"MissileFlightTimeRot5",{0,0.08},1,"ImpactPointRelative",1},{"MissileFlightTimeRot6",{0,0.08},1,"ImpactPointRelative",1},{"MissileFlightTimeRot7",{0,0.08},1,"ImpactPointRelative",1},{"MissileFlightTimeRot8",{0,0.08},1,"ImpactPointRelative",1},{"MissileFlightTimeRot9",{0,0.08},1,"ImpactPointRelative",1},{"MissileFlightTimeRot10",{0,0.08},1,"ImpactPointRelative",1},{"MissileFlightTimeRot11",{0,0.08},1,"ImpactPointRelative",1},{"MissileFlightTimeRot12",{0,0.08},1,"ImpactPointRelative",1},{"MissileFlightTimeRot13",{0,0.08},1,"ImpactPointRelative",1},{"MissileFlightTimeRot14",{0,0.08},1,"ImpactPointRelative",1},{"MissileFlightTimeRot15",{0,0.08},1,"ImpactPointRelative",1},{"MissileFlightTimeRot16",{0,0.08},1,"ImpactPointRelative",1},{"MissileFlightTimeRot17",{0,0.08},1,"ImpactPointRelative",1},{"MissileFlightTimeRot18",{0,0.08},1,"ImpactPointRelative",1},{"MissileFlightTimeRot19",{0,0.08},1,"ImpactPointRelative",1},{"MissileFlightTimeRot20",{0,0.08},1,"ImpactPointRelative",1},{"MissileFlightTimeRot20",{0,0.064},1,"ImpactPointRelative",1}};
				};
				class Circle_Min_Range
				{
					type = "line";
					width = 3.0;
					points[] = {{"ImpactPointRelative",{0,-0.0788321},1},{"ImpactPointRelative",{0.013888,-0.0776339},1},{"ImpactPointRelative",{0.02736,-0.0740785},1},{"ImpactPointRelative",{0.04,-0.0682686},1},{"ImpactPointRelative",{0.051424,-0.0603854},1},{"ImpactPointRelative",{0.06128,-0.0506733},1},{"ImpactPointRelative",{0.06928,-0.0394161},1},{"ImpactPointRelative",{0.075176,-0.0269606},1},{"ImpactPointRelative",{0.078784,-0.0136853},1},{"ImpactPointRelative",{0.08,0},1},{"ImpactPointRelative",{0.078784,0.0136853},1},{"ImpactPointRelative",{0.075176,0.0269606},1},{"ImpactPointRelative",{0.06928,0.0394161},1},{"ImpactPointRelative",{0.06128,0.0506733},1},{"ImpactPointRelative",{0.051424,0.0603854},1},{"ImpactPointRelative",{0.04,0.0682686},1},{"ImpactPointRelative",{0.02736,0.0740785},1},{"ImpactPointRelative",{0.013888,0.0776339},1},{"ImpactPointRelative",{0,0.0788321},1},{"ImpactPointRelative",{-0.013888,0.0776339},1},{"ImpactPointRelative",{-0.02736,0.0740785},1},{"ImpactPointRelative",{-0.04,0.0682686},1},{"ImpactPointRelative",{-0.051424,0.0603854},1},{"ImpactPointRelative",{-0.06128,0.0506733},1},{"ImpactPointRelative",{-0.06928,0.0394161},1},{"ImpactPointRelative",{-0.075176,0.0269606},1},{"ImpactPointRelative",{-0.078784,0.0136853},1},{"ImpactPointRelative",{-0.08,0},1},{"ImpactPointRelative",{-0.078784,-0.0136853},1},{"ImpactPointRelative",{-0.075176,-0.0269606},1},{"ImpactPointRelative",{-0.06928,-0.0394161},1},{"ImpactPointRelative",{-0.06128,-0.0506733},1},{"ImpactPointRelative",{-0.051424,-0.0603854},1},{"ImpactPointRelative",{-0.04,-0.0682686},1},{"ImpactPointRelative",{-0.02736,-0.0740785},1},{"ImpactPointRelative",{-0.013888,-0.0776339},1},{"ImpactPointRelative",{0,-0.0788321},1}};
				};
				class Distance
				{
					type = "text";
					source = "ImpactDistance";
					sourceScale = 0.001;
					sourcePrecision = 1;
					max = 15;
					align = "center";
					scale = 1;
					pos[] = {"ImpactPointRelative",{-0.002,0.11},1};
					right[] = {"ImpactPointRelative",{0.045,0.11},1};
					down[] = {"ImpactPointRelative",{-0.002,0.15},1};
				};
			};
			class AAMissileCrosshairGroup
			{
				type = "group";
				condition = "AAmissile";
				class AAMissileCrosshair
				{
					type = "line";
					width = 4.0;
					points[] = {{PlaneOrientation,{0,-0.24635},1},{PlaneOrientation,{0.0434,-0.242606},1},{PlaneOrientation,{0.0855,-0.231495},1},{PlaneOrientation,{0.125,-0.213339},1},{PlaneOrientation,{0.1607,-0.188704},1},{PlaneOrientation,{0.1915,-0.158354},1},{PlaneOrientation,{0.2165,-0.123175},1},{PlaneOrientation,{0.234925,-0.0842518},1},{PlaneOrientation,{0.2462,-0.0427664},1},{PlaneOrientation,{0.25,0},1},{PlaneOrientation,{0.2462,0.0427664},1},{PlaneOrientation,{0.234925,0.0842518},1},{PlaneOrientation,{0.2165,0.123175},1},{PlaneOrientation,{0.1915,0.158354},1},{PlaneOrientation,{0.1607,0.188704},1},{PlaneOrientation,{0.125,0.213339},1},{PlaneOrientation,{0.0855,0.231495},1},{PlaneOrientation,{0.0434,0.242606},1},{PlaneOrientation,{0,0.24635},1},{PlaneOrientation,{-0.0434,0.242606},1},{PlaneOrientation,{-0.0855,0.231495},1},{PlaneOrientation,{-0.125,0.213339},1},{PlaneOrientation,{-0.1607,0.188704},1},{PlaneOrientation,{-0.1915,0.158354},1},{PlaneOrientation,{-0.2165,0.123175},1},{PlaneOrientation,{-0.234925,0.0842518},1},{PlaneOrientation,{-0.2462,0.0427664},1},{PlaneOrientation,{-0.25,0},1},{PlaneOrientation,{-0.2462,-0.0427664},1},{PlaneOrientation,{-0.234925,-0.0842518},1},{PlaneOrientation,{-0.2165,-0.123175},1},{PlaneOrientation,{-0.1915,-0.158354},1},{PlaneOrientation,{-0.1607,-0.188704},1},{PlaneOrientation,{-0.125,-0.213339},1},{PlaneOrientation,{-0.0855,-0.231495},1},{PlaneOrientation,{-0.0434,-0.242606},1},{PlaneOrientation,{0,-0.24635},1}};
				};
				class Lines
				{
					type = "line";
					width = 4.0;
					points[] = {{{0.21,0.55},1},{{0.19,0.55},1},{{0.19,0.71},1},{{0.21,0.71},1},{},{{0.21,0.67},1},{{0.19,0.67},1},{},{{0.21,0.63},1},{{0.19,0.63},1},{},{{0.21,0.59},1},{{0.19,0.59},1},{},{"LarTargetDist",-0.16,{0.17,0.73},1},{"LarTargetDist",-0.16,{0.19,0.71},1},{"LarTargetDist",-0.16,{0.17,0.69},1},{}};
				};
				class Poly
				{
					type = "polygon";
					points[] = {{{"LarAmmoMin",-0.16,{0.191,0.71},1},{"LarAmmoMax",-0.16,{0.191,0.71},1},{"LarAmmoMax",-0.16,{0.208,0.71},1},{"LarAmmoMin",-0.16,{0.208,0.71},1}}};
				};
				class TopText
				{
					type = "text";
					source = "LarTop";
					sourceScale = 0.001;
					scale = 1;
					pos[] = {{0.22,0.53},1};
					right[] = {{0.26,0.53},1};
					down[] = {{0.22,0.57},1};
					align = "right";
				};
				class MiddleText: TopText
				{
					source = "LarTop";
					sourcePrecision = -1;
					sourceScale = 0.0005;
					pos[] = {{0.22,0.61},1};
					right[] = {{0.26,0.61},1};
					down[] = {{0.22,0.65},1};
				};
				class SpeedText: TopText
				{
					source = "LarTargetSpeed";
					align = "left";
					sourceScale = 3.6;
					pos[] = {"LarTargetDist",-0.16,{0.16,0.69},1};
					right[] = {"LarTargetDist",-0.16,{0.2,0.69},1};
					down[] = {"LarTargetDist",-0.16,{0.16,0.73},1};
				};
			};
			class ATMissileCrosshairGroup
			{
				condition = "ATmissile";
				type = "group";
				class ATMissileCrosshair
				{
					type = "line";
					width = 4.0;
					points[] = {{"WeaponAim",{-0.15,-0.15},1},{"WeaponAim",{-0.15,-0.13},1},{},{"WeaponAim",{-0.15,0.15},1},{"WeaponAim",{-0.15,0.13},1},{},{"WeaponAim",{0.15,-0.15},1},{"WeaponAim",{0.15,-0.13},1},{},{"WeaponAim",{0.15,0.15},1},{"WeaponAim",{0.15,0.13},1},{},{"WeaponAim",{-0.15,-0.15},1},{"WeaponAim",{-0.13,-0.15},1},{},{"WeaponAim",{-0.15,0.15},1},{"WeaponAim",{-0.13,0.15},1},{},{"WeaponAim",{0.15,-0.15},1},{"WeaponAim",{0.13,-0.15},1},{},{"WeaponAim",{0.15,0.15},1},{"WeaponAim",{0.13,0.15},1}};
				};
			};
			class RocketCrosshairGroup
			{
				type = "group";
				condition = "Rocket";
				class MachineGunCrosshair
				{
					type = "line";
					width = 3.0;
					points[] = {{"ImpactPoint",{0.0,-0.0394161},1},{"ImpactPoint",{0.0,-0.019708},1},{},{"ImpactPoint",{0.0,0.0394161},1},{"ImpactPoint",{0.0,0.019708},1},{},{"ImpactPoint",{-0.04,0.0},1},{"ImpactPoint",{-0.02,0.0},1},{},{"ImpactPoint",{0.04,0.0},1},{"ImpactPoint",{0.02,0.0},1},{},{"ImpactPoint",{0.01,-0.0394161},1},{"ImpactPoint",{-0.01,-0.0394161},1},{},{"ImpactPoint",{0.0,-0.0019708},1},{"ImpactPoint",{0.0,0.0019708},1},{},{"ImpactPoint",{-0.002,0.0},1},{"ImpactPoint",{0.002,0.0},1},{}};
				};
				class Distance
				{
					type = "text";
					source = "ImpactDistance";
					sourceScale = 0.001;
					sourcePrecision = 1;
					max = 15;
					align = "center";
					scale = 1;
					pos[] = {"ImpactPoint",{-0.002,0.07},1};
					right[] = {"ImpactPoint",{0.045,0.07},1};
					down[] = {"ImpactPoint",{-0.002,0.11},1};
				};
			};
			class BombCrosshairGroup
			{
				type = "group";
				condition = "bomb";
				class BombCrosshair
				{
					width = 4.0;
					type = "line";
					points[] = {{"ImpactPoint",{0.0,0.0886861},1},{"ImpactPoint",{0.0,0.0788321},1},{},{"ImpactPoint",{-0.09,0.0},1},{"ImpactPoint",{-0.08,0.0},1},{},{"ImpactPoint",{0.09,0.0},1},{"ImpactPoint",{0.08,0.0},1},{},{"ImpactPoint",{0.0,-0.0019708},1},{"ImpactPoint",{0.0,0.0019708},1},{},{"ImpactPoint",{-0.002,0.0},1},{"ImpactPoint",{0.002,0.0},1},{},{"ImpactPoint",{0,-0.0788321},1},{"ImpactPoint",{0.013888,-0.0776339},1},{"ImpactPoint",{0.02736,-0.0740785},1},{"ImpactPoint",{0.04,-0.0682686},1},{"ImpactPoint",{0.051424,-0.0603854},1},{"ImpactPoint",{0.06128,-0.0506733},1},{"ImpactPoint",{0.06928,-0.0394161},1},{"ImpactPoint",{0.075176,-0.0269606},1},{"ImpactPoint",{0.078784,-0.0136853},1},{"ImpactPoint",{0.08,0},1},{"ImpactPoint",{0.078784,0.0136853},1},{"ImpactPoint",{0.075176,0.0269606},1},{"ImpactPoint",{0.06928,0.0394161},1},{"ImpactPoint",{0.06128,0.0506733},1},{"ImpactPoint",{0.051424,0.0603854},1},{"ImpactPoint",{0.04,0.0682686},1},{"ImpactPoint",{0.02736,0.0740785},1},{"ImpactPoint",{0.013888,0.0776339},1},{"ImpactPoint",{0,0.0788321},1},{"ImpactPoint",{-0.013888,0.0776339},1},{"ImpactPoint",{-0.02736,0.0740785},1},{"ImpactPoint",{-0.04,0.0682686},1},{"ImpactPoint",{-0.051424,0.0603854},1},{"ImpactPoint",{-0.06128,0.0506733},1},{"ImpactPoint",{-0.06928,0.0394161},1},{"ImpactPoint",{-0.075176,0.0269606},1},{"ImpactPoint",{-0.078784,0.0136853},1},{"ImpactPoint",{-0.08,0},1},{"ImpactPoint",{-0.078784,-0.0136853},1},{"ImpactPoint",{-0.075176,-0.0269606},1},{"ImpactPoint",{-0.06928,-0.0394161},1},{"ImpactPoint",{-0.06128,-0.0506733},1},{"ImpactPoint",{-0.051424,-0.0603854},1},{"ImpactPoint",{-0.04,-0.0682686},1},{"ImpactPoint",{-0.02736,-0.0740785},1},{"ImpactPoint",{-0.013888,-0.0776339},1},{"ImpactPoint",{0,-0.0788321},1},{},{},{"ImpactPoint",-1,"Velocity",1,"NormalizeBombCircle",1,"ImpactPoint",1,{0.0,0.0},1},{"Velocity",1,"Limit0109",1,{0.0,0.0},1}};
				};
				class Circle
				{
					type = "line";
					width = 6.0;
					points[] = {{"ImpactPoint",{0,-0.0630657},1},{"ImpactPoint",{0,-0.0788321},1},{"MissileFlightTimeRot1",{0,0.08},1,"ImpactPoint",1},{"MissileFlightTimeRot2",{0,0.08},1,"ImpactPoint",1},{"MissileFlightTimeRot3",{0,0.08},1,"ImpactPoint",1},{"MissileFlightTimeRot4",{0,0.08},1,"ImpactPoint",1},{"MissileFlightTimeRot5",{0,0.08},1,"ImpactPoint",1},{"MissileFlightTimeRot6",{0,0.08},1,"ImpactPoint",1},{"MissileFlightTimeRot7",{0,0.08},1,"ImpactPoint",1},{"MissileFlightTimeRot8",{0,0.08},1,"ImpactPoint",1},{"MissileFlightTimeRot9",{0,0.08},1,"ImpactPoint",1},{"MissileFlightTimeRot10",{0,0.08},1,"ImpactPoint",1},{"MissileFlightTimeRot11",{0,0.08},1,"ImpactPoint",1},{"MissileFlightTimeRot12",{0,0.08},1,"ImpactPoint",1},{"MissileFlightTimeRot13",{0,0.08},1,"ImpactPoint",1},{"MissileFlightTimeRot14",{0,0.08},1,"ImpactPoint",1},{"MissileFlightTimeRot15",{0,0.08},1,"ImpactPoint",1},{"MissileFlightTimeRot16",{0,0.08},1,"ImpactPoint",1},{"MissileFlightTimeRot17",{0,0.08},1,"ImpactPoint",1},{"MissileFlightTimeRot18",{0,0.08},1,"ImpactPoint",1},{"MissileFlightTimeRot19",{0,0.08},1,"ImpactPoint",1},{"MissileFlightTimeRot20",{0,0.08},1,"ImpactPoint",1},{"MissileFlightTimeRot20",{0,0.064},1,"ImpactPoint",1}};
				};
				class Distance
				{
					type = "text";
					source = "ImpactDistance";
					sourceScale = 0.001;
					sourcePrecision = 1;
					max = 15;
					align = "center";
					scale = 1;
					pos[] = {"ImpactPoint",{-0.002,0.11},1};
					right[] = {"ImpactPoint",{0.045,0.11},1};
					down[] = {"ImpactPoint",{-0.002,0.15},1};
				};
			};
			class WeaponsText
			{
				condition = "1- mgun";
				class WeaponsText
				{
					type = "text";
					source = "weapon";
					sourceScale = 1;
					align = "right";
					scale = 1;
					pos[] = {{0.032,0.84},1};
					right[] = {{0.087,0.84},1};
					down[] = {{0.032,0.885},1};
				};
			};
			class MGunText
			{
				condition = "mgun";
				class WeaponsText
				{
					type = "text";
					source = "static";
					text = "GUN";
					sourceScale = 1;
					align = "right";
					scale = 1;
					pos[] = {{0.032,0.84},1};
					right[] = {{0.087,0.84},1};
					down[] = {{0.032,0.885},1};
				};
			};
			class AmmoText
			{
				type = "text";
				source = "ammo";
				sourceScale = 1;
				align = "right";
				scale = 1;
				pos[] = {{0.032,0.88},1};
				right[] = {{0.087,0.88},1};
				down[] = {{0.032,0.925},1};
			};
			class Laser
			{
				condition = "laseron";
				class LaserText
				{
					type = "text";
					source = "static";
					text = "LASER";
					align = "left";
					scale = 1;
					pos[] = {{0.932,0.8},1};
					right[] = {{0.987,0.8},1};
					down[] = {{0.932,0.845},1};
				};
			};
			class Tailhook
			{
				condition = "user4";
				class TailhookText
				{
					type = "text";
					source = "static";
					text = "TAILHOOK";
					align = "left";
					scale = 1;
					pos[] = {{0.932,0.88},1};
					right[] = {{0.987,0.88},1};
					down[] = {{0.932,0.925},1};
				};
			};
			class Flaps
			{
				condition = "flaps";
				class FlapsText
				{
					type = "text";
					source = "static";
					text = "FLAPS";
					align = "left";
					scale = 1;
					pos[] = {{0.932,0.92},1};
					right[] = {{0.987,0.92},1};
					down[] = {{0.932,0.965},1};
				};
			};
			class ILS
			{
				condition = "ils";
				class GearText
				{
					type = "text";
					source = "static";
					text = "GEAR";
					align = "left";
					scale = 1;
					pos[] = {{0.932,0.84},1};
					right[] = {{0.987,0.84},1};
					down[] = {{0.932,0.885},1};
				};
				class Glideslope
				{
					clipTL[] = {0.0,0.0};
					clipBR[] = {1.0,1.0};
					class ILS
					{
						type = "line";
						width = 2.0;
						points[] = {{"ILS_W",{-0.12,0},1},{"ILS_W",{0.12,0},1},{},{"ILS_W",{-0.12,-0.0118248},1},{"ILS_W",{-0.12,0.0118248},1},{},{"ILS_W",{-0.06,-0.00886861},1},{"ILS_W",{-0.06,0.00886861},1},{},{"ILS_W",{0,-0.0118248},1},{"ILS_W",{0,0.0118248},1},{},{"ILS_W",{0.06,-0.00886861},1},{"ILS_W",{0.06,0.00886861},1},{},{"ILS_W",{0.12,-0.0118248},1},{"ILS_W",{0.12,0.0118248},1},{},{"ILS_H",{0,-0.118248},1},{"ILS_H",{0,0.118248},1},{},{"ILS_H",{-0.012,-0.118248},1},{"ILS_H",{0.012,-0.118248},1},{},{"ILS_H",{-0.009,-0.0591241},1},{"ILS_H",{0.009,-0.0591241},1},{},{"ILS_H",{-0.012,0},1},{"ILS_H",{0.012,0},1},{},{"ILS_H",{-0.009,0.0591241},1},{"ILS_H",{0.009,0.0591241},1},{},{"ILS_H",{-0.012,0.118248},1},{"ILS_H",{0.012,0.118248},1}};
					};
					class airport
					{
						type = "line";
						points[] = {{"airport1",1},{"airport2",1},{"airport4",1},{"airport3",1},{"airport1",1}};
					};
				};
			};
			class TargetLocking
			{
				condition = "missilelocking";
				blinkingPattern[] = {0.2,0.2};
				blinkingStartsOn = 1;
				class shape
				{
					type = "line";
					width = 4;
					points[] = {{"Target",1,"Limit0109",1,{0,-0.029562},1},{"Target",1,"Limit0109",1,{0.03,0},1},{"Target",1,"Limit0109",1,{0,0.029562},1},{"Target",1,"Limit0109",1,{-0.03,0},1},{"Target",1,"Limit0109",1,{0,-0.029562},1}};
				};
			};
			class TargetLocked
			{
				condition = "missilelocked";
				class shape
				{
					type = "line";
					width = 4;
					points[] = {{"Target",1,"Limit0109",1,{0,-0.029562},1},{"Target",1,"Limit0109",1,{0.03,0},1},{"Target",1,"Limit0109",1,{0,0.029562},1},{"Target",1,"Limit0109",1,{-0.03,0},1},{"Target",1,"Limit0109",1,{0,-0.029562},1}};
				};
			};
			class IncomingMissile
			{
				condition = "incomingmissile";
				blinkingPattern[] = {0.3,0.3};
				blinkingStartsOn = 1;
				class Text
				{
					type = "text";
					source = "static";
					text = "!INCOMING MISSILE!";
					align = "center";
					scale = 1;
					pos[] = {{0.485,0.216788},1};
					right[] = {{0.545,0.216788},1};
					down[] = {{0.485,0.266058},1};
				};
			};
			class StallGroup
			{
				type = "group";
				condition = "stall";
				color[] = {1.0,0.0,0.0};
				blinkingPattern[] = {0.2,0.2};
				blinkingStartsOn = 1;
				class StallText
				{
					type = "text";
					source = "static";
					text = "STALL";
					align = "center";
					scale = 1;
					pos[] = {{0.5,0.25},1};
					right[] = {{0.54,0.25},1};
					down[] = {{0.5,0.29},1};
				};
			};
			class TargetingPodGroup
			{
				condition = "1-pilotcameralock";
				class TargetingPodDir
				{
					type = "line";
					width = 3.0;
					points[] = {{"TargetingPodDir",1,{0.0208056,0.00407807},1},{"TargetingPodDir",1,{0.0208056,-0.00407807},1},{},{"TargetingPodDir",1,{0.0176381,-0.0116134},1},{"TargetingPodDir",1,{0.0117854,-0.0173806},1},{},{"TargetingPodDir",1,{0.00413849,-0.0205019},1},{"TargetingPodDir",1,{-0.00413849,-0.0205019},1},{},{"TargetingPodDir",1,{-0.0117854,-0.0173806},1},{"TargetingPodDir",1,{-0.0176381,-0.0116134},1},{},{"TargetingPodDir",1,{-0.0208056,-0.00407807},1},{"TargetingPodDir",1,{-0.0208056,0.00407808},1},{},{"TargetingPodDir",1,{-0.0176381,0.0116134},1},{"TargetingPodDir",1,{-0.0117854,0.0173806},1},{},{"TargetingPodDir",1,{-0.00413849,0.0205019},1},{"TargetingPodDir",1,{0.00413849,0.0205019},1},{},{"TargetingPodDir",1,{0.0117854,0.0173806},1},{"TargetingPodDir",1,{0.0176381,0.0116134},1},{},{"TargetingPodDir",1,{0.0208056,0.00407807},1},{"TargetingPodDir",1,{0.0208056,-0.00407808},1},{},{"TargetingPodDir",1,{0.0176381,-0.0116134},1},{"TargetingPodDir",1,{0.0117854,-0.0173807},1},{},{"TargetingPodDir",1,{0.00413849,-0.0205019},1},{"TargetingPodDir",1,{-0.0041385,-0.0205019},1},{},{"TargetingPodDir",1,{-0.0117854,-0.0173806},1},{"TargetingPodDir",1,{-0.0176381,-0.0116134},1},{},{}};
				};
			};
			class TargetingPodGroupOn
			{
				condition = "pilotcameralock";
				class TargetingPodDir
				{
					type = "line";
					width = 3.0;
					points[] = {{"TargetingPodTarget",1,"Limit0109",1,{0.0208056,0.00407807},1},{"TargetingPodTarget",1,"Limit0109",1,{0.0208056,-0.00407807},1},{},{"TargetingPodTarget",1,"Limit0109",1,{0.0176381,-0.0116134},1},{"TargetingPodTarget",1,"Limit0109",1,{0.0117854,-0.0173806},1},{},{"TargetingPodTarget",1,"Limit0109",1,{0.00413849,-0.0205019},1},{"TargetingPodTarget",1,"Limit0109",1,{-0.00413849,-0.0205019},1},{},{"TargetingPodTarget",1,"Limit0109",1,{-0.0117854,-0.0173806},1},{"TargetingPodTarget",1,"Limit0109",1,{-0.0176381,-0.0116134},1},{},{"TargetingPodTarget",1,"Limit0109",1,{-0.0208056,-0.00407807},1},{"TargetingPodTarget",1,"Limit0109",1,{-0.0208056,0.00407808},1},{},{"TargetingPodTarget",1,"Limit0109",1,{-0.0176381,0.0116134},1},{"TargetingPodTarget",1,"Limit0109",1,{-0.0117854,0.0173806},1},{},{"TargetingPodTarget",1,"Limit0109",1,{-0.00413849,0.0205019},1},{"TargetingPodTarget",1,"Limit0109",1,{0.00413849,0.0205019},1},{},{"TargetingPodTarget",1,"Limit0109",1,{0.0117854,0.0173806},1},{"TargetingPodTarget",1,"Limit0109",1,{0.0176381,0.0116134},1},{},{"TargetingPodTarget",1,"Limit0109",1,{0.0208056,0.00407807},1},{"TargetingPodTarget",1,"Limit0109",1,{0.0208056,-0.00407808},1},{},{"TargetingPodTarget",1,"Limit0109",1,{0.0176381,-0.0116134},1},{"TargetingPodTarget",1,"Limit0109",1,{0.0117854,-0.0173807},1},{},{"TargetingPodTarget",1,"Limit0109",1,{0.00413849,-0.0205019},1},{"TargetingPodTarget",1,"Limit0109",1,{-0.0041385,-0.0205019},1},{},{"TargetingPodTarget",1,"Limit0109",1,{-0.0117854,-0.0173806},1},{"TargetingPodTarget",1,"Limit0109",1,{-0.0176381,-0.0116134},1},{},{}};
				};
			};
			class MainCenterLine1
			{
				type = "line";
				width = 3.0;
				points[] = {{"PlaneW",{-0.49,"0 + 0.025"},1},{"PlaneW",{-0.49,0},1},{"PlaneW",{-0.45,0},1}};
			};
			class MainCenterLine2
			{
				type = "line";
				width = 3.0;
				points[] = {{"PlaneW",{-0.33,0},1},{"PlaneW",{-0.25,0},1}};
			};
			class MainCenterLine3
			{
				type = "line";
				width = 3.0;
				points[] = {{"PlaneW",{0.49,"0 + 0.025"},1},{"PlaneW",{0.49,0},1},{"PlaneW",{0.25,0},1}};
			};
			class SpeedIndicatorBox
			{
				type = "line";
				width = 3.0;
				points[] = {{"PlaneW",{-0.49,-0.25},1},{"PlaneW",{-0.49,-0.2},1},{"PlaneW",{-0.3,-0.2},1},{"PlaneW",{-0.3,-0.25},1},{"PlaneW",{-0.49,-0.25},1}};
			};
			class SpeedNumber
			{
				type = "text";
				source = "speed";
				sourceScale = 3.6;
				align = "center";
				scale = 1;
				pos[] = {"PlaneW",{-0.4,-0.25},1};
				right[] = {"PlaneW",{-0.3,-0.25},1};
				down[] = {"PlaneW",{-0.4,-0.2},1};
			};
			class AltitudeIndicatorBox
			{
				type = "line";
				width = 3.0;
				points[] = {{"PlaneW",{0.49,-0.25},1},{"PlaneW",{0.49,-0.2},1},{"PlaneW",{0.3,-0.2},1},{"PlaneW",{0.3,-0.25},1},{"PlaneW",{0.49,-0.25},1}};
			};
			class AltitudeNumberASL
			{
				type = "text";
				source = "altitudeASL";
				sourceScale = 1;
				align = "center";
				scale = 1;
				pos[] = {"PlaneW",{0.4,-0.25},1};
				right[] = {"PlaneW",{0.48,-0.25},1};
				down[] = {"PlaneW",{0.4,-0.2},1};
			};
			class AltitudeRadarText
			{
				type = "text";
				source = "static";
				text = "R";
				align = "left";
				scale = 1;
				sourceScale = 1;
				pos[] = {"PlaneW",{0.32,-0.192},1};
				right[] = {"PlaneW",{"+0.32 + 0.04",-0.192},1};
				down[] = {"PlaneW",{0.32,"-0.192 + 0.041"},1};
			};
			class AltitudeNumberAGL
			{
				type = "text";
				source = "altitudeAGL";
				sourceScale = 1;
				sourceLength = 4;
				sourceOffset = -2;
				align = "left";
				scale = 1;
				pos[] = {"PlaneW",{0.48,-0.19},1};
				right[] = {"PlaneW",{0.54,-0.19},1};
				down[] = {"PlaneW",{0.48,-0.15},1};
			};
			class PitchNumber
			{
				type = "text";
				source = "horizonDive";
				sourceScale = 57.2958;
				align = "right";
				scale = 1;
				pos[] = {"PlaneW",{-0.39,-0.076},1};
				right[] = {"PlaneW",{"-0.39 + 0.04",-0.076},1};
				down[] = {"PlaneW",{-0.39,"-0.076 + 0.05"},1};
			};
			class PitchText
			{
				type = "text";
				source = "static";
				text = "P:";
				align = "left";
				scale = 1;
				pos[] = {"PlaneW",{-0.41,-0.076},1};
				right[] = {"PlaneW",{"-0.41 + 0.04",-0.076},1};
				down[] = {"PlaneW",{-0.41,"-0.076 + 0.05"},1};
			};
			class RollNumber
			{
				type = "text";
				source = "horizonBank";
				sourceScale = 57.2958;
				align = "right";
				scale = 1;
				pos[] = {"PlaneW",{-0.39,-0.025},1};
				right[] = {"PlaneW",{"-0.39 + 0.04",-0.025},1};
				down[] = {"PlaneW",{-0.39,"-0.025 + 0.05"},1};
			};
			class RollText
			{
				type = "text";
				source = "static";
				text = "R:";
				align = "left";
				scale = 1;
				pos[] = {"PlaneW",{-0.41,-0.025},1};
				right[] = {"PlaneW",{"-0.41 + 0.04",-0.025},1};
				down[] = {"PlaneW",{-0.41,"-0.025 + 0.05"},1};
			};
			class ClimbNumber
			{
				type = "text";
				source = "vspeed";
				sourceScale = 1;
				align = "right";
				scale = 1;
				pos[] = {"PlaneW",{-0.39,0.026},1};
				right[] = {"PlaneW",{"-0.39 + 0.04",0.026},1};
				down[] = {"PlaneW",{-0.39,"+0.026 + 0.05"},1};
			};
			class ClimbText
			{
				type = "text";
				source = "static";
				text = "C:";
				align = "left";
				scale = 1;
				pos[] = {"PlaneW",{-0.41,0.026},1};
				right[] = {"PlaneW",{"-0.41 + 0.04",0.026},1};
				down[] = {"PlaneW",{-0.41,"+0.026 + 0.05"},1};
			};
			class HeadingArrow
			{
				type = "line";
				width = 3.0;
				points[] = {{"WPPoint",1,"LimitWaypoint",1,{-0.02,0.042},1},{"WPPoint",1,"LimitWaypoint",1,{0,0.022},1},{"WPPoint",1,"LimitWaypoint",1,{0.02,0.042},1}};
			};
			class WP
			{
				condition = "wpvalid";
				class WPdist
				{
					type = "text";
					source = "wpdist";
					sourceScale = 0.001;
					sourcePrecision = 1;
					align = "right";
					scale = 1;
					pos[] = {{0.924,0.505018},1};
					down[] = {{0.924,0.542464},1};
					right[] = {{0.964,0.505018},1};
				};
				class WPIndex
				{
					type = "text";
					source = "wpIndex";
					sourceScale = 1;
					sourceLength = 2;
					align = "right";
					scale = 1;
					pos[] = {{0.877,0.505018},1};
					right[] = {{0.917,0.505018},1};
					down[] = {{0.877,0.542464},1};
				};
				class WPstatic
				{
					type = "text";
					source = "static";
					text = "WP";
					scale = 1;
					sourceScale = 1;
					align = "right";
					pos[] = {{"0.825+0.01",0.5065},1};
					right[] = {{0.875,0.5065},1};
					down[] = {{"0.825+0.01",0.5415},1};
				};
				class WPKM
				{
					type = "text";
					source = "static";
					text = ":";
					scale = 1;
					sourceScale = 1;
					align = "left";
					pos[] = {{"0.825+0.09",0.5065},1};
					right[] = {{0.955,0.5065},1};
					down[] = {{"0.825+0.09",0.5415},1};
				};
			};
			class HeadingRotation
			{
				condition = "abs(cameraDir-heading)*( (abs(heading-cameraDir))<=355)-5";
				class HeadingHeadNumber
				{
					type = "text";
					source = "cameraDir";
					sourceScale = 1;
					align = "center";
					scale = 1;
					pos[] = {{"0.80-0.302","0.082+0.065"},1};
					right[] = {{"0.83-0.302","0.082+0.065"},1};
					down[] = {{"0.80-0.302","0.113+0.065"},1};
				};
				class HeadingArrow
				{
					type = "line";
					width = 3.0;
					points[] = {{{0.488,0.141},1},{{0.512,0.141},1},{{0.542,0.161},1},{{0.512,0.181},1},{{0.488,0.181},1},{{0.458,0.161},1},{{0.488,0.141},1},{}};
				};
			};
			class HeadingScale
			{
				type = "scale";
				NeverEatSeaWeed = 1;
				horizontal = 1;
				source = "heading";
				sourceScale = 1.0;
				width = 3.0;
				top = 0.1;
				center = 0.5;
				bottom = 0.9;
				lineXleft = 0.105;
				lineYright = 0.115;
				lineXleftMajor = 0.095;
				lineYrightMajor = 0.115;
				majorLineEach = 5;
				numberEach = 5;
				step = "18 / 9";
				stepSize = "(0.70 - 0.3) / 15";
				align = "center";
				scale = 1.0;
				pos[] = {0.096,0.0546};
				right[] = {0.143,0.0546};
				down[] = {0.096,0.093};
			};
			class HeadingIndicatorBox
			{
				type = "line";
				width = 3.0;
				points[] = {{"PlaneW",{-0.035,-0.455},1},{"PlaneW",{-0.035,-0.5},1},{"PlaneW",{0.035,-0.5},1},{"PlaneW",{0.035,-0.455},1},{"PlaneW",{-0.035,-0.455},1}};
			};
			class HeadingIndicatorArrow
			{
				type = "polygon";
				points[] = {{{"PlaneW",{-0.015,-0.455},1},{"PlaneW",{0,-0.445},1},{"PlaneW",{0.015,-0.455},1}}};
			};
			class HeadingNumber
			{
				type = "text";
				source = "heading";
				sourceScale = 1;
				align = "center";
				scale = 1;
				pos[] = {"PlaneW",{0,"(-0.5			)"},1};
				right[] = {"PlaneW",{0.03,"(-0.5			)"},1};
				down[] = {"PlaneW",{0,"(-0.5 + 0.045	)"},1};
			};
			class HorizonBankRot
			{
				type = "line";
				width = 2.0;
				points[] = {{"HorizonBankRot",{0,"0.39421001-0.109"},1},{"HorizonBankRot",{0.01,"0.41673699-0.109"},1},{"HorizonBankRot",{-0.01,"0.41673699-0.109"},1},{"HorizonBankRot",{0,"0.39421001-0.109"},1}};
			};
			class HorizonBankRotLines
			{
				type = "line";
				width = 3.0;
				points[] = {{{0.619959,0.712986},1},{{0.631439,0.744203},1},{},{{0.58291,0.739019},1},{{0.588087,0.760778},1},{},{{0.540574,0.748504},1},{{0.543184,0.770838},1},{},{{0.4975,0.740421},1},{{0.4975,0.77421},1},{},{{0.454426,0.748504},1},{{0.451816,0.770838},1},{},{{0.41209,0.739019},1},{{0.406913,0.760778},1},{},{{0.375041,0.712986},1},{{0.363561,0.744203},1}};
			};
			class Horizont
			{
				clipTL[] = {0.2,0.2};
				clipBR[] = {0.8,0.8};
				class Dimmed
				{
					class Level0
					{
						type = "line";
						width = 3.0;
						points[] = {{"Level0",{0.75,0.0},1},{"Level0",{0.065,0.0},1},{},{"Level0",{-0.065,0.0},1},{"Level0",{-0.75,0.0},1}};
					};
				};
				class HideOnTurn
				{
					condition = "5-abs(cameraDir-heading)*( (abs(heading-cameraDir))<=355)) ";
					class Limiter
					{
						class Level0
						{
							type = "line";
							width = 2.0;
							points[] = {};
						};
						class LevelM5: Level0
						{
							type = "line";
							points[] = {{"LevelM5",{-0.235,-0.02},1},{"LevelM5",{-0.235,0},1},{},{"LevelM5",{-0.22,0},1},{"LevelM5",{-0.205,0},1},{},{"LevelM5",{-0.19,0},1},{"LevelM5",{-0.175,0},1},{},{"LevelM5",{-0.16,0},1},{"LevelM5",{-0.145,0},1},{},{"LevelM5",{-0.13,0},1},{"LevelM5",{-0.115,0},1},{},{"LevelM5",{-0.1,0},1},{"LevelM5",{-0.085,0},1},{},{"LevelM5",{-0.07,0},1},{"LevelM5",{-0.055,0},1},{},{},{"LevelM5",{0.235,-0.02},1},{"LevelM5",{0.235,0},1},{},{"LevelM5",{0.22,0},1},{"LevelM5",{0.205,0},1},{},{"LevelM5",{0.19,0},1},{"LevelM5",{0.175,0},1},{},{"LevelM5",{0.16,0},1},{"LevelM5",{0.145,0},1},{},{"LevelM5",{0.13,0},1},{"LevelM5",{0.115,0},1},{},{"LevelM5",{0.1,0},1},{"LevelM5",{0.085,0},1},{},{"LevelM5",{0.07,0},1},{"LevelM5",{0.055,0},1},{}};
						};
						class VALM_1_5
						{
							type = "text";
							source = "static";
							text = -5;
							align = "left";
							scale = 1;
							sourceScale = 1;
							pos[] = {"LevelM5",{-0.26,-0.032},1};
							right[] = {"LevelM5",{-0.2,-0.032},1};
							down[] = {"LevelM5",{-0.26,0.018},1};
						};
						class VALM_1_5_R
						{
							type = "text";
							source = "static";
							text = -5;
							align = "right";
							scale = 1;
							sourceScale = 1;
							pos[] = {"LevelM5",{0.26,-0.032},1};
							right[] = {"LevelM5",{0.32,-0.032},1};
							down[] = {"LevelM5",{0.26,0.018},1};
						};
						class LevelP5: Level0
						{
							type = "line";
							points[] = {{"LevelP5",{"-0.22-0.015",0.02},1},{"LevelP5",{"-0.22-0.015",0},1},{"LevelP5",{-0.06,0},1},{},{"LevelP5",{0.06,0},1},{"LevelP5",{"+0.22+0.015",0},1},{"LevelP5",{"+0.22+0.015",0.02},1}};
						};
						class VALP_1_5
						{
							type = "text";
							source = "static";
							text = "5";
							align = "left";
							scale = 1;
							sourceScale = 1;
							pos[] = {"LevelP5",{-0.26,-0.017},1};
							right[] = {"LevelP5",{-0.2,-0.017},1};
							down[] = {"LevelP5",{-0.26,0.033},1};
						};
						class VALP_1_5_R
						{
							type = "text";
							source = "static";
							text = "5";
							align = "right";
							scale = 1;
							sourceScale = 1;
							pos[] = {"LevelP5",{0.26,-0.017},1};
							right[] = {"LevelP5",{0.32,-0.017},1};
							down[] = {"LevelP5",{0.26,0.033},1};
						};
						class LevelM10: Level0
						{
							type = "line";
							points[] = {{"LevelM10",{-0.235,-0.02},1},{"LevelM10",{-0.235,0},1},{},{"LevelM10",{-0.22,0},1},{"LevelM10",{-0.205,0},1},{},{"LevelM10",{-0.19,0},1},{"LevelM10",{-0.175,0},1},{},{"LevelM10",{-0.16,0},1},{"LevelM10",{-0.145,0},1},{},{"LevelM10",{-0.13,0},1},{"LevelM10",{-0.115,0},1},{},{"LevelM10",{-0.1,0},1},{"LevelM10",{-0.085,0},1},{},{"LevelM10",{-0.07,0},1},{"LevelM10",{-0.055,0},1},{},{},{"LevelM10",{0.235,-0.02},1},{"LevelM10",{0.235,0},1},{},{"LevelM10",{0.22,0},1},{"LevelM10",{0.205,0},1},{},{"LevelM10",{0.19,0},1},{"LevelM10",{0.175,0},1},{},{"LevelM10",{0.16,0},1},{"LevelM10",{0.145,0},1},{},{"LevelM10",{0.13,0},1},{"LevelM10",{0.115,0},1},{},{"LevelM10",{0.1,0},1},{"LevelM10",{0.085,0},1},{},{"LevelM10",{0.07,0},1},{"LevelM10",{0.055,0},1},{}};
						};
						class VALM_1_10
						{
							type = "text";
							source = "static";
							text = -10;
							align = "left";
							scale = 1;
							sourceScale = 1;
							pos[] = {"LevelM10",{-0.26,-0.032},1};
							right[] = {"LevelM10",{-0.2,-0.032},1};
							down[] = {"LevelM10",{-0.26,0.018},1};
						};
						class VALM_1_10_R
						{
							type = "text";
							source = "static";
							text = -10;
							align = "right";
							scale = 1;
							sourceScale = 1;
							pos[] = {"LevelM10",{0.26,-0.032},1};
							right[] = {"LevelM10",{0.32,-0.032},1};
							down[] = {"LevelM10",{0.26,0.018},1};
						};
						class LevelP10: Level0
						{
							type = "line";
							points[] = {{"LevelP10",{"-0.22-0.015",0.02},1},{"LevelP10",{"-0.22-0.015",0},1},{"LevelP10",{-0.06,0},1},{},{"LevelP10",{0.06,0},1},{"LevelP10",{"+0.22+0.015",0},1},{"LevelP10",{"+0.22+0.015",0.02},1}};
						};
						class VALP_1_10
						{
							type = "text";
							source = "static";
							text = "10";
							align = "left";
							scale = 1;
							sourceScale = 1;
							pos[] = {"LevelP10",{-0.26,-0.017},1};
							right[] = {"LevelP10",{-0.2,-0.017},1};
							down[] = {"LevelP10",{-0.26,0.033},1};
						};
						class VALP_1_10_R
						{
							type = "text";
							source = "static";
							text = "10";
							align = "right";
							scale = 1;
							sourceScale = 1;
							pos[] = {"LevelP10",{0.26,-0.017},1};
							right[] = {"LevelP10",{0.32,-0.017},1};
							down[] = {"LevelP10",{0.26,0.033},1};
						};
						class LevelM15: Level0
						{
							type = "line";
							points[] = {{"LevelM15",{-0.235,-0.02},1},{"LevelM15",{-0.235,0},1},{},{"LevelM15",{-0.22,0},1},{"LevelM15",{-0.205,0},1},{},{"LevelM15",{-0.19,0},1},{"LevelM15",{-0.175,0},1},{},{"LevelM15",{-0.16,0},1},{"LevelM15",{-0.145,0},1},{},{"LevelM15",{-0.13,0},1},{"LevelM15",{-0.115,0},1},{},{"LevelM15",{-0.1,0},1},{"LevelM15",{-0.085,0},1},{},{"LevelM15",{-0.07,0},1},{"LevelM15",{-0.055,0},1},{},{},{"LevelM15",{0.235,-0.02},1},{"LevelM15",{0.235,0},1},{},{"LevelM15",{0.22,0},1},{"LevelM15",{0.205,0},1},{},{"LevelM15",{0.19,0},1},{"LevelM15",{0.175,0},1},{},{"LevelM15",{0.16,0},1},{"LevelM15",{0.145,0},1},{},{"LevelM15",{0.13,0},1},{"LevelM15",{0.115,0},1},{},{"LevelM15",{0.1,0},1},{"LevelM15",{0.085,0},1},{},{"LevelM15",{0.07,0},1},{"LevelM15",{0.055,0},1},{}};
						};
						class VALM_1_15
						{
							type = "text";
							source = "static";
							text = -15;
							align = "left";
							scale = 1;
							sourceScale = 1;
							pos[] = {"LevelM15",{-0.26,-0.032},1};
							right[] = {"LevelM15",{-0.2,-0.032},1};
							down[] = {"LevelM15",{-0.26,0.018},1};
						};
						class VALM_1_15_R
						{
							type = "text";
							source = "static";
							text = -15;
							align = "right";
							scale = 1;
							sourceScale = 1;
							pos[] = {"LevelM15",{0.26,-0.032},1};
							right[] = {"LevelM15",{0.32,-0.032},1};
							down[] = {"LevelM15",{0.26,0.018},1};
						};
						class LevelP15: Level0
						{
							type = "line";
							points[] = {{"LevelP15",{"-0.22-0.015",0.02},1},{"LevelP15",{"-0.22-0.015",0},1},{"LevelP15",{-0.06,0},1},{},{"LevelP15",{0.06,0},1},{"LevelP15",{"+0.22+0.015",0},1},{"LevelP15",{"+0.22+0.015",0.02},1}};
						};
						class VALP_1_15
						{
							type = "text";
							source = "static";
							text = "15";
							align = "left";
							scale = 1;
							sourceScale = 1;
							pos[] = {"LevelP15",{-0.26,-0.017},1};
							right[] = {"LevelP15",{-0.2,-0.017},1};
							down[] = {"LevelP15",{-0.26,0.033},1};
						};
						class VALP_1_15_R
						{
							type = "text";
							source = "static";
							text = "15";
							align = "right";
							scale = 1;
							sourceScale = 1;
							pos[] = {"LevelP15",{0.26,-0.017},1};
							right[] = {"LevelP15",{0.32,-0.017},1};
							down[] = {"LevelP15",{0.26,0.033},1};
						};
						class LevelM20: Level0
						{
							type = "line";
							points[] = {{"LevelM20",{-0.235,-0.02},1},{"LevelM20",{-0.235,0},1},{},{"LevelM20",{-0.22,0},1},{"LevelM20",{-0.205,0},1},{},{"LevelM20",{-0.19,0},1},{"LevelM20",{-0.175,0},1},{},{"LevelM20",{-0.16,0},1},{"LevelM20",{-0.145,0},1},{},{"LevelM20",{-0.13,0},1},{"LevelM20",{-0.115,0},1},{},{"LevelM20",{-0.1,0},1},{"LevelM20",{-0.085,0},1},{},{"LevelM20",{-0.07,0},1},{"LevelM20",{-0.055,0},1},{},{},{"LevelM20",{0.235,-0.02},1},{"LevelM20",{0.235,0},1},{},{"LevelM20",{0.22,0},1},{"LevelM20",{0.205,0},1},{},{"LevelM20",{0.19,0},1},{"LevelM20",{0.175,0},1},{},{"LevelM20",{0.16,0},1},{"LevelM20",{0.145,0},1},{},{"LevelM20",{0.13,0},1},{"LevelM20",{0.115,0},1},{},{"LevelM20",{0.1,0},1},{"LevelM20",{0.085,0},1},{},{"LevelM20",{0.07,0},1},{"LevelM20",{0.055,0},1},{}};
						};
						class VALM_1_20
						{
							type = "text";
							source = "static";
							text = -20;
							align = "left";
							scale = 1;
							sourceScale = 1;
							pos[] = {"LevelM20",{-0.26,-0.032},1};
							right[] = {"LevelM20",{-0.2,-0.032},1};
							down[] = {"LevelM20",{-0.26,0.018},1};
						};
						class VALM_1_20_R
						{
							type = "text";
							source = "static";
							text = -20;
							align = "right";
							scale = 1;
							sourceScale = 1;
							pos[] = {"LevelM20",{0.26,-0.032},1};
							right[] = {"LevelM20",{0.32,-0.032},1};
							down[] = {"LevelM20",{0.26,0.018},1};
						};
						class LevelP20: Level0
						{
							type = "line";
							points[] = {{"LevelP20",{"-0.22-0.015",0.02},1},{"LevelP20",{"-0.22-0.015",0},1},{"LevelP20",{-0.06,0},1},{},{"LevelP20",{0.06,0},1},{"LevelP20",{"+0.22+0.015",0},1},{"LevelP20",{"+0.22+0.015",0.02},1}};
						};
						class VALP_1_20
						{
							type = "text";
							source = "static";
							text = "20";
							align = "left";
							scale = 1;
							sourceScale = 1;
							pos[] = {"LevelP20",{-0.26,-0.017},1};
							right[] = {"LevelP20",{-0.2,-0.017},1};
							down[] = {"LevelP20",{-0.26,0.033},1};
						};
						class VALP_1_20_R
						{
							type = "text";
							source = "static";
							text = "20";
							align = "right";
							scale = 1;
							sourceScale = 1;
							pos[] = {"LevelP20",{0.26,-0.017},1};
							right[] = {"LevelP20",{0.32,-0.017},1};
							down[] = {"LevelP20",{0.26,0.033},1};
						};
						class LevelM25: Level0
						{
							type = "line";
							points[] = {{"LevelM25",{-0.235,-0.02},1},{"LevelM25",{-0.235,0},1},{},{"LevelM25",{-0.22,0},1},{"LevelM25",{-0.205,0},1},{},{"LevelM25",{-0.19,0},1},{"LevelM25",{-0.175,0},1},{},{"LevelM25",{-0.16,0},1},{"LevelM25",{-0.145,0},1},{},{"LevelM25",{-0.13,0},1},{"LevelM25",{-0.115,0},1},{},{"LevelM25",{-0.1,0},1},{"LevelM25",{-0.085,0},1},{},{"LevelM25",{-0.07,0},1},{"LevelM25",{-0.055,0},1},{},{},{"LevelM25",{0.235,-0.02},1},{"LevelM25",{0.235,0},1},{},{"LevelM25",{0.22,0},1},{"LevelM25",{0.205,0},1},{},{"LevelM25",{0.19,0},1},{"LevelM25",{0.175,0},1},{},{"LevelM25",{0.16,0},1},{"LevelM25",{0.145,0},1},{},{"LevelM25",{0.13,0},1},{"LevelM25",{0.115,0},1},{},{"LevelM25",{0.1,0},1},{"LevelM25",{0.085,0},1},{},{"LevelM25",{0.07,0},1},{"LevelM25",{0.055,0},1},{}};
						};
						class VALM_1_25
						{
							type = "text";
							source = "static";
							text = -25;
							align = "left";
							scale = 1;
							sourceScale = 1;
							pos[] = {"LevelM25",{-0.26,-0.032},1};
							right[] = {"LevelM25",{-0.2,-0.032},1};
							down[] = {"LevelM25",{-0.26,0.018},1};
						};
						class VALM_1_25_R
						{
							type = "text";
							source = "static";
							text = -25;
							align = "right";
							scale = 1;
							sourceScale = 1;
							pos[] = {"LevelM25",{0.26,-0.032},1};
							right[] = {"LevelM25",{0.32,-0.032},1};
							down[] = {"LevelM25",{0.26,0.018},1};
						};
						class LevelP25: Level0
						{
							type = "line";
							points[] = {{"LevelP25",{"-0.22-0.015",0.02},1},{"LevelP25",{"-0.22-0.015",0},1},{"LevelP25",{-0.06,0},1},{},{"LevelP25",{0.06,0},1},{"LevelP25",{"+0.22+0.015",0},1},{"LevelP25",{"+0.22+0.015",0.02},1}};
						};
						class VALP_1_25
						{
							type = "text";
							source = "static";
							text = "25";
							align = "left";
							scale = 1;
							sourceScale = 1;
							pos[] = {"LevelP25",{-0.26,-0.017},1};
							right[] = {"LevelP25",{-0.2,-0.017},1};
							down[] = {"LevelP25",{-0.26,0.033},1};
						};
						class VALP_1_25_R
						{
							type = "text";
							source = "static";
							text = "25";
							align = "right";
							scale = 1;
							sourceScale = 1;
							pos[] = {"LevelP25",{0.26,-0.017},1};
							right[] = {"LevelP25",{0.32,-0.017},1};
							down[] = {"LevelP25",{0.26,0.033},1};
						};
						class LevelM30: Level0
						{
							type = "line";
							points[] = {{"LevelM30",{-0.235,-0.02},1},{"LevelM30",{-0.235,0},1},{},{"LevelM30",{-0.22,0},1},{"LevelM30",{-0.205,0},1},{},{"LevelM30",{-0.19,0},1},{"LevelM30",{-0.175,0},1},{},{"LevelM30",{-0.16,0},1},{"LevelM30",{-0.145,0},1},{},{"LevelM30",{-0.13,0},1},{"LevelM30",{-0.115,0},1},{},{"LevelM30",{-0.1,0},1},{"LevelM30",{-0.085,0},1},{},{"LevelM30",{-0.07,0},1},{"LevelM30",{-0.055,0},1},{},{},{"LevelM30",{0.235,-0.02},1},{"LevelM30",{0.235,0},1},{},{"LevelM30",{0.22,0},1},{"LevelM30",{0.205,0},1},{},{"LevelM30",{0.19,0},1},{"LevelM30",{0.175,0},1},{},{"LevelM30",{0.16,0},1},{"LevelM30",{0.145,0},1},{},{"LevelM30",{0.13,0},1},{"LevelM30",{0.115,0},1},{},{"LevelM30",{0.1,0},1},{"LevelM30",{0.085,0},1},{},{"LevelM30",{0.07,0},1},{"LevelM30",{0.055,0},1},{}};
						};
						class VALM_1_30
						{
							type = "text";
							source = "static";
							text = -30;
							align = "left";
							scale = 1;
							sourceScale = 1;
							pos[] = {"LevelM30",{-0.26,-0.032},1};
							right[] = {"LevelM30",{-0.2,-0.032},1};
							down[] = {"LevelM30",{-0.26,0.018},1};
						};
						class VALM_1_30_R
						{
							type = "text";
							source = "static";
							text = -30;
							align = "right";
							scale = 1;
							sourceScale = 1;
							pos[] = {"LevelM30",{0.26,-0.032},1};
							right[] = {"LevelM30",{0.32,-0.032},1};
							down[] = {"LevelM30",{0.26,0.018},1};
						};
						class LevelP30: Level0
						{
							type = "line";
							points[] = {{"LevelP30",{"-0.22-0.015",0.02},1},{"LevelP30",{"-0.22-0.015",0},1},{"LevelP30",{-0.06,0},1},{},{"LevelP30",{0.06,0},1},{"LevelP30",{"+0.22+0.015",0},1},{"LevelP30",{"+0.22+0.015",0.02},1}};
						};
						class VALP_1_30
						{
							type = "text";
							source = "static";
							text = "30";
							align = "left";
							scale = 1;
							sourceScale = 1;
							pos[] = {"LevelP30",{-0.26,-0.017},1};
							right[] = {"LevelP30",{-0.2,-0.017},1};
							down[] = {"LevelP30",{-0.26,0.033},1};
						};
						class VALP_1_30_R
						{
							type = "text";
							source = "static";
							text = "30";
							align = "right";
							scale = 1;
							sourceScale = 1;
							pos[] = {"LevelP30",{0.26,-0.017},1};
							right[] = {"LevelP30",{0.32,-0.017},1};
							down[] = {"LevelP30",{0.26,0.033},1};
						};
						class LevelM35: Level0
						{
							type = "line";
							points[] = {{"LevelM35",{-0.235,-0.02},1},{"LevelM35",{-0.235,0},1},{},{"LevelM35",{-0.22,0},1},{"LevelM35",{-0.205,0},1},{},{"LevelM35",{-0.19,0},1},{"LevelM35",{-0.175,0},1},{},{"LevelM35",{-0.16,0},1},{"LevelM35",{-0.145,0},1},{},{"LevelM35",{-0.13,0},1},{"LevelM35",{-0.115,0},1},{},{"LevelM35",{-0.1,0},1},{"LevelM35",{-0.085,0},1},{},{"LevelM35",{-0.07,0},1},{"LevelM35",{-0.055,0},1},{},{},{"LevelM35",{0.235,-0.02},1},{"LevelM35",{0.235,0},1},{},{"LevelM35",{0.22,0},1},{"LevelM35",{0.205,0},1},{},{"LevelM35",{0.19,0},1},{"LevelM35",{0.175,0},1},{},{"LevelM35",{0.16,0},1},{"LevelM35",{0.145,0},1},{},{"LevelM35",{0.13,0},1},{"LevelM35",{0.115,0},1},{},{"LevelM35",{0.1,0},1},{"LevelM35",{0.085,0},1},{},{"LevelM35",{0.07,0},1},{"LevelM35",{0.055,0},1},{}};
						};
						class VALM_1_35
						{
							type = "text";
							source = "static";
							text = -35;
							align = "left";
							scale = 1;
							sourceScale = 1;
							pos[] = {"LevelM35",{-0.26,-0.032},1};
							right[] = {"LevelM35",{-0.2,-0.032},1};
							down[] = {"LevelM35",{-0.26,0.018},1};
						};
						class VALM_1_35_R
						{
							type = "text";
							source = "static";
							text = -35;
							align = "right";
							scale = 1;
							sourceScale = 1;
							pos[] = {"LevelM35",{0.26,-0.032},1};
							right[] = {"LevelM35",{0.32,-0.032},1};
							down[] = {"LevelM35",{0.26,0.018},1};
						};
						class LevelP35: Level0
						{
							type = "line";
							points[] = {{"LevelP35",{"-0.22-0.015",0.02},1},{"LevelP35",{"-0.22-0.015",0},1},{"LevelP35",{-0.06,0},1},{},{"LevelP35",{0.06,0},1},{"LevelP35",{"+0.22+0.015",0},1},{"LevelP35",{"+0.22+0.015",0.02},1}};
						};
						class VALP_1_35
						{
							type = "text";
							source = "static";
							text = "35";
							align = "left";
							scale = 1;
							sourceScale = 1;
							pos[] = {"LevelP35",{-0.26,-0.017},1};
							right[] = {"LevelP35",{-0.2,-0.017},1};
							down[] = {"LevelP35",{-0.26,0.033},1};
						};
						class VALP_1_35_R
						{
							type = "text";
							source = "static";
							text = "35";
							align = "right";
							scale = 1;
							sourceScale = 1;
							pos[] = {"LevelP35",{0.26,-0.017},1};
							right[] = {"LevelP35",{0.32,-0.017},1};
							down[] = {"LevelP35",{0.26,0.033},1};
						};
						class LevelM40: Level0
						{
							type = "line";
							points[] = {{"LevelM40",{-0.235,-0.02},1},{"LevelM40",{-0.235,0},1},{},{"LevelM40",{-0.22,0},1},{"LevelM40",{-0.205,0},1},{},{"LevelM40",{-0.19,0},1},{"LevelM40",{-0.175,0},1},{},{"LevelM40",{-0.16,0},1},{"LevelM40",{-0.145,0},1},{},{"LevelM40",{-0.13,0},1},{"LevelM40",{-0.115,0},1},{},{"LevelM40",{-0.1,0},1},{"LevelM40",{-0.085,0},1},{},{"LevelM40",{-0.07,0},1},{"LevelM40",{-0.055,0},1},{},{},{"LevelM40",{0.235,-0.02},1},{"LevelM40",{0.235,0},1},{},{"LevelM40",{0.22,0},1},{"LevelM40",{0.205,0},1},{},{"LevelM40",{0.19,0},1},{"LevelM40",{0.175,0},1},{},{"LevelM40",{0.16,0},1},{"LevelM40",{0.145,0},1},{},{"LevelM40",{0.13,0},1},{"LevelM40",{0.115,0},1},{},{"LevelM40",{0.1,0},1},{"LevelM40",{0.085,0},1},{},{"LevelM40",{0.07,0},1},{"LevelM40",{0.055,0},1},{}};
						};
						class VALM_1_40
						{
							type = "text";
							source = "static";
							text = -40;
							align = "left";
							scale = 1;
							sourceScale = 1;
							pos[] = {"LevelM40",{-0.26,-0.032},1};
							right[] = {"LevelM40",{-0.2,-0.032},1};
							down[] = {"LevelM40",{-0.26,0.018},1};
						};
						class VALM_1_40_R
						{
							type = "text";
							source = "static";
							text = -40;
							align = "right";
							scale = 1;
							sourceScale = 1;
							pos[] = {"LevelM40",{0.26,-0.032},1};
							right[] = {"LevelM40",{0.32,-0.032},1};
							down[] = {"LevelM40",{0.26,0.018},1};
						};
						class LevelP40: Level0
						{
							type = "line";
							points[] = {{"LevelP40",{"-0.22-0.015",0.02},1},{"LevelP40",{"-0.22-0.015",0},1},{"LevelP40",{-0.06,0},1},{},{"LevelP40",{0.06,0},1},{"LevelP40",{"+0.22+0.015",0},1},{"LevelP40",{"+0.22+0.015",0.02},1}};
						};
						class VALP_1_40
						{
							type = "text";
							source = "static";
							text = "40";
							align = "left";
							scale = 1;
							sourceScale = 1;
							pos[] = {"LevelP40",{-0.26,-0.017},1};
							right[] = {"LevelP40",{-0.2,-0.017},1};
							down[] = {"LevelP40",{-0.26,0.033},1};
						};
						class VALP_1_40_R
						{
							type = "text";
							source = "static";
							text = "40";
							align = "right";
							scale = 1;
							sourceScale = 1;
							pos[] = {"LevelP40",{0.26,-0.017},1};
							right[] = {"LevelP40",{0.32,-0.017},1};
							down[] = {"LevelP40",{0.26,0.033},1};
						};
						class LevelM45: Level0
						{
							type = "line";
							points[] = {{"LevelM45",{-0.235,-0.02},1},{"LevelM45",{-0.235,0},1},{},{"LevelM45",{-0.22,0},1},{"LevelM45",{-0.205,0},1},{},{"LevelM45",{-0.19,0},1},{"LevelM45",{-0.175,0},1},{},{"LevelM45",{-0.16,0},1},{"LevelM45",{-0.145,0},1},{},{"LevelM45",{-0.13,0},1},{"LevelM45",{-0.115,0},1},{},{"LevelM45",{-0.1,0},1},{"LevelM45",{-0.085,0},1},{},{"LevelM45",{-0.07,0},1},{"LevelM45",{-0.055,0},1},{},{},{"LevelM45",{0.235,-0.02},1},{"LevelM45",{0.235,0},1},{},{"LevelM45",{0.22,0},1},{"LevelM45",{0.205,0},1},{},{"LevelM45",{0.19,0},1},{"LevelM45",{0.175,0},1},{},{"LevelM45",{0.16,0},1},{"LevelM45",{0.145,0},1},{},{"LevelM45",{0.13,0},1},{"LevelM45",{0.115,0},1},{},{"LevelM45",{0.1,0},1},{"LevelM45",{0.085,0},1},{},{"LevelM45",{0.07,0},1},{"LevelM45",{0.055,0},1},{}};
						};
						class VALM_1_45
						{
							type = "text";
							source = "static";
							text = -45;
							align = "left";
							scale = 1;
							sourceScale = 1;
							pos[] = {"LevelM45",{-0.26,-0.032},1};
							right[] = {"LevelM45",{-0.2,-0.032},1};
							down[] = {"LevelM45",{-0.26,0.018},1};
						};
						class VALM_1_45_R
						{
							type = "text";
							source = "static";
							text = -45;
							align = "right";
							scale = 1;
							sourceScale = 1;
							pos[] = {"LevelM45",{0.26,-0.032},1};
							right[] = {"LevelM45",{0.32,-0.032},1};
							down[] = {"LevelM45",{0.26,0.018},1};
						};
						class LevelP45: Level0
						{
							type = "line";
							points[] = {{"LevelP45",{"-0.22-0.015",0.02},1},{"LevelP45",{"-0.22-0.015",0},1},{"LevelP45",{-0.06,0},1},{},{"LevelP45",{0.06,0},1},{"LevelP45",{"+0.22+0.015",0},1},{"LevelP45",{"+0.22+0.015",0.02},1}};
						};
						class VALP_1_45
						{
							type = "text";
							source = "static";
							text = "45";
							align = "left";
							scale = 1;
							sourceScale = 1;
							pos[] = {"LevelP45",{-0.26,-0.017},1};
							right[] = {"LevelP45",{-0.2,-0.017},1};
							down[] = {"LevelP45",{-0.26,0.033},1};
						};
						class VALP_1_45_R
						{
							type = "text";
							source = "static";
							text = "45";
							align = "right";
							scale = 1;
							sourceScale = 1;
							pos[] = {"LevelP45",{0.26,-0.017},1};
							right[] = {"LevelP45",{0.32,-0.017},1};
							down[] = {"LevelP45",{0.26,0.033},1};
						};
						class LevelM50: Level0
						{
							type = "line";
							points[] = {{"LevelM50",{-0.235,-0.02},1},{"LevelM50",{-0.235,0},1},{},{"LevelM50",{-0.22,0},1},{"LevelM50",{-0.205,0},1},{},{"LevelM50",{-0.19,0},1},{"LevelM50",{-0.175,0},1},{},{"LevelM50",{-0.16,0},1},{"LevelM50",{-0.145,0},1},{},{"LevelM50",{-0.13,0},1},{"LevelM50",{-0.115,0},1},{},{"LevelM50",{-0.1,0},1},{"LevelM50",{-0.085,0},1},{},{"LevelM50",{-0.07,0},1},{"LevelM50",{-0.055,0},1},{},{},{"LevelM50",{0.235,-0.02},1},{"LevelM50",{0.235,0},1},{},{"LevelM50",{0.22,0},1},{"LevelM50",{0.205,0},1},{},{"LevelM50",{0.19,0},1},{"LevelM50",{0.175,0},1},{},{"LevelM50",{0.16,0},1},{"LevelM50",{0.145,0},1},{},{"LevelM50",{0.13,0},1},{"LevelM50",{0.115,0},1},{},{"LevelM50",{0.1,0},1},{"LevelM50",{0.085,0},1},{},{"LevelM50",{0.07,0},1},{"LevelM50",{0.055,0},1},{}};
						};
						class VALM_1_50
						{
							type = "text";
							source = "static";
							text = -50;
							align = "left";
							scale = 1;
							sourceScale = 1;
							pos[] = {"LevelM50",{-0.26,-0.032},1};
							right[] = {"LevelM50",{-0.2,-0.032},1};
							down[] = {"LevelM50",{-0.26,0.018},1};
						};
						class VALM_1_50_R
						{
							type = "text";
							source = "static";
							text = -50;
							align = "right";
							scale = 1;
							sourceScale = 1;
							pos[] = {"LevelM50",{0.26,-0.032},1};
							right[] = {"LevelM50",{0.32,-0.032},1};
							down[] = {"LevelM50",{0.26,0.018},1};
						};
						class LevelP50: Level0
						{
							type = "line";
							points[] = {{"LevelP50",{"-0.22-0.015",0.02},1},{"LevelP50",{"-0.22-0.015",0},1},{"LevelP50",{-0.06,0},1},{},{"LevelP50",{0.06,0},1},{"LevelP50",{"+0.22+0.015",0},1},{"LevelP50",{"+0.22+0.015",0.02},1}};
						};
						class VALP_1_50
						{
							type = "text";
							source = "static";
							text = "50";
							align = "left";
							scale = 1;
							sourceScale = 1;
							pos[] = {"LevelP50",{-0.26,-0.017},1};
							right[] = {"LevelP50",{-0.2,-0.017},1};
							down[] = {"LevelP50",{-0.26,0.033},1};
						};
						class VALP_1_50_R
						{
							type = "text";
							source = "static";
							text = "50";
							align = "right";
							scale = 1;
							sourceScale = 1;
							pos[] = {"LevelP50",{0.26,-0.017},1};
							right[] = {"LevelP50",{0.32,-0.017},1};
							down[] = {"LevelP50",{0.26,0.033},1};
						};
						class LevelM60: Level0
						{
							type = "line";
							points[] = {{"LevelM60",{-0.235,-0.02},1},{"LevelM60",{-0.235,0},1},{},{"LevelM60",{-0.22,0},1},{"LevelM60",{-0.205,0},1},{},{"LevelM60",{-0.19,0},1},{"LevelM60",{-0.175,0},1},{},{"LevelM60",{-0.16,0},1},{"LevelM60",{-0.145,0},1},{},{"LevelM60",{-0.13,0},1},{"LevelM60",{-0.115,0},1},{},{"LevelM60",{-0.1,0},1},{"LevelM60",{-0.085,0},1},{},{"LevelM60",{-0.07,0},1},{"LevelM60",{-0.055,0},1},{},{},{"LevelM60",{0.235,-0.02},1},{"LevelM60",{0.235,0},1},{},{"LevelM60",{0.22,0},1},{"LevelM60",{0.205,0},1},{},{"LevelM60",{0.19,0},1},{"LevelM60",{0.175,0},1},{},{"LevelM60",{0.16,0},1},{"LevelM60",{0.145,0},1},{},{"LevelM60",{0.13,0},1},{"LevelM60",{0.115,0},1},{},{"LevelM60",{0.1,0},1},{"LevelM60",{0.085,0},1},{},{"LevelM60",{0.07,0},1},{"LevelM60",{0.055,0},1},{}};
						};
						class VALM_1_60
						{
							type = "text";
							source = "static";
							text = -60;
							align = "left";
							scale = 1;
							sourceScale = 1;
							pos[] = {"LevelM60",{-0.26,-0.032},1};
							right[] = {"LevelM60",{-0.2,-0.032},1};
							down[] = {"LevelM60",{-0.26,0.018},1};
						};
						class VALM_1_60_R
						{
							type = "text";
							source = "static";
							text = -60;
							align = "right";
							scale = 1;
							sourceScale = 1;
							pos[] = {"LevelM60",{0.26,-0.032},1};
							right[] = {"LevelM60",{0.32,-0.032},1};
							down[] = {"LevelM60",{0.26,0.018},1};
						};
						class LevelP60: Level0
						{
							type = "line";
							points[] = {{"LevelP60",{"-0.22-0.015",0.02},1},{"LevelP60",{"-0.22-0.015",0},1},{"LevelP60",{-0.06,0},1},{},{"LevelP60",{0.06,0},1},{"LevelP60",{"+0.22+0.015",0},1},{"LevelP60",{"+0.22+0.015",0.02},1}};
						};
						class VALP_1_60
						{
							type = "text";
							source = "static";
							text = "60";
							align = "left";
							scale = 1;
							sourceScale = 1;
							pos[] = {"LevelP60",{-0.26,-0.017},1};
							right[] = {"LevelP60",{-0.2,-0.017},1};
							down[] = {"LevelP60",{-0.26,0.033},1};
						};
						class VALP_1_60_R
						{
							type = "text";
							source = "static";
							text = "60";
							align = "right";
							scale = 1;
							sourceScale = 1;
							pos[] = {"LevelP60",{0.26,-0.017},1};
							right[] = {"LevelP60",{0.32,-0.017},1};
							down[] = {"LevelP60",{0.26,0.033},1};
						};
						class LevelM70: Level0
						{
							type = "line";
							points[] = {{"LevelM70",{-0.235,-0.02},1},{"LevelM70",{-0.235,0},1},{},{"LevelM70",{-0.22,0},1},{"LevelM70",{-0.205,0},1},{},{"LevelM70",{-0.19,0},1},{"LevelM70",{-0.175,0},1},{},{"LevelM70",{-0.16,0},1},{"LevelM70",{-0.145,0},1},{},{"LevelM70",{-0.13,0},1},{"LevelM70",{-0.115,0},1},{},{"LevelM70",{-0.1,0},1},{"LevelM70",{-0.085,0},1},{},{"LevelM70",{-0.07,0},1},{"LevelM70",{-0.055,0},1},{},{},{"LevelM70",{0.235,-0.02},1},{"LevelM70",{0.235,0},1},{},{"LevelM70",{0.22,0},1},{"LevelM70",{0.205,0},1},{},{"LevelM70",{0.19,0},1},{"LevelM70",{0.175,0},1},{},{"LevelM70",{0.16,0},1},{"LevelM70",{0.145,0},1},{},{"LevelM70",{0.13,0},1},{"LevelM70",{0.115,0},1},{},{"LevelM70",{0.1,0},1},{"LevelM70",{0.085,0},1},{},{"LevelM70",{0.07,0},1},{"LevelM70",{0.055,0},1},{}};
						};
						class VALM_1_70
						{
							type = "text";
							source = "static";
							text = -70;
							align = "left";
							scale = 1;
							sourceScale = 1;
							pos[] = {"LevelM70",{-0.26,-0.032},1};
							right[] = {"LevelM70",{-0.2,-0.032},1};
							down[] = {"LevelM70",{-0.26,0.018},1};
						};
						class VALM_1_70_R
						{
							type = "text";
							source = "static";
							text = -70;
							align = "right";
							scale = 1;
							sourceScale = 1;
							pos[] = {"LevelM70",{0.26,-0.032},1};
							right[] = {"LevelM70",{0.32,-0.032},1};
							down[] = {"LevelM70",{0.26,0.018},1};
						};
						class LevelP70: Level0
						{
							type = "line";
							points[] = {{"LevelP70",{"-0.22-0.015",0.02},1},{"LevelP70",{"-0.22-0.015",0},1},{"LevelP70",{-0.06,0},1},{},{"LevelP70",{0.06,0},1},{"LevelP70",{"+0.22+0.015",0},1},{"LevelP70",{"+0.22+0.015",0.02},1}};
						};
						class VALP_1_70
						{
							type = "text";
							source = "static";
							text = "70";
							align = "left";
							scale = 1;
							sourceScale = 1;
							pos[] = {"LevelP70",{-0.26,-0.017},1};
							right[] = {"LevelP70",{-0.2,-0.017},1};
							down[] = {"LevelP70",{-0.26,0.033},1};
						};
						class VALP_1_70_R
						{
							type = "text";
							source = "static";
							text = "70";
							align = "right";
							scale = 1;
							sourceScale = 1;
							pos[] = {"LevelP70",{0.26,-0.017},1};
							right[] = {"LevelP70",{0.32,-0.017},1};
							down[] = {"LevelP70",{0.26,0.033},1};
						};
						class LevelM80: Level0
						{
							type = "line";
							points[] = {{"LevelM80",{-0.235,-0.02},1},{"LevelM80",{-0.235,0},1},{},{"LevelM80",{-0.22,0},1},{"LevelM80",{-0.205,0},1},{},{"LevelM80",{-0.19,0},1},{"LevelM80",{-0.175,0},1},{},{"LevelM80",{-0.16,0},1},{"LevelM80",{-0.145,0},1},{},{"LevelM80",{-0.13,0},1},{"LevelM80",{-0.115,0},1},{},{"LevelM80",{-0.1,0},1},{"LevelM80",{-0.085,0},1},{},{"LevelM80",{-0.07,0},1},{"LevelM80",{-0.055,0},1},{},{},{"LevelM80",{0.235,-0.02},1},{"LevelM80",{0.235,0},1},{},{"LevelM80",{0.22,0},1},{"LevelM80",{0.205,0},1},{},{"LevelM80",{0.19,0},1},{"LevelM80",{0.175,0},1},{},{"LevelM80",{0.16,0},1},{"LevelM80",{0.145,0},1},{},{"LevelM80",{0.13,0},1},{"LevelM80",{0.115,0},1},{},{"LevelM80",{0.1,0},1},{"LevelM80",{0.085,0},1},{},{"LevelM80",{0.07,0},1},{"LevelM80",{0.055,0},1},{}};
						};
						class VALM_1_80
						{
							type = "text";
							source = "static";
							text = -80;
							align = "left";
							scale = 1;
							sourceScale = 1;
							pos[] = {"LevelM80",{-0.26,-0.032},1};
							right[] = {"LevelM80",{-0.2,-0.032},1};
							down[] = {"LevelM80",{-0.26,0.018},1};
						};
						class VALM_1_80_R
						{
							type = "text";
							source = "static";
							text = -80;
							align = "right";
							scale = 1;
							sourceScale = 1;
							pos[] = {"LevelM80",{0.26,-0.032},1};
							right[] = {"LevelM80",{0.32,-0.032},1};
							down[] = {"LevelM80",{0.26,0.018},1};
						};
						class LevelP80: Level0
						{
							type = "line";
							points[] = {{"LevelP80",{"-0.22-0.015",0.02},1},{"LevelP80",{"-0.22-0.015",0},1},{"LevelP80",{-0.06,0},1},{},{"LevelP80",{0.06,0},1},{"LevelP80",{"+0.22+0.015",0},1},{"LevelP80",{"+0.22+0.015",0.02},1}};
						};
						class VALP_1_80
						{
							type = "text";
							source = "static";
							text = "80";
							align = "left";
							scale = 1;
							sourceScale = 1;
							pos[] = {"LevelP80",{-0.26,-0.017},1};
							right[] = {"LevelP80",{-0.2,-0.017},1};
							down[] = {"LevelP80",{-0.26,0.033},1};
						};
						class VALP_1_80_R
						{
							type = "text";
							source = "static";
							text = "80";
							align = "right";
							scale = 1;
							sourceScale = 1;
							pos[] = {"LevelP80",{0.26,-0.017},1};
							right[] = {"LevelP80",{0.32,-0.017},1};
							down[] = {"LevelP80",{0.26,0.033},1};
						};
						class LevelM90: Level0
						{
							type = "line";
							points[] = {{"LevelM90",{-0.235,-0.02},1},{"LevelM90",{-0.235,0},1},{},{"LevelM90",{-0.22,0},1},{"LevelM90",{-0.205,0},1},{},{"LevelM90",{-0.19,0},1},{"LevelM90",{-0.175,0},1},{},{"LevelM90",{-0.16,0},1},{"LevelM90",{-0.145,0},1},{},{"LevelM90",{-0.13,0},1},{"LevelM90",{-0.115,0},1},{},{"LevelM90",{-0.1,0},1},{"LevelM90",{-0.085,0},1},{},{"LevelM90",{-0.07,0},1},{"LevelM90",{-0.055,0},1},{},{},{"LevelM90",{0.235,-0.02},1},{"LevelM90",{0.235,0},1},{},{"LevelM90",{0.22,0},1},{"LevelM90",{0.205,0},1},{},{"LevelM90",{0.19,0},1},{"LevelM90",{0.175,0},1},{},{"LevelM90",{0.16,0},1},{"LevelM90",{0.145,0},1},{},{"LevelM90",{0.13,0},1},{"LevelM90",{0.115,0},1},{},{"LevelM90",{0.1,0},1},{"LevelM90",{0.085,0},1},{},{"LevelM90",{0.07,0},1},{"LevelM90",{0.055,0},1},{}};
						};
						class VALM_1_90
						{
							type = "text";
							source = "static";
							text = -90;
							align = "left";
							scale = 1;
							sourceScale = 1;
							pos[] = {"LevelM90",{-0.26,-0.032},1};
							right[] = {"LevelM90",{-0.2,-0.032},1};
							down[] = {"LevelM90",{-0.26,0.018},1};
						};
						class VALM_1_90_R
						{
							type = "text";
							source = "static";
							text = -90;
							align = "right";
							scale = 1;
							sourceScale = 1;
							pos[] = {"LevelM90",{0.26,-0.032},1};
							right[] = {"LevelM90",{0.32,-0.032},1};
							down[] = {"LevelM90",{0.26,0.018},1};
						};
						class LevelP90: Level0
						{
							type = "line";
							points[] = {{"LevelP90",{"-0.22-0.015",0.02},1},{"LevelP90",{"-0.22-0.015",0},1},{"LevelP90",{-0.06,0},1},{},{"LevelP90",{0.06,0},1},{"LevelP90",{"+0.22+0.015",0},1},{"LevelP90",{"+0.22+0.015",0.02},1}};
						};
						class VALP_1_90
						{
							type = "text";
							source = "static";
							text = "90";
							align = "left";
							scale = 1;
							sourceScale = 1;
							pos[] = {"LevelP90",{-0.26,-0.017},1};
							right[] = {"LevelP90",{-0.2,-0.017},1};
							down[] = {"LevelP90",{-0.26,0.033},1};
						};
						class VALP_1_90_R
						{
							type = "text";
							source = "static";
							text = "90";
							align = "right";
							scale = 1;
							sourceScale = 1;
							pos[] = {"LevelP90",{0.26,-0.017},1};
							right[] = {"LevelP90",{0.32,-0.017},1};
							down[] = {"LevelP90",{0.26,0.033},1};
						};
					};
				};
				class UnhideOnTurn
				{
					condition = "abs(cameraDir-heading)*( (abs(heading-cameraDir))<=355)-5";
					class Cross
					{
						type = "line";
						width = 3.0;
						points[] = {{"PlaneW",{-0.02,0},1},{"PlaneW",{-0.04,0},1},{},{"PlaneW",{0.02,0},1},{"PlaneW",{0.04,0},1},{},{"PlaneW",{0,-0.019708},1},{"PlaneW",{0,-0.0394161},1},{},{"PlaneW",{0,0.019708},1},{"PlaneW",{0,0.0394161},1},{}};
					};
				};
			};
			class RadarBoxes
			{
				type = "radartoview";
				pos0[] = {0.5,0.5};
				pos10[] = {0.773,0.773};
				width = 4;
				points[] = {{{-0.002,-0.002},1},{{0.002,-0.002},1},{{0.002,0.002},1},{{-0.002,0.002},1},{{-0.002,-0.002},1}};
			};
			class TargetDiamond
			{
				class shape
				{
					type = "line";
					width = 4;
					points[] = {{"Target",1,"Limit0109",1,{0.02,0.02},1},{"Target",1,"Limit0109",1,{-0.02,0.02},1},{"Target",1,"Limit0109",1,{-0.02,-0.02},1},{"Target",1,"Limit0109",1,{0.02,-0.02},1},{"Target",1,"Limit0109",1,{0.02,0.02},1}};
				};
			};
		};
	};
};