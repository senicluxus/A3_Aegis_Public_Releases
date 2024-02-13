#define WEAPON_HOLDER(a,b,c,d) \
	class Weapon_##a##: Weapon_Base_F \
	{ \
		scope = public; \
		scopeCurator = public; \
		displayName = ##b##; \
		author = $STR_A3_A_Ravenholme; \
		editorCategory = EdCat_Weapons; \
		editorSubcategory = ##c##; \
		vehicleClass = WeaponsPrimary; \
		class TransportWeapons \
		{ \
			weap_xx(a,1); \
		}; \
		class TransportMagazines \
		{ \
			mag_xx(d,1); \
		}; \
	};

class CfgVehicles
{
	// editor weapons
	class Weapon_Base_F;
	WEAPON_HOLDER(Aegis_arifle_SPAR_02_inf_blk_F,$STR_A3_CfgWeapons_arifle_spar_01_blk_f0,EdSubcat_AssaultRifles,30Rnd_556x45_Stanag)
	WEAPON_HOLDER(Aegis_arifle_SPAR_02_inf_khk_F,$STR_A3_CfgWeapons_arifle_spar_01_khk_f0,EdSubcat_AssaultRifles,30Rnd_556x45_Stanag)
	WEAPON_HOLDER(Aegis_arifle_SPAR_02_inf_snd_F,$STR_A3_CfgWeapons_arifle_spar_01_snd_f0,EdSubcat_AssaultRifles,30Rnd_556x45_Stanag_Sand)
	WEAPON_HOLDER(arifle_SPAR_01_blk_F,$STR_A3_A_CfgWeapons_arifle_spar_01_blk_f0,EdSubcat_AssaultRifles,30Rnd_556x45_Stanag)
	WEAPON_HOLDER(arifle_SPAR_01_khk_F,$STR_A3_A_CfgWeapons_arifle_spar_01_khk_f0,EdSubcat_AssaultRifles,30Rnd_556x45_Stanag)
	WEAPON_HOLDER(arifle_SPAR_01_snd_F,$STR_A3_A_CfgWeapons_arifle_spar_01_snd_f0,EdSubcat_AssaultRifles,30Rnd_556x45_Stanag_Sand)
	WEAPON_HOLDER(arifle_SPAR_01_GL_blk_F,$STR_A3_A_CfgWeapons_arifle_spar_01_gl_blk_f0,EdSubcat_AssaultRifles,30Rnd_556x45_Stanag)
	WEAPON_HOLDER(arifle_SPAR_01_GL_khk_F,$STR_A3_A_CfgWeapons_arifle_spar_01_gl_khk_f0,EdSubcat_AssaultRifles,30Rnd_556x45_Stanag)
	WEAPON_HOLDER(arifle_SPAR_01_GL_snd_F,$STR_A3_A_CfgWeapons_arifle_spar_01_gl_snd_f0,EdSubcat_AssaultRifles,30Rnd_556x45_Stanag_Sand)
};