/* Raven Base Class */
class I_Raven_Soldier_base_F;

/* Raven */
class I_Raven_Soldier_CQ_RF: I_Raven_Soldier_base_F
{
    author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_Raven_soldier_CQ_RF.jpg";
	scope = public;
	displayName = $STR_A3_A_CfgVehicles_O_Soldier_CQ_H_F0;
	role = Rifleman;
    uniformClass = Aegis_U_O_Luchnik_RolledUp_Arid_F;
	weapons[] = 
	{
		Aegis_arifle_ash12_blk_ACO_FL_RF,
		hgun_Rook40_F,
		DefaultManWeapons
	};
	respawnWeapons[] = 
	{
		Aegis_arifle_ash12_blk_ACO_FL_RF,
		hgun_Rook40_F,
		DefaultManWeapons
	};
	magazines[] = 
	{
        mag_6(20rnd_127x55_mag_rf),
        mag_2(17Rnd_9x21_Mag),
		HandGrenade_East,
		SmokeShell
	};
	respawnMagazines[] = 
	{
        mag_6(20rnd_127x55_mag_rf),
        mag_2(17Rnd_9x21_Mag),
		HandGrenade_East,
		SmokeShell
	};
	linkedItems[] = 
	{
		H_HelmetHeavy_black_RF,
		Aegis_V_OCarrierLuchnik_CQB_blk_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] = 
	{
		H_HelmetHeavy_Black_RF,
		Aegis_V_OCarrierLuchnik_CQB_blk_F,
		DefaultManLinkedItems
	};
    class EventHandlers{};
};
class O_Raven_Soldier_CQ_RF: I_Raven_Soldier_CQ_RF
{
	faction = OPF_Raven_F;
	side = TEast;
};