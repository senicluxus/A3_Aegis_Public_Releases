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
class recoil_default;
class cfgRecoils
{
    class recoil_FORT652: recoil_default
	{
		muzzleOuter[] = {0.25,0.8,0.3,0.32};
		kickBack[] = {0.01,0.03};
		temporary = 0.01;
	};
    class recoil_FORT651: recoil_default
	{
		muzzleOuter[] = {0.28,1.0,0.3,0.38};
		kickBack[] = {0.02,0.04};
		temporary = 0.015;
	};
};
class CfgWeapons
{

    class arifle_TRG20_F;
    class arifle_TRG21_F;
    class arifle_TRG21_GL_F;
    class arifle_FORT652_F: arifle_TRG21_F
    {
        author = $STR_A3_A_Ravenholme;
        descriptionShort = $STR_A3_A_CfgWeapons_arifle_FORT652_base_F1;
        baseWeapon = arifle_FORT650_F;
        scope = public;
        displayName = $STR_A3_A_CfgWeapons_arifle_FORT652_F0;
        recoil = recoil_FORT652;
        picture = "\A3_Aegis\Weapons_F_Aegis\Rifles\TRG20\Data\UI\icon_arifle_TRG21_black_F_X_ca.paa";
        hiddenSelectionsTextures[] = 
        {
            "\A3_Aegis\Weapons_f_aegis\Rifles\TRG20\Data\TAR21_black_CO.paa"
        };
        magazines[] = 
        {
            30Rnd_65x39_caseless_msbs_mag,
            30Rnd_65x39_caseless_msbs_mag_Tracer
        };
        magazineWell[] =
        {
            MX_65x39_MSBS
        };
        class Library
		{
			libTextDesc = $STR_A3_A_CfgWeapons_arifle_FORT650_base_F_Library0;
		};
        class WeaponSlotsInfo
        {
            class MuzzleSlot: asdg_MuzzleSlot_65
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
            mass = 75;
        };
    };
    class arifle_FORT651_F: arifle_TRG20_F
    {
        author = $STR_A3_A_Ravenholme;
        descriptionShort = $STR_A3_A_CfgWeapons_arifle_FORT652_base_F1;
        baseWeapon = arifle_FORT651_F;
        scope = public;
        displayName = $STR_A3_A_CfgWeapons_arifle_FORT651_F0;
        picture = "\A3_Aegis\Weapons_F_Aegis\Rifles\TRG20\Data\UI\icon_arifle_TRG20_black_F_X_ca.paa";
        hiddenSelectionsTextures[] = 
        {
            "\A3_Aegis\Weapons_f_aegis\Rifles\TRG20\Data\TAR21_black_CO.paa"
        };
        magazines[] = 
        {
            30Rnd_65x39_caseless_msbs_mag,
            30Rnd_65x39_caseless_msbs_mag_Tracer
        };
        magazineWell[] =
        {
            MX_65x39_MSBS
        };
        class Library
        {
            libTextDesc = $STR_A3_A_CfgWeapons_arifle_FORT650_base_F_Library0;
        };
        recoil = recoil_FORT651;
        class WeaponSlotsInfo
        {
            mass = 65;
            class MuzzleSlot: asdg_MuzzleSlot_65
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
    };
    class arifle_FORT652_GL_F: arifle_TRG21_GL_F
    {
        author = $STR_A3_A_Ravenholme;
        descriptionShort = $STR_A3_A_CfgWeapons_arifle_FORT652_base_F1;
        baseWeapon = arifle_FORT652_GL_F;
        scope = public;
        displayName = $STR_A3_A_CfgWeapons_arifle_FORT652_GL_F0;
        picture = "\A3_Aegis\Weapons_F_Aegis\Rifles\TRG20\Data\UI\icon_arifle_TRG21_GL_black_F_X_ca.paa";
        hiddenSelectionsTextures[] = 
        {
            "\A3_Aegis\Weapons_f_aegis\Rifles\TRG20\Data\TAR21_black_CO.paa",
            "\A3\Weapons_F\Rifles\TRG20\Data\TAR21_EGLM_CO.paa",
            "\A3\Weapons_F\Data\GL_holo_CO.paa"
        };
        magazines[] = 
        {
            30Rnd_65x39_caseless_msbs_mag,
            30Rnd_65x39_caseless_msbs_mag_Tracer
        };
        magazineWell[] =
        {
            MX_65x39_MSBS
        };
        class Library
        {
            libTextDesc = $STR_A3_A_CfgWeapons_arifle_FORT650_base_F_Library0;
        };
        class WeaponSlotsInfo
        {
            mass = 75;
            class MuzzleSlot: asdg_MuzzleSlot_65
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
    };
    #include "presets.hpp"
};
