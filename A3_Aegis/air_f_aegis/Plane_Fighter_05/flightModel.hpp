airBrake = true;
airBrakeFrictionCoef = 2.3;
flaps = true;
flapsFrictionCoef = 0.36;
gearsUpFrictionCoef = 0.8;
brakeDistance = 250;
wheelSteeringSensitivity = 4.0; // steering authority of the nose wheel
maxSpeed = 1400; // flight behavior arrays are dependable on this value
altFullForce = 5000; // THRUST
altNoForce = 15000; // THRUST
rudderInfluence = 0.743; // Basic angle (cos angle) of the rudder extent
aileronSensitivity = 1.3;
elevatorSensitivity = 1.5;
// CONTROLS - sensitivity/speed in which control surface reaches its maximum extent, IE sensitivity for the player
elevatorControlsSensitivityCoef = 4.2; // default value is 4
aileronControlsSensitivityCoef = 5.5; // default value is 4
rudderControlsSensitivityCoef = 4.0; // default value is 4
envelope[] =
{
	// envelope defines lift produced by the shape of the plane according to current speed relative to maxSpeed
	// the first element of the array is for zero speed, the last for 125 % of maxSpeed, the rest in between is evenly distributed
	// there may be as many elements as you wish, using 13 should be preferred as it modulates the 10% increase with reasonable error
	0.0, // 0%
	0.34, // 10%
    2.61, // 20%
	3.24, // 30%
	3.58, // 40%
	3.79, // 50%
	4.01, // 60%
	4.2, // 70%
	4.37, // 80%
	4.42, // 90%
	5.0, // 100%
	4.01, // 110%
	3.53, // 125%
};
// rudder, elevator, aileron, thrust effectiveness; if empty old settings is used
// effectiveness according to current speed and maxSpeed ratio
// last value goes for 150% of max speed
thrustCoef[] =
{ // fSpeed = maxI * speedRel; speedRel = speed / (maxSpeed * 1.5f); maxI = _thrustCoef.Size() - 1;
	1.5, // 0%
	1.59, // 10%
	1.54, // 20%
	1.5, // 30%
	1.43, // 40%
	1.4, // 50%
	1.31, // 60%
	1.3, // 70%
	1.26, // 80%
	1.26, // 90%
	1.21, // 100%
	1.21, // 110%
	0.3, // 120%
	0.2, // 130%
	0.0, // 140%
	0.0, // 150%
};
elevatorCoef[] =
{
	0.3, // 0%
	0.5, // 10%
	0.66, // 20%
	0.7, // 30%
	0.64, // 40%
	0.6, // 50%
	0.54, // 60%
	0.43, // 70%
	0.4, // 80%
	0.35, // 90%
	0.25, // 100%
	0.18, // 110%
	0.17, // 120%
	0.16, // 130%
	0.15, // 140%
	0.15, // 150%
};
aileronCoef[] =
{
	0.4, // 0%
	0.5, // 10%
	0.65, // 20%
	0.8, // 30%
	0.95, // 40%
	1.02, // 50%
	1.04, // 60%
	1.03, // 70%
	1.0, // 80%
	0.7, // 90%
	0.6, // 100%
	0.55, // 110%
	0.5, // 120%
	0.45, // 130%
	0.4, // 140%
	0.35, // 150%
};
rudderCoef[] =
{ // default value is fabs(speed.Z())*InvSqrt(Square(speed.X())+Square(speed.Z()));
	0.5, // 0%
	1.8, // 15%
	2.7, // 30%
	2.85, // 45%
	2.93, // 60%
	2.98, // 75%
	3.01, // 90%
	2.7, // 105%
	1.1, // 120%
	0.6, // 135%
	0.3	// 150%
};
angleOfIndicence = (rad 3) /*-1.0*3.1415/180*/; // difference between forward and airfold chord line in radians
// FORCES - how good the airplane changes the flight vector or alignes with it
draconicForceXCoef = 7.0; //7.5, left and right
draconicForceYCoef = 1.1; //1, up and down
draconicForceZCoef = 1.0; //1, forward and back
draconicTorqueXCoef = 1.5; // bank-left and bank-right twist torque
draconicTorqueYCoef = 1.0; // nose-up and nose-down twist torque
airFrictionCoefs0[] =
{
	0.0,
	0.0,
	0.0
};
airFrictionCoefs1[] =
{
	0.1,
	0.5,
	0.0066
};
airFrictionCoefs2[] =
{
	0.001,
	0.005,
	0.000068
};
gunAimDown = 0.0;
landingSpeed = 260; // for AI to approach the runawy, the plane should be stable at this speed
stallSpeed = 220;
stallWarningTreshold = 0.12;
acceleration = 200; // acceleration
landingAoa = 9.2*3.1415/180; // landing angle of attack in radians, for AI