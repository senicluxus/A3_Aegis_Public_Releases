/* ION Security (lxWS) */
class Aegis_B_ION_Heli_Attack_04_F: Aegis_Heli_Attack_04_base_F
{
	author = $STR_A3_A_Grave;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_B_ION_Heli_Attack_04_F.jpg";
	displayName = $STR_A3_A_CfgVehicles_Heli_Attack_04_IND_F0;
	scope = public;
	scopeCurator = public;
	scopeArsenal = 0;
	forceInGarage = 0;
	side = TWest;
	faction = BLU_ION_lxWS;
	crew = B_ION_Helipilot_lxWS;
	typicalCargo[]=
	{
		B_ION_Soldier_lxWS
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
		ION_lxWS,1,
		Black,0,
	};
	hiddenSelectionsTextures[]=
	{
		"\A3_Aegis\air_f_Aegis\Heli_Attack_04\Data\Skins\Heli_Attack_04_ext_01_ION_CO.paa",
		"\A3_Aegis\air_f_Aegis\Heli_Attack_04\Data\Heli_Attack_04_ext_02_black_CO.paa",
		"\A3_Aegis\air_f_Aegis\Heli_Attack_04\Data\Heli_Attack_04_ext_03_black_CO.paa"
	};	
    /* Inventory */
	class TransportMagazines
	{
		mag_xx(SmokeShell,2);
		mag_xx(SmokeShellRed,2);
		mag_xx(30Rnd_556x45_Stanag,4);
	};
	class TransportWeapons
	{
		weap_xx(arifle_XMS_Base_lxWS,2);
	};
	/* Unique ION Pylon Settings*/
	class Components: Components
	{
		class TransportPylonsComponent: TransportPylonsComponent
		{
            class Pylons: Pylons
            {
                class PylonLeft1: PylonLeft1
                {
                    attachment = PylonRack_12Rnd_PG_missiles;
                };
                class PylonLeft2: PylonLeft2
                {
                    attachment = PylonRack_12Rnd_PG_missiles;
                };
				class PylonLeft3: PylonLeft3
				{
                    attachment = PylonWeapon_300Rnd_20mm_shells;
					turret[] = {};
                };
				class PylonRight1: PylonRight1
                {
                    attachment = PylonRack_12Rnd_PG_missiles;
                };
                class PylonRight2: PylonRight2
                {
                    attachment = PylonRack_12Rnd_PG_missiles;
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
                       	PylonRack_12Rnd_PG_missiles,
						PylonRack_12Rnd_PG_missiles,
						PylonWeapon_300Rnd_20mm_shells,
						PylonRack_12Rnd_PG_missiles,
						PylonRack_12Rnd_PG_missiles,
						PylonWeapon_300Rnd_20mm_shells
                    };
                };
            };
		};
	};
};