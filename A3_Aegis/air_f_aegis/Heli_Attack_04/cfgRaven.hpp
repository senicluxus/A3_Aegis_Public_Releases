/* Raven - INDEP */
class Aegis_I_Raven_Heli_Attack_04_F: Aegis_Heli_Attack_04_base_F
{
	author = $STR_A3_A_Grave;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_I_Raven_Heli_Attack_04_F.jpg";
	displayName = $STR_A3_A_CfgVehicles_Heli_Attack_04_base_F0;
	scope = public;
	scopeCurator = public;
	scopeArsenal = 0;
	forceInGarage = 0;
	side = TGuerrila;
	faction = IND_Raven_F;
	crew = I_Raven_Soldier_helipilot_F;
	typicalCargo[] = {I_Raven_Soldier_helipilot_F};
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
		Green,1,
		Black,0,
	};
	hiddenSelectionsTextures[]=
	{
		"\A3_Aegis\air_f_Aegis\Heli_Attack_04\Data\Skins\Heli_Attack_04_ext_01_grn_CO.paa",
		"\A3_Aegis\air_f_Aegis\Heli_Attack_04\Data\Skins\Heli_Attack_04_ext_02_grn_CO.paa",
		"\A3_Aegis\air_f_Aegis\Heli_Attack_04\Data\Skins\Heli_Attack_04_ext_03_grn_CO.paa"
	};	
    /* Inventory */
	class TransportMagazines
	{
		mag_xx(SmokeShell,2);
		mag_xx(SmokeShellRed,2);
		mag_xx(30Rnd_545x39_AK12_Mag_F,4);
	};
	class TransportWeapons
	{
		weap_xx(arifle_AK12U_545_F,2);
	};
	/* Unique Raven Pylon Settings*/
	class Components: Components
	{
		class TransportPylonsComponent: TransportPylonsComponent
		{
            class Pylons: Pylons
            {
                class PylonLeft1: PylonLeft1
                {
                    attachment = PylonRack_20Rnd_Rocket_80mm;
                };
                class PylonLeft2: PylonLeft2
                {
                    attachment = PylonRack_20Rnd_Rocket_80mm;
                };
				class PylonLeft3: PylonLeft3
				{
                    attachment = PylonWeapon_250Rnd_20mm_shells;
                };
				class PylonRight1: PylonRight1
                {
                    attachment = PylonRack_20Rnd_Rocket_80mm;
                };
                class PylonRight2: PylonRight2
                {
                    attachment = PylonRack_20Rnd_Rocket_80mm;
                };
                class PylonRight3: PylonRight3
                {
                    attachment = PylonWeapon_250Rnd_20mm_shells;
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

/* Raven - OPFOR */
class Aegis_O_Raven_Heli_Attack_04_F: Aegis_I_Raven_Heli_Attack_04_F
{
    author = $STR_A3_A_Grave;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_I_Raven_Heli_Attack_04_F.jpg";
    faction = OPF_Raven_F;
	side = TEast;
	crew = O_Raven_Soldier_helipilot_F;
	typicalCargo[] = {O_Raven_Soldier_helipilot_F};
};