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
	WEAPON_HOLDER(Atlas_Arifle_famasG2_F,$STR_A3_A_CfgWeapons_atlas_arifle_FAMAS_F0,EdSubcat_AssaultRifles,30Rnd_556x45_Stanag)
	WEAPON_HOLDER(Atlas_Arifle_famasG2_Grip_F,$STR_A3_A_CfgWeapons_atlas_arifle_FAMAS_Grip_F0,EdSubcat_AssaultRifles,30Rnd_556x45_Stanag)
	WEAPON_HOLDER(Atlas_Arifle_famasG2_GL_F,$STR_A3_A_CfgWeapons_atlas_arifle_FAMAS_GL_F0,EdSubcat_AssaultRifles,30Rnd_556x45_Stanag)
	WEAPON_HOLDER(Atlas_Arifle_famasG4_Grip_F,$STR_A3_A_CfgWeapons_atlas_arifle_FAMASG4_F0,EdSubcat_AssaultRifles,30Rnd_65x39_caseless_msbs_mag)
    WEAPON_HOLDER(Atlas_Arifle_famasG4_GL_F,$STR_A3_A_CfgWeapons_atlas_arifle_FAMASG4_GL_F0,EdSubcat_AssaultRifles,30Rnd_65x39_caseless_msbs_mag)
    WEAPON_HOLDER(Atlas_Arifle_famasF1_F,$STR_A3_A_CfgWeapons_atlas_arifle_FAMASF1_F0,EdSubcat_AssaultRifles,Atlas_25Rnd_556x45_Famas)
	WEAPON_HOLDER(Atlas_Arifle_famasF1_Grip_F,$STR_A3_A_CfgWeapons_atlas_arifle_FAMASF1_Grip_F0,EdSubcat_AssaultRifles,Atlas_25Rnd_556x45_Famas)
	WEAPON_HOLDER(Atlas_Arifle_famasF1_RIS_F,$STR_A3_A_CfgWeapons_atlas_arifle_FAMASF1_Rail_F0,EdSubcat_AssaultRifles,Atlas_25Rnd_556x45_Famas)
	WEAPON_HOLDER(Atlas_Arifle_famasF1_GL_F,$STR_A3_A_CfgWeapons_atlas_arifle_FAMASF1_GL_F0,EdSubcat_AssaultRifles,Atlas_25Rnd_556x45_Famas)
};