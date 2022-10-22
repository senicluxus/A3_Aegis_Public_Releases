class CfgVehicles
{
    /* Definitions */
	#include "\A3_Aegis\macros_itemHolders.hpp"

    /* Bases */
    class Weapon_Base_F;

    /* Item Holders */
	WEAPON_HOLDER(Opf_arifle_RFB_F,20Rnd_762x51_Mag,$STR_A3_O_CfgWeapons_arifle_RFB_F0,EdSubcat_AssaultRifles);

    /* Deprecated */
    DEPRECATED_CLASS(Weapon_arifle_RFB_F,Weapon_Opf_arifle_RFB_F);
};