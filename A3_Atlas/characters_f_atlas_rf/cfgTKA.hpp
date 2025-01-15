/* Takistani Army */
class Atlas_O_T_Soldier_Base_F;
class Atlas_O_T_support_CMort_RF: Atlas_O_T_Soldier_Base_F
{
	author = $STR_A3_A_Ravenholme;
	scope = public;
	scopeCurator = public;
	editorPreview = "\A3_Atlas\Editorpreviews_F_Atlas\Data\CfgVehicles\Atlas_O_T_support_CMort_RF.jpg";
	displayName = $STR_LXRF_Soldier_Mortar;
	backpack = B_D_CTRG_CommandoMortar_weapon_RF;
    linkedItems[] =
    {
        V_HarnessOSpec_tan,
        H_PASGT_basic_olive_F,
        G_shemag_white,
        DefaultManLinkedItems,
        NVGoggles_OPFOR
    };
	respawnLinkedItems[] =
    {
        V_HarnessOSpec_tan,
        H_PASGT_basic_olive_F,
        G_shemag_white,
        DefaultManLinkedItems,
        NVGoggles_OPFOR
    };
	weapons[] =
	{
		atlas_arifle_SCAR_L_FL_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		atlas_arifle_SCAR_L_FL_F,
		DefaultManWeapons
	};
    magazines[] =
    {
        mag_6(30Rnd_556x45_stanag_sand_green),
        mag_2(HandGrenade_Guer),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_556x45_stanag_sand_green),
        mag_2(HandGrenade_Guer),
        mag_2(SmokeShell)
    };
    cost = 220000;
	role = Assistant;
};