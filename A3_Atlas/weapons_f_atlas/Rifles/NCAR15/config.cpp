#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
#include "cfgVehicles.hpp"
#include "\A3_Atlas\Weapons_F_Atlas\ASDG.hpp"
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class SlotInfo;
class MuzzleSlot_58;
class CowsSlot_Rail;
class PointerSlot_Rail;
class UnderBarrelSlot_rail;
class CfgWeapons
{

    class arifle_AK12_F;
    class arifle_AK12U_F;
    class arifle_AK12_GL_F;
    class arifle_RPK12_F;
    class arifle_NCAR15_F: arifle_AK12_F
    {
        author = $STR_A3_A_Ravenholme;
        descriptionShort = $STR_A3_A_CfgWeapons_arifle_NCAR15_base_F1;
        baseWeapon = arifle_NCAR15_F;
        picture = "\A3_Atlas\Weapons_F_Atlas\Rifles\NCAR15\Data\UI\icon_arifle_NCAR15_F_X_CA.paa";
        scope = public;
        displayName = $STR_A3_A_CfgWeapons_arifle_NCAR15_F0;
        hiddenSelectionsMaterials[]= 
        {
            "\A3_Atlas\Weapons_F_Atlas\Rifles\NCAR15\Data\NCAR_F_1.rvmat",
            "\A3\weapons_f_exp\Rifles\AK12\Data\AK12_F_2.rvmat"
        };
        hiddenSelectionsTextures[] = 
        {
            "\A3_Atlas\Weapons_F_Atlas\Rifles\NCAR15\Data\NCAR_ak12_1_co.paa",
            "\A3_Atlas\Weapons_F_Atlas\Rifles\NCAR15\Data\NCAR_ak12_2_co.paa"
        };
        magazines[] = 
        {
            30Rnd_580x42_Mag_F,
            30Rnd_580x42_Mag_Tracer_F
        };
        magazineWell[] =
        {
            CTAR_580x42,
            CTAR_580x42_Large
        };
        class Library
		{
			libTextDesc = $STR_A3_A_CfgWeapons_arifle_NCAR15_base_F_Library0;
		};
        class WeaponSlotsInfo
        {
            mass = 120;
            class MuzzleSlot: asdg_MuzzleSlot_58
            {
                iconPosition[] =
                {
                    0, // X
                    0.38 // Y
                };
                iconScale = 0.2;
            };
            class CowsSlot: asdg_OpticRail1913
			{
				iconPosition[] =
				{
					0.479,  // X
					0.194   // Y
				};
				iconScale = 0.2;
			};
			class PointerSlot: asdg_FrontSideRail
			{
				iconPosition[] =
				{
					0.285,  // X
					0.344   // Y
				};
				iconScale = 0.2;
			};
            class UnderBarrelSlot: asdg_UnderSlot
			{
				iconPosition[] =
				{
					0.285, // X
					0.344 // Y
				};
				iconScale = 0.2;
			};
        };
        class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"CAR_95_Shot_SoundSet",
					"AK12_Tail_SoundSet",
					"CAR_95_interiorTail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[]=
				{
					"CAR_95_silencerShot_SoundSet",
					"AK12_silencerTail_SoundSet",
					"CAR_95_silencerInteriorTail_SoundSet"
				};
			};
		};
		class Burst: Mode_Burst
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"CAR_95_Shot_SoundSet",
					"AK12_Tail_SoundSet",
					"CAR_95_interiorTail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[]=
				{
					"CAR_95_silencerShot_SoundSet",
					"AK12_silencerTail_SoundSet",
					"CAR_95_silencerInteriorTail_SoundSet"
				};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"CAR_95_Shot_SoundSet",
					"AK12_Tail_SoundSet",
					"CAR_95_interiorTail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[]=
				{
					"CAR_95_silencerShot_SoundSet",
					"AK12_silencerTail_SoundSet",
					"CAR_95_silencerInteriorTail_SoundSet"
				};
			};
		};
    };
    class arifle_NCAR15B_F: arifle_AK12U_F
    {
        author = $STR_A3_A_Ravenholme;
        descriptionShort = $STR_A3_A_CfgWeapons_arifle_NCAR15_base_F1;
        picture = "\A3_Atlas\Weapons_F_Atlas\Rifles\NCAR15\Data\UI\icon_arifle_NCAR15B_F_X_CA.paa";
        baseWeapon = arifle_NCAR15B_F;
        scope=2;
        displayName = $STR_A3_A_CfgWeapons_arifle_NCAR15B_F0;
        hiddenSelectionsMaterials[]= 
        {
            "\A3_Atlas\Weapons_F_Atlas\Rifles\NCAR15\Data\NCAR_F_1.rvmat",
            "\A3\weapons_f_exp\Rifles\AK12\Data\AK12_F_2.rvmat",
            "\A3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_RPK12.rvmat"
        };
        hiddenSelectionsTextures[] = 
        {
            "\A3_Atlas\Weapons_F_Atlas\Rifles\NCAR15\Data\NCAR_ak12_1_co.paa",
            "\A3_Atlas\Weapons_F_Atlas\Rifles\NCAR15\Data\NCAR_ak12_2_co.paa",
            "\A3\Weapons_F_Enoch\Rifles\AK12\Data\AKU12_RPK12_parts_CO.paa"
        };
        magazines[] = 
        {
            30Rnd_580x42_Mag_F,
            30Rnd_580x42_Mag_Tracer_F
        };
        magazineWell[] = 
        {
            CTAR_580x42,
            CTAR_580x42_Large
        };
        
        class WeaponSlotsInfo
        {
            mass = 110;
            class MuzzleSlot: asdg_MuzzleSlot_58
            {
                iconPosition[] =
                {
                    0, // X
                    0.38 // Y
                };
                iconScale = 0.2;
            };
            class CowsSlot: asdg_OpticRail1913
			{
				iconPosition[] =
				{
					0.479,  // X
					0.194   // Y
				};
				iconScale = 0.2;
			};
			class PointerSlot: asdg_FrontSideRail
			{
				iconPosition[] =
				{
					0.285,  // X
					0.344   // Y
				};
				iconScale = 0.2;
			};
            class UnderBarrelSlot: asdg_UnderSlot
			{
				iconPosition[] =
				{
					0.285, // X
					0.344 // Y
				};
				iconScale = 0.2;
			};
        };
        class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"CAR_95_Shot_SoundSet",
					"AK12_Tail_SoundSet",
					"CAR_95_interiorTail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[]=
				{
					"CAR_95_silencerShot_SoundSet",
					"AK12_silencerTail_SoundSet",
					"CAR_95_silencerInteriorTail_SoundSet"
				};
			};
		};
		class Burst: Mode_Burst
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"CAR_95_Shot_SoundSet",
					"AK12_Tail_SoundSet",
					"CAR_95_interiorTail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[]=
				{
					"CAR_95_silencerShot_SoundSet",
					"AK12_silencerTail_SoundSet",
					"CAR_95_silencerInteriorTail_SoundSet"
				};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"CAR_95_Shot_SoundSet",
					"AK12_Tail_SoundSet",
					"CAR_95_interiorTail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[]=
				{
					"CAR_95_silencerShot_SoundSet",
					"AK12_silencerTail_SoundSet",
					"CAR_95_silencerInteriorTail_SoundSet"
				};
			};
		};
    };
    class arifle_NCAR15_GL_F: arifle_AK12_GL_F
    {
        author = $STR_A3_A_Ravenholme;
        descriptionShort = $STR_A3_A_CfgWeapons_arifle_NCAR15_base_F1;
        baseWeapon = arifle_NCAR15_GL_F;
        scope = public;
        picture = "\A3_Atlas\Weapons_F_Atlas\Rifles\NCAR15\Data\UI\icon_arifle_NCAR15_GL_F_X_CA.paa";
        displayName = $STR_A3_A_CfgWeapons_arifle_NCAR15_GL_F0;
        hiddenSelectionsMaterials[]= 
        {
            "\A3_Atlas\Weapons_F_Atlas\Rifles\NCAR15\Data\NCAR_F_1.rvmat",
            "\A3\weapons_f_exp\Rifles\AK12\Data\AK12_F_2.rvmat",
            "\A3\weapons_f_exp\Rifles\AK12\Data\AK12_GL_F.rvmat"
        };
        hiddenSelectionsTextures[] = 
        {
            "\A3_Atlas\Weapons_F_Atlas\Rifles\NCAR15\Data\NCAR_ak12_1_co.paa",
            "\A3_Atlas\Weapons_F_Atlas\Rifles\NCAR15\Data\NCAR_ak12_2_co.paa",
            "\A3_Atlas\Weapons_F_Atlas\Rifles\NCAR15\Data\NCAR15_ncar15_gl_co.paa"
        };
        /*hiddenSelectionsTextures[] = 
        {
            "\A3_Atlas\Weapons_F_Atlas\Rifles\NCAR15\Data\NCAR15_ncar15_1_co.paa",
            "\A3\Weapons_F_Exp\Rifles\AK12\Data\AK12_ak12_2_co.paa",
            "\A3_Atlas\Weapons_F_Atlas\Rifles\NCAR15\Data\NCAR15_ncar15_gl_co.paa"
        };*/
        magazines[] = 
        {
            30Rnd_580x42_Mag_F,
            30Rnd_580x42_Mag_Tracer_F
        };
        magazineWell[] = 
        {
            CTAR_580x42,
            CTAR_580x42_Large
        };
        class WeaponSlotsInfo
        {
            mass = 135;
            class MuzzleSlot: asdg_MuzzleSlot_58
            {
                iconPosition[] =
                {
                    0, // X
                    0.38 // Y
                };
                iconScale = 0.2;
            };
            class CowsSlot: asdg_OpticRail1913
			{
				iconPosition[] =
				{
					0.479,  // X
					0.194   // Y
				};
				iconScale = 0.2;
			};
			class PointerSlot: asdg_FrontSideRail
			{
				iconPosition[] =
				{
					0.285,  // X
					0.344   // Y
				};
				iconScale = 0.2;
			};
        };
        class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"CAR_95_Shot_SoundSet",
					"AK12_Tail_SoundSet",
					"CAR_95_interiorTail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[]=
				{
					"CAR_95_silencerShot_SoundSet",
					"AK12_silencerTail_SoundSet",
					"CAR_95_silencerInteriorTail_SoundSet"
				};
			};
		};
		class Burst: Mode_Burst
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"CAR_95_Shot_SoundSet",
					"AK12_Tail_SoundSet",
					"CAR_95_interiorTail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[]=
				{
					"CAR_95_silencerShot_SoundSet",
					"AK12_silencerTail_SoundSet",
					"CAR_95_silencerInteriorTail_SoundSet"
				};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"CAR_95_Shot_SoundSet",
					"AK12_Tail_SoundSet",
					"CAR_95_interiorTail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[]=
				{
					"CAR_95_silencerShot_SoundSet",
					"AK12_silencerTail_SoundSet",
					"CAR_95_silencerInteriorTail_SoundSet"
				};
			};
		};
    };
    class arifle_NCAR15_MG_F: arifle_RPK12_F
    {
        author = $STR_A3_A_Ravenholme;
        descriptionShort = $STR_A3_A_CfgWeapons_arifle_NCAR15_base_F1;
        picture = "\A3_Atlas\Weapons_F_Atlas\Rifles\NCAR15\Data\UI\icon_arifle_NCAR15_MG_F_X_CA.paa";
        baseWeapon = arifle_NCAR15_MG_F;
        scope = public;
        displayName = $STR_A3_A_CfgWeapons_arifle_NCAR15_MG_F0;
        hiddenSelectionsMaterials[]= 
        {
            "\A3_Atlas\Weapons_F_Atlas\Rifles\NCAR15\Data\NCAR_F_1.rvmat",
            "\A3\weapons_f_exp\Rifles\AK12\Data\AK12_F_2.rvmat",
            "\A3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_RPK12.rvmat"
        };
        hiddenSelectionsTextures[] = 
        {
            "\A3_Atlas\Weapons_F_Atlas\Rifles\NCAR15\Data\NCAR_ak12_1_co.paa",
            "\A3_Atlas\Weapons_F_Atlas\Rifles\NCAR15\Data\NCAR_ak12_2_co.paa",
            "\A3\Weapons_F_Enoch\Rifles\AK12\Data\AKU12_RPK12_parts_CO.paa"
        };
        magazines[] = 
        {
            100Rnd_580x42_Mag_F,
            100Rnd_580x42_Mag_Tracer_F
        };
        magazineWell[] =
        {
            CTAR_580x42,
            CTAR_580x42_Large
        };
        class WeaponSlotsInfo
        {
            mass = 160;
            class MuzzleSlot: asdg_MuzzleSlot_58
            {
                iconPosition[] =
                {
                    0, // X
                    0.38 // Y
                };
                iconScale = 0.2;
            };
            class CowsSlot: asdg_OpticRail1913
			{
				iconPosition[] =
				{
					0.479,  // X
					0.194   // Y
				};
				iconScale = 0.2;
			};
			class PointerSlot: asdg_FrontSideRail
			{
				iconPosition[] =
				{
					0.285,  // X
					0.344   // Y
				};
				iconScale = 0.2;
			};
        };
        class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"CAR_95_Shot_SoundSet",
					"AK12_Tail_SoundSet",
					"CAR_95_interiorTail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[]=
				{
					"CAR_95_silencerShot_SoundSet",
					"AK12_silencerTail_SoundSet",
					"CAR_95_silencerInteriorTail_SoundSet"
				};
			};
		};
		class Burst: Mode_Burst
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"CAR_95_Shot_SoundSet",
					"AK12_Tail_SoundSet",
					"CAR_95_interiorTail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[]=
				{
					"CAR_95_silencerShot_SoundSet",
					"AK12_silencerTail_SoundSet",
					"CAR_95_silencerInteriorTail_SoundSet"
				};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"CAR_95_Shot_SoundSet",
					"AK12_Tail_SoundSet",
					"CAR_95_interiorTail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[]=
				{
					"CAR_95_silencerShot_SoundSet",
					"AK12_silencerTail_SoundSet",
					"CAR_95_silencerInteriorTail_SoundSet"
				};
			};
		};
    };
    #include "presets.hpp"
};