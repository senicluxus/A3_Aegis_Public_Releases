#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
#include "cfgVehicles.hpp"
#include "\A3_Aegis\Weapons_F_Aegis\ASDG.hpp"
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class SlotInfo;
class MuzzleSlot_58;
class CowsSlot_Rail;
class PointerSlot_Rail;
class UnderBarrelSlot_rail;
class CowsSlot_Dovetail_RPG;
class CfgWeapons
{
    class launch_RPG7_F;
    class Aegis_launch_RPG7M_F: launch_RPG7_F
    {
        author = "Grave";
        displayName = $STR_A3_A_CfgWeapons_launch_RPG7M_F0;
        picture = "\A3_Aegis\Weapons_F_Aegis\Launchers\RPG7\Data\UI\icon_launch_RPG7M_F_ca.paa";
        hiddenSelectionsTextures[]=
		{
			"\A3_Aegis\weapons_f_Aegis\Launchers\RPG7\Data\rpg7_black_co.paa"
		};
        hiddenSelectionsMaterials[] = 
        {
            "\A3_Aegis\weapons_f_Aegis\Launchers\RPG7\Data\rpg7.rvmat"
        };
        class WeaponSlotsInfo
		{
			mass=60;
			class CowsSlot: CowsSlot_Dovetail_RPG
			{
				iconPosition[]={0.44999999,0.38};
				iconScale=0.2;
			};
		};
    };
};