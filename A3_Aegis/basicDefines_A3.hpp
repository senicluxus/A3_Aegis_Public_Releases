// boolean
#define true 1
#define false 0

// scope
#define private 0
#define protected 1
#define public 2

// modelSides / side
#define TEast 0
#define TWest 1
#define TGuerrila 2
#define TCivilian 3
#define TSideUnknown 4
#define TEnemy 5
#define TFriendly 6
#define TLogic 7

// type
#define VSoft 0
#define VArmor 1
#define VAir 2

#define CanSeeRadar 1
#define CanSeeEye 2
#define CanSeeOptics 4
#define CanSeeEar 8
#define CanSeeCompass 16
#define CanSeeRadarC CanSeeRadar + CanSeeCompass
#define CanSeeAll 31
#define CanSeePeripheral 32

//radarType
#define NoRadar 0
#define TacticalDisplay 1
#define VehicleRadar 2
#define AirRadar 4
#define CompassTurretDisplay 8

//ballistics computer
#define BallisticsNone 0
#define BallisticsAutoZero 1
#define BallisticsManualZero 2
#define BallisticsTargetLead 4
#define BallisticsCCIP 8
#define BallisticsFCS 16

//lock acquiring
#define manualLA 0
#define automaticLA 1

//lockable target type
#define lockGroundTT 0
#define lockAirGroundTT 1
#define lockAirTT 2
#define lockGround 0
#define lockAirGround 1
#define lockAir 2

//missile lock type
#define fireAndForgetLT 0
#define keepLockedLT 1
#define manualLT 2

// AI ammo usage
#define NoneAU 0
#define LightAU 1
#define MarkingAU 2
#define ConcealmentAU 4
#define CounterMeasuresAU 8
#define MineAU 16
#define UnderwaterAU 32
#define OffensiveInfAU 64
#define OffensiveVehAU 128
#define OffensiveAirAU 256
#define OffensiveArmourAU 512

#define SPEED_STATIC 1e10

#define LockNo 0
#define LockCadet 1
#define LockYes 2
#define LockLaser 4

#define WeaponNoSlot 0
#define WeaponSlotPrimary 1
#define WeaponSlotSecondary 4
#define WeaponSlotHandGun 2
#define WeaponSlotHandGunItem 16
#define WeaponSlotItem 256
#define WeaponSlotBinocular 4096
#define WeaponHardMounted 65536

#define NEVER_DESTROY 1000

#define StabilizedInAxesNone 0
#define StabilizedInAxisX 1
#define StabilizedInAxisY 2
#define StabilizedInAxesBoth 3
#define StabilizedInAxesXYZ 4

#define CM_none 0
#define CM_Lock_Visual 1
#define CM_Lock_IR 2
#define CM_Lock_Laser 4
#define CM_Lock_Radar 8
#define CM_Missile 16

#define CM_No_Missiles 0
#define CM_Radar_Missiles 8
#define CM_All_Missiles 16

#define CMImmunity_GOOD 0.9
#define CMImmunity_MIDDLE 0.65
#define CMImmunity_BAD 0.5

#define mag_2(a) a,a
#define mag_3(a) a,a,a
#define mag_4(a) a,a,a,a
#define mag_5(a) a,a,a,a,a
#define mag_6(a) a,a,a,a,a,a
#define mag_7(a) a,a,a,a,a,a,a
#define mag_8(a) a,a,a,a,a,a,a,a
#define mag_9(a) a,a,a,a,a,a,a,a,a
#define mag_10(a) a,a,a,a,a,a,a,a,a,a
#define mag_11(a) a,a,a,a,a,a,a,a,a,a,a
#define mag_12(a) a,a,a,a,a,a,a,a,a,a,a,a
#define mag_13(a) a,a,a,a,a,a,a,a,a,a,a,a,a
#define mag_14(a) a,a,a,a,a,a,a,a,a,a,a,a,a,a
#define mag_15(a) a,a,a,a,a,a,a,a,a,a,a,a,a,a,a
#define mag_16(a) a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a
#define mag_17(a) a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a
#define mag_18(a) a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a
#define mag_19(a) a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a
#define mag_20(a) a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a

// items in bags
#define mag_xx(mag,num) \
    class _xx_##mag \
    { \
        magazine = ##mag##; \
        count = ##num##; \
    }

#define weap_xx(weap,num) \
    class _xx_##weap \
    { \
        weapon = ##weap##; \
        count = ##num##; \
    }

