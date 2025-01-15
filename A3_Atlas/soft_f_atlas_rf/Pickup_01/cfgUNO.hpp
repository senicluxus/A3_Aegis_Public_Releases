/* Sahrani UNO */
class Atlas_I_UNO_Pickup_F: Pickup_01_base_rf
{
	author = $STR_A3_A_BranFlakes;
	side = TGuerrila;
	scope = public;
	scopeCurator = public;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_I_UNO_Pickup_F.jpg";
	faction = Atlas_IND_UNO_F;
	crew = Atlas_I_UNO_Soldier_F;
	typicalCargo[] = {Atlas_I_UNO_Soldier_F};
	textureList[] = {UNO,1};
	 /* Inventory */
	class TransportMagazines
	{
		mag_xx(30Rnd_556x45_stanag_sand_red,8);
		mag_xx(HandGrenade,4);
		mag_xx(SmokeShell,4);
	};
	class TransportWeapons
	{
		weap_xx(Aegis_arifle_M4A1_sand_F,2);
	};
	animationList[] = {"hide_bullbar", 0.5, "hide_snorkel", 0.4, "hide_trunk_door", 0.1, "hide_sidesteps", 0, "hide_rack", 0, "hide_rack_spotlights", 0.5, "hide_frame", 0};
};
class Atlas_I_UNO_Pickup_Comms_F: Pickup_comms_base_rf
{
	author = $STR_A3_A_BranFlakes;
	side = TGuerrila;
	scope = public;
	scopeCurator = public;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_I_UNO_Pickup_Comms_F.jpg";
	faction = Atlas_IND_UNO_F;
	crew = Atlas_I_UNO_Soldier_F;
	typicalCargo[] = {Atlas_I_UNO_Soldier_F};
	textureList[] = {UNO,1};
	 /* Inventory */
	class TransportMagazines
	{
		mag_xx(30Rnd_556x45_stanag_sand_red,8);
		mag_xx(HandGrenade,4);
		mag_xx(SmokeShell,4);
	};
	class TransportWeapons
	{
		weap_xx(Aegis_arifle_M4A1_sand_F,2);
	};
	animationList[] = {"hide_bullbar", 0.5, "hide_snorkel", 0.4, "hide_trunk_door", 0, "hide_sidesteps", 0.5, "hide_rack", 0, "hide_rack_spotlights", 0, "hide_rack_antenna", 0, "hide_box", 0, "hide_box_door", 0};
};
class Atlas_I_UNO_Pickup_MMG_F: Pickup_01_mmg_base_rf
{
	author = $STR_A3_A_BranFlakes;
	side = TGuerrila;
	scope = public;
	scopeCurator = public;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_I_UNO_Pickup_MMG_F.jpg";
	faction = Atlas_IND_UNO_F;
	crew = Atlas_I_UNO_Soldier_F;
	typicalCargo[] = {Atlas_I_UNO_Soldier_F};
	textureList[] = {UNO,1};
	 /* Inventory */
	class TransportMagazines
	{
		mag_xx(30Rnd_556x45_stanag_sand_red,8);
		mag_xx(HandGrenade,4);
		mag_xx(SmokeShell,4);
	};
	class TransportWeapons
	{
		weap_xx(Aegis_arifle_M4A1_sand_F,2);
	};
	animationList[] = {"hide_bullbar", 0.5, "hide_snorkel", 0.4, "hide_sidesteps", 0};
};
class Atlas_I_UNO_Pickup_aat_F: Pickup_01_aat_base_rf
{
	author = $STR_A3_A_BranFlakes;
	side = TGuerrila;
	scope = public;
	scopeCurator = public;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_I_UNO_Pickup_aat_F.jpg";
	faction = Atlas_IND_UNO_F;
	crew = Atlas_I_UNO_Soldier_F;
	typicalCargo[] = {Atlas_I_UNO_Soldier_F};
	textureList[] = {UNO,1};
	 /* Inventory */
	class TransportMagazines
	{
		mag_xx(30Rnd_556x45_stanag_sand_red,8);
		mag_xx(HandGrenade,4);
		mag_xx(SmokeShell,4);
	};
	class TransportWeapons
	{
		weap_xx(Aegis_arifle_M4A1_sand_F,2);
	};
	animationList[] = {"hide_bullbar", 0.5, "hide_snorkel", 0.4, "hide_trunk_door", 0.1, "trunk_door_open", 0, "hide_sidesteps", 0, "hide_rack", 0, "hide_rack_spotlights", 0.5, "hide_frame", 0.5};
};

