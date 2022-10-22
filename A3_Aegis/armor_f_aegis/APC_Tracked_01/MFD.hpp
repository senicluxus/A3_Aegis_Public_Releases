class MFD
{
	class MFD_Driver_Heading
	{
        topLeft = MFD_1_TL;
        topRight = MFD_1_TR;
        bottomLeft = MFD_1_BL;
        borderLeft = 0;
        borderRight = 0;
        borderTop = 0;
        borderBottom = 0;
        color[] = {0.84,0.86,0.84};
        alpha = 0.5;
        enableParallax = false;
        font = LCD14;
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
            condition = on;
            class Driver_Heading
            {
                type = text;
                source = heading;
                sourceScale = 1;
                sourceLength = 3;
                scale = 1;
                align = center;
                refreshRate = 0.1;
                pos[] =
                {
                    {0.5,0},
                    1
                };
                right[] =
                {
                    {1,0},
                    1
                };
                down[] =
                {
                    {0.5,0.81},
                    1
                };
            };
        };
	};
	class MFD_Driver_Fire
	{
        topLeft = MFD_2_TL;
        topRight = MFD_2_TR;
        bottomLeft = MFD_2_BL;
        borderLeft = 0;
        borderRight = 0;
        borderTop = 0;
        borderBottom = 0;
        color[] = {0.92,0.01,0};
        alpha = 0.5;
        enableParallax = false;
        font = LCD14;
        class material
        {
            ambient[] = {1,1,1,1};
            diffuse[] = {1,1,1,1};
            emissive[] = {1000,1000,1000,1};
        };
        class Bones{};
        class Draw
        {
            color[] = {0.92,0.01,0};
            alpha = 1;
            blinkingPattern[] = {1,1};
            blinkingStartsOn = 1;
            class Driver_Fire
            {
                type = text;
                source = static;
                text = "ПОЖАР";
                sourceScale = 1;
                sourceLength = 3;
                scale = 1;
                align = center;
                refreshRate = 0.1;
                pos[] =
                {
                    {0.455,0.105},
                    1
                };
                right[] =
                {
                    {0.855,0.105},
                    1
                };
                down[] =
                {
                    {0.455,0.705},
                    1
                };
            };
        };
	};
	class MFD_Driver_Heading_text
	{
        topLeft = MFD_Driver_1_TL;
        topRight = MFD_Driver_1_TR;
        bottomLeft = MFD_Driver_1_BL;
        borderLeft = 0;
        borderRight = 0;
        borderTop = 0;
        borderBottom = 0;
        color[] = {1,1,1};
        alpha = 0.5;
        enableParallax = false;
        font = RobotoCondensedLight;
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
            condition = true;
            class Driver_Heading
            {
                type = text;
                source = static;
                text = "AZIMUTH";
                sourceScale = 1;
                sourceLength = 3;
                scale = 1;
                align = center;
                refreshRate = 0.1;
                pos[] =
                {
                    {0.45,0.02},
                    1
                };
                right[] =
                {
                    {0.7,0.02},
                    1
                };
                down[] =
                {
                    {0.45,0.87},
                    1
                };
            };
        };
	};
	class MFD_Driver_Heading_second
	{
        topLeft = MFD_Driver_2_TL;
        topRight = MFD_Driver_2_TR;
        bottomLeft = MFD_Driver_2_BL;
        borderLeft = 0;
        borderRight = 0;
        borderTop = 0;
        borderBottom = 0;
        color[] = {1,1,1};
        alpha = 0.5;
        enableParallax = false;
        font = RobotoCondensedLight;
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
            condition = true;
            class Driver_Heading
            {
                type = text;
                source = heading;
                sourceScale = 1;
                sourceLength = 3;
                scale = 1;
                align = center;
                refreshRate = 0.1;
                pos[] =
                {
                    {0.45,0},
                    1
                };
                right[] =
                {
                    {0.95,0},
                    1
                };
                down[] =
                {
                    {0.45,0.81},
                    1
                };
            };
        };
	};
	class MFD_Gunner_Ready_To_Fire
	{
        topLeft = mfd_gun_cli_TL;
        topRight = mfd_gun_cli_TR;
        bottomLeft = mfd_gun_cli_BL;
        borderLeft = 0;
        borderRight = 0;
        borderTop = 0;
        borderBottom = 0;
        color[] = {0,0,0};
        alpha = 0.5;
        enableParallax = false;
        font = RobotoCondensedLight;
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
            condition = true;
            class Top_text
            {
                type = text;
                source = static;
                text = "READY TO";
                scale = 1;
                sourceScale = 1;
                align = center;
                pos[] =
                {
                    {0.45,0.05},
                    1
                };
                right[] =
                {
                    {0.67,0.05},
                    1
                };
                down[] =
                {
                    {0.45,0.55},
                    1
                };
            };
            class Bottom_text
            {
                type = text;
                source = static;
                text = "FIRE";
                scale = 1;
                sourceScale = 1;
                align = center;
                pos[] =
                {
                    {0.465,0.45},
                    1
                };
                right[] =
                {
                    {0.685,0.45},
                    1
                };
                down[] =
                {
                    {0.465,0.95},
                    1
                };
            };
        };
	};
	class MFD_Gunner_Display
	{
        topLeft = mfd_gun_TL;
        topRight = mfd_gun_TR;
        bottomLeft = mfd_gun_BL;
        borderLeft = 0;
        borderRight = 0;
        borderTop = 0;
        borderBottom = 0;
        color[] = {1,1,1};
        alpha = 0.5;
        enableParallax = false;
        turret[] = {0};
        font = RobotoCondensedLight;
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
            condition = true;
            class Main_armament
            {
                type = text;
                source = static;
                text = "MAIN ARMAMENT";
                scale = 1;
                sourceScale = 1;
                align = right;
                pos[] =
                {
                    {0.015,-0.005},
                    1
                };
                right[] =
                {
                    {0.075,-0.005},
                    1
                };
                down[] =
                {
                    {0.015,0.073},
                    1
                };
            };
            class Main_armament_ammo_type
            {
                type = text;
                source = static;
                text = "AMMO TYPE";
                sourceScale = 1;
                sourceLength = 3;
                scale = 1;
                align = center;
                refreshRate = 0.1;
                pos[] =
                {
                    {0.545,-0.005},
                    1
                };
                right[] =
                {
                    {0.605,-0.005},
                    1
                };
                down[] =
                {
                    {0.545,0.073},
                    1
                };
            };
            class Lased_distance_elevation
            {
                type = text;
                source = static;
                text = "LASED DIST";
                sourceScale = 1;
                sourceLength = 3;
                scale = 1;
                align = right;
                refreshRate = 0.1;
                pos[] =
                {
                    {0.015,0.84},
                    1
                };
                right[] =
                {
                    {0.075,0.84},
                    1
                };
                down[] =
                {
                    {0.015,0.918},
                    1
                };
            };
            class Azimut
            {
                type = text;
                source = static;
                text = "AZIMUTH";
                sourceScale = 1;
                sourceLength = 3;
                scale = 1;
                align = right;
                refreshRate = 0.1;
                pos[] =
                {
                    {0.015,0.915},
                    1
                };
                right[] =
                {
                    {0.075,0.915},
                    1
                };
                down[] =
                {
                    {0.015,0.993},
                    1
                };
            };
            class Damage
            {
                type = text;
                source = static;
                text = "DAMAGE";
                sourceScale = 1;
                sourceLength = 3;
                scale = 1;
                align = right;
                refreshRate = 0.1;
                pos[] =
                {
                    {0.015,0.39},
                    1
                };
                right[] =
                {
                    {0.075,0.39},
                    1
                };
                down[] =
                {
                    {0.015,0.468},
                    1
                };
            };
            class Heading
            {
                type = text;
                source = [x]turretworld;
                sourceScale = 1;
                sourceLength = 3;
                scale = 0.2;
                align = center;
                refreshRate = 0.1;
                pos[] =
                {
                    {0.34,0.915},1
                };
                right[] =
                {
                    {0.4,0.915},1
                };
                down[] =
                {
                    {0.34,0.993},1
                };
            };
            class Lased_Range
            {
                type = text;
                source = laserDist;
                sourceScale = 1;
                sourceLength = 4;
                scale = 1;
                align = center;
                refreshRate = 0.1;
                pos[] =
                {
                    {0.34,0.84},
                    1
                };
                right[] =
                {
                    {0.4,0.84},
                    1
                };
                down[] =
                {
                    {0.34,0.918},
                    1
                };
            };
        };
	};
	class MFD_Gunner_Main_Armament_Ammo_Type
	{
        topLeft = mfd_gun_TL;
        topRight = mfd_gun_TR;
        bottomLeft = mfd_gun_BL;
        borderLeft = 0;
        borderRight = 0;
        borderTop = 0;
        borderBottom = 0;
        color[] = {0.84,0.86,0.84};
        alpha = 0.5;
        turret[] = {0};
        enableParallax = false;
        font = RobotoCondensedLight;
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
            condition = true;
            class Gunner_AmmoType
            {
                type = text;
                source = ammoFormat;
                sourceScale = 1;
                sourceLength = 3;
                scale = 1;
                align = center;
                refreshRate = 0.1;
                pos[] = 
                {
                    {0.56,0.09},
                    1
                };
                right[] = 
                {
                    {0.62,0.09},
                    1
                };
                down[] = 
                {
                    {0.56,0.168},
                    1
                };
            };
        };
	};
	class MFD_Gunner_AmmoIndicator_Main_Armament
	{
        topLeft = mfd_gun_TL;
        topRight = mfd_gun_TR;
        bottomLeft = mfd_gun_BL;
        borderLeft = 0;
        borderRight = 0;
        borderTop = 0;
        borderBottom = 0;
        color[] = {0.84,0.86,0.84};
        alpha = 0.5;
        enableParallax = false;
        turret[] = {0};
        font = RobotoCondensedLight;
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
            condition = true;
            class Main_Armament_Ammo_Type_1
            {
                type = text;
                source = static;
                text = "MP-T";
                sourceScale = 1;
                sourceLength = 3;
                scale = 1;
                align = right;
                refreshRate = 0.1;
                pos[] =
                {
                    {0.015,0.075},
                    1
                };
                right[] =
                {
                    {0.075,0.075},
                    1
                };
                down[] =
                {
                    {0.015,0.153},
                    1
                };
            };
            class Gunner_Text_1
            {
                type = text;
                source = ammo;
                sourceScale = 1;
                sourceLength = 2;
                sourceIndex = 0;
                scale = 1;
                align = left;
                refreshRate = 0.1;
                pos[] =
                {
                    {0.39,0.075},
                    1
                };
                right[] =
                {
                    {0.45,0.075},
                    1
                };
                down[] =
                {
                    {0.39,0.153},
                    1
                };
            };
            class Main_Armament_Ammo_Type_2
            {
                type = text;
                source = static;
                text = "APFSDS-T";
                sourceScale = 1;
                sourceLength = 3;
                scale = 1;
                align = right;
                refreshRate = 0.1;
                pos[] =
                {
                    {0.015,0.135},
                    1
                };
                right[] =
                {
                    {0.075,0.135},
                    1
                };
                down[] =
                {
                    {0.015,0.213},
                    1
                };
            };
            class Gunner_Text_2
            {
                type = text;
                source = ammo;
                sourceScale = 1;
                sourceLength = 2;
                sourceIndex = 0;
                sourcePrecision = 1;
                scale = 1;
                align = left;
                refreshRate = 0.1;
                pos[] =
                {
                    {0.39,0.135},
                    1
                };
                right[] =
                {
                    {0.45,0.135},
                    1
                };
                down[] =
                {
                    {0.39,0.213},
                    1
                };
            };
            class Main_Armament_Ammo_Type_3
            {
                type = text;
                source = static;
                text = "AT MISSILE";
                sourceScale = 1;
                sourceLength = 3;
                scale = 1;
                align = right;
                refreshRate = 0.1;
                pos[] =
                {
                    {0.015,0.195},
                    1
                };
                right[] =
                {
                    {0.075,0.195},
                    1
                };
                down[] =
                {
                    {0.015,0.273},
                    1
                };
            };
            class Gunner_Text_3
            {
                type = text;
                source = ammo;
                sourceScale = 1;
                sourceLength = 2;
                sourceIndex = 2;
                scale = 1;
                align = left;
                refreshRate = 0.1;
                pos[] =
                {
                    {0.39,0.195},
                    1
                };
                right[] =
                {
                    {0.45,0.195},
                    1
                };
                down[] =
                {
                    {0.39,0.273},
                    1
                };
            };
        };
	};
	class MFD_Commander_Ready_To_Fire
	{
        topLeft = mfd_com_cli_TL;
        topRight = mfd_com_cli_TR;
        bottomLeft = mfd_com_cli_BL;
        borderLeft = 0;
        borderRight = 0;
        borderTop = 0;
        borderBottom = 0;
        color[] = {0,0,0};
        alpha = 0.5;
        enableParallax = false;
        font = RobotoCondensedLight;
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
            condition = true;
            class Top_text
            {
                type = text;
                source = static;
                text = "READY TO";
                sourceScale = 1;
                sourceLength = 3;
                scale = 1;
                align = center;
                refreshRate = 0.1;
                pos[] =
                {
                    {0.44,0.05},
                    1
                };
                right[] =
                {
                    {0.69,0.05},
                    1
                };
                down[] =
                {
                    {0.44,0.55},
                    1
                };
            };
            class Bottom_text
            {
                type = text;
                source = static;
                text = "FIRE";
                sourceScale = 1;
                sourceLength = 3;
                scale = 1;
                align = center;
                refreshRate = 0.1;
                pos[] =
                {
                    {0.5,0.38},
                    1
                };
                right[] =
                {
                    {0.75,0.38},
                    1
                };
                down[] =
                {
                    {0.5,0.88},
                    1
                };
            };
        };
	};
	class MFD_Commander_Main_Display
	{
        topLeft = PIP_COM_TL;
        topRight = PIP_COM_TR;
        bottomLeft = PIP_COM_BL;
        borderLeft = 0;
        borderRight = 0;
        borderTop = 0;
        borderBottom = 0;
        color[] = {0.84,0.86,0.84};
        alpha = 1;
        enableParallax = false;
        font = RobotoCondensedLight;
        class material
        {
            ambient[] = {1,1,1,1};
            diffuse[] = {1,1,1,1};
            emissive[] = {1000,1000,1000,1};
        };
        class Bones{};
        class Draw
        {
            color[] = {1,1,1,1};
            alpha = 0.5;
            class Range_Value
            {
                type = text;
                source = laserDist;
                sourceScale = 1;
                sourceLength = 3;
                scale = 1;
                align = center;
                refreshRate = 0.08;
                pos[] =
                {
                    {0.5,0.7},
                    1
                };
                right[] =
                {
                    {0.54,0.7},
                    1
                };
                down[] =
                {
                    {0.5,0.74},
                    1
                };
            };
        };
	};
	class MFD_Commander_Second_Display
	{
        topLeft = mfd_com_TL;
        topRight = mfd_com_TR;
        bottomLeft = mfd_com_BL;
        borderLeft = 0;
        borderRight = 0;
        borderTop = 0;
        borderBottom = 0;
        color[] = {1,1,1};
        alpha = 0.5;
        enableParallax = false;
        turret[] = {0};
        font = RobotoCondensedLight;
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
            condition = true;
            class Main_armament
            {
                type = text;
                source = static;
                text = "MAIN ARMAMENT";
                sourceScale = 1;
                sourceLength = 3;
                scale = 1;
                align = right;
                refreshRate = 0.1;
                pos[] =
                {
                    {0.015,-0.005},
                    1
                };
                right[] =
                {
                    {0.075,-0.005},
                    1
                };
                down[] =
                {
                    {0.015,0.073},
                    1
                };
            };
            class Lased_distance_elevation
            {
                type = text;
                source = static;
                text = "LASED DIST";
                sourceScale = 1;
                sourceLength = 3;
                scale = 1;
                align = right;
                refreshRate = 0.1;
                pos[] =
                {
                    {0.015,0.84},
                    1
                };
                right[] =
                {
                    {0.075,0.84},
                    1
                };
                down[] =
                {
                    {0.015,0.918},
                    1
                };
            };
            class Azimut
            {
                type = text;
                source = static;
                text = "AZIMUTH";
                sourceScale = 1;
                sourceLength = 3;
                scale = 1;
                align = right;
                refreshRate = 0.1;
                pos[] =
                {
                    {0.015,0.915},
                    1
                };
                right[] =
                {
                    {0.075,0.915},
                    1
                };
                down[] =
                {
                    {0.015,0.993},
                    1
                };
            };
            class Heading
            {
                type = text;
                source = [x]turretworld;
                sourceScale = 1;
                sourceLength = 3;
                scale = 0.2;
                align = center;
                refreshRate = 0.1;
                pos[] =
                {
                    {0.34,0.915},
                    1
                };
                right[] =
                {
                    {0.4,0.915},
                    1
                };
                down[] =
                {
                    {0.34,0.993},
                    1
                };
            };
            class Lased_Range
            {
                type = text;
                source = laserDist;
                sourceScale = 1;
                sourceLength = 4;
                scale = 1;
                align = center;
                refreshRate = 0.1;
                pos[] =
                {
                    {0.34,0.84},
                    1
                };
                right[] =
                {
                    {0.4,0.84},
                    1
                };
                down[] =
                {
                    {0.34,0.918},
                    1
                };
            };
        };
	};
	class MFD_Commander_Smoke_Indicator
	{
        topLeft = mfd_com_smoke_TL;
        topRight = mfd_com_smoke_TR;
        bottomLeft = mfd_com_smoke_BL;
        borderLeft = 0;
        borderRight = 0;
        borderTop = 0;
        borderBottom = 0;
        color[] = {0,0,0};
        alpha = 0.5;
        enableParallax = false;
        font = RobotoCondensedLight;
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
            condition = true;
            class Top_text
            {
                type = text;
                source = static;
                text = "SMOKE";
                sourceScale = 1;
                sourceLength = 3;
                scale = 1;
                align = center;
                refreshRate = 0.1;
                pos[] =
                {
                    {0.45,0.05},
                    1
                };
                right[] =
                {
                    {0.7,0.05},
                    1
                };
                down[] =
                {
                    {0.45,0.55},
                    1
                };
            };
            class Bottom_text
            {
                type = text;
                source = static;
                text = "SCREEN";
                sourceScale = 1;
                sourceLength = 3;
                scale = 1;
                align = center;
                refreshRate = 0.1;
                pos[] =
                {
                    {0.45,0.38},
                    1
                };
                right[] =
                {
                    {0.7,0.38},
                    1
                };
                down[] =
                {
                    {0.45,0.88},
                    1
                };
            };
        };
	};
	class MFD_Commander_AmmoIndicator_Main_Armament
	{
        topLeft = mfd_com_TL;
        topRight = mfd_com_TR;
        bottomLeft = mfd_com_BL;
        borderLeft = 0;
        borderRight = 0;
        borderTop = 0;
        borderBottom = 0;
        color[] = {0.84,0.86,0.84};
        alpha = 0.5;
        enableParallax = false;
        turret[] = {0};
        font = RobotoCondensedLight;
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
            condition = true;
            class Main_Armament_Ammo_Type_1
            {
                type = text;
                source = static;
                text = "MP-T";
                sourceScale = 1;
                sourceLength = 3;
                scale = 1;
                align = right;
                refreshRate = 0.1;
                pos[] =
                {
                    {0.015,0.08},
                    1
                };
                right[] =
                {
                    {0.075,0.08},
                    1
                };
                down[] =
                {
                    {0.015,0.158},
                    1
                };
            };
            class Gunner_Text_1
            {
                type = text;
                source = ammo;
                sourceScale = 1;
                sourceLength = 2;
                sourceIndex = 0;
                scale = 1;
                align = left;
                refreshRate = 0.1;
                pos[] =
                {
                    {0.38,0.08},
                    1
                };
                right[] =
                {
                    {0.44,0.08},
                    1
                };
                down[] =
                {
                    {0.38,0.158},
                    1
                };
            };
        };
	};
	class MFD_Commander_AmmoIndicator_Main_Armament_second
	{
        topLeft = mfd_com_TL;
        topRight = mfd_com_TR;
        bottomLeft = mfd_com_BL;
        borderLeft = 0;
        borderRight = 0;
        borderTop = 0;
        borderBottom = 0;
        color[] = {0.84,0.86,0.84};
        alpha = 0.5;
        enableParallax = false;
        turret[] = {0};
        font = RobotoCondensedLight;
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
            condition = true;
            class Main_Armament_Ammo_Type_2
            {
                type = text;
                source = static;
                text = "APFSDS-T";
                sourceScale = 1;
                sourceLength = 3;
                scale = 1;
                align = right;
                refreshRate = 0.1;
                pos[] =
                {
                    {0.015,0.14},
                    1
                };
                right[] =
                {
                    {0.075,0.14},
                    1
                };
                down[] =
                {
                    {0.015,0.218},
                    1
                };
            };
            class Gunner_Text_2
            {
                type = text;
                source = ammo;
                sourceScale = 1;
                sourceLength = 2;
                sourceIndex = 0;
                sourcePrecision = 1;
                scale = 1;
                align = left;
                refreshRate = 0.1;
                pos[] =
                {
                    {0.38,0.14},
                    1
                };
                right[] =
                {
                    {0.44,0.14},
                    1
                };
                down[] =
                {
                    {0.38,0.218},
                    1
                };
            };
        };
	};
	class MFD_Commander_AmmoIndicator_Main_Armament_third
	{
        topLeft = mfd_com_TL;
        topRight = mfd_com_TR;
        bottomLeft = mfd_com_BL;
        borderLeft = 0;
        borderRight = 0;
        borderTop = 0;
        borderBottom = 0;
        color[] = {0.84,0.86,0.84};
        alpha = 0.5;
        enableParallax = false;
        turret[] = {0};
        font = RobotoCondensedLight;
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
            condition = true;
            class Main_Armament_Ammo_Type_3
            {
                type = text;
                source = static;
                text = "AT MISSILE";
                sourceScale = 1;
                sourceLength = 3;
                scale = 1;
                align = right;
                refreshRate = 0.1;
                pos[] =
                {
                    {0.015,0.20},
                    1
                };
                right[] =
                {
                    {0.075,0.20},
                    1
                };
                down[] =
                {
                    {0.015,0.278},
                    1
                };
            };
            class Gunner_Text_3
            {
                type = text;
                source = ammo;
                sourceScale = 1;
                sourceLength = 2;
                sourceIndex = 2;
                scale = 1;
                align = left;
                refreshRate = 0.1;
                pos[] =
                {
                    {0.38,0.20},
                    1
                };
                right[] =
                {
                    {0.44,0.20},
                    1
                };
                down[] =
                {
                    {0.38,0.278},
                    1
                };
            };
        };
	};
};