#define item_xx(item,num) \
    class _xx_##item \
    { \
        name = ##item##; \
        count = ##num##; \
    }

#define bag_xx(bag,num) \
    class _xx_##bag \
    { \
        backpack = ##bag##; \
        count = ##num##; \
    }

// slotType
#define DEFAULT_SLOT 0
#define MUZZLE_SLOT 101
#define OPTICS_SLOT 201
#define FLASHLIGHT_SLOT 301
#define NVG_SLOT 602
#define SCUBA_SLOT 604
#define GOGGLE_SLOT 603
#define HEADGEAR_SLOT 605
#define UNIFORM_SLOT 801
#define HMD_SLOT 616
#define BINOCULAR_SLOT 617
#define MEDIKIT_SLOT 619
#define RADIO_SLOT 611
#define VEST_SLOT 701
#define BACKPACK_SLOT 901

#define HeadArmourCoef 2.5
#define BodyArmourCoef 10
#define HandArmourCoef 5
#define LegArmourCoef 5

// weapon group definitions
#define WEAPONGROUP_CANNONS		1
#define WEAPONGROUP_MGUNS		2
#define WEAPONGROUP_ROCKETS		4
#define WEAPONGROUP_AAMISSILES	8
#define WEAPONGROUP_ATMISSILES	16
#define WEAPONGROUP_MISSILES	32
#define WEAPONGROUP_BOMBS		64
#define WEAPONGROUP_SPECIAL		128

#define VIEW_DEFAULT 0
#define VIEW_LOD 0
#define VIEW_GUNNER 1000
#define VIEW_PILOT 1100
#define VIEW_CARGO 1200

#define DefaultManWeapons \
Throw, \
Put \

#define DefaultManLinkedItems \
ItemMap, \
ItemCompass, \
ItemWatch, \
ItemRadio \

#define DefaultManLeaderLinkedItems \
ItemGPS, \
ItemMap, \
ItemCompass, \
ItemWatch, \
ItemRadio \

#define DefaultManRangemasterLinkedItems \
ItemSmartPhone, \
ItemWatch \

#define DefaultManGuerillaLinkedItems \
ItemMap, \
ItemCompass, \
ItemWatch, \
ItemRadio \

#define DefaultManAidWorkerLinkedItems \
ItemSmartPhone, \
ItemMap, \
ItemWatch, \
ItemRadio \

#define DefaultManCbrnLinkedItems \
ItemMap, \
ItemCompass, \
ChemicalDetector_01_watch_F, \
ItemRadio \

#define DefaultManLooterLinkedItems \
ItemSmartPhone, \
ItemMap, \
ItemWatch, \
ItemRadio \

#define DefaultManIonLinkedItems \
ItemSmartPhone, \
ItemMap, \
ItemCompass, \
ItemWatch, \
ItemRadio \

#define DefaultManPoliceLinkedItems \
ItemSmartPhone, \
ItemMap, \
ItemWatch, \
ItemRadio \

// thermal modes
#define TiWHot 0
#define TiBHot 1
#define TiGWHot 2
#define TiGBHot 3
#define TiRWHot 4
#define TiRBHot 5
#define TiSWHot 6
#define TiSBHot 7



/* Weapons and accessories */

// opticType / requiredOpticType
#define MEDIUM_OPTIC 1
#define FAR_OPTIC 2

// reloadTime
#define RPM_SEMI 0.2
#define RPM_SEMI_SLOW 0.25
#define RPM_SEMI_PISTOL 0.13
#define RPM_PUMP_ACTION 0.8
#define RPM_BOLT_ACTION 1.2
#define RPM_300 0.2
#define RPM_350 0.17
#define RPM_450 0.133333
#define RPM_600 0.1
#define RPM_625 0.096
#define RPM_700 0.085
#define RPM_705 0.0851
#define RPM_710 0.084
#define RPM_890 0.067
#define RPM_910 0.066
#define RPM_950 0.063
#define RPM_1000 0.06

#define INITSPEED_CARBINE initSpeed = -0.91
#define INITSPEED_RIFLE initSpeed = -1.00
#define INITSPEED_AR initSpeed = -1.10
#define INITSPEED_MR initSpeed = -1.15


#define DEPRECATED_CLASS(old,new) \
    class old: new \
    { \
        scope = 1; \
        scopeCurator = 0; \
    }



/* ACE definitions */

// ACE_barrelTwist 
#define ACE_TWIST_NONE 0
#define ACE_TWIST_LEFT -1
#define ACE_TWIST_RIGHT 1