/* Bases */
class VehicleMagazine;

/* Magazines */
class 2000Rnd_65x39_Belt;
class 2000Rnd_65x39_Belt_Tracer_Green_Splash;
class 200Rnd_20mm_G_belt: VehicleMagazine
{
    ammo = B_25x40mm_HE;
};
class 40Rnd_20mm_G_belt: 200Rnd_20mm_G_belt
{
    count = 36;
};
class 300Rnd_20mm_shells;
class 1000Rnd_20mm_shells: 300Rnd_20mm_shells
{
    /*
    - Real-life RAH-66's ammunition capacity is 500 rounds
    - Source: https://en.wikipedia.org/wiki/Boeing%E2%80%93Sikorsky_RAH-66_Comanche#Specifications_(RAH-66A)
    */
    count = 500;
};
class 300Rnd_25mm_shells;
class 250Rnd_30mm_HE_shells;
class 140Rnd_30mm_MP_shells;
class 140Rnd_30mm_MP_shells_Tracer_Red: 140Rnd_30mm_MP_shells
{
    displayNameMFDFormat = "MP-T";
};
class 140Rnd_30mm_MP_shells_Tracer_Green: 140Rnd_30mm_MP_shells
{
    displayNameMFDFormat = "ОФ";
};
class 140Rnd_30mm_MP_shells_Tracer_Yellow;
class 60Rnd_30mm_APFSDS_shells;
class 60Rnd_30mm_APFSDS_shells_Tracer_Red: 60Rnd_30mm_APFSDS_shells
{
    displayNameMFDFormat = "APFSDS-T";
};
class 60Rnd_30mm_APFSDS_shells_Tracer_Green;
class 60Rnd_30mm_APFSDS_shells_Tracer_Yellow;
class 60Rnd_40mm_GPR_shells;
class 38Rnd_80mm_rockets;
class 12Rnd_230mm_rockets;
class 12Rnd_230mm_rockets_cluster;
class 680Rnd_35mm_AA_shells;
class 1000Rnd_762x51_Belt_T_Red;
class 1000Rnd_762x51_Belt_T_Green;
class 1000Rnd_762x51_Belt_T_Yellow;
class 2000Rnd_762x51_Belt_T_Red;
class 2000Rnd_762x51_Belt_T_Green;
class 2000Rnd_762x51_Belt_T_Yellow;
class 1000Rnd_Gatling_30mm_Plane_CAS_01_F;
class 500Rnd_762x51_Belt: 2000Rnd_65x39_Belt
{
    author = $STR_A3_A_AveryTheKitty;
    ammo = B_762x51_Minigun_Tracer_Red_splash;
    displayName = $STR_A3_A_CfgMagazines_2000Rnd_762x45_Belt0;
    descriptionShort = $STR_A3_A_CfgMagazines_2000Rnd_762x45_Belt1;
    tracersEvery = 1;
    count = 500;
    initSpeed = 860;
    weight = 16;
};
class 500Rnd_762x51_Green_Belt: 500Rnd_762x51_Belt
{
    author = $STR_A3_A_AveryTheKitty;
    ammo = B_762x51_Minigun_Tracer_Green_splash;
};
class 500Rnd_762x51_Yellow_Belt: 500Rnd_762x51_Belt
{
    author = $STR_A3_A_AveryTheKitty;
    ammo = B_762x51_Minigun_Tracer_Yellow_splash;
};
class 250Rnd_20mm_shells: 300Rnd_20mm_shells
{
    author = $STR_A3_A_AveryTheKitty;
    displayName = $STR_A3_CfgMagazines_1000Rnd_20mm_shells0;
    count = 250;
    ammo = B_20mm;
};
class 220Rnd_25mm_shells: 300Rnd_25mm_shells
{
    author = $STR_A3_A_AveryTheKitty;
    count = 220;
};
class 250Rnd_30mm_HE_shells_Tracer_Yellow: 250Rnd_30mm_HE_shells
{
    author = $STR_A3_A_AveryTheKitty;
    scope = public;
    displayName = "30 mm HE Tracer (Yellow) Shells";
    ammo = B_30mm_HE_Tracer_Yellow;
    tracersEvery = 1;
};
class 120Rnd_40mm_GPR_shells: 60Rnd_40mm_GPR_shells
{
    author = $STR_A3_A_AveryTheKitty;
    displayName = $STR_A3_CFGMAGAZINES_40MMGPR;
    displayNameShort = $STR_A3_CFGMAGAZINES_GPR;
    ammo = B_40mm_GPR;
    initSpeed = 1035;
    count = 120;
};
class 120Rnd_40mm_GPR_Tracer_Red_shells: 120Rnd_40mm_GPR_shells
{
    author = $STR_A3_A_AveryTheKitty;
    displayName = $STR_A3_CFGMAGAZINES_40MMGPRT;
    displayNameShort = $STR_A3_CFGMAGAZINES_GPRT;
    ammo = B_40mm_GPR_Tracer_Red;
    displayNameMFDFormat = "GPR-T";
};
class 120Rnd_40mm_GPR_Tracer_Green_shells: 120Rnd_40mm_GPR_shells
{
    author = $STR_A3_A_AveryTheKitty;
    displayName = $STR_A3_CFGMAGAZINES_40MMGPRT;
    displayNameShort = $STR_A3_CFGMAGAZINES_GPRT;
    ammo = B_40mm_GPR_Tracer_Green;
};
class 120Rnd_40mm_GPR_Tracer_Yellow_shells: 120Rnd_40mm_GPR_shells
{
    author = $STR_A3_A_AveryTheKitty;
    displayName = $STR_A3_CFGMAGAZINES_40MMGPRT;
    displayNameShort = $STR_A3_CFGMAGAZINES_GPRT;
    ammo = B_40mm_GPR_Tracer_Yellow;
    displayNameMFDFormat = "GPR-T";
};
class 80Rnd_40mm_APFSDS_shells: 120Rnd_40mm_GPR_shells
{
    author = $STR_A3_A_AveryTheKitty;
    displayName = $STR_A3_CFGMAGAZINES_40MM_APFSD;
    displayNameShort = $STR_A3_CFGMAGAZINES_APFSD0;
    ammo = B_40mm_APFSDS;
    initSpeed = 1600;
    count = 80;
};
class 80Rnd_40mm_APFSDS_Tracer_Red_shells: 80Rnd_40mm_APFSDS_shells
{
    author = $STR_A3_A_AveryTheKitty;
    displayName = $STR_A3_CfgMagazines_40Rnd_40mm_APFSDS_Tracer_Red_shells0;
    displayNameShort = $STR_A3_CfGMAGAZINES_APFSD_T0;
    ammo = B_40mm_APFSDS_Tracer_Red;
    count = 80;
    displayNameMFDFormat = "APFSDS-T";
};
class 80Rnd_40mm_APFSDS_Tracer_Green_shells: 80Rnd_40mm_APFSDS_Tracer_Red_shells
{
    author = $STR_A3_A_AveryTheKitty;
    ammo = B_40mm_APFSDS_Tracer_Green;
};
class 80Rnd_40mm_APFSDS_Tracer_Yellow_shells: 80Rnd_40mm_APFSDS_Tracer_Red_shells
{
    author = $STR_A3_A_AveryTheKitty;
    ammo = B_40mm_APFSDS_Tracer_Yellow;
    displayNameMFDFormat = "APFSDS-T";
};
class 14Rnd_50mm_rockets: VehicleMagazine
{
    author = $STR_A3_A_AveryTheKitty;
    scope = public;
    displayName = $STR_A3_A_CfgMagazines_14Rnd_50mm_rockets0;
    displayNameShort = $STR_A3_CfgMagazines_14Rnd_80mm_rockets_dns;
    descriptionShort = $STR_A3_cfgMagazine_Skyfire_tooltip;
    ammo = R_50mm_HE;
    initSpeed = 44;
    maxLeadSpeed = 41.6667;
    count = 14;
    nameSound = rockets;
};
class 12Rnd_Vikhr_missiles: VehicleMagazine
{
    author = $STR_A3_A_AveryTheKitty;
    scope = public;
    displayName = $STR_A3_A_CfgMagazines_12Rnd_Vikhr_missiles0;
    displayNameShort = $STR_A3_Cfgmagazines_140Rnd_30mm_MP_shells_dns;
    descriptionShort = $STR_A3_A_CfgMagazines_12Rnd_Vikhr_missiles1;
    ammo = M_Vikhr_AT;
    initSpeed = 0;
    count = 12;
    nameSound = missiles;
    weight = 600;
};
class 12Rnd_230mm_rockets_guided: 12Rnd_230mm_rockets
{
    displayName = $STR_A3_A_CfgMagazines_12Rnd_230mm_rockets_guided0;
    displayNameShort = $STR_A3_CfgMagazines_10Rnd_120mm_Mo_guided0;
    displayNameMFDFormat = "GUIDED";
    ammo = M_Mo_230mm_guided;
};
class 12Rnd_230mm_rockets_LG: 12Rnd_230mm_rockets
{
    displayName = $STR_A3_A_CfgMagazines_12Rnd_230mm_rockets_LG0;
    displayNameShort = $STR_A3_CfgMagazines_8Rnd_82mm_Mo_LG_dns;
    displayNameMFDFormat = "LASER GUID";
    ammo = R_230mm_LG;
};
class 500Rnd_35mm_AA_shells: 680Rnd_35mm_AA_shells
{
    author = $STR_A3_A_AveryTheKitty;
    displayName = $STR_A3_CfgMagazines_680Rnd_35mm_AA_shells0;
    displayNameShort = $STR_A3_CfgMagazines_680Rnd_35mm_AA_shells_dns;
    ammo = B_35mm_AA;
    initSpeed = 1440;
    count = 500;
};
class 500Rnd_35mm_AA_shells_Tracer_Red: 500Rnd_35mm_AA_shells
{
    author = $STR_A3_A_AveryTheKitty;
    ammo = B_35mm_AA_Tracer_Red;
    displayNameMFDFormat = "AA SHELLS";
};
class 500Rnd_35mm_AA_shells_Tracer_Green: 500Rnd_35mm_AA_shells
{
    author = $STR_A3_A_AveryTheKitty;
    ammo = B_35mm_AA_Tracer_Green;
    displayNameMFDFormat = "ОФЗТ";
};
class 500Rnd_35mm_AA_shells_Tracer_Yellow: 500Rnd_35mm_AA_shells
{
    author = $STR_A3_A_AveryTheKitty;
    ammo = B_35mm_AA_Tracer_Yellow;
};
class 1000Rnd_762x51_Belt_T_Red_Splash: 1000Rnd_762x51_Belt_T_Red
{
    author = $STR_A3_A_AveryTheKitty;
    ammo = B_762x51_Minigun_Tracer_Red_splash;
};
class 1000Rnd_762x51_Belt_T_Green_Splash: 1000Rnd_762x51_Belt_T_Green
{
    author = $STR_A3_A_AveryTheKitty;
    ammo = B_762x51_Minigun_Tracer_Green_splash;
};
class 1000Rnd_762x51_Belt_T_Yellow_Splash: 1000Rnd_762x51_Belt_T_Yellow
{
    author = $STR_A3_A_AveryTheKitty;
    ammo = B_762x51_Minigun_Tracer_Yellow_splash;
};
class 2000Rnd_762x51_Belt_T_Red_Splash: 2000Rnd_762x51_Belt_T_Red
{
    author = $STR_A3_A_AveryTheKitty;
    ammo = B_762x51_Minigun_Tracer_Red_splash;
};
class 2000Rnd_762x51_Belt_T_Green_Splash: 2000Rnd_762x51_Belt_T_Green
{
    author = $STR_A3_A_AveryTheKitty;
    ammo = B_762x51_Minigun_Tracer_Green_splash;
};
class 2000Rnd_762x51_Belt_T_Yellow_Splash: 2000Rnd_762x51_Belt_T_Yellow
{
    author = $STR_A3_A_AveryTheKitty;
    ammo = B_762x51_Minigun_Tracer_Yellow_splash;
};
class 60Rnd_30mm_MP_shells_Tracer_Red: 140Rnd_30mm_MP_shells_Tracer_Red
{
    author = $STR_A3_A_AveryTheKitty;
    count = 60;
};
class 60Rnd_30mm_MP_shells_Tracer_Yellow: 140Rnd_30mm_MP_shells_Tracer_Yellow
{
    author = $STR_A3_A_AveryTheKitty;
    count = 60;
};
class 250Rnd_762x51_Belt: VehicleMagazine
{
    author = $STR_A3_A_AveryTheKitty;
    scope = public;
    count = 250;
    ammo = B_762x51_Ball;
    initSpeed = 860;
    maxLeadSpeed = 36.111099;
    tracersEvery = 5;
    lastRoundsTracer = 4;
    nameSound = mgun;
    displayName = $STR_A3_CfgMagazines_2000Rnd_762x45_Belt0;
    descriptionShort = $STR_A3_CfgMagazines_2000Rnd_762x45_Belt1;
    displayNameMFDFormat = "COAX";
};
class 250Rnd_762x51_Belt_Red: 250Rnd_762x51_Belt
{
    author = $STR_A3_A_AveryTheKitty;
    ammo = B_762x51_Tracer_Red;
};
class 250Rnd_762x51_Belt_T_Red: 250Rnd_762x51_Belt_Red
{
    author = $STR_A3_A_AveryTheKitty;
    tracersEvery = 1;
    displaynameshort = $STR_A3_tracer_dns;
};
class 250Rnd_762x51_Belt_Green: 250Rnd_762x51_Belt
{
    author = $STR_A3_A_AveryTheKitty;
    ammo = B_762x51_Tracer_Green;
    displayNameMFDFormat = "П";
};
class 250Rnd_762x51_Belt_T_Green: 250Rnd_762x51_Belt_Green
{
    author = $STR_A3_A_AveryTheKitty;
    tracersEvery = 1;
    displaynameshort = $STR_A3_tracer_dns;
};
class 250Rnd_762x51_Belt_Yellow: 250Rnd_762x51_Belt
{
    author = $STR_A3_A_AveryTheKitty;
    ammo = B_762x51_Tracer_Yellow;
};
class 250Rnd_762x51_Belt_T_Yellow: 250Rnd_762x51_Belt_Yellow
{
    author = $STR_A3_A_AveryTheKitty;
    tracersEvery = 1;
    displaynameshort = $STR_A3_tracer_dns;
};
class 1200Rnd_Gatling_30mm_Heli_Attack_03_F: 1000Rnd_Gatling_30mm_Plane_CAS_01_F
{
    author = $STR_A3_A_AveryTheKitty;
    scope = public;
    displayName = $STR_A3_CfgMagazines_250Rnd_30mm_HE_shells0;
    count = 1200;
    muzzleImpulseFactor[] =
    {
        0.25,    // X
        0.25     // Y
    };
};
class 1200Rnd_Gatling_30mm_Heli_Attack_03_Yellow_F: 1200Rnd_Gatling_30mm_Heli_Attack_03_F
{
    author = $STR_A3_A_AveryTheKitty;
    scope = public;
    displayName = "30 mm HE Tracer (Yellow) Shells";
    ammo = Gatling_30mm_HE_Plane_CAS_01_Yellow_F;
};
class 340Rnd_30mm_HE_shells: 250Rnd_30mm_HE_shells
{
    author = $STR_A3_A_AveryTheKitty;
    displayName = $STR_A3_CfgMagazines_250Rnd_30mm_HE_shells0;
    displayNameShort = $STR_A3_CfgMagazines_250Rnd_30mm_HE_shells_dns;
    ammo = B_30mm_HE;
    initSpeed = 1070;
    count = 340;
};
class 340Rnd_30mm_HE_shells_Tracer_Red: 340Rnd_30mm_HE_shells
{
    author = $STR_A3_A_AveryTheKitty;
    displayName = $STR_A3_CfgMagazines_250Rnd_30mm_HE_shells_Tracer_Red0;
    ammo = B_30mm_HE_Tracer_Red;
    count = 340;
};
class 340Rnd_30mm_HE_shells_Tracer_Green: 340Rnd_30mm_HE_shells
{
    author = $STR_A3_A_AveryTheKitty;
    displayName = $STR_A3_CfgMagazines_250Rnd_30mm_HE_shells_Tracer_Green0;
    ammo = B_30mm_HE_Tracer_Green;
    tracersEvery = 1;
    displayNameMFDFormat = "О";
};
class 340Rnd_30mm_HE_shells_Tracer_Yellow: 340Rnd_30mm_HE_shells
{
    author = $STR_A3_A_AveryTheKitty;
    displayName = "30 mm HE Tracer (Yellow) Shells";
    ammo = B_30mm_HE_Tracer_Yellow;
    tracersEvery = 1;
};
class 160Rnd_30mm_APFSDS_shells: 60Rnd_30mm_APFSDS_shells
{
    author = $STR_A3_A_AveryTheKitty;
    count = 160;
};
class 160Rnd_30mm_APFSDS_shells_Tracer_Red: 60Rnd_30mm_APFSDS_shells_Tracer_Red
{
    author = $STR_A3_A_AveryTheKitty;
    count = 160;
};
class 40Rnd_30mm_APFSDS_shells_Tracer_Red: 60Rnd_30mm_APFSDS_shells_Tracer_Red
{
    author = $STR_A3_A_AveryTheKitty;
    count = 40;
};
class 160Rnd_30mm_APFSDS_shells_Tracer_Green: 60Rnd_30mm_APFSDS_shells_Tracer_Green
{
    author = $STR_A3_A_AveryTheKitty;
    count = 160;
};
class 160Rnd_30mm_APFSDS_shells_Tracer_Yellow: 60Rnd_30mm_APFSDS_shells_Tracer_Yellow
{
    author = $STR_A3_A_AveryTheKitty;
    count = 160;
};
class 4rnd_Vorona_HEAT: Vorona_HEAT
{
    author = $STR_A3_A_AveryTheKitty;
    count = 4;
    displayNameMFDFormat = "К РАКЕТА";
};
class 4rnd_Vorona_HE: Vorona_HE
{
    author = $STR_A3_A_AveryTheKitty;
    count = 4;
    displayNameMFDFormat = "О РАКЕТА";
};
class magazine_Fighter04_Gun20mm_AA_x120: VehicleMagazine
{
    scope = public;
    displayName = $STR_A3_Gun_Fighter_20mm_x150_magazine_name;
    descriptionShort = $STR_A3_Gun_Fighter_20mm_x150_magazine_description;
    ammo = ammo_Fighter04_Gun20mm_AA;
    count = 120;
    initSpeed = 1036;
    maxLeadSpeed = 300;
    tracersEvery = 3;
    nameSound = cannon;
};
class magazine_Fighter04_Gun20mm_AA_x120_red: VehicleMagazine
{
    scope = public;
    displayName = $STR_A3_Gun_Fighter_20mm_x150_magazine_name;
    descriptionShort = $STR_A3_Gun_Fighter_20mm_x150_magazine_description;
    ammo = ammo_Fighter04_Gun20mm_AA_red;
    count = 120;
    initSpeed = 1036;
    maxLeadSpeed = 300;
    tracersEvery = 3;
    nameSound = cannon;
};
class magazine_Bomb_AGM_154_x1: VehicleMagazine
{
    scope = public;
    displayName = $STR_A3_A_Bomb_AGM_154_x1_magazine_name;
    descriptionShort = $STR_A3_A_Bomb_AGM_154_magazine_description;
    displayNameShort = $STR_A3_A_Bomb_AGM_154_magazine_shortName;
    ammo = ammo_Bomb_AGM_154;
    initSpeed = 0;
    maxLeadSpeed = 30;
    sound[] = {"",db0,1};
    reloadSound[] = {"",db-50,1};
    count = 1;
    nameSound = "";
    class mfdElements{}; // TODO
};

