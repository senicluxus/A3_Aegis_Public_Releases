/* Russia */
class Aegis_O_R_Heli_Attack_04_F: Aegis_Heli_Attack_04_base_F
{
	author = $STR_A3_A_Grave;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_O_R_Heli_Attack_04_F.jpg";
	displayName = $STR_A3_A_CfgVehicles_Heli_Attack_04_base_F0;
	scope = public;
	scopeCurator = public;
	scopeArsenal = 0;
	forceInGarage = 0;
	side = TEast;
	faction = OPF_R_F;
	crew = O_R_Helipilot_F;
	typicalCargo[] = {O_R_Helipilot_F};
	animationList[] =
	{
		exhaust_hide,1
	};
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
		Russian,1,
        Russian2,0,
        RussianGreen,0,
		Black,0,
	};
	hiddenSelectionsTextures[]=
	{
		"\A3_Aegis\air_f_Aegis\Heli_Attack_04\Data\Skins\Heli_Attack_04_ext_01_RUS_CO.paa",
		"\A3_Aegis\air_f_Aegis\Heli_Attack_04\Data\Heli_Attack_04_ext_02_Black_CO.paa",
		"\A3_Aegis\air_f_Aegis\Heli_Attack_04\Data\Skins\Heli_Attack_04_ext_03_RUS_CO.paa"
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
	/* Unique Russian Pylon Settings*/
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
                    attachment = PylonRack_6Rnd_Vikhr_missiles;
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
                    attachment = PylonRack_6Rnd_Vikhr_missiles;
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
						PylonRack_6Rnd_Vikhr_missiles,
						PylonRack_20Rnd_Rocket_80mm,
						PylonRack_20Rnd_Rocket_80mm,
						PylonRack_6Rnd_Vikhr_missiles
                    };
                };
                class AT: AT
                {
                    attachment[] =
                    {
                        PylonRack_6Rnd_Vikhr_missiles,
                        PylonRack_6Rnd_Vikhr_missiles,
                        PylonRack_6Rnd_Vikhr_missiles,
                        PylonRack_6Rnd_Vikhr_missiles,
						PylonRack_6Rnd_Vikhr_missiles,
						PylonRack_6Rnd_Vikhr_missiles
                    };
                };
                class HAT: HAT
                {
                    attachment[] =
                    {
						PylonRack_1Rnd_Missile_AGM_01_F,
                        PylonRack_1Rnd_Missile_AGM_01_F,
                        PylonRack_6Rnd_Vikhr_missiles,
                        PylonRack_1Rnd_Missile_AGM_01_F,
                        PylonRack_1Rnd_Missile_AGM_01_F,
                        PylonRack_6Rnd_Vikhr_missiles
                    };
                };
                class CAS: CAS
                {
                    attachment[] =
                    {
						PylonRack_20Rnd_Rocket_80mm,
                        PylonRack_20Rnd_Rocket_80mm,
                        PylonMissile_1Rnd_Bomb_03_F,
						PylonRack_20Rnd_Rocket_80mm,
                        PylonRack_20Rnd_Rocket_80mm,
                        PylonMissile_1Rnd_Bomb_03_F
                    };
                };
            };
		};
	};
};

/* Russia (Mediterranean)*/
class Aegis_O_R_Heli_Attack_04_ard_F: Aegis_O_R_Heli_Attack_04_F
{
    author = $STR_A3_A_Grave;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_O_R_Heli_Attack_04_F.jpg";
    side = TEast;
	faction = OPF_R_ard_F;
	crew = O_R_helipilot_ard_F;
	typicalCargo[] = {O_R_helipilot_ard_F};
	animationList[] =
	{
		exhaust_hide,0
	};
};