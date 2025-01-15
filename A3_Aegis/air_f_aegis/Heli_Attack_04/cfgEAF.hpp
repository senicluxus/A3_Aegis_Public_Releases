/* LDF */
class Aegis_I_EAF_Heli_Attack_04_F: Aegis_Heli_Attack_04_base_F
{
	author = $STR_A3_A_BranFlakes;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_I_EAF_Heli_Attack_04_F.jpg";
	displayName = $STR_A3_A_CfgVehicles_Heli_Attack_04_EAF_F0;
	scope = public;
	scopeCurator = public;
	scopeArsenal = 0;
	forceInGarage = 0;
	side = TGuerrila;
	faction = IND_E_F;
	crew = I_E_Helipilot_F;
	typicalCargo[]=
	{
		I_E_Soldier_F
	};
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			magazines[]=
			{
				"Aegis_150Rnd_Autocannon_Heli_Attack_04_HE_Red_F",
				"Aegis_150Rnd_Autocannon_Heli_Attack_04_AP_Red_F",
				"Laserbatteries"
			};
		};
	};
    textureList[] =
	{
		EAF,1,
	};
	hiddenSelectionsTextures[]=
	{
		"\A3_Aegis\air_f_Aegis\Heli_Attack_04\Data\Skins\Heli_Attack_04_ext_01_LDF_CO.paa",
		"\A3_Aegis\air_f_Aegis\Heli_Attack_04\Data\Skins\Heli_Attack_04_ext_02_LDF_CO.paa",
		"\A3_Aegis\air_f_Aegis\Heli_Attack_04\Data\Skins\Heli_Attack_04_ext_03_LDF_CO.paa"
	};	
    /* Inventory */
	class TransportMagazines
	{
		mag_xx(SmokeShell,2);
		mag_xx(SmokeShellRed,2);
		mag_xx(30Rnd_65x39_caseless_msbs_mag,4);
	};
	class TransportWeapons
	{
		weap_xx(arifle_MSBS65_F,2);
	};
	/* Unique LDF Pylon Settings*/
	class Components: Components
	{
		class TransportPylonsComponent: TransportPylonsComponent
		{
            class Pylons: Pylons
            {
                class PylonLeft1: PylonLeft1
                {
                    attachment = PylonRack_12Rnd_missiles;
                };
                class PylonLeft2: PylonLeft2
                {
                    attachment = PylonRack_12Rnd_missiles;
                };
				class PylonLeft3: PylonLeft3
				{
                    attachment = PylonWeapon_300Rnd_20mm_shells;
					turret[] = {};
                };
				class PylonRight1: PylonRight1
                {
                    attachment = PylonRack_12Rnd_missiles;
                };
                class PylonRight2: PylonRight2
                {
                    attachment = PylonRack_12Rnd_missiles;
                };
                class PylonRight3: PylonRight3
                {
                    attachment = PylonWeapon_300Rnd_20mm_shells;
					turret[] = {};
                };
            };
            class Presets: Presets
            {
                class Empty: Empty{};
                class Default: Default
                {
                    attachment[] =
                    {
                       	PylonRack_12Rnd_missiles,
						PylonRack_12Rnd_missiles,
						PylonWeapon_300Rnd_20mm_shells,
						PylonRack_12Rnd_missiles,
						PylonRack_12Rnd_missiles,
						PylonWeapon_300Rnd_20mm_shells
                    };
                };
				class AT: AT
				{
					attachment[]=
					{
						PylonRack_12Rnd_missiles,
						PylonRack_12Rnd_missiles,
						PylonRack_3Rnd_LG_scalpel,
						PylonRack_12Rnd_missiles,
						PylonRack_12Rnd_missiles,
						PylonRack_3Rnd_LG_scalpel
					};
				};
				class CAS: CAS
				{
					attachment[]=
					{
						PylonRack_12Rnd_missiles,
						PylonRack_12Rnd_missiles,
						PylonMissile_1Rnd_Bomb_03_F,
						PylonRack_12Rnd_missiles,
						PylonRack_12Rnd_missiles,
						PylonMissile_1Rnd_Bomb_03_F
					};
				};
            };
		};
	};
};
/* LDF BLUFOR */
class Aegis_B_EAF_Heli_Attack_04_F: Aegis_I_EAF_Heli_Attack_04_F
{
	author = $STR_A3_A_BranFlakes;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_I_EAF_Heli_Attack_04_F.jpg";
	displayName = $STR_A3_A_CfgVehicles_Heli_Attack_04_EAF_F0;
	scope = public;
	scopeCurator = public;
	scopeArsenal = 0;
	forceInGarage = 0;
	side = TWest;
	faction = BLU_EAF_F;
	crew = Aegis_B_E_Helipilot_F;
	typicalCargo[]=
	{
		Aegis_B_E_Soldier_F
	};
};
/* Arid LDF */
class Aegis_I_EAF_Heli_Attack_04_ard_F: Aegis_I_EAF_Heli_Attack_04_F
{
	author = $STR_A3_A_BranFlakes;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_I_EAF_Heli_Attack_04_ard_F.jpg";
	displayName = $STR_A3_A_CfgVehicles_Heli_Attack_04_EAF_F0;
	scope = public;
	scopeCurator = public;
	scopeArsenal = 0;
	forceInGarage = 0;
	side = TGuerrila;
	faction = IND_E_ard_F;
	crew = I_E_Helipilot_ard_F;
	typicalCargo[]=
	{
		I_E_Soldier_ard_F
	};
    textureList[] =
	{
		EAF_arid,1,
	};
	hiddenSelectionsTextures[]=
	{
		"\A3_Aegis\air_f_Aegis\Heli_Attack_04\Data\Skins\Heli_Attack_04_ext_01_LDF_arid_CO.paa",
		"\A3_Aegis\air_f_Aegis\Heli_Attack_04\Data\Skins\Heli_Attack_04_ext_02_LDF_arid_CO.paa",
		"\A3_Aegis\air_f_Aegis\Heli_Attack_04\Data\Skins\Heli_Attack_04_ext_03_LDF_arid_CO.paa"
	};
	class TransportWeapons
	{
		weap_xx(arifle_MSBS65_sand_F,2);
	};
};
/* Arid LDF BLUFOR */
class Aegis_B_EAF_Heli_Attack_04_ard_F: Aegis_I_EAF_Heli_Attack_04_ard_F
{
	author = $STR_A3_A_BranFlakes;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_I_EAF_Heli_Attack_04_ard_F.jpg";
	displayName = $STR_A3_A_CfgVehicles_Heli_Attack_04_EAF_F0;
	scope = public;
	scopeCurator = public;
	scopeArsenal = 0;
	forceInGarage = 0;
	side = TWest;
	faction = BLU_EAF_ard_F;
	crew = I_E_Helipilot_ard_F;
	typicalCargo[]=
	{
		Aegis_B_E_Helipilot_ard_F
	};
    textureList[] =
	{
		EAF_arid,1,
	};
	hiddenSelectionsTextures[]=
	{
		"\A3_Aegis\air_f_Aegis\Heli_Attack_04\Data\Skins\Heli_Attack_04_ext_01_LDF_arid_CO.paa",
		"\A3_Aegis\air_f_Aegis\Heli_Attack_04\Data\Skins\Heli_Attack_04_ext_02_LDF_arid_CO.paa",
		"\A3_Aegis\air_f_Aegis\Heli_Attack_04\Data\Skins\Heli_Attack_04_ext_03_LDF_arid_CO.paa"
	};
	class TransportWeapons
	{
		weap_xx(arifle_MSBS65_sand_F,2);
	};
};