/* Mi-35 Krokodil Magazines*/
class Aegis_150Rnd_Autocannon_Heli_Attack_04_HE_F: VehicleMagazine
{
	author = $STR_A3_A_Grave;
	scope = public;
	displayName = "20 mm HE Shells";
	displayNameShort = "HE";
	count = 150;
	muzzleImpulseFactor[] = {0.5,0.5};
	ammo = "Aegis_Autocannon_HE_Heli_Attack_04_F";
	initSpeed = 1044;
	maxLeadSpeed = 30.555599;
	tracersEvery = 1;
	nameSound = "cannon";
};
class Aegis_150Rnd_Autocannon_Heli_Attack_04_HE_Yellow_F: Aegis_150Rnd_Autocannon_Heli_Attack_04_HE_F
{	
    author = $STR_A3_A_Grave;
	scope = public;
	displayName = "20 mm HE Tracer (Yellow) Shells";
	ammo = "Aegis_Autocannon_HE_Heli_Attack_04_Yellow_F";
};	
class Aegis_150Rnd_Autocannon_Heli_Attack_04_HE_Green_F: Aegis_150Rnd_Autocannon_Heli_Attack_04_HE_F
{
	author = $STR_A3_A_Grave;
	scope = public;
	displayName = "20 mm HE Tracer (Green) Shells";
	ammo = "Aegis_Autocannon_HE_Heli_Attack_04_Green_F";
};
class Aegis_150Rnd_Autocannon_Heli_Attack_04_HE_Red_F: Aegis_150Rnd_Autocannon_Heli_Attack_04_HE_F
{
	author = $STR_A3_A_Grave;
	scope = public;
	displayName = "20 mm HE Tracer (Red) Shells";
	ammo = "Aegis_Autocannon_HE_Heli_Attack_04_Red_F";
};
class Aegis_150Rnd_Autocannon_Heli_Attack_04_HE_White_F: Aegis_150Rnd_Autocannon_Heli_Attack_04_HE_F
{
	author = $STR_A3_A_Grave;
	scope = public;
	displayName = "20 mm HE Tracer (White) Shells";
	ammo = "Aegis_Autocannon_HE_Heli_Attack_04_White_F";
};
	
