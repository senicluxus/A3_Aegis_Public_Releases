/* Pickup AT Base Class */
class Aegis_Pickup_01_AT_base_RF: Pickup_01_aat_base_rf
{
    author = $STR_A3_A_Ravenholme;
    displayname = $STR_A3_A_CfgVehicles_Pickup_01_AT_Base_RF0;
    editorSubcategory = "EdSubcat_Cars";
    radarType = 2;
	irScanGround = 1;
	laserscanner = 1;
    class MFD: MFD
    {
        class MFD_Gunner_AmmoIndicator_Main_Armament
		{
			topLeft = "mfd_com_TL";
			topRight = "mfd_com_TR";
			bottomLeft = "mfd_com_BL";
			borderLeft = 0;
			borderRight = 0;
			borderTop = 0;
			borderBottom = 0;
			color[] = {0.84, 0.86, 0.84};
			alpha = 0.5;
			enableParallax = 0;
			turret[] = {0};
			font = "RobotoCondensedLight";
			class material
			{
				ambient[] = {1, 1, 1, 1};
				diffuse[] = {1, 1, 1, 1};
				emissive[] = {1000, 1000, 1000, 1};
			};
			class Bones
			{
			};
			class Draw
			{
				color[] = {1, 1, 1};
				alpha = 1;
				condition = "1";
				class Main_Armament_Ammo_Type_1
				{
					type = "text";
					source = "static";
					text = "AT MISSILE";
					sourceScale = 1;
					sourceLength = 3;
					scale = 1;
					align = "right";
					refreshRate = 0.1;
					pos[] = {{0.015, "(0.075 + 0.015)"}, 1};
					right[] = {{0.075, "(0.075 + 0.015)"}, 1};
					down[] = {{0.015, "(0.153 + 0.015)"}, 1};
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
					pos[] = {{0.38, "(0.075 + 0.015)"}, 1};
					right[] = {{0.44, "(0.075 + 0.015)"}, 1};
					down[] = {{0.38, "(0.153 + 0.015)"}, 1};
				};
			};
		};
    };
    class AnimationSources: AnimationSources
    {
        class Missiles_revolving
		{
			source = "revolving";
			weapon = "Aegis_missiles_DAGR_AT";
		};
		class Missiles_reloadMagazine: Missiles_revolving
		{
			source = "reloadMagazine";
		};
    };
    class Turrets: Turrets
    {
        class MainTurret: MainTurret
        {
            weapons[] = {"Aegis_missiles_DAGR_AT", "Laserdesignator_mounted"};
			magazines[] = {"Laserbatteries", "Aegis_4Rnd_PG_missiles", "Aegis_4Rnd_PG_missiles"};
            stabilizedInAxes = 3;
			class OpticsIn: Optics_Gunner_APC_01
			{
				class Wide: Wide
				{
				};
				class Medium: Medium
				{
				};
				class Narrow: Narrow
				{
				};
			};
        };
    };
};