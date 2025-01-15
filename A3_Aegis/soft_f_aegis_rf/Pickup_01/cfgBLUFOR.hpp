/* United States */
class B_Pickup_rf;
class B_Pickup_Comms_rf;
class B_Pickup_mmg_rf;
class B_Pickup_aat_rf;
class Aegis_B_Pickup_AT_RF: Aegis_Pickup_01_AT_base_RF
{
	author = $STR_A3_A_Ravenholme;
	scope = public;
	scopeCurator = public;
	editorPreview = "\A3_Aegis\Editorpreviews_F_Aegis\Data\CfgVehicles\Aegis_B_Pickup_at_rf.jpg";
	faction = BLU_F;
	side = TWest;
	crew = B_Soldier_F;
	typicalCargo[] = {B_Soldier_F};
	textureList[] = {NATO, 1};
	animationList[] = {"hide_bullbar", 0.5, "hide_snorkel", 0.5, "hide_trunk_door", 0.1, "trunk_door_open", 0, "hide_sidesteps", 0, "hide_rack", 0, "hide_rack_spotlights", 0.5, "hide_frame", 0.5};
	class TransportMagazines
	{
		mag_xx(30Rnd_65x39_caseless_mag,4);
		mag_xx(SmokeShell,2);
		mag_xx(SmokeShellBlue,2);
	};
	class TransportWeapons
	{
		weap_xx(arifle_MXC_F,2);
	};
};

/* United States (Desert) */
class Aegis_B_D_Pickup_RF: B_Pickup_rf
{
	author = $STR_A3_A_Ravenholme;
	scope = public;
	scopeCurator = public;
	side = TWest;
	faction = BLU_NATO_lxWS;
	crew = B_D_Soldier_lxWS;
	typicalCargo[] = {B_D_Soldier_lxWS};
	animationList[] = {"hide_bullbar", 0.5, "hide_snorkel", 0, "hide_trunk_door", 0.1, "hide_sidesteps", 0, "hide_rack", 0, "hide_rack_spotlights", 0.5, "hide_frame", 0};
};
class Aegis_B_D_Pickup_Comms_rf: B_Pickup_Comms_rf
{
	author = $STR_A3_A_Ravenholme;
	scope = public;
	scopeCurator = public;
	side = TWest;
	faction = BLU_NATO_lxWS;
	crew = B_D_Soldier_lxWS;
	typicalCargo[] = {B_D_Soldier_lxWS};
	animationList[] = {"hide_bullbar", 0.5, "hide_snorkel", 0, "hide_trunk_door", 0, "hide_sidesteps", 0.5, "hide_rack", 0, "hide_rack_spotlights", 0, "hide_rack_antenna", 0, "hide_box", 0, "hide_box_door", 0};
};
class Aegis_B_D_Pickup_mmg_rf: B_Pickup_mmg_rf
{
	author = $STR_A3_A_Ravenholme;
	scope = public;
	scopeCurator = public;
	side = TWest;
	faction = BLU_NATO_lxWS;
	crew = B_D_Soldier_lxWS;
	typicalCargo[] = {B_D_Soldier_lxWS};
	animationList[] = {"hide_bullbar", 0.5, "hide_snorkel", 0, "hide_trunk_door", 0, "hide_sidesteps", 0, "hide_frame", 0};
};
class Aegis_B_D_Pickup_aat_rf: B_Pickup_aat_rf
{
	author = $STR_A3_A_Ravenholme;
	scope = public;
	scopeCurator = public;
	side = TWest;
	faction = BLU_NATO_lxWS;
	crew = B_D_Soldier_lxWS;
	typicalCargo[] = {B_D_Soldier_lxWS};
	animationList[] = {"hide_bullbar", 0.5, "hide_snorkel", 0, "hide_trunk_door", 0.1, "trunk_door_open", 0, "hide_sidesteps", 0, "hide_rack", 0, "hide_rack_spotlights", 0.5, "hide_frame", 0.5};
};
class Aegis_B_D_Pickup_AT_RF: Aegis_B_Pickup_AT_RF
{
	author = $STR_A3_A_Ravenholme;
	scope = public;
	scopeCurator = public;
	side = TWest;
	faction = BLU_NATO_lxWS;
	crew = B_D_Soldier_lxWS;
	typicalCargo[] = {B_D_Soldier_lxWS};
	animationList[] = {"hide_bullbar", 0.5, "hide_snorkel", 0, "hide_trunk_door", 0.1, "trunk_door_open", 0, "hide_sidesteps", 0, "hide_rack", 0, "hide_rack_spotlights", 0.5, "hide_frame", 0.5};
};

