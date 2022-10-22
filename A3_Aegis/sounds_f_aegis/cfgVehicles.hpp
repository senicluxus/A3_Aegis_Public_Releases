class CfgVehicles
{
    // Arma 3
    class Helicopter;
    class Helicopter_Base_F;
    class Plane_Base_F;
	class Boat_F;
	class ParachuteBase: Helicopter
	{
		soundGetIn[] = {"\A3\Sounds_F\characters\parachute\parachute_open",db-4,1,50};
		soundGetOut[] = {"\A3\Sounds_F\characters\parachute\parachute_landing",db-4,1,50};
		class Sounds
		{
			class Parachute_Flapping_Loop_01
			{
				sound[] = {"\A3\Sounds_F\characters\parachute\Parachute_Flapping_Loop_01",db-4,1,50};
				frequency = 1;
				volume = camint * (abs speed) factor [0, 5]);
			};
			class Parachute_Flapping_Loop_01_Ext
			{
				sound[] = {"\A3\Sounds_F\characters\parachute\Parachute_Flapping_Loop_01_Ext",db0,1,200};
				frequency = 1;
				volume = camext * (abs speed) factor [0, 5]);
			};
			class parachute_glide_loop
			{
				sound[] = {"\A3\Sounds_F\characters\parachute\parachute_glide_loop",db-13,1,75};
				frequency = 1;
				volume = camint * (abs speed) factor [0, 5]);
			};
		};
	};
	class Plane_Fighter_03_base_F: Plane_Base_F
	{
        class GStress
        {
            sound[] = {"\A3\Sounds_F\vehicles\noises\vehicle_stress2e",db4,1,50};
            frequency = 1;
            volume = engineOn * (1-camPos) * (gmeterZ factor[1, 2.5]);
        };
        class SpeedStress
        {
            sound[] = {"\A3\Sounds_F\vehicles\noises\vehicle_stress3",db-6,1,50};
            frequency = 1;
            volume = (1-camPos)*(speed factor[60,80]);
        };
        /*
        class GBreathing
        {
            sound[] = {"\A3\Sounds_F\characters\human-sfx\diver-breath-4",db-5,1,50};
            frequency = 1;
            volume = engineOn * (1-camPos) * (gmeterZ factor[1, 2.5]);
        };
        */
    };
	class Plane_CAS_01_base_F: Plane_Base_F
	{
        class GStress
        {
            sound[] = {"\A3\Sounds_F\vehicles\noises\vehicle_stress2e",db4,1,50};
            frequency = 1;
            volume = engineOn * (1-camPos) * (gmeterZ factor[1, 2.5]);
        };
        class SpeedStress
        {
            sound[] = {"\A3\Sounds_F\vehicles\noises\vehicle_stress3",db-6,1,50};
            frequency = 1;
            volume = (1-camPos)*(speed factor[60,80]);
        };
        /*
        class GBreathing
        {
            sound[] = {"\A3\Sounds_F\characters\human-sfx\diver-breath-4",db-5,1,50};
            frequency = 1;
            volume = engineOn * (1-camPos) * (gmeterZ factor[1, 2.5]);
        };
        */
    };
	class Plane_CAS_02_base_F: Plane_Base_F
	{
        class GStress
        {
            sound[] = {"\A3\Sounds_F\vehicles\noises\vehicle_stress2e",db4,1,50};
            frequency = 1;
            volume = engineOn * (1-camPos) * (gmeterZ factor[1, 2.5]);
        };
        class SpeedStress
        {
            sound[] = {"\A3\Sounds_F\vehicles\noises\vehicle_stress3",db-6,1,50};
            frequency = 1;
            volume = (1-camPos)*(speed factor[60,80]);
        };
        /*
        class GBreathing
        {
            sound[] = {"\A3\Sounds_F\characters\human-sfx\diver-breath-4",db-5,1,50};
            frequency = 1;
            volume = engineOn * (1-camPos) * (gmeterZ factor[1, 2.5]);
        };
        */
    };
    // Arma 3 Apex
	class VTOL_Base_F;
	class VTOL_01_base_F: VTOL_Base_F
	{
		soundGearUp[] = {"\A3\Sounds_F_Exp\vehicles\air\VTOL_02\gear_up",db-2,1,150};
		soundGearDown[] = {"\A3\Sounds_F_Exp\vehicles\air\VTOL_02\gear_down",db-2,1,150};
		soundFlapsUp[] = {"\A3\Sounds_F_Exp\vehicles\air\VTOL_02\flaps_up",db-4,1,100};
		soundFlapsDown[] = {"\A3\Sounds_F_Exp\vehicles\air\VTOL_02\flaps_down",db-4,1,100};
	};
    // Arma 3 Jets
	class Plane_Fighter_01_Base_F: Plane_Base_F
	{
        class GStress
        {
            sound[] = {"\A3\Sounds_F\vehicles\noises\vehicle_stress2e",db4,1,50};
            frequency = 1;
            volume = engineOn * (1-camPos) * (gmeterZ factor[1, 2.5]);
        };
        class SpeedStress
        {
            sound[] = {"\A3\Sounds_F\vehicles\noises\vehicle_stress3",db-6,1,50};
            frequency = 1;
            volume = (1-camPos)*(speed factor[60,80]);
        };
        /*
        class GBreathing
        {
            sound[] = {"\A3\Sounds_F\characters\human-sfx\diver-breath-4",db-5,1,50};
            frequency = 1;
            volume = engineOn * (1-camPos) * (gmeterZ factor[1, 2.5]);
        };
        */
    };
	class Plane_Fighter_02_Base_F: Plane_Base_F
	{
        class GStress
        {
            sound[] = {"\A3\Sounds_F\vehicles\noises\vehicle_stress2e",db4,1,50};
            frequency = 1;
            volume = engineOn * (1-camPos) * (gmeterZ factor[1, 2.5]);
        };
        class SpeedStress
        {
            sound[] = {"\A3\Sounds_F\vehicles\noises\vehicle_stress3",db-6,1,50};
            frequency = 1;
            volume = (1-camPos)*(speed factor[60,80]);
        };
        /*
        class GBreathing
        {
            sound[] = {"\A3\Sounds_F\characters\human-sfx\diver-breath-4",db-5,1,50};
            frequency = 1;
            volume = engineOn * (1-camPos) * (gmeterZ factor[1, 2.5]);
        };
        */
    };
	class Plane_Fighter_04_Base_F: Plane_Base_F
	{
        class GStress
        {
            sound[] = {"\A3\Sounds_F\vehicles\noises\vehicle_stress2e",db4,1,50};
            frequency = 1;
            volume = engineOn * (1-camPos) * (gmeterZ factor[1, 2.5]);
        };
        class SpeedStress
        {
            sound[] = {"\A3\Sounds_F\vehicles\noises\vehicle_stress3",db-6,1,50};
            frequency = 1;
            volume = (1-camPos)*(speed factor[60,80]);
        };
        /*
        class GBreathing
        {
            sound[] = {"\A3\Sounds_F\characters\human-sfx\diver-breath-4",db-5,1,50};
            frequency = 1;
            volume = engineOn * (1-camPos) * (gmeterZ factor[1, 2.5]);
        };
        */
    };
    // Arma 3 Aegis
	class Heli_Attack_03_base_F: Helicopter_Base_F
    {
        attenuationEffectType = HeliAttenuation;
		emptySound[] = {"",0,1};
		soundGeneralCollision1[] = {"\A3\Sounds_F\vehicles\crashes\helis\Heli_coll_default_int_1",db10,1,500};
		soundGeneralCollision2[] = {"\A3\Sounds_F\vehicles\crashes\helis\Heli_coll_default_int_2",db10,1,500};
		soundGeneralCollision3[] = {"\A3\Sounds_F\vehicles\crashes\helis\Heli_coll_default_int_3",db10,1,500};
		soundCrashes[] =
        {
            soundGeneralCollision1,1/3,
            soundGeneralCollision2,1/3,
            soundGeneralCollision3,1/3
        };
		soundLandCrashes[] =
        {
            emptySound,0
        };
		soundBuildingCrash[] =
        {
            soundGeneralCollision1,1/3,
            soundGeneralCollision2,1/3,
            soundGeneralCollision3,1/3
        };
		soundArmorCrash[] =
        {
            soundGeneralCollision1,1/3,
            soundGeneralCollision2,1/3,
            soundGeneralCollision3,1/3
        };
		soundWoodCrash[] =
        {
            soundGeneralCollision1,1/3,
            soundGeneralCollision2,1/3,
            soundGeneralCollision3,1/3
        };
		soundBushCollision1[] = {"\A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_1",db10,1,500};
		soundBushCollision2[] = {"\A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_2",db10,1,500};
		soundBushCollision3[] = {"\A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_3",db10,1,500};
		soundBushCrash[] =
        {
            soundBushCollision1,1/3,
            soundBushCollision2,1/3,
            soundBushCollision3,1/3
        };
		soundWaterCollision1[] = {"\A3\Sounds_F\vehicles\crashes\helis\Heli_coll_water_ext_1",db0,1,300};
		soundWaterCollision2[] = {"\A3\Sounds_F\vehicles\crashes\helis\Heli_coll_water_ext_2",db0,1,300};
		soundWaterCrashes[] =
        {
            soundWaterCollision1,1/2,
            soundWaterCollision2,1/2
        };
		soundDammage[] = {"\A3\Sounds_F\vehicles\crashes\helis\Heli_crash_default_int_1",10,1};
		soundGetIn[] = {"\A3_Aegis\Sounds_F_Aegis\vehicles\air\Heli_Attack_03\close",db0,1};
		soundGetOut[] = {"\A3_Aegis\Sounds_F_Aegis\vehicles\air\Heli_Attack_03\open",db0,1,50};
		soundEngineOnInt[] = {"\A3_Aegis\Sounds_F_Aegis\vehicles\air\Heli_Attack_03\Heli_Attack_03_int_start",db-7,1};
		soundEngineOnExt[] = {"\A3_Aegis\Sounds_F_Aegis\vehicles\air\Heli_Attack_03\Heli_Attack_03_ext_start",db5,1,600};
		soundEngineOffInt[] = {"\A3_Aegis\Sounds_F_Aegis\vehicles\air\Heli_Attack_03\Heli_Attack_03_int_stop",db-7,1};
		soundEngineOffExt[] = {"\A3_Aegis\Sounds_F_Aegis\vehicles\air\Heli_Attack_03\Heli_Attack_03_ext_stop",db5,1,600};
		soundLocked[] = {"\A3\Sounds_F\weapons\Rockets\locked_1",db0,1};
		soundIncommingMissile[] = {"\A3\Sounds_F\vehicles\air\noises\alarm_locked_by_missile_2",db-10,1};
		rotorDamageInt[] = {"\A3\Sounds_F\vehicles\air\noises\heli_damage_rotor_int_2",db0,1};
		rotorDamageOut[] = {"\A3\Sounds_F\vehicles\air\noises\heli_damage_rotor_ext_2",db8,1,300};
		rotorDamage[] =
        {
            rotorDamageInt,
            rotorDamageOut
        };
		tailDamageInt[] = {"\A3\Sounds_F\vehicles\air\noises\heli_damage_tail",db0,1};
		tailDamageOut[] = {"\A3\Sounds_F\vehicles\air\noises\heli_damage_tail",db0,1,300};
		tailDamage[] =
        {
            tailDamageInt,
            tailDamageOut
        };
		landingSoundInt0[] = {"\A3\Sounds_F\vehicles\air\noises\landing_wheels_small_int1",db10,1,100};
		landingSoundInt1[] = {"\A3\Sounds_F\vehicles\air\noises\landing_wheels_small_int2",db10,1,100};
		landingSoundInt[] =
        {
            landingSoundInt0,1/2,
            landingSoundInt1,1/2
        };
		landingSoundOut0[] = {"\A3\Sounds_F\vehicles\air\noises\landing_wheels_ext1",db15,1,500};
		landingSoundOut1[] = {"\A3\Sounds_F\vehicles\air\noises\landing_wheels_ext2",db15,1,500};
		landingSoundOut[] =
        {
            landingSoundOut0,1/2,
            landingSoundOut1,1/2
        };
		slingCargoAttach0[] = {"\A3\Sounds_F\vehicles\air\noises\SL_engineDownEndINT",db0,1};
		slingCargoAttach1[] = {"\A3\Sounds_F\vehicles\air\noises\SL_1hookLock",db5,1,200};
		slingCargoAttach[] =
        {
            slingCargoAttach0,
            slingCargoAttach1
        };
		slingCargoDetach0[] = {"\A3\Sounds_F\vehicles\air\noises\SL_engineUpEndINT",db0,1};
		slingCargoDetach1[] = {"\A3\Sounds_F\vehicles\air\noises\SL_1hookUnlock",db5,1,200};
		slingCargoDetach[] =
        {
            slingCargoDetach0,
            slingCargoDetach1
        };
		slingCargoDetachAir0[] = {"\A3\Sounds_F\vehicles\air\noises\SL_unhook_air_int",db0,1};
		slingCargoDetachAir1[] = {"\A3\Sounds_F\vehicles\air\noises\SL_unhook_air_ext",db0,1,300};
		slingCargoDetachAir[] =
        {
            slingCargoDetach0,
            slingCargoDetach1
        };
		slingCargoRopeBreak0[] = {"\A3\Sounds_F\vehicles\air\noises\SL_rope_break_int",db0,1};
		slingCargoRopeBreak1[] = {"\A3\Sounds_F\vehicles\air\noises\SL_rope_break_ext",db0,1,200};
		slingCargoRopeBreak[] =
        {
            slingCargoDetach0,
            slingCargoDetach1
        };
		class Sounds
		{
			class EngineExt
			{
				sound[] = {"\A3_Aegis\Sounds_F_Aegis\vehicles\air\Heli_Attack_03\Heli_Attack_03_ext_engine",db7,1,600};
				frequency = rotorSpeed;
				volume = camPos*((rotorSpeed-0.72)*4);
			};
			class RotorExt
			{
				sound[] = {"\A3_Aegis\Sounds_F_Aegis\vehicles\air\Heli_Attack_03\Heli_Attack_03_ext_rotor",db2,1,1100};
				frequency = 1.4*(rotorSpeed * (1 - rotorThrust/5));
				volume = camPos*(0 max (rotorSpeed-0.1))*(1 + rotorThrust);
                speed = 2;
			};
			class RotorSwist
			{
				sound[] = {"\A3_Aegis\Sounds_F_Aegis\vehicles\air\Heli_Attack_03\swist",db0,1,300};
				frequency = 1;
				volume = camPos * (rotorThrust factor [0.7, 0.9]);
			};
			class EngineInt
			{
				sound[] = {"\A3_Aegis\Sounds_F_Aegis\vehicles\air\Heli_Attack_03\Heli_Attack_03_int_engine",db-5,1};
				frequency = rotorSpeed;
				volume = (1-camPos)*((rotorSpeed-0.75)*4);
			};
			class RotorInt
			{
				sound[] = {"\A3_Aegis\Sounds_F_Aegis\vehicles\air\Heli_Attack_03\Heli_Attack_03_int_rotor",db1,1};
				frequency = rotorSpeed * (1 - rotorThrust/5);
				volume = (1-camPos)*(0 max (rotorSpeed-0.1))*(1 + rotorThrust);
			};
			class TransmissionDamageExt_phase1
			{
				sound[] = {"\A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_ext_1",db0,1,150};
				frequency = 0.66 + rotorSpeed / 3;
				volume = camPos * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5]);
			};
			class TransmissionDamageExt_phase2
			{
				sound[] = {"\A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_ext_2",db0,1,150};
				frequency = 0.66 + rotorSpeed / 3;
				volume = camPos * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5]);
			};
			class TransmissionDamageInt_phase1
			{
				sound[] = {"\A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_int_1",db0,1,150};
				frequency = 0.66 + rotorSpeed / 3;
				volume = (1 - camPos) * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5]);
			};
			class TransmissionDamageInt_phase2
			{
				sound[] = {"\A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_int_2",db0,1,150};
				frequency = 0.66 + rotorSpeed / 3;
				volume = (1 - camPos) * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5]);
			};
			class damageAlarmInt
			{
				sound[] = {"\A3\Sounds_F\vehicles\air\noises\heli_alarm_bluefor",db-10,1};
				frequency = 1;
				volume = engineOn * (1 - camPos) * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0, 0.001]);
			};
			class damageAlarmExt
			{
				sound[] = {"\A3\Sounds_F\vehicles\air\noises\heli_alarm_bluefor",db-13,1,20};
				frequency = 1;
				volume = engineOn * camPos * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0, 0.001]);
			};
			class rotorLowAlarmInt
			{
				sound[] = {"\A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low",db-10,1};
				frequency = 1;
				volume = engineOn * (1 - camPos) * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01]);
			};
			class rotorLowAlarmExt
			{
				sound[] = {"\A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low",db-13,1,20};
				frequency = 1;
				volume = engineOn * camPos * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01]);
			};
			class scrubLandInt
			{
				sound[] = {"\A3\Sounds_F\vehicles\air\noises\wheelsInt",db0,1,100};
				frequency = 1;
				volume = 2 * (1-camPos) * (scrubLand factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]));
			};
			class scrubLandExt
			{
				sound[] = {"\A3\Sounds_F\dummysound",db0,1,100};
				frequency = 1;
				volume = camPos * (scrubLand factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]));
			};
			class scrubBuildingInt
			{
				sound[] = {"\A3\Sounds_F\vehicles\air\noises\wheelsInt",db0,1,100};
				frequency = 1;
				volume = (1-camPos) * (scrubBuilding factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]));
			};
			class scrubBuildingExt
			{
				sound[] = {"\A3\Sounds_F\dummysound",db0,1,100};
				frequency = 1;
				volume = camPos * (scrubBuilding factor[0.02, 0.05]);
			};
			class scrubTreeInt
			{
				sound[] = {"\A3\Sounds_F\vehicles\air\noises\scrubTreeInt",db0,1,100};
				frequency = 1;
				volume = (1 - camPos) * ((scrubTree) factor [0, 0.01]);
			};
			class scrubTreeExt
			{
				sound[] = {"\A3\Sounds_F\vehicles\air\noises\scrubTreeExt",db0,1,100};
				frequency = 1;
				volume = camPos * ((scrubTree) factor [0, 0.01]);
			};
			class RainExt
			{
				sound[] = {"\A3\Sounds_F\vehicles\noises\rain1_ext",db0,1,100};
				frequency = 1;
				volume = camPos * (rain - rotorSpeed/2) * 2;
			};
			class RainInt
			{
				sound[] = {"\A3\Sounds_F\vehicles\noises\rain1_int",db0,1,100};
				frequency = 1;
				volume = (1-camPos)*(rain - rotorSpeed/2)*2;
			};
			class SlingLoadDownExt
			{
				sound[] = {"\A3\Sounds_F\vehicles\air\noises\SL_engineDownEXT",db2,1,500};
				frequency = 1;
				volume = camPos*(slingLoadActive factor [0,-1]);
			};
			class SlingLoadUpExt
			{
				sound[] = {"\A3\Sounds_F\vehicles\air\noises\SL_engineUpEXT",db2,1,500};
				frequency = 1;
				volume = camPos*(slingLoadActive factor [0,1]);
			};
			class SlingLoadDownInt
			{
				sound[] = {"\A3\Sounds_F\vehicles\air\noises\SL_engineDownINT",db0,1,500};
				frequency = 1;
				volume = (1-camPos)*(slingLoadActive factor [0,-1]);
			};
			class SlingLoadUpInt
			{
				sound[] = {"\A3\Sounds_F\vehicles\air\noises\SL_engineUpINT",db0,1,500};
				frequency = 1;
				volume = (1-camPos)*(slingLoadActive factor [0,1]);
			};
			class WindInt
			{
				sound[] = {"\A3\Sounds_F\vehicles\air\noises\wind_closed",db-8,1,50};
				frequency = 1;
				volume = (1-camPos)*(speed factor[5, 50])*(speed factor[5, 50]);
			};
			class GStress
			{
				sound[] = {"\A3\Sounds_F\vehicles\noises\vehicle_stress2b",db-8,1,50};
				frequency = 1;
				volume = engineOn * (1-camPos) * ((gmeterZ factor[1.5, 2.5]) + (gmeterZ factor[0.5, -0.5]));
			};
		};
		class SoundsExt
		{
			class SoundEvents{};
			class Sounds
			{
				class EngineExt
				{
					sound[] = {"\A3_Aegis\Sounds_F_Aegis\vehicles\air\Heli_Attack_03\Heli_Attack_03_ext_engine",db7,1,600};
					frequency = rotorSpeed;
					volume = camPos*((rotorSpeed-0.72)*4);
				};
				class RotorExt
				{
					sound[] = {"\A3_Aegis\Sounds_F_Aegis\vehicles\air\Heli_Attack_03\Heli_Attack_03_ext_rotor",db2,1,1100};
				    frequency = 1.4*(rotorSpeed * (1 - rotorThrust/5));
					volume = camPos*(0 max (rotorSpeed-0.1))*(1 + rotorThrust);
                    speed = 2;
				};
				class RotorSwist
				{
					sound[] = {"\A3_Aegis\Sounds_F_Aegis\vehicles\air\Heli_Attack_03\swist",db0,1,300};
					frequency = 1;
					volume = camPos * (rotorThrust factor [0.7, 0.9]);
				};
				class EngineInt
				{
					sound[] = {"\A3_Aegis\Sounds_F_Aegis\vehicles\air\Heli_Attack_03\Heli_Attack_03_int_engine",db-5,1};
					frequency = rotorSpeed;
					volume = (1-camPos)*((rotorSpeed-0.75)*4);
				};
				class RotorInt
				{
					sound[] = {"\A3_Aegis\Sounds_F_Aegis\vehicles\air\Heli_Attack_03\Heli_Attack_03_int_rotor",db1,1};
					frequency = rotorSpeed * (1 - rotorThrust/5);
					volume = (1-camPos)*(0 max (rotorSpeed-0.1))*(1 + rotorThrust);
				};
				class TransmissionDamageExt_phase1
				{
					sound[] = {"\A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_ext_1",db0,1,150};
					frequency = 0.66 + rotorSpeed / 3;
					volume = camPos * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5]);
				};
				class TransmissionDamageExt_phase2
				{
					sound[] = {"\A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_ext_2",db0,1,150};
					frequency = 0.66 + rotorSpeed / 3;
					volume = camPos * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5]);
				};
				class TransmissionDamageInt_phase1
				{
					sound[] = {"\A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_int_1",db0,1,150};
					frequency = 0.66 + rotorSpeed / 3;
					volume = (1 - camPos) * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5]);
				};
				class TransmissionDamageInt_phase2
				{
					sound[] = {"\A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_int_2",db0,1,150};
					frequency = 0.66 + rotorSpeed / 3;
					volume = (1 - camPos) * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5]);
				};
				class damageAlarmInt
				{
					sound[] = {"\A3\Sounds_F\vehicles\air\noises\heli_alarm_bluefor",db-10,1};
					frequency = 1;
					volume = engineOn * (1 - camPos) * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0, 0.001]);
				};
				class damageAlarmExt
				{
					sound[] = {"\A3\Sounds_F\vehicles\air\noises\heli_alarm_bluefor",db-13,1,20};
					frequency = 1;
					volume = engineOn * camPos * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0, 0.001]);
				};
				class rotorLowAlarmInt
				{
					sound[] = {"\A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low",db-10,1};
					frequency = 1;
					volume = engineOn * (1 - camPos) * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01]);
				};
				class rotorLowAlarmExt
				{
					sound[] = {"\A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low",db-13,1,20};
					frequency = 1;
					volume = engineOn * camPos * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01]);
				};
				class scrubLandInt
				{
					sound[] = {"\A3\Sounds_F\vehicles\air\noises\wheelsInt",db0,1,100};
					frequency = 1;
					volume = 2 * (1-camPos) * (scrubLand factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]));
				};
				class scrubLandExt
				{
					sound[] = {"\A3\Sounds_F\dummysound",db0,1,100};
					frequency = 1;
					volume = camPos * (scrubLand factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]));
				};
				class scrubBuildingInt
				{
					sound[] = {"\A3\Sounds_F\vehicles\air\noises\wheelsInt",db0,1,100};
					frequency = 1;
					volume = (1-camPos) * (scrubBuilding factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]));
				};
				class scrubBuildingExt
				{
					sound[] = {"\A3\Sounds_F\dummysound",db0,1,100};
					frequency = 1;
					volume = camPos * (scrubBuilding factor[0.02, 0.05]);
				};
				class scrubTreeInt
				{
					sound[] = {"\A3\Sounds_F\vehicles\air\noises\scrubTreeInt",db0,1,100};
					frequency = 1;
					volume = (1 - camPos) * ((scrubTree) factor [0, 0.01]);
				};
				class scrubTreeExt
				{
					sound[] = {"\A3\Sounds_F\vehicles\air\noises\scrubTreeExt",db0,1,100};
					frequency = 1;
					volume = camPos * ((scrubTree) factor [0, 0.01]);
				};
				class RainExt
				{
					sound[] = {"\A3\Sounds_F\vehicles\noises\rain1_ext",db0,1,100};
					frequency = 1;
					volume = camPos * (rain - rotorSpeed/2) * 2;
				};
				class RainInt
				{
					sound[] = {"\A3\Sounds_F\vehicles\noises\rain1_int",db0,1,100};
					frequency = 1;
					volume = (1-camPos)*(rain - rotorSpeed/2)*2;
				};
				class SlingLoadDownExt
				{
					sound[] = {"\A3\Sounds_F\vehicles\air\noises\SL_engineDownEXT",db0,1,500};
					frequency = 1;
					volume = camPos*(slingLoadActive factor [0,-1]);
				};
				class SlingLoadUpExt
				{
					sound[] = {"\A3\Sounds_F\vehicles\air\noises\SL_engineUpEXT",db0,1,500};
					frequency = 1;
					volume = camPos*(slingLoadActive factor [0,1]);
				};
				class SlingLoadDownInt
				{
					sound[] = {"\A3\Sounds_F\vehicles\air\noises\SL_engineDownINT",db0,1,500};
					frequency = 1;
					volume = (1-camPos)*(slingLoadActive factor [0,-1]);
				};
				class SlingLoadUpInt
				{
					sound[] = {"\A3\Sounds_F\vehicles\air\noises\SL_engineUpINT",db0,1,500};
					frequency = 1;
					volume = (1-camPos)*(slingLoadActive factor [0,1]);
				};
				class WindInt
				{
					sound[] = {"\A3\Sounds_F\vehicles\air\noises\wind_closed",db-8,1,50};
					frequency = 1;
					volume = (1-camPos)*(speed factor[5, 50])*(speed factor[5, 50]);
				};
				class GStress
				{
					sound[] = {"\A3\Sounds_F\vehicles\noises\vehicle_stress2b",db-9,1,50};
					frequency = 1;
					volume = engineOn * (1-camPos) * ((gmeterZ factor[1.5, 2.5]) + (gmeterZ factor[0.5, -0.5]));
				};
			};
		};
    };
	class Plane_Fighter_05_Base_F: Plane_Base_F
	{
        attenuationEffectType = PlaneAttenuation;
		soundGetIn[] = {"\A3_Aegis\Sounds_F_Aegis\vehicles\air\Plane_Fighter_05\getin",db0,1,40};
		soundGetOut[] = {"\A3_Aegis\Sounds_F_Aegis\vehicles\air\Plane_Fighter_05\getout",db0,1,40};
		cabinOpenSound[] = {"\A3\Sounds_F\air\noises\Plane_CAS01_CabinOpen",db5,1,40};
		cabinCloseSound[] = {"\A3\Sounds_F\air\noises\Plane_CAS01_CabinClose",db5,1,40};
		cabinOpenSoundInternal[] = {"\A3\Sounds_F\air\noises\Plane_CAS01_CabinOpen",10.0,1,40};
		cabinCloseSoundInternal[] = {"\A3\Sounds_F\air\noises\Plane_CAS01_CabinClose",10.0,1,40};
        soundWaterCollision1[] = {"\A3\Sounds_F\vehicles\crashes\planes\plane_crash_water_1",db3,1,500};
        soundWaterCollision2[] = {"\A3\Sounds_F\vehicles\crashes\planes\plane_crash_water_2",db3,1,500};
        soundWaterCrashes[] =
        {
            soundWaterCollision1,1/2,
            soundWaterCollision2,1/2
        };
        buildCrash0[] = {"\A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_1",db0,1,900};
        buildCrash1[] = {"\A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_2",db0,1,900};
        buildCrash2[] = {"\A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_3",db0,1,900};
        buildCrash3[] = {"\A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_4",db0,1,900};
        soundBuildingCrash[] =
        {
            buildCrash0,1/4,
            buildCrash1,1/4,
            buildCrash2,1/4,
            buildCrash3,1/4
        };
        WoodCrash0[] = {"\A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_1",db10,1,900};
        WoodCrash1[] = {"\A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_2",db10,1,900};
        WoodCrash2[] = {"\A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_6",db10,1,900};
        WoodCrash3[] = {"\A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_8",db10,1,900};
        soundWoodCrash[] =
        {
            woodCrash0,1/4,
            woodCrash1,1/4,
            woodCrash2,1/4,
            woodCrash3,1/4
        };
        armorCrash0[] = {"\A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_1",db0,1,900};
        armorCrash1[] = {"\A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_2",db0,1,900};
        armorCrash2[] = {"\A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_3",db0,1,900};
        armorCrash3[] = {"\A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_4",db0,1,900};
        soundArmorCrash[] =
        {
            ArmorCrash0,1/4,
            ArmorCrash1,1/4,
            ArmorCrash2,1/4,
            ArmorCrash3,1/4
        };
        Crash0[] = {"\A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_1",db0,1,900};
        Crash1[] = {"\A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_2",db0,1,900};
        Crash2[] = {"\A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_3",db0,1,900};
        Crash3[] = {"\A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_4",db0,1,900};
        soundCrashes[] =
        {
            Crash0,1/4,
            Crash1,1/4,
            Crash2,1/4,
            Crash3,1/4
        };
        soundDammage[] = {"",0.562341,1};
        soundEngineOnInt[] = {"\A3_Aegis\Sounds_F_Aegis\vehicles\air\Plane_Fighter_05\B_Plane_Fighter_05_engine_start_int",db0,1};
        soundEngineOnExt[] = {"\A3_Aegis\Sounds_F_Aegis\vehicles\air\Plane_Fighter_05\B_Plane_Fighter_05_engine_start_ext",1.75,1,300};
        soundEngineOffInt[] = {"\A3_Aegis\Sounds_F_Aegis\vehicles\air\Plane_Fighter_05\B_Plane_Fighter_05_engine_shut_int",db0,1};
        soundEngineOffExt[] = {"\A3_Aegis\Sounds_F_Aegis\vehicles\air\Plane_Fighter_05\B_Plane_Fighter_05_engine_shut_ext",1.75,1,300};
        soundLocked[] = {"\A3\Sounds_F_Jets\vehicles\air\Shared\FX_Plane_Jet_lockedOn1",db0,1};
        soundIncommingMissile[] = {"\A3\Sounds_F_Jets\vehicles\air\Shared\FX_Plane_Jet_lockedon2",db0,1.5};
        soundGearUp[] = {"\A3\Sounds_F_Jets\vehicles\air\Shared\FX_Plane_Jet_gear_up",2.25,1,250};
        soundGearDown[] = {"\A3\Sounds_F_Jets\vehicles\air\Shared\FX_Plane_Jet_gear_down",2.25,1,250};
        soundFlapsUp[] = {"\A3\Sounds_F_Jets\vehicles\air\Shared\FX_Plane_Jet_Flaps_Up",1.5,1,150};
        soundFlapsDown[] = {"\A3\Sounds_F_Jets\vehicles\air\Shared\FX_Plane_Jet_Flaps_Down",1.5,1,150};
        soundSetSonicBoom[] = {Plane_Fighter_SonicBoom_SoundSet};
        class Sounds
        {
            soundSets[] =
            {
                Plane_Fighter_05_EngineLowExt_SoundSet,
                Plane_Fighter_05_EngineHighExt_SoundSet,
                Plane_Fighter_05_ForsageExt_SoundSet,
                Plane_Fighter_05_WindNoiseExt_SoundSet,
                Plane_Fighter_05_EngineExt_Dist_Front_SoundSet,
                Plane_Fighter_05_EngineExt_Middle_SoundSet,
                Plane_Fighter_05_EngineExt_Dist_Rear_SoundSet,
                Plane_Fighter_05_EngineLowInt_SoundSet,
                Plane_Fighter_05_EngineHighInt_SoundSet,
                Plane_Fighter_05_ForsageInt_SoundSet,
                Plane_Fighter_05_WindNoiseInt_SoundSet,
                Plane_Fighter_05_VelocityInt_SoundSet,
                Plane_Fighter_RainExt_SoundSet,
                Plane_Fighter_RainInt_SoundSet,
                Plane_Fighter_GStress_SoundSet,
                Plane_Fighter_SpeedStress_SoundSet/*,
                Plane_Fighter_GBreathing_SoundSet*/
            };
        };
        class RainExt
        {
            sound[] = {"\A3\Sounds_F\vehicles\noises\rain1_ext",db5,1,100};
            frequency = 1;
            volume = camPos*rain*(speed factor[50,0]);
        };
        class RainInt
        {
            sound[] = {"\A3\Sounds_F\vehicles\noises\rain1_int",db0,1,100};
            frequency = 1;
            volume = (1-camPos)*rain*(speed factor[50,0]);
        };
        class GStress
        {
            sound[] = {"\A3\Sounds_F\vehicles\noises\vehicle_stress2e",db4,1,50};
            frequency = 1;
            volume = engineOn * (1-camPos) * (gmeterZ factor[1, 2.5]);
        };
        class SpeedStress
        {
            sound[] = {"\A3\Sounds_F\vehicles\noises\vehicle_stress3",db-6,1,50};
            frequency = 1;
            volume = (1-camPos)*(speed factor[60,80]);
        };
        /*
        class GBreathing
        {
            sound[] = {"\A3\Sounds_F\characters\human-sfx\diver-breath-4",db-5,1,50};
            frequency = 1;
            volume = engineOn * (1-camPos) * (gmeterZ factor[1, 2.5]);
        };
        */
    };
	class Plane_Transport_01_base_F: Plane_Base_F
	{
        attenuationEffectType = PlaneAttenuation;
        soundGetIn[] = {"\A3_Aegis\Sounds_F_Aegis\vehicles\air\Plane_Transport_01\open",db-10,1};
        soundGetOut[] = {"\A3_Aegis\Sounds_F_Aegis\vehicles\air\Plane_Transport_01\close",db-10,1,40};
        soundWaterCollision1[] = {"\A3\Sounds_F\vehicles\crashes\planes\plane_crash_water_1",db3,1,500};
        soundWaterCollision2[] = {"\A3\Sounds_F\vehicles\crashes\planes\plane_crash_water_2",db3,1,500};
        soundWaterCrashes[] =
        {
            soundWaterCollision1,1/2,
            soundWaterCollision2,1/2
        };
        buildCrash0[] = {"\A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_1",db0,1,900};
        buildCrash1[] = {"\A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_2",db0,1,900};
        buildCrash2[] = {"\A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_3",db0,1,900};
        buildCrash3[] = {"\A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_4",db0,1,900};
        soundBuildingCrash[] =
        {
            buildCrash0,1/4,
            buildCrash1,1/4,
            buildCrash2,1/4,
            buildCrash3,1/4
        };
        WoodCrash0[] = {"\A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_1",db10,1,900};
        WoodCrash1[] = {"\A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_2",db10,1,900};
        WoodCrash2[] = {"\A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_6",db10,1,900};
        WoodCrash3[] = {"\A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_8",db10,1,900};
        soundWoodCrash[] =
        {
            woodCrash0,1/4,
            woodCrash1,1/4,
            woodCrash2,1/4,
            woodCrash3,1/4
        };
        armorCrash0[] = {"\A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_1",db0,1,900};
        armorCrash1[] = {"\A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_2",db0,1,900};
        armorCrash2[] = {"\A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_3",db0,1,900};
        armorCrash3[] = {"\A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_4",db0,1,900};
        soundArmorCrash[] =
        {
            ArmorCrash0,1/4,
            ArmorCrash1,1/4,
            ArmorCrash2,1/4,
            ArmorCrash3,1/4
        };
        Crash0[] = {"\A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_1",db0,1,900};
        Crash1[] = {"\A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_2",db0,1,900};
        Crash2[] = {"\A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_3",db0,1,900};
        Crash3[] = {"\A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_4",db0,1,900};
        soundCrashes[] =
        {
            Crash0,1/4,
            Crash1,1/4,
            Crash2,1/4,
            Crash3,1/4
        };
        landingSoundInt0[] = {"\A3\Sounds_F\vehicles\air\noises\landing_wheels_large_int1",db0,1,100};
        landingSoundInt1[] = {"\A3\Sounds_F\vehicles\air\noises\landing_wheels_large_int2",db0,1,100};
        landingSoundInt[] =
        {
            landingSoundInt0,1/2,
            landingSoundInt1,1/2
        };
        landingSoundOut0[] = {"\A3\Sounds_F\vehicles\air\noises\landing_wheels_ext1",db5,1,100};
        landingSoundOut1[] = {"\A3\Sounds_F\vehicles\air\noises\landing_wheels_ext2",db5,1,100};
        landingSoundOut[] =
        {
            landingSoundOut0,1/2,
            landingSoundOut1,1/2
        };
        soundDammage[] = {"",0.562341,1};
        soundEngineOnInt[] = {"\A3_Aegis\Sounds_F_Aegis\vehicles\air\Plane_Transport_01\C192_engine_start_int",db-8,1.0};
        soundEngineOnExt[] = {"\A3_Aegis\Sounds_F_Aegis\vehicles\air\Plane_Transport_01\C192_engine_start_ext",db8,1,700};
        soundEngineOffInt[] = {"\A3_Aegis\Sounds_F_Aegis\vehicles\air\Plane_Transport_01\C192_engine_stop_int",db-8,1.0};
        soundEngineOffExt[] = {"\A3_Aegis\Sounds_F_Aegis\vehicles\air\Plane_Transport_01\C192_engine_stop_ext",db8,1,700};
        soundLocked[] = {"\A3\Sounds_F\weapons\Rockets\locked_1",db-10,1};
        soundIncommingMissile[] = {"\A3\Sounds_F\vehicles\air\noises\alarm_locked_by_missile_1",db-10,1.0};
        soundGearUp[] = {"\A3_Aegis\Sounds_F_Aegis\vehicles\air\Plane_Transport_01\gear_up",db-2,1,150};
        soundGearDown[] = {"\A3_Aegis\Sounds_F_Aegis\vehicles\air\Plane_Transport_01\gear_down",db-2,1,150};
        soundFlapsUp[] = {"\A3_Aegis\Sounds_F_Aegis\vehicles\air\Plane_Transport_01\flaps_up",db-4,1,100};
        soundFlapsDown[] = {"\A3_Aegis\Sounds_F_Aegis\vehicles\air\Plane_Transport_01\flaps_down",db-4,1,100};
        class scrubLandInt
        {
            sound[] = {"\A3\Sounds_F\vehicles\air\noises\wheelsInt",db0,1,100};
            frequency = 1;
            volume = (scrubLand factor[0.01,0.20]);
        };
        class Sounds
        {
            class EngineMidhExt
            {
                sound[] = {"\A3_Aegis\Sounds_F_Aegis\vehicles\air\Plane_Transport_01\C192_engine_mid_ext",db5,1,1100};
                frequency = 1;
                volume = 0.7 * machcone*camPos*(rpm factor[0.5, 1]);
            };
            class EngineHighExt
            {
                sound[] = {"\A3_Aegis\Sounds_F_Aegis\vehicles\air\Plane_Transport_01\C192_engine_high_ext",db5,1,1100};
                frequency = 1 min (rpm+0.5)*(rpm factor[0.5, 1.1]);
                volume = 0.7 * machcone*engineOn*camPos*(rpm factor[0, 1])*(thrust factor[0, 0.75]);
            };
            class ForsageExt
            {
                sound[] = {"\A3_Aegis\Sounds_F_Aegis\vehicles\air\Plane_Transport_01\C192_prop_ext",db3,1.2,1100};
                frequency = 1;
                volume = 0.7 * machcone*engineOn*camPos*(thrust factor[0.6, 1.0]);
                cone[] = {1.14,3.92,2.5,0.4};
            };
            class EngineMidhInt
            {
                sound[] = {"\A3_Aegis\Sounds_F_Aegis\vehicles\air\Plane_Transport_01\C192_engine_mid_int",db-2,1,1100};
                frequency = 1 min (rpm+0.25)*(rpm factor[0, 1]);
                volume = 1 * engineOn*(1-camPos)*(rpm factor[0.5, 1]);
            };
            class EngineHighInt
            {
                sound[] = {"\A3_Aegis\Sounds_F_Aegis\vehicles\air\Plane_Transport_01\C192_engine_high_int",db-2,1,1100};
                frequency = 1 min (rpm+0.25)*(rpm factor[0.25, 1.1]);
                volume = 1 * engineOn*(1-camPos)*(rpm factor[0, 1]);
            };
            class ForsageInt
            {
                sound[] = {"\A3_Aegis\Sounds_F_Aegis\vehicles\air\Plane_Transport_01\C192_prop_int",db-7,1.2,1100};
                frequency = 1 min (rpm+0.5)*(rpm factor[0, 1]);
                volume = 1 * engineOn*(1-camPos)*(rpm factor[0.5, 1])*(thrust factor[0.5, 1.0]);
                cone[] = {1.14,3.92,2.5,0.4};
            };
            class scrubLandInt
            {
                sound[] = {"\A3\Sounds_F\vehicles\air\noises\wheelsInt",db0,1,100};
                frequency = 1;
                volume = 2 * (1-camPos) * (scrubLand factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]));
            };
            class scrubLandExt
            {
                sound[] = {"\A3\Sounds_F\dummysound",db0,1,100};
                frequency = 1;
                volume = camPos * (scrubLand factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]));
            };
            class RainExt
            {
                sound[] = {"\A3\Sounds_F\vehicles\noises\rain1_ext",db5,1,100};
                frequency = 1;
                volume = camPos * rain * (speed factor[50, 0]);
            };
            class RainInt
            {
                sound[] = {"\A3\Sounds_F\vehicles\noises\rain1_int",db0,1,100};
                frequency = 1;
                volume = (1-camPos) * rain * (speed factor[50, 0]);
            };
            class WindInt
            {
                sound[] = {"\A3\Sounds_F\vehicles\air\noises\wind_closed",db-5,1,50};
                frequency = 1;
                volume = (1-camPos)*(speed factor[5, 50])*(speed factor[5, 50]);
            };
            class GStress
            {
                sound[] = {"\A3\Sounds_F\vehicles\noises\vehicle_stress2c",db6,1,50};
                frequency = 1;
                volume = engineOn * (1-camPos) * (gmeterZ factor[1, 2.5]);
            };
            class SpeedStress
            {
                sound[] = {"\A3\Sounds_F\vehicles\noises\vehicle_stress3",db-6,1,50};
                frequency = 1;
                volume = (1-camPos)*(speed factor[60,80]);
            };
        };
    };
	class Wheeled_APC_F;
	class APC_Wheeled_04_base_F: Wheeled_APC_F
    {
		attenuationEffectType = TankAttenuation;
		soundGetIn[] = {"\A3\Sounds_F_EPB\Tracked\noises\get_in_out",db-5,1};
		soundGetOut[] = {"\A3\Sounds_F_EPB\Tracked\noises\get_in_out",db-5,1,20};
		soundTurnIn[] = {"\A3\Sounds_F\vehicles\noises\Turn_in_out",db5,1,20};
		soundTurnOut[] = {"\A3\Sounds_F\vehicles\noises\Turn_in_out",db5,1,20};
		soundTurnInInternal[] = {"\A3\Sounds_F\vehicles\noises\Turn_in_out",db5,1,20};
		soundTurnOutInternal[] = {"\A3\Sounds_F\vehicles\noises\Turn_in_out",db5,1,20};
		soundDammage[] = {"",db-5,1};
		soundEngineOnInt[] = {"\A3\Sounds_F\vehicles2\soft\Truck_03\Truck_03_Engine_Int_Start",db-6,1.0};
		soundEngineOffInt[] = {"\A3\Sounds_F\vehicles2\soft\Truck_03\Truck_03_Engine_Int_stop",db-6,1.0};
		soundEngineOnExt[] = {"\A3\Sounds_F\vehicles2\soft\Truck_03\Truck_03_Engine_Ext_Start",db12,1.0,50};
		soundEngineOffExt[] = {"\A3\Sounds_F\vehicles2\soft\Truck_03\Truck_03_Engine_Ext_stop",db12,1.0,50};
		BushCrash1[] = {"\A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_Collision_Light_Bush_01",db-4,1,100};
		BushCrash2[] = {"\A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_Collision_Light_Bush_02",db-4,1,100};
		BushCrash3[] = {"\A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_Collision_Light_Bush_03",db-4,1,100};
		soundBushCrash[] =
        {
            BushCrash1,1/3,
            BushCrash2,1/3,
            BushCrash3,1/3
        };
		buildCrash0[] = {"\A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_01",db10,1,200};
		buildCrash1[] = {"\A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_02",db10,1,200};
		buildCrash2[] = {"\A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_03",db10,1,200};
		buildCrash3[] = {"\A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_04",db10,1,200};
		buildCrash4[] = {"\A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_05",db10,1,200};
		buildCrash5[] = {"\A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_06",db10,1,200};
		soundBuildingCrash[] =
        {
            buildCrash0,1/6,
            buildCrash1,1/6,
            buildCrash2,1/6,
            buildCrash3,1/6,
            buildCrash4,1/6,
            buildCrash5,1/6
        };
		woodCrash0[] = {"\A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_01",db10,1,200};
		woodCrash1[] = {"\A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_02",db10,1,200};
		woodCrash2[] = {"\A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_03",db10,1,200};
		woodCrash3[] = {"\A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_04",db10,1,200};
		woodCrash4[] = {"\A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_05",db10,1,200};
		woodCrash5[] = {"\A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_06",db10,1,200};
		soundWoodCrash[] =
        {
            woodCrash0,1/6,
            woodCrash1,1/6,
            woodCrash2,1/6,
            woodCrash3,1/6,
            woodCrash4,1/6,
            woodCrash5,1/6
        };
		ArmorCrash0[] = {"\A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_01",db10,1,200};
		ArmorCrash1[] = {"\A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_02",db10,1,200};
		ArmorCrash2[] = {"\A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_03",db10,1,200};
		ArmorCrash3[] = {"\A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_04",db10,1,200};
		ArmorCrash4[] = {"\A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_05",db10,1,200};
		ArmorCrash5[] = {"\A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_06",db10,1,200};
		soundArmorCrash[] =
        {
            ArmorCrash0,1/6,
            ArmorCrash1,1/6,
            ArmorCrash2,1/6,
            ArmorCrash3,1/6,
            ArmorCrash4,1/6,
            ArmorCrash5,1/6
        };
		class Sounds
		{
			soundSetsInt[] =
            {
                Truck_03_Engine_RPM0_INT_SoundSet,
                Truck_03_Engine_RPM1_INT_SoundSet,
                Truck_03_Engine_RPM2_INT_SoundSet,
                Truck_03_Engine_RPM3_INT_SoundSet,
                Truck_03_Engine_RPM4_INT_SoundSet,
                Truck_03_Engine_RPM5_INT_SoundSet,
                Truck_03_Engine_RPM6_INT_SoundSet,
                APC_Wheeled_02_Interior_Tone_Engine_Off_SoundSet,
                APC_Wheeled_02_Interior_Tone_Engine_On_SoundSet,
                APC_Wheeled_02_Rattling_INT_SoundSet,
                APC_Wheeled_02_Stress_INT_SoundSet,
                APC_Wheeled_02_Rain_INT_SoundSet,
                APC_Wheeled_02_Tires_Rock_Fast_INT_SoundSet,
                APC_Wheeled_02_Tires_Grass_Fast_INT_SoundSet,
                APC_Wheeled_02_Tires_Sand_Fast_INT_SoundSet,
                APC_Wheeled_02_Tires_Gravel_Fast_INT_SoundSet,
                APC_Wheeled_02_Tires_Mud_Fast_INT_SoundSet,
                APC_Wheeled_02_Tires_Asphalt_Fast_INT_SoundSet,
                APC_Wheeled_02_Tires_Water_Fast_INT_SoundSet,
                APC_Wheeled_02_Tires_Rock_Slow_INT_SoundSet,
                APC_Wheeled_02_Tires_Grass_Slow_INT_SoundSet,
                APC_Wheeled_02_Tires_Sand_Slow_INT_SoundSet,
                APC_Wheeled_02_Tires_Gravel_Slow_INT_SoundSet,
                APC_Wheeled_02_Tires_Mud_Slow_INT_SoundSet,
                APC_Wheeled_02_Tires_Asphalt_Slow_INT_SoundSet,
                APC_Wheeled_02_Tires_Water_Slow_INT_SoundSet,
                APC_Wheeled_02_Tires_Turn_Hard_INT_SoundSet,
                APC_Wheeled_02_Tires_Turn_Soft_INT_SoundSet,
                APC_Wheeled_02_Tires_Brake_Hard_INT_SoundSet,
                APC_Wheeled_02_Tires_Brake_Soft_INT_SoundSet
            };
			soundSetsExt[] =
            {
                Truck_03_Engine_RPM0_EXT_SoundSet,
                Truck_03_Engine_RPM1_EXT_SoundSet,
                Truck_03_Engine_RPM2_EXT_SoundSet,
                Truck_03_Engine_RPM3_EXT_SoundSet,
                Truck_03_Engine_RPM4_EXT_SoundSet,
                Truck_03_Engine_RPM5_EXT_SoundSet,
                Truck_03_Engine_RPM6_EXT_SoundSet,
                APC_Wheeled_02_Stress_EXT_SoundSet,
                APC_Wheeled_02_Rain_EXT_SoundSet,
                APC_Wheeled_02_Tires_Rock_Fast_EXT_SoundSet,
                APC_Wheeled_02_Tires_Grass_Fast_EXT_SoundSet,
                APC_Wheeled_02_Tires_Sand_Fast_EXT_SoundSet,
                APC_Wheeled_02_Tires_Gravel_Fast_EXT_SoundSet,
                APC_Wheeled_02_Tires_Mud_Fast_EXT_SoundSet,
                APC_Wheeled_02_Tires_Asphalt_Fast_EXT_SoundSet,
                APC_Wheeled_02_Tires_Water_Fast_EXT_SoundSet,
                APC_Wheeled_02_Tires_Rock_Slow_EXT_SoundSet,
                APC_Wheeled_02_Tires_Grass_Slow_EXT_SoundSet,
                APC_Wheeled_02_Tires_Sand_Slow_EXT_SoundSet,
                APC_Wheeled_02_Tires_Gravel_Slow_EXT_SoundSet,
                APC_Wheeled_02_Tires_Mud_Slow_EXT_SoundSet,
                APC_Wheeled_02_Tires_Asphalt_Slow_EXT_SoundSet,
                APC_Wheeled_02_Tires_Water_Slow_EXT_SoundSet,
                APC_Wheeled_02_Tires_Turn_Hard_EXT_SoundSet,
                APC_Wheeled_02_Tires_Turn_Soft_EXT_SoundSet,
                APC_Wheeled_02_Tires_Brake_Hard_EXT_SoundSet,
                APC_Wheeled_02_Tires_Brake_Soft_EXT_SoundSet
            };
		};
    };
	class Boat_Civil_02_base_F: Boat_F
    {
        attenuationEffectType = OpenCarAttenuation;
        insideSoundCoef = 0.5;
        soundEngineOnInt[] = {"\A3_Aegis\Sounds_F_Aegis\vehicles\boat\Boat_Civil_02\ext-slowboat-engine-start-03",db-15,1,200};
        soundEngineOnExt[] = {"\A3_Aegis\Sounds_F_Aegis\vehicles\boat\Boat_Civil_02\ext-slowboat-engine-start-03",db-15,1,200};
        soundEngineOffInt[] = {"\A3_Aegis\Sounds_F_Aegis\vehicles\boat\Boat_Civil_02\ext-slowboat-engine-stop-03",db-15,1,200};
        soundEngineOffExt[] = {"\A3_Aegis\Sounds_F_Aegis\vehicles\boat\Boat_Civil_02\ext-slowboat-engine-stop-03",db-15,1,200};
        buildCrash0[] = {"\A3\Sounds_F\Vehicles\boat\noises\Light_metal_boat_crash_building_01",db5,1,200};
        buildCrash1[] = {"\A3\Sounds_F\Vehicles\boat\noises\Light_metal_boat_crash_building_02",db5,1,200};
        buildCrash2[] = {"\A3\Sounds_F\Vehicles\boat\noises\Light_metal_boat_crash_building_03",db5,1,200};
        soundBuildingCrash[] =
        {
            buildCrash0,1/3,
            buildCrash1,1/3,
            buildCrash2,1/3
        };
        WoodCrash0[] = {"\A3\Sounds_F\Vehicles\boat\noises\Light_metal_boat_crash_wood_01",db5,1,200};
        WoodCrash1[] = {"\A3\Sounds_F\Vehicles\boat\noises\Light_metal_boat_crash_wood_02",db5,1,200};
        WoodCrash2[] = {"\A3\Sounds_F\Vehicles\boat\noises\Light_metal_boat_crash_wood_03",db5,1,200};
        soundWoodCrash[] =
        {
            woodCrash0,1/3,
            woodCrash1,1/3,
            woodCrash2,1/3
        };
        ArmorCrash0[] = {"\A3\Sounds_F\Vehicles\boat\noises\Light_metal_boat_crash_armor_01",db10,1,200};
        ArmorCrash1[] = {"\A3\Sounds_F\Vehicles\boat\noises\Light_metal_boat_crash_armor_02",db10,1,200};
        ArmorCrash2[] = {"\A3\Sounds_F\Vehicles\boat\noises\Light_metal_boat_crash_armor_03",db10,1,200};
        soundArmorCrash[] =
        {
            ArmorCrash0,1/3,
            ArmorCrash1,1/3,
            ArmorCrash2,1/3
        };
        soundGeneralCollision1[] = {"\A3\Sounds_F\Vehicles\boat\noises\Light_metal_boat_crash_armor_01",db5,1,100};
        soundGeneralCollision2[] = {"\A3\Sounds_F\Vehicles\boat\noises\Light_metal_boat_crash_armor_02",db5,1,100};
        soundGeneralCollision3[] = {"\A3\Sounds_F\Vehicles\boat\noises\Light_metal_boat_crash_armor_03",db5,1,100};
        soundCrashes[] =
        {
            soundGeneralCollision1,1/3,
            soundGeneralCollision2,1/3,
            soundGeneralCollision3,1/3
        };
        class Sounds
        {
            class IdleOut
            {
                sound[] = {"\A3_Aegis\Sounds_F_Aegis\vehicles\boat\Boat_Civil_02\ext-slowboat-engine-idle-04",db-7,1,150};
                frequency = 0.95+((rpm/1200) factor[(100/	1200),(200/	1200)])*0.15;
                volume = engineOn*(((rpm/1200) factor[(0/	1200),(30/	1200)])	*	((rpm/	1200) factor[(500/	1200),(300/	1200)]));
            };
            class Engine
            {
                sound[] = {"\A3_Aegis\Sounds_F_Aegis\vehicles\boat\Boat_Civil_02\ext-slowboat-engine-low-04",db-4,1.2,300};
                frequency = 0.95+((rpm/1200) factor[(300/	1200),(600/	1200)])*0.2;
                volume = engineOn*(((rpm/1200) factor[(200/	1200),(300/	1200)])	*	((rpm/	1200) factor[(600/	1200),(400/	1200)]));
            };
            class EngineMidOut
            {
                sound[] = {"\A3_Aegis\Sounds_F_Aegis\vehicles\boat\Boat_Civil_02\ext-slowboat-engine-hi-03",db-1,0.6,400};
                frequency = 0.95+((rpm/	1200) factor[(600/	1200),(900/	1200)])*0.2;
                volume = engineOn*(((rpm/	1200) factor[(350/	1200),(500/	1200)])	*	((rpm/	1200) factor[(1200/	1200),(900/	1200)]));
            };
            class EngineMaxOut
            {
                sound[] = {"\A3_Aegis\Sounds_F_Aegis\vehicles\boat\Boat_Civil_02\ext-slowboat-engine-hi-03",db2,1,500};
                frequency = 0.95+((rpm/1200) factor[(700/	1200),(1000/	1200)])*0.3;
                volume = engineOn*((rpm/1200) factor[(600/	1200),(1200/	1200)]);
            };
            class WaternoiseOutW0
            {
                sound[] = {"\A3\Sounds_F\vehicles\boat\SFX\voda-o-bok-lodi-0-speed1",db0,1,100};
                frequency = 1;
                volume = (speed factor[4, 1]) * water;
            };
            class WaternoiseOutW1
            {
                sound[] = {"\A3\Sounds_F\vehicles\boat\SFX\voda-o-bok-lodi-20-speed",db0,1,150};
                frequency = 1;
                volume = ((speed factor[2, 6]) min (speed factor[6, 4]));
            };
            class WaternoiseOutW2
            {
                sound[] = {"\A3\Sounds_F\vehicles\boat\SFX\voda-o-bok-lodi-50-speed",db0,1,300};
                frequency = 1;
                volume = (speed factor[3, 9]);
            };
            class WaternoiseOutW3
            {
                sound[] = {"\A3\Sounds_F\vehicles\boat\SFX\voda-o-bok-lodi-0-speed1",db0,1,100};
                frequency = 1;
                volume = (speed factor[-4, -1]) * water;
            };
            class WaternoiseOutW4
            {
                sound[] = {"\A3\Sounds_F\vehicles\boat\SFX\voda-o-bok-lodi-20-speed",db0,0.9,150};
                frequency = 1;
                volume = ((speed factor[-2, -6]) min (speed factor[-6, -4]));
            };
            class WaternoiseOutW5
            {
                sound[] = {"\A3\Sounds_F\vehicles\boat\SFX\voda-o-bok-lodi-50-speed",db0,0.9,300};
                frequency = 1;
                volume = (speed factor[-3, -9]);
            };
            class scrubLandExt
            {
                sound[] = {"\A3\Sounds_F\vehicles\boat\noises\boat_land_on_shallow",db5,1,100};
                frequency = 1;
                volume = (scrubLand factor[0.01, 0.20]);
            };
            class RainExt
            {
                sound[] = {"\A3\Sounds_F\vehicles\noises\rain2_ext",db0,1,100};
                frequency = 1;
                volume = camPos * (rain - rotorSpeed/2) * 2;
            };
            class RainInt
            {
                sound[] = {"\A3\Sounds_F\vehicles\noises\rain2_ext",db0,1,100};
                frequency = 1;
                volume = (1-camPos)*(rain - rotorSpeed/2)*2;
            };
        };
    };
};