/* Arganan SFIA */
class Aegis_O_SFIA_Heli_Attack_04_F: Aegis_Heli_Attack_04_base_F
{
	author = $STR_A3_A_Grave;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_O_SFIA_Heli_Attack_04_F.jpg";
	displayName = $STR_A3_A_CfgVehicles_Heli_Attack_04_base_F0;
	scope = public;
	scopeCurator = public;
	scopeArsenal = 0;
	forceInGarage = 0;
	side = TEast;
	faction = OPF_SFIA_lxWS;
	crew = O_SFIA_pilot_lxWS;
	typicalCargo[] = {O_SFIA_pilot_lxWS};
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
		SFIA,1,
	};
	hiddenSelectionsTextures[]=
	{
		"\A3_Aegis\air_f_Aegis\Heli_Attack_04\Data\Skins\Heli_Attack_04_ext_01_SFIA_CO.paa",
		"\A3_Aegis\air_f_Aegis\Heli_Attack_04\Data\Skins\Heli_Attack_04_ext_02_SFIA_CO.paa",
		"\A3_Aegis\air_f_Aegis\Heli_Attack_04\Data\Skins\Heli_Attack_04_ext_03_SFIA_CO.paa"
	};	
    /* Inventory */
	class TransportMagazines
	{
		mag_xx(SmokeShell,2);
		mag_xx(SmokeShellRed,2);
		mag_xx(30Rnd_762x39_Mag_F,4);
	};
	class TransportWeapons
	{
		weap_xx(arifle_Galat_lxWS,2);
	};
	/* Unique SFIA Pylon Settings*/
	class Components: Components
	{
		class TransportPylonsComponent: TransportPylonsComponent
		{
            class Pylons: Pylons
            {
                class PylonLeft1: PylonLeft1
                {
                    attachment = PylonRack_19Rnd_Rocket_Skyfire;
                };
                class PylonLeft2: PylonLeft2
                {
                    attachment = PylonRack_19Rnd_Rocket_Skyfire;
                };
				class PylonLeft3: PylonLeft3
				{
                    attachment = PylonRack_3Rnd_LG_scalpel;
                };
				class PylonRight1: PylonRight1
                {
                    attachment = PylonRack_19Rnd_Rocket_Skyfire;
                };
                class PylonRight2: PylonRight2
                {
                    attachment = PylonRack_19Rnd_Rocket_Skyfire;
                };
                class PylonRight3: PylonRight3
                {
                    attachment = PylonRack_3Rnd_LG_scalpel;
                };
            };
            class Presets: Presets
            {
                class Empty: Empty{};
                class Default: Default
                {
                    attachment[] =
                    {
                       	PylonRack_19Rnd_Rocket_Skyfire,
						PylonRack_19Rnd_Rocket_Skyfire,
						PylonRack_3Rnd_LG_scalpel,
						PylonRack_19Rnd_Rocket_Skyfire,
						PylonRack_19Rnd_Rocket_Skyfire,
						PylonRack_3Rnd_LG_scalpel
                    };
                };
				class AT: AT
				{
					attachment[]=
					{
						PylonRack_19Rnd_Rocket_Skyfire,
						PylonRack_3Rnd_LG_scalpel,
						PylonRack_3Rnd_LG_scalpel,
						PylonRack_19Rnd_Rocket_Skyfire,
						PylonRack_3Rnd_LG_scalpel,
						PylonRack_3Rnd_LG_scalpel
					};
				};
				class CAS: CAS
				{
					attachment[]=
					{
						PylonRack_19Rnd_Rocket_Skyfire,
						PylonRack_19Rnd_Rocket_Skyfire,
						PylonWeapon_250Rnd_20mm_shells,
						PylonRack_19Rnd_Rocket_Skyfire,
						PylonRack_19Rnd_Rocket_Skyfire,
						PylonWeapon_250Rnd_20mm_shells
					};
				};
            };
		};
	};
};