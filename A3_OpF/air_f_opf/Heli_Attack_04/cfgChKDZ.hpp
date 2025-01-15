class Opf_O_S_Heli_Attack_04_F: Aegis_Heli_Attack_04_base_F
{
	author = $STR_A3_A_Grave;
	editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\Opf_O_S_Heli_Attack_04_F.jpg";
	displayName = $STR_A3_A_CfgVehicles_Heli_Attack_04_base_F0;
	scope = public;
	scopeCurator = public;
	scopeArsenal = 0;
	forceInGarage = 0;
	side = TEast;
	faction = Opf_OPF_S_F;
	crew = Opf_O_S_HeliPilot_F;
	typicalCargo[] = {Opf_O_S_Soldier_1_F};
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			magazines[]=
			{
				"Aegis_150Rnd_Autocannon_Heli_Attack_04_HE_Green_F",
				"Aegis_150Rnd_Autocannon_Heli_Attack_04_AP_Green_F",
				"Laserbatteries"
			};
		};
	};
    textureList[] =
	{
		Sep_01,1
	};
	hiddenSelectionsTextures[]=
	{
		"\A3_Opf\air_f_Opf\Heli_Attack_04\Data\Heli_Attack_04_ext_01_CHKDZ_CO.paa",
		"\A3_Opf\air_f_Opf\Heli_Attack_04\Data\Heli_Attack_04_ext_02_CHKDZ_CO.paa",
		"\A3_Aegis\air_f_Aegis\Heli_Attack_04\Data\Skins\Heli_Attack_04_ext_03_grn_CO.paa"
	};	
    /* Inventory */
	class TransportMagazines
	{
		mag_xx(SmokeShell,2);
		mag_xx(SmokeShellRed,2);
		mag_xx(30Rnd_545x39_Mag_F,4);
	};
	class TransportWeapons
	{
		weap_xx(arifle_AKSM_alt_F,2);
	};
	/* Unique Pylon Settings*/
	class Components: Components
	{
		class TransportPylonsComponent: TransportPylonsComponent
		{
            class Pylons: Pylons
            {
                class PylonLeft1: PylonLeft1
                {
                    attachment = PylonRack_20Rnd_Rocket_80mm;
					turret[] = {};
                };
                class PylonLeft2: PylonLeft2
                {
                    attachment = PylonRack_20Rnd_Rocket_80mm;
					turret[] = {};
                };
				class PylonLeft3: PylonLeft3
				{
                    attachment = PylonWeapon_250Rnd_20mm_shells;
					turret[] = {};
                };
				class PylonRight1: PylonRight1
                {
                    attachment = PylonRack_20Rnd_Rocket_80mm;
					turret[] = {};
                };
                class PylonRight2: PylonRight2
                {
                    attachment = PylonRack_20Rnd_Rocket_80mm;
					turret[] = {};
                };
                class PylonRight3: PylonRight3
                {
                    attachment = PylonWeapon_250Rnd_20mm_shells;
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
                        PylonRack_20Rnd_Rocket_80mm,
						PylonRack_20Rnd_Rocket_80mm,
						PylonWeapon_250Rnd_20mm_shells,
						PylonRack_20Rnd_Rocket_80mm,
						PylonRack_20Rnd_Rocket_80mm,
						PylonWeapon_250Rnd_20mm_shells
                    };
                };
            };
		};
	};
};