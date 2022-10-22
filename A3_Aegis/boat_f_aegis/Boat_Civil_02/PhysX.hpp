maxSpeed = 25;
brakeDistance = 3;
turnCoef = 0.25;
simulation = shipX;
overSpeedBrakeCoef = 0.8;
enginePower = 65;
engineShiftY = -1;
waterLeakiness = 0.5;
waterResistance = 3;
waterResistanceCoef = 0.01;
thrustDelay = 2;
waterLinearDampingCoefY = 0.4;
waterLinearDampingCoefX = 1.2;
waterAngularDampingCoef = 1.2;
rudderForceCoef = 0.3;
rudderForceCoefAtMaxSpeed = 0.01;
idleRpm = 100;
redRpm = 500;

/* Gearbox */
class ComplexGearbox
{
	GearboxRatios[] =
    {
        R1,-5.5,
        N,0,
        D1,2,
        D2,1.75,
        D3,1.6,
        D4,1.46,
        D5,1.32,
        D6,1.25
    };
	TransmissionRatios[] = {High,1.0};
	gearBoxMode = auto;
	moveOffGear = true;
	driveString = D;
	neutralString = N;
	reverseString = R;
};