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
			weap_xx(##a##,1); \
		}; \
		class TransportMagazines \
		{ \
			mag_xx(##d##,1); \
		}; \
	};

class CfgVehicles
{
	// editor weapons
	class Weapon_Base_F;
	WEAPON_HOLDER(arifle_NCAR15_F,$STR_A3_A_CfgWeapons_arifle_NCAR15_F0,EdSubcat_AssaultRifles,30Rnd_580x42_Mag_F)
	WEAPON_HOLDER(arifle_NCAR15B_F,$STR_A3_A_CfgWeapons_arifle_NCAR15B_F0,EdSubcat_AssaultRifles,30Rnd_580x42_Mag_F)
	WEAPON_HOLDER(arifle_NCAR15_GL_F,$STR_A3_A_CfgWeapons_arifle_NCAR15_GL_F0,EdSubcat_AssaultRifles,30Rnd_580x42_Mag_F)
	WEAPON_HOLDER(arifle_NCAR15_MG_F,$STR_A3_A_CfgWeapons_arifle_NCAR15_MG_F0,EdSubcat_AssaultRifles,100Rnd_580x42_Mag_F)
};