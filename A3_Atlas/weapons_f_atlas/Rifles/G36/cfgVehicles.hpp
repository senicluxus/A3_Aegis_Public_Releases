#define WEAPON_HOLDER(a,b,c,d) \
	class Weapon_##a##: Weapon_Base_F \
	{ \
		scope = public; \
		scopeCurator = public; \
		displayName = ##b##; \
		author = $STR_A3_A_AveryTheKitty_MrBrightside_and_Toadie2K; \
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
	WEAPON_HOLDER(arifle_G36_F,$STR_A3_A_CfgWeapons_arifle_G36_F0,EdSubcat_AssaultRifles,30Rnd_65x39_caseless_msbs_mag)
	WEAPON_HOLDER(arifle_G36_GL_F,$STR_A3_A_CfgWeapons_arifle_G36_GL_F0,EdSubcat_AssaultRifles,30Rnd_65x39_caseless_msbs_mag)
	WEAPON_HOLDER(arifle_G36C_F,$STR_A3_A_CfgWeapons_arifle_G36C_F0,EdSubcat_AssaultRifles,30Rnd_65x39_caseless_msbs_mag)
};