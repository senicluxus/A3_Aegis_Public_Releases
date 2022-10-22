#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
#include "cfgAmmo.hpp"
#include "cfgMagazines.hpp"
#include "cfgRecoils.hpp"
#include "cfgVehicles.hpp"
#include "cfgMagazineWells.hpp"
#include "ASDG.hpp"
#include "cfgWeapons.hpp"
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class SensorTemplatePassiveRadar;
class SensorTemplateAntiRadiation;
class SensorTemplateActiveRadar;
class SensorTemplateIR;
class SensorTemplateVisual;
class SensorTemplateMan;
class SensorTemplateLaser;
class SensorTemplateNV;
class SensorTemplateDataLink;
class SlotInfo;
class MuzzleSlot;
class CowsSlot: SlotInfo
{
	compatibleItems[] +=
	{
		optic_LRCO_blk_F,
		optic_LRCO_snd_F
	};
};
class PointerSlot;
class UnderBarrelSlot;
class MuzzleSlot_556;
class MuzzleSlot_65;
class MuzzleSlot_762;
class MuzzleSlot_MG;
class CowsSlot_Rail: CowsSlot
{
	class compatibleItems
	{
		optic_LRCO_blk_F = true;
		optic_LRCO_snd_F = true;
	};
};
class PointerSlot_Rail;
class UnderBarrelSlot_rail;