// AP Magazines
class Aegis_150Rnd_Autocannon_Heli_Attack_04_AP_F: VehicleMagazine
{
	author = $STR_A3_A_Grave;
	scope = public;
	displayName = "20 mm AP Shells";
	displayNameShort = "AP";
	count = 150;
	muzzleImpulseFactor[] = {0.1,0.80000001};
	ammo  = "Aegis_Autocannon_AP_Heli_Attack_04_F";
	initSpeed  = 1100;
	maxLeadSpeed = 30.555599;
	tracersEvery = 1;
	nameSound = "cannon";
};
class Aegis_150Rnd_Autocannon_Heli_Attack_04_AP_Yellow_F: Aegis_150Rnd_Autocannon_Heli_Attack_04_AP_F
{
	author = $STR_A3_A_Grave;
	scope = public;
	displayName = "20 mm AP Tracer (Yellow) Shells";
	ammo = "Aegis_Autocannon_AP_Heli_Attack_04_Yellow_F";
};	
class Aegis_150Rnd_Autocannon_Heli_Attack_04_AP_Green_F: Aegis_150Rnd_Autocannon_Heli_Attack_04_AP_F
{
	author = $STR_A3_A_Grave;
	scope = public;
	displayName = "20 mm AP Tracer (Green) Shells";
	ammo = "Aegis_Autocannon_AP_Heli_Attack_04_Green_F";
};
class Aegis_150Rnd_Autocannon_Heli_Attack_04_AP_Red_F: Aegis_150Rnd_Autocannon_Heli_Attack_04_AP_F
{
	author = $STR_A3_A_Grave;
	scope = public;
	displayName = "20 mm AP Tracer (Red) Shells";
	ammo = "Aegis_Autocannon_AP_Heli_Attack_04_Red_F";
};
class Aegis_150Rnd_Autocannon_Heli_Attack_04_AP_White_F: Aegis_150Rnd_Autocannon_Heli_Attack_04_AP_F
{
	author = $STR_A3_A_Grave;
	scope = public;
	displayName = "20 mm AP Tracer (White) Shells";
	ammo = "Aegis_Autocannon_AP_Heli_Attack_04_White_F";
};

