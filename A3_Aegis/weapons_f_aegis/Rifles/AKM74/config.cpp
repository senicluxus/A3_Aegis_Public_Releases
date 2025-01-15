#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
#include "cfgVehicles.hpp"
#include "\A3_Aegis\Weapons_F_Aegis\ASDG.hpp"
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class SlotInfo;
class MuzzleSlot_58;
class MuzzleSlot_545R;
class MuzzleSlot_762R;
class CowsSlot_Rail;
class CowsSlot_Dovetail;
class PointerSlot_Rail;
class UnderBarrelSlot_rail;
class WeaponSlotsInfo;
class CfgWeapons
{
	class UGL_F;
    class arifle_AKM_F;
    class Aegis_arifle_AKM74_F: arifle_AKM_F
    {
        author = $STR_A3_A_POLPOX_Toadie2k;
        descriptionShort = $STR_A3_A_CfgWeapons_arifle_AKM74_base_F1;
        baseWeapon = Aegis_arifle_AKM74_F;
        scope = public;
        displayName = $STR_A3_A_CfgWeapons_arifle_AKM74_F0;
		picture = "\A3_Aegis\Weapons_F_Aegis\Rifles\AKM74\Data\UI\icon_Aegis_arifle_AKM74_F.paa";
		hiddenSelections[] = {
			"camo1","camo2","camo4","camo5"
		};
		hiddenSelectionsTextures[] = {
			"A3_Aegis\weapons_f_Aegis\Rifles\AKM74\data\ak74_base_co.paa",
			"A3_Aegis\weapons_f_Aegis\Rifles\AKM74\data\ak74_adds_co.paa",
			"a3_aegis\weapons_f_aegis\shotguns\mp153\data\mp153_co.paa",
			"A3_Aegis\weapons_f_Aegis\Rifles\AKM74\data\ak_mount_co.paa"
		};
		handAnim[] = {
			OFP2_ManSkeleton,
			"\A3_Aegis\Weapons_F_Aegis\Rifles\AKM74\Data\Anim\ak74m.rtm"
		};
		recoil = "recoil_aks";
		inertia = 0.5;
		initSpeed = 880;
		model =  "A3_Aegis\weapons_f_Aegis\Rifles\AKM74\ak74m.p3d";
		reloadAction = "GestureReloadAKM74";

		magazines[]=
		{
			30Rnd_545x39_Black_Mag_Yellow_F,
			30Rnd_545x39_Black_Mag_F,
			30Rnd_545x39_Black_Mag_Tracer_Yellow_F,
            30Rnd_545x39_Black_Mag_Tracer_F,
			30Rnd_545x39_Mag_F,
			30Rnd_545x39_Mag_Green_F,
			30Rnd_545x39_Mag_Tracer_F,
			30Rnd_545x39_Mag_Tracer_Green_F
		};
		magazineWell[]=
		{
			AK_545x39
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: CowsSlot_Rail
			{
				iconPosition[] = {0.55,0.28};
				iconScale = 0.2;
			};
			class MuzzleSlot: asdg_MuzzleSlot_545R
			{  
				iconPosition[] = {-0.02,0.41};
				iconScale = 0.2;
			};
			class UnderBarrelSlot{};
			class PointerSlot: asdg_PistolUnderRail
			{
				iconPosition[] = {0.2,0.44};
				iconScale = 0.2;
			};
			mass = 100;
		};
        class Library
		{
			libTextDesc = $STR_A3_A_CfgWeapons_arifle_AKM74_base_F_Library0;
		};

