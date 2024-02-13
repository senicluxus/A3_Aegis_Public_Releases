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
class Aegis_HandFlare_Effect_Red
{
	//Lights
	class Aegis_HandFlare_Light_Red
	{
		simulation="light";
		type="Aegis_HandFlare_Light_Red";
		lifeTime=590; //Flare light cuts out ten seconds before end of model
	};
	class Aegis_HandFlare_Light_Sparks
	{
		simulation="light";
		type="Aegis_HandFlare_Light_Sparks";
		position[]={0,0,0};
		intensity=0.0080000004;
		interval=1;
		lifeTime=560; //Spark Light cuts out as sparks do
	};
	//Particles
	class Aegis_HandFlare_Effect_Smoke_Red
	{
		simulation="particles";
		type="Aegis_HandFlare_Effect_Smoke_Red";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=600; //smoke cuts out at same time as model does
	};
	class Aegis_HandFlare_Effect_Smoke_Red_UW
	{
		simulation="particles";
		type="Aegis_HandFlare_Effect_Smoke_Red_UW";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=590; //UW bubbles cut out at same time as flame does
	};
	class Aegis_HandFlare_Effect_Sparks
	{
		simulation="particles";
		type="Aegis_HandFlare_Effect_Sparks";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=560; //sparks cut out fourty seconds before end of model
	};
	class Aegis_HandFlare_Effect_Flame
	{
		simulation="particles";
		type="Aegis_HandFlare_Effect_Flame";
		lifeTime=590; //flame cuts out ten seconds before end of model
	};
};
class Aegis_HandFlare_Effect_Green
{
	//Lights
	class Aegis_HandFlare_Light_Green
	{
		simulation="light";
		type="Aegis_HandFlare_Light_Green";
		lifeTime=590;
	};
	class Aegis_HandFlare_Light_Sparks
	{
		simulation="light";
		type="Aegis_HandFlare_Light_Sparks";
		position[]={0,0,0};
		intensity=0.0080000004;
		interval=1;
		lifeTime=560;
	};
	//Particles
	class Aegis_HandFlare_Effect_Smoke_Green
	{
		simulation="particles";
		type="Aegis_HandFlare_Effect_Smoke_Green";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=600;
	};
	class Aegis_HandFlare_Effect_Smoke_Green_UW
	{
		simulation="particles";
		type="Aegis_HandFlare_Effect_Smoke_Green_UW";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=590;
	};
	class Aegis_HandFlare_Effect_Sparks
	{
		simulation="particles";
		type="Aegis_HandFlare_Effect_Sparks";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=560;
	};
	class Aegis_HandFlare_Effect_Flame
	{
		simulation="particles";
		type="Aegis_HandFlare_Effect_Flame";
		lifeTime=590;
	};
};