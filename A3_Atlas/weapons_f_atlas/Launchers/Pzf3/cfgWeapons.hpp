class cfgWeapons
{
    /* Base Classes*/
    class Launcher;
	class Launcher_Base_F: Launcher
	{
		class WeaponSlotsInfo;
	};

    /* Panzerfaust 3*/
    class Atlas_Launch_PzF3_base_F: Launcher_Base_F
    {
	author = $STR_A3_A_AveryTheKitty;
	scope = private; 
    scopeArsenal = private;

	displayName = $STR_A3_A_CfgWeapons_launch_Pzf3_F0;
	descriptionShort = $STR_A3_CfgWeapons_launch_LAW1;
	class Library
	{
		libTextDesc = $STR_A3_A_CfgWeapons_Atlas_launch_PzF3_F_Library0;
	};
	model = "\A3_Atlas\weapons_f_atlas\Launchers\Pzf3\PzF3.p3d";
	hiddenSelections[] = {Camo1,Camo2};
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\weapons_f_atlas\Launchers\Pzf3\Data\PzF3_Trigger_CO.paa",
		"\A3_Atlas\weapons_f_atlas\Launchers\Pzf3\Data\PzF3_Tube_CO.paa"
	};
	hiddenSelectionsMaterials[] =
	{
		"\A3_Atlas\weapons_f_atlas\Launchers\Pzf3\Data\PzF3_Trigger.rvmat",
		"\A3_Atlas\weapons_f_atlas\Launchers\Pzf3\Data\PzF3_Tube.rvmat"
	};
	picture = "\A3_Atlas\weapons_f_atlas\Launchers\Pzf3\Data\UI\picture_PzF3_CA.paa";
	magazines[] =
	{
		Atlas_DM12_HEAT_F,
		Atlas_DM22_HEAT_F,
		Atlas_DM32_HEAT_MP_F
	};
	magazineReloadSwitchPhase = 0.32;
	recoil = Atlas_recoil_PzF3;
	handAnim[] =
	{
		OFP2_ManSkeleton,
		"\A3_Atlas\weapons_f_atlas\Launchers\Pzf3\Data\Anim\PzF3.rtm"
	};
	reloadAction = GestureReloadRPG7;
	weaponInfoType = RscWeaponEmpty;

	aimTransitionSpeed = 0.5;
	dexterity = 1.1;
	inertia = 1.0;
	canLock = false;
	maxZeroing = 900;

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = 50;
	};
	
	//--- Modes
	modes[] = {Mode_SemiAuto_Player};
	class Mode_SemiAuto_Player: Mode_SemiAuto
	{
		minRange = 15;	
        minRangeProbab = 0.3;
		midRange = 50;	
        midRangeProbab = 0.7;
		maxRange = 900;	
        maxRangeProbab = 0.5;
		aiRateOfFire = 5.0;
        aiRateOfFireDistance = 700;

		//--- SFX
		sounds[] = {StandardSound};
		class BaseSoundModeType;
		class StandardSound: BaseSoundModeType
		{
			soundSetShot[] =
			{
				Launcher_MRAWS_Shot_SoundSet,
				Launcher_MRAWS_Tail_SoundSet
			};
		};
	};

	//--- SFX
	bullet1[] = {"\A3\Sounds_F\dummysound.wss",1,1,0};
	soundBullet[] = {bullet1,1};
	drySound[] = {"\A3_Atlas\sounds_f_atlas\arsenal\weapons\Launchers\Pzf3\dry.ogg",0.4466836,1,15};
	changeFiremodeSound[] = {"\A3_Atlas\sounds_f_atlas\arsenal\weapons\Launchers\Pzf3\dry.ogg",0.4466836,1,15};
	reloadMagazineSound[] = {"\A3_Atlas\sounds_f_atlas\arsenal\weapons\Launchers\Pzf3\reload.ogg",0.25118864,1,30};
	soundFly[] = {"\A3_Atlas\sounds_f_atlas\arsenal\weapons\Launchers\Pzf3\fly.ogg",0.31622776,1.5,900};

	//--- VFX
	class GunParticles
	{
		class FireSmoke
		{
			positionName = pos_fx_smoke;
			directionName = pos_fx_smoke_dir;
			effectName = RocketBackEffectsRPGNT;
		};
	};

	//--- Optics
	optics = true;
	modelOptics = "\A3_Atlas\weapons_f_atlas\Launchers\Pzf3\PzF3_reticle.p3d";
	class OpticsModes
	{
		class Scope
		{
			opticsID = 1;
			useModelOptics = true;
			memoryPointCamera = pos_view;
			cameraDir = pos_view_dir;
			visionMode[] = {Normal};

			//--- FX
			opticsFlare = true;
			opticsDisablePeripherialVision = true;
			opticsPPEffects[] =
			{
				OpticsCHAbera1,
				OpticsBlur1
			};

			//--- Zeroing
			opticsZoomMin = 0.107; //__EVAL(0.25 / 2.5);	// 2.5x Magnification
			opticsZoomMax = 0.107; //__EVAL(0.25 / 2.5);	//
			opticsZoomInit = 0.107; //__EVAL(0.25 / 2.5);	//
			distanceZoomMin = 200;
			distanceZoomMax = 200;
		};
	};
	
	//--- Scripts
	class Eventhandlers
	{
		//reload = "_this spawn ExtEra_fnc_reloadPzF3;";
	};

	//--- Compatibility
    };
    class Atlas_Launch_Pzf3_F: Atlas_Launch_Pzf3_base_F
    {
		author = $STR_A3_A_AveryTheKitty;
        scope = public; 
        scopeArsenal = public;
    };

};