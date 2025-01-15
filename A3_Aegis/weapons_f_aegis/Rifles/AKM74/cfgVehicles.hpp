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
	WEAPON_HOLDER(Aegis_arifle_AKM74_F,$STR_A3_A_CfgWeapons_arifle_AKM74_F0,EdSubcat_AssaultRifles,30Rnd_545x39_Black_Mag_F)
	WEAPON_HOLDER(Aegis_arifle_AKM74_GL_F,$STR_A3_A_CfgWeapons_arifle_AKM74_GL_F0,EdSubcat_AssaultRifles,30Rnd_545x39_Black_Mag_F)
	WEAPON_HOLDER(Aegis_arifle_AKM74_sand_F,$STR_A3_A_CfgWeapons_arifle_AKM74_snd_F0,EdSubcat_AssaultRifles,30Rnd_545x39_Mag_Sand_F)
	WEAPON_HOLDER(Aegis_arifle_AKM74_sand_GL_F,$STR_A3_A_CfgWeapons_arifle_AKM74_GL_snd_F0,EdSubcat_AssaultRifles,30Rnd_545x39_Mag_Sand_F)
	//WEAPON_HOLDER(Aegis_arifle_AKM74_olive_F,$STR_A3_A_CfgWeapons_arifle_AKM74_grn_F0,EdSubcat_AssaultRifles,30Rnd_545x39_Mag_Olive_F)
	//WEAPON_HOLDER(Aegis_arifle_AKM74_olive_GL_F,$STR_A3_A_CfgWeapons_arifle_AKM74_GL_grn_F0,EdSubcat_AssaultRifles,30Rnd_545x39_Mag_Olive_F)
	WEAPON_HOLDER(Aegis_arifle_AKM74_plum_F,$STR_A3_A_CfgWeapons_arifle_AKM74_plum_F0,EdSubcat_AssaultRifles,30Rnd_545x39_Mag_F)
	WEAPON_HOLDER(Aegis_arifle_AKM74_plum_GL_F,$STR_A3_A_CfgWeapons_arifle_AKM74_GL_plum_F0,EdSubcat_AssaultRifles,30Rnd_545x39_Mag_F)
	WEAPON_HOLDER(Aegis_arifle_AK74_F,$STR_A3_A_CfgWeapons_arifle_AK74_F0,EdSubcat_AssaultRifles,30Rnd_545x39_Mag_F)
	WEAPON_HOLDER(Aegis_arifle_AK74_GL_F,$STR_A3_A_CfgWeapons_arifle_AK74_GL_F0,EdSubcat_AssaultRifles,30Rnd_545x39_Mag_F)
	WEAPON_HOLDER(Aegis_arifle_AK74_oak_F,$STR_A3_A_CfgWeapons_arifle_AK74_oak_F0,EdSubcat_AssaultRifles,30Rnd_545x39_Mag_F)
	WEAPON_HOLDER(Aegis_arifle_AK74_gold_F,$STR_A3_A_CfgWeapons_arifle_AK74_gold_F0,EdSubcat_AssaultRifles,30Rnd_545x39_Steel_Gold_Mag_F)
	WEAPON_HOLDER(Aegis_arifle_AK74_GL_oak_F,$STR_A3_A_CfgWeapons_arifle_AK74_GL_oak_F0,EdSubcat_AssaultRifles,30Rnd_545x39_Mag_F)
	WEAPON_HOLDER(Aegis_arifle_AKS74_F,$STR_A3_A_CfgWeapons_arifle_AKS74_F0,EdSubcat_AssaultRifles,30Rnd_545x39_Mag_F)
	WEAPON_HOLDER(Aegis_arifle_AKS74_oak_F,$STR_A3_A_CfgWeapons_arifle_AKS74_oak_F0,EdSubcat_AssaultRifles,30Rnd_545x39_Mag_F)
	WEAPON_HOLDER(Aegis_arifle_AKS74_gold_F,$STR_A3_A_CfgWeapons_arifle_AKS74_gold_F0,EdSubcat_AssaultRifles,30Rnd_545x39_Steel_Gold_Mag_F)
	WEAPON_HOLDER(Aegis_arifle_AK103_F,$STR_A3_A_CfgWeapons_arifle_AK103_F0,EdSubcat_AssaultRifles,30Rnd_762x39_Mag_F)
	WEAPON_HOLDER(Aegis_arifle_AK103_GL_F,$STR_A3_A_CfgWeapons_arifle_AK103_GL_F0,EdSubcat_AssaultRifles,30Rnd_762x39_Mag_F)
	WEAPON_HOLDER(Aegis_arifle_AK103_plum_F,$STR_A3_A_CfgWeapons_arifle_AK103_plum_F0,EdSubcat_AssaultRifles,30Rnd_762x39_Mag_F)
	WEAPON_HOLDER(Aegis_arifle_AK103_GL_plum_F,$STR_A3_A_CfgWeapons_arifle_AK103_GL_plum_F0,EdSubcat_AssaultRifles,30Rnd_762x39_Mag_F)
};