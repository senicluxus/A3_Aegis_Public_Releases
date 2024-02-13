/* Header */
#include "cfgPatches.hpp"

/* Definitions & Inheritance */
#include "\A3_Aegis\basicDefines_A3.hpp"
#include "\a3\ui_f\hpp\definecommongrids.inc"

class RscControlsGroup;
class RscText;
class RscBackground;

/* Configuration */
#include "cfgInGameUI.hpp"
#include "rscIngameUI.hpp"
#include "cfgVehicleIcons.hpp"
#include "cfgWeaponCursors.hpp"
#include "cfgUIColors.hpp"
#include "cfgUnitInsignia.hpp"
#include "cfgMarkers.hpp"
#include "cfgPostProcessTemplates.hpp"

/* Preloaded Textures */
class PreloadTextures
{
	class CfgWeaponCursors
	{
		class mgl
		{
			texture = *;
		};
	};
	class CfgIngameUI
	{
		class CfgWeaponModeTextures
		{
			left = *;
			right = *;
		};
    };
};

/* Keybinds
class CfgDefaultKeysPresets
{
	class Arma2
	{
		class Mappings
		{
			commandLeft[] = {};
			commandRight[] = {};
			commandForward[] = {};
			commandBack[] = {};
			commandFast[] = {};
			commandSlow[] = {};
        };
    };
};
*/