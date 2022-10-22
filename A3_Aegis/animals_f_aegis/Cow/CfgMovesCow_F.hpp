class CfgMovesCow_F: CfgMovesAnimal_Base_F
{
	//access = 1;
	skeletonName = Cow_F_skeleton;
	collisionVertexPattern[] =
    {
        1a,
        2a,
        3a,
        4a,
        5a,
        6a,
        7a,
        8a,
        9a,
        10a,
        11a,
        12a,
        13a,
        14a,
        15a,
        16a,
        17a,
        18a,
        19a,
        20a,
        21a,
        22a,
        23a,
        24a,
        25a,
        26a,
        27a,
        28a,
        29a,
        30a,
        31a,
        32a,
        33a,
        34a,
        1c,
        2c,
        3c,
        4c,
        5c,
        6c,
        7c,
        8c
    };
	collisionGeomCompPattern[] = {1};
	class Default: Default
	{
		actions = CowActions;
		collisionShape = "A3_Aegis\Animals_F_Aegis\Cow\cow_CollShape.p3d";
	};
	class StandBase: Default
	{
		aiming = aimingDefault;
		disableWeapons = true;
	};
	class DefaultDie: Default
    {
		enableDirectControl = false;
		aiming = aimingNo;
		legs = legsNo;
		head = headNo;
		disableWeapons = true;
		interpolationRestart = true;
    };
	class States
	{
		class Cow_Idle_Stop: StandBase
		{
		    actions = CowActions;
			duty = -1;
			enableDirectControl = false;
			file = "\A3_Aegis\Animals_F_Aegis\Cow\Data\Anim\cowStop.rtm";
			showWeaponAim = false;
			disableWeapons = true;
			disableWeaponsLong = true;
			variantsAI[] =
			{
				Cow_Idle_Eat,0.6,
				Cow_Idle_Walk,0.3,
				Cow_Idle_Run,0.1
			};
			variantsPlayer[] = {};
			variantAfter[] = {3,6,9};
			speed = 1e+10;
			relSpeedMin = 0.7;
			relSpeedMax = 1.1;
			looped = true;
			soundEnabled = false;
			connectTo[] = {};
			interpolateTo[] =
			{
				Cow_Idle_Stop,0.1,
				Cow_Idle_Walk,0.1,
				Cow_Idle_Eat,0.1,
				Cow_Idle_Run,0.1,
				Cow_Stop,0.5,
				Cow_Walk,0.5,
				Cow_Run,0.5,
				Cow_Die,0.1
			};
            enableBinocular = true;
			preload = true;
		};
		class Cow_TurnL: Cow_Idle_Stop
		{
			file = "\A3_Aegis\Animals_F_Aegis\Cow\Data\Anim\cow_rotateL.rtm";
			variantsAI[] = {};
			connectTo[] = {Cow_Idle_Stop,0.1};
			connectFrom[] = {Cow_Idle_Stop,0.1};
			interpolateTo[] =
			{
				Cow_Idle_Stop,0.1,
				Cow_Die,0.1
			};
			speed = 1;
		};
		class Cow_TurnR: Cow_TurnL
		{
			file = "\A3_Aegis\Animals_F_Aegis\Cow\Data\Anim\cow_rotateR.rtm";
		};
		class Cow_Idle_Eat: Cow_Idle_Stop
		{
			speed = -9;
			variantsAI[] = {};
			looped = true;
			file = "\A3_Aegis\Animals_F_Aegis\Cow\Data\Anim\cowEat.rtm";
			connectTo[] = {Cow_Idle_Eat,0.1};
			interpolateTo[] =
			{
				Cow_Idle_Run,0.1,
				Cow_Idle_Walk,0.1,
				Cow_Idle_Stop,0.1,
				Cow_Stop,0.5,
				Cow_Walk,0.5,
				Cow_Run,0.5,
				Cow_Die,0.1
			};
		};
		class Cow_Idle_Walk: Cow_Idle_Stop
		{
			duty = -0.7;
			file = "\A3_Aegis\Animals_F_Aegis\Cow\Data\Anim\cowWalk.rtm";
			speed = 1;
			variantsAI[] = {};
			looped = true;
			head = headDefault;
			connectTo[] = {Cow_Idle_Stop,0.1};
			interpolateTo[] =
			{
				Cow_Idle_Run,0.1,
				Cow_Idle_Eat,0.1,
				Cow_Idle_Stop,0.1,
			    Cow_Stop,0.5,
				Cow_Walk,0.5,
				Cow_Run,0.5,
				Cow_Die,0.1
			};
		};
		class Cow_Idle_Run: Cow_Idle_Stop
		{
			duty = -0.5;
			file = "\A3_Aegis\Animals_F_Aegis\Cow\Data\Anim\cowRun.rtm";
			speed = 1;
			variantsAI[] = {};
			looped = true;
			connectTo[] = {Cow_Idle_Run,0.1};
			interpolateTo[] =
			{
				Cow_Idle_Eat,0.1,
				Cow_Idle_Walk,0.1,
				Cow_Idle_Stop,0.1,
				Cow_Stop,0.5,
				Cow_Walk,0.5,
				Cow_Run,0.5,
				Cow_Die,0.1
			};
		};
		class Cow_Die: DefaultDie
		{
			actions = NoActions;
			file = "\A3_Aegis\Animals_F_Aegis\Cow\Data\Anim\cowDeath.rtm";
			speed = 1;
			looped = false;
			variantsPlayer[] = {};
			variantsAI[] = {};
			variantAfter[] = {0,0,0};
			terminal = true;
		};
        class Cow_Stop: Cow_Idle_Stop
		{
			variantsAI[] = {};
			actions = CowForceStop;
			connectTo[] = {Cow_Stop,0.02};
			interpolateTo[] =
			{
				Cow_Idle_Stop,0.02,
				Cow_Walk,0.02,
				Cow_Run,0.02,
				Cow_Die,0.02
			};
		};
		class Cow_Walk: Cow_Idle_Walk
		{
			actions = CowForceWalk;
			connectTo[] = {Cow_Walk,0.02};
			connectFrom[] =
            {
				Cow_Idle_Stop,0.02,
				Cow_Walk,0.02,
				Cow_Run,0.02,
				Cow_Die,0.02
            };
		};
		class Cow_Run: Cow_Idle_Run
		{
			actions = CowForceRun;
			connectTo[] = {Cow_Run,0.02};
			connectFrom[] =
            {
				Cow_Idle_Stop,0.02,
				Cow_Walk,0.02,
				Cow_Run,0.02,
				Cow_Die,0.02
            };
		};
	};
	class Actions: Actions
	{
		class NoActions: NoActions
		{
			turnSpeed = 3;
			limitFast = 5.5;
			useFastMove = false;
			upDegree = 0;
		};
		class CowActions: NoActions
		{
			Stop = Cow_Idle_Stop;
			StopRelaxed = Cow_Idle_Eat;
			TurnL = Cow_TurnL;
			TurnR = Cow_TurnR;
			TurnLRelaxed = Cow_TurnL;
			TurnRRelaxed = Cow_TurnR;
			Default = Cow_Idle_Stop;
			JumpOff = Cow_Idle_Stop;
			WalkF = Cow_Idle_Walk;
			SlowF = Cow_Idle_Walk;
			FastF = Cow_Idle_Run;
			EvasiveForward = Cow_Idle_Run;
			Down = Cow_Idle_Stop;
			Up = Cow_Idle_Stop;
			PlayerStand = Cow_Idle_Stop;
			PlayerCrouch = Cow_Idle_Stop;
			PlayerProne = Cow_Idle_Stop;
			Lying = Cow_Idle_Stop;
			Stand = Cow_Idle_Stop;
			Combat = Cow_Idle_Stop;
			Crouch = Cow_Idle_Stop;
			CanNotMove = Cow_Idle_Stop;
			Civil = Cow_Idle_Stop;
			CivilLying = Cow_Idle_Stop;
			FireNotPossible = Cow_Idle_Stop;
			Die = Cow_Die;
			Eat = Cow_Idle_Eat;
			Rest = Cow_Idle_Eat;
			turnSpeed = 2;
			limitFast = 5.5;
			useFastMove = false;
			upDegree = ManPosNoWeapon;
		};
		class CowForceStop: CowActions
		{
			CivilLying = Cow_Stop;
		};
		class CowForceWalk: CowActions
		{
			CivilLying = Cow_Walk;
		};
		class CowForceRun: CowActions
		{
			CivilLying = Cow_Run;
		};
	};
	class Interpolations{};
	transitionsInterpolated[] = {};
	transitionsSimple[] = {};
	transitionsDisabled[] = {};
	class BlendAnims: BlendAnims
	{
		aimingDefault[] =
        {
			head,1,
			leftEar,1,
			rightEar,1
		};
		headDefault[] =
        {
			head,1,
            neck1,1,
            neck,0.8,	
			Spine2,0.2
		};
		untiltWeaponDefault[] = {};
		legsDefault[] = {};
		aimingNo[] = {};
		legsNo[] = {};
		headNo[] = {};
		aimingUpDefault[] = {};
	};
};