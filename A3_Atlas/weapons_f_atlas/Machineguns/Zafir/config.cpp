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
class CfgWeapons
{
    class LMG_Zafir_F;
    class LMG_Zafir_black_F: LMG_Zafir_F
    {
        class WeaponSlotsInfo;
    };
    class Atlas_LMG_Negev_black_F: LMG_Zafir_black_F
    {
        author = $STR_A3_A_Ravenholme;
        descriptionShort = $STR_A3_A_CfgWeapons_LMG_Negev_base_F1;
        baseWeapon = Atlas_LMG_Negev_black;
        scope = public;
        displayName = $STR_A3_A_CfgWeapons_LMG_Negev_Black_F0;
        hiddenSelectionsTextures[] =
	    {
		    "\A3_Aegis\Weapons_F_Aegis\Machineguns\Zafir\Data\Zafir01_black_CO.paa",
		    "\A3_Aegis\Weapons_F_Aegis\Machineguns\Zafir\Data\Zafir02_black_CO.paa"
	    };
	    picture = "\A3_Aegis\Weapons_F_Aegis\Machineguns\Zafir\Data\UI\icon_LMG_Zafir_black_F_X_CA.paa";
        magazines[] =
		{
			150Rnd_762x51_Box_Yellow,
			150Rnd_762x51_Box_Tracer_Yellow
		};
        magazineWell[] =
        {
            Negev_762x51
        };
        class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: asdg_MuzzleSlot_762
			{
				iconPosition[] =
				{
					0.05, // X
					0.38 // Y
				};
				iconScale = 0.2;
			};
		};
    };
    #include "presets.hpp"
};
