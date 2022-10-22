#define WEAPON_HOLDER(a,b,c,d) \
	class Weapon_##a##: Weapon_Base_F \
	{ \
		scope = public; \
		scopeCurator = public; \
		displayName = ##b##; \
		author = $STR_A3_A_AveryTheKitty_Luchador_and_Toadie2K; \
		editorCategory = EdCat_Weapons; \
		editorSubcategory = ##c##; \
		vehicleClass = WeaponsPrimary; \
		class TransportWeapons \
		{ \
			weap_xx(##a##,1); \
		}; \
		class TransportMagazines \
		{ \
			mag_xx(##d##,1); \
		}; \
	};

class CfgVehicles
{
	class Weapon_Base_F;
	WEAPON_HOLDER(arifle_AUG_F,$STR_A3_A_CfgWeapons_arifle_AUG_F0,EdSubcat_AssaultRifles,30Rnd_556x45_AUG_Mag_F)
	WEAPON_HOLDER(arifle_AUG_GL_F,$STR_A3_A_CfgWeapons_arifle_AUG_GL_F0,EdSubcat_AssaultRifles,30Rnd_556x45_AUG_Mag_F)
	WEAPON_HOLDER(arifle_AUG_C_F,$STR_A3_A_CfgWeapons_arifle_AUG_C_F0,EdSubcat_AssaultRifles,30Rnd_556x45_AUG_Mag_F)
	WEAPON_HOLDER(arifle_AUG_black_F,$STR_A3_A_CfgWeapons_arifle_AUG_black_F0,EdSubcat_AssaultRifles,30Rnd_556x45_AUG_Mag_F)
	WEAPON_HOLDER(arifle_AUG_GL_black_F,$STR_A3_A_CfgWeapons_arifle_AUG_GL_black_F0,EdSubcat_AssaultRifles,30Rnd_556x45_AUG_Mag_F)
	WEAPON_HOLDER(arifle_AUG_C_black_F,$STR_A3_A_CfgWeapons_arifle_AUG_C_black_F0,EdSubcat_AssaultRifles,30Rnd_556x45_AUG_Mag_F)
};