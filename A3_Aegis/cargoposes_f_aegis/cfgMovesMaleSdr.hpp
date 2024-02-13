class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class Crew;
		class PreciseCrew;
		class KIA_Driver_Boat_Civil_02: DefaultDie
		{
			actions = DeadActions;
			file = "\A3_Aegis\Cargoposes_F_Aegis\Anim\Driver_Boat_Civil_02_KIA.rtm";
			looped = false;
			terminal = true;
			soundEnabled = false;
			connectTo[] = {Unconscious,0.1};
		};
		class Driver_Boat_Civil_02: Crew
		{
			file = "\A3_Aegis\Cargoposes_F_Aegis\Anim\Driver_Boat_Civil_02.rtm";
			interpolateTo[] = {KIA_Driver_Boat_Civil_02,true};
			leftHandIKCurve[] = {1};
			rightHandIKCurve[] = {1};
		};
		class KIA_Heli_Attack_03_pilot: DefaultDie
		{
			actions = DeadActions;
			file = "\A3_Aegis\Cargoposes_F_Aegis\Anim\Heli_Attack_03_pilot_KIA.rtm";
            speed = 0.5;
			looped = false;
			terminal = true;
			soundEnabled = false;
			connectTo[] = {Unconscious,0.1};
		};
		class Heli_Attack_03_pilot: Crew
		{
			file = "\A3_Aegis\Cargoposes_F_Aegis\Anim\Heli_Attack_03_pilot.rtm";
			interpolateTo[] = {KIA_Heli_Attack_03_pilot,true};
			leftHandIKCurve[] = {1};
			rightHandIKCurve[] = {1};
		};
		class KIA_Heli_Attack_03_gunner: DefaultDie
		{
			actions = DeadActions;
			file = "\A3_Aegis\Cargoposes_F_Aegis\Anim\Heli_Attack_03_gunner_KIA.rtm";
            speed = 0.5;
			looped = false;
			terminal = true;
			soundEnabled = false;
			connectTo[] = {Unconscious,0.1};
		};
		class Heli_Attack_03_gunner: Crew
		{
			file = "\A3_Aegis\Cargoposes_F_Aegis\Anim\Heli_Attack_03_gunner.rtm";
			interpolateTo[] = {KIA_Heli_Attack_03_gunner,true};
			leftHandIKCurve[] = {1};
			rightHandIKCurve[] = {1};
		};
		class KIA_Passenger_Plane_Transport_01: DefaultDie
		{
			actions = DeadActions;
			file = "\A3_Aegis\Cargoposes_F_Aegis\Anim\Passenger_Plane_Transport_01_KIA.rtm";
			looped = false;
			terminal = true;
			soundEnabled = false;
			connectTo[] = {Unconscious,0.1};
		};
		class Passenger_Plane_Transport_01: Crew
		{
			file = "\A3_Aegis\Cargoposes_F_Aegis\Anim\Passenger_Plane_Transport_01.rtm";
			interpolateTo[] = {KIA_Passenger_Plane_Transport_01,true};
			leftHandIKCurve[] = {1};
			rightHandIKCurve[] = {1};
		};
		class Pilot_Plane_Fighter_05: Crew
		{
			file = "\A3_Aegis\Cargoposes_F_Aegis\Anim\pilot_Plane_Fighter_05_idle.rtm";
			interpolateTo[] = {KIA_Pilot_Plane_Fighter,1};
			leftHandIKCurve[] = {1};
			rightHandIKCurve[] = {1};
		};
		class Pilot_Plane_Fighter_05_GetIn: PreciseCrew
		{
			file = "\A3_Aegis\Cargoposes_F_Aegis\Anim\pilot_Plane_Fighter_05_get_in.rtm";
			speed = -6.2;
			looped = false;
			connectTo[] = {};
			interpolateTo[] =
			{
				Pilot_Plane_Fighter_05,0.2,
				KIA_Pilot_Plane_Fighter,1
			};
			variantsAI[] = {};
			variantsPlayer[] = {};
			variantAfter[] = {2.7,2.7,2.7};
			useIdles = false;
			leftHandIKCurve[] = {0};
			rightHandIKCurve[] = {0};
			headBobMode = true;
			headBobStrength = 0.8;
		};
		class Pilot_Plane_Fighter_05_GetOut: Pilot_Plane_Fighter_05_GetIn
		{
			file = "\A3_Aegis\Cargoposes_F_Aegis\Anim\pilot_Plane_Fighter_05_get_out.rtm";
			speed = -5;
			connectTo[] = {AmovPercMstpSlowWpstDnon,0.02};
			interpolateTo[] = {KIA_Pilot_Plane_Fighter,0.01};
			variantsPlayer[] = {};
		};
		class KIA_Pilot_Plane_Transport_01: DefaultDie
		{
			actions = DeadActions;
			file = "\A3_Aegis\Cargoposes_F_Aegis\Anim\Pilot_Plane_Transport_01_KIA.rtm";
			looped = false;
			terminal = true;
			soundEnabled = false;
			connectTo[] = {Unconscious,0.1};
		};
		class Pilot_Plane_Transport_01: Crew
		{
			file = "\A3_Aegis\Cargoposes_F_Aegis\Anim\Pilot_Plane_Transport_01.rtm";
			interpolateTo[] = {KIA_Pilot_Plane_Transport_01,true};
			leftHandIKCurve[] = {1};
			rightHandIKCurve[] = {1};
		};
		class Driver_APC_Wheeled_04_in: Crew
		{
			file = "\A3_Aegis\Cargoposes_F_Aegis\Anim\driver_APC_Wheeled_04_in.rtm";
			interpolateTo[] =
            {
                KIA_Driver_APC_Wheeled_04,1,
                Driver_APC_Wheeled_04_out,1
            };
			speed = 0.34483;
			leftHandIKCurve[] = {1};
			rightHandIKCurve[] = {1};
			boundingSphere = 2.5;
		};
		class Driver_APC_Wheeled_04_out: Crew
		{
			file = "\A3_Aegis\Cargoposes_F_Aegis\Anim\driver_APC_Wheeled_04_out.rtm";
			interpolateTo[] =
            {
                KIA_Driver_APC_Wheeled_04,1,
                Driver_APC_Wheeled_04_in,1
            };
			speed = 0.37037;
			leftHandIKCurve[] = {1};
			rightHandIKCurve[] = {1};
		};
		class KIA_Driver_APC_Wheeled_04: DefaultDie
		{
			actions = DeadActions;
			file = "\A3_Aegis\Cargoposes_F_Aegis\Anim\driver_APC_Wheeled_04_kia.rtm";
			looped = false;
			terminal = true;
			soundEnabled = false;
			connectTo[] = {Unconscious,0.1};
		};
		class Gunner_APC_Wheeled_04_in: Crew
		{
			file = "\A3_Aegis\Cargoposes_F_Aegis\Anim\gunner_APC_Wheeled_04_in.rtm";
			interpolateTo[] =
            {
                KIA_Gunner_APC_Wheeled_04,1,
                Gunner_APC_Wheeled_04_out,1
            };
			speed = 0.37037;
			leftHandIKCurve[] = {1};
			rightHandIKCurve[] = {1};
			boundingSphere = 2.5;
		};
		class Gunner_APC_Wheeled_04_out: Crew
		{
			file = "\A3_Aegis\Cargoposes_F_Aegis\Anim\gunner_APC_Wheeled_04_out.rtm";
			interpolateTo[] =
            {
                KIA_Gunner_APC_Wheeled_04,1,
                Gunner_APC_Wheeled_04_in,1
            };
			speed = 0.37037;
			leftHandIKCurve[] = {1};
			rightHandIKCurve[] = {1};
		};
		class KIA_Gunner_APC_Wheeled_04: DefaultDie
		{
			actions = DeadActions;
			file = "\A3_Aegis\Cargoposes_F_Aegis\Anim\gunner_APC_Wheeled_04_kia.rtm";
			looped = false;
			terminal = true;
			soundEnabled = false;
			connectTo[] = {Unconscious,0.1};
		};
		class Commander_APC_Wheeled_04_in: Crew
		{
			file = "\A3_Aegis\Cargoposes_F_Aegis\Anim\commander_APC_Wheeled_04_in.rtm";
			interpolateTo[] =
            {
                KIA_Commander_APC_Wheeled_04,1,
                Commander_APC_Wheeled_04_out,1
            };
			speed = 0.32609;
			leftHandIKCurve[] = {1};
			rightHandIKCurve[] = {1};
			boundingSphere = 2.5;
		};
		class Commander_APC_Wheeled_04_out: Crew
		{
			file = "\A3_Aegis\Cargoposes_F_Aegis\Anim\commander_APC_Wheeled_04_out.rtm";
			interpolateTo[] =
            {
                KIA_Commander_APC_Wheeled_04,1,
                Commander_APC_Wheeled_04_in,1
            };
			speed = 0.34483;
			leftHandIKCurve[] = {1};
			rightHandIKCurve[] = {1};
		};
		class KIA_Commander_APC_Wheeled_04: DefaultDie
		{
			actions = DeadActions;
			file = "\A3_Aegis\Cargoposes_F_Aegis\Anim\commander_APC_Wheeled_04_kia.rtm";
			looped = false;
			terminal = true;
			soundEnabled = false;
			connectTo[] = {Unconscious,0.1};
		};
		class KIA_Heli_Attack_04_pilot: DefaultDie
		{
			actions = DeadActions;
			file = "\A3_Aegis\Cargoposes_F_Aegis\Anim\Heli_Attack_04_pilot_KIA.rtm";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
			connectTo[]=
			{
				"Unconscious",
				0.1
			};
		};
		class Heli_Attack_04_pilot: Crew
		{
			file="\A3_Aegis\Cargoposes_F_Aegis\Anim\Heli_Attack_04_pilot.rtm";
			interpolateTo[]=
			{
				"KIA_Heli_Attack_04_pilot",
				1
			};
			leftHandIKCurve[] = {1};
			rightHandIKCurve[] = {1};
			leftHandIKBeg = 1;
			leftHandIKEnd = 1;
			leaning = "crewShake_half";
		};
		class KIA_Heli_Attack_04_gunner: DefaultDie
		{
			actions = DeadActions;
			file = "\A3_Aegis\Cargoposes_F_Aegis\Anim\Heli_Attack_04_gunner_KIA.rtm";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
			connectTo[]=
			{
				"Unconscious",
				0.1
			};
		};
		class Heli_Attack_04_gunner: Crew
		{
			file = "\A3_Aegis\Cargoposes_F_Aegis\Anim\Heli_Attack_04_gunner.rtm";
			interpolateTo[]=
			{
				"KIA_Heli_Attack_04_gunner",
				1
			};
			leaning = "crewShake_half";
		};
		class KIA_Passenger_Heli_Attack_04: DefaultDie
		{
			actions = DeadActions;
			file = "\A3_Aegis\Cargoposes_F_Aegis\Anim\Heli_Attack_04_cargo_KIA.rtm";
			looped = false;
			terminal = true;
			soundEnabled = false;
			connectTo[] = {Unconscious,0.1};
		};
		class Passenger_Heli_Attack_04: Crew
		{
			file = "\A3_Aegis\Cargoposes_F_Aegis\Anim\Heli_Attack_04_cargo.rtm";
			interpolateTo[] = {KIA_Passenger_Heli_Attack_04,true};
			leftHandIKCurve[] = {1};
			rightHandIKCurve[] = {1};
		};
	};
};