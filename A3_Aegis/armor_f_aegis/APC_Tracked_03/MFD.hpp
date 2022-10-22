class MFD
{
	class MFD_Driver_Heading
	{
		topLeft = "MFD_1_TL";
		topRight = "MFD_1_TR";
		bottomLeft = "MFD_1_BL";
		borderLeft = 0;
		borderRight = 0;
		borderTop = 0;
		borderBottom = 0;
		color[] = {0.84,0.86,0.84};
		alpha = 0.5;
		enableParallax = 0;
		font = "LCD14";
		class material
		{
			ambient[] = {1,1,1,1};
			diffuse[] = {1,1,1,1};
			emissive[] = {1000,1000,1000,1};
		};
		class Bones{};
		class Draw
		{
			color[] = {0.61,0.62,0};
			alpha = 1;
			condition = "on";
			class Driver_Heading
			{
				type = "text";
				source = "heading";
				sourceScale = 1;
				sourceLength = 3;
				scale = 1;
				align = "center";
				refreshRate = 0.1;
				pos[] = {{0.5,0},1};
				right[] = {{1,0},1};
				down[] = {{0.5,0.81},1};
			};
		};
	};
	class MFD_Driver_Heading_text
	{
		topLeft = "MFD_Driver_1_TL";
		topRight = "MFD_Driver_1_TR";
		bottomLeft = "MFD_Driver_1_BL";
		borderLeft = 0;
		borderRight = 0;
		borderTop = 0;
		borderBottom = 0;
		color[] = {1,1,1};
		alpha = 0.5;
		enableParallax = 0;
		font = "RobotoCondensedLight";
		class material
		{
			ambient[] = {1,1,1,1};
			diffuse[] = {1,1,1,1};
			emissive[] = {1000,1000,1000,1};
		};
		class Bones{};
		class Draw
		{
			color[] = {1,1,1};
			alpha = 1;
			condition = "1";
			class Driver_Heading
			{
				type = "text";
				source = "static";
				text = "AZIMUTH";
				sourceScale = 1;
				sourceLength = 3;
				scale = 1;
				align = "center";
				refreshRate = 0.1;
				pos[] = {{0.45,0.02},1};
				right[] = {{0.7,0.02},1};
				down[] = {{0.45,0.87},1};
			};
		};
	};
	class MFD_Driver_Heading_second
	{
		topLeft = "MFD_Driver_2_TL";
		topRight = "MFD_Driver_2_TR";
		bottomLeft = "MFD_Driver_2_BL";
		borderLeft = 0;
		borderRight = 0;
		borderTop = 0;
		borderBottom = 0;
		color[] = {1,1,1};
		alpha = 0.5;
		enableParallax = 0;
		font = "RobotoCondensedLight";
		class material
		{
			ambient[] = {1,1,1,1};
			diffuse[] = {1,1,1,1};
			emissive[] = {1000,1000,1000,1};
		};
		class Bones{};
		class Draw
		{
			color[] = {1,1,1};
			alpha = 1;
			condition = "1";
			class Driver_Heading
			{
				type = "text";
				source = "heading";
				sourceScale = 1;
				sourceLength = 3;
				scale = 1;
				align = "center";
				refreshRate = 0.1;
				pos[] = {{0.45,0},1};
				right[] = {{0.95,0},1};
				down[] = {{0.45,0.81},1};
			};
		};
	};
	class MFD_Commander_Display_Damage
	{
		topLeft = "mfd_com_TL";
		topRight = "mfd_com_TR";
		bottomLeft = "mfd_com_BL";
		borderLeft = 0;
		borderRight = 0;
		borderTop = 0;
		borderBottom = 0;
		color[] = {1,1,1};
		alpha = 0.5;
		enableParallax = 0;
		turret[] = {0,0};
		font = "EtelkaMonospaceProBold";
		class material
		{
			ambient[] = {1,1,1,1};
			diffuse[] = {1,1,1,1};
			emissive[] = {1000,1000,1000,1};
		};
		class Bones{};
		class Draw
		{
			color[] = {1,1,1};
			alpha = 1;
			condition = "1";
			class Damage_Hull
			{
				type = "text";
				source = "static";
				text = "HULL";
				sourceScale = 1;
				sourceLength = 3;
				scale = 1;
				align = "center";
				refreshRate = 0.1;
				pos[] = {{0.04,0.18},1};
				right[] = {{0.065,0.18},1};
				down[] = {{0.04,0.44},1};
			};
			class Damage_Engine
			{
				type = "text";
				source = "static";
				text = "ENG";
				sourceScale = 1;
				sourceLength = 3;
				scale = 1;
				align = "center";
				refreshRate = 0.1;
				pos[] = {{0.11,0.18},1};
				right[] = {{0.135,0.18},1};
				down[] = {{0.11,0.44},1};
			};
			class Damage_Fuel
			{
				type = "text";
				source = "static";
				text = "FUEL";
				sourceScale = 1;
				sourceLength = 3;
				scale = 1;
				align = "center";
				refreshRate = 0.1;
				pos[] = {{0.178,0.18},1};
				right[] = {{0.203,0.18},1};
				down[] = {{0.178,0.44},1};
			};
			class Damage_Wheels
			{
				type = "text";
				source = "static";
				text = "TRK";
				sourceScale = 1;
				sourceLength = 3;
				scale = 1;
				align = "center";
				refreshRate = 0.1;
				pos[] = {{0.04,0.55},1};
				right[] = {{0.065,0.55},1};
				down[] = {{0.04,0.81},1};
			};
			class Damage_Gun
			{
				type = "text";
				source = "static";
				text = "GUN";
				sourceScale = 1;
				sourceLength = 3;
				scale = 1;
				align = "center";
				refreshRate = 0.1;
				pos[] = {{0.11,0.55},1};
				right[] = {{0.135,0.55},1};
				down[] = {{0.11,0.81},1};
			};
			class Damage_Turret
			{
				type = "text";
				source = "static";
				text = "TRT";
				sourceScale = 1;
				sourceLength = 3;
				scale = 1;
				align = "center";
				refreshRate = 0.1;
				pos[] = {{0.178,0.55},1};
				right[] = {{0.203,0.55},1};
				down[] = {{0.178,0.81},1};
			};
		};
	};
	class MFD_Commander_Display
	{
		topLeft = "mfd_com_TL";
		topRight = "mfd_com_TR";
		bottomLeft = "mfd_com_BL";
		borderLeft = 0;
		borderRight = 0;
		borderTop = 0;
		borderBottom = 0;
		color[] = {1,1,1};
		alpha = 0.5;
		enableParallax = 0;
		turret[] = {0};
		font = "EtelkaMonospaceProBold";
		class material
		{
			ambient[] = {1,1,1,1};
			diffuse[] = {1,1,1,1};
			emissive[] = {1000,1000,1000,1};
		};
		class Bones
		{
			class FuelScale
			{
				type = "linear";
				source = "fuel";
				sourceIndex = 1;
				sourceScale = 1.0;
				min = 0;
				max = 1;
				minPos[] = {0,0};
				maxPos[] = {-0.09,0};
			};
		};
		class Draw
		{
			color[] = {1,1,1};
			alpha = 1;
			condition = "1";
			class Main_Gun
			{
				type = "text";
				source = "static";
				text = "MAIN GUN";
				sourceScale = 1;
				sourceLength = 3;
				scale = 1;
				align = "center";
				refreshRate = 0.1;
				pos[] = {{0.273,0.18},1};
				right[] = {{0.298,0.18},1};
				down[] = {{0.273,0.44},1};
			};
			class Main_Gun_Ammo_count
			{
				type = "text";
				source = "ammo";
				sourceScale = 1;
				sourceLength = 2;
				sourceIndex = 0;
				scale = 1;
				align = "center";
				refreshRate = 0.1;
				pos[] = {{0.273,0.55},1};
				right[] = {{0.298,0.55},1};
				down[] = {{0.273,0.81},1};
			};
			class Main_Gun_Ammo_Type_text
			{
				type = "text";
				source = "static";
				text = "TYPE";
				sourceScale = 1;
				sourceLength = 3;
				scale = 1;
				align = "center";
				refreshRate = 0.1;
				pos[] = {{0.385,0.18},1};
				right[] = {{0.41,0.18},1};
				down[] = {{0.385,0.44},1};
			};
			class Main_Gun_Ammo_Type
			{
				type = "text";
				source = "ammoFormat";
				sourceScale = 1;
				sourceLength = 3;
				scale = 1;
				align = "center";
				refreshRate = 0.1;
				pos[] = {{0.385,0.55},1};
				right[] = {{0.41,0.55},1};
				down[] = {{0.385,0.81},1};
			};
			class Coax
			{
				type = "text";
				source = "static";
				text = "COAX";
				sourceScale = 1;
				sourceLength = 3;
				scale = 1;
				align = "center";
				refreshRate = 0.1;
				pos[] = {{0.498,0.18},1};
				right[] = {{0.523,0.18},1};
				down[] = {{0.498,0.44},1};
			};
			class Coax_Ammo_count
			{
				type = "text";
				source = "ammo";
				sourceScale = 1;
				sourceLength = 2;
				sourceIndex = 1;
				scale = 1;
				align = "center";
				refreshRate = 0.1;
				pos[] = {{0.493,0.55},1};
				right[] = {{0.518,0.55},1};
				down[] = {{0.493,0.81},1};
			};
			class Azimuth
			{
				type = "text";
				source = "static";
				text = "GUN AZIM";
				sourceScale = 1;
				sourceLength = 3;
				scale = 1;
				align = "center";
				refreshRate = 0.1;
				pos[] = {{0.605,0.18},1};
				right[] = {{0.63,0.18},1};
				down[] = {{0.605,0.44},1};
			};
			class Azimuth_number
			{
				type = "text";
				source = "[x]turretworld";
				sourceScale = 1;
				sourceLength = 3;
				scale = 1;
				align = "center";
				refreshRate = 0.1;
				pos[] = {{0.61,0.55},1};
				right[] = {{0.635,0.55},1};
				down[] = {{0.61,0.81},1};
			};
			class Smoke
			{
				type = "text";
				source = "static";
				text = "SMOKE";
				sourceScale = 1;
				sourceLength = 3;
				scale = 1;
				align = "center";
				refreshRate = 0.1;
				pos[] = {{0.717,0.18},1};
				right[] = {{0.742,0.18},1};
				down[] = {{0.717,0.44},1};
			};
			class Fuel_background_white
			{
				color[] = {0.2,0.2,0.2};
				alpha = 0.1;
				condition = "1";
				class Background
				{
					type = "polygon";
					points[] = {{{{0.787,0.7},1},{{0.877,0.7},1},{{0.877,0.9},1},{{0.787,0.9},1}}};
				};
			};
			class Fuel_background_green
			{
				color[] = {0,0.7,0};
				condition = "fuel>=0.5";
				class Background
				{
					type = "polygon";
					points[] = {{{{0.787,0.7},1},{"FuelScale",{0.877,0.7},1},{"FuelScale",{0.877,0.9},1},{{0.787,0.9},1}}};
				};
			};
			class Fuel_background_yellow
			{
				color[] = {0.9,0.7,0};
				condition = "fuel<0.5";
				class Background
				{
					type = "polygon";
					points[] = {{{{0.787,0.7},1},{"FuelScale",{0.877,0.7},1},{"FuelScale",{0.877,0.9},1},{{0.787,0.9},1}}};
				};
			};
			class Fuel_background_red
			{
				color[] = {0.7,0,0};
				condition = "fuel<0.3";
				class Background
				{
					type = "polygon";
					points[] = {{{{0.787,0.7},1},{"FuelScale",{0.877,0.7},1},{"FuelScale",{0.877,0.9},1},{{0.787,0.9},1}}};
				};
			};
			class Fuel
			{
				type = "text";
				source = "static";
				text = "FUEL";
				sourceScale = 1;
				sourceLength = 3;
				scale = 1;
				align = "center";
				refreshRate = 0.1;
				pos[] = {{0.83,0.18},1};
				right[] = {{0.855,0.18},1};
				down[] = {{0.83,0.44},1};
			};
			class Fuel_number
			{
				type = "text";
				source = "fuel";
				sourceScale = 100;
				sourceLength = 1;
				scale = 1;
				align = "left";
				refreshRate = 0.1;
				pos[] = {{0.835,0.4},1};
				right[] = {{0.86,0.4},1};
				down[] = {{0.835,0.66},1};
			};
			class Fuel_percent_sign
			{
				type = "text";
				source = "static";
				text = "%";
				sourceScale = 1;
				sourceLength = 3;
				scale = 1;
				align = "right";
				refreshRate = 0.1;
				pos[] = {{0.845,0.4},1};
				right[] = {{0.87,0.4},1};
				down[] = {{0.845,0.66},1};
			};
		};
	};
	class MFD_Commander_OnScreen
	{
		topLeft = "PIP_COM_TL";
		topRight = "PIP_COM_TR";
		bottomLeft = "PIP_COM_BL";
		borderLeft = 0;
		borderRight = 0;
		borderTop = 0;
		borderBottom = 0;
		color[] = {1,1,1};
		alpha = 0.5;
		enableParallax = 0;
		turret[] = {0,0};
		font = "EtelkaMonospaceProBold";
		class material
		{
			ambient[] = {1,1,1,1};
			diffuse[] = {1,1,1,1};
			emissive[] = {1000,1000,1000,1};
		};
		class Bones{};
		class Draw
		{
			color[] = {1,1,1};
			alpha = 1;
			condition = "1";
			class Azimuth_number
			{
				type = "text";
				source = "[x]turretworld";
				sourceScale = 1;
				sourceLength = 3;
				scale = 1;
				align = "center";
				refreshRate = 0.1;
				pos[] = {{0.22,0.435},1};
				right[] = {{0.245,0.435},1};
				down[] = {{0.22,0.472},1};
			};
			class Elevation_Text
			{
				type = "text";
				source = "static";
				text = "E: ";
				sourceScale = 1;
				sourceLength = 3;
				scale = 1;
				align = "center";
				refreshRate = 0.1;
				pos[] = {{0.2,0.28},1};
				right[] = {{0.225,0.28},1};
				down[] = {{0.2,0.317},1};
			};
			class Elevation_Number
			{
				type = "text";
				source = "[y]turretworld";
				sourceScale = 1;
				sourceLength = 4;
				sourcePrecision = 1;
				refreshRate = 0;
				align = "center";
				scale = 1;
				pos[] = {{0.23,0.28},1};
				right[] = {{0.255,0.28},1};
				down[] = {{0.23,0.317},1};
			};
			class Lased_Range
			{
				type = "text";
				source = "laserDist";
				sourceScale = 1;
				sourceLength = 4;
				scale = 1;
				align = "center";
				refreshRate = 0.1;
				pos[] = {{0.75,0.28},1};
				right[] = {{0.775,0.28},1};
				down[] = {{0.75,0.317},1};
			};
			class VisionMode_Text
			{
				type = "text";
				source = "static";
				text = "WFOV";
				sourceScale = 1;
				sourceLength = 3;
				scale = 1;
				align = "center";
				refreshRate = 0.1;
				pos[] = {{0.75,0.65},1};
				right[] = {{0.775,0.65},1};
				down[] = {{0.75,0.687},1};
			};
			class VisionMode_String
			{
				type = "text";
				source = "visionMode";
				sourceScale = 1;
				sourceLength = 3;
				scale = 1;
				align = "center";
				refreshRate = 0.1;
				pos[] = {{0.825,0.65},1};
				right[] = {{0.85,0.65},1};
				down[] = {{0.825,0.687},1};
			};
		};
	};
	class MFD_Commander_Display_MainTurret
	{
		topLeft = "mfd_com_TL";
		topRight = "mfd_com_TR";
		bottomLeft = "mfd_com_BL";
		borderLeft = 0;
		borderRight = 0;
		borderTop = 0;
		borderBottom = 0;
		color[] = {1,1,1};
		alpha = 0.5;
		enableParallax = 0;
		turret[] = {0,0};
		font = "EtelkaMonospaceProBold";
		class material
		{
			ambient[] = {1,1,1,1};
			diffuse[] = {1,1,1,1};
			emissive[] = {1000,1000,1000,1};
		};
		class Bones{};
		class Draw
		{
			color[] = {1,1,1};
			alpha = 1;
			condition = "1";
			class Smoke_ammo
			{
				type = "text";
				source = "ammo";
				sourceScale = 1;
				sourceLength = 3;
				sourceIndex = 0;
				scale = 1;
				align = "center";
				refreshRate = 0.1;
				pos[] = {{0.72,0.55},1};
				right[] = {{0.745,0.55},1};
				down[] = {{0.72,0.81},1};
			};
		};
	};
	class MFD_Commander_Heading
	{
		topLeft = "mfd_com_dir_TL";
		topRight = "mfd_com_dir_TR";
		bottomLeft = "mfd_com_dir_BL";
		borderLeft = 0;
		borderRight = 0;
		borderTop = 0;
		borderBottom = 0;
		color[] = {0.84,0.86,0.84};
		alpha = 0.5;
		enableParallax = 0;
		turret[] = {0,0};
		font = "LCD14";
		class material
		{
			ambient[] = {1,1,1,1};
			diffuse[] = {1,1,1,1};
			emissive[] = {1000,1000,1000,1};
		};
		class Bones{};
		class Draw
		{
			color[] = {0.61,0.62,0};
			alpha = 1;
			condition = "on";
			class Driver_Heading
			{
				type = "text";
				source = "[x]turretworld";
				sourceScale = 1;
				sourceLength = 3;
				scale = 1;
				align = "center";
				refreshRate = 0.1;
				pos[] = {{0.5,0},1};
				right[] = {{1,0},1};
				down[] = {{0.5,0.81},1};
			};
		};
	};
	class MFD_Gunner_Ready_To_Fire
	{
		topLeft = "mfd_gun_cli_TL";
		topRight = "mfd_gun_cli_TR";
		bottomLeft = "mfd_gun_cli_BL";
		borderLeft = 0;
		borderRight = 0;
		borderTop = 0;
		borderBottom = 0;
		color[] = {0,0,0};
		alpha = 0.5;
		enableParallax = 0;
		font = "EtelkaMonospaceProBold";
		class material
		{
			ambient[] = {1,1,1,1};
			diffuse[] = {1,1,1,1};
			emissive[] = {1000,1000,1000,1};
		};
		class Bones{};
		class Draw
		{
			color[] = {0,0,0};
			alpha = 1;
			condition = "1";
			class Top_text
			{
				type = "text";
				source = "static";
				text = "READY TO";
				sourceScale = 1;
				sourceLength = 3;
				scale = 1;
				align = "center";
				refreshRate = 0.1;
				pos[] = {{0.45,0.05},1};
				right[] = {{0.67,0.05},1};
				down[] = {{0.45,0.55},1};
			};
			class Bottom_text
			{
				type = "text";
				source = "static";
				text = "FIRE";
				sourceScale = 1;
				sourceLength = 3;
				scale = 1;
				align = "center";
				refreshRate = 0.1;
				pos[] = {{0.465,0.45},1};
				right[] = {{0.685,0.45},1};
				down[] = {{0.465,0.95},1};
			};
		};
	};
	class MFD_Gunner_Display
	{
		topLeft = "mfd_gun_TL";
		topRight = "mfd_gun_TR";
		bottomLeft = "mfd_gun_BL";
		borderLeft = 0;
		borderRight = 0;
		borderTop = 0;
		borderBottom = 0;
		color[] = {1,1,1};
		alpha = 0.5;
		enableParallax = 0;
		turret[] = {0};
		font = "EtelkaMonospaceProBold";
		class material
		{
			ambient[] = {1,1,1,1};
			diffuse[] = {1,1,1,1};
			emissive[] = {1000,1000,1000,1};
		};
		class Bones{};
		class Draw
		{
			color[] = {1,1,1};
			alpha = 1;
			condition = "1";
			class Main_armament
			{
				type = "text";
				source = "static";
				text = "MAIN ARMAMENT";
				sourceScale = 1;
				sourceLength = 3;
				scale = 1;
				align = "right";
				refreshRate = 0.1;
				pos[] = {{0.015,-0.003},1};
				right[] = {{0.075,-0.003},1};
				down[] = {{0.015,0.075},1};
			};
			class Machinegun
			{
				type = "text";
				source = "static";
				text = "COAX";
				sourceScale = 1;
				sourceLength = 3;
				scale = 1;
				align = "right";
				refreshRate = 0.1;
				pos[] = {{0.015,0.31},1};
				right[] = {{0.075,0.31},1};
				down[] = {{0.015,0.388},1};
			};
			class Main_armament_ammo_type
			{
				type = "text";
				source = "static";
				text = "AMMO TYPE";
				sourceScale = 1;
				sourceLength = 3;
				scale = 1;
				align = "center";
				refreshRate = 0.1;
				pos[] = {{0.545,-0.003},1};
				right[] = {{0.605,-0.003},1};
				down[] = {{0.545,0.075},1};
			};
			class Lased_distance_elevation
			{
				type = "text";
				source = "static";
				text = "LASED DST";
				sourceScale = 1;
				sourceLength = 3;
				scale = 1;
				align = "right";
				refreshRate = 0.1;
				pos[] = {{0.015,0.84},1};
				right[] = {{0.075,0.84},1};
				down[] = {{0.015,0.918},1};
			};
			class Azimut
			{
				type = "text";
				source = "static";
				text = "AZIMUTH";
				sourceScale = 1;
				sourceLength = 3;
				scale = 1;
				align = "right";
				refreshRate = 0.1;
				pos[] = {{0.025,0.915},1};
				right[] = {{0.085,0.915},1};
				down[] = {{0.025,0.993},1};
			};
			class Damage
			{
				type = "text";
				source = "static";
				text = "DAMAGE";
				sourceScale = 1;
				sourceLength = 3;
				scale = 1;
				align = "right";
				refreshRate = 0.1;
				pos[] = {{0.015,0.39},1};
				right[] = {{0.075,0.39},1};
				down[] = {{0.015,0.468},1};
			};
			class Heading
			{
				type = "text";
				source = "[x]turretworld";
				sourceScale = 1;
				sourceLength = 3;
				scale = 0.2;
				align = "center";
				refreshRate = 0.1;
				pos[] = {{0.34,0.915},1};
				right[] = {{0.4,0.915},1};
				down[] = {{0.34,0.993},1};
			};
			class Lased_Range
			{
				type = "text";
				source = "laserDist";
				sourceScale = 1;
				sourceLength = 4;
				scale = 1;
				align = "center";
				refreshRate = 0.1;
				pos[] = {{0.335,0.84},1};
				right[] = {{0.395,0.84},1};
				down[] = {{0.335,0.918},1};
			};
		};
	};
	class MFD_Gunner_Main_Armament_Ammo_Type
	{
		topLeft = "mfd_gun_TL";
		topRight = "mfd_gun_TR";
		bottomLeft = "mfd_gun_BL";
		borderLeft = 0;
		borderRight = 0;
		borderTop = 0;
		borderBottom = 0;
		color[] = {0.84,0.86,0.84};
		alpha = 0.5;
		turret[] = {0};
		enableParallax = 0;
		font = "EtelkaMonospaceProBold";
		class material
		{
			ambient[] = {1,1,1,1};
			diffuse[] = {1,1,1,1};
			emissive[] = {1000,1000,1000,1};
		};
		class Bones{};
		class Draw
		{
			color[] = {1,1,1};
			alpha = 1;
			condition = "1";
			class Gunner_AmmoType
			{
				type = "text";
				source = "ammoFormat";
				sourceScale = 1;
				sourceLength = 3;
				scale = 1;
				align = "center";
				refreshRate = 0.1;
				pos[] = {{0.56,0.09},1};
				right[] = {{0.62,0.09},1};
				down[] = {{0.56,0.168},1};
			};
		};
	};
	class MFD_Gunner_Coax_Ammo
	{
		topLeft = "mfd_gun_TL";
		topRight = "mfd_gun_TR";
		bottomLeft = "mfd_gun_BL";
		borderLeft = 0;
		borderRight = 0;
		borderTop = 0;
		borderBottom = 0;
		color[] = {0.84,0.86,0.84};
		alpha = 0.5;
		enableParallax = 0;
		turret[] = {0};
		font = "EtelkaMonospaceProBold";
		class material
		{
			ambient[] = {1,1,1,1};
			diffuse[] = {1,1,1,1};
			emissive[] = {1000,1000,1000,1};
		};
		class Bones{};
		class Draw
		{
			color[] = {1,1,1};
			alpha = 1;
			condition = "1";
			class Gunner_Text_1
			{
				type = "text";
				source = "ammo";
				sourceScale = 1;
				sourceLength = 3;
				scale = 1;
				sourceIndex = 1;
				align = "left";
				refreshRate = 0.1;
				pos[] = {{0.36,0.31},1};
				right[] = {{0.42,0.31},1};
				down[] = {{0.36,0.388},1};
			};
		};
	};
	class MFD_Gunner_AmmoIndicator_Main_Armament
	{
		topLeft = "mfd_gun_TL";
		topRight = "mfd_gun_TR";
		bottomLeft = "mfd_gun_BL";
		borderLeft = 0;
		borderRight = 0;
		borderTop = 0;
		borderBottom = 0;
		color[] = {0.84,0.86,0.84};
		alpha = 0.5;
		enableParallax = 0;
		turret[] = {0};
		font = "EtelkaMonospacePro";
		class material
		{
			ambient[] = {1,1,1,1};
			diffuse[] = {1,1,1,1};
			emissive[] = {1000,1000,1000,1};
		};
		class Bones{};
		class Draw
		{
			color[] = {1,1,1};
			alpha = 1;
			condition = "1";
			class Main_Armament_Ammo_Type_1
			{
				type = "text";
				source = "static";
				text = "GPR-T";
				sourceScale = 1;
				sourceLength = 3;
				scale = 1;
				align = "right";
				refreshRate = 0.1;
				pos[] = {{0.015,0.065},1};
				right[] = {{0.075,0.065},1};
				down[] = {{0.015,0.143},1};
			};
			class Gunner_Text_1
			{
				type = "text";
				source = "ammo";
				sourceScale = 1;
				sourceLength = 2;
				sourceIndex = 0;
				scale = 1;
				align = "left";
				refreshRate = 0.1;
				pos[] = {{0.375,0.065},1};
				right[] = {{0.435,0.065},1};
				down[] = {{0.375,0.143},1};
			};
			class Main_Armament_Ammo_Type_2
			{
				type = "text";
				source = "static";
				text = "APFSDS-T";
				sourceScale = 1;
				sourceLength = 3;
				scale = 1;
				align = "right";
				refreshRate = 0.1;
				pos[] = {{0.015,0.125},1};
				right[] = {{0.06,0.125},1};
				down[] = {{0.015,0.203},1};
			};
			class Gunner_Text_2
			{
				type = "text";
				source = "ammo";
				sourceScale = 1;
				sourceLength = 2;
				sourceIndex = 0;
				sourcePrecision = 1;
				scale = 1;
				align = "left";
				refreshRate = 0.1;
				pos[] = {{0.375,0.125},1};
				right[] = {{0.435,0.125},1};
				down[] = {{0.375,0.203},1};
			};
		};
	};
	class MFD_Gunner_Range
	{
		topLeft = "MFD_5_TL";
		topRight = "MFD_5_TR";
		bottomLeft = "MFD_5_BL";
		borderLeft = 0;
		borderRight = 0;
		borderTop = 0;
		borderBottom = 0;
		color[] = {0.84,0.86,0.84};
		alpha = 0.5;
		enableParallax = 0;
		turret[] = {0};
		font = "LCD14";
		class Bones{};
		class Draw
		{
			color[] = {1,1,1};
			alpha = 1;
			condition = "1";
			class Gunner_Range
			{
				type = "text";
				source = "laserDist";
				sourceScale = 1;
				sourceLength = 4;
				scale = 1;
				align = "center";
				refreshRate = 0.1;
				pos[] = {{0.48,-0.1},1};
				right[] = {{0.88,-0.1},1};
				down[] = {{0.48,1},1};
			};
		};
	};
	class MFD_Gunner_AmmoType
	{
		topLeft = "MFD_4_TL";
		topRight = "MFD_4_TR";
		bottomLeft = "MFD_4_BL";
		borderLeft = 0;
		borderRight = 0;
		borderTop = 0;
		borderBottom = 0;
		color[] = {0.84,0.86,0.84};
		alpha = 0.5;
		turret[] = {0};
		enableParallax = 0;
		font = "LCD14";
		class Bones{};
		class Draw
		{
			color[] = {1,1,1};
			alpha = 1;
			condition = "1";
			class Gunner_AmmoType
			{
				type = "text";
				source = "ammoFormat";
				sourceScale = 1;
				sourceLength = 3;
				scale = 1;
				align = "center";
				refreshRate = 0.1;
				pos[] = {{0.455,0.2},1};
				right[] = {{0.655,0.2},1};
				down[] = {{0.455,0.7},1};
			};
		};
	};
	class MFD_Gunner_Heading
	{
		topLeft = "MFD_Gunner_heading_TL";
		topRight = "MFD_Gunner_heading_TR";
		bottomLeft = "MFD_Gunner_heading_BL";
		borderLeft = 0;
		borderRight = 0;
		borderTop = 0;
		borderBottom = 0;
		color[] = {1,1,1};
		alpha = 0.5;
		enableParallax = 0;
		font = "LCD14";
		turret[] = {0};
		class Bones{};
		class Draw
		{
			color[] = {1,1,1};
			alpha = 1;
			condition = "1";
			class Heading
			{
				type = "text";
				source = "[x]turretworld";
				sourceScale = 1;
				sourceLength = 3;
				scale = 1;
				align = "center";
				refreshRate = 0.1;
				pos[] = {{0.5,0},1};
				right[] = {{0.7,0},1};
				down[] = {{0.5,0.9},1};
			};
		};
	};
};