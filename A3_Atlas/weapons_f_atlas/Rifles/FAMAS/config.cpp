#include "\A3_Aegis\basicDefines_A3.hpp"
#include "\A3_Atlas\Weapons_F_Atlas\ASDG.hpp"
#define magentry(mag, num)      \
		class _xx_##mag       	\
		{          				\
			magazine = #mag;    \
			count = num;      	\
		}
		
#define wepentry(wep, num)  	\
		class _xx_##wep 		\
		{ 						\
			weapon = #wep; 		\
			count = num; 		\
		}

#define itementry(item, num) class _xx_##item { name=#item; count = num; }
#include "cfgPatches.hpp"
class CfgNonAIVehicles
{    
	class ProxyWeapon;   
	class Proxyfamas_25Rnd: ProxyWeapon    
	{        
		model        = "A3_Atlas\weapons_f_atlas\Rifles\FAMAS\Data\mag\famas_25Rnd.p3d";      
		simulation    = "magazine"; 
		hiddenSelections[] = {"Camo1", "Camo_Low"};
		hiddenSelectionsTextures[] = 
		{
			"\A3_Atlas\weapons_f_atlas\Rifles\FAMAS\Data\tex\famas_3.paa",
			"\A3_Atlas\weapons_f_atlas\Rifles\FAMAS\Data\tex\famas_low.paa"
		};
	};
};
#include "cfgVehicles.hpp"
#include "cfgWeapons.hpp"
