class Atlas_B_H_support_CMort_RF: I_Support_CMort_RF
{
	author = $STR_A3_A_Ravenholme;
	scope = public;
	scopeCurator = public;
	editorPreview = "\A3_Atlas\Editorpreviews_F_Atlas\Data\CfgVehicles\Atlas_B_L_support_CMort_RF.jpg";
    side = TWest;
    faction = Atlas_BLU_H_F;
	displayName = $STR_LXRF_Soldier_Mortar;
    uniformClass = Atlas_U_UniformBDU_02_HI_F;
	backpack = B_CommandoMortar_weapon_RF;
    genericNames = TanoanMen;
	identityTypes[] =
	{
		LanguageENGFRE_F,
		Head_Tanoan,
		G_HAF_default
	};
    weapons[] =
	{
		Atlas_arifle_M16A4_FL_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		Atlas_arifle_M16A4_FL_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_556x45_stanag_red),
        HandGrenade,
        SmokeShell
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_556x45_stanag_red),
        HandGrenade,
        SmokeShell
	};
	linkedItems[] =
	{
		V_TacChestrig_oli_F,
		H_Booniehat_oli,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_TacChestrig_oli_F,
		H_Booniehat_oli,
		DefaultManLinkedItems
	};
};