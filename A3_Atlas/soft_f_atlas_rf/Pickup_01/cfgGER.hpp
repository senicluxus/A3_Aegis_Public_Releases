/* Bundeswehr */
class Atlas_B_G_Pickup_F: Pickup_01_base_rf
{
	author = $STR_A3_A_BranFlakes;
	side = TWest;
	scope = public;
	scopeCurator = public;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_G_Pickup_F.jpg";
	faction = Atlas_BLU_G_F;
	crew = "Atlas_B_G_Soldier_F";
	typicalCargo[] = {"Atlas_B_G_Soldier_F"};
	textureList[] = {"Bundeswehr",1};
	class TransportMagazines
	{
		mag_xx(30Rnd_65x39_caseless_msbs_mag,4);
		mag_xx(SmokeShell,2);
		mag_xx(SmokeShellBlue,2);
	};
	class TransportWeapons
	{
		weap_xx(arifle_G36C_F,2);
	};
	animationList[] = {"hide_bullbar", 0.5, "hide_snorkel", 1, "hide_trunk_door", 0.1, "hide_sidesteps", 0, "hide_rack", 0, "hide_rack_spotlights", 0.5, "hide_frame", 0};
};
class Atlas_B_G_Pickup_Comms_F: Pickup_comms_base_rf
{
	author = $STR_A3_A_BranFlakes;
	side = TWest;
	scope = public;
	scopeCurator = public;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_G_Pickup_Comms_F.jpg";
	faction = Atlas_BLU_G_F;
	crew = "Atlas_B_G_Soldier_F";
	typicalCargo[] = {"Atlas_B_G_Soldier_F"};
	textureList[] = {"Bundeswehr",1};
	class TransportMagazines
	{
		mag_xx(30Rnd_65x39_caseless_msbs_mag,4);
		mag_xx(SmokeShell,2);
		mag_xx(SmokeShellBlue,2);
	};
	class TransportWeapons
	{
		weap_xx(arifle_G36C_F,2);
	};
	animationList[] = {"hide_bullbar", 0.5, "hide_snorkel", 1, "hide_trunk_door", 0, "hide_sidesteps", 0.5, "hide_rack", 0, "hide_rack_spotlights", 0, "hide_rack_antenna", 0, "hide_box", 0, "hide_box_door", 0};
};
class Atlas_B_G_Pickup_HMG_F: Pickup_01_hmg_base_rf
{
	author = $STR_A3_A_BranFlakes;
	side = TWest;
	scope = public;
	scopeCurator = public;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_G_Pickup_HMG_F.jpg";
	faction = Atlas_BLU_G_F;
	crew = "Atlas_B_G_Soldier_F";
	typicalCargo[] = {"Atlas_B_G_Soldier_F"};
	textureList[] = {"Bundeswehr",1};
	class TransportMagazines
	{
		mag_xx(30Rnd_65x39_caseless_msbs_mag,4);
		mag_xx(SmokeShell,2);
		mag_xx(SmokeShellBlue,2);
	};
	class TransportWeapons
	{
		weap_xx(arifle_G36C_F,2);
	};
	animationList[] = {"hide_bullbar", 0.5, "hide_snorkel", 1, "hide_sidesteps", 0, "hide_frame", 0, "hide_shield", 1, "Hide_Rail", 1};
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
class Atlas_B_G_Pickup_aat_F: Pickup_01_aat_base_rf
{
	author = $STR_A3_A_BranFlakes;
	side = TWest;
	scope = public;
	scopeCurator = public;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_G_Pickup_aat_F.jpg";
	faction = Atlas_BLU_G_F;
	crew = "Atlas_B_G_Soldier_F";
	typicalCargo[] = {"Atlas_B_G_Soldier_F"};
	textureList[] = {"Bundeswehr",1};
	class TransportMagazines
	{
		mag_xx(30Rnd_65x39_caseless_msbs_mag,4);
		mag_xx(SmokeShell,2);
		mag_xx(SmokeShellBlue,2);
	};
	class TransportWeapons
	{
		weap_xx(arifle_G36C_F,2);
	};
	animationList[] = {"hide_bullbar", 0.5, "hide_snorkel", 1, "hide_trunk_door", 0.1, "trunk_door_open", 0, "hide_sidesteps", 0, "hide_rack", 0, "hide_rack_spotlights", 0.5, "hide_frame", 0.5};
};
class Atlas_B_G_Pickup_AT_F: Aegis_Pickup_01_AT_base_RF
{
	author = $STR_A3_A_BranFlakes;
	side = TWest;
	scope = public;
	scopeCurator = public;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_G_Pickup_AT_F.jpg";
	faction = Atlas_BLU_G_F;
	crew = "Atlas_B_G_Soldier_F";
	typicalCargo[] = {"Atlas_B_G_Soldier_F"};
	textureList[] = {"Bundeswehr",1};
	class TransportMagazines
	{
		mag_xx(30Rnd_65x39_caseless_msbs_mag,4);
		mag_xx(SmokeShell,2);
		mag_xx(SmokeShellBlue,2);
	};
	class TransportWeapons
	{
		weap_xx(arifle_G36C_F,2);
	};
	animationList[] = {"hide_bullbar", 0.5, "hide_snorkel", 1, "hide_trunk_door", 0.1, "trunk_door_open", 0, "hide_sidesteps", 0, "hide_rack", 0, "hide_rack_spotlights", 0.5, "hide_frame", 0.5};
};
class Atlas_B_G_Pickup_covered_MP_rf: Pickup_covered_base_rf
{
	author = $STR_A3_A_BranFlakes;
	side = TWest;
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_A_CfgVehicles_Atlas_B_G_Pickup_covered_MP_rf0;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_G_Pickup_covered_MP_rf.jpg";
	faction = Atlas_BLU_G_F;
	weapons[] = {"PoliceHorn"};
	crew = "Atlas_B_G_Soldier_MP_F";
	typicalCargo[] = {"Atlas_B_G_Soldier_MP_F"};
	animationList[] = {"hide_bullbar", 0.5, "hide_snorkel", 1, "hide_police", 0, "hide_sidesteps", 0, "hide_box", 0, "hide_box_door", 0};
	hiddenSelectionsTextures[] = 
	{
		"\A3_Atlas\Soft_F_Atlas_RF\pickup_01\Data\atlas_b_g_pickup_01_ext_mp_co.paa", 
		"\lxRF\vehicles_rf\pickup_01\Data\pickup_01_adds_gendarmerie_co.paa", 
		"\lxrf\vehicles_rf\pickup_01\data\pickup_01_ext2_co.paa", 
		"\lxrf\vehicles_rf\pickup_01\data\pickup_01_AAT_olive_co.paa", 
		"\lxrf\vehicles_rf\pickup_01\data\pickup_01_launcher_co.paa"
	};
	textureList[] = {"Bundeswehr_MP", 1};
	class TransportMagazines
	{
		mag_xx(30Rnd_65x39_caseless_msbs_mag,4);
		mag_xx(SmokeShell,2);
		mag_xx(SmokeShellBlue,2);
	};
	class TransportWeapons
	{
		weap_xx(arifle_G36C_F,2);
	};
};

/* Bundeswehr Arid */
class Atlas_B_G_Pickup_ard_F: Pickup_01_base_rf
{
	author = $STR_A3_A_BranFlakes;
	side = TWest;
	scope = public;
	scopeCurator = public;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_G_Pickup_ard_F.jpg";
	faction = Atlas_BLU_G_ard_F;
	crew = "Atlas_B_G_Soldier_ard_F";
	typicalCargo[] = {"Atlas_B_G_Soldier_ard_F"};
	textureList[] = {"Bundeswehr_Arid",1};
	class TransportMagazines
	{
		mag_xx(30Rnd_65x39_caseless_msbs_mag,4);
		mag_xx(SmokeShell,2);
		mag_xx(SmokeShellBlue,2);
	};
	class TransportWeapons
	{
		weap_xx(arifle_G36C_sand_F,2);
	};
	animationList[] = {"hide_bullbar", 0.5, "hide_snorkel", 0, "hide_trunk_door", 0.1, "hide_sidesteps", 0, "hide_rack", 0, "hide_rack_spotlights", 0.5, "hide_frame", 0};
};
class Atlas_B_G_Pickup_Comms_ard_F: Pickup_comms_base_rf
{
	author = $STR_A3_A_BranFlakes;
	side = TWest;
	scope = public;
	scopeCurator = public;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_G_Pickup_Comms_ard_F.jpg";
	faction = Atlas_BLU_G_ard_F;
	crew = "Atlas_B_G_Soldier_ard_F";
	typicalCargo[] = {"Atlas_B_G_Soldier_ard_F"};
	textureList[] = {"Bundeswehr_Arid",1};
	class TransportMagazines
	{
		mag_xx(30Rnd_65x39_caseless_msbs_mag,4);
		mag_xx(SmokeShell,2);
		mag_xx(SmokeShellBlue,2);
	};
	class TransportWeapons
	{
		weap_xx(arifle_G36C_sand_F,2);
	};
	animationList[] = {"hide_bullbar", 0.5, "hide_snorkel", 0, "hide_trunk_door", 0, "hide_sidesteps", 0.5, "hide_rack", 0, "hide_rack_spotlights", 0, "hide_rack_antenna", 0, "hide_box", 0, "hide_box_door", 0};
};
class Atlas_B_G_Pickup_HMG_ard_F: Pickup_01_hmg_base_rf
{
	author = $STR_A3_A_BranFlakes;
	side = TWest;
	scope = public;
	scopeCurator = public;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_G_Pickup_HMG_ard_F.jpg";
	faction = Atlas_BLU_G_ard_F;
	crew = "Atlas_B_G_Soldier_ard_F";
	typicalCargo[] = {"Atlas_B_G_Soldier_ard_F"};
	textureList[] = {"Bundeswehr_Arid",1};
	class TransportMagazines
	{
		mag_xx(30Rnd_65x39_caseless_msbs_mag,4);
		mag_xx(SmokeShell,2);
		mag_xx(SmokeShellBlue,2);
	};
	class TransportWeapons
	{
		weap_xx(arifle_G36C_sand_F,2);
	};
	animationList[] = {"hide_bullbar", 0.5, "hide_snorkel", 0, "hide_sidesteps", 0, "hide_frame", 0, "hide_shield", 1, "Hide_Rail", 1};
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
class Atlas_B_G_Pickup_aat_ard_F: Pickup_01_aat_base_rf
{
	author = $STR_A3_A_BranFlakes;
	side = TWest;
	scope = public;
	scopeCurator = public;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_G_Pickup_aat_ard_F.jpg";
	faction = Atlas_BLU_G_ard_F;
	crew = "Atlas_B_G_Soldier_ard_F";
	typicalCargo[] = {"Atlas_B_G_Soldier_ard_F"};
	textureList[] = {"Bundeswehr_Arid",1};
	class TransportMagazines
	{
		mag_xx(30Rnd_65x39_caseless_msbs_mag,4);
		mag_xx(SmokeShell,2);
		mag_xx(SmokeShellBlue,2);
	};
	class TransportWeapons
	{
		weap_xx(arifle_G36C_sand_F,2);
	};
	animationList[] = {"hide_bullbar", 0.5, "hide_snorkel", 0, "hide_trunk_door", 0.1, "trunk_door_open", 0, "hide_sidesteps", 0, "hide_rack", 0, "hide_rack_spotlights", 0.5, "hide_frame", 0.5};
};
class Atlas_B_G_Pickup_AT_ard_F: Aegis_Pickup_01_AT_base_RF
{
	author = $STR_A3_A_BranFlakes;
	side = TWest;
	scope = public;
	scopeCurator = public;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_G_Pickup_AT_ard_F.jpg";
	faction = Atlas_BLU_G_ard_F;
	crew = "Atlas_B_G_Soldier_ard_F";
	typicalCargo[] = {"Atlas_B_G_Soldier_ard_F"};
	textureList[] = {"Bundeswehr_Arid",1};
	class TransportMagazines
	{
		mag_xx(30Rnd_65x39_caseless_msbs_mag,4);
		mag_xx(SmokeShell,2);
		mag_xx(SmokeShellBlue,2);
	};
	class TransportWeapons
	{
		weap_xx(arifle_G36C_sand_F,2);
	};
	animationList[] = {"hide_bullbar", 0.5, "hide_snorkel", 0, "hide_trunk_door", 0.1, "trunk_door_open", 0, "hide_sidesteps", 0, "hide_rack", 0, "hide_rack_spotlights", 0.5, "hide_frame", 0.5};
};