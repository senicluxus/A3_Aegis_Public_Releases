class CfgAmmo
{
    class BulletBase;
	class MissileBase;
	class RocketBase;
	class B_19mm_HE: BulletBase
	{
		SoundSetExplosion[] =
		{
			MiniGrenade_Exp_SoundSet,
			MiniGrenade_Tail_SoundSet,
			Explosion_Debris_SoundSet
		};
	};
	class G_40mm_HE;
	class M_Vorona_HEAT: MissileBase
	{
		SoundSetExplosion[] =
		{
            RocketsHeavy_Exp_SoundSet,
            RocketsHeavy_Tail_SoundSet,
            Explosion_Debris_SoundSet
        };
    };
	class M_SPG9_HEAT: RocketBase
	{
		SoundSetExplosion[] =
		{
			RocketsLight_Exp_SoundSet,
			RocketsLight_Tail_SoundSet,
			Explosion_Debris_SoundSet
		};
	};
	class ammo_Bomb_LaserGuidedBase;
	class ammo_Bomb_SmallDiameterBase: ammo_Bomb_LaserGuidedBase
	{
		SoundSetExplosion[] =
		{
			BombsHeavy_Exp_SoundSet,
			BombsHeavy_Tail_SoundSet,
			Explosion_Debris_SoundSet
		};
	};
	class R_50mm_HE: RocketBase
	{
		SoundSetExplosion[] =
		{
			RocketsLight_Exp_SoundSet,
			RocketsLight_Tail_SoundSet,
			Explosion_Debris_SoundSet
		};
	};
	class M_Vikhr_AT: MissileBase
	{
		SoundSetExplosion[] =
		{
			RocketsMedium_Exp_SoundSet,
			RocketsMedium_Tail_SoundSet,
			Explosion_Debris_SoundSet
		};
	};
};