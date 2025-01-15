    class Aegis_Heli_Transport_02_Heavy_base_F: Helicopter_Base_H
	{
		features = "Randomization: No						<br />Camo selections: 3 - main body, tail various attachments, engine						<br />Script door sources: CargoRamp_Open, Door_Back_L, Door_Back_R						<br />Script animations: None						<br />Executed scripts: None						<br />Firing from vehicles: No						<br />Slingload: Slingloads up to 4000 kg						<br />Cargo proxy indexes: 1 to 16";
		author = $STR_A3_A_Grave;
		mapSize=22.459999;
		_generalMacro="Aegis_Heli_Transport_02_Heavy_base_F";
		scope=0;
		displayName= $STR_A3_A_CfgVehicles_Heli_Transport_02_heavy_base_F0;
		model="\A3_Aegis\Air_F_Aegis\Heli_Transport_02\Heli_Transport_02_F.p3d";
		icon="\A3_Aegis\Air_F_Aegis\Heli_Transport_02\data\UI\Map_Heli_Transport_02_CA.paa";
		picture="\A3_Aegis\Air_F_Aegis\Heli_Transport_02\data\UI\Heli_Transport_02_CA.paa";
		editorSubcategory="EdSubcat_Helicopters";
		memoryPointTaskMarker="TaskMarker_1_pos";
		accuracy=0.5;
		driveOnComponent[]=
		{
			"Wheels"
		};
		usePreciseGetInAction=0;
		memoryPointsGetInDriverPrecise="GetIn_Pilot";
		memoryPointsGetInCargoPrecise[]=
		{
			"GetIn_Cargo"
		};
		getInRadius=1.7;
		preciseGetInOut=0;
		cargoPreciseGetInOut[]={0};
		getInAction="GetInLow";
		getOutAction="GetOutLow";
		cargoGetInAction[]=
		{
			"GetInLow"
		};
		cargoGetOutAction[]=
		{
			"GetOutLow"
		};
		driverDoor="door_back_L";
		cargoDoors[]={};
		driverAction="ChopperHeavy_R_static_H";
		cargoAction[]=
		{
			"ChopperHeavy_LP_Static_H"
		};
		castCargoShadow=1;
		transportSoldier=14;
		hideWeaponsCargo=1;
		cargoProxyIndexes[]={1,2,3,4,7,8,9,10,11,12,13,14,15,16};
		ejectDeadCargo=0;
		class TransportBackpacks
		{
			class _xx_B_Parachute
			{
				backpack="B_Parachute";
				count=16;
			};
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=16;
			};
			class _xx_Toolkit
			{
				name="Toolkit";
				count=1;
			};
			class _xx_Medikit
			{
				name="Medikit";
				count=1;
			};
			class _xx_ItemGPS
			{
				name="ItemGPS";
				count=1;
			};
		};
		selectionhrotormove="velka vrtule blur";			///new
		selectionhrotorstill="velka vrtule staticka";		///new
		selectionvrotormove="mala vrtule blur";				///new
		selectionvrotorstill="mala vrtule staticka";		///new		
		
		//multiplier of lift force
        liftForceCoef = 1.4;    //1.0 doesn't have enough strenght to lift a hunter, 1.5 has enough to lift even the hemtt //liftForceCoef=1.12; default
        //multiplier of body friction
        bodyFrictionCoef = 1.2; // old: 1.00 needed for rapid decell //bodyFrictionCoef=1.05;
		//multiplier of bank force
        cyclicAsideForceCoef = 0.6; // old: 0.3
        //multiplier of dive force
        cyclicForwardForceCoef = 0.6; // old: 0.3
        //multiplier of back rotor force
        backRotorForceCoef = 0.6; // old: 0.3		
		
		/*
		//multiplier of lift force
        liftForceCoef = 1.4;    //1.0 doesn't have enough strenght to lift a hunter, 1.5 has enough to lift even the hemtt //liftForceCoef=1.12; default
        //multiplier of body friction
        bodyFrictionCoef = 1.4; // old: 1.00 needed for rapid decell //bodyFrictionCoef=1.05;
		//multiplier of bank force
        cyclicAsideForceCoef = 1.2; // old: 0.3
        //multiplier of dive force
        cyclicForwardForceCoef = 1.0; // old: 0.3
        //multiplier of back rotor force
        backRotorForceCoef = 1; // old: 0.3				
		*/
		maximumLoad=5000;
		supplyRadius=-0.30000001;
		cargoCanEject=1;
		driverCanEject=0;
		cost=700000;
		threat[]={0.80000001,0.1,0.60000002};
		mainBladeRadius=9.1999998;
		tailBladeRadius=1.5;
		maxFordingDepth=1.65;
		class RotorLibHelicopterProperties: RotorLibHelicopterProperties
		{
			RTDconfig="A3\Air_F_Beta\Heli_Transport_02\RTD_Heli_Transport_02.xml";
			autoHoverCorrection[]={3.8399999,3.8900001,0};
			defaultCollective=0.60500002;
			retreatBladeStallWarningSpeed=92.583;
			maxTorque=6930;
			stressDamagePerSec=0.0033333332;
			maxHorizontalStabilizerLeftStress=10000;
			maxHorizontalStabilizerRightStress=10000;
			maxVerticalStabilizerStress=10000;
			horizontalWingsAngleCollMin=0;
			horizontalWingsAngleCollMax=0;
			maxMainRotorStress=260000;
			maxTailRotorStress=42000;
		};
		maxSpeed=300;
		fuelCapacity=2500;
		fuelConsumptionRate=0.138;
		enableSweep=0;
		slingLoadMaxCargoMass=5000;
		extCameraPosition[]={0,5,-30};
		class ViewPilot: ViewPilot
		{
			initAngleX=-9;
		};
		gearRetracting=1;
		gearUpTime=1;
		gearDownTime=1;
		armor=40;
		damageResistance=0.0055499999;
		class HitPoints: HitPoints
		{
			class HitHull: HitHull
			{
				armor=999;
				visual="zbytek";
				minimalHit=0.050000001;
				depends="Total";
				radius=0.0099999998;
			};
			class HitFuel: HitFuel
			{
				armor=0.69999999;
				radius=0.125;
				minimalHit=0.050000001;
				explosionShielding=2;
			};
			class HitAvionics: HitAvionics
			{
				armor=1.3;
				radius=0.25;
				minimalHit=0.050000001;
				explosionShielding=1.5;
				visual="podsvit pristroju";
			};
			class HitEngine1
			{
				armor=0.69999999;
				radius=0.25;
				name="engine_1_hit";
				explosionShielding=3;
				minimalHit=0.1;
				visual="motor";
				passThrough=1;
				convexComponent="engine_1_hit";
				material=51;
			};
			class HitEngine2: HitEngine1
			{
				armor=0.69999999;
				minimalHit=0.1;
				name="engine_2_hit";
				convexComponent="engine_2_hit";
			};
			class HitEngine: HitEngine
			{
				armor=999;
				radius=0.050000001;
				minimalHit=1;
				depends="0.5 * (HitEngine1 + HitEngine2)";
			};
			class HitHRotor: HitHRotor
			{
				armor=2.5999999;
				radius=0.40000001;
				minimalHit=0.090000004;
				explosionShielding=2.5;
			};
			class HitVRotor: HitVRotor
			{
				armor=1.3;
				radius=0.059999999;
				minimalHit=0.050000001;
				explosionShielding=6;
			};
			class HitGlass1
			{
				name="glass1";
				visual="glass1";
				radius=0.37;
				armor=1;
				explosionShielding=2;
				minimalHit=0.025;
				passThrough=0;
				class DestructionEffects
				{
					ammoExplosionEffect="";
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1NS";
						position="GlassEffects1";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2
					{
						simulation="particles";
						type="BrokenGlass2NS";
						position="GlassEffects1";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3
					{
						simulation="particles";
						type="BrokenGlass3NS";
						position="GlassEffects1";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4
					{
						simulation="particles";
						type="BrokenGlass4NS";
						position="GlassEffects1";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5
					{
						simulation="particles";
						type="BrokenGlass5NS";
						position="GlassEffects1";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass1S
					{
						simulation="particles";
						type="BrokenGlass1SS";
						position="GlassEffects1";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2S
					{
						simulation="particles";
						type="BrokenGlass2SS";
						position="GlassEffects1";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3S
					{
						simulation="particles";
						type="BrokenGlass3SS";
						position="GlassEffects1";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4S
					{
						simulation="particles";
						type="BrokenGlass4SS";
						position="GlassEffects1";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5S
					{
						simulation="particles";
						type="BrokenGlass5SS";
						position="GlassEffects1";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
				};
			};
			class HitGlass1A: HitGlass1
			{
				armor=999;
				depends="HitGlass1";
				class DestructionEffects
				{
					ammoExplosionEffect="";
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1NS";
						position="GlassEffects1A";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2
					{
						simulation="particles";
						type="BrokenGlass2NS";
						position="GlassEffects1A";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3
					{
						simulation="particles";
						type="BrokenGlass3NS";
						position="GlassEffects1A";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4
					{
						simulation="particles";
						type="BrokenGlass4NS";
						position="GlassEffects1A";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5
					{
						simulation="particles";
						type="BrokenGlass5NS";
						position="GlassEffects1A";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass1S
					{
						simulation="particles";
						type="BrokenGlass1SS";
						position="GlassEffects1A";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2S
					{
						simulation="particles";
						type="BrokenGlass2SS";
						position="GlassEffects1A";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3S
					{
						simulation="particles";
						type="BrokenGlass3SS";
						position="GlassEffects1A";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4S
					{
						simulation="particles";
						type="BrokenGlass4SS";
						position="GlassEffects1A";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5S
					{
						simulation="particles";
						type="BrokenGlass5SS";
						position="GlassEffects1A";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
				};
			};
			class HitGlass1B: HitGlass1
			{
				armor=999;
				depends="HitGlass1";
				class DestructionEffects
				{
					ammoExplosionEffect="";
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1NS";
						position="GlassEffects1B";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2
					{
						simulation="particles";
						type="BrokenGlass2NS";
						position="GlassEffects1B";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3
					{
						simulation="particles";
						type="BrokenGlass3NS";
						position="GlassEffects1B";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4
					{
						simulation="particles";
						type="BrokenGlass4NS";
						position="GlassEffects1B";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5
					{
						simulation="particles";
						type="BrokenGlass5NS";
						position="GlassEffects1B";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass1S
					{
						simulation="particles";
						type="BrokenGlass1SS";
						position="GlassEffects1B";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2S
					{
						simulation="particles";
						type="BrokenGlass2SS";
						position="GlassEffects1B";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3S
					{
						simulation="particles";
						type="BrokenGlass3SS";
						position="GlassEffects1B";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4S
					{
						simulation="particles";
						type="BrokenGlass4SS";
						position="GlassEffects1B";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5S
					{
						simulation="particles";
						type="BrokenGlass5SS";
						position="GlassEffects1B";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
				};
			};
			class HitGlass2
			{
				name="glass2";
				visual="glass2";
				radius=0.37;
				armor=1;
				explosionShielding=1.5;
				minimalHit=0.025;
				passThrough=0;
				class DestructionEffects
				{
					ammoExplosionEffect="";
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1NS";
						position="GlassEffects2";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2
					{
						simulation="particles";
						type="BrokenGlass2NS";
						position="GlassEffects2";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3
					{
						simulation="particles";
						type="BrokenGlass3NS";
						position="GlassEffects2";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4
					{
						simulation="particles";
						type="BrokenGlass4NS";
						position="GlassEffects2";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5
					{
						simulation="particles";
						type="BrokenGlass5NS";
						position="GlassEffects2";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass1S
					{
						simulation="particles";
						type="BrokenGlass1SS";
						position="GlassEffects2";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2S
					{
						simulation="particles";
						type="BrokenGlass2SS";
						position="GlassEffects2";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3S
					{
						simulation="particles";
						type="BrokenGlass3SS";
						position="GlassEffects2";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4S
					{
						simulation="particles";
						type="BrokenGlass4SS";
						position="GlassEffects2";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5S
					{
						simulation="particles";
						type="BrokenGlass5SS";
						position="GlassEffects2";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
				};
			};
			class HitGlass3
			{
				name="glass3";
				visual="glass3";
				radius=0.25;
				armor=1;
				explosionShielding=1.5;
				minimalHit=0.025;
				passThrough=0;
				class DestructionEffects
				{
					ammoExplosionEffect="";
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1NS";
						position="GlassEffects3";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2
					{
						simulation="particles";
						type="BrokenGlass2NS";
						position="GlassEffects3";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3
					{
						simulation="particles";
						type="BrokenGlass3NS";
						position="GlassEffects3";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4
					{
						simulation="particles";
						type="BrokenGlass4NS";
						position="GlassEffects3";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5
					{
						simulation="particles";
						type="BrokenGlass5NS";
						position="GlassEffects3";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass1S
					{
						simulation="particles";
						type="BrokenGlass1SS";
						position="GlassEffects3";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2S
					{
						simulation="particles";
						type="BrokenGlass2SS";
						position="GlassEffects3";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3S
					{
						simulation="particles";
						type="BrokenGlass3SS";
						position="GlassEffects3";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4S
					{
						simulation="particles";
						type="BrokenGlass4SS";
						position="GlassEffects3";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5S
					{
						simulation="particles";
						type="BrokenGlass5SS";
						position="GlassEffects3";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
				};
			};
			class HitGlass4
			{
				name="glass4";
				visual="glass4";
				radius=0.25;
				armor=1;
				explosionShielding=1.5;
				minimalHit=0.025;
				passThrough=0;
				class DestructionEffects
				{
					ammoExplosionEffect="";
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1NS";
						position="GlassEffects4";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2
					{
						simulation="particles";
						type="BrokenGlass2NS";
						position="GlassEffects4";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3
					{
						simulation="particles";
						type="BrokenGlass3NS";
						position="GlassEffects4";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4
					{
						simulation="particles";
						type="BrokenGlass4NS";
						position="GlassEffects4";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5
					{
						simulation="particles";
						type="BrokenGlass5NS";
						position="GlassEffects4";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass1S
					{
						simulation="particles";
						type="BrokenGlass1SS";
						position="GlassEffects4";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2S
					{
						simulation="particles";
						type="BrokenGlass2SS";
						position="GlassEffects4";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3S
					{
						simulation="particles";
						type="BrokenGlass3SS";
						position="GlassEffects4";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4S
					{
						simulation="particles";
						type="BrokenGlass4SS";
						position="GlassEffects4";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5S
					{
						simulation="particles";
						type="BrokenGlass5SS";
						position="GlassEffects4";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
				};
			};
			class HitGlass5
			{
				name="glass5";
				visual="glass5";
				radius=0.34;
				armor=1;
				explosionShielding=2;
				minimalHit=0.025;
				passThrough=0;
				class DestructionEffects
				{
					ammoExplosionEffect="";
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1NS";
						position="GlassEffects5";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2
					{
						simulation="particles";
						type="BrokenGlass2NS";
						position="GlassEffects5";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3
					{
						simulation="particles";
						type="BrokenGlass3NS";
						position="GlassEffects5";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4
					{
						simulation="particles";
						type="BrokenGlass4NS";
						position="GlassEffects5";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5
					{
						simulation="particles";
						type="BrokenGlass5NS";
						position="GlassEffects5";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass1S
					{
						simulation="particles";
						type="BrokenGlass1SS";
						position="GlassEffects5";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2S
					{
						simulation="particles";
						type="BrokenGlass2SS";
						position="GlassEffects5";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3S
					{
						simulation="particles";
						type="BrokenGlass3SS";
						position="GlassEffects5";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4S
					{
						simulation="particles";
						type="BrokenGlass4SS";
						position="GlassEffects5";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5S
					{
						simulation="particles";
						type="BrokenGlass5SS";
						position="GlassEffects5";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
				};
			};
			class HitGlass6
			{
				name="glass6";
				visual="glass6";
				radius=0.34;
				armor=1;
				explosionShielding=1.5;
				minimalHit=0.025;
				passThrough=0;
				class DestructionEffects
				{
					ammoExplosionEffect="";
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1NS";
						position="GlassEffects6";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2
					{
						simulation="particles";
						type="BrokenGlass2NS";
						position="GlassEffects6";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3
					{
						simulation="particles";
						type="BrokenGlass3NS";
						position="GlassEffects6";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4
					{
						simulation="particles";
						type="BrokenGlass4NS";
						position="GlassEffects6";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5
					{
						simulation="particles";
						type="BrokenGlass5NS";
						position="GlassEffects6";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass1S
					{
						simulation="particles";
						type="BrokenGlass1SS";
						position="GlassEffects6";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2S
					{
						simulation="particles";
						type="BrokenGlass2SS";
						position="GlassEffects6";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3S
					{
						simulation="particles";
						type="BrokenGlass3SS";
						position="GlassEffects6";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4S
					{
						simulation="particles";
						type="BrokenGlass4SS";
						position="GlassEffects6";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5S
					{
						simulation="particles";
						type="BrokenGlass5SS";
						position="GlassEffects6";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
				};
			};
			class HitGlass7
			{
				name="glass7";
				visual="glass7";
				radius=0.34;
				armor=1;
				explosionShielding=1.5;
				minimalHit=0.025;
				passThrough=0;
				class DestructionEffects
				{
					ammoExplosionEffect="";
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1NS";
						position="GlassEffects7";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2
					{
						simulation="particles";
						type="BrokenGlass2NS";
						position="GlassEffects7";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3
					{
						simulation="particles";
						type="BrokenGlass3NS";
						position="GlassEffects7";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4
					{
						simulation="particles";
						type="BrokenGlass4NS";
						position="GlassEffects7";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5
					{
						simulation="particles";
						type="BrokenGlass5NS";
						position="GlassEffects7";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass1S
					{
						simulation="particles";
						type="BrokenGlass1SS";
						position="GlassEffects7";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2S
					{
						simulation="particles";
						type="BrokenGlass2SS";
						position="GlassEffects7";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3S
					{
						simulation="particles";
						type="BrokenGlass3SS";
						position="GlassEffects7";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4S
					{
						simulation="particles";
						type="BrokenGlass4SS";
						position="GlassEffects7";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5S
					{
						simulation="particles";
						type="BrokenGlass5SS";
						position="GlassEffects7";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
				};
			};
			class HitGlass8
			{
				name="glass8";
				visual="glass8";
				radius=0.34;
				armor=1;
				explosionShielding=1.5;
				minimalHit=0.025;
				passThrough=0;
				class DestructionEffects
				{
					ammoExplosionEffect="";
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1NS";
						position="GlassEffects8";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2
					{
						simulation="particles";
						type="BrokenGlass2NS";
						position="GlassEffects8";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3
					{
						simulation="particles";
						type="BrokenGlass3NS";
						position="GlassEffects8";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4
					{
						simulation="particles";
						type="BrokenGlass4NS";
						position="GlassEffects8";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5
					{
						simulation="particles";
						type="BrokenGlass5NS";
						position="GlassEffects8";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass1S
					{
						simulation="particles";
						type="BrokenGlass1SS";
						position="GlassEffects8";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2S
					{
						simulation="particles";
						type="BrokenGlass2SS";
						position="GlassEffects8";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3S
					{
						simulation="particles";
						type="BrokenGlass3SS";
						position="GlassEffects8";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4S
					{
						simulation="particles";
						type="BrokenGlass4SS";
						position="GlassEffects8";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5S
					{
						simulation="particles";
						type="BrokenGlass5SS";
						position="GlassEffects8";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
				};
			};
			class HitGlass9
			{
				name="glass9";
				visual="glass9";
				radius=0.23999999;
				armor=0.80000001;
				explosionShielding=1;
				minimalHit=0.025;
				passThrough=0;
				class DestructionEffects
				{
					ammoExplosionEffect="";
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1NS";
						position="GlassEffects9";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2
					{
						simulation="particles";
						type="BrokenGlass2NS";
						position="GlassEffects9";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3
					{
						simulation="particles";
						type="BrokenGlass3NS";
						position="GlassEffects9";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4
					{
						simulation="particles";
						type="BrokenGlass4NS";
						position="GlassEffects9";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5
					{
						simulation="particles";
						type="BrokenGlass5NS";
						position="GlassEffects9";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass1S
					{
						simulation="particles";
						type="BrokenGlass1SS";
						position="GlassEffects9";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2S
					{
						simulation="particles";
						type="BrokenGlass2SS";
						position="GlassEffects9";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3S
					{
						simulation="particles";
						type="BrokenGlass3SS";
						position="GlassEffects9";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4S
					{
						simulation="particles";
						type="BrokenGlass4SS";
						position="GlassEffects9";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5S
					{
						simulation="particles";
						type="BrokenGlass5SS";
						position="GlassEffects9";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
				};
			};
			class HitGlass10
			{
				name="glass10";
				visual="glass10";
				radius=0.23999999;
				armor=0.80000001;
				explosionShielding=1;
				minimalHit=0.025;
				passThrough=0;
				class DestructionEffects
				{
					ammoExplosionEffect="";
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1NS";
						position="GlassEffects10";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2
					{
						simulation="particles";
						type="BrokenGlass2NS";
						position="GlassEffects10";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3
					{
						simulation="particles";
						type="BrokenGlass3NS";
						position="GlassEffects10";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4
					{
						simulation="particles";
						type="BrokenGlass4NS";
						position="GlassEffects10";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5
					{
						simulation="particles";
						type="BrokenGlass5NS";
						position="GlassEffects10";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass1S
					{
						simulation="particles";
						type="BrokenGlass1SS";
						position="GlassEffects10";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2S
					{
						simulation="particles";
						type="BrokenGlass2SS";
						position="GlassEffects10";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3S
					{
						simulation="particles";
						type="BrokenGlass3SS";
						position="GlassEffects10";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4S
					{
						simulation="particles";
						type="BrokenGlass4SS";
						position="GlassEffects10";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5S
					{
						simulation="particles";
						type="BrokenGlass5SS";
						position="GlassEffects10";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
				};
			};
			class HitGlass11
			{
				name="glass11";
				visual="glass11";
				radius=0.23999999;
				armor=0.80000001;
				explosionShielding=1;
				minimalHit=0.025;
				passThrough=0;
				class DestructionEffects
				{
					ammoExplosionEffect="";
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1NS";
						position="GlassEffects11";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2
					{
						simulation="particles";
						type="BrokenGlass2NS";
						position="GlassEffects11";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3
					{
						simulation="particles";
						type="BrokenGlass3NS";
						position="GlassEffects11";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4
					{
						simulation="particles";
						type="BrokenGlass4NS";
						position="GlassEffects11";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5
					{
						simulation="particles";
						type="BrokenGlass5NS";
						position="GlassEffects11";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass1S
					{
						simulation="particles";
						type="BrokenGlass1SS";
						position="GlassEffects11";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2S
					{
						simulation="particles";
						type="BrokenGlass2SS";
						position="GlassEffects11";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3S
					{
						simulation="particles";
						type="BrokenGlass3SS";
						position="GlassEffects11";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4S
					{
						simulation="particles";
						type="BrokenGlass4SS";
						position="GlassEffects11";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5S
					{
						simulation="particles";
						type="BrokenGlass5SS";
						position="GlassEffects11";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
				};
			};
			class HitGlass12
			{
				name="glass12";
				visual="glass12";
				radius=0.23999999;
				armor=0.80000001;
				explosionShielding=1;
				minimalHit=0.025;
				passThrough=0;
				class DestructionEffects
				{
					ammoExplosionEffect="";
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1NS";
						position="GlassEffects12";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2
					{
						simulation="particles";
						type="BrokenGlass2NS";
						position="GlassEffects12";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3
					{
						simulation="particles";
						type="BrokenGlass3NS";
						position="GlassEffects12";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4
					{
						simulation="particles";
						type="BrokenGlass4NS";
						position="GlassEffects12";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5
					{
						simulation="particles";
						type="BrokenGlass5NS";
						position="GlassEffects12";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass1S
					{
						simulation="particles";
						type="BrokenGlass1SS";
						position="GlassEffects12";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2S
					{
						simulation="particles";
						type="BrokenGlass2SS";
						position="GlassEffects12";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3S
					{
						simulation="particles";
						type="BrokenGlass3SS";
						position="GlassEffects12";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4S
					{
						simulation="particles";
						type="BrokenGlass4SS";
						position="GlassEffects12";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5S
					{
						simulation="particles";
						type="BrokenGlass5SS";
						position="GlassEffects12";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
				};
			};
			class HitGlass13
			{
				name="glass13";
				visual="glass13";
				radius=0.23999999;
				armor=0.80000001;
				explosionShielding=1;
				minimalHit=0.025;
				passThrough=0;
				class DestructionEffects
				{
					ammoExplosionEffect="";
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1NS";
						position="GlassEffects13";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2
					{
						simulation="particles";
						type="BrokenGlass2NS";
						position="GlassEffects13";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3
					{
						simulation="particles";
						type="BrokenGlass3NS";
						position="GlassEffects13";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4
					{
						simulation="particles";
						type="BrokenGlass4NS";
						position="GlassEffects13";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5
					{
						simulation="particles";
						type="BrokenGlass5NS";
						position="GlassEffects13";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass1S
					{
						simulation="particles";
						type="BrokenGlass1SS";
						position="GlassEffects13";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2S
					{
						simulation="particles";
						type="BrokenGlass2SS";
						position="GlassEffects13";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3S
					{
						simulation="particles";
						type="BrokenGlass3SS";
						position="GlassEffects13";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4S
					{
						simulation="particles";
						type="BrokenGlass4SS";
						position="GlassEffects13";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5S
					{
						simulation="particles";
						type="BrokenGlass5SS";
						position="GlassEffects13";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
				};
			};
			class HitGlass14
			{
				name="glass14";
				visual="glass14";
				radius=0.23999999;
				armor=0.80000001;
				explosionShielding=1;
				minimalHit=0.025;
				passThrough=0;
				class DestructionEffects
				{
					ammoExplosionEffect="";
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1NS";
						position="GlassEffects14";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2
					{
						simulation="particles";
						type="BrokenGlass2NS";
						position="GlassEffects14";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3
					{
						simulation="particles";
						type="BrokenGlass3NS";
						position="GlassEffects14";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4
					{
						simulation="particles";
						type="BrokenGlass4NS";
						position="GlassEffects14";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5
					{
						simulation="particles";
						type="BrokenGlass5NS";
						position="GlassEffects14";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass1S
					{
						simulation="particles";
						type="BrokenGlass1SS";
						position="GlassEffects14";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2S
					{
						simulation="particles";
						type="BrokenGlass2SS";
						position="GlassEffects14";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3S
					{
						simulation="particles";
						type="BrokenGlass3SS";
						position="GlassEffects14";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4S
					{
						simulation="particles";
						type="BrokenGlass4SS";
						position="GlassEffects14";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5S
					{
						simulation="particles";
						type="BrokenGlass5SS";
						position="GlassEffects14";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
				};
			};
			class HitGlass15
			{
				name="glass15";
				visual="glass15";
				radius=0.23999999;
				armor=0.80000001;
				explosionShielding=1;
				minimalHit=0.025;
				passThrough=0;
				class DestructionEffects
				{
					ammoExplosionEffect="";
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1NS";
						position="GlassEffects15";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2
					{
						simulation="particles";
						type="BrokenGlass2NS";
						position="GlassEffects15";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3
					{
						simulation="particles";
						type="BrokenGlass3NS";
						position="GlassEffects15";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4
					{
						simulation="particles";
						type="BrokenGlass4NS";
						position="GlassEffects15";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5
					{
						simulation="particles";
						type="BrokenGlass5NS";
						position="GlassEffects15";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass1S
					{
						simulation="particles";
						type="BrokenGlass1SS";
						position="GlassEffects15";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2S
					{
						simulation="particles";
						type="BrokenGlass2SS";
						position="GlassEffects15";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3S
					{
						simulation="particles";
						type="BrokenGlass3SS";
						position="GlassEffects15";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4S
					{
						simulation="particles";
						type="BrokenGlass4SS";
						position="GlassEffects15";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5S
					{
						simulation="particles";
						type="BrokenGlass5SS";
						position="GlassEffects15";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
				};
			};
			class HitGlass16
			{
				name="glass16";
				visual="glass16";
				radius=0.23999999;
				armor=0.80000001;
				explosionShielding=1;
				minimalHit=0.025;
				passThrough=0;
				class DestructionEffects
				{
					ammoExplosionEffect="";
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1NS";
						position="GlassEffects16";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2
					{
						simulation="particles";
						type="BrokenGlass2NS";
						position="GlassEffects16";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3
					{
						simulation="particles";
						type="BrokenGlass3NS";
						position="GlassEffects16";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4
					{
						simulation="particles";
						type="BrokenGlass4NS";
						position="GlassEffects16";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5
					{
						simulation="particles";
						type="BrokenGlass5NS";
						position="GlassEffects16";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass1S
					{
						simulation="particles";
						type="BrokenGlass1SS";
						position="GlassEffects16";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2S
					{
						simulation="particles";
						type="BrokenGlass2SS";
						position="GlassEffects16";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3S
					{
						simulation="particles";
						type="BrokenGlass3SS";
						position="GlassEffects16";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4S
					{
						simulation="particles";
						type="BrokenGlass4SS";
						position="GlassEffects16";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5S
					{
						simulation="particles";
						type="BrokenGlass5SS";
						position="GlassEffects16";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
				};
			};
			class HitGlass17
			{
				name="glass17";
				visual="glass17";
				radius=0.23999999;
				armor=0.80000001;
				explosionShielding=1;
				minimalHit=0.025;
				passThrough=0;
				class DestructionEffects
				{
					ammoExplosionEffect="";
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1NS";
						position="GlassEffects17";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2
					{
						simulation="particles";
						type="BrokenGlass2NS";
						position="GlassEffects17";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3
					{
						simulation="particles";
						type="BrokenGlass3NS";
						position="GlassEffects17";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4
					{
						simulation="particles";
						type="BrokenGlass4NS";
						position="GlassEffects17";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5
					{
						simulation="particles";
						type="BrokenGlass5NS";
						position="GlassEffects17";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass1S
					{
						simulation="particles";
						type="BrokenGlass1SS";
						position="GlassEffects17";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2S
					{
						simulation="particles";
						type="BrokenGlass2SS";
						position="GlassEffects17";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3S
					{
						simulation="particles";
						type="BrokenGlass3SS";
						position="GlassEffects17";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4S
					{
						simulation="particles";
						type="BrokenGlass4SS";
						position="GlassEffects17";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5S
					{
						simulation="particles";
						type="BrokenGlass5SS";
						position="GlassEffects17";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
				};
			};
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"A3\Air_F_Beta\Heli_Transport_02\Data\Heli_Transport_02_1.rvmat",
				"A3\Air_F_Beta\Heli_Transport_02\Data\Heli_Transport_02_1_damage.rvmat",
				"A3\Air_F_Beta\Heli_Transport_02\Data\Heli_Transport_02_1_destruct.rvmat",
				"A3\Air_F_Beta\Heli_Transport_02\Data\Heli_Transport_02_2.rvmat",
				"A3\Air_F_Beta\Heli_Transport_02\Data\Heli_Transport_02_2_damage.rvmat",
				"A3\Air_F_Beta\Heli_Transport_02\Data\Heli_Transport_02_2_destruct.rvmat",
				"A3\Air_F_Beta\Heli_Transport_02\Data\Heli_Transport_02_3.rvmat",
				"A3\Air_F_Beta\Heli_Transport_02\Data\Heli_Transport_02_3_damage.rvmat",
				"A3\Air_F_Beta\Heli_Transport_02\Data\Heli_Transport_02_3_destruct.rvmat",
				"A3\Data_F\Glass_veh.rvmat",
				"A3\Data_F\Glass_veh_damage.rvmat",
				"A3\Data_F\Glass_veh_damage.rvmat",
				"A3\Data_F\Glass_veh_int.rvmat",
				"A3\Data_F\Glass_veh_damage.rvmat",
				"A3\Data_F\Glass_veh_damage.rvmat",
				"A3\Air_F_Beta\Heli_Transport_02\Data\Heli_Transport_02_int_01.rvmat",
				"A3\Air_F_Beta\Heli_Transport_02\Data\Heli_Transport_02_int_01_damage.rvmat",
				"A3\Air_F_Beta\Heli_Transport_02\Data\Heli_Transport_02_int_01_destruct.rvmat",
				"A3\Air_F_Beta\Heli_Transport_02\Data\Heli_Transport_02_int_02.rvmat",
				"A3\Air_F_Beta\Heli_Transport_02\Data\Heli_Transport_02_int_02_damage.rvmat",
				"A3\Air_F_Beta\Heli_Transport_02\Data\Heli_Transport_02_int_02_destruct.rvmat"
			};
		};
		class MFD
		{
		};
		/*class Reflectors
		{
		};*/
		class Reflectors
		{
			class Light
			{
				color[]={8000,6500,3500};
				ambient[]={80,60,30};
				intensity=0;
				size=0;
				innerAngle=0;
				outerAngle=0;
				coneFadeCoef=0;
				position="";
				direction="";
				hitpoint="";
				selection="";
				useFlare=0;
				flareSize=0;
				flareMaxDistance=0;
				dayLight=0;
				class Attenuation
				{
					start=0;
					constant=0;
					linear=0;
					quadratic=0;
					hardLimitStart=0;
					hardLimitEnd=0;
				};
			};
		};
		class Exhausts
		{
			class Exhaust1
			{
				position="exhaust1";
				direction="exhaust1_dir";
				effect="ExhaustsEffectHeliBig";
			};
			class Exhaust2
			{
				position="exhaust2";
				direction="exhaust2_dir";
				effect="ExhaustsEffectHeliBig";
			};
		};
		/*
		class UserActions
		{
			
			class DoorL1_Open
			{
				userActionID=50;
				displayName="$STR_A3_CFGVEHICLES_USERACTIONS_OPENLDOOR0";
				displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				textToolTip="$STR_A3_CFGVEHICLES_USERACTIONS_OPENLDOOR0";
				priority=1.5;
				radius=1.5;
				radiusView=0.2;
				showIn3D=17;
				available=0;
				position="action_door_back_L";
				showWindow=1;
				onlyForPlayer=1;
				shortcut="";
				condition="((this doorPhase 'door_back_L') == 0) && (alive this)";
				statement="this animateDoor ['door_back_L', 1]";
			};
			class DoorR1_Open: DoorL1_Open
			{
				userActionID=51;
				displayName="$STR_A3_CFGVEHICLES_USERACTIONS_OPENRDOOR0";
				textToolTip="$STR_A3_CFGVEHICLES_USERACTIONS_OPENRDOOR0";
				position="action_door_back_R";
				condition="((this doorPhase 'door_back_R') == 0) && (alive this)";
				statement="this animateDoor ['door_back_R', 1]";
			};
			class DoorL1_Close: DoorL1_Open
			{
				userActionID=53;
				displayName="$STR_A3_CFGVEHICLES_USERACTIONS_CLOSELDOOR0";
				textToolTip="$STR_A3_CFGVEHICLES_USERACTIONS_CLOSELDOOR0";
				condition="((this doorPhase 'door_back_L') > 0) && (alive this)";
				statement="this animateDoor ['door_back_L', 0]";
			};
			class DoorR1_Close: DoorL1_Close
			{
				userActionID=54;
				displayName="$STR_A3_CFGVEHICLES_USERACTIONS_CLOSERDOOR0";
				textToolTip="$STR_A3_CFGVEHICLES_USERACTIONS_CLOSERDOOR0";
				position="action_door_back_R";
				condition="((this doorPhase 'door_back_R') > 0) && (alive this)";
				statement="this animateDoor ['door_back_R', 0]";
			};
			
			class Ramp_Open: DoorL1_Open
			{
				userActionID=55;
				displayName="$STR_ACTION_RAMP_OPEN0";
				textToolTip="$STR_ACTION_RAMP_OPEN0";
				position="";
				showWindow=0;
				condition="this doorPhase 'Door_Ramp' < 0.5 && {alive this} && {(player in [driver this, this turretUnit [0], this turretUnit [1], this turretUnit [2]]) && ((this getVariable ['bis_disabled_Ramp',0]) != 1)}";
				statement="this animateDoor ['Door_Ramp', 1]";
			};
			class Ramp_Close: Ramp_Open
			{
				userActionID=56;
				displayName="$STR_ACTION_RAMP_CLOSE0";
				textToolTip="$STR_ACTION_RAMP_CLOSE0";
				condition="this doorPhase 'Door_Ramp' > 0.5 && {alive this} && {(player in [driver this, this turretUnit [0], this turretUnit [1], this turretUnit [2]]) && ((this getVariable ['bis_disabled_Ramp',0]) != 1)}";
				statement="this animateDoor ['Door_Ramp', 0]";
			};
		};
		*/
		class UserActions
		{
			class DoorL1_Open
			{
				userActionID=50;
				displayName="$STR_A3_CFGVEHICLES_USERACTIONS_OPENLDOOR0";
				displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				textToolTip="$STR_A3_CFGVEHICLES_USERACTIONS_OPENLDOOR0";
				priority=1.5;
				radius=1.5;
				radiusView=0.2;
				showIn3D=17;
				available=0;
				position="action_door_back_L";
				showWindow=1;
				onlyForPlayer=1;
				shortcut="";
				condition="false && {this animationPhase ""door_back_L"" < 0.5 AND Alive(this)}";
				statement="this animateDoor ['door_back_L', 1]";
			};
			class DoorR1_Open: DoorL1_Open
			{
				userActionID=51;
				displayName="$STR_A3_CFGVEHICLES_USERACTIONS_OPENRDOOR0";
				textToolTip="$STR_A3_CFGVEHICLES_USERACTIONS_OPENRDOOR0";
				position="action_door_back_R";
				condition="false && {this animationPhase ""door_back_R"" < 0.5 AND Alive(this)}";
				statement="this animateDoor ['door_back_R', 1]";
			};
			class DoorL1_Close: DoorL1_Open
			{
				userActionID=53;
				displayName="$STR_A3_CFGVEHICLES_USERACTIONS_CLOSELDOOR0";
				textToolTip="$STR_A3_CFGVEHICLES_USERACTIONS_CLOSELDOOR0";
				condition="false && {this animationPhase ""door_back_L"" > 0.5 AND Alive(this)}";
				statement="this animateDoor ['door_back_L', 0]";
			};
			class DoorR1_Close: DoorL1_Close
			{
				userActionID=54;
				displayName="$STR_A3_CFGVEHICLES_USERACTIONS_CLOSERDOOR0";
				textToolTip="$STR_A3_CFGVEHICLES_USERACTIONS_CLOSERDOOR0";
				position="action_door_back_R";
				condition="false && {this animationPhase ""door_back_R"" > 0.5 AND Alive(this)}";
				statement="this animateDoor ['door_back_R', 0]";
			};
			class Ramp_Open: DoorL1_Open
			{
				userActionID=55;
				displayName="$STR_ACTION_RAMP_OPEN0";
				textToolTip="$STR_ACTION_RAMP_OPEN0";
				position="";
				showWindow=0;
				condition="this doorPhase 'Door_Ramp' < 0.5 && {alive this} && {(player in [driver this, this turretUnit [0], this turretUnit [1], this turretUnit [2]]) && ((this getVariable ['bis_disabled_Ramp',0]) != 1)}";
				statement="this animateDoor ['Door_Ramp', 1]";
			};
			class Ramp_Close: Ramp_Open
			{
				userActionID=56;
				displayName="$STR_ACTION_RAMP_CLOSE0";
				textToolTip="$STR_ACTION_RAMP_CLOSE0";
				condition="this doorPhase 'Door_Ramp' > 0.5 && {alive this} && {(player in [driver this, this turretUnit [0], this turretUnit [1], this turretUnit [2]]) && ((this getVariable ['bis_disabled_Ramp',0]) != 1)}";
				statement="this animateDoor ['Door_Ramp', 0]";
			};
		};		
		class AnimationSources: AnimationSources
		{
			class Door_Ramp
			{
				source="door";
				animPeriod=5;
				initPhase=0;
				sound="ServoRampSound_2";
			};
			class Door_Back_L
			{
				source="door";
				animPeriod=0.60000002;
				sound="RollDoorsSound";
			};
			class Door_Back_R
			{
				source="door";
				animPeriod=0.60000002;
				sound="RollDoorsSound";
			};
			class z_cargoseat
			{
				source="user";
				animPeriod=1e-007;
				initPhase=0;
				isComponent=1;
			};
			class HitGlass1
			{
				raw=1;
				source="hit";
				hitpoint="HitGlass1";
			};
			class HitGlass2
			{
				raw=1;
				source="hit";
				hitpoint="HitGlass2";
			};
			class HitGlass3
			{
				raw=1;
				source="hit";
				hitpoint="HitGlass3";
			};
			class HitGlass4
			{
				raw=1;
				source="hit";
				hitpoint="HitGlass4";
			};
			class HitGlass5
			{
				raw=1;
				source="hit";
				hitpoint="HitGlass5";
			};
			class HitGlass6
			{
				raw=1;
				source="hit";
				hitpoint="HitGlass6";
			};
			class HitGlass7
			{
				raw=1;
				source="hit";
				hitpoint="HitGlass7";
			};
			class HitGlass8
			{
				raw=1;
				source="hit";
				hitpoint="HitGlass8";
			};
			class HitGlass9
			{
				raw=1;
				source="hit";
				hitpoint="HitGlass9";
			};
			class HitGlass10
			{
				raw=1;
				source="hit";
				hitpoint="HitGlass10";
			};
			class HitGlass11
			{
				raw=1;
				source="hit";
				hitpoint="HitGlass11";
			};
			class HitGlass12
			{
				raw=1;
				source="hit";
				hitpoint="HitGlass12";
			};
			class HitGlass13
			{
				raw=1;
				source="hit";
				hitpoint="HitGlass13";
			};
			class HitGlass14
			{
				raw=1;
				source="hit";
				hitpoint="HitGlass14";
			};
			class HitGlass15
			{
				raw=1;
				source="hit";
				hitpoint="HitGlass15";
			};
			class HitGlass16
			{
				raw=1;
				source="hit";
				hitpoint="HitGlass16";
			};
			class HitGlass17
			{
				raw=1;
				source="hit";
				hitpoint="HitGlass17";
			};
			class HidePIPMFDCO
			{
				source="user";
				animPeriod=0;
				initPhase=0;
			};
			class HidePIPMFDPI
			{
				source="user";
				animPeriod=0;
				initPhase=0;
			};
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3_Aegis\air_f_Aegis\Heli_Transport_02\data\Heli_Transport_02_ext_01_CO.paa",
			"\A3_Aegis\air_f_Aegis\Heli_Transport_02\data\Heli_Transport_02_ext_02_CO.paa",
			"\A3_Aegis\air_f_Aegis\Heli_Transport_02\data\Heli_Transport_02_ext_02_CO.paa", ///update texture
			"\A3_Aegis\air_f_Aegis\Heli_Transport_02\data\Heli_Transport_02_int_02_CO.paa"
		};
		class TextureSources
		{
			class BAF
			{
				displayName = $STR_A3_A_TextureSources_BAF0;
				author = $STR_A3_A_Ravenholme;
				textures[]=
				{
					"\A3_Aegis\air_f_Aegis\Heli_Transport_02\data\Heli_Transport_02_ext_01_CO.paa",
					"\A3_Aegis\air_f_Aegis\Heli_Transport_02\data\Heli_Transport_02_ext_02_CO.paa",
					"\A3_Aegis\air_f_Aegis\Heli_Transport_02\data\Heli_Transport_02_ext_02_CO.paa", ///update texture
					"\A3_Aegis\air_f_Aegis\Heli_Transport_02\data\Heli_Transport_02_int_02_CO.paa"
				};
				factions[]={};
			};
			class Grey
			{
				displayName = $STR_A3_A_TextureSources_BAF_RN0;
				author = $STR_A3_A_Ravenholme;
				textures[]=
				{
					"\A3_Aegis\air_f_Aegis\Heli_Transport_02\data\Skins\Heli_Transport_02_ext_01_RN_CO.paa",
					"\A3_Aegis\air_f_Aegis\Heli_Transport_02\data\Skins\Heli_Transport_02_ext_02_RN_CO.paa",
					"\A3_Aegis\air_f_Aegis\Heli_Transport_02\data\Skins\Heli_Transport_02_ext_02_RN_CO.paa", ///update texture
					"\A3_Aegis\air_f_Aegis\Heli_Transport_02\data\Skins\Heli_Transport_02_int_02_GenMil_CO.paa"
				};
				factions[]={};
			};
			class ION_lxWS
			{
				displayName = $STR_A3_A_TEXTURESOURCES_ION_lxWS0;
				author = $STR_A3_A_Ravenholme;
				textures[]=
				{
					"\A3_Aegis\air_f_Aegis\Heli_Transport_02\data\Skins\Heli_Transport_02_ext_01_ION_lxWS_CO.paa",
					"\A3_Aegis\air_f_Aegis\Heli_Transport_02\data\Skins\Heli_Transport_02_ext_02_ION_lxWS_CO.paa",
					"\A3_Aegis\air_f_Aegis\Heli_Transport_02\data\Skins\Heli_Transport_02_ext_02_ION_lxWS_CO.paa", ///update texture
					"\A3_Aegis\air_f_Aegis\Heli_Transport_02\data\Skins\Heli_Transport_02_int_02_GenMil_CO.paa"
				};
				factions[]={};
			};
			class UNA
			{
				displayName=$STR_LXWS_FACTION_UN;
				author=$STR_LXWS_Author;
				textures[]=
				{
					"\A3_Aegis\air_f_Aegis\Heli_Transport_02\data\Skins\Heli_Transport_02_ext_01_UNA_CO.paa",
					"\A3_Aegis\air_f_Aegis\Heli_Transport_02\data\Skins\Heli_Transport_02_ext_02_UNA_CO.paa", ///update texture
					"lxWS\air_f_lxWS\Data\UN\Heli_Transport_02_2_UN_CO.paa",
					"lxWS\air_f_lxWS\Data\UN\Heli_Transport_02_int_02_UN_CO.paa"
				};
				factions[]=
				{};
			};
			class GenGrey
			{
				displayName = $STR_A3_TextureSources_Grey0;
				author = $STR_A3_A_Ravenholme;
				textures[]=
				{
					"\A3_Aegis\air_f_Aegis\Heli_Transport_02\data\Skins\Heli_Transport_02_ext_01_Grey_CO.paa",
					"\A3_Aegis\air_f_Aegis\Heli_Transport_02\data\Skins\Heli_Transport_02_ext_02_Grey_CO.paa",
					"\A3_Aegis\air_f_Aegis\Heli_Transport_02\data\Skins\Heli_Transport_02_ext_02_Grey_CO.paa", ///update texture
					"\A3_Aegis\air_f_Aegis\Heli_Transport_02\data\Skins\Heli_Transport_02_int_02_GenMil_CO.paa"
				};
				factions[]={};
			};
			class Black
			{
				displayName = $STR_A3_TextureSources_Black0;
				author = $STR_A3_A_Ravenholme;
				textures[]=
				{
					"\A3_Aegis\air_f_Aegis\Heli_Transport_02\data\Skins\Heli_Transport_02_ext_01_Black_CO.paa",
					"\A3_Aegis\air_f_Aegis\Heli_Transport_02\data\Skins\Heli_Transport_02_ext_02_ION_lxws_CO.paa",
					"\A3_Aegis\air_f_Aegis\Heli_Transport_02\data\Skins\Heli_Transport_02_ext_02_ION_lxws_CO.paa", ///update texture
					"\A3_Aegis\air_f_Aegis\Heli_Transport_02\data\Skins\Heli_Transport_02_int_02_GenMil_CO.paa"
				};
				factions[]={};
			};
			class Green
			{
				displayName = $STR_A3_TextureSources_Green0;
				author = $STR_A3_A_Ravenholme;
				textures[]=
				{
					"\A3_Aegis\air_f_Aegis\Heli_Transport_02\data\Skins\Heli_Transport_02_ext_01_Green_CO.paa",
					"\A3_Aegis\air_f_Aegis\Heli_Transport_02\data\Skins\Heli_Transport_02_ext_02_Green_CO.paa",
					"\A3_Aegis\air_f_Aegis\Heli_Transport_02\data\Skins\Heli_Transport_02_ext_02_Green_CO.paa", ///update texture
					"\A3_Aegis\air_f_Aegis\Heli_Transport_02\data\Heli_Transport_02_int_02_CO.paa"
				};
				factions[]={};
			};
			class Indep
			{
				displayName = $STR_A3_TextureSources_Indep0;
				author = $STR_A3_A_Grave;
				textures[]=
				{
					"\A3_Aegis\air_f_Aegis\Heli_Transport_02\data\Skins\Heli_Transport_02_ext_01_AAF_CO.paa",
					"\A3_Aegis\air_f_Aegis\Heli_Transport_02\data\Skins\Heli_Transport_02_ext_02_AAF_CO.paa",
					"\A3_Aegis\air_f_Aegis\Heli_Transport_02\data\Skins\Heli_Transport_02_ext_02_AAF_CO.paa", ///update texture
					"\A3_Aegis\air_f_Aegis\Heli_Transport_02\data\Heli_Transport_02_int_02_CO.paa"
				};
				factions[]={};
			};
		};
		class Armory
		{
			description="$STR_A3_Heli_Transport_02_lib";
		};
		weapons[]=
		{
			"CMFlareLauncher"
		};
		magazines[]=
		{
			"168Rnd_CMFlare_Chaff_Magazine"
		};
		radarTargetSize=1.2;
		visualTargetSize=1.2;
		irTargetSize=1.2;
		lockDetectionSystem="8 + 4";
		incomingMissileDetectionSystem="8 + 16";
		numberPhysicalWheels=3;
		unitInfoTypeRTD="RscUnitInfoAirRTDFullDigital";
		class CargoTurret;
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
			{
				gunnerAction="ChopperHeavy_L_static_H";
				gunnerInAction="ChopperHeavy_L_static_H";
				memoryPointsGetInGunnerPrecise="GetIn_Turret";
				gunnerGetInAction="GetInLow";
				gunnerGetOutAction="GetOutLow";
				preciseGetInOut=0;
				gunnerDoor="";
				class ViewGunner: ViewPilot
				{
				};
				class Components
				{
					class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftPilot
					{
					};
					class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightPilot
					{
					};
				};
			};
			class CargoTurret_01: CargoTurret
			{
				gunnerAction="passenger_inside_1";
				gunnerCompartments="Compartment2";
				memoryPointsGetInGunner="pos cargo RR";
				memoryPointsGetInGunnerDir="pos cargo RR dir";
				gunnerName="$STR_A3_TURRETS_CARGOTURRET_R";
				proxyIndex=5;
				isPersonTurret=1;
				ejectDeadGunner=0;
				enabledByAnimationSource="Door_Ramp";
				playerPosition=2;
				soundAttenuationTurret="HeliAttenuationRamp";
				disableSoundAttenuation=0;
				class TurnOut
				{
					limitsArrayTop[]=
					{
						{-22.052,45.545799},
						{-8.4516001,56.772701},
						{1.4483,65.123001},
						{-1.0515,90.887703}
					};
					limitsArrayBottom[]=
					{
						{-22.783501,45.479801},
						{-25.052,61.917099},
						{-30.3908,88.680901},
						{-1.3863,89.137497}
					};
				};
				class TurnIn: TurnOut
				{
				};
			};
			class CargoTurret_02: CargoTurret_01
			{
				gunnerCompartments="Compartment2";
				memoryPointsGetInGunner="pos cargo LR";
				memoryPointsGetInGunnerDir="pos cargo LR dir";
				gunnerName="$STR_A3_TURRETS_CARGOTURRET_L";
				proxyIndex=6;
				class TurnOut
				{
					limitsArrayTop[]=
					{
						{-2.8943,-89.789497},
						{0.26629999,-59.6968},
						{-8.4580002,-50.813801},
						{-21.2666,-35.517899},
						{-28.353901,-25.508699}
					};
					limitsArrayBottom[]=
					{
						{-3.8766,-89.885803},
						{-40.966999,-84.771896},
						{-31.8825,-53.919998},
						{-29.275801,-25.6078}
					};
				};
				class TurnIn: TurnOut
				{
				};
			};
		};
		cargoCompartments[]=
		{
			"Compartment2"
		};
		memoryPointDriverOptics="slingCamera";
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class PassiveRadarSensorComponent: SensorTemplatePassiveRadar
					{
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftPilot
			{
			};
			class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightPilot
			{
			};
		};
		class PilotCamera
		{
			class OpticsIn
			{
				class Wide
				{
					opticsDisplayName="W";
					initAngleX=0;
					minAngleX=0;
					maxAngleX=0;
					initAngleY=0;
					minAngleY=0;
					maxAngleY=0;
					initFov=0.5;
					minFov=0.5;
					maxFov=0.5;
					directionStabilized=1;
					visionMode[]=
					{
						"Normal",
						"NVG"
					};
					thermalMode[]={0,1};
					gunnerOpticsModel="A3\drones_f\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
				};
				showMiniMapInOptics=0;
				showUAVViewpInOptics=0;
				showSlingLoadManagerInOptics=1;
			};
			minTurn=0;
			maxTurn=0;
			initTurn=0;
			minElev=80;
			maxElev=80;
			initElev=80;
			maxXRotSpeed=0.5;
			maxYRotSpeed=0.5;
			pilotOpticsShowCursor=1;
			controllable=0;
		};	
	};
	class Aegis_Heli_Transport_02_VIP_base_F: Aegis_Heli_Transport_02_Heavy_base_F
	{
		author = $STR_A3_A_Grave;
		_generalMacro="Aegis_Heli_Transport_02_VIP_base_F";
		scope=0;
		model="\A3_Aegis\Air_F_Aegis\Heli_Transport_02\Heli_Transport_02_VIP_F.p3d";
		cargoAction[]=
		{
			"ChopperHeavy_LP_Static_H"
		};
		castCargoShadow=1;
		transportSoldier=12;
		hideWeaponsCargo=1;
		cargoProxyIndexes[]={1,2,3,4,5,6,7,8,9,10,11,12};
		class UserActions: UserActions
		{
			class Ramp_Open: DoorL1_Open
			{
			};
			class Ramp_Close: Ramp_Open
			{
			};
		};
		class AnimationSources: AnimationSources
		{
			class Door_Ramp: Door_Ramp
			{
			};
		};
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
			{
				gunnerAction="ChopperHeavy_L_static_H";
				gunnerInAction="ChopperHeavy_L_static_H";
				memoryPointsGetInGunnerPrecise="GetIn_Turret";
				gunnerGetInAction="GetInLow";
				gunnerGetOutAction="GetOutLow";
				preciseGetInOut=0;
				gunnerDoor="door_back_L";
				class ViewGunner: ViewPilot
				{
				};
				class Components
				{
					class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftPilot
					{
					};
					class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightPilot
					{
					};
				};
			};
		};
		hiddenSelectionsTextures[]=
		{
			"\A3_Aegis\air_f_Aegis\Heli_Transport_02\data\Skins\Heli_Transport_02_ext_01_ION_lxWS_CO.paa",
			"\A3_Aegis\air_f_Aegis\Heli_Transport_02\data\Skins\Heli_Transport_02_ext_02_ION_lxWS_CO.paa",
			"\A3_Aegis\air_f_Aegis\Heli_Transport_02\data\Skins\Heli_Transport_02_ext_02_ION_lxWS_CO.paa", ///update texture
			"\A3_Aegis\air_f_Aegis\Heli_Transport_02\data\Skins\Heli_Transport_02_int_02_GenCiv_CO.paa"
		};
		class TextureSources
		{
			class ION
			{
				displayName = $STR_A3_A_TextureSources_ION0;
				author = $STR_A3_A_Ravenholme;
				textures[]=
				{
					"\a3\air_f_beta\Heli_Transport_02\Data\Skins\Heli_Transport_02_1_ion_CO.paa",
					"\A3_Aegis\air_f_Aegis\Heli_Transport_02\data\Skins\Heli_Transport_02_ext_02_ION_CO.paa", ///update texture
					"\a3\air_f_beta\Heli_Transport_02\Data\Skins\Heli_Transport_02_2_ion_CO.paa",
					"\A3_Aegis\air_f_Aegis\Heli_Transport_02\data\Skins\Heli_Transport_02_int_02_GenCiv_CO.paa"
				};
				factions[]={};
			};
			class ION_lxWS
			{
				displayName = $STR_A3_A_TEXTURESOURCES_ION_lxWS0;
				author = $STR_A3_A_Ravenholme;
				textures[]=
				{
					"\A3_Aegis\air_f_Aegis\Heli_Transport_02\data\Skins\Heli_Transport_02_ext_01_ION_lxWS_CO.paa",
					"\A3_Aegis\air_f_Aegis\Heli_Transport_02\data\Skins\Heli_Transport_02_ext_02_ION_lxWS_CO.paa",
					"\A3_Aegis\air_f_Aegis\Heli_Transport_02\data\Skins\Heli_Transport_02_ext_02_ION_lxWS_CO.paa", ///update texture
					"\A3_Aegis\air_f_Aegis\Heli_Transport_02\data\Skins\Heli_Transport_02_int_02_GenCiv_CO.paa"
				};
				factions[]={};
			};
			class GenGrey
			{
				displayName = $STR_A3_TextureSources_Grey0;
				author = $STR_A3_A_Ravenholme;
				textures[]=
				{
					"\A3_Aegis\air_f_Aegis\Heli_Transport_02\data\Skins\Heli_Transport_02_ext_01_Grey_CO.paa",
					"\A3_Aegis\air_f_Aegis\Heli_Transport_02\data\Skins\Heli_Transport_02_ext_02_Grey_CO.paa",
					"\A3_Aegis\air_f_Aegis\Heli_Transport_02\data\Skins\Heli_Transport_02_ext_02_Grey_CO.paa", ///update texture
					"\A3_Aegis\air_f_Aegis\Heli_Transport_02\data\Skins\Heli_Transport_02_int_02_GenCiv_CO.paa"
				};
				factions[]={};
			};
			class White
			{
				displayName = $STR_A3_TextureSources_White0;
				author = $STR_A3_A_Ravenholme;
				textures[]=
				{
					"\A3_Aegis\air_f_Aegis\Heli_Transport_02\data\Skins\Heli_Transport_02_ext_01_White_CO.paa",
					"\A3_Aegis\air_f_Aegis\Heli_Transport_02\data\Skins\Heli_Transport_02_ext_02_White_CO.paa",
					"\A3_Aegis\air_f_Aegis\Heli_Transport_02\data\Skins\Heli_Transport_02_ext_02_White_CO.paa", ///update texture
					"\A3_Aegis\air_f_Aegis\Heli_Transport_02\data\Skins\Heli_Transport_02_int_02_GenCiv_CO.paa"
				};
				factions[]={};
			};
			class UNA
			{
				displayName=$STR_LXWS_FACTION_UN;
				author=$STR_LXWS_Author;
				textures[]=
				{
					"lxWS\air_f_lxWS\Data\UN\Heli_Transport_02_1_UN_CO.paa",
					"\A3_Aegis\air_f_Aegis\Heli_Transport_02\data\Skins\Heli_Transport_02_ext_02_UNA_CO.paa", ///update texture
					"lxWS\air_f_lxWS\Data\UN\Heli_Transport_02_2_UN_CO.paa",
					"lxWS\air_f_lxWS\Data\UN\Heli_Transport_02_int_02_UN_CO.paa"
				};
				factions[]=
				{};
			};
			class Black
			{
				displayName = $STR_A3_TextureSources_Black0;
				author = $STR_A3_A_Ravenholme;
				textures[]=
				{
					"\A3_Aegis\air_f_Aegis\Heli_Transport_02\data\Skins\Heli_Transport_02_ext_01_Black_CO.paa",
					"\A3_Aegis\air_f_Aegis\Heli_Transport_02\data\Skins\Heli_Transport_02_ext_02_ION_lxws_CO.paa",
					"\A3_Aegis\air_f_Aegis\Heli_Transport_02\data\Skins\Heli_Transport_02_ext_02_ION_lxWS_CO.paa", ///update texture
					"\A3_Aegis\air_f_Aegis\Heli_Transport_02\data\Skins\Heli_Transport_02_int_02_GenCiv_CO.paa"
				};
				factions[]={};
			};
			class Vrana
			{
				displayName = $STR_A3_TextureSources_Vrana0;
				author = $STR_A3_A_Ravenholme;
				textures[]=
				{
					"\A3_Aegis\air_f_Aegis\Heli_Transport_02\data\Skins\Heli_Transport_02_ext_01_Vrana_CO.paa",
					"\A3_Aegis\air_f_Aegis\Heli_Transport_02\data\Skins\Heli_Transport_02_ext_02_Vrana_CO.paa",
					"\A3_Aegis\air_f_Aegis\Heli_Transport_02\data\Skins\Heli_Transport_02_ext_02_Vrana_CO.paa", ///update texture
					"\A3_Aegis\air_f_Aegis\Heli_Transport_02\data\Skins\Heli_Transport_02_int_02_GenCiv_CO.paa"
				};
				factions[]={};
			};
			class BluePearl
			{
				displayName = $STR_A3_BluePearl1;
				author = $STR_A3_A_Ravenholme;
				textures[]=
				{
					"\A3_Aegis\air_f_Aegis\Heli_Transport_02\data\Skins\Heli_Transport_02_ext_01_BluePearl_CO.paa",
					"\A3_Aegis\air_f_Aegis\Heli_Transport_02\data\Skins\Heli_Transport_02_ext_02_BluePearl_CO.paa",
					"\A3_Aegis\air_f_Aegis\Heli_Transport_02\data\Skins\Heli_Transport_02_ext_02_BluePearl_CO.paa", ///update texture
					"\A3_Aegis\air_f_Aegis\Heli_Transport_02\data\Skins\Heli_Transport_02_int_02_GenCiv_CO.paa"
				};
				factions[]={};
			};
			class Blue
			{
				displayName = $STR_A3_TEXTURESOURCES_BLUE0;
				author = $STR_A3_A_Ravenholme;
				textures[]=
				{
					"\A3_Aegis\air_f_Aegis\Heli_Transport_02\data\Skins\Heli_Transport_02_ext_01_Blue_CO.paa",
					"\A3_Aegis\air_f_Aegis\Heli_Transport_02\data\Skins\Heli_Transport_02_ext_02_Blue_CO.paa",
					"\A3_Aegis\air_f_Aegis\Heli_Transport_02\data\Skins\Heli_Transport_02_ext_02_Blue_CO.paa", ///update texture
					"\A3_Aegis\air_f_Aegis\Heli_Transport_02\data\Skins\Heli_Transport_02_int_02_GenCiv_CO.paa"
				};
				factions[]={};
			};
			class RAS_VVIP
			{
				displayName = $STR_A3_A_TextureSources_Altis_VVIP0;
				author = $STR_A3_A_Grave;
				textures[]=
				{
					"\A3_Aegis\air_f_Aegis\Heli_Transport_02\data\Skins\Heli_Transport_02_ext_01_RAS_CO.paa",
					"\A3_Aegis\air_f_Aegis\Heli_Transport_02\data\Skins\Heli_Transport_02_ext_02_RAS_CO.paa",
					"\A3_Aegis\air_f_Aegis\Heli_Transport_02\data\Skins\Heli_Transport_02_ext_02_RAS_CO.paa", ///update texture
					"\A3_Aegis\air_f_Aegis\Heli_Transport_02\data\Skins\Heli_Transport_02_int_02_GenCiv_CO.paa"
				};
				factions[]={};
			};
			class Daltgreen
			{
				displayName = $STR_A3_Daltgreen1;
				author = $STR_A3_A_Grave;
				textures[]=
				{
					"\A3_Aegis\air_f_Aegis\Heli_Transport_02\data\Skins\Heli_Transport_02_ext_01_Daltgreen_CO.paa",
					"\A3_Aegis\air_f_Aegis\Heli_Transport_02\data\Skins\Heli_Transport_02_ext_02_Daltgreen_CO.paa",
					"\A3_Aegis\air_f_Aegis\Heli_Transport_02\data\Skins\Heli_Transport_02_ext_02_Daltgreen_CO.paa", ///update texture
					"\A3_Aegis\air_f_Aegis\Heli_Transport_02\data\Skins\Heli_Transport_02_int_02_GenCiv_CO.paa"
				};
				factions[]={};
			};
		};
	};	
