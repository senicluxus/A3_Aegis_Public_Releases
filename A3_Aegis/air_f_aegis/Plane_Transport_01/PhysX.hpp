maxOmega = 2000;
clutchStrength = 100;
antiRollbarForceCoef = 0;
antiRollbarForceLimit = 0;
antiRollbarSpeedMin = 50;
antiRollbarSpeedMax = 300;
class Wheels
{
	class Wheel_1_1
	{
		boneName = wheel_1_1;
		steering = true;
		side = left;
		center = wheel_1_1_center;
		boundary = wheel_1_1_bound;
		width = 0.6;
		mass = 150;
		MOI = 25;
		dampingRate = 0.25;
		dampingRateDamaged = 1;
		dampingRateDestroyed = 1000;
		maxBrakeTorque = 2000;
		maxHandBrakeTorque = 0;
		suspTravelDirection[] = {0,-1,0};
		suspForceAppPointOffset = wheel_1_1_axis;
		tireForceAppPointOffset = wheel_1_1_axis;
		maxCompression = 0.1;
		maxDroop = 1.0;
		sprungMass = 20000;
		springStrength = 500000;
		springDamperRate = 80000;
		longitudinalStiffnessPerUnitGravity = 4000;
		latStiffX = 25;
		latStiffY = 180;
		frictionVsSlipGraph[] =
		{
			{0,1},
			{0.5,1},
			{1,1}
		};
	};
	class Wheel_2_1: Wheel_1_1
	{
		boneName = wheel_2_1;
		steering = false;
		center = wheel_2_1_center;
		boundary = wheel_2_1_bound;
		sprungMass = 10000;
		springStrength = 250000;
		springDamperRate = 40000;
		suspForceAppPointOffset = wheel_2_1_axis;
		tireForceAppPointOffset = wheel_2_1_axis;
	};
	class Wheel_2_2: Wheel_2_1
	{
		boneName = wheel_2_2;
		side = right;
		center = wheel_2_2_center;
		boundary = wheel_2_2_bound;
		suspForceAppPointOffset = wheel_2_2_axis;
		tireForceAppPointOffset = wheel_2_2_axis;
	};
	class Wheel_3_1: Wheel_1_1
	{
		boneName = wheel_3_1;
		steering = false;
		center = wheel_3_1_center;
		boundary = wheel_3_1_bound;
		sprungMass = 10000;
		springStrength = 250000;
		springDamperRate = 40000;
		suspForceAppPointOffset = wheel_3_1_axis;
		tireForceAppPointOffset = wheel_3_1_axis;
	};
	class Wheel_3_2: Wheel_2_1
	{
		boneName = wheel_3_2;
		side = right;
		center = wheel_3_2_center;
		boundary = wheel_3_2_bound;
		suspForceAppPointOffset = wheel_3_2_axis;
		tireForceAppPointOffset = wheel_3_2_axis;
	};
};
