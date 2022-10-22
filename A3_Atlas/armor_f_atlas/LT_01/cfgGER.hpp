/* Bundeswehr */
class Atlas_B_G_LT_01_AT_F: LT_01_AT_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_E_LT_01_AT_F.jpg";
	side = TWest;
	faction = Atlas_BLU_G_F;
	crew = Atlas_B_G_Crew_F;
	typicalCargo[] = {Atlas_B_G_Soldier_F};
	scope = public;
	displayName = $STR_A3_CfgVehicles_I_LT_01_AT_F0;
	textureList[] = {Indep_Olive,1};
	hiddenSelectionsTextures[] =
	{
		"\A3\Armor_F_Tank\LT_01\Data\LT_01_Main_olive_CO.paa",
		"\A3\Armor_F_Tank\LT_01\Data\LT_01_AT_olive_CO.paa",
		"\A3\Armor_F\Data\camonet_NATO_Green_CO.paa",
		"\A3\Armor_F\Data\cage_olive_CO.paa"
	};

    /* Inventory */
	class TransportMagazines
	{
		mag_xx(SmokeShell,2);
		mag_xx(SmokeShellBlue,2);
		mag_xx(30Rnd_65x39_caseless_msbs_mag,4);
	};
	class TransportWeapons
	{
		weap_xx(arifle_G36C_F,2);
	};
	class TransportItems
	{
		item_xx(FirstAidKit,10);
		item_xx(Toolkit,1);
		item_xx(Medikit,1);
	};
	class TransportBackpacks
	{
		bag_xx(B_AssaultPack_wdl_F,2);
	};

    /* Damage */
	class Damage
	{
		tex[] = {};
		mat[] =
		{
			"A3\Armor_F_Tank\LT_01\Data\LT_01_AT.rvmat",
			"A3\Armor_F_Tank\LT_01\Data\LT_01_AT_damage.rvmat",
			"A3\Armor_F_Tank\LT_01\Data\LT_01_AT_destruct.rvmat",
			"A3\Armor_F_Tank\LT_01\Data\LT_01_Main.rvmat",
			"A3\Armor_F_Tank\LT_01\Data\LT_01_Main_damage.rvmat",
			"A3\Armor_F_Tank\LT_01\Data\LT_01_Main_destruct.rvmat"
		};
	};

    /* Turrets */
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
            /* Weapons & Ammunition */
			magazines[] =
			{
				mag_2(100Rnd_127x99_mag_Tracer_Red),
				mag_2(2Rnd_127mm_Firefist_missiles),
				SmokeLauncherMag
			};
		};
	};
};
class Atlas_B_G_LT_01_scout_F: LT_01_scout_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_E_LT_01_scout_F.jpg";
	side = TWest;
	faction = Atlas_BLU_G_F;
	crew = Atlas_B_G_Crew_F;
	typicalCargo[] = {Atlas_B_G_Soldier_F};
	scope = public;
	displayName = $STR_A3_CfgVehicles_I_LT_01_scout_F0;
	textureList[] = {Indep_Olive,1};
	hiddenSelectionsTextures[] =
	{
		"\A3\Armor_F_Tank\LT_01\Data\LT_01_Main_olive_CO.paa",
		"\A3\Armor_F_Tank\LT_01\Data\LT_01_Radar_olive_CO.paa",
		"\A3\Armor_F\Data\camonet_NATO_Green_CO.paa",
		"\A3\Armor_F\Data\cage_olive_CO.paa"
	};

    /* Inventory */
	class TransportMagazines
	{
		mag_xx(SmokeShell,2);
		mag_xx(SmokeShellBlue,2);
		mag_xx(30Rnd_65x39_caseless_msbs_mag,4);
	};
	class TransportWeapons
	{
		weap_xx(arifle_G36C_F,2);
	};
	class TransportItems
	{
		item_xx(FirstAidKit,10);
		item_xx(Toolkit,1);
		item_xx(Medikit,1);
	};
	class TransportBackpacks
	{
		bag_xx(B_AssaultPack_wdl_F,2);
	};

    /* Damage */
	class Damage
	{
		tex[] = {};
		mat[] =
		{
			"A3\Armor_F_Tank\LT_01\Data\LT_01_Radar.rvmat",
			"A3\Armor_F_Tank\LT_01\Data\LT_01_Radar_damage.rvmat",
			"A3\Armor_F_Tank\LT_01\Data\LT_01_Radar_destruct.rvmat",
			"A3\Armor_F_Tank\LT_01\Data\LT_01_Main.rvmat",
			"A3\Armor_F_Tank\LT_01\Data\LT_01_Main_damage.rvmat",
			"A3\Armor_F_Tank\LT_01\Data\LT_01_Main_destruct.rvmat"
		};
	};
};
class Atlas_B_G_LT_01_AA_F: LT_01_AA_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_E_LT_01_AA_F.jpg";
	side = TWest;
	faction = Atlas_BLU_G_F;
	crew = Atlas_B_G_Crew_F;
	typicalCargo[] = {Atlas_B_G_Soldier_F};
	scope = public;
	displayName = $STR_A3_CfgVehicles_I_LT_01_AA_F0;
	editorSubcategory = EdSubcat_AAs;
	textureList[] = {Indep_Olive,1};
	hiddenSelectionsTextures[] =
	{
		"\A3\Armor_F_Tank\LT_01\Data\LT_01_Main_olive_CO.paa",
		"\A3\Armor_F_Tank\LT_01\Data\LT_01_AT_olive_CO.paa",
		"\A3\Armor_F\Data\camonet_NATO_Green_CO.paa",
		"\A3\Armor_F\Data\cage_olive_CO.paa"
	};

    /* Inventory */
	class TransportMagazines
	{
		mag_xx(SmokeShell,2);
		mag_xx(SmokeShellBlue,2);
		mag_xx(30Rnd_65x39_caseless_msbs_mag,4);
	};
	class TransportWeapons
	{
		weap_xx(arifle_G36C_F,2);
	};
	class TransportItems
	{
		item_xx(FirstAidKit,10);
		item_xx(Toolkit,1);
		item_xx(Medikit,1);
	};
	class TransportBackpacks
	{
		bag_xx(B_AssaultPack_wdl_F,2);
	};

    /* Damage */
	class Damage
	{
		tex[] = {};
		mat[] =
		{
			"A3\Armor_F_Tank\LT_01\Data\LT_01_AT.rvmat",
			"A3\Armor_F_Tank\LT_01\Data\LT_01_AT_damage.rvmat",
			"A3\Armor_F_Tank\LT_01\Data\LT_01_AT_destruct.rvmat",
			"A3\Armor_F_Tank\LT_01\Data\LT_01_Main.rvmat",
			"A3\Armor_F_Tank\LT_01\Data\LT_01_Main_damage.rvmat",
			"A3\Armor_F_Tank\LT_01\Data\LT_01_Main_destruct.rvmat"
		};
	};

    /* Turrets */
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
            /* Weapons & Ammunition */
			magazines[] =
			{
				mag_2(100Rnd_127x99_mag_Tracer_Red),
				mag_2(4Rnd_70mm_SAAMI_missiles),
				SmokeLauncherMag
			};
		};
	};
};
class Atlas_B_G_LT_01_cannon_F: LT_01_cannon_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_E_LT_01_cannon_F.jpg";
	side = TWest;
	faction = Atlas_BLU_G_F;
	crew = Atlas_B_G_Crew_F;
	typicalCargo[] = {Atlas_B_G_Soldier_F};
	scope = public;
	displayName = $STR_A3_CfgVehicles_I_LT_01_cannon_F0;
	/*
	textureList[] = {Woodland,1};
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Armor_F_Atlas\LT_01\Data\LT_01_Main_Wdl_CO.paa",
		"\A3_Atlas\Armor_F_Atlas\LT_01\Data\LT_01_Cannon_Wdl_CO.paa",
		"\A3\Armor_F\Data\camonet_NATO_Green_CO.paa",
		"\A3\Armor_F\Data\cage_olive_CO.paa"
	};
	*/
	textureList[] = {Indep_Olive,1};
	hiddenSelectionsTextures[] =
	{
		"\A3\Armor_F_Tank\LT_01\Data\LT_01_Main_olive_CO.paa",
		"\A3\Armor_F_Tank\LT_01\Data\LT_01_Cannon_olive_CO.paa",
		"\A3\Armor_F\Data\camonet_NATO_Green_CO.paa",
		"\A3\Armor_F\Data\cage_olive_CO.paa"
	};

    /* Inventory */
	class TransportMagazines
	{
		mag_xx(SmokeShell,2);
		mag_xx(SmokeShellBlue,2);
		mag_xx(30Rnd_65x39_caseless_msbs_mag,4);
	};
	class TransportWeapons
	{
		weap_xx(arifle_G36C_F,2);
	};
	class TransportItems
	{
		item_xx(FirstAidKit,10);
		item_xx(Toolkit,1);
		item_xx(Medikit,1);
	};
	class TransportBackpacks
	{
		bag_xx(B_AssaultPack_wdl_F,2);
	};

    /* Damage */
	class Damage
	{
		tex[] = {};
		mat[] =
		{
			"A3\Armor_F_Tank\LT_01\Data\LT_01_Cannon.rvmat",
			"A3\Armor_F_Tank\LT_01\Data\LT_01_Cannon_damage.rvmat",
			"A3\Armor_F_Tank\LT_01\Data\LT_01_Cannon_destruct.rvmat",
			"A3\Armor_F_Tank\LT_01\Data\LT_01_Main.rvmat",
			"A3\Armor_F_Tank\LT_01\Data\LT_01_Main_damage.rvmat",
			"A3\Armor_F_Tank\LT_01\Data\LT_01_Main_destruct.rvmat"
		};
	};

    /* Turrets */
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
            /* Weapons & Ammunition */
			magazines[] =
			{
				mag_2(60Rnd_20mm_HE_shells),
				mag_2(60Rnd_20mm_AP_shells),
				mag_4(250Rnd_762x51_Belt_Red),
				SmokeLauncherMag
			};
		};
	};
};

