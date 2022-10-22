/*
- Inheritance and definitions for planes
- Placed in CfgVehicles
*/

class Air;
class Plane: Air
{
	class Turrets;
    class HitPoints;
};
class Plane_Base_F: Plane
{
    class AnimationSources;
    class HitPoints: HitPoints
    {
        class HitHull;
    };
    class NewTurret;
    class Turrets: Turrets
    {
        class CopilotTurret;
    };
    class Components;
    class ViewPilot;
};
class PlaneWreck;