/* Extant LDF classes */
class I_E_Pickup_RF;
class I_E_Pickup_Comms_RF;
class I_E_Pickup_Covered_RF;

/* Indep LDF */
class Aegis_I_E_Pickup_HMG_RF: Pickup_01_HMG_base_RF
{
	author = $STR_A3_A_Ravenholme;
	scope = public;
	scopeCurator = public;
	editorPreview = "\A3_Aegis\Editorpreviews_F_Aegis\Data\CfgVehicles\Aegis_I_E_Pickup_HMG_rf.jpg";
	faction = IND_E_F;
	side = TGuerrila;
	crew = I_E_Soldier_F;
	typicalCargo[] = {I_E_Soldier_F};
	textureList[] = {EAF, 1};
	animationList[] = {"hide_bullbar", 0.5, "hide_snorkel", 1, "hide_trunk_door", 0.1, "hide_sidesteps", 0, "hide_rack", 0, "hide_rack_spotlights", 0.5, "hide_frame", 0, "hide_shield", 0, "Hide_Rail", 0};
	
	/* Turrets */
	class Turrets: Turrets
	{
		class M2_Turret: M2_Turret
		{
            /* Weapons & Ammuniton (Red Tracer because NATO) */
		    magazines[] = {mag_4(100Rnd_127x99_mag_Tracer_Red)};
		};
	};

	/* Inventory */
	class TransportMagazines
	{
		mag_xx(SmokeShell,4);
		mag_xx(HandGrenade,4);
		mag_xx(30Rnd_65x39_caseless_msbs_mag,8);
	};
	class TransportWeapons
	{
		weap_xx(arifle_MSBS65_F,2);
	};
};
class Aegis_I_E_Pickup_AAT_RF: Pickup_01_AAT_base_rf
{
	author = $STR_A3_A_Ravenholme;
	scope = public;
	scopeCurator = public;
	editorPreview = "\A3_Aegis\Editorpreviews_F_Aegis\Data\CfgVehicles\Aegis_I_E_Pickup_AAT_RF.jpg";
	faction = IND_E_F;
	side = TGuerrila;
	crew = I_E_Soldier_F;
	typicalCargo[] = {I_E_Soldier_F};
	textureList[] = {EAF, 1};
	animationList[] = {"hide_bullbar", 0.5, "hide_snorkel", 1, "hide_trunk_door", 0.1, "hide_sidesteps", 0, "hide_rack", 0, "hide_rack_spotlights", 0.5, "hide_frame", 0, "hide_shield", 0, "Hide_Rail", 0};
	/* Inventory */
	class TransportMagazines
	{
		mag_xx(SmokeShell,4);
		mag_xx(HandGrenade,4);
		mag_xx(30Rnd_65x39_caseless_msbs_mag,8);
	};
	class TransportWeapons
	{
		weap_xx(arifle_MSBS65_F,2);
	};
};
class Aegis_I_E_Pickup_AT_RF: Aegis_Pickup_01_AT_base_RF
{
	author = $STR_A3_A_Ravenholme;
	scope = public;
	scopeCurator = public;
	editorPreview = "\A3_Aegis\Editorpreviews_F_Aegis\Data\CfgVehicles\Aegis_I_E_Pickup_AT_RF.jpg";
	faction = IND_E_F;
	side = TGuerrila;
	crew = I_E_Soldier_F;
	typicalCargo[] = {I_E_Soldier_F};
	textureList[] = {EAF, 1};
	animationList[] = {"hide_bullbar", 0.5, "hide_snorkel", 1, "hide_trunk_door", 0.1, "hide_sidesteps", 0, "hide_rack", 0, "hide_rack_spotlights", 0.5, "hide_frame", 0, "hide_shield", 0, "Hide_Rail", 0};
	/* Inventory */
	class TransportMagazines
	{
		mag_xx(SmokeShell,4);
		mag_xx(HandGrenade,4);
		mag_xx(30Rnd_65x39_caseless_msbs_mag,8);
	};
	class TransportWeapons
	{
		weap_xx(arifle_MSBS65_F,2);
	};
};

/* BLUFOR LDF */
class Aegis_B_E_Pickup_RF: I_E_Pickup_RF
{
	author = $STR_A3_A_Ravenholme;
	side = TWest;
	faction = BLU_EAF_F;
	crew = Aegis_B_E_Soldier_F;
	typicalCargo[] = {Aegis_B_E_Soldier_F};
};

