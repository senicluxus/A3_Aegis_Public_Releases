class CfgMagazines
{
	// Arma 3
	class CA_Magazine;
	class CA_LauncherMagazine;
    class 30Rnd_556x45_Stanag;
	class 20Rnd_762x51_Mag;
	class 150Rnd_762x51_Box: CA_Magazine
	{
		displayName = "7.62 mm 150Rnd Reload Tracer (Green) Box";
	};
	class 150Rnd_762x51_Box_Tracer;
	class 1000Rnd_20mm_shells;
	// Arma 3 Marksman
	class 150Rnd_93x64_Mag: CA_Magazine
	{
		displayName = "9.3mm 120Rnd Reload Tracer (Green) Belt";
	};
    // Arma 3 Apex
    class 30Rnd_762x39_Mag_F;
    // Arma 3 Enoch
	class 75Rnd_762x39_Mag_F: 30Rnd_762x39_Mag_F
	{
		displayName = "7.62 mm 75Rnd AKM Reload Tracer (Yellow) Mag";
	};
	class 75Rnd_762x39_Mag_Tracer_F: 75Rnd_762x39_Mag_F
	{
		displayName = "7.62 mm 75Rnd AKM Tracer (Yellow) Mag";
	};
	// Arma 3 Aegis
	class 220Rnd_25mm_shells;
	// Arma 3 Atlas
	class Atlas_150Rnd_762x51_Box_Yellow: 150Rnd_762x51_Box
	{
		displayName = "7.62 mm 150Rnd Reload Tracer (Yellow) Box";
		descriptionShort = "Caliber: 7.62x51 mm<br/>Rounds: 150<br />Used in: TNG-7";
		ammo = B_762x51_Tracer_Yellow;
		scope = public;
	};
	class Atlas_150Rnd_762x51_Box_Tracer_Yellow: Atlas_150Rnd_762x51_Box_Yellow
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = "7.62 mm 150Rnd Tracer (Yellow) Box";
		displayNameShort = $STR_A3_tracer_dns;
		descriptionShort = "Caliber: 7.62x51 mm Tracer - Yellow<br/>Rounds: 150<br />Used in: TNG-7";
		picture = "\A3\Weapons_F_Beta\Data\UI\M_150Rnd_762x51_tracer_CA.paa";
		tracersEvery = 1;
		scope = public;
	};
	class Atlas_150Rnd_762x51_Box_Red: 150Rnd_762x51_Box
	{
		displayName = "7.62 mm 150Rnd Reload Tracer (Red) Box";
		descriptionShort = "Caliber: 7.62x51 mm<br/>Rounds: 150<br />Used in: TNG-7";
		ammo = B_762x51_Tracer_Red;
		scope = public;
	};
	class Atlas_150Rnd_762x51_Box_Tracer_Red: Atlas_150Rnd_762x51_Box_Red
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = "7.62 mm 150Rnd Tracer (Red) Box";
		displayNameShort = $STR_A3_tracer_dns;
		descriptionShort = "Caliber: 7.62x51 mm Tracer - Red<br/>Rounds: 150<br />Used in: TNG-7";
		picture = "\A3\Weapons_F_Beta\Data\UI\M_150Rnd_762x51_tracer_CA.paa";
		tracersEvery = 1;
		scope = public;
	};
	class 1000Rnd_20mm_shells_yellow: 1000Rnd_20mm_shells
	{
		author = $STR_A3_A_AveryTheKitty;
		ammo = B_20mm_Tracer_Yellow;
	};
	class 220Rnd_25mm_shells_yellow: 220Rnd_25mm_shells
	{
		author = $STR_A3_A_AveryTheKitty;
		ammo = B_25mm_Tracer_Yellow;
	};
	class 150Rnd_93x64_Mag_Red: 150Rnd_93x64_Mag
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = "9.3mm 120Rnd Reload Tracer (Red) Belt";
		ammo = B_93x64_Ball_Tracer_Red;
	};
	class 75Rnd_762x39_Mag_Green_F: 75Rnd_762x39_Mag_F
	{
        author = $STR_A3_A_AveryTheKitty;
		displayName = "7.62 mm 75Rnd AKM Reload Tracer (Green) Mag";
        ammo = B_762x39_Ball_Green_F;
	};
	class 75Rnd_762x39_Mag_Tracer_Green_F: 75Rnd_762x39_Mag_Green_F
	{
		picture = "\A3\Weapons_F_Enoch\MagazineProxies\Data\UI\icon_75Rnd_762x39_Mag_Tracer_F_CA.paa";
        author = $STR_A3_A_AveryTheKitty;
		displayName = "7.62 mm 75Rnd AKM Tracer (Green) Mag";
		tracersEvery = 1;
	};
	class 30Rnd_556x45_AUG_Mag_F: 30Rnd_556x45_Stanag
	{
		//picture = "\A3_Atlas\Weapons_F_Atlas\MagazineProxies\Data\UI\icon_30Rnd_556x45_AUG_Mag_F_CA.paa";
		author = $STR_A3_A_AveryTheKitty;
		displayName = "5.56 mm 30Rnd AUG Reload Tracer (Red) Mag";
        descriptionShort = "Caliber: 5.56x45 mm STANAG<br />Rounds: 30<br />Used in: AUR 90" /*$STR_A3_A_CfgMagazines_30Rnd_556x45_AUG_Mag_F1*/;
		modelSpecial = "\A3_Atlas\Weapons_F_Atlas\MagazineProxies\Mag_556x45_AUG_30Rnd.p3d";
		ammo = B_556x45_Ball_Tracer_Red;
		hiddenSelections[] = {Camo};
		hiddenSelectionsTextures[] = {"\A3_Atlas\Weapons_F_Atlas\Rifles\AUG\Data\AUG_CO.paa"};
	};
	class 30Rnd_556x45_AUG_Mag_Tracer_F: 30Rnd_556x45_AUG_Mag_F
	{
		//picture = "\A3_Atlas\Weapons_F_Atlas\MagazineProxies\Data\UI\icon_30Rnd_556x45_AUG_Mag_Tracer_F_CA.paa";
		author = $STR_A3_A_AveryTheKitty;
		displayName = "5.56 mm 30Rnd AUG Tracer (Red) Mag";
		displayNameShort = $STR_A3_TRACER_DNS;
		descriptionShort = "Caliber: 5.56x45 mm STANAG Tracer - Red<br />Rounds: 30<br />Used in: AUR 90" /*$STR_A3_A_CfgMagazines_30Rnd_556x45_AUG_Mag_Tracer_F1*/;
		tracersEvery = 1;
		lastRoundsTracer = 30;
	};
	class 30Rnd_556x45_AUG_Mag_Green_F: 30Rnd_556x45_AUG_Mag_F
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = "5.56 mm 30Rnd AUG Reload Tracer (Green) Mag";
		ammo = B_556x45_Ball_Tracer_Green;
	};
	class 30Rnd_556x45_AUG_Mag_Tracer_Green_F: 30Rnd_556x45_AUG_Mag_Green_F
	{
		//picture = "\A3_Atlas\Weapons_F_Atlas\MagazineProxies\Data\UI\icon_30Rnd_556x45_AUG_Mag_Tracer_F_CA.paa";
		author = $STR_A3_A_AveryTheKitty;
		displayName = "5.56 mm 30Rnd AUG Tracer (Green) Mag";
		displayNameShort = $STR_A3_TRACER_DNS;
		descriptionShort = "Caliber: 5.56x45 mm STANAG Tracer - Green<br />Rounds: 30<br />Used in: AUR 90" /*$STR_A3_A_CfgMagazines_30Rnd_556x45_AUG_Mag_Tracer_Green_F1*/;
		tracersEvery = 1;
		lastRoundsTracer = 30;
	};

	/* FAMAS F1 Magazines*/
	class Atlas_25Rnd_556x45_Famas: 30Rnd_556x45_Stanag
	{
		author = "Slatts";
		scope = 2;
		displayName = $STR_A3_A_CfgMagazines_25Rnd_556x45_Famas_F0;
		count = 25;
		descriptionShort = $STR_A3_A_CfgMagazines_25Rnd_556x45_Famas1;
		modelSpecial = "A3_Atlas\weapons_f_atlas\Rifles\FAMAS\Data\mag\famas_25Rnd.p3d";
		modelSpecialIsProxy = 1;
		hiddenSelections[] = {"Camo1", "Camo_Low"};
		hiddenSelectionsTextures[] = 
		{
			"\A3_Atlas\weapons_f_atlas\Rifles\FAMAS\Data\tex\famas_3.paa",
			"\A3_Atlas\weapons_f_atlas\Rifles\FAMAS\Data\tex\famas_low.paa"
		};
	};
	class  Atlas_25Rnd_556x45_Famas_green: Atlas_25Rnd_556x45_Famas
	{
		picture = "\a3\Weapons_F\MagazineProxies\data\UI\icon_30Rnd_556x45_Stanag_green_CA.paa";
		author = "Slatts";
		displayName = $STR_A3_A_CfgMagazines_25Rnd_556x45_Famas_Green_F0;
		descriptionShort = $STR_A3_A_CfgMagazines_25Rnd_556x45_Famas_Green1;
		ammo = "B_556x45_Ball_Tracer_Green";
	};
	class  Atlas_25Rnd_556x45_Famas_red: Atlas_25Rnd_556x45_Famas
	{
		picture = "\a3\Weapons_F\MagazineProxies\data\UI\icon_30Rnd_556x45_Stanag_red_CA.paa";
		author = "Slatts";
		displayName = $STR_A3_A_CfgMagazines_25Rnd_556x45_Famas_Red_F0;
		descriptionShort = $STR_A3_A_CfgMagazines_25Rnd_556x45_Famas_Red1;
		ammo = "B_556x45_Ball_Tracer_Red";
	};
	class  Atlas_25Rnd_556x45_Famas_Yellow: Atlas_25Rnd_556x45_Famas
	{
		picture = "\a3\Weapons_F\MagazineProxies\data\UI\icon_30Rnd_556x45_Stanag_red_CA.paa";
		author = "Slatts";
		displayName = $STR_A3_A_CfgMagazines_25Rnd_556x45_Famas_Yellow_F0;
		descriptionShort = $STR_A3_A_CfgMagazines_25Rnd_556x45_Famas_Yellow1;
		ammo = "B_556x45_Ball_Tracer_Yellow";
	};
	class  Atlas_25Rnd_556x45_Famas_Tracer_Red: Atlas_25Rnd_556x45_Famas
	{
		picture = "\a3\Weapons_F\MagazineProxies\data\UI\icon_30Rnd_556x45_Stanag_Tracer_Red_CA.paa";
		author = "Slatts";
		displayName = $STR_A3_A_CfgMagazines_25Rnd_556x45_Famas_Tracer_Red_F0;
		ammo = "B_556x45_Ball_Tracer_Red";
		tracersEvery = 1;
		descriptionShort = $STR_A3_A_CfgMagazines_25Rnd_556x45_Famas_Tracer_Red1;
		displaynameshort = "Tracer";
	};
	class  Atlas_25Rnd_556x45_Famas_Tracer_Green: Atlas_25Rnd_556x45_Famas
	{
		picture = "\a3\Weapons_F\MagazineProxies\data\UI\icon_30Rnd_556x45_Stanag_Tracer_Green_CA.paa";
		author = "Slatts";
		displayName = $STR_A3_A_CfgMagazines_25Rnd_556x45_Famas_Tracer_Green_F0;
		ammo = "B_556x45_Ball_Tracer_Green";
		tracersEvery = 1;
		descriptionShort = $STR_A3_A_CfgMagazines_25Rnd_556x45_Famas_Tracer_Green1;
		displaynameshort = "Tracer";
	};
	class  Atlas_25Rnd_556x45_Famas_Tracer_Yellow: Atlas_25Rnd_556x45_Famas
	{
		picture = "\a3\Weapons_F\MagazineProxies\data\UI\icon_30Rnd_556x45_Stanag_Tracer_Yellow_CA.paa";
		author = "Slatts";
		displayName = $STR_A3_A_CfgMagazines_25Rnd_556x45_Famas_Tracer_Yellow_F0;
		ammo = "B_556x45_Ball_Tracer_Yellow";
		tracersEvery = 1;
		descriptionShort = $STR_A3_A_CfgMagazines_25Rnd_556x45_Famas_Tracer_Yellow1;
		displaynameshort = "Tracer";
	};

	// Panzerfaust 3 rounds
	class Atlas_DM12_HEAT_F: CA_LauncherMagazine
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public; 
		scopeArsenal = public;
		ammo = Atlas_R_DM12_HEAT;
		modelSpecialIsProxy=1;
		displayName = "DM12 HEAT Grenade";
		displayNameShort = "HEAT";
		descriptionShort = "Type: High Explosive Anti Tank<br />Caliber: 110mm";
		model = "\A3_Atlas\weapons_f_atlas\Launchers\Pzf3\DM12_HEAT.p3d";
		modelSpecial = "\A3_Atlas\weapons_f_atlas\Launchers\Pzf3\DM12_HEAT_proxy.p3d";
		picture = "\A3_Atlas\weapons_f_atlas\Launchers\Pzf3\Data\UI\picture_DM12_HEAT_CA.paa";
		initSpeed = 220;
		mass = 90;
	};
	class Atlas_DM22_HEAT_F: Atlas_DM12_HEAT_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public; 
		scopeArsenal = public;
		modelSpecialIsProxy=1;
		ammo = Atlas_R_DM22_HEAT;
		displayName = "DM22 HEAT Grenade";
		displayNameShort = "HEAT";
		descriptionShort = "Type: High Explosive Anti Tank<br />Caliber: 110mm";
		model = "\A3_Atlas\weapons_f_atlas\Launchers\Pzf3\DM22_HEAT.p3d";
		modelSpecial = "\A3_Atlas\weapons_f_atlas\Launchers\Pzf3\DM22_HEAT_proxy.p3d";
		picture = "\A3_Atlas\weapons_f_atlas\Launchers\Pzf3\Data\UI\picture_DM22_HEAT_CA.paa";
		mass = 100;
	};
	class Atlas_DM32_HEAT_MP_F: Atlas_DM12_HEAT_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public; 
		scopeArsenal = public;
		ammo = Atlas_R_DM32_HEAT_MP;
		modelSpecialIsProxy=1;
		displayName = "DM32 HEAT-MP Grenade";
		displayNameShort = "HEAT-MP";
		descriptionShort = "Type: High Explosive Anti Tank - Multi Purpose<br />Caliber: 110mm";
		model = "\A3_Atlas\weapons_f_atlas\Launchers\Pzf3\DM32_HEAT_MP.p3d";
		modelSpecial = "\A3_Atlas\weapons_f_atlas\Launchers\Pzf3\DM32_HEAT_MP_proxy.p3d";
		picture = "\A3_Atlas\weapons_f_atlas\Launchers\Pzf3\Data\UI\picture_DM32_HEAT_MP_CA.paa";
		mass = 100;
	};

	#include "dynamicLoadout.hpp"
};