class Car;
class Car_F: Car
{
    class Sounds;
    class HitPoints
    {
        class HitBody;
        class HitEngine;
        class HitFuel;
        class HitHull;
        class HitLFWheel;
        class HitLBWheel;
        class HitLMWheel;
        class HitLF2Wheel;
        class HitRFWheel;
        class HitRBWheel;
        class HitRMWheel;
        class HitRF2Wheel;
        class HitGlass1;
        class HitGlass2;
        class HitGlass3;
        class HitGlass4;
        class HitGlass5;
        class HitGlass6;
    };
};
class Wheeled_APC_F: Car_F
{
    selectionBrakeLights = "brzdove svetlo";
    selectionBackLights = "zadni svetlo";
    class ViewPilot;
    class ViewOptics;
    class ViewCargo;
    class Sounds: Sounds
    {
        class Engine;
        class Movement;
    };
    class NewTurret;
    class Turrets
    {
        class MainTurret: NewTurret
        {
            class ViewOptics;
            class ViewGunner;
            class Turrets
            {
                class CommanderOptics;
            };
            class Components;
        };
    };
    class AnimationSources;
    class EventHandlers;
    class Components;
};