class Aegis_B_E_Pickup_Covered_RF: I_E_Pickup_Covered_RF
{
	author = $STR_A3_A_Ravenholme;
	side = TWest;
	faction = BLU_EAF_F;
	crew = Aegis_B_E_Soldier_F;
	typicalCargo[] = {Aegis_B_E_Soldier_F};
};

class Aegis_B_E_Pickup_Comms_RF: I_E_Pickup_Comms_RF
{
	author = $STR_A3_A_Ravenholme;
	side = TWest;
	faction = BLU_EAF_F;
	crew = Aegis_B_E_Soldier_F;
	typicalCargo[] = {Aegis_B_E_Soldier_F};
};
class Aegis_B_E_Pickup_HMG_RF: Aegis_I_E_Pickup_HMG_RF
{
	author = $STR_A3_A_Ravenholme;
	side = TWest;
	faction = BLU_EAF_F;
	crew = Aegis_B_E_Soldier_F;
	typicalCargo[] = {Aegis_B_E_Soldier_F};
};
class Aegis_B_E_Pickup_AAT_RF: Aegis_I_E_Pickup_AAT_RF
{
	author = $STR_A3_A_Ravenholme;
	side = TWest;
	faction = BLU_EAF_F;
	crew = Aegis_B_E_Soldier_F;
	typicalCargo[] = {Aegis_B_E_Soldier_F};
};
class Aegis_B_E_Pickup_AT_RF: Aegis_I_E_Pickup_AT_RF
{
	author = $STR_A3_A_Ravenholme;
	side = TWest;
	faction = BLU_EAF_F;
	crew = Aegis_B_E_Soldier_F;
	typicalCargo[] = {Aegis_B_E_Soldier_F};
};

/* Arid LDF */
class Aegis_I_E_Pickup_ard_RF: I_E_Pickup_RF
{
	author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Aegis\Editorpreviews_F_Aegis\Data\CfgVehicles\Aegis_I_E_Pickup_ard_RF.jpg";
	faction = IND_E_ard_F;
	crew = I_E_Soldier_ard_F;
	typicalCargo[] = {I_E_Soldier_ard_F};
	textureList[] = {EAF_Arid,1};
	animationList[] = {"hide_bullbar", 0.5, "hide_snorkel", 0, "hide_trunk_door", 0.1, "hide_sidesteps", 0, "hide_rack", 0, "hide_rack_spotlights", 0.5, "hide_frame", 0};
	class TransportWeapons
	{
		weap_xx(arifle_MSBS65_sand_F,2);
	};
};
class Aegis_I_E_Pickup_Comms_ard_RF: I_E_Pickup_Comms_RF
{
	author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Aegis\Editorpreviews_F_Aegis\Data\CfgVehicles\Aegis_I_E_Pickup_Comms_ard_RF.jpg";
	faction = IND_E_ard_F;
	crew = I_E_Soldier_ard_F;
	typicalCargo[] = {I_E_Soldier_ard_F};
	textureList[] = {EAF_Arid,1};
	animationList[] = {"hide_bullbar", 0.5, "hide_snorkel", 0, "hide_trunk_door", 0, "hide_sidesteps", 0.5, "hide_rack", 0, "hide_rack_spotlights", 0, "hide_rack_antenna", 0, "hide_box", 0, "hide_box_door", 0};
	class TransportWeapons
	{
		weap_xx(arifle_MSBS65_sand_F,2);
	};
};
class Aegis_I_E_Pickup_Covered_ard_RF: I_E_Pickup_Covered_RF
{
	author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Aegis\Editorpreviews_F_Aegis\Data\CfgVehicles\Aegis_I_E_Pickup_Covered_ard_RF.jpg";
	faction = IND_E_ard_F;
	crew = I_E_Soldier_ard_F;
	typicalCargo[] = {I_E_Soldier_ard_F};
	textureList[] = {EAF_Arid,1};
	animationList[] = {"hide_bullbar", 0.5, "hide_snorkel", 0, "hide_sidesteps", 1, "hide_rack", 0.9, "hide_box", 0, "hide_box_door", 0};
	class TransportWeapons
	{
		weap_xx(arifle_MSBS65_sand_F,2);
	};
};
class Aegis_I_E_Pickup_HMG_ard_RF: Aegis_I_E_Pickup_HMG_RF
{
	author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Aegis\Editorpreviews_F_Aegis\Data\CfgVehicles\Aegis_I_E_Pickup_HMG_ard_RF.jpg";
	faction = IND_E_ard_F;
	crew = I_E_Soldier_ard_F;
	typicalCargo[] = {I_E_Soldier_ard_F};
	textureList[] = {EAF_Arid,1};
	animationList[] = {"hide_bullbar", 0.5, "hide_snorkel", 0, "hide_trunk_door", 0.1, "hide_sidesteps", 0, "hide_rack", 0, "hide_rack_spotlights", 0.5, "hide_frame", 0, "hide_shield", 0, "Hide_Rail", 0};
	class TransportWeapons
	{
		weap_xx(arifle_MSBS65_sand_F,2);
	};
};
class Aegis_I_E_Pickup_AAT_ard_RF: Aegis_I_E_Pickup_AAT_RF
{
	author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Aegis\Editorpreviews_F_Aegis\Data\CfgVehicles\Aegis_I_E_Pickup_AAT_ard_F.jpg";
	faction = IND_E_ard_F;
	crew = I_E_Soldier_ard_F;
	typicalCargo[] = {I_E_Soldier_ard_F};
	textureList[] = {EAF_Arid,1};
	animationList[] = {"hide_bullbar", 0.5, "hide_snorkel", 1, "hide_trunk_door", 0.1, "hide_sidesteps", 0, "hide_rack", 0, "hide_rack_spotlights", 0.5, "hide_frame", 0, "hide_shield", 0, "Hide_Rail", 0};
	class TransportWeapons
	{
		weap_xx(arifle_MSBS65_sand_F,2);
	};
};
class Aegis_I_E_Pickup_AT_ard_RF: Aegis_I_E_Pickup_AT_RF
{
	author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Aegis\Editorpreviews_F_Aegis\Data\CfgVehicles\Aegis_I_E_Pickup_AT_ard_F.jpg";
	faction = IND_E_ard_F;
	crew = I_E_Soldier_ard_F;
	typicalCargo[] = {I_E_Soldier_ard_F};
	textureList[] = {EAF_Arid,1};
	animationList[] = {"hide_bullbar", 0.5, "hide_snorkel", 1, "hide_trunk_door", 0.1, "hide_sidesteps", 0, "hide_rack", 0, "hide_rack_spotlights", 0.5, "hide_frame", 0, "hide_shield", 0, "Hide_Rail", 0};
	class TransportWeapons
	{
		weap_xx(arifle_MSBS65_sand_F,2);
	};
};

