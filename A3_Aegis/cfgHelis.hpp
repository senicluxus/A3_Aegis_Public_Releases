/*
- Inheritance and definitions for helicopters
- Placed in CfgVehicles
*/

class Air;
class Helicopter: Air
{
    class Turrets;
    class HitPoints;
};
class Helicopter_Base_F: Helicopter
{
    class HitPoints: HitPoints
    {
        class HitHull;
        class HitFuel;
        class HitAvionics;
        class HitMissiles;
        class HitEngine;
        class HitHRotor;
        class HitVRotor;
        class HitGlass1;
        class HitGlass2;
        class HitGlass3;
        class HitGlass4;
        class HitGlass5;
        class HitGlass6;
        class HitWinch;
    };
    class Turrets: Turrets
    {
        class MainTurret;
    };
    class AnimationSources;
    class EventHandlers;
    class ViewOptics;
    class ViewPilot;
    class Components;
};
class Helicopter_Base_H: Helicopter_Base_F
{
    class EventHandlers;
    class Turrets: Turrets
    {
        class CopilotTurret;
		class MainTurret;
    };
    class HitPoints: HitPoints
    {
        class HitHull;
        class HitFuel;
        class HitEngine;
        class HitAvionics;
        class HitVRotor;
        class HitHRotor;
        class HitGlass1;
        class HitGlass2;
        class HitGlass3;
        class HitGlass4;
        class HitGlass5;
        class HitGlass6;
    };
    class AnimationSources;
    class ViewPilot;
    class ViewOptics;
    class Components;
    class RotorLibHelicopterProperties;
};