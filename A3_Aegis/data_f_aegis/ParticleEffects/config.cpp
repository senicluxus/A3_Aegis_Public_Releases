/* Header */
#include "cfgPatches.hpp"

/* Definitions & Inheritance */
#include "\A3_Aegis\basicDefines_A3.hpp"

/* Configuration */
#include "cfgCloudlets.hpp"
#include "cfgLights.hpp"

class CMSmokeEffect
{
	class LightExp
	{
		simulation = light;
		type = ExploLight;
		position[] =
        {
            0,  // X
            0,  // Y
            0   // Z
        };
		intensity = 0.001;
		interval = 1;
		lifeTime = 1;
	};
	class Explosion1
	{
		simulation = particles;
		type = CMSmoke;
		position[] =
        {
            0,  // X
            0,  // Y
            0   // Z
        };
		intensity = 1;
		interval = 1;
		lifeTime = 0.3;
		smokeGenMinDist = 0;
		smokeGenMaxDist = 2000;
		smokeSizeCoef = 0;
		smokeIntervalCoef = 0;
	};
	class WPTrailEffect
	{
		simulation = particles;
		type = WPTrails;
		position[] =
        {
            0,  // X
            0,  // Y
            0   // Z
        };
		intensity = 1;
		interval = 1;
		lifeTime = 1;
		smokeGenMinDist = 0;
		smokeGenMaxDist = 2000;
		smokeSizeCoef = 0;
		smokeIntervalCoef = 0;
	};
};

/*class IRBeacon_Light
{
    class Light1
	{
		simulation="light";
		type="IRBeacon";
	};
}; */

/* Explosion Refractions */
#define EXPLOSION_REFRACT(a) \
	class RefractExp \
	{ \
		simulation = particles; \
		type = ##a##; \
		position[] = {0,0,0}; \
		intensity = 1; \
		interval = 3*1; \
		lifeTime = 1.0; \
	};