/* BMP-M 57mm Magazines*/
class Aegis_340Rnd_57mm_GPR_shells: VehicleMagazine
{
	author = $STR_A3_A_Lukinator96;
	scope = public;
	displayName = "57mm HE shells";
	displayNameShort = "HE";
	ammo = "Aegis_B_57mm_GPR";
	count = 340;
	initSpeed = 850;
	maxLeadSpeed = 30.5556;
	tracersEvery = 5;
	nameSound = "cannon";
	muzzleImpulseFactor[] = {0.1,0.8};
};
class Aegis_340Rnd_57mm_GPR_shells_Tracer: Aegis_340Rnd_57mm_GPR_shells
{
	author = $STR_A3_A_Lukinator96;
	scope = public;
	displayName = "57mm HE Tracer shells";
	displayNameShort = "HE";
	ammo = "B_57mm_spg";
	count = 60;
	initSpeed = 850;
	maxLeadSpeed = 30.5556;
	tracersEvery = 1;
	nameSound = "cannon";
	muzzleImpulseFactor[] = {0.1,0.8};
};
class Aegis_160Rnd_57mm_APFSDS_shells: Aegis_340Rnd_57mm_GPR_shells
{
	author = $STR_A3_A_Lukinator96;
	displayName = "57mm APFSDS shells";
	displayNameShort = "APFSDS";
	ammo = "Aegis_B_57mm_APFSDS";
	tracersEvery = 1;
	initSpeed=1650;
	count=160;
	muzzleImpulseFactor[]={0.5,2};
};

