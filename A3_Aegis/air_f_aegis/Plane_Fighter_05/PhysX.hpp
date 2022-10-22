maxOmega = 2000; // this parameters affects maximum engine rpm which also limits maximal wheel rotational speed
// <Description>: How fast is engine power distributed to the wheels. Stronger values mean more aggressive drive performance inclining to
// slip a little while changing gears while weaker values are better for comfortable seamless ride.
// <Type>: float
// <Default>: 10.0
clutchStrength = 100.0;
antiRollbarForceCoef = 0.5; // how strong is the anti-roll bar of vehicle preventing it to lose grip in turns (not any magical stuff, real ARB)
antiRollbarForceLimit = 0.5; // highest possible force of ARB
antiRollbarSpeedMin = 10; // the roll bar force gets from zero to full in range of min and max speed
antiRollbarSpeedMax = 250; // this simulates losing grip at high speed turns
class Wheels
{
	class Wheel_1
	{
		// <Description>: Name of the bone, used for wheel and suspension animations.
		// <Type>: string
		// <Default>: ""
		boneName = wheel_1;
		// <Description>: If true, wheel is steerable, false - wheel is fixed.
		// <Type>: bool
		// <Default>: (required)
		steering = true;
		// <Description>: Defines if wheel is on the right or left side of the vehicle
		// <Type>: string
		// <Default>: "right"
		side = left;
		// <Description>: Center of the wheel (axis)
		// <Type>: memory point
		// <Default>: (required)
		center = wheel_1_center;
		// <Description>: Point on the outside rim of the tire, used to calculate radius of the wheel (distance between center and boundary).
		// <Type>: memory point
		// <Default>: (required)
		boundary = wheel_1_rim;
		width = 0.3;
		// <Description>: This is the weight in kg of wheel including both rim and tyre.
		// <Type>: float
		// <Default>: 10.0
		mass = 80;
		// <Description>: This is the wheel's moment of inertia about the rolling axis. Smaller values result in more slips in aggresive driving
		// while larger hamper the gain of speed. Good base to start with is this formula:
		// MOI = 0.5 * Mass * Radius * Radius
		// Some tweaking is needed after the computation, but it is still better than nothing.
		// <Type>: float
		// <Default>: 0.5 * WheelMass * WheelRadius * WheelRadius
		MOI = 6.2;
		// <Description>:The damping rate describes the rate at which a freely spinning wheel loses rotational speed.
		// Values in range (0.25, 2) seem like sensible values. Experimentation is always a good idea, even outside this range.
		// <Type>: float
		// <Default>: 0.1
		dampingRate = 0.25;
		dampingRateDamaged = 1;
		dampingRateDestroyed = 1000;
		// <Description>: This is the value of the torque applied to the wheel when the brakes are maximally applied. Higher torques will lock the wheel
		// quicker when braking, while lower torques will take longer to lock the wheel.
		// A value of around 1500 is a good starting point for a vanilla wheel but a google search will reveal typical braking torques. One difficulty is
		// that these are often expressed by manufacturers as braking horsepower or in "pounds inches". The values required here are in "Newton metres".
		// <Type>: float
		// <Default>: 2500
		maxBrakeTorque = 4000;
		// <Description>: This is the same as the max brake torque except for the handbrake rather than the brake. Typically, for a 4-wheeled car,
		// the handbrake is stronger than the brake and is only applied to the rear wheels. A value of 4000 for the rear wheels is a good starting point,
		// while a value of 0 is necessary for the front wheels to make sure they do not react to the handbrake.
		// <Type>: float
		// <Default>: 2*maxBrakeTorque
		maxHandBrakeTorque = 0;
		// <Description>: This is the direction of the suspension in the downward direction in the rest configuration of the vehicle. A vector that
		// points straight downwards is a good starting point.
		// <Type>: Array[3]
		// <Default>: {0, -1, 0}
		suspTravelDirection[] =
		{
			0, // X
			-1, // Y
			0 // Z
		};
		// <Description>: This is the application point of the suspension force.
		// <Type>: memory point
		// <Default>: center
		suspForceAppPointOffset = wheel_1_center;
		// <Description>: This is almost the same as the suspension force app point except for the lateral and longitudinal forces that develop on the tire.
		// A good starting point is to duplicate the suspension force application point.
		// <Type>: memory point
		// <Default>: suspForceAppPointOffset
		tireForceAppPointOffset = wheel_1_center;
		// <Description>: These values describe the maximum compression and elongation in metres that the spring can support.
		// <Type>: float
		// <Default>: 0.15
		maxCompression = 0.15;
		maxDroop = 0.15;
		// <Description>: This is the mass in kg that is supported by the suspension spring.
		// <Type>: float
		// <Default>: vehicleMass/numberOfWheels
		sprungMass = 2500;
		// <Description>: This is the strength of the suspension spring in Newtons per metre.
		//   springStrength = naturalFrequency * naturalFrequency * sprungMass
		// <Type>: float
		// <Default>: sprungMass*5,0*5,0
		springStrength = 260000;
		// <Description>: This describes the rate at which the spring dissipates the energy stored in the spring.
		// Basic equiation for this is
		//  springDamperRate = dampingRatio * 2 * sqrt(springStrength * sprungMass)
		// where dampingRatio = 1 mean critical damping (critically damped pendulum should get back to start point in every swing)
		// <Type>: float
		// <Default>: 0,4*2*sqrt(springStrength*sprungMass)
		springDamperRate = 70000;
		// <Description>: Increasing this value will result in the tire attempting to generate more longitudinal force when the tire is slipping.
		// Typically, increasing longitudinal stiffness will help the car accelerate and brake. The total tire force available is limited by the
		// load on the tire so be aware that increases in this value might have no effect or even come at the expense of reduced lateral force.
		// <Type>: float
		// <Default>: 10000
		longitudinalStiffnessPerUnitGravity = 2000;
		// <Description>: These values together describe the lateral stiffness per unit lateral slip (in radians) of the tire.
		// <Type>: float, float
		// <Default>: 25, 180
		latStiffX = 2;
		latStiffY = 20;
		// <Description>: These six values describe a graph of friction as a function of longitudinal slip.
		// A good starting point for this is a flat graph of friction vs slip with these values:
		// frictionVsSlipGraph[0][0]=0.0
		// frictionVsSlipGraph[0][1]=1.0
		// frictionVsSlipGraph[1][0]=0.5
		// frictionVsSlipGraph[1][1]=1.0
		// frictionVsSlipGraph[2][0]=1.0
		// frictionVsSlipGraph[2][1]=1.0
		// <Type>: Array[3][2]
		// <Default>: {{0, 1}, {0.5, 1}, {1,1}}
		frictionVsSlipGraph[] =
		{
			{0,0.6},
			{0.2,1.0},
			{0.6,0.8}
		};
	};
	class Wheel_2: Wheel_1
	{
		boneName = wheel_2;
		steering = false;
		center = wheel_2_center;
		boundary = wheel_2_rim;
		width = 0.28;
		maxBrakeTorque = 10000;
		longitudinalStiffnessPerUnitGravity = 2500;
		sprungMass = 4250;
		springStrength = 360000;
		springDamperRate = 88000;
		suspForceAppPointOffset = wheel_2_center;
		tireForceAppPointOffset = wheel_2_center;
	};
	class Wheel_3: Wheel_2
	{
		boneName = wheel_3;
		side = right;
		center = wheel_3_center;
		boundary = wheel_3_rim;
		suspForceAppPointOffset = wheel_3_center;
		tireForceAppPointOffset = wheel_3_center;
	};
};