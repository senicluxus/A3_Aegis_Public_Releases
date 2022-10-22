class CfgWeapons
{
	class Rifle_Base_F;
	class UGL_F;
	class arifle_AUG_base_F: Rifle_Base_F
	{
		bullet1[] = {"\A3\Sounds_F\weapons\shells\7_62\metal_762_01",db-6,1,15};
		bullet2[] = {"\A3\Sounds_F\weapons\shells\7_62\metal_762_02",db-6,1,15};
		bullet3[] = {"\A3\Sounds_F\weapons\shells\7_62\metal_762_03",db-6,1,15};
		bullet4[] = {"\A3\Sounds_F\weapons\shells\7_62\metal_762_04",db-6,1,15};
		bullet5[] = {"\A3\Sounds_F\weapons\shells\7_62\dirt_762_01",db-8,1,15};
		bullet6[] = {"\A3\Sounds_F\weapons\shells\7_62\dirt_762_02",db-8,1,15};
		bullet7[] = {"\A3\Sounds_F\weapons\shells\7_62\dirt_762_03",db-8,1,15};
		bullet8[] = {"\A3\Sounds_F\weapons\shells\7_62\dirt_762_04",db-8,1,15};
		bullet9[] = {"\A3\Sounds_F\weapons\shells\7_62\grass_762_01",db-12,1,15};
		bullet10[] = {"\A3\Sounds_F\weapons\shells\7_62\grass_762_02",db-12,1,15};
		bullet11[] = {"\A3\Sounds_F\weapons\shells\7_62\grass_762_03",db-12,1,15};
		bullet12[] = {"\A3\Sounds_F\weapons\shells\7_62\grass_762_04",db-12,1,15};
		soundBullet[] =
		{
			bullet1,1/12,
			bullet2,1/12,
			bullet3,1/12,
			bullet4,1/12,
			bullet5,1/12,
			bullet6,1/12,
			bullet7,1/12,
			bullet8,1/12,
			bullet9,1/12,
			bullet10,1/12,
			bullet11,1/12,
			bullet12,1/12
		};
		drySound[] = {"\A3_Atlas\Sounds_F_Atlas\arsenal\weapons\Rifles\AUG\AUG_dry",db-2,1,10};
		reloadMagazineSound[] = {"\A3_Atlas\Sounds_F_Atlas\arsenal\weapons\Rifles\AUG\AUG_reload",db0,1,10};
		changeFiremodeSound[] = {"",db0,0,0};
		class Single: Mode_SemiAuto
	  	{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					AUG_Shot_SoundSet,
					AUG_Tail_SoundSet,
					AUG_InteriorTail_SoundSet
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					AUG_silencerShot_SoundSet,
					AUG_silencerTail_SoundSet,
					AUG_silencerInteriorTail_SoundSet
				};
			};
	  	};
	  	class FullAuto: Mode_FullAuto
	  	{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					AUG_Shot_SoundSet,
					AUG_Tail_SoundSet,
					AUG_InteriorTail_SoundSet
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					AUG_silencerShot_SoundSet,
					AUG_silencerTail_SoundSet,
					AUG_silencerInteriorTail_SoundSet
				};
			};
	  	};
	};
	class arifle_AUG_GL_base_F: arifle_AUG_base_F
	{
		class EGLM: UGL_F
		{
			reloadMagazineSound[] = {"\A3_Atlas\Sounds_F_Atlas\arsenal\weapons\Rifles\AUG\AUG_UGL_reload",db-2,1,10};
		};
	};
	class arifle_G36_base_F: Rifle_Base_F
	{
		drySound[] = {"\A3_Atlas\Sounds_F_Atlas\arsenal\weapons\Rifles\G36\G36_dry",db-5,1,10};
		reloadMagazineSound[] = {"\A3_Atlas\Sounds_F_Atlas\arsenal\weapons\Rifles\G36\G36_reload",db0,1,10};
		changeFiremodeSound[] = {"\A3_Atlas\Sounds_F_Atlas\arsenal\weapons\Rifles\G36\G36_firemode",db-15,1,5};
		class Single: Mode_SemiAuto
	  	{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					G36_Shot_SoundSet,
					G36_Tail_SoundSet,
					G36_InteriorTail_SoundSet
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					G36_silencerShot_SoundSet,
					G36_silencerTail_SoundSet,
					G36_silencerInteriorTail_SoundSet
				};
			};
	  	};
		class Burst: Mode_Burst
	  	{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					G36_Shot_SoundSet,
					G36_Tail_SoundSet,
					G36_InteriorTail_SoundSet
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					G36_silencerShot_SoundSet,
					G36_silencerTail_SoundSet,
					G36_silencerInteriorTail_SoundSet
				};
			};
	  	};
	  	class FullAuto: Mode_FullAuto
	  	{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					G36_Shot_SoundSet,
					G36_Tail_SoundSet,
					G36_InteriorTail_SoundSet
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					G36_silencerShot_SoundSet,
					G36_silencerTail_SoundSet,
					G36_silencerInteriorTail_SoundSet
				};
			};
	  	};
	};
	class arifle_G36_GL_base_F: arifle_G36_base_F
	{
		class UGL: UGL_F
		{
			reloadMagazineSound[] = {"\A3_Atlas\Sounds_F_Atlas\arsenal\weapons\Rifles\G36\G36_UGL_reload",db-2,1,10};
		};
	};
};