/* Arid LDF - BLUFOR*/
class Aegis_B_E_Pickup_ard_RF: Aegis_I_E_Pickup_ard_RF
{
	author = $STR_A3_A_Ravenholme;
	side = TWest;
	faction = BLU_EAF_ard_F;
	crew = Aegis_B_E_Soldier_ard_F;
	typicalCargo[] = {Aegis_B_E_Soldier_ard_F};
};

class Aegis_B_E_Pickup_Covered_ard_RF: Aegis_I_E_Pickup_Covered_ard_RF
{
	author = $STR_A3_A_Ravenholme;
	side = TWest;
	faction = BLU_EAF_ard_F;
	crew = Aegis_B_E_Soldier_ard_F;
	typicalCargo[] = {Aegis_B_E_Soldier_ard_F};
};

class Aegis_B_E_Pickup_Comms_ard_RF: Aegis_I_E_Pickup_Comms_ard_RF
{
	author = $STR_A3_A_Ravenholme;
	side = TWest;
	faction = BLU_EAF_ard_F;
	crew = Aegis_B_E_Soldier_ard_F;
	typicalCargo[] = {Aegis_B_E_Soldier_ard_F};
};
class Aegis_B_E_Pickup_HMG_ard_RF: Aegis_I_E_Pickup_HMG_ard_RF
{
	author = $STR_A3_A_Ravenholme;
	side = TWest;
	faction = BLU_EAF_ard_F;
	crew = Aegis_B_E_Soldier_ard_F;
	typicalCargo[] = {Aegis_B_E_Soldier_ard_F};
};
class Aegis_B_E_Pickup_AAT_ard_RF: Aegis_I_E_Pickup_AAT_ard_RF
{
	author = $STR_A3_A_Ravenholme;
	side = TWest;
	faction = BLU_EAF_ard_F;
	crew = Aegis_B_E_Soldier_ard_F;
	typicalCargo[] = {Aegis_B_E_Soldier_ard_F};
};
class Aegis_B_E_Pickup_AT_ard_RF: Aegis_I_E_Pickup_AT_ard_RF
{
	author = $STR_A3_A_Ravenholme;
	side = TWest;
	faction = BLU_EAF_ard_F;
	crew = Aegis_B_E_Soldier_ard_F;
	typicalCargo[] = {Aegis_B_E_Soldier_ard_F};
};