/* KORD HMG 12.7 mm*/
class Aegis_150rnd_127x108_KORD_Green_F: VehicleMagazine
{
    author = $STR_A3_A_Ravenholme;
	scope = 2;
	count = 150;
	ammo = "Aegis_B_127x108_Ball_KORD_Green_F";
	initSpeed = 860;
	maxLeadSpeed = 36.1111;
	tracersEvery = 3;
    lastRoundsTracer = 4;
	nameSound = "mgun";
	displayName = "$STR_A3_CfgMagazines_450Rnd_127x108_Ball0";
	muzzleImpulseFactor[] = {0.05,0.05};
};
class Aegis_50rnd_127x108_KORD_Green_F: Aegis_150rnd_127x108_KORD_Green_F
{
    author = $STR_A3_A_Ravenholme;
    count = 50;
};
class Aegis_150rnd_127x108_KORD_Yellow_F: Aegis_150rnd_127x108_KORD_Green_F
{
    author = $STR_A3_A_Ravenholme;
    ammo = "Aegis_B_127x108_Ball_KORD_Yellow_F";
};
class Aegis_50rnd_127x108_KORD_Yellow_F: Aegis_150rnd_127x108_KORD_Yellow_F
{
    author = $STR_A3_A_Ravenholme;
    count = 50;
};
/* 4rnd DAGR */
class Aegis_4Rnd_PG_missiles: VehicleMagazine
{
	author = "$STR_A3_Bohemia_Interactive";
	scope = 2;
	displayName = "$STR_A3_CfgMagazines_24Rnd_PG_missiles0";
    displayNameShort = "$STR_A3_CfgMagazines_24Rnd_PG_missiles_dns";
	descriptionShort = "$STR_A3_cfgMagazine_DAGR_tooltip";
	count = 4;
	ammo = "Aegis_M_PG_APKWS";
	initSpeed = 0;
	maxLeadSpeed = 50;
	nameSound = "missiles";
};