/* CDF UNO */
class Atlas_I_UNO_wdl_Pickup_F: Pickup_01_base_rf
{
	author = $STR_A3_A_BranFlakes;
	side = TGuerrila;
	scope = public;
	scopeCurator = public;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_I_UNO_wdl_Pickup_F.jpg";
	faction = Atlas_IND_UNO_wdl_F;
	crew = Atlas_I_UNO_wdl_Soldier_F;
	typicalCargo[] = {Atlas_I_UNO_wdl_Soldier_F};
	textureList[] = {UNO,1};
	/* Inventory */
    class TransportMagazines
	{
		mag_xx(30Rnd_65x39_caseless_msbs_mag,8);
		mag_xx(HandGrenade_Guer,4);
		mag_xx(SmokeShell,4);
	};
	class TransportWeapons
	{
		weap_xx(arifle_FORT652_F,2);
	};
	animationList[] = {"hide_bullbar", 0.5, "hide_snorkel", 0.4, "hide_trunk_door", 0.1, "hide_sidesteps", 0, "hide_rack", 0, "hide_rack_spotlights", 0.5, "hide_frame", 0};
};
class Atlas_I_UNO_wdl_Pickup_Comms_F: Pickup_comms_base_rf
{
	author = $STR_A3_A_BranFlakes;
	side = TGuerrila;
	scope = public;
	scopeCurator = public;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_I_UNO_wdl_Pickup_Comms_F.jpg";
	faction = Atlas_IND_UNO_wdl_F;
	crew = Atlas_I_UNO_wdl_Soldier_F;
	typicalCargo[] = {Atlas_I_UNO_wdl_Soldier_F};
	textureList[] = {UNO,1};
	/* Inventory */
    class TransportMagazines
	{
		mag_xx(30Rnd_65x39_caseless_msbs_mag,8);
		mag_xx(HandGrenade_Guer,4);
		mag_xx(SmokeShell,4);
	};
	class TransportWeapons
	{
		weap_xx(arifle_FORT652_F,2);
	};
	animationList[] = {"hide_bullbar", 0.5, "hide_snorkel", 0.4, "hide_trunk_door", 0, "hide_sidesteps", 0.5, "hide_rack", 0, "hide_rack_spotlights", 0, "hide_rack_antenna", 0, "hide_box", 0, "hide_box_door", 0};
};
class Atlas_I_UNO_wdl_Pickup_MMG_F: Pickup_01_mmg_base_rf
{
	author = $STR_A3_A_BranFlakes;
	side = TGuerrila;
	scope = public;
	scopeCurator = public;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_I_UNO_wdl_Pickup_MMG_F.jpg";
	faction = Atlas_IND_UNO_wdl_F;
	crew = Atlas_I_UNO_wdl_Soldier_F;
	typicalCargo[] = {Atlas_I_UNO_wdl_Soldier_F};
	textureList[] = {UNO,1};
	/* Inventory */
    class TransportMagazines
	{
		mag_xx(30Rnd_65x39_caseless_msbs_mag,8);
		mag_xx(HandGrenade_Guer,4);
		mag_xx(SmokeShell,4);
	};
	class TransportWeapons
	{
		weap_xx(arifle_FORT652_F,2);
	};
	animationList[] = {"hide_bullbar", 0.5, "hide_snorkel", 0.4, "hide_sidesteps", 0};
};
class Atlas_I_UNO_wdl_Pickup_aat_F: Pickup_01_aat_base_rf
{
	author = $STR_A3_A_BranFlakes;
	side = TGuerrila;
	scope = public;
	scopeCurator = public;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_I_UNO_wdl_Pickup_aat_F.jpg";
	faction = Atlas_IND_UNO_wdl_F;
	crew = Atlas_I_UNO_wdl_Soldier_F;
	typicalCargo[] = {Atlas_I_UNO_wdl_Soldier_F};
	textureList[] = {UNO,1};
	/* Inventory */
    class TransportMagazines
	{
		mag_xx(30Rnd_65x39_caseless_msbs_mag,8);
		mag_xx(HandGrenade_Guer,4);
		mag_xx(SmokeShell,4);
	};
	class TransportWeapons
	{
		weap_xx(arifle_FORT652_F,2);
	};
	animationList[] = {"hide_bullbar", 0.5, "hide_snorkel", 0.4, "hide_trunk_door", 0.1, "trunk_door_open", 0, "hide_sidesteps", 0, "hide_rack", 0, "hide_rack_spotlights", 0.5, "hide_frame", 0.5};
};