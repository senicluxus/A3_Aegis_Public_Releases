/* Marar */
class Atlas_B_M_Soldier_Base_F;
class Atlas_B_M_support_CMort_RF: Atlas_B_M_Soldier_Base_F
{
	author = $STR_A3_A_Ravenholme;
	scope = public;
	scopeCurator = public;
	editorPreview = "\A3_Atlas\Editorpreviews_F_Atlas\Data\CfgVehicles\Atlas_B_M_support_CMort_RF.jpg";
	displayName = $STR_LXRF_Soldier_Mortar;
	backpack = B_D_CTRG_CommandoMortar_weapon_RF;
    weapons[] =
    {
        arifle_mk20_plain_arco_pointer_F,
        hgun_G17_black_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_mk20_plain_arco_pointer_F,
        hgun_G17_black_F,
        DefaultManWeapons
    };
    magazines[] =
    {
		mag_10(30Rnd_556x45_Stanag_red),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
		mag_10(30Rnd_556x45_Stanag_red),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
	linkedItems[] =
	{
		V_PlateCarrier2_snd,
		H_MK7_Marar_F,
		DefaultManLinkedItems,
		NVgoggles
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier2_snd,
		H_MK7_Marar_F,
		DefaultManLinkedItems,
		NVgoggles
	};
    cost = 220000;
	role = Assistant;
};