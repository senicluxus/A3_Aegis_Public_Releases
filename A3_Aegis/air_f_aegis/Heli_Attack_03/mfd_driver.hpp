class MFD
{
	class AirplaneHUD
	{
		topLeft = HUD_top_left;
		topRight = HUD_top_right;
		bottomLeft = HUD_bottom_left;
		borderLeft = 0;
		borderRight = 0;
		borderTop = 0;
		borderBottom = 0;
		color[] = {1.0,1.0,1.0,1.0};
		helmetMountedDisplay = 1;
		helmetPosition[] = {-0.025,0.025,0.1};
		helmetRight[] = {0.05,0.0,0.0};
		helmetDown[] = {0.0,-0.05,0.0};
		font = LucidaConsoleB;
		turret[] = {-2};
		class Bones
		{
			class HUDCenter
			{
				type = "fixed";
				pos[] = {0.5,0.5};
			};
			class WeaponAim
			{
				type = "vector";
				source = "weapon";
				pos0[] = {0.5,0.5};
				pos10[] = {0.734,0.73};
			};
			class WeaponAimRelative: WeaponAim
			{
				source = "weapontoview";
			};
			class VelocityVector
			{
				type = "vector";
				source = "velocityToView";
				pos0[] = {0.5,0.5};
				pos10[] = {0.734,0.73};
			};
			class ForwardVector
			{
				type = "vector";
				source = "forward";
				pos0[] = {0,0};
				pos10[] = {0.234,0.23};
			};
			class HorizonVector
			{
				type = "horizontoview";
				pos0[] = {0.5,0.5};
				pos10[] = {0.830923,0.825266};
				angle = 0;
			};
			class GunnerAim
			{
				type = "vector";
				source = "turret";
				pos0[] = {0,-2.0};
				pos10[] = {0.0068,-0.01};
				projection = 0;
			};
			class VerticalSpeedBone
			{
				type = "linear";
				source = "vspeed";
				sourceScale = 1;
				min = -10;
				max = 10;
				minPos[] = {0,-0.32};
				maxPos[] = {0,0.32};
			};
			class HorizonBankRot
			{
				type = "linear";
				source = "horizonBank";
				min = -0.5236;
				max = 0.5236;
				minPos[] = {0.41,0.84};
				maxPos[] = {0.59,0.84};
				aspectRatio = 1;
			};
			class ImpactPoint
			{
				type = "vector";
				source = "ImpactPointToView";
				pos0[] = {0.5,0.5};
				pos10[] = {0.734,0.73};
			};
			class Target
			{
				source = "targettoview";
				type = "vector";
				pos0[] = {0.5,0.5};
				pos10[] = {0.734,0.73};
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
				pos10[] = {0.734,0.73};
			};
			class WPPointToView: WPPoint
			{
				source = "WPPointToView";
			};
			class RadarHeight
			{
				type = "linear";
				source = "altitudeAGL";
				sourceScale = 1;
				sourceOffset = -2;
				min = 0;
				max = 100;
				minPos[] = {0.903,0.18};
				maxPos[] = {0.903,0.82};
			};
			class HorizonBankRotFull
			{
				type = "rotational";
				source = "horizonBank";
				center[] = {0,0};
				min = -3.1416;
				max = 3.1416;
				minAngle = -180;
				maxAngle = 180;
				aspectRatio = 1;
			};
		};
		class Draw
		{
			alpha = "user3";
			color[] = {"user0","user1","user2"};
			condition = "(1 - (cameraHeadingDiffY<=-14) + (abs(cameraHeadingDiffX)>=26))*on";
			class Static
			{
				type = "line";
				width = 4.0;
				points[] = {{{0.5,0.11},1},{{0.5,0.14},1},{},{{0.4,0.86},1},{{0.4,0.94},1},{{0.6,0.94},1},{{0.6,0.86},1},{{0.4,0.86},1},{},{{0.4,0.885},1},{{0.408,0.885},1},{},{{0.6,0.885},1},{{0.592,0.885},1},{},{{0.5,0.86},1},{{0.5,0.868},1},{},{{0.5,0.94},1},{{0.5,0.932},1},{},{{0.52,0.86},1},{{0.52,0.82},1},{},{{0.48,0.86},1},{{0.48,0.82},1},{},{{0.55,0},1},{{0.55,0.04},1},{{0.45,0.04},1},{{0.45,0},1},{{0.55,0},1}};
			};
			class HeadingNumber
			{
				type = "text";
				source = "Heading";
				sourceScale = 1;
				align = "center";
				scale = 1;
				pos[] = {{0.5,0.006},1};
				right[] = {{0.55,0.006},1};
				down[] = {{0.5,0.046},1};
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
					pos[] = {{"0.80-0.302","0.082-0.025"},1};
					right[] = {{"0.83-0.302","0.082-0.025"},1};
					down[] = {{"0.80-0.302","0.113-0.025"},1};
				};
				class HeadingArrow
				{
					type = "line";
					width = 3.0;
					points[] = {{{0.478,0.045},1},{{0.522,0.045},1},{{0.552,0.07},1},{{0.522,0.095},1},{{0.478,0.095},1},{{0.448,0.07},1},{{0.478,0.045},1},{}};
				};
				class HeadingScaleRight
				{
					clipTL[] = {0.55,0.05};
					clipBR[] = {0.83,0.11};
					class lines
					{
						type = "scale";
						horizontal = 1;
						source = "heading";
						sourceScale = 1;
						width = 4.0;
						top = 0.5;
						center = 0.5;
						bottom = 0.85;
						lineXleft = 0.11;
						lineYright = 0.1;
						lineXleftMajor = 0.11;
						lineYrightMajor = 0.09;
						majorLineEach = 2;
						numberEach = 2;
						step = 22.5;
						stepSize = 0.075;
						align = "center";
						scale = 1;
						pos[] = {0.496,0.05};
						right[] = {0.536,0.05};
						down[] = {0.496,0.09};
					};
				};
				class HeadingScaleMidle
				{
					type = "scale";
					horizontal = 1;
					source = "heading";
					sourceScale = 1;
					width = 4.0;
					top = 0.45;
					center = 0.5;
					bottom = 0.55;
					lineXleft = 0.11;
					lineYright = 0.1;
					lineXleftMajor = 0.11;
					lineYrightMajor = 0.1;
					majorLineEach = 2;
					step = 22.5;
					stepSize = 0.075;
					align = "center";
					scale = 1;
					numberEach = 0;
					pos[] = {0.47,0.05};
					right[] = {0.5,0.05};
					down[] = {0.45,0.09};
				};
				class HeadingScaleLeft
				{
					clipTL[] = {0.18,0.05};
					clipBR[] = {0.45,0.11};
					class lines
					{
						type = "scale";
						horizontal = 1;
						source = "heading";
						sourceScale = 1;
						width = 4.0;
						top = 0.15;
						center = 0.5;
						bottom = 0.55;
						lineXleft = 0.11;
						lineYright = 0.1;
						lineXleftMajor = 0.11;
						lineYrightMajor = 0.09;
						majorLineEach = 2;
						numberEach = 2;
						step = 22.5;
						stepSize = 0.075;
						align = "center";
						scale = 1;
						pos[] = {0.146,0.05};
						right[] = {0.186,0.05};
						down[] = {0.146,0.09};
					};
				};
			};
			class HeadingScaleFull
			{
				condition = "4-abs(cameraDir-heading)*( (abs(heading-cameraDir))<=355)";
				class HeadingScale
				{
					clipTL[] = {0.18,0.0};
					clipBR[] = {0.83,1.0};
					class lines
					{
						type = "scale";
						horizontal = 1;
						source = "heading";
						sourceScale = 1;
						width = 4.0;
						top = 0.15;
						center = 0.5;
						bottom = 0.85;
						lineXleft = 0.11;
						lineYright = 0.1;
						lineXleftMajor = 0.11;
						lineYrightMajor = 0.09;
						majorLineEach = 2;
						numberEach = 2;
						step = 22.5;
						stepSize = 0.075;
						align = "center";
						scale = 1;
						pos[] = {0.146,0.05};
						right[] = {0.186,0.05};
						down[] = {0.146,0.09};
					};
				};
			};
			class HorizonBankRot
			{
				type = "polygon";
				width = 4.0;
				points[] = {{{"HorizonBankRot",1,{0,0},1},{"HorizonBankRot",{0.00260472,-0.0145196},1},{"HorizonBankRot",{0.0051303,-0.0138544},1},{"HorizonBankRot",{0.0075,-0.0127683},1}},{{"HorizonBankRot",1,{0,0},1},{"HorizonBankRot",{0.0075,-0.0127683},1},{"HorizonBankRot",{0.00964181,-0.0112942},1},{"HorizonBankRot",{0.0114907,-0.009477},1}},{{"HorizonBankRot",1,{0,0},1},{"HorizonBankRot",{0.0114907,-0.009477},1},{"HorizonBankRot",{0.0129904,-0.00737179},1},{"HorizonBankRot",{0.0140954,-0.0050426},1}},{{"HorizonBankRot",1,{0,0},1},{"HorizonBankRot",{0.0140954,-0.0050426},1},{"HorizonBankRot",{0.0147721,-0.0025602},1},{"HorizonBankRot",{0.015,6.44463e-10},1}},{{"HorizonBankRot",1,{0,0},1},{"HorizonBankRot",{0.015,6.44463e-10},1},{"HorizonBankRot",{0.0147721,0.0025602},1},{"HorizonBankRot",{0.0140954,0.0050426},1}},{{"HorizonBankRot",1,{0,0},1},{"HorizonBankRot",{0.0140954,0.0050426},1},{"HorizonBankRot",{0.0129904,0.0073718},1},{"HorizonBankRot",{0.0114907,0.009477},1}},{{"HorizonBankRot",1,{0,0},1},{"HorizonBankRot",{0.0114907,0.009477},1},{"HorizonBankRot",{0.00964181,0.0112942},1},{"HorizonBankRot",{0.0075,0.0127683},1}},{{"HorizonBankRot",1,{0,0},1},{"HorizonBankRot",{0.0075,0.0127683},1},{"HorizonBankRot",{0.0051303,0.0138544},1},{"HorizonBankRot",{0.00260472,0.0145196},1}},{{"HorizonBankRot",1,{0,0},1},{"HorizonBankRot",{0.00260472,0.0145196},1},{"HorizonBankRot",{-1.31134e-09,0.0147436},1},{"HorizonBankRot",{-0.00260473,0.0145196},1}},{{"HorizonBankRot",1,{0,0},1},{"HorizonBankRot",{-0.00260473,0.0145196},1},{"HorizonBankRot",{-0.0051303,0.0138544},1},{"HorizonBankRot",{-0.0075,0.0127683},1}},{{"HorizonBankRot",1,{0,0},1},{"HorizonBankRot",{-0.0075,0.0127683},1},{"HorizonBankRot",{-0.00964181,0.0112942},1},{"HorizonBankRot",{-0.0114907,0.009477},1}},{{"HorizonBankRot",1,{0,0},1},{"HorizonBankRot",{-0.0114907,0.009477},1},{"HorizonBankRot",{-0.0129904,0.00737179},1},{"HorizonBankRot",{-0.0140954,0.0050426},1}},{{"HorizonBankRot",1,{0,0},1},{"HorizonBankRot",{-0.0140954,0.0050426},1},{"HorizonBankRot",{-0.0147721,0.0025602},1},{"HorizonBankRot",{-0.015,-1.75816e-10},1}},{{"HorizonBankRot",1,{0,0},1},{"HorizonBankRot",{-0.015,-1.75816e-10},1},{"HorizonBankRot",{-0.0147721,-0.0025602},1},{"HorizonBankRot",{-0.0140954,-0.0050426},1}},{{"HorizonBankRot",1,{0,0},1},{"HorizonBankRot",{-0.0140954,-0.0050426},1},{"HorizonBankRot",{-0.0129904,-0.0073718},1},{"HorizonBankRot",{-0.0114907,-0.009477},1}},{{"HorizonBankRot",1,{0,0},1},{"HorizonBankRot",{-0.0114907,-0.009477},1},{"HorizonBankRot",{-0.00964181,-0.0112942},1},{"HorizonBankRot",{-0.0075,-0.0127683},1}},{{"HorizonBankRot",1,{0,0},1},{"HorizonBankRot",{-0.0075,-0.0127683},1},{"HorizonBankRot",{-0.00513031,-0.0138544},1},{"HorizonBankRot",{-0.00260472,-0.0145196},1}},{{"HorizonBankRot",1,{0,0},1},{"HorizonBankRot",{-0.00260472,-0.0145196},1},{"HorizonBankRot",{2.62268e-09,-0.0147436},1},{"HorizonBankRot",{0.00260472,-0.0145196},1}}};
			};
			class CollectiveGroup
			{
				condition = "simulRTD";
				class CollectiveText
				{
					type = "text";
					source = "static";
					text = "%";
					align = "right";
					scale = 1;
					pos[] = {{0.22,0.2},1};
					right[] = {{0.28,0.2},1};
					down[] = {{0.22,0.24},1};
				};
				class CollectiveNumber
				{
					type = "text";
					source = "rtdCollective";
					sourceScale = 100;
					align = "left";
					scale = 1;
					pos[] = {{0.22,0.2},1};
					right[] = {{0.28,0.2},1};
					down[] = {{0.22,0.24},1};
				};
			};
			class SpeedNumber
			{
				type = "text";
				source = "speed";
				sourceScale = 3.6;
				align = "right";
				scale = 1;
				pos[] = {{0.16,0.48},1};
				right[] = {{0.22,0.48},1};
				down[] = {{0.16,0.52},1};
			};
			class AltNumber
			{
				type = "text";
				source = "altitudeAGL";
				sourceScale = 1;
				sourceOffset = -2;
				align = "left";
				scale = 1;
				pos[] = {{0.81,0.48},1};
				right[] = {{0.87,0.48},1};
				down[] = {{0.81,0.52},1};
			};
			class HoverMode
			{
				condition = "autohover";
				class HoverText
				{
					type = "text";
					source = "static";
					text = "HOVER";
					scale = 1;
					sourceScale = 1;
					align = "right";
					pos[] = {{0.005,0.075},1};
					right[] = {{0.045,0.075},1};
					down[] = {{0.005,0.11},1};
				};
			};
			class CruiseMode
			{
				condition = "((altitudeASL-27) min 1) - autohover";
				class CruiseText
				{
					type = "text";
					source = "static";
					text = "CRUISE";
					scale = 1;
					sourceScale = 1;
					align = "right";
					pos[] = {{0.005,0.075},1};
					right[] = {{0.045,0.075},1};
					down[] = {{0.005,0.11},1};
				};
				class AltNumberASL
				{
					type = "text";
					source = "altitudeASL";
					sourceScale = 1;
					align = "left";
					scale = 1;
					pos[] = {{0.81,0.16},1};
					right[] = {{0.87,0.16},1};
					down[] = {{0.81,0.2},1};
				};
			};
			class TransitionMode
			{
				condition = "((27-altitudeASL) min 1) - autohover";
				class TransText
				{
					type = "text";
					source = "static";
					text = "TRANS";
					scale = 1;
					sourceScale = 1;
					align = "right";
					pos[] = {{0.005,0.075},1};
					right[] = {{0.045,0.075},1};
					down[] = {{0.005,0.11},1};
				};
			};
			class HoverModeHide
			{
				condition = "1-autohover";
				class VelocityLine
				{
					type = "line";
					width = 4.0;
					points[] = {{"VelocityVector",{0,-0.0196581},1},{"VelocityVector",{0.01,-0.0170239},1},{"VelocityVector",{0.01732,-0.00982906},1},{"VelocityVector",{0.02,0},1},{"VelocityVector",{0.01732,0.00982906},1},{"VelocityVector",{0.01,0.0170239},1},{"VelocityVector",{0,0.0196581},1},{"VelocityVector",{-0.01,0.0170239},1},{"VelocityVector",{-0.01732,0.00982906},1},{"VelocityVector",{-0.02,0},1},{"VelocityVector",{-0.01732,-0.00982906},1},{"VelocityVector",{-0.01,-0.0170239},1},{"VelocityVector",{0,-0.0196581},1},{},{"VelocityVector",{0.04,0},1},{"VelocityVector",{0.02,0},1},{},{"VelocityVector",{-0.04,0},1},{"VelocityVector",{-0.02,0},1},{},{"VelocityVector",{0,-0.0393162},1},{"VelocityVector",{0,-0.0196581},1},{}};
				};
			};
			class GearGroup
			{
				type = "group";
				condition = "ils";
				class GearText
				{
					type = "text";
					source = "static";
					text = "GEAR";
					align = "right";
					scale = 1;
					pos[] = {{0.015,0.334188},1};
					right[] = {{0.055,0.334188},1};
					down[] = {{0.015,0.363675},1};
				};
			};
			class LaserGroup
			{
				condition = "laseron";
				class laserText
				{
					type = "text";
					source = "static";
					text = "LASER";
					scale = 1;
					sourceScale = 1;
					align = "right";
					pos[] = {{0.015,0.37},1};
					right[] = {{0.055,0.37},1};
					down[] = {{0.015,0.405},1};
				};
			};
			class RadarGroup
			{
				condition = "activeSensorsOn";
				class radarText
				{
					type = "text";
					source = "static";
					text = "RADAR";
					scale = 1;
					sourceScale = 1;
					align = "right";
					pos[] = {{0.015,0.41},1};
					right[] = {{0.055,0.41},1};
					down[] = {{0.015,0.445},1};
				};
			};
			class VerticalSpeedScale
			{
				type = "line";
				width = 4.0;
				points[] = {{"WeaponAimRelative",1,{-0.03,0.0},1},{"WeaponAimRelative",1,{-0.02,0.0},1},{},{"WeaponAimRelative",1,{0.02,0.0},1},{"WeaponAimRelative",1,{0.03,0.0},1},{},{"WeaponAimRelative",1,{0.0,-0.02},1},{"WeaponAimRelative",1,{0.0,-0.03},1},{},{"WeaponAimRelative",1,{0.0,0.02},1},{"WeaponAimRelative",1,{0.0,0.03},1},{},{"HUDCenter",1,{-0.03,0.0},1},{"HUDCenter",1,{-0.01,0.0},1},{},{"HUDCenter",1,{0.01,0.0},1},{"HUDCenter",1,{0.03,0.0},1},{},{"HUDCenter",1,{0.0,-0.01},1},{"HUDCenter",1,{0.0,-0.03},1},{},{"HUDCenter",1,{0.0,0.01},1},{"HUDCenter",1,{0.0,0.03},1},{},{{0.915,0.18},1},{{0.935,0.18},1},{},{{0.87,0.18},1},{{0.89,0.18},1},{},{{0.915,0.34},1},{{0.935,0.34},1},{},{{0.87,0.34},1},{{0.89,0.34},1},{},{{0.875,0.372},1},{{0.885,0.372},1},{},{{0.875,0.404},1},{{0.885,0.404},1},{},{{0.875,0.436},1},{{0.885,0.436},1},{},{{0.875,0.468},1},{{0.885,0.468},1},{},{{0.87,0.5},1},{{0.89,0.5},1},{},{{0.915,0.5},1},{{0.935,0.5},1},{},{{0.915,0.66},1},{{0.935,0.66},1},{},{{0.87,0.66},1},{{0.89,0.66},1},{},{{0.875,0.628},1},{{0.885,0.628},1},{},{{0.875,0.596},1},{{0.885,0.596},1},{},{{0.875,0.564},1},{{0.885,0.564},1},{},{{0.875,0.532},1},{{0.885,0.532},1},{},{{0.92,0.692},1},{{0.93,0.692},1},{},{{0.92,0.724},1},{{0.93,0.724},1},{},{{0.92,0.756},1},{{0.93,0.756},1},{},{{0.92,0.788},1},{{0.93,0.788},1},{},{{0.915,0.82},1},{{0.935,0.82},1},{},{{0.87,0.82},1},{{0.89,0.82},1},{}};
			};
			class VerticalSpeedArrow
			{
				type = "polygon";
				points[] = {{{"VerticalSpeedBone",{0.85,0.488},1},{"VerticalSpeedBone",{0.87,0.5},1},{"VerticalSpeedBone",{0.85,0.512},1}}};
			};
			class RadarAltitude
			{
				condition = "101-altitudeAGL";
				class RadarHeight
				{
					type = "line";
					width = 15;
					points[] = {{{0.903,0.82},1},{"RadarHeight",{0,0.0},1},{}};
				};
			};
			class HorizonLine
			{
				condition = "1-autohover";
				clipTL[] = {0.2,0.145};
				clipBR[] = {0.8,0.855};
				class HorizonLineDraw
				{
					type = "line";
					width = 4.0;
					points[] = {{"HorizonVector",{-0.225,0.0},1},{"HorizonVector",{-0.1875,0.0},1},{},{"HorizonVector",{-0.15,0.0},1},{"HorizonVector",{-0.1125,0.0},1},{},{"HorizonVector",{-0.075,0.0},1},{"HorizonVector",{-0.0375,0.0},1},{},{"HorizonVector",{0.0375,0.0},1},{"HorizonVector",{0.075,0.0},1},{},{"HorizonVector",{0.1125,0.0},1},{"HorizonVector",{0.15,0.0},1},{},{"HorizonVector",{0.1875,0.0},1},{"HorizonVector",{0.225,0.0},1}};
				};
			};
			class Gunner
			{
				type = "line";
				width = 4.0;
				points[] = {{"GunnerAim",{0.485,0.892},1},{"GunnerAim",{0.485,0.908},1},{"GunnerAim",{0.515,0.908},1},{"GunnerAim",{0.515,0.892},1},{"GunnerAim",{0.485,0.892},1}};
			};
			class WeaponsText
			{
				condition = "1- mgun";
				class Weapons
				{
					type = "text";
					source = "weapon";
					sourceScale = 1;
					align = "left";
					scale = 0.5;
					pos[] = {{0.38,0.869},1};
					right[] = {{0.415,0.869},1};
					down[] = {{0.38,0.904},1};
				};
			};
			class Ammo
			{
				type = "text";
				source = "ammo";
				sourceScale = 1;
				align = "left";
				scale = 0.5;
				pos[] = {{0.38,0.901},1};
				right[] = {{0.415,0.901},1};
				down[] = {{0.38,0.936},1};
			};
			class MGun
			{
				condition = "mgun";
				class Weapons
				{
					type = "text";
					source = "static";
					text = "GUN";
					sourceScale = 1;
					align = "left";
					scale = 0.5;
					pos[] = {{0.38,0.869},1};
					right[] = {{0.415,0.869},1};
					down[] = {{0.38,0.904},1};
				};
				class Circle
				{
					type = "line";
					width = 4.0;
					points[] = {{"WeaponAimRelative",{0.025,0},1},{"WeaponAimRelative",{0.01,0},1},{},{"WeaponAimRelative",{0,0.0245726},1},{"WeaponAimRelative",{0,0.00982906},1},{},{"WeaponAimRelative",{-0.025,0},1},{"WeaponAimRelative",{-0.01,0},1},{},{"WeaponAimRelative",{0,-0.0245726},1},{"WeaponAimRelative",{0,-0.00982906},1},{},{"WeaponAimRelative",{0,-0.00982906},1},{"WeaponAimRelative",{0.005,-0.00851197},1},{"WeaponAimRelative",{0.00866,-0.00491453},1},{"WeaponAimRelative",{0.01,0},1},{"WeaponAimRelative",{0.00866,0.00491453},1},{"WeaponAimRelative",{0.005,0.00851197},1},{"WeaponAimRelative",{0,0.00982906},1},{"WeaponAimRelative",{-0.005,0.00851197},1},{"WeaponAimRelative",{-0.00866,0.00491453},1},{"WeaponAimRelative",{-0.01,0},1},{"WeaponAimRelative",{-0.00866,-0.00491453},1},{"WeaponAimRelative",{-0.005,-0.00851197},1},{"WeaponAimRelative",{0,-0.00982906},1}};
				};
			};
			class AAMissile
			{
				condition = "AAmissile";
				class Circle
				{
					type = "line";
					width = 4.0;
					points[] = {{"ForwardVector",1,"HUDCenter",{0,-0.245726},1},{"ForwardVector",1,"HUDCenter",{0.0434,-0.241991},1},{"ForwardVector",1,"HUDCenter",{0.0855,-0.230909},1},{"ForwardVector",1,"HUDCenter",{0.125,-0.212799},1},{"ForwardVector",1,"HUDCenter",{0.1607,-0.188226},1},{"ForwardVector",1,"HUDCenter",{0.1915,-0.157953},1},{"ForwardVector",1,"HUDCenter",{0.2165,-0.122863},1},{"ForwardVector",1,"HUDCenter",{0.234925,-0.0840385},1},{"ForwardVector",1,"HUDCenter",{0.2462,-0.0426581},1},{"ForwardVector",1,"HUDCenter",{0.25,0},1},{"ForwardVector",1,"HUDCenter",{0.2462,0.0426581},1},{"ForwardVector",1,"HUDCenter",{0.234925,0.0840385},1},{"ForwardVector",1,"HUDCenter",{0.2165,0.122863},1},{"ForwardVector",1,"HUDCenter",{0.1915,0.157953},1},{"ForwardVector",1,"HUDCenter",{0.1607,0.188226},1},{"ForwardVector",1,"HUDCenter",{0.125,0.212799},1},{"ForwardVector",1,"HUDCenter",{0.0855,0.230909},1},{"ForwardVector",1,"HUDCenter",{0.0434,0.241991},1},{"ForwardVector",1,"HUDCenter",{0,0.245726},1},{"ForwardVector",1,"HUDCenter",{-0.0434,0.241991},1},{"ForwardVector",1,"HUDCenter",{-0.0855,0.230909},1},{"ForwardVector",1,"HUDCenter",{-0.125,0.212799},1},{"ForwardVector",1,"HUDCenter",{-0.1607,0.188226},1},{"ForwardVector",1,"HUDCenter",{-0.1915,0.157953},1},{"ForwardVector",1,"HUDCenter",{-0.2165,0.122863},1},{"ForwardVector",1,"HUDCenter",{-0.234925,0.0840385},1},{"ForwardVector",1,"HUDCenter",{-0.2462,0.0426581},1},{"ForwardVector",1,"HUDCenter",{-0.25,0},1},{"ForwardVector",1,"HUDCenter",{-0.2462,-0.0426581},1},{"ForwardVector",1,"HUDCenter",{-0.234925,-0.0840385},1},{"ForwardVector",1,"HUDCenter",{-0.2165,-0.122863},1},{"ForwardVector",1,"HUDCenter",{-0.1915,-0.157953},1},{"ForwardVector",1,"HUDCenter",{-0.1607,-0.188226},1},{"ForwardVector",1,"HUDCenter",{-0.125,-0.212799},1},{"ForwardVector",1,"HUDCenter",{-0.0855,-0.230909},1},{"ForwardVector",1,"HUDCenter",{-0.0434,-0.241991},1},{"ForwardVector",1,"HUDCenter",{0,-0.245726},1}};
				};
			};
			class ATMissile
			{
				condition = "ATmissile";
				class Circle
				{
					type = "line";
					width = 4.0;
					points[] = {{"ForwardVector",1,"HUDCenter",{-0.15,-0.147436},1},{"ForwardVector",1,"HUDCenter",{-0.15,-0.127778},1},{},{"ForwardVector",1,"HUDCenter",{-0.15,0.147436},1},{"ForwardVector",1,"HUDCenter",{-0.15,0.127778},1},{},{"ForwardVector",1,"HUDCenter",{0.15,-0.147436},1},{"ForwardVector",1,"HUDCenter",{0.15,-0.127778},1},{},{"ForwardVector",1,"HUDCenter",{0.15,0.147436},1},{"ForwardVector",1,"HUDCenter",{0.15,0.127778},1},{},{"ForwardVector",1,"HUDCenter",{-0.15,-0.147436},1},{"ForwardVector",1,"HUDCenter",{-0.13,-0.147436},1},{},{"ForwardVector",1,"HUDCenter",{-0.15,0.147436},1},{"ForwardVector",1,"HUDCenter",{-0.13,0.147436},1},{},{"ForwardVector",1,"HUDCenter",{0.15,-0.147436},1},{"ForwardVector",1,"HUDCenter",{0.13,-0.147436},1},{},{"ForwardVector",1,"HUDCenter",{0.15,0.147436},1},{"ForwardVector",1,"HUDCenter",{0.13,0.147436},1}};
				};
			};
			class Rockets
			{
				condition = "rocket";
				class RocketDummy
				{
					type = "line";
					width = 3.0;
					points[] = {{"ImpactPoint",{0.01,-0.0294872},1},{"ImpactPoint",{-0.01,-0.0294872},1},{},{"ImpactPoint",{0.01,0.0294872},1},{"ImpactPoint",{-0.01,0.0294872},1},{},{"ImpactPoint",{0.0,-0.0294872},1},{"ImpactPoint",{0.0,0.0294872},1},{}};
				};
			};
			class WP
			{
				condition = "wpvalid - autohover";
				class WPdist
				{
					type = "text";
					source = "wpdist";
					sourceScale = 0.001;
					sourcePrecision = 1;
					align = "left";
					scale = 1;
					pos[] = {{0.235,0.774038},1};
					right[] = {{0.275,0.774038},1};
					down[] = {{0.235,0.80156},1};
				};
				class WPIndex
				{
					type = "text";
					source = "wpIndex";
					sourceScale = 1;
					sourceLength = 2;
					align = "right";
					scale = 1;
					pos[] = {{0.096,0.776004},1};
					right[] = {{0.126,0.776004},1};
					down[] = {{0.096,0.799594},1};
				};
				class WPstatic
				{
					type = "text";
					source = "static";
					text = "W";
					scale = 1;
					sourceScale = 1;
					align = "right";
					pos[] = {{0.075,0.775},1};
					right[] = {{0.105,0.775},1};
					down[] = {{0.075,0.8},1};
				};
				class WPAuto
				{
					type = "text";
					source = "static";
					text = "A";
					scale = 1;
					sourceScale = 1;
					align = "right";
					pos[] = {{"0.075 +0.035",0.8},1};
					right[] = {{0.14,0.8},1};
					down[] = {{"0.075 +0.035",0.825},1};
				};
				class WPKM
				{
					type = "text";
					source = "static";
					text = "KM";
					scale = 1;
					sourceScale = 1;
					align = "right";
					pos[] = {{"0.075 +0.16",0.775},1};
					right[] = {{0.265,0.775},1};
					down[] = {{"0.075 +0.16",0.803},1};
				};
				class WPTime
				{
					type = "text";
					source = "static";
					text = "-:--";
					scale = 1;
					sourceScale = 1;
					align = "right";
					pos[] = {{"0.075 +0.11",0.8},1};
					right[] = {{0.215,0.8},1};
					down[] = {{"0.075 +0.11",0.825},1};
				};
				class WP
				{
					width = 2;
					type = "line";
					points[] = {{"WPPoint",1,"LimitWaypoint",1,{-0.02,0.04},1},{"WPPoint",1,"LimitWaypoint",1,{0.0,0.02},1},{"WPPoint",1,"LimitWaypoint",1,{0.02,0.04},1},{}};
				};
			};
			class WeaponsLocking
			{
				condition = "missilelocking";
				blinkingPattern[] = {0.2,0.2};
				blinkingStartsOn = 1;
				class Text
				{
					type = "text";
					source = "static";
					text = "LOCKING";
					align = "center";
					scale = 1;
					pos[] = {{0.493,0.766667},1};
					right[] = {{0.553,0.766667},1};
					down[] = {{0.493,0.815812},1};
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
					pos[] = {{0.485,0.216239},1};
					right[] = {{0.545,0.216239},1};
					down[] = {{0.485,0.265385},1};
				};
			};
			class RadarTargets
			{
				class RadarBoxes
				{
					type = "radartoview";
					pos0[] = {0.5,0.5};
					pos10[] = {0.734,0.73};
					width = 4;
					points[] = {{{-0.0035,-0.00344017},1},{{0.0035,-0.00344017},1},{{0.0035,0.00344017},1},{{-0.0035,0.00344017},1},{{-0.0035,-0.00344017},1}};
				};
			};
			class TargetDiamond
			{
				class shape
				{
					type = "line";
					width = 3;
					points[] = {{"Target",1,"Limit0109",1,{0.0075,0},1},{"Target",1,"Limit0109",1,{0.0125,0},1},{},{"Target",1,"Limit0109",1,{0.0175,0},1},{"Target",1,"Limit0109",1,{0.0225,0},1},{},{"Target",1,"Limit0109",1,{0.0275,0},1},{"Target",1,"Limit0109",1,{0.0325,0},1},{},{"Target",1,"Limit0109",1,{0.0375,0},1},{"Target",1,"Limit0109",1,{0.0425,0},1},{},{"Target",1,"Limit0109",1,{0.0475,0},1},{"Target",1,"Limit0109",1,{0.0525,0},1},{},{"Target",1,"Limit0109",1,{-0.0075,0},1},{"Target",1,"Limit0109",1,{-0.0125,0},1},{},{"Target",1,"Limit0109",1,{-0.0175,0},1},{"Target",1,"Limit0109",1,{-0.0225,0},1},{},{"Target",1,"Limit0109",1,{-0.0275,0},1},{"Target",1,"Limit0109",1,{-0.0325,0},1},{},{"Target",1,"Limit0109",1,{-0.0375,0},1},{"Target",1,"Limit0109",1,{-0.0425,0},1},{},{"Target",1,"Limit0109",1,{-0.0475,0},1},{"Target",1,"Limit0109",1,{-0.0525,0},1},{},{"Target",1,"Limit0109",1,{0,0.00737179},1},{"Target",1,"Limit0109",1,{0,0.0122863},1},{},{"Target",1,"Limit0109",1,{0,0.0172009},1},{"Target",1,"Limit0109",1,{0,0.0221154},1},{},{"Target",1,"Limit0109",1,{0,0.0270299},1},{"Target",1,"Limit0109",1,{0,0.0319444},1},{},{"Target",1,"Limit0109",1,{0,0.036859},1},{"Target",1,"Limit0109",1,{0,0.0417735},1},{},{"Target",1,"Limit0109",1,{0,0.046688},1},{"Target",1,"Limit0109",1,{0,0.0516026},1},{},{"Target",1,"Limit0109",1,{0,-0.00737179},1},{"Target",1,"Limit0109",1,{0,-0.0122863},1},{},{"Target",1,"Limit0109",1,{0,-0.0172009},1},{"Target",1,"Limit0109",1,{0,-0.0221154},1},{},{"Target",1,"Limit0109",1,{0,-0.0270299},1},{"Target",1,"Limit0109",1,{0,-0.0319444},1},{},{"Target",1,"Limit0109",1,{0,-0.036859},1},{"Target",1,"Limit0109",1,{0,-0.0417735},1},{},{"Target",1,"Limit0109",1,{0,-0.046688},1},{"Target",1,"Limit0109",1,{0,-0.0516026},1},{}};
				};
			};
			class TargetLocked
			{
				condition = "missilelocked";
				class TargetLockedText
				{
					type = "text";
					source = "static";
					text = "VALID LOCK";
					scale = 1;
					sourceScale = 1;
					align = "center";
					pos[] = {{0.493,0.779},1};
					right[] = {{0.533,0.779},1};
					down[] = {{0.493,0.81},1};
				};
				class TimeOfFlightText
				{
					type = "text";
					source = "static";
					text = "TOF:";
					scale = 1;
					sourceScale = 1;
					align = "right";
					pos[] = {{"0.127+0.49",0.869},1};
					right[] = {{0.652,0.869},1};
					down[] = {{"0.127+0.49",0.904},1};
				};
				class DistanceText
				{
					type = "text";
					source = "static";
					text = "DIST:";
					scale = 1;
					sourceScale = 1;
					align = "right";
					pos[] = {{"0.125+0.49",0.901},1};
					right[] = {{0.65,0.901},1};
					down[] = {{"0.125+0.49",0.936},1};
				};
				class TOF_source
				{
					type = "text";
					scale = 1;
					sourceScale = 1;
					source = "missileflighttime";
					align = "right";
					pos[] = {{0.739,0.869},1};
					right[] = {{0.774,0.869},1};
					down[] = {{0.739,0.904},1};
				};
				class TargetDistance: TOF_source
				{
					source = "targetDist";
					sourceLength = 0;
					sourcePrecision = 1;
					sourceScale = 0.001;
					align = "right";
					pos[] = {{0.739,0.901},1};
					right[] = {{0.774,0.901},1};
					down[] = {{0.739,0.936},1};
				};
			};
		};
	};
	class HMD_CMPilot: AirplaneHUD
	{
		turret[] = {-1};
		class Draw
		{
			alpha = user3;
			color[] = {user0,user1,user2};
			condition = "(1 - (cameraHeadingDiffY<=-14) + (abs(cameraHeadingDiffX)>=26))*on";
			class cmWeapons
			{
				type = text;
				source = cmweapon;
				sourceScale = 1;
				align = right;
				scale = 0.5;
				pos[] = {{0.001,0.869},1};
				right[] = {{0.036,0.869},1};
				down[] = {{0.001,0.904},1};
			};
			class cmAmmo
			{
				type = text;
				source = cmammo;
				sourceScale = 1;
				align = right;
				scale = 0.5;
				pos[] = {{0.001,0.901},1};
				right[] = {{0.036,0.901},1};
				down[] = {{0.001,0.936},1};
			};
		};
	};
};