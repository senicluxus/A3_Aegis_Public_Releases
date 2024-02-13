/* Belarus CSAT */
class Atlas_O_W_Heli_Attack_04_F: Aegis_Heli_Attack_04_base_F
{
	author = $STR_A3_A_Grave;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_W_Heli_Attack_04_F.jpg";
	displayName = $STR_A3_A_CfgVehicles_Heli_Attack_04_base_F0;
	scope = public;
	scopeCurator = public;
	scopeArsenal = 0;
	forceInGarage = 0;
    side = TEast;
	faction = Atlas_OPF_W_F;
	crew = Atlas_O_W_Helipilot_F;
	typicalCargo[] = {Atlas_O_W_Helipilot_F};
	textureList[] =
	{
		Black,0,
        WoodlandHex,1,
		GreenHex,0
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
	hiddenSelectionsTextures[]=
	{
		"\A3_Atlas\Air_F_Atlas\Heli_Attack_04\Data\Heli_Attack_04_ext_01_WHEX_CO.paa",
		"\A3_Atlas\Air_F_Atlas\Heli_Attack_04\Data\Heli_Attack_04_ext_02_WHEX_CO.paa",
		"\A3_Atlas\Air_F_Atlas\Heli_Attack_04\Data\Heli_Attack_04_ext_03_WHEX_CO.paa"
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
	/* Unique Belarussian Pylon Settings*/
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