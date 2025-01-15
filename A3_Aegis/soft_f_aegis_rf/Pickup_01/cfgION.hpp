/* ION */
class Aegis_B_ION_Pickup_HMG_RF: Pickup_01_hmg_base_rf
{
    author = $STR_A3_A_Ravenholme;
	scope = public;
	scopeCurator = public;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_B_ION_Pickup_hmg_RF.jpg";
	side = TWest;
	faction = BLU_ION_lxWS;
	crew = B_ION_Soldier_lxWS;
	typicalCargo[] = {B_ION_Soldier_lxWS};
    textureList[] ={ION,1};
    /* Inventory */
	class TransportMagazines
	{
		mag_xx(30Rnd_556x45_Stanag,4);
		mag_xx(SmokeShell,2);
		mag_xx(SmokeShellBlue,2);
	};
	class TransportWeapons
	{
		weap_xx(arifle_XMS_Base_lxWS,2);
	};
	animationList[] = {"hide_bullbar", 0.5, "hide_snorkel", 0.5, "hide_trunk_door", 1, "hide_rack", 0, "hide_rack_spotlights", 0, "hide_sidesteps", 0, "hide_frame", 0, "hide_shield", 0, "Hide_Rail", 0};
};