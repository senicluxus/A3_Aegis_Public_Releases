class CfgWeapons
{
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class Rifle_Long_Base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class Rifle_Short_Base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	
	//Base classes
	class Aegis_arifle_SR25_base_F: Rifle_Base_F
	{
		model="\A3_Aegis\weapons_f_aegis\Rifles\SR25\SR25_F.p3d";
		UiPicture="\A3\Weapons_F\Data\UI\icon_regular_CA.paa";
		descriptionShort="$STR_A3_CfgWeapons_srifle_ABR1";
		class Library
		{
			libTextDesc="$STR_A3_A_CfgWeapons_arifle_SCAR_base_F_Library0";
		};
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\Anim\SPAR_01.rtm"
			//"\A3_Aegis\weapons_f_aegis\Rifles\SR25\data\anim\SR25.rtm"
		};
		reloadAction="GestureReloadSPAR_01";
		
        /* Ammunition */ 
		magazines[] = 
		{
			Aegis_20Rnd_762x51_SMAG,
			Aegis_20Rnd_762x51_Red_SMAG,
			Aegis_20Rnd_762x51_Green_SMAG,
			Aegis_20Rnd_762x51_Yellow_SMAG,
			Aegis_20Rnd_762x51_Tracer_Red_SMAG,
			Aegis_20Rnd_762x51_Tracer_Green_SMAG,
			Aegis_20Rnd_762x51_Tracer_Yellow_SMAG
		};
		magazineWell[] = {Aegis_SR25_762x51};
		htMin=12;
		htMax=800;
		inertia=0.60000002;
		aimTransitionSpeed=0.80000001;
		dexterity=1.5;
		initSpeed=715;
		recoil="Aegis_recoil_rifle_SR25";
		maxZeroing=1800;
		cursor="srifle";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: Aegis_MuzzleSlot_SR25
			{
				iconPosition[]={0.12,0.43000001};
				iconScale=0.2;
			};
			class CowsSlot: asdg_OpticRail1913
			{
				iconPosition[]={0.5,0.36000001};
				iconScale=0.2;
			};
			class PointerSlot: asdg_FrontSideRail
			{
				iconPosition[]={0.33000001,0.40000001};
				iconScale=0.2;
			};
			class UnderBarrelSlot: asdg_UnderSlot
			{
				iconPosition[]={0.30000001,0.80000001};
				iconScale=0.30000001;
			};
			mass=138;
		};
		modes[]=
		{
			"Single",
			"single_close_optics1",
			"single_medium_optics1",
			"single_far_optics1"
		};
		class single: Mode_SemiAuto
		{
			reloadTime=0.1;
			dispersion=0.00065999999; //SCAR
			recoil="recoil_single_dmr";
			recoilProne="recoil_single_prone_dmr";
			minRange=2;
			minRangeProbab=0.30000001;
			midRange=350;
			midRangeProbab=0.69999999;
			maxRange=500;
			maxRangeProbab=0.050000001;
		};
		class single_close_optics1: Single
		{
			requiredOpticType=1;
			showToPlayer=0;
			minRange=2;
			minRangeProbab=0.050000001;
			midRange=300;
			midRangeProbab=0.80000001;
			maxRange=500;
			maxRangeProbab=0.0099999998;
			aiRateOfFire=2;
			aiRateOfFireDistance=300;
		};
		class single_medium_optics1: single_close_optics1
		{
			minRange=300;
			minRangeProbab=0.050000001;
			midRange=500;
			midRangeProbab=0.69999999;
			maxRange=700;
			maxRangeProbab=0.050000001;
			aiRateOfFire=2;
			aiRateOfFireDistance=500;
		};
		class single_far_optics1: single_medium_optics1
		{
			requiredOpticType=2;
			minRange=300;
			minRangeProbab=0.050000001;
			midRange=700;
			midRangeProbab=0.5;
			maxRange=1000;
			maxRangeProbab=0.050000001;
			aiRateOfFire=4;
			aiRateOfFireDistance=600;
		};
		ACE_barrelTwist=254;
		ACE_barrelLength=410;
		ACE_railHeightAboveBore=2.41885;
	};

	//SR25
	class Aegis_arifle_SR25_blk_F: Aegis_arifle_SR25_base_F
	{
		author = $STR_A3_A_Grave_3dGunsmith;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_arifle_SR25_F0;
		picture = "\A3_Aegis\weapons_f_aegis\Rifles\SR25\Data\UI\Icon_arifle_SR25_black_F_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3_Aegis\weapons_f_aegis\Rifles\SR25\Data\arifle_SR25_01_black_CO.paa",
			"\A3_Aegis\weapons_f_aegis\Rifles\SR25\Data\arifle_SR25_02_black_CO.paa"
		};
	};
	class Aegis_arifle_SR25_khk_F: Aegis_arifle_SR25_base_F
	{
		author = $STR_A3_A_Grave_3dGunsmith;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_arifle_SR25_khaki_F0;
		picture = "\A3_Aegis\weapons_f_aegis\Rifles\SR25\Data\UI\Icon_arifle_SR25_khaki_F_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3_Aegis\weapons_f_aegis\Rifles\SR25\Data\arifle_SR25_01_khaki_CO.paa",
			"\A3_Aegis\weapons_f_aegis\Rifles\SR25\Data\arifle_SR25_02_khaki_CO.paa"
		};
	};
	class Aegis_arifle_SR25_snd_F: Aegis_arifle_SR25_base_F
	{
		author = $STR_A3_A_Grave_3dGunsmith;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_arifle_SR25_sand_F0;
		picture = "\A3_Aegis\weapons_f_aegis\Rifles\SR25\Data\UI\Icon_arifle_SR25_sand_F_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3_Aegis\weapons_f_aegis\Rifles\SR25\Data\arifle_SR25_01_sand_CO.paa",
			"\A3_Aegis\weapons_f_aegis\Rifles\SR25\Data\arifle_SR25_02_sand_CO.paa"
		};
		magazines[] = 
		{
			Aegis_20Rnd_762x51_sand_SMAG,
			Aegis_20Rnd_762x51_Red_sand_SMAG,
			Aegis_20Rnd_762x51_Green_sand_SMAG,
			Aegis_20Rnd_762x51_Yellow_sand_SMAG,
			Aegis_20Rnd_762x51_Tracer_Red_sand_SMAG,
			Aegis_20Rnd_762x51_Tracer_Green_sand_SMAG,
			Aegis_20Rnd_762x51_Tracer_Yellow_sand_SMAG
		};
	};

	class Aegis_arifle_SR25_MR_blk_F: Aegis_arifle_SR25_base_F
	{
		model = "\A3_Aegis\weapons_f_aegis\Rifles\SR25\SR25_MR_F.p3d";
		author = $STR_A3_A_Grave_3dGunsmith;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_arifle_SR25_MR_F0;
		aimTransitionSpeed=1;
		dexterity=1.6;
		picture = "\A3_Aegis\weapons_f_aegis\Rifles\SR25\Data\UI\icon_Aegis_arifle_SR25_MR_blk_F_ca.paa";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\A3\Weapons_F_Exp\Rifles\SPAR_02\Data\Anim\SPAR_02.rtm"
			//"\A3_Aegis\weapons_f_aegis\Rifles\SR25\data\anim\SR25.rtm"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3_Aegis\weapons_f_aegis\Rifles\SR25\Data\arifle_SR25_01_MR_black_CO.paa",
			"\A3_Aegis\weapons_f_aegis\Rifles\SR25\Data\arifle_SR25_02_black_CO.paa",
			"\A3_Aegis\weapons_f_aegis\Rifles\SR25\Data\arifle_sr25_03_black_co.paa"
		};
	};
	class Aegis_arifle_SR25_MR_khk_F: Aegis_arifle_SR25_MR_blk_F
	{
		author = $STR_A3_A_Grave_3dGunsmith;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_arifle_SR25_MR_khaki_F0;
		picture = "\A3_Aegis\weapons_f_aegis\Rifles\SR25\Data\UI\icon_Aegis_arifle_SR25_MR_khk_F_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3_Aegis\weapons_f_aegis\Rifles\SR25\Data\arifle_SR25_01_MR_khaki_CO.paa",
			"\A3_Aegis\weapons_f_aegis\Rifles\SR25\Data\arifle_SR25_02_khaki_CO.paa",
			"\A3_Aegis\weapons_f_aegis\Rifles\SR25\Data\arifle_sr25_03_black_co.paa"
		};
	};
	class Aegis_arifle_SR25_MR_snd_F: Aegis_arifle_SR25_MR_blk_F
	{
		author = $STR_A3_A_Grave_3dGunsmith;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_arifle_SR25_MR_sand_F0;
		picture = "\A3_Aegis\weapons_f_aegis\Rifles\SR25\Data\UI\icon_Aegis_arifle_SR25_MR_snd_F_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3_Aegis\weapons_f_aegis\Rifles\SR25\Data\arifle_SR25_01_MR_sand_CO.paa",
			"\A3_Aegis\weapons_f_aegis\Rifles\SR25\Data\arifle_SR25_02_sand_CO.paa",
			"\A3_Aegis\weapons_f_aegis\Rifles\SR25\Data\arifle_sr25_03_black_co.paa"
		};
		magazines[] = 
		{
			Aegis_20Rnd_762x51_sand_SMAG,
			Aegis_20Rnd_762x51_Red_sand_SMAG,
			Aegis_20Rnd_762x51_Green_sand_SMAG,
			Aegis_20Rnd_762x51_Yellow_sand_SMAG,
			Aegis_20Rnd_762x51_Tracer_Red_sand_SMAG,
			Aegis_20Rnd_762x51_Tracer_Green_sand_SMAG,
			Aegis_20Rnd_762x51_Tracer_Yellow_sand_SMAG
		};
	};
};