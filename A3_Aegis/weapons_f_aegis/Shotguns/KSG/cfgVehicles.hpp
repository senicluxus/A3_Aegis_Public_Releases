class CfgVehicles
{
    /* Definitions
    - We need a custom one, due to the KSG's dual magazines
    */
    #define WEAPON_HOLDER(a,b,c,d) \
        class Weapon_##a##: Weapon_Base_F \
        { \
            scope = public; \
            scopeCurator = public; \
            displayName = ##d##; \
            author = $STR_A3_A_AveryTheKitty; \
            editorCategory = EdCat_Weapons; \
            editorSubcategory = EdSubcat_Shotguns; \
            vehicleClass = WeaponsPrimary; \
            class TransportWeapons \
            { \
                class ##a## \
                { \
                    weapon = ##a##; \
                    count = 1; \
                }; \
            }; \
            class TransportMagazines \
            { \
                class ##b## \
                { \
                    magazine = ##b##; \
                    count = 1; \
                }; \
                class ##c## \
                { \
                    magazine = ##c##; \
                    count = 1; \
                }; \
            }; \
        }

    /* Bases */
    class Weapon_Base_F;

    /* Item Holders */
	WEAPON_HOLDER(sgun_KSG_F,8Rnd_12Gauge_Pellets,8Rnd_12Gauge_Slug,$STR_A3_A_CfgWeapons_sgun_KSG_F0);
    WEAPON_HOLDER(Aegis_sgun_KSG_black_F,8Rnd_12Gauge_Pellets,8Rnd_12Gauge_Slug,$STR_A3_A_CfgWeapons_sgun_KSG_black_F0);
};