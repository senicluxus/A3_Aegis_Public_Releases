class CfgCloudlets
{
    /* Inheritance Tree */
    class Default;

	class WPCloud: Default
	{
		lifeTime = 15;
    };
    
    /* Explosion Refractions: originally by Taro */
	class ExplosionRefract: Default
	{
		angleVar = 1;
		animationName = "";
		animationSpeed[] = {1};
		beforeDestroyScript = "";
		circleRadius = 0;
		circleVelocity[] =
        {
            0,  // X
            0,  // Y
            0   // Z
        };
		colorVar[] =
        {
            0,  // R
            0,  // G
            0,  // B
            0   // A
        };
		color[] =
        {
            {0.1,0.1,0.1,1},        // 0%
            {0.25,0.25,0.25,1},     // 20%
            {0.5,0.5,0.5,1},        // 40%
            {0,0,0,1},              // 60%
            {0,0,0,0.5},            // 80%
            {0,0,0,0.3}             // 100%
        };
		interval = 3*10;
		lifeTime = 0.3;
		lifeTimeVar = 0;
		MoveVelocityVar[] =
        {
            0.2,    // X
            0.5,    // Y
            0.2     // Z
        };
		moveVelocity[] =
        {
            0,      // X
            0,      // Y
            0       // Z
        };
		onTimerScript = "";
		particleFSFrameCount = 1;
		particleFSIndex = 0;
		particleFSLoop = 0;
		particleFSNtieth = 1;
		particleShape = "\A3\Data_F\ParticleEffects\Universal\Refract.p3d";
		particleType = Billboard;
		positionVar[] =
        {
            0.4,    // X
            0.1,    // Y
            0.4     // Z
        };
		randomDirectionIntensity = 0.2;
		randomDirectionIntensityVar = 0;
		randomDirectionPeriod = 0.2;
		randomDirectionPeriodVar = 0;
		rotationVelocity = 0;
		rotationVelocityVar = 90;
		rubbing = 0.1;
		sizeVar = 0.5;
		Size[] =
        {
            1,      // 0%
            2,      // 20%
            5,      // 40%
            8,      // 60%
            12,     // 80%
            17      // 100%
        };
		timerPeriod = 1;
		volume = 2;
		weight = 2.5;
	};
	class ExplosionRefractSmall: ExplosionRefract{};
	class ExplosionRefractMed: ExplosionRefract
	{
		lifeTime = 0.45;
		Size[] =
        {
            1,      // 0%
            8,      // 20%
            20,     // 40%
            35,     // 60%
            50,     // 80%
            70      // 100%
        };
		volume = 4.0;
		weight = 5.0;
	};
	class ExplosionRefractLarge: ExplosionRefract
	{
		lifeTime = 0.6;
		Size[] =
        {
            1,      // 0%
            16,     // 20%
            40,     // 40%
            70,     // 60%
            100,    // 80%
            140     // 100%
        };
		volume = 6.0;
		weight = 7.5;
	};
	class ExplosionRefractHuge: ExplosionRefract
	{
		lifeTime = 0.8;
		Size[] =
        {
            1,      // 0%
            35,     // 20%
            80,     // 40%
            140,    // 60%
            200,    // 80%
            280     // 100%
        };
		volume = 8.0;
		weight = 10.0;
	};
    
    /* Hand Flare */
};