/* Bundeswehr (Arid) 
class Atlas_B_G_LT_01_AT_ard_F: Atlas_B_G_LT_01_AT_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_G_LT_01_AT_ard_F.jpg";
	faction = Atlas_BLU_G_ard_F;
	crew = Atlas_B_G_Crew_ard_F;
	typicalCargo[] = {Atlas_B_G_Soldier_ard_F};
	textureList[] = {Indep_Olive,1};
	hiddenSelectionsTextures[] =
	{
		"\A3\Armor_F_Tank\LT_01\Data\LT_01_AT_olive_CO.paa",
		"\A3\Armor_F_Tank\LT_01\Data\LT_01_Cannon_olive_CO.paa",
		"\A3\Armor_F\Data\camonet_NATO_Green_CO.paa",
		"\A3\Armor_F\Data\cage_olive_CO.paa"
	};

    /* Inventory 
	class TransportBackpacks
	{
		bag_xx(B_AssaultPack_mcamo,2);
	};
};
class Atlas_B_G_LT_01_scout_ard_F: Atlas_B_G_LT_01_scout_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_G_LT_01_scout_ard_F.jpg";
	faction = Atlas_BLU_G_ard_F;
	crew = Atlas_B_G_Crew_ard_F;
	typicalCargo[] = {Atlas_B_G_Soldier_ard_F};
	textureList[] = {Indep_Olive,1};
	hiddenSelectionsTextures[] =
	{
		"\A3\Armor_F_Tank\LT_01\Data\LT_01_Main_olive_CO.paa",
		"\A3\Armor_F_Tank\LT_01\Data\LT_01_Radar_olive_CO.paa",
		"\A3\Armor_F\Data\camonet_NATO_Green_CO.paa",
		"\A3\Armor_F\Data\cage_olive_CO.paa"
	};
	
    /* Inventory 
	class TransportBackpacks
	{
		bag_xx(B_AssaultPack_mcamo,2);
	};
};
class Atlas_B_G_LT_01_AA_ard_F: Atlas_B_G_LT_01_AA_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_G_LT_01_AA_ard_F.jpg";
	faction = Atlas_BLU_G_ard_F;
	crew = Atlas_B_G_Crew_ard_F;
	typicalCargo[] = {Atlas_B_G_Soldier_ard_F};
	textureList[] = {Indep_Olive,1};
	hiddenSelectionsTextures[] =
	{
		"\A3\Armor_F_Tank\LT_01\Data\LT_01_Main_olive_CO.paa",
		"\A3\Armor_F_Tank\LT_01\Data\LT_01_AT_olive_CO.paa",
		"\A3\Armor_F\Data\camonet_NATO_Green_CO.paa",
		"\A3\Armor_F\Data\cage_olive_CO.paa"
	};

    /* Inventory 
	class TransportBackpacks
	{
		bag_xx(B_AssaultPack_mcamo,2);
	};
};
class Atlas_B_G_LT_01_cannon_ard_F: Atlas_B_G_LT_01_cannon_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_G_LT_01_cannon_ard_F.jpg";
	faction = Atlas_BLU_G_ard_F;
	crew = Atlas_B_G_Crew_ard_F;
	typicalCargo[] = {Atlas_B_G_Soldier_ard_F};
	/*
	textureList[] = {Desert,1};
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Armor_F_Atlas\LT_01\Data\LT_01_Main_Desert_CO.paa",
		"\A3_Atlas\Armor_F_Atlas\LT_01\Data\LT_01_Cannon_Desert_CO.paa",
		"\A3\Armor_F\Data\camonet_NATO_Green_CO.paa",
		"\A3\Armor_F\Data\cage_olive_CO.paa"
	};
	
	textureList[] = {Indep_Olive,1};
	hiddenSelectionsTextures[] =
	{
		"\A3\Armor_F_Tank\LT_01\Data\LT_01_Main_olive_CO.paa",
		"\A3\Armor_F_Tank\LT_01\Data\LT_01_AT_olive_CO.paa",
		"\A3\Armor_F\Data\camonet_NATO_Green_CO.paa",
		"\A3\Armor_F\Data\cage_olive_CO.paa"
	};

    /* Inventory 
	class TransportBackpacks
	{
		bag_xx(B_AssaultPack_mcamo,2);
	};
};
*/