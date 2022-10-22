simulation = carx;
maxSpeed = 100;
terrainCoef = 1.5;
turnCoef = 3;
brakeIdleSpeed = 1.78;
normalSpeedForwardCoef = 0.52;
accelAidForceYOffset = -1.5;
frontRearSplit = 0.5;
frontBias = 1.3;
rearBias = 1.3;
centreBias = 1.3;
differentialType = all_limited;

/* Engine */
thrustDelay = 0.35;
enginePower = 378.5;
peakTorque = 2120;
maxOmega = 210;
minOmega = 40;
idleRpm = 600;
redRpm = 2000;
torqueCurve[] =
{
    {
        (600/2000),
        (0/2120)
    },
    {
        (800/2000),
        (1785/2120)
    },
    {
        (1000/2000),
        (2120/2120)
    },
    {
        (1200/2000),
        (2065/2120)
    },
    {
        (1400/2000),
        (1980/2120)
    },
    {
        (1600/2000),
        (1875/2120)
    },
    {
        (1800/2000),
        (1810/2120)
    },
    {
        (2000/2000),
        (1350/2120)
    }
};
clutchStrength = 35.0;
engineShiftY = 0.3;

/* Gearbox */
changeGearMinEffectivity[] =
{
    0.45,   // R1
    0.0,    // N
    0.85,   // D1
    0.85,   // D2
    0.85,   // D3
    0.85,   // D4
    0.85,   // D5
    0.85    // D6
};
class complexGearbox
{
	GearboxRatios[] =
    {
        R1,-2,
        N,0,
        D1,5.1,
        D2,3.52,
        D3,2.31,
        D4,1.81,
        D5,1.15,
        D6,1
    };
	TransmissionRatios[] = {High,3.58};
	AmphibiousRatios[] =
    {
        R1,-10,
        N,0,
        D1,20
    };
	gearBoxMode = auto;
	moveOffGear = true;
	driveString = "D";
	neutralString = "N";
	reverseString = "R";
};
switchTime = 0.1;
latency = 1.4;

/* Rollbar */
dampersBumpCoef = 6.0;
dampingRateFullThrottle = 0.08;
dampingRateZeroThrottleClutchEngaged = 1.4;
dampingRateZeroThrottleClutchDisengaged = 0.35;
antiRollbarForceCoef = 24;
antiRollbarForceLimit = 30;
antiRollbarSpeedMin = 10;
antiRollbarSpeedMax = 40;

/* Wheels */
wheelCircumference = 3.55;
class Wheels
{
	class L1
	{
		side = left;
		suspTravelDirection[] = {-0.1,-1,0};
		boneName = wheel_1_1_damper;
		steering = true;
		center = wheel_1_1_center;
		boundary = wheel_1_1_bound;
		width = 0.2;
		mass = 120;
		MOI = 16;
		dampingRate = 0.1;
		dampingRateDamaged = 1.0;
		dampingRateDestroyed = 1000.0;
		maxBrakeTorque = 12500;
		maxHandBrakeTorque = 0;
		suspForceAppPointOffset = wheel_1_1_center;
		tireForceAppPointOffset = wheel_1_1_center;
		maxCompression = 0.1;
		maxDroop = 0.15;
		sprungMass = 2588;
		springStrength = 129375;
		springDamperRate = 14640;
		longitudinalStiffnessPerUnitGravity = 10000;
		latStiffX = 25;
		latStiffY = 180;
		frictionVsSlipGraph[] =
        {
            {0,1},
            {0.5,1},
            {1,1}
        };
	};
	class L2: L1
	{
		boneName = wheel_1_2_damper;
		steering = true;
		center = wheel_1_2_center;
		boundary = wheel_1_2_bound;
		suspForceAppPointOffset = wheel_1_2_center;
		tireForceAppPointOffset = wheel_1_2_center;
	};
	class L3: L1
	{
		boneName = wheel_1_3_damper;
		steering = false;
		center = wheel_1_3_center;
		boundary = wheel_1_3_bound;
		suspForceAppPointOffset = wheel_1_3_center;
		tireForceAppPointOffset = wheel_1_3_center;
		maxHandBrakeTorque = 10000;
	};
	class L4: L1
	{
		boneName = wheel_1_4_damper;
		steering = false;
		center = wheel_1_4_center;
		boundary = wheel_1_4_bound;
		suspForceAppPointOffset = wheel_1_4_center;
		tireForceAppPointOffset = wheel_1_4_center;
		maxHandBrakeTorque = 10000;
	};
	class R1: L1
	{
		side = right;
		suspTravelDirection[] = {0.125,-1,0};
		boneName = wheel_2_1_damper;
		center = wheel_2_1_center;
		boundary = wheel_2_1_bound;
		suspForceAppPointOffset = wheel_2_1_center;
		tireForceAppPointOffset = wheel_2_1_center;
	};
	class R2: R1
	{
		boneName = wheel_2_2_damper;
		steering = true;
		center = wheel_2_2_center;
		boundary = wheel_2_2_bound;
		suspForceAppPointOffset = wheel_2_2_center;
		tireForceAppPointOffset = wheel_2_2_center;
	};
	class R3: R1
	{
		boneName = wheel_2_3_damper;
		steering = false;
		center = wheel_2_3_center;
		boundary = wheel_2_3_bound;
		suspForceAppPointOffset = wheel_2_3_center;
		tireForceAppPointOffset = wheel_2_3_center;
		maxHandBrakeTorque = 10000;
	};
	class R4: R1
	{
		boneName = wheel_2_4_damper;
		steering = false;
		center = wheel_2_4_center;
		boundary = wheel_2_4_bound;
		suspForceAppPointOffset = wheel_2_4_center;
		tireForceAppPointOffset = wheel_2_4_center;
		maxHandBrakeTorque = 10000;
	};
};
numberPhysicalWheels = 8;