class IEDMineBigExplosion
{
    EXPLOSION_REFRACT(ExplosionRefractLarge)
};
/*
class IEDMineSmallExplosion
{
    EXPLOSION_REFRACT(ExplosionRefractSmall)
};
class SencondaryExplosion
{
    EXPLOSION_REFRACT(ExplosionRefractSmall)
};
class MineNondirectionalExplosion
{
    EXPLOSION_REFRACT(ExplosionRefractSmall)
};
class MineNondirectionalExplosionSmall
{
    EXPLOSION_REFRACT(ExplosionRefractSmall)
};
class MineUnderwaterExplosion
{
    EXPLOSION_REFRACT(ExplosionRefractSmall)
};
class MineUnderwaterABExplosion
{
    EXPLOSION_REFRACT(ExplosionRefractMed)
};
class MineUnderwaterPDMExplosion
{
    EXPLOSION_REFRACT(ExplosionRefractMed)
};
class GrenadeExplosion
{
    EXPLOSION_REFRACT(ExplosionRefractSmall)
};
*/
class MortarExplosion
{
    EXPLOSION_REFRACT(ExplosionRefractMed)
};
/*
class ExplosionEffects
{
    EXPLOSION_REFRACT(ExplosionRefractSmall)
};
class BasicAmmoExplosion
{
    EXPLOSION_REFRACT(ExplosionRefractSmall)
};
class ATMissileExplosion
{
    EXPLOSION_REFRACT(ExplosionRefractSmall)
};
class AAMissileExplosion
{
    EXPLOSION_REFRACT(ExplosionRefractSmall)
};
class MineExplosion
{
    EXPLOSION_REFRACT(ExplosionRefractSmall)
};
class ATMineExplosion
{
    EXPLOSION_REFRACT(ExplosionRefractSmall)
};
class BoundingMineExplosion
{
    EXPLOSION_REFRACT(ExplosionRefractSmall)
};
class DirectionalMineExplosion 
{
    EXPLOSION_REFRACT(ExplosionRefractSmall)
};
class DirectionalMineExplosionBig
{
    EXPLOSION_REFRACT(ExplosionRefractSmall)
};
class ATRocketExplosion
{
    EXPLOSION_REFRACT(ExplosionRefractSmall)
};
class HERocketExplosion
{
    EXPLOSION_REFRACT(ExplosionRefractSmall)
};
class HEShellExplosion
{
    EXPLOSION_REFRACT(ExplosionRefractSmall)
};
*/
class ArtyShellExplosion
{
    EXPLOSION_REFRACT(ExplosionRefractLarge)
};
class BombExplosion
{
    EXPLOSION_REFRACT(ExplosionRefractLarge)
};
class HeavyBombExplosion
{
    EXPLOSION_REFRACT(ExplosionRefractHuge)
};
/*
class MissileExplosion
{
    EXPLOSION_REFRACT(ExplosionRefractSmall)
};
*/
class HelicopterExplosionEffects
{
    EXPLOSION_REFRACT(ExplosionRefractLarge)
};
class HelicopterExplosionEffects2
{
    EXPLOSION_REFRACT(ExplosionRefractLarge)
};
class VehicleExplosionEffectsBig
{
    EXPLOSION_REFRACT(ExplosionRefractHuge)
};
class VehicleExplosionEffects
{
    EXPLOSION_REFRACT(ExplosionRefractLarge)
};
/*
class RocketExplosion
{
    EXPLOSION_REFRACT(ExplosionRefractSmall)
};
class ExploAmmoExplosion
{
    EXPLOSION_REFRACT(ExplosionRefractSmall)
};
class ExploAmmoExplosionPlaneCAS
{
    EXPLOSION_REFRACT(ExplosionRefractSmall)
};
*/
/* Hand Flare Effects*/
class Aegis_HandFlare_Effect_Base
{
	// Lights
	class Aegis_HandFlare_Light_Base
	{
		simulation="light";
		lifeTime=590;
	};
	class Aegis_HandFlare_Light_Sparks_Base
	{
		simulation="light";
		position[]={0,0,0};
		intensity=0.0080000004;
		interval=1;
		lifeTime=560;
	};
	// Particles
	class Aegis_HandFlare_Effect_Smoke_Base
	{
		simulation="particles";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=600;
	};
	class Aegis_HandFlare_Effect_Smoke_Base_UW
	{
		simulation="particles";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=590;
	};
	class Aegis_HandFlare_Effect_Sparks_Base
	{
		simulation="particles";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=560;
	};
	class Aegis_HandFlare_Effect_Flame_Base
	{
		simulation="particles";
		lifeTime=590;
	};
};
class Aegis_HandFlare_Effect_Red: Aegis_HandFlare_Effect_Base
{
	// Lights
	class Aegis_HandFlare_Light_Red: Aegis_HandFlare_Light_Base
	{
		type="Aegis_HandFlare_Light_Red";
	};
	class Aegis_HandFlare_Light_Sparks: Aegis_HandFlare_Light_Sparks_Base
	{
		type="Aegis_HandFlare_Light_Sparks_Red";
	};
	// Particles
	class Aegis_HandFlare_Effect_Smoke_Red: Aegis_HandFlare_Effect_Smoke_Base
	{
		type="Aegis_HandFlare_Effect_Smoke_Red";
	};
	class Aegis_HandFlare_Effect_Smoke_Red_UW: Aegis_HandFlare_Effect_Smoke_Base_UW
	{
		type="Aegis_HandFlare_Effect_Smoke_Red_UW";
	};
	class Aegis_HandFlare_Effect_Sparks_Red: Aegis_HandFlare_Effect_Sparks_Base
	{
		type="Aegis_HandFlare_Effect_Sparks_Red";
	};
	class Aegis_HandFlare_Effect_Flame_Red: Aegis_HandFlare_Effect_Flame_Base
	{
		type="Aegis_HandFlare_Effect_Flame_Red";
	};
};
class Aegis_HandFlare_Effect_Green: Aegis_HandFlare_Effect_Base
{
	// Lights
	class Aegis_HandFlare_Light_Green: Aegis_HandFlare_Light_Base
	{
		type="Aegis_HandFlare_Light_Green";
	};
	class Aegis_HandFlare_Light_Sparks: Aegis_HandFlare_Light_Sparks_Base
	{
		type="Aegis_HandFlare_Light_Sparks_Green";
	};
	// Particles
	class Aegis_HandFlare_Effect_Smoke_Green: Aegis_HandFlare_Effect_Smoke_Base
	{
		type="Aegis_HandFlare_Effect_Smoke_Green";
	};
	class Aegis_HandFlare_Effect_Smoke_Green_UW: Aegis_HandFlare_Effect_Smoke_Base_UW
	{
		type="Aegis_HandFlare_Effect_Smoke_Green_UW";
	};
	class Aegis_HandFlare_Effect_Sparks_Green: Aegis_HandFlare_Effect_Sparks_Base
	{
		type="Aegis_HandFlare_Effect_Sparks_Green";
	};
	class Aegis_HandFlare_Effect_Flame_Green: Aegis_HandFlare_Effect_Flame_Base
	{
		type="Aegis_HandFlare_Effect_Flame_Green";
	};
};
/* Signal Flares */
// Signal Flare Particle Effects Base
class Aegis_SignalFlare_Effect_Base: Aegis_HandFlare_Effect_Base
{
	// Lights
	class Aegis_SignalFlare_Light_Base: Aegis_HandFlare_Light_Base
	{
		lifeTime=290; //Flare light cuts out ten seconds before end of model
	};
	class Aegis_SignalFlare_Light_Sparks_Base: Aegis_HandFlare_Light_Sparks_Base
	{
		lifeTime=260; //Spark Light cuts out as sparks do
	};
	// Particles
	class Aegis_SignalFlare_Effect_Smoke_Base: Aegis_HandFlare_Effect_Smoke_Base
	{
		lifeTime=300; //smoke cuts out at same time as model does
	};
	class Aegis_SignalFlare_Effect_Smoke_Base_UW: Aegis_HandFlare_Effect_Smoke_Base_UW
	{
		lifeTime=290; //UW bubbles cut out at same time as flame does
	};
	class Aegis_SignalFlare_Effect_Sparks_Base: Aegis_HandFlare_Effect_Sparks_Base
	{
		lifeTime=260; //sparks cut out fourty seconds before end of model
	};
	class Aegis_SignalFlare_Effect_Flame_Base: Aegis_HandFlare_Effect_Flame_Base
	{
		lifeTime=290; //flame cuts out ten seconds before end of model
	};
};
// Signal Flare Particle Effects Colours
class Aegis_SignalFlare_Effect_Red: Aegis_SignalFlare_Effect_Base
{
	// Lights
	class Aegis_SignalFlare_Light_Red: Aegis_SignalFlare_Light_Base
	{
		type="Aegis_SignalFlare_Light_Red";
	};
	class Aegis_SignalFlare_Light_Sparks_Red: Aegis_SignalFlare_Light_Sparks_Base
	{
		type="Aegis_HandFlare_Light_Sparks_Red";
	};
	// Particles
	class Aegis_SignalFlare_Effect_Smoke_Red: Aegis_SignalFlare_Effect_Smoke_Base
	{
		type="Aegis_SignalFlare_Effect_Smoke_Red";
	};
	class Aegis_SignalFlare_Effect_Smoke_Red_UW: Aegis_SignalFlare_Effect_Smoke_Base_UW
	{
		type="Aegis_SignalFlare_Effect_Smoke_Red_UW";
	};
	class Aegis_SignalFlare_Effect_Sparks_Red: Aegis_SignalFlare_Effect_Sparks_Base
	{
		type="Aegis_HandFlare_Effect_Sparks_Red";
	};
	class Aegis_SignalFlare_Effect_Flame_Red: Aegis_SignalFlare_Effect_Flame_Base
	{
		type="Aegis_HandFlare_Effect_Flame_Red";
	};
};
class Aegis_SignalFlare_Effect_Green: Aegis_SignalFlare_Effect_Base
{
	class Aegis_SignalFlare_Light_Green: Aegis_SignalFlare_Light_Base
	{
		type="Aegis_SignalFlare_Light_Green";
	};
	class Aegis_SignalFlare_Light_Sparks_Green: Aegis_SignalFlare_Light_Sparks_Base
	{
		type="Aegis_HandFlare_Light_Sparks_Green";
	};
	// Particles
	class Aegis_SignalFlare_Effect_Smoke_Green: Aegis_SignalFlare_Effect_Smoke_Base
	{
		type="Aegis_SignalFlare_Effect_Smoke_Green";
	};
	class Aegis_SignalFlare_Effect_Smoke_Green_UW: Aegis_SignalFlare_Effect_Smoke_Base_UW
	{
		type="Aegis_SignalFlare_Effect_Smoke_Green_UW";
	};
	class Aegis_SignalFlare_Effect_Sparks_Green: Aegis_SignalFlare_Effect_Sparks_Base
	{
		type="Aegis_HandFlare_Effect_Sparks_Green";
	};
	class Aegis_SignalFlare_Effect_Flame_Green: Aegis_SignalFlare_Effect_Flame_Base
	{
		type="Aegis_HandFlare_Effect_Flame_Green";
	};
};
class Aegis_BTR100_30mm_Cartridge
{
    class Aegis_BTR100_30mm_Cartridge
    {
        simulation = "particles";
        type = "Aegis_BTR100_30mm_Cartridge";
        position[] = { 0, 0, 0 };
        intensity = 1;
        interval = 1;
        lifeTime = 0.05;
        qualityLevel = 2;
    };
    class Aegis_BTR100_30mm_CartridgeMed
    {
        simulation = "particles";
        type = "Aegis_BTR100_30mm_Cartridge";
        position[] = { 0, 0, 0 };
        intensity = 1;
        interval = 1;
        lifeTime = 0.05;
        qualityLevel = 1;
    };
};