		drySound[] = {"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK74\AK74_dry",0.17782794,1,10};
		reloadMagazineSound[] = {"A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Rifles\Rifle_AK74\AK74_reload",1.0,1,10};
		changeFiremodeSound[] = {"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK74\AK74_firemode",0.17782794,1,5};
		modes[]=
		{
			"Single",
			"FullAuto",
			"single_medium_optics1",
			"single_medium_optics2",
			"fullauto_medium"
		};
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"AK74_Shot_SoundSet","AK74_Tail_SoundSet","AK74_InteriorTail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[] = {"AK12_silencerShot_SoundSet","AK12_silencerTail_SoundSet","AK12_silencerInteriorTail_SoundSet"};
			};
			reloadTime = RPM_650;
			dispersion=0.00075;
			minRange=2;
			minRangeProbab=0.5;
			midRange=200;
			midRangeProbab=0.69999999;
			maxRange=400;
			maxRangeProbab=0.3;
		};
		class FullAuto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"AK74_Shot_SoundSet","AK74_Tail_SoundSet","AK74_InteriorTail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[] = {"AK12_silencerShot_SoundSet","AK12_silencerTail_SoundSet","AK12_silencerInteriorTail_SoundSet"};
			};
			reloadTime = RPM_650;
			dispersion=0.00075;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.050000001;
		};
		class FullAuto_medium: FullAuto
		{
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"AK74_Shot_SoundSet","AK74_Tail_SoundSet","AK74_InteriorTail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[] = {"AK12_silencerShot_SoundSet","AK12_silencerTail_SoundSet","AK12_silencerInteriorTail_SoundSet"};
			};
			showToPlayer=false;
			burst=3;
			minRange=2;
			minRangeProbab=0.5;
			midRange=100;
			midRangeProbab=0.69999999;
			maxRange=150;
			maxRangeProbab=0.050000001;
			aiRateOfFire=2;
		};
		class single_medium_optics1: Single
		{
			requiredOpticType=1;
			showToPlayer=0;
			minRange=5;
			minRangeProbab=0.2;
			midRange=350;
			midRangeProbab=0.69999999;
			maxRange=525;
			maxRangeProbab=0.30000001;
			aiRateOfFire=5;
			aiRateOfFireDistance=525;
		};
		class single_medium_optics2: single_medium_optics1
		{
			requiredOpticType=2;
			minRange=100;
			minRangeProbab=0.1;
			midRange=500;
			midRangeProbab=0.69999999;
			maxRange=750;
			maxRangeProbab=0.050000001;
			aiRateOfFire=6;
			aiRateOfFireDistance=750;
		};
    };
	class Aegis_arifle_AKM74_GL_F: Aegis_arifle_AKM74_F
	{
		author = $STR_A3_A_POLPOX_Toadie2k;
		displayName = $STR_A3_A_CfgWeapons_arifle_AKM74_GL_F0;
		scope = public;
		model =  "A3_Aegis\weapons_f_Aegis\Rifles\AKM74\ak74m_gl.p3d";
		picture = "\A3_Aegis\Weapons_F_Aegis\Rifles\AKM74\Data\UI\icon_Aegis_arifle_AK74_GL_F.paa";
		baseWeapon = "Aegis_arifle_AKM74_GL_F";
		handAnim[] = {
			OFP2_ManSkeleton,
			"\A3_Aegis\Weapons_F_Aegis\Rifles\AKM74\Data\Anim\ak74m_gl.rtm"
		};
		hiddenSelections[] = {
			"camo1","camo2","camo3","camo4","camo5"
		};
		hiddenSelectionsTextures[] = {
			"A3_Aegis\weapons_f_Aegis\Rifles\AKM74\data\ak74_base_co.paa",
			"A3_Aegis\weapons_f_Aegis\Rifles\AKM74\data\ak74_adds_co.paa",
			"A3_Aegis\weapons_f_Aegis\Rifles\AKM74\data\gp30_co.paa",
			"a3_aegis\weapons_f_aegis\shotguns\mp153\data\mp153_co.paa",
			"A3_Aegis\weapons_f_Aegis\Rifles\AKM74\data\ak_mount_co.paa"
		};
		muzzles[] = {"this","EGLM"};
		class EGLM: UGL_F
		{
			displayName = "$STR_A3_CfgWeapons_arifle_AK12_GL_base_F_EGLM0"; //GP-25
			useModelOptics = 0;
			useExternalOptic = 0;
			cameraDir = "gl_look";
			discreteDistance[] = {50,100,150,200,250,300,350,400};
			discreteDistanceCameraPoint[] = {"gl_eye_50m","gl_eye_100m","gl_eye_150m","gl_eye_200m","gl_eye_250m","gl_eye_300m","gl_eye_350m","gl_eye_400m"};
			discreteDistanceInitIndex = 1;
			reloadAction = "GestureReloadMXUGL";
			magazineReloadSwitchPhase = 0.36;
			reloadMagazineSound[] = {"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK12\AK12_UGL_reload",1,1,10};
		};
	};

	class arifle_AKM74_polymer: Aegis_arifle_AKM74_F
	{
		author = "Grave";
		baseWeapon = arifle_AKM74_polymer;
		picture = "\A3_Aegis\Weapons_F_Aegis\Rifles\AKM74\Data\UI\icon_arifle_AK74_polymer_F_ca.paa";
		magazines[]=
		{
			30Rnd_545x39_Black_Mag_F,
			30Rnd_545x39_Black_Mag_Tracer_F
		};
		scope = protected;
		hiddenSelections[] = {"camo_1","camo_2","camo_3"};
		displayName = $STR_A3_A_CfgWeapons_arifle_AKM74_F0;
		hiddenSelectionsTextures[] = {
			"A3_Aegis\weapons_f_Aegis\Rifles\AKM74\Data\arifle_AK74_01_black_CO.paa",
			"A3_Aegis\weapons_f_Aegis\Rifles\AKM74\Data\arifle_AK74_02_black_CO.paa",
			"A3\Weapons_F_Exp\Rifles\AKM\Data\akm_steel_mag_co.paa"
		};
		hiddenSelectionsMaterials[] = {
			"a3\weapons_f_exp\Rifles\AKM\Data\akm.rvmat",
			"a3\weapons_f_exp\Rifles\AKM\Data\akm_wood.rvmat",
			"A3\Weapons_F_Exp\Rifles\AKM\Data\akm_steel_mag.rvmat"
		};

		model =  "a3\weapons_f_exp\Rifles\AKM\AKM_F.p3d";
		handAnim[] = {
			OFP2_ManSkeleton,
			"a3\weapons_f_exp\Rifles\AKM\Data\Anim\AKM.rtm"
		};
	};
	class arifle_AKM74_polymer_alt: arifle_AKM74_polymer
	{
		author = "Grave";
		baseWeapon = arifle_AKM74_polymer_alt;
		picture = "\A3_Aegis\Weapons_F_Aegis\Rifles\AKM74\Data\UI\icon_arifle_AK74_polymer_alt_F_ca.paa";
		displayName = $STR_A3_A_CfgWeapons_arifle_AKM74_plum_F0;
		hiddenSelectionsTextures[] = {
			"A3_Aegis\weapons_f_Aegis\Rifles\AKM74\Data\arifle_AK74_01_plum_CO.paa",
			"A3_Aegis\weapons_f_Aegis\Rifles\AKM74\Data\arifle_AK74_02_plum_CO.paa",
			"A3\Weapons_F_Exp\Rifles\AKM\Data\akm_steel_mag_co.paa"
		};
	};

	class Aegis_arifle_AKM74_sand_F: Aegis_arifle_AKM74_F
	{
		author = $STR_A3_A_POLPOX_Toadie2k;
		baseWeapon = Aegis_arifle_AKM74_sand;
		magazines[]=
		{
            30Rnd_545x39_Mag_Sand_F,
			30Rnd_545x39_Mag_Sand_Green_F,
            30Rnd_545x39_Mag_Tracer_Sand_F,
			30Rnd_545x39_Mag_Tracer_Sand_Green_F
		};
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_arifle_AKM74_snd_F0;
		picture = "\A3_Aegis\Weapons_F_Aegis\Rifles\AKM74\Data\UI\icon_Aegis_arifle_AKM74_sand_F.paa";
		hiddenSelectionsTextures[] = {
			"A3_Aegis\weapons_f_Aegis\Rifles\AKM74\data\ak74_base_co.paa",
			"A3_Aegis\weapons_f_Aegis\Rifles\AKM74\data\ak74_adds_sand_co.paa",
			"a3_aegis\weapons_f_aegis\shotguns\mp153\data\mp153_co.paa",
			"A3_Aegis\weapons_f_Aegis\Rifles\AKM74\data\ak_mount_co.paa"
		};
	};
	class Aegis_arifle_AKM74_sand_GL_F: Aegis_arifle_AKM74_GL_F
	{
		author = $STR_A3_A_POLPOX_Toadie2k$STR_A3_A_POLPOX_Toadie2k;
		baseWeapon = Aegis_arifle_AKM74_sand_GL_F;
		picture = "\A3_Aegis\Weapons_F_Aegis\Rifles\AKM74\Data\UI\icon_Aegis_arifle_AKM74_sand_GL_F.paa";
		magazines[]=
		{
            30Rnd_545x39_Mag_Sand_F,
			30Rnd_545x39_Mag_Sand_Green_F,
            30Rnd_545x39_Mag_Tracer_Sand_F,
			30Rnd_545x39_Mag_Tracer_Sand_Green_F
		};
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_arifle_AKM74_GL_snd_F0;	// todo localize
		hiddenSelectionsTextures[] = {
			"A3_Aegis\weapons_f_Aegis\Rifles\AKM74\data\ak74_base_co.paa",
			"A3_Aegis\weapons_f_Aegis\Rifles\AKM74\data\ak74_adds_sand_co.paa",
			"A3_Aegis\weapons_f_Aegis\Rifles\AKM74\data\gp30_co.paa",
			"a3_aegis\weapons_f_aegis\shotguns\mp153\data\mp153_co.paa",
			"A3_Aegis\weapons_f_Aegis\Rifles\AKM74\data\ak_mount_co.paa"
		};
	};
	
	class Aegis_arifle_AKM74_olive_F: Aegis_arifle_AKM74_F
	{
		author = $STR_A3_A_POLPOX_Toadie2k;
		baseWeapon = Aegis_arifle_AKM74_olive_F;
		scope = public;
		picture = "\A3_Aegis\Weapons_F_Aegis\Rifles\AKM74\Data\UI\icon_Aegis_arifle_AKM74_olive_F.paa";
		magazines[]=
		{
            30Rnd_545x39_Mag_Olive_F,
            30Rnd_545x39_Mag_Tracer_Olive_F
		};
		displayName = $STR_A3_A_CfgWeapons_arifle_AKM74_grn_F0;	// todo localize
		hiddenSelectionsTextures[] = {
			"A3_Aegis\weapons_f_Aegis\Rifles\AKM74\data\ak74_base_co.paa",
			"A3_Aegis\weapons_f_Aegis\Rifles\AKM74\data\ak74_adds_olive_co.paa",
			"a3_aegis\weapons_f_aegis\shotguns\mp153\data\mp153_co.paa",
			"A3_Aegis\weapons_f_Aegis\Rifles\AKM74\data\ak_mount_co.paa"
		};
	};
	class Aegis_arifle_AKM74_olive_GL_F: Aegis_arifle_AKM74_GL_F
	{
		author = $STR_A3_A_POLPOX_Toadie2k;
		baseWeapon = Aegis_arifle_AKM74_olive_GL_F;
		scope = public;
		picture = "\A3_Aegis\Weapons_F_Aegis\Rifles\AKM74\Data\UI\icon_Aegis_arifle_AKM74_olive_GL_F.paa";
		magazines[]=
		{
            30Rnd_545x39_Mag_Olive_F,
            30Rnd_545x39_Mag_Tracer_Olive_F
		};
		displayName = $STR_A3_A_CfgWeapons_arifle_AKM74_GL_grn_F0;	// todo localize
		hiddenSelectionsTextures[] = {
			"A3_Aegis\weapons_f_Aegis\Rifles\AKM74\data\ak74_base_co.paa",
			"A3_Aegis\weapons_f_Aegis\Rifles\AKM74\data\ak74_adds_olive_co.paa",
			"A3_Aegis\weapons_f_Aegis\Rifles\AKM74\data\gp30_co.paa",
			"a3_aegis\weapons_f_aegis\shotguns\mp153\data\mp153_co.paa",
			"A3_Aegis\weapons_f_Aegis\Rifles\AKM74\data\ak_mount_co.paa"
		};
	};

	
	class Aegis_arifle_AK74_F: Aegis_arifle_AKM74_F
	{
		displayName = $STR_A3_A_CfgWeapons_arifle_AK74_F0;
		baseWeapon = "Aegis_arifle_AK74_F";
        author = $STR_A3_A_POLPOX_Toadie2k;
		picture = "\A3_Aegis\Weapons_F_Aegis\Rifles\AKM74\Data\UI\icon_Aegis_arifle_AK74_F.paa";
		model = "A3_Aegis\weapons_f_Aegis\Rifles\AKM74\ak74.p3d";
		magazines[]=
		{
           	30Rnd_545x39_Mag_F,
			30Rnd_545x39_Mag_Green_F,
			30Rnd_545x39_Mag_Tracer_F,
			30Rnd_545x39_Mag_Tracer_Green_F
		};
		hiddenSelections[] = {
			"camo1","camo4","camo5"
		};
		hiddenSelectionsTextures[] = {
			"A3_Aegis\weapons_f_Aegis\Rifles\AKM74\data\ak74_base_co.paa",
			"a3_aegis\weapons_f_aegis\shotguns\mp153\data\mp153_co.paa",
			"A3_Aegis\weapons_f_Aegis\Rifles\AKM74\data\ak_mount_co.paa"
		};
	};

	class Aegis_arifle_AK74_GL_F: Aegis_arifle_AKM74_GL_F
	{
		displayName = $STR_A3_A_CfgWeapons_arifle_AK74_GL_F0;
		baseWeapon = "Aegis_arifle_AK74_GL_F";
        author = $STR_A3_A_POLPOX_Toadie2k;
		picture = "\A3_Aegis\Weapons_F_Aegis\Rifles\AKM74\Data\UI\icon_Aegis_arifle_AK74_GL_F.paa";
		model =  "A3_Aegis\weapons_f_Aegis\Rifles\AKM74\ak74_gl.p3d";
		magazines[]=
		{
           	30Rnd_545x39_Mag_F,
			30Rnd_545x39_Mag_Green_F,
			30Rnd_545x39_Mag_Tracer_F,
			30Rnd_545x39_Mag_Tracer_Green_F
		};
		hiddenSelections[] = {
			"camo1","camo3","camo4","camo5"
		};
		hiddenSelectionsTextures[] = {
			"A3_Aegis\weapons_f_Aegis\Rifles\AKM74\data\ak74_base_co.paa",
			"A3_Aegis\weapons_f_Aegis\Rifles\AKM74\data\gp30_co.paa",
			"a3_aegis\weapons_f_aegis\shotguns\mp153\data\mp153_co.paa",
			"A3_Aegis\weapons_f_Aegis\Rifles\AKM74\data\ak_mount_co.paa"
		};
	};

	class Aegis_arifle_AK74_oak_F: Aegis_arifle_AK74_F
	{
		displayName = $STR_A3_A_CfgWeapons_arifle_AK74_oak_F0;
		baseWeapon = "Aegis_arifle_AK74_oak_F";
        author = $STR_A3_A_POLPOX_Toadie2k;
		picture = "\A3_Aegis\Weapons_F_Aegis\Rifles\AKM74\Data\UI\icon_Aegis_arifle_AK74_oak_F.paa";
		hiddenSelections[] = {
			"camo1","camo4","camo5","camoWood"
		};
		hiddenSelectionsTextures[] = {
			"A3_Aegis\weapons_f_Aegis\Rifles\AKM74\data\ak74_base_co.paa",
			"a3_aegis\weapons_f_aegis\shotguns\mp153\data\mp153_co.paa",
			"A3_Aegis\weapons_f_Aegis\Rifles\AKM74\data\ak_mount_co.paa",
			"A3_Aegis\weapons_f_Aegis\Rifles\AKM74\data\ak74_base_oak_co.paa"
		};
		hiddenSelectionsMaterials[] = {
			"",
			"",
			"",
			"A3_Aegis\weapons_f_aegis\Rifles\AKM74\data\ak74_base_oak_wood.rvmat"
		};
	};

	class Aegis_arifle_AK74_GL_oak_F: Aegis_arifle_AK74_GL_F
	{
		displayName = $STR_A3_A_CfgWeapons_arifle_AK74_GL_oak_F0;
		baseWeapon = "Aegis_arifle_AK74_GL_oak_F";
		picture = "\A3_Aegis\Weapons_F_Aegis\Rifles\AKM74\Data\UI\icon_Aegis_arifle_AK74_GL_oak_F.paa";
        author = $STR_A3_A_POLPOX_Toadie2k;
		hiddenSelections[] = {
			"camo1","camo3","camo4","camo5","camoWood"
		};
		hiddenSelectionsTextures[] = {
			"A3_Aegis\weapons_f_Aegis\Rifles\AKM74\data\ak74_base_co.paa",
			"A3_Aegis\weapons_f_Aegis\Rifles\AKM74\data\gp30_co.paa",
			"a3_aegis\weapons_f_aegis\shotguns\mp153\data\mp153_co.paa",
			"A3_Aegis\weapons_f_Aegis\Rifles\AKM74\data\ak_mount_co.paa",
			"A3_Aegis\weapons_f_Aegis\Rifles\AKM74\data\ak74_base_oak_co.paa"
		};
		hiddenSelectionsMaterials[] = {
			"",
			"",
			"",
			"",
			"A3_Aegis\weapons_f_aegis\Rifles\AKM74\data\ak74_base_oak_wood.rvmat"
		};
	};

	class Aegis_arifle_AKS74_F: Aegis_arifle_AK74_F
	{
		model =  "A3_Aegis\weapons_f_Aegis\Rifles\AKM74\aks74.p3d";
		displayName = $STR_A3_A_CfgWeapons_arifle_AKS74_F0;
		baseWeapon = "Aegis_arifle_AKS74_F";
        author = $STR_A3_A_POLPOX_Toadie2k;
		picture = "\A3_Aegis\Weapons_F_Aegis\Rifles\AKM74\Data\UI\icon_Aegis_arifle_AKS74_F.paa";
		magazines[]=
		{
           	30Rnd_545x39_Mag_F,
			30Rnd_545x39_Mag_Green_F,
			30Rnd_545x39_Mag_Tracer_F,
			30Rnd_545x39_Mag_Tracer_Green_F
		};
		hiddenSelections[] = {
			"camo1","camo2","camo4","camo5"
		};
		hiddenSelectionsTextures[] = {
			"A3_Aegis\weapons_f_Aegis\Rifles\AKM74\data\ak74_base_co.paa",
			"A3_Aegis\weapons_f_Aegis\Rifles\AKM74\data\ak74_adds_co.paa",
			"a3_aegis\weapons_f_aegis\shotguns\mp153\data\mp153_co.paa",
			"A3_Aegis\weapons_f_Aegis\Rifles\AKM74\data\ak_mount_co.paa"
		};
	};
	class Aegis_arifle_AKS74_oak_F: Aegis_arifle_AKS74_F
	{
		displayName = $STR_A3_A_CfgWeapons_arifle_AKS74_oak_F0;
		baseWeapon = "Aegis_arifle_AKS74_oak_F";
        author = $STR_A3_A_POLPOX_Toadie2k;
		picture = "\A3_Aegis\Weapons_F_Aegis\Rifles\AKM74\Data\UI\icon_Aegis_arifle_AKS74_oak_F.paa";
		hiddenSelections[] = {
			"camo1","camo2","camo4","camo5","camoWood"
		};
		hiddenSelectionsTextures[] = {
			"A3_Aegis\weapons_f_Aegis\Rifles\AKM74\data\ak74_base_oak_co.paa",
			"A3_Aegis\weapons_f_Aegis\Rifles\AKM74\data\ak74_adds_co.paa",
			"a3_aegis\weapons_f_aegis\shotguns\mp153\data\mp153_co.paa",
			"A3_Aegis\weapons_f_Aegis\Rifles\AKM74\data\ak_mount_co.paa"
		};
		hiddenSelectionsMaterials[] = {
			"",
			"",
			"",
			"",
			"A3_Aegis\weapons_f_aegis\Rifles\AKM74\data\ak74_base_wood.rvmat"
		};
	};
	
	class Aegis_arifle_AK103_F: Aegis_arifle_AKM74_F
	{
		displayName = $STR_A3_A_CfgWeapons_arifle_AK103_F0;
		baseWeapon = "Aegis_arifle_AK103_F";
        author = $STR_A3_A_POLPOX_Toadie2k;
		picture = "\A3_Aegis\Weapons_F_Aegis\Rifles\AKM74\Data\UI\icon_Aegis_arifle_AKM74_F.paa";
		magazines[] = 
		{
			30Rnd_762x39_polymer_Black_Mag_F,
		   	30Rnd_762x39_polymer_Black_Mag_Green_F,
		   	30Rnd_762x39_polymer_Black_Mag_Tracer_F,
		   	30Rnd_762x39_polymer_Black_Mag_Tracer_Green_F,
		   	30Rnd_762x39_polymer_Plum_Mag_F,
		   	30Rnd_762x39_polymer_Plum_Mag_Green_F,
		   	30Rnd_762x39_polymer_Plum_Mag_Tracer_F,
		   	30Rnd_762x39_polymer_Plum_Mag_Tracer_Green_F
		};
		magazineWell[] = {"AK_762x39","CBA_762x39_AK","CBA_762x39_RPK"};
		magazineReloadSwitchPhase = 0.48;
		htMin = 11;
		htMax = 730;
		inertia = 0.6;
		aimTransitionSpeed = 1;
		dexterity = 1.4;
		initSpeed = 715;
		recoil = "recoil_akm";
		maxZeroing = 800;
		bullet1[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_01",0.501187,1,15};
		bullet2[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_02",0.501187,1,15};
		bullet3[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_03",0.501187,1,15};
		bullet4[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_04",0.501187,1,15};
		bullet5[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_01",0.398107,1,15};
		bullet6[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_02",0.398107,1,15};
		bullet7[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_03",0.398107,1,15};
		bullet8[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_04",0.398107,1,15};
		bullet9[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_01",0.251189,1,15};
		bullet10[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_02",0.251189,1,15};
		bullet11[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_03",0.251189,1,15};
		bullet12[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_04",0.251189,1,15};
		soundBullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};
		class Library
		{
			libTextDesc = "$STR_A3_CfgWeapons_arifle_AKM_base_F_Library0"; //The AKM gas operated assault rifle with a rotating bolt is a modernized version of the old AK-47. Despite the later introduction of the AK-74, it has remained in use in many countries all over the world with more than 10 million units built. Its improvements over the AK-47 made mass manufacturing simpler, but also decreased the weight and increased accuracy of the weapon. At the same time, the gun's exceptional wear and corrosion resistance has been preserved.
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			/*class CowsSlot: CowsSlot_Dovetail
			{
				iconPosition[] = {0.55,0.38};
				iconScale = 0.2;
			};*/
			class MuzzleSlot: asdg_MuzzleSlot_762R
			{
				iconPosition[] = {-0.02,0.41};
				iconScale = 0.2;
			};
			/*class UnderBarrelSlot
			{
			};
			class PointerSlot
			{
			};*/
			mass = 120;
		};
		modes[] = {"FullAuto","Single","FullAuto_medium"};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"AK47_Shot_SoundSet","AK47_Tail_SoundSet","AK47_InteriorTail_SoundSet"};
			};
			reloadTime = 0.1;
			dispersion = 0.00145;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 250;
			maxRangeProbab = 0.2;
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[] = {"AK12_silencerShot_SoundSet","AK12_silencerTail_SoundSet","AK12_silencerInteriorTail_SoundSet"};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"AK47_Shot_SoundSet","AK47_Tail_SoundSet","AK47_InteriorTail_SoundSet"};
			};
			reloadTime = 0.1;
			dispersion = 0.00145;
			minRange = 2;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.05;
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[] = {"AK12_silencerShot_SoundSet","AK12_silencerTail_SoundSet","AK12_silencerInteriorTail_SoundSet"};
			};
		};
		class FullAuto_medium: FullAuto
		{
			showToPlayer = 0;
			burst = 3;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 75;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2;
		};
	};
	class Aegis_arifle_AK103_GL_F: Aegis_arifle_AK103_F
	{
		author = $STR_A3_A_POLPOX_Toadie2k;
		baseWeapon = Aegis_arifle_AK103_GL_F;
		model =  "A3_Aegis\weapons_f_Aegis\Rifles\AKM74\ak74m_gl.p3d";
		handAnim[] = {
			OFP2_ManSkeleton,
			"\A3_Aegis\Weapons_F_Aegis\Rifles\AKM74\Data\Anim\ak74m_gl.rtm"
		};
		magazines[] = 
		{
			30Rnd_762x39_polymer_Black_Mag_F,
		   	30Rnd_762x39_polymer_Black_Mag_Green_F,
		   	30Rnd_762x39_polymer_Black_Mag_Tracer_F,
		   	30Rnd_762x39_polymer_Black_Mag_Tracer_Green_F,
		   	30Rnd_762x39_polymer_Plum_Mag_F,
		   	30Rnd_762x39_polymer_Plum_Mag_Green_F,
		   	30Rnd_762x39_polymer_Plum_Mag_Tracer_F,
		   	30Rnd_762x39_polymer_Plum_Mag_Tracer_Green_F
		};
		picture = "\A3_Aegis\Weapons_F_Aegis\Rifles\AKM74\Data\UI\icon_Aegis_arifle_AKM74_GL_F.paa";
		displayName = $STR_A3_A_CfgWeapons_arifle_AK103_GL_F0;	// todo localize
		hiddenSelections[] = {
			"camo1","camo2","camo3","camo4","camo5"
		};
		hiddenSelectionsTextures[] = {
			"A3_Aegis\weapons_f_Aegis\Rifles\AKM74\data\ak74_base_co.paa",
			"A3_Aegis\weapons_f_Aegis\Rifles\AKM74\data\ak74_adds_co.paa",
			"A3_Aegis\weapons_f_Aegis\Rifles\AKM74\data\gp30_co.paa",
			"a3_aegis\weapons_f_aegis\shotguns\mp153\data\mp153_co.paa",
			"A3_Aegis\weapons_f_Aegis\Rifles\AKM74\data\ak_mount_co.paa"
		};
		muzzles[] = {"this","EGLM"};
		class EGLM: UGL_F
		{
			displayName = "$STR_A3_CfgWeapons_arifle_AK12_GL_base_F_EGLM0"; //GP-25
			useModelOptics = 0;
			useExternalOptic = 0;
			cameraDir = "gl_look";
			discreteDistance[] = {50,100,150,200,250,300,350,400};
			discreteDistanceCameraPoint[] = {"gl_eye_50m","gl_eye_100m","gl_eye_150m","gl_eye_200m","gl_eye_250m","gl_eye_300m","gl_eye_350m","gl_eye_400m"};
			discreteDistanceInitIndex = 1;
			reloadAction = "GestureReloadMXUGL";
			magazineReloadSwitchPhase = 0.36;
			reloadMagazineSound[] = {"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK12\AK12_UGL_reload",1,1,10};
		};
	};

	class Aegis_arifle_AK103_plum_F: Aegis_arifle_AK103_F
	{
		author = $STR_A3_A_POLPOX_Toadie2k;
		baseWeapon = Aegis_arifle_AK103_plum_F;
		displayName = $STR_A3_A_CfgWeapons_arifle_AK103_plum_F0;
		magazines[] = 
		{
			30Rnd_762x39_polymer_Plum_Mag_F,
		   	30Rnd_762x39_polymer_Plum_Mag_Green_F,
		   	30Rnd_762x39_polymer_Plum_Mag_Tracer_F,
		   	30Rnd_762x39_polymer_Plum_Mag_Tracer_Green_F,
			30Rnd_762x39_polymer_Black_Mag_F,
		   	30Rnd_762x39_polymer_Black_Mag_Green_F,
		   	30Rnd_762x39_polymer_Black_Mag_Tracer_F,
		   	30Rnd_762x39_polymer_Black_Mag_Tracer_Green_F
		};
		picture = "\A3_Aegis\Weapons_F_Aegis\Rifles\AKM74\Data\UI\icon_Aegis_arifle_AKM74_plum_F.paa";
		hiddenSelectionsTextures[] = {
			"A3_Aegis\weapons_f_Aegis\Rifles\AKM74\data\ak74_base_co.paa",
			"A3_Aegis\weapons_f_Aegis\Rifles\AKM74\data\ak74_adds_plum_co.paa",
			"a3_aegis\weapons_f_aegis\shotguns\mp153\data\mp153_co.paa",
			"A3_Aegis\weapons_f_Aegis\Rifles\AKM74\data\ak_mount_co.paa"
		};
	};

	class Aegis_arifle_AK103_GL_plum_F: Aegis_arifle_AK103_GL_F
	{
		author = $STR_A3_A_POLPOX_Toadie2k;
		baseWeapon = Aegis_arifle_AK103_GL_plum_F;
		displayName = $STR_A3_A_CfgWeapons_arifle_AK103_GL_Plum_F0;
		magazines[] = 
		{
			30Rnd_762x39_polymer_Plum_Mag_F,
		   	30Rnd_762x39_polymer_Plum_Mag_Green_F,
		   	30Rnd_762x39_polymer_Plum_Mag_Tracer_F,
		   	30Rnd_762x39_polymer_Plum_Mag_Tracer_Green_F,
			30Rnd_762x39_polymer_Black_Mag_F,
		   	30Rnd_762x39_polymer_Black_Mag_Green_F,
		   	30Rnd_762x39_polymer_Black_Mag_Tracer_F,
		   	30Rnd_762x39_polymer_Black_Mag_Tracer_Green_F
		};
		picture = "\A3_Aegis\Weapons_F_Aegis\Rifles\AKM74\Data\UI\icon_Aegis_arifle_AKM74_GL_Plum_F.paa";
		hiddenSelectionsTextures[] = {
			"A3_Aegis\weapons_f_Aegis\Rifles\AKM74\data\ak74_base_co.paa",
			"A3_Aegis\weapons_f_Aegis\Rifles\AKM74\data\ak74_adds_plum_co.paa",
			"A3_Aegis\weapons_f_Aegis\Rifles\AKM74\data\gp30_co.paa",
			"a3_aegis\weapons_f_aegis\shotguns\mp153\data\mp153_co.paa",
			"A3_Aegis\weapons_f_Aegis\Rifles\AKM74\data\ak_mount_co.paa"
		};
	};

	class Aegis_arifle_AKM74_plum_F: Aegis_arifle_AKM74_F
	{
		author = $STR_A3_A_POLPOX_Toadie2k;
		baseWeapon = Aegis_arifle_AKM74_plum_F;
		magazines[]=
		{
        	30Rnd_545x39_Mag_F,
			30Rnd_545x39_Mag_Green_F,
			30Rnd_545x39_Mag_Tracer_F,
			30Rnd_545x39_Mag_Tracer_Green_F
		};
		scope = 2;
		displayName = $STR_A3_A_CfgWeapons_arifle_AKM74_plum_F0;
		picture = "\A3_Aegis\Weapons_F_Aegis\Rifles\AKM74\Data\UI\icon_Aegis_arifle_AKM74_plum_F.paa";
		hiddenSelectionsTextures[] = {
			"A3_Aegis\weapons_f_Aegis\Rifles\AKM74\data\ak74_base_co.paa",
			"A3_Aegis\weapons_f_Aegis\Rifles\AKM74\data\ak74_adds_plum_co.paa",
			"a3_aegis\weapons_f_aegis\shotguns\mp153\data\mp153_co.paa",
			"A3_Aegis\weapons_f_Aegis\Rifles\AKM74\data\ak_mount_co.paa"
		};
	};

	class Aegis_arifle_AKM74_GL_plum_F: Aegis_arifle_AKM74_GL_F
	{
		author = $STR_A3_A_POLPOX_Toadie2k;
		baseWeapon = Aegis_arifle_AKM74_GL_plum_F;
		magazines[]=
		{
           	30Rnd_545x39_Mag_F,
			30Rnd_545x39_Mag_Green_F,
			30Rnd_545x39_Mag_Tracer_F,
			30Rnd_545x39_Mag_Tracer_Green_F
		};
		scope = 2;
		displayName = $STR_A3_A_CfgWeapons_arifle_AKM74_GL_plum_F0;
		picture = "\A3_Aegis\Weapons_F_Aegis\Rifles\AKM74\Data\UI\icon_Aegis_arifle_AKM74_GL_plum_F.paa";
		hiddenSelectionsTextures[] = {
			"A3_Aegis\weapons_f_Aegis\Rifles\AKM74\data\ak74_base_co.paa",
			"A3_Aegis\weapons_f_Aegis\Rifles\AKM74\data\ak74_adds_plum_co.paa",
			"A3_Aegis\weapons_f_Aegis\Rifles\AKM74\data\gp30_co.paa",
			"a3_aegis\weapons_f_aegis\shotguns\mp153\data\mp153_co.paa",
			"A3_Aegis\weapons_f_Aegis\Rifles\AKM74\data\ak_mount_co.paa"
		};
	};

	class Aegis_arifle_AK74_gold_F: Aegis_arifle_AK74_F
	{
		baseWeapon = "Aegis_arifle_AK74_gold_F";
		displayName = $STR_A3_A_CfgWeapons_arifle_AK74_gold_F0;
		magazines[] = 
		{
			30Rnd_545x39_Steel_Gold_Mag_F,
			30Rnd_545x39_Steel_Gold_Tracer_Mag_F
		};
		picture = "\A3_Aegis\Weapons_F_Aegis\Rifles\AKM74\Data\UI\icon_Aegis_arifle_AK74_gold_F.paa";
		hiddenSelections[] = {
			"camo1","camoWood","dovetail"
		};
		hiddenSelectionsTextures[] = {
			"A3_Aegis\weapons_f_Aegis\Rifles\AKM74\data\ak74_base_oak_co.paa"
		};
		hiddenSelectionsMaterials[] = {
			"A3_Aegis\weapons_f_aegis\Rifles\AKM74\data\ak74_base_gold.rvmat",
			"A3_Aegis\weapons_f_aegis\Rifles\AKM74\data\ak74_base_oak_wood.rvmat"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot {};
			class MuzzleSlot {};
			class UnderBarrelSlot {};
			class PointerSlot {};
			mass = 100;
		};
	};
	class Aegis_arifle_AKS74_gold_F: Aegis_arifle_AKS74_F
	{
		baseWeapon = "Aegis_arifle_AKS74_gold_F";
		displayName = $STR_A3_A_CfgWeapons_arifle_AKS74_gold_F0;
		magazines[] = 
		{
			30Rnd_545x39_Steel_Gold_Mag_F,
			30Rnd_545x39_Steel_Gold_Tracer_Mag_F
		};
		picture = "\A3_Aegis\Weapons_F_Aegis\Rifles\AKM74\Data\UI\icon_Aegis_arifle_AKS74_gold_F.paa";
		hiddenSelections[] = {
			"camo1","camo2","camoWood","dovetail"
		};
		hiddenSelectionsTextures[] = {
			"A3_Aegis\weapons_f_Aegis\Rifles\AKM74\data\ak74_base_oak_co.paa",
			"A3_Aegis\weapons_f_Aegis\Rifles\AKM74\data\ak74_adds_co.paa",
		};
		hiddenSelectionsMaterials[] = {
			"A3_Aegis\weapons_f_aegis\Rifles\AKM74\data\ak74_base_gold.rvmat",
			"A3_Aegis\weapons_f_aegis\Rifles\AKM74\data\ak74_adds_gold.rvmat",
			"A3_Aegis\weapons_f_aegis\Rifles\AKM74\data\ak74_base_oak_wood.rvmat"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot {};
			class MuzzleSlot {};
			class UnderBarrelSlot {};
			class PointerSlot {};
			mass = 100;
		};
	};
};