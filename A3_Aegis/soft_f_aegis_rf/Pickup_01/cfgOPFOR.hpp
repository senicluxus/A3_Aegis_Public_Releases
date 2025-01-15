/* Base Classes */
class O_Pickup_RF;
class O_Pickup_Comms_rf;

/* Argana */
class Aegis_O_A_Pickup_RF: O_Pickup_RF
{
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_O_A_Pickup_RF.jpg";
    scope = public;
	scopeCurator = public;
	side = TEast;
	faction = OPF_A_F;
	crew = O_A_soldier_F;
	typicalCargo[] = {O_A_soldier_F};
    class TransportMagazines
	{
		mag_xx(30Rnd_580x42_Mag_F,4);
		mag_xx(SmokeShell,2);
		mag_xx(SmokeShellRed,2);
	};
	class TransportWeapons
	{
		weap_xx(arifle_CTAR_blk_F,2);
	};
    animationList[] = {"hide_bullbar", 0, "hide_snorkel", 0, "hide_trunk_door", 0.333333, "hide_sidesteps", 0, "hide_rack", 0, "hide_rack_spotlights", 0.5, "hide_frame", 0};
};
class Aegis_O_A_Pickup_Comms_RF: O_Pickup_Comms_rf
{
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_O_A_Pickup_Comms_RF.jpg";
    scope = public;
	scopeCurator = public;
	side = TEast;
	faction = OPF_A_F;
	crew = O_A_soldier_F;
	typicalCargo[] = {O_A_soldier_F};
    class TransportMagazines
	{
		mag_xx(30Rnd_580x42_Mag_F,4);
		mag_xx(SmokeShell,2);
		mag_xx(SmokeShellRed,2);
	};
	class TransportWeapons
	{
		weap_xx(arifle_CTAR_blk_F,2);
	};
    animationList[] = {"hide_bullbar", 0, "hide_snorkel", 0, "hide_trunk_door", 0, "hide_sidesteps", 0, "hide_rack", 0, "hide_rack_spotlights", 0, "hide_rack_antenna", 0, "hide_box", 0, "hide_box_door", 1};
};
class Aegis_O_A_Pickup_HMG_RF: Pickup_01_HMG_base_RF
{
    scope = public;
	scopeCurator = public;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_O_A_Pickup_HMG_RF.jpg";
	side = TEast;
	faction = OPF_A_F;
	crew = O_A_soldier_F;
	typicalCargo[] = {O_A_soldier_F};
    class TransportMagazines
	{
		mag_xx(30Rnd_580x42_Mag_F,4);
		mag_xx(SmokeShell,2);
		mag_xx(SmokeShellRed,2);
	};
	class TransportWeapons
	{
		weap_xx(arifle_CTAR_blk_F,2);
	};
    textureList[] = {CSAT,1};
    animationList[] = {"hide_bullbar", 0, "hide_snorkel", 0, "hide_trunk_door", 1, "hide_rack", 0, "hide_rack_spotlights", 0, "hide_sidesteps", 0, "hide_frame", 0, "hide_shield", 0, "Hide_Rail", 1};
    /* Turrets */
	class Turrets: Turrets
	{
		class M2_Turret: M2_Turret
		{
            /* Weapons & Ammuniton */
		    magazines[] = {mag_4(100Rnd_127x99_mag_Tracer_green)};
		};
	};
};
class Aegis_O_A_Pickup_MRL_RF: Pickup_01_mrl_base_rf
{
    scope = public;
	scopeCurator = public;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_O_A_Pickup_MRL_RF.jpg";
	side = TEast;
	faction = OPF_A_F;
	crew = O_A_soldier_F;
	typicalCargo[] = {O_A_soldier_F};
    class TransportMagazines
	{
		mag_xx(30Rnd_580x42_Mag_F,4);
		mag_xx(SmokeShell,2);
		mag_xx(SmokeShellRed,2);
	};
	class TransportWeapons
	{
		weap_xx(arifle_CTAR_blk_F,2);
	};
    animationList[] = {"hide_bullbar", 0, "hide_snorkel", 0, "hide_trunk_door", 1, "hide_sidesteps", 0, "hide_rack", 0, "hide_rack_spotlights", 0};
    textureList[] = {CSAT,1};
};
class Aegis_O_A_Pickup_Fuel_RF: Pickup_fuel_base_rf
{
    scope = public;
	scopeCurator = public;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_O_A_Pickup_Fuel_RF.jpg";
	side = TEast;
	faction = OPF_A_F;
	crew = O_A_soldier_F;
	typicalCargo[] = {O_A_soldier_F};
    class TransportMagazines
	{
		mag_xx(30Rnd_580x42_Mag_F,4);
		mag_xx(SmokeShell,2);
		mag_xx(SmokeShellRed,2);
	};
	class TransportWeapons
	{
		weap_xx(arifle_CTAR_blk_F,2);
	};
    textureList[] = {CSAT,1};
    animationList[] = {"hide_bullbar", 0, "hide_fuel_tank", 0, "hide_trunk_cover", 1, "hide_snorkel", 0, "hide_armor_window_armor_top", 1, "hide_sidesteps", 0, "hide_rack", 0, "hide_rack_spotlights", 0};
};