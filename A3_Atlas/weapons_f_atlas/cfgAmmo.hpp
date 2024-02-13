class CfgAmmo
{
	// Arma 3
	class BulletBase;
	class RocketBase;
	class ammo_Penetrator_Base;
	class B_20mm;
	class B_25mm;
	// Arma 3 Marksman
    class B_93x64_Ball;
	// Arma 3 Atlas
	class B_20mm_Tracer_Yellow: B_20mm
	{
		model = "\A3\Weapons_F\Data\bullettracer\tracer_yellow.p3d";
	};
	class B_25mm_Tracer_Yellow: B_25mm
	{
		model = "\A3\Weapons_F\Data\bullettracer\tracer_yellow.p3d";
	};
    class B_93x64_Ball_Tracer_Red: B_93x64_Ball
	{
		model = "\A3\Weapons_F\Data\BulletTracer\tracer_red.p3d";
	};
	// Pzf3 DM12 HEAT
	class Atlas_R_DM12_HEAT: RocketBase
	{
		model = "\A3_Atlas\weapons_f_atlas\Launchers\Pzf3\DM12_HEAT_fly.p3d";
		hit = 115; 
		indirectHit = 16;
		indirectHitRange = 3;
		warheadName = HEAT;
		explosive = 1;

		//--- Submunitions
		submunitionAmmo = Atlas_ammo_DM12_HEAT_penetrator;
		submunitionDirectionType = SubmunitionModelDirection;
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0.0;
		submunitionInitialOffset[] =
		{// X   Y   Z
			0,  0,  -0.2
		};
		triggerOnImpact = true;
		deleteParentWhenTriggered = false;

		airFriction = 1.15;
		sideAirFriction = 0.22;
		maxSpeed = 270;
		initTime = 0;
		thrustTime = 0.1;
		thrust = 0.1;
		fuseDistance = 6;
		simulationStep = 0.02;
		airLock = 1;
		irLock = false;
		nvLock = false;
		timeToLive = 10;
		maneuvrability = 0;
		allowAgainstInfantry = false;
		aiAmmoUsageFlags = 128 + 256 + 512;

		//--- SFX
		soundSetExplosion[] =
		{
			RocketsLight_Exp_SoundSet,
			RocketsLight_Tail_SoundSet,
			Explosion_Debris_SoundSet
		};
		soundFly[] = {"\A3_Atlas\sounds_f_atlas\arsenal\weapons\Launchers\Pzf3\fly.ogg",db-5,1.5,900};

		//--- VFX
		craterEffects = ATRocketCrater;
		explosionEffects = ATRocketExplosion;
		effectsMissile = missile2;
		effectsMissileInit = "";
	};
	class Atlas_ammo_DM12_HEAT_penetrator: ammo_Penetrator_base
	{
		caliber = 46.6;
		hit = 585;
	};

	// Pzf3 DM22 HEAT
	class Atlas_R_DM22_HEAT: Atlas_R_DM12_HEAT
	{
		model = "\A3_Atlas\weapons_f_atlas\Launchers\Pzf3\DM22_HEAT_fly.p3d";
		//--- Submunitions
		submunitionAmmo = Atlas_ammo_DM22_HEAT_penetrator;
		submunitionDirectionType = SubmunitionModelDirection;
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0.0;
		submunitionInitialOffset[] =
		{// X   Y   Z
			0,  0,  -0.2
		};
		triggerOnImpact = true;
		deleteParentWhenTriggered = false;

		airLock = 0;
		aiAmmoUsageFlags = 128 + 512;
	};
	class Atlas_ammo_DM22_HEAT_penetrator: ammo_Penetrator_base
	{
		caliber = 60;
		warheadName = TandemHEAT;
		hit = 730;
	};

	// Pzf3 DM32 HEAT-MP
	class Atlas_R_DM32_HEAT_MP: Atlas_R_DM12_HEAT
	{
		model = "\A3_Atlas\weapons_f_atlas\Launchers\Pzf3\DM32_HEAT_MP_fly.p3d";
		hit = 200; 
		indirectHit = 50; 
		indirectHitRange = 6;
		warheadName = HE;
		explosive = 1;

		//--- Submunitions
		submunitionAmmo = "";
		submunitionDirectionType = "";
		submunitionInitSpeed = 0;
		submunitionParentSpeedCoef = 0.0;
		submunitionInitialOffset[] = {0,0,0};
		triggerOnImpact = false;

		allowAgainstInfantry = true;
		aiAmmoUsageFlags = 64 + 128;

		//--- SFX
		soundSetExplosion[] =
		{
			Mortar_Exp_SoundSet,
			Mortar_Tail_SoundSet,
			Explosion_Debris_SoundSet
		};

		//--- VFX
		craterEffects = ArtyShellCrater;
		explosionEffects = MortarExplosion;
	};
};