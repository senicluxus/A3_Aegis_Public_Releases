/*
- Inheritance and definitions for UAVs
- Placed in CfgVehicles
*/

class Air;
class Plane: Air
{
    class HitPoints;
};
class Plane_Base_F: Plane
{
    class AnimationSources;
    class HitPoints: HitPoints
    {
        class HitHull;
    };
    class Components;
};
class UAV: Plane
{
    class NewTurret;
    class ViewPilot;
    class ViewOptics;
    class AnimationSources;
    class Components;
};
class PlaneWreck;