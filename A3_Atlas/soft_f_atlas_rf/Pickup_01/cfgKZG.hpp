class Atlas_B_K_Pickup_F: Pickup_01_base_rf
{
	author = $STR_A3_A_BranFlakes;
	side = TWest;
	scope = public;
	scopeCurator = public;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_K_Pickup_F.jpg";
	faction = Atlas_BLU_K_F;
	crew = "Atlas_B_K_Soldier_F";
	typicalCargo[] = {"Atlas_B_K_Soldier_F"};
	textureList[] = {"KZG_01",1};
	class TransportMagazines
	{
		mag_xx(30Rnd_556x45_Stanag_red,4);
		mag_xx(SmokeShell,2);
		mag_xx(SmokeShellBlue,2);
	};
	class TransportWeapons
	{
		weap_xx(arifle_SPAR_01_blk_F,2);
	};
	animationList[] = {"hide_bullbar", 0.5, "hide_snorkel", 0, "hide_trunk_door", 0.1, "hide_sidesteps", 0, "hide_rack", 0, "hide_rack_spotlights", 0.5, "hide_frame", 0};
};
class Atlas_B_K_Pickup_Comms_F: Pickup_comms_base_rf
{
	author = $STR_A3_A_BranFlakes;
	side = TWest;
	scope = public;
	scopeCurator = public;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_K_Pickup_Comms_F.jpg";
	faction = Atlas_BLU_K_F;
	crew = "Atlas_B_K_Soldier_F";
	typicalCargo[] = {"Atlas_B_K_Soldier_F"};
	textureList[] = {"KZG_01",1};
	class TransportMagazines
	{
		mag_xx(30Rnd_556x45_Stanag_red,4);
		mag_xx(SmokeShell,2);
		mag_xx(SmokeShellBlue,2);
	};
	class TransportWeapons
	{
		weap_xx(arifle_SPAR_01_blk_F,2);
	};
	animationList[] = {"hide_bullbar", 0.5, "hide_snorkel", 0, "hide_trunk_door", 0, "hide_sidesteps", 0.5, "hide_rack", 0, "hide_rack_spotlights", 0, "hide_rack_antenna", 0, "hide_box", 0, "hide_box_door", 0};
};
class Atlas_B_K_Pickup_HMG_F: Pickup_01_hmg_base_rf
{
	author = $STR_A3_A_BranFlakes;
	side = TWest;
	scope = public;
	scopeCurator = public;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_K_Pickup_HMG_F.jpg";
	faction = Atlas_BLU_K_F;
	crew = "Atlas_B_K_Soldier_F";
	typicalCargo[] = {"Atlas_B_K_Soldier_F"};
	textureList[] = {"KZG_01",1};
	class TransportMagazines
	{
		mag_xx(30Rnd_556x45_Stanag_red,4);
		mag_xx(SmokeShell,2);
		mag_xx(SmokeShellBlue,2);
	};
	class TransportWeapons
	{
		weap_xx(arifle_SPAR_01_blk_F,2);
	};
	animationList[] = {"hide_bullbar", 0.5, "hide_snorkel", 0, "hide_sidesteps", 0, "hide_frame", 0, "hide_shield", 0, "Hide_Rail", 0};
	/* Turrets */
	class Turrets: Turrets
	{
		class M2_Turret: M2_Turret
		{
            /* Weapons & Ammuniton */
		    magazines[] = {mag_4(100Rnd_127x99_mag_Tracer_Red)};
		};
	};
};
class Atlas_B_K_Pickup_aat_F: Pickup_01_aat_base_rf
{
	author = $STR_A3_A_BranFlakes;
	side = TWest;
	scope = public;
	scopeCurator = public;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_K_Pickup_aat_F.jpg";
	faction = Atlas_BLU_K_F;
	crew = "Atlas_B_K_Soldier_F";
	typicalCargo[] = {"Atlas_B_K_Soldier_F"};
	textureList[] = {"KZG_01",1};
	class TransportMagazines
	{
		mag_xx(30Rnd_556x45_Stanag_red,4);
		mag_xx(SmokeShell,2);
		mag_xx(SmokeShellBlue,2);
	};
	class TransportWeapons
	{
		weap_xx(arifle_SPAR_01_blk_F,2);
	};
	animationList[] = {"hide_bullbar", 0.5, "hide_snorkel", 0, "hide_trunk_door", 0.1, "trunk_door_open", 0, "hide_sidesteps", 0, "hide_rack", 0, "hide_rack_spotlights", 0.5, "hide_frame", 0.5};
};
class Atlas_B_K_Pickup_AT_F: Aegis_Pickup_01_AT_base_RF
{
	author = $STR_A3_A_BranFlakes;
	side = TWest;
	scope = public;
	scopeCurator = public;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_K_Pickup_AT_F.jpg";
	faction = Atlas_BLU_K_F;
	crew = "Atlas_B_K_Soldier_F";
	typicalCargo[] = {"Atlas_B_K_Soldier_F"};
	textureList[] = {"KZG_01",1};
	class TransportMagazines
	{
		mag_xx(30Rnd_556x45_Stanag_red,4);
		mag_xx(SmokeShell,2);
		mag_xx(SmokeShellBlue,2);
	};
	class TransportWeapons
	{
		weap_xx(arifle_SPAR_01_blk_F,2);
	};
	animationList[] = {"hide_bullbar", 0.5, "hide_snorkel", 0, "hide_trunk_door", 0.1, "trunk_door_open", 0, "hide_sidesteps", 0, "hide_rack", 0, "hide_rack_spotlights", 0.5, "hide_frame", 0.5};
};