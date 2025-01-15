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
	class Aegis_HandFlare_Effect_Smoke_Base
	{
		interval=0.01;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=7;
		particleFSFrameCount=48;
		particleFSLoop=1;
		
		particleType="Billboard";
		animationSpeed[]={1};
		//animationSpeed[]={0.8, 0.3, 0.25};
		animationSpeedCoef=1;
		animationName="";
		angle=0;
		angleVar=0.5;
		timerPeriod=1;
		lifeTime=1.1;
		lifeTimeVar=0.4;
		rotationVelocity=1;
		rotationVelocityVar=9;
		weight=1.2; //1.27;
		volume=1;
		rubbing=0.5;
		size[]={0.05,0.50};
		sizeVar=0;
		sizeCoef=0.6;
		color[]=
		{
			{0.1353,0.1353,0.1353,0.3}
		};
		colorVar[]={0,0,0,0};
		colorCoef[]={1,1,1,1};
		randomDirectionPeriod=0.2;
		randomDirectionPeriodVar=0;	
		randomDirectionIntensity=0.02;
		randomDirectionIntensityVar=0;
		beforeDestroyScript="";
		onTimerScript="";
		position[]={0,0.022,-0.125};
		positionVar[]={0,0,0};
		positionVarConst[]={0,0,0};
		moveVelocity[]={0, 0.2, 0};
		MoveVelocityVar[]={0.08,0.08,0.08};
		MoveVelocityVarConst[]={0,0,0};
		destroyOnWaterSurface=1;
		destroyOnWaterSurfaceOffset=-0.6;
		blockAIVisibility=0;
	};
	class Aegis_HandFlare_Effect_Smoke_Base_UW: Aegis_HandFlare_Effect_Smoke_Base
	{
		interval=0.04;
		particleShape="\A3\data_f\ParticleEffects\Universal\UnderWaterSmoke";
		particleFSNtieth=4;
		particleFSIndex=0;
		particleFSFrameCount=16;
		particleFSLoop=1;
		animationSpeedCoef=1;
		lifeTime=8;
		lifeTimeVar=5;
		rotationVelocity=1;
		weight=1.15;
		volume=1;
		size[]={0.2};
		sizeVar=0.004;
		color[]=
		{
			{1,1,1,1}
		};
		colorVar[]={0,0,0,1};
		colorCoef[]={1,1,1,1};
		moveVelocity[]={0,0,0};
		MoveVelocityVar[]={0.05,0.05,0.05};
		MoveVelocityVarConst[]={0,0,0};
		destroyOnWaterSurface=-1;
	};
    class Aegis_HandFlare_Effect_Smoke_Red: Aegis_HandFlare_Effect_Smoke_Base
	{
		color[]=
		{
			{0.5,0,0,0.2}
		};
	};
	class Aegis_HandFlare_Effect_Smoke_Red_UW: Aegis_HandFlare_Effect_Smoke_Base_UW
	{
	};
	class Aegis_HandFlare_Effect_Smoke_Green: Aegis_HandFlare_Effect_Smoke_Base
	{
		color[]=
		{
			{0,0.5,0.1,0.2}
		};
	};
	class Aegis_HandFlare_Effect_Smoke_Green_UW: Aegis_HandFlare_Effect_Smoke_Base_UW
	{
	};

	// Signal Flare Smoke
	class Aegis_SignalFlare_Effect_Smoke_base: Aegis_HandFlare_Effect_Smoke_Base
	{
		interval=0.035;
		animationSpeed[]={1};
		lifeTime=25;
		lifeTimeVar=10;
		rotationVelocity=0.3;
		rotationVelocityVar=3;
		weight=1.2; //1.27;
		rubbing=0.1;
		size[]={0.05,20};
		moveVelocity[]={0, 0.2, 0};
		MoveVelocityVar[]={0.1,0.1,0.1};
	};
	class Aegis_SignalFlare_Effect_Smoke_base_UW: Aegis_HandFlare_Effect_Smoke_Base_UW
	{
	};
	class Aegis_SignalFlare_Effect_Smoke_Red: Aegis_SignalFlare_Effect_Smoke_Base
	{
		color[]=
		{
			{0.5,0,0,0.2}
		};
	};
	class Aegis_SignalFlare_Effect_Smoke_Red_UW: Aegis_SignalFlare_Effect_Smoke_Base_UW
	{
	};
	class Aegis_SignalFlare_Effect_Smoke_Green: Aegis_SignalFlare_Effect_Smoke_base
	{
		color[]=
		{
			{0,0.5,0.1,0.2}
		};
	};
	class Aegis_SignalFlare_Effect_Smoke_Green_UW: Aegis_SignalFlare_Effect_Smoke_base_UW
	{	
	};
	
	
	//flame and spark particles
	class Aegis_HandFlare_Effect_Sparks
	{
		interval=0.004;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal.p3d";
		particleFSNtieth=16;
		particleFSIndex=13;
		particleFSFrameCount=2;
		particleFSLoop=0;	
		particleType="Billboard";
		animationSpeed[]={1000};
		animationSpeedCoef=1;	
		animationName="";	
		angle=0;
		angleVar=360;
		timerPeriod=1;
		lifeTime=0.2;
		lifeTimeVar=0.2;
		rotationVelocity=1;
		weight=210;
		volume=0.008;
		rubbing=0.3;
		size[]={0.12,0};
		sizeVar=0.03;
		sizeCoef=1;
		randomDirectionPeriod=0;
		randomDirectionPeriodVar=0;
		randomDirectionIntensity=0;
		randomDirectionIntensityVar=0;
		beforeDestroyScript="";
		onTimerScript="";
		position[]={0,0.019,-0.125};
		positionVar[]={0.008,0.008,0.008};
		positionVarConst[]={0,0,0};
		moveVelocity[]=
		{
			"( - inDirX * 1 + surfNormalX / 2) * inSpeed / 1",
			"( - inDirY * 1 + surfNormalY / 2) * inSpeed / 1",
			"( - inDirZ * 1 + surfNormalZ / 2) * inSpeed / 1"
		};		
		moveVelocityVar[]={3.2,3.2,3.2};
		moveVelocityVarConst[]={0,0,0};
		rotationVelocityVar=0;
		blockAIVisibility=0;
		emissiveColor[]=
		{
			{10,10,10,1}
		};
		bounceOnSurface=0.4;
		bounceOnSurfaceVar=0.4;
	};
	class Aegis_HandFlare_Effect_Flame
	{
		interval=0.01;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal.p3d";
		particleFSNtieth=16;
		particleFSIndex=10;
		particleFSFrameCount=32;
		particleFSLoop=1;
		particleType="Billboard";
		animationSpeed[]={1};
		animationSpeedCoef=1;
		animationName="";
		angle=0;
		angleVar=1;
		timerPeriod=3;
		lifeTime=0.45;
		lifeTimeVar=0.3;
		rotationVelocity=0;
		weight=0.0515;
		volume=0.04;
		rubbing=0.16;
		size[]={0.1,0};
		sizeVar=0.05;
		sizeCoef=1;
		colorVar[]={0.1,0.1,0.1,0};
		colorCoef[]={1,1,1,1};
		randomDirectionPeriod=0;
		randomDirectionPeriodVar=0;
		randomDirectionIntensity=0;
		randomDirectionIntensityVar=0;
		beforeDestroyScript="";
		onTimerScript="";
		position[]={0,0.019,-0.125};
		positionVar[]={0.017999999,0.079999998,0.017999999};
		positionVarConst[]={0,0,0};
		moveVelocity[]={0, 0, 0};
		moveVelocityVar[]={0.01, 0.01, 0.01};
		moveVelocityVarConst[]={0,0,0};
		rotationVelocityVar=0;
	};

	//Spark Colours	
	class Aegis_HandFlare_Effect_Sparks_Red: Aegis_HandFlare_Effect_Sparks
	{
		color[]=
		{
			{1,0.3,0.3,-6.5},
			{1,0.3,0.3,-6},
			{1,0.3,0.3,-5.5},
			{1,0.3,0.3,-4.5}
		};
		colorVar[]={0.05,0.05,0.05,5};
		colorCoef[]={1,1,1,1};
	};
	class Aegis_HandFlare_Effect_Sparks_Green: Aegis_HandFlare_Effect_Sparks
	{
		color[]=
		{
			{0.3,1,0.3,-6.5},
			{0.3,1,0.3,-6},
			{0.3,1,0.3,-5.5},
			{0.3,1,0.3,-4.5}
		};
		colorVar[]={0.05,0.05,0.05,5};
		colorCoef[]={1,1,1,1};
	};

	//Flame Colours	
	class Aegis_HandFlare_Effect_Flame_Red: Aegis_HandFlare_Effect_Flame
	{
		color[]=
		{
			{1,0.3,0.3,-80},
		};
	};
	class Aegis_HandFlare_Effect_Flame_Green: Aegis_HandFlare_Effect_Flame
	{
		color[]=
		{
			{0,1,0.1,-80},
		};
	};

	/* BTR-100 Cartridge Ejection */
	class HeavyGunCartridge1;
	class Aegis_BTR100_30mm_Cartridge: HeavyGunCartridge1
	{
        moveVelocity[] = { "-directionX * 3", "- directionY * 3", "- directionZ * 3" };
        size[] = { 4 };
        sizeVar = 0;
	};
};