/* United States (Pacific) */
class B_T_Pickup_rf: B_Pickup_rf
{
	class TransportMagazines
	{
		mag_xx(30Rnd_65x39_caseless_khaki_mag,4);
		mag_xx(SmokeShell,2);
		mag_xx(SmokeShellBlue,2);
	};
	class TransportWeapons
	{
		weap_xx(arifle_MXC_khk_F,2);
	};
};
class B_T_Pickup_Comms_rf: B_Pickup_Comms_rf
{
	class TransportMagazines
	{
		mag_xx(30Rnd_65x39_caseless_khaki_mag,4);
		mag_xx(SmokeShell,2);
		mag_xx(SmokeShellBlue,2);
	};
	class TransportWeapons
	{
		weap_xx(arifle_MXC_khk_F,2);
	};
};
class B_T_Pickup_mmg_rf: B_Pickup_mmg_rf
{
	class TransportMagazines
	{
		mag_xx(30Rnd_65x39_caseless_khaki_mag,4);
		mag_xx(SmokeShell,2);
		mag_xx(SmokeShellBlue,2);
	};
	class TransportWeapons
	{
		weap_xx(arifle_MXC_khk_F,2);
	};
};
class B_T_Pickup_aat_rf: B_Pickup_aat_rf
{
	class TransportMagazines
	{
		mag_xx(30Rnd_65x39_caseless_khaki_mag,4);
		mag_xx(SmokeShell,2);
		mag_xx(SmokeShellBlue,2);
	};
	class TransportWeapons
	{
		weap_xx(arifle_MXC_khk_F,2);
	};
};
class Aegis_B_T_Pickup_AT_RF: Aegis_B_Pickup_AT_RF
{
	author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Aegis\Editorpreviews_F_Aegis\Data\CfgVehicles\Aegis_B_T_Pickup_AT_RF.jpg";
	scope = public;
	scopeCurator = public;
	side = TWest;
	faction = BLU_T_F;
	crew = B_T_Soldier_F;
	typicalCargo[] = {B_T_Soldier_F};
	animationList[] = {"hide_bullbar", 0.5, "hide_snorkel", 0, "hide_trunk_door", 0.1, "trunk_door_open", 0, "hide_sidesteps", 0, "hide_rack", 0, "hide_rack_spotlights", 0.5, "hide_frame", 0.5};
	textureList[] = {NATO_P, 1};
	class TransportMagazines
	{
		mag_xx(30Rnd_65x39_caseless_khaki_mag,4);
		mag_xx(SmokeShell,2);
		mag_xx(SmokeShellBlue,2);
	};
	class TransportWeapons
	{
		weap_xx(arifle_MXC_khk_F,2);
	};
};

/* United States (Woodland) */
class Aegis_B_W_Pickup_RF: B_T_Pickup_rf
{
	author = $STR_A3_A_Ravenholme;
	scope = public;
	scopeCurator = public;
	side = TWest;
	faction = BLU_W_F;
	crew = B_W_Soldier_F;
	typicalCargo[] = {B_W_Soldier_F};
    class TransportMagazines
	{
		mag_xx(30Rnd_65x39_caseless_black_mag,4);
		mag_xx(SmokeShell,2);
		mag_xx(SmokeShellBlue,2);
	};
	class TransportWeapons
	{
		weap_xx(arifle_MXC_Black_F,2);
	};
};
class Aegis_B_W_Pickup_Comms_rf: B_T_Pickup_Comms_rf
{
	author = $STR_A3_A_Ravenholme;
	scope = public;
	scopeCurator = public;
	side = TWest;
	faction = BLU_W_F;
	crew = B_W_Soldier_F;
	typicalCargo[] = {B_W_Soldier_F};
    class TransportMagazines
	{
		mag_xx(30Rnd_65x39_caseless_black_mag,4);
		mag_xx(SmokeShell,2);
		mag_xx(SmokeShellBlue,2);
	};
	class TransportWeapons
	{
		weap_xx(arifle_MXC_Black_F,2);
	};
};
class Aegis_B_W_Pickup_mmg_rf: B_T_Pickup_mmg_rf
{
	author = $STR_A3_A_Ravenholme;
	scope = public;
	scopeCurator = public;
	side = TWest;
	faction = BLU_W_F;
	crew = B_W_Soldier_F;
	typicalCargo[] = {B_W_Soldier_F};
    class TransportMagazines
	{
		mag_xx(30Rnd_65x39_caseless_black_mag,4);
		mag_xx(SmokeShell,2);
		mag_xx(SmokeShellBlue,2);
	};
	class TransportWeapons
	{
		weap_xx(arifle_MXC_Black_F,2);
	};
};
class Aegis_B_W_Pickup_aat_rf: B_T_Pickup_aat_rf
{
	author = $STR_A3_A_Ravenholme;
	scope = public;
	scopeCurator = public;
	side = TWest;
	faction = BLU_W_F;
	crew = B_W_Soldier_F;
	typicalCargo[] = {B_W_Soldier_F};
    class TransportMagazines
	{
		mag_xx(30Rnd_65x39_caseless_black_mag,4);
		mag_xx(SmokeShell,2);
		mag_xx(SmokeShellBlue,2);
	};
	class TransportWeapons
	{
		weap_xx(arifle_MXC_Black_F,2);
	};
};
class Aegis_B_W_Pickup_AT_RF: Aegis_B_T_Pickup_AT_RF
{
	author = $STR_A3_A_Ravenholme;
	scope = public;
	scopeCurator = public;
	side = TWest;
	faction = BLU_W_F;
	crew = B_W_Soldier_F;
	typicalCargo[] = {B_W_Soldier_F};
    class TransportMagazines
	{
		mag_xx(30Rnd_65x39_caseless_black_mag,4);
		mag_xx(SmokeShell,2);
		mag_xx(SmokeShellBlue,2);
	};
	class TransportWeapons
	{
		weap_xx(arifle_MXC_Black_F,2);
	};
};