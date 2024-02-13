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
	WEAPON_HOLDER(Aegis_arifle_CTAR_tan_f,$STR_A3_A_CfgWeapons_arifle_CTAR_tan_f0,EdSubcat_AssaultRifles,30Rnd_580x42_Mag_F)
	WEAPON_HOLDER(Aegis_arifle_CTAR_GL_tan_f,$STR_A3_A_CfgWeapons_arifle_CTAR_GL_tan_f0,EdSubcat_AssaultRifles,30Rnd_580x42_Mag_F)
	WEAPON_HOLDER(Aegis_arifle_CTARS_tan_f,$STR_A3_A_CfgWeapons_arifle_CTARS_tan_f0,EdSubcat_AssaultRifles,100Rnd_580x42_Mag_F)
};