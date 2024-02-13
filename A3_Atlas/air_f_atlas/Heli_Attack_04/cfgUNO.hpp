/* CDF United Nations Observers */
class Atlas_I_UNO_Heli_Attack_04_F: Aegis_Heli_Attack_04_base_F
{
	author = $STR_A3_A_Grave;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_I_UNO_Heli_Attack_04_F.jpg";
	displayName = $STR_A3_A_CfgVehicles_Heli_Attack_04_IND_F0;
	scope = public;
	scopeCurator = public;
	scopeArsenal = 0;
	forceInGarage = 0;
    side = TGuerrila;
	faction = Atlas_IND_UNO_wdl_F;
	crew = Atlas_I_UNO_wdl_Helipilot_F;
	typicalCargo[] = {Atlas_I_UNO_wdl_Helipilot_F};
    textureList[] = {UNO,1};
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			magazines[]=
			{
				"Aegis_150Rnd_Autocannon_Heli_Attack_04_HE_Yellow_F",
				"Aegis_150Rnd_Autocannon_Heli_Attack_04_AP_Yellow_F",
				"Laserbatteries"
			};
		};
	};
	hiddenSelectionsTextures[]=
	{
		"\A3_Atlas\Air_F_Atlas\Heli_Attack_04\Data\Heli_Attack_04_ext_01_UN_CO.paa",
		"\A3_Atlas\Air_F_Atlas\Heli_Attack_04\Data\Heli_Attack_04_ext_02_UN_CO.paa",
		"\A3_Atlas\Air_F_Atlas\Heli_Attack_04\Data\Heli_Attack_04_ext_03_UN_CO.paa"
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
		weap_xx(arifle_FORT652_F,2);
	};
	/* Unique Chernarussian Pylon Settings*/
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
                    attachment = PylonRack_3Rnd_LG_scalpel;
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
                        PylonRack_12Rnd_missiles,
						PylonRack_12Rnd_missiles,
						PylonRack_3Rnd_LG_scalpel,
						PylonRack_12Rnd_missiles,
						PylonRack_12Rnd_missiles,
						PylonRack_3Rnd_LG_scalpel
                    };
                };
                class AT: AT
                {
                    attachment[] =
                    {
                        PylonRack_12Rnd_missiles,
                        PylonRack_4Rnd_LG_scalpel,
                        PylonRack_4Rnd_LG_scalpel,
                        PylonRack_12Rnd_missiles,
						PylonRack_4Rnd_LG_scalpel,
						PylonRack_4Rnd_LG_scalpel
                    };
                };
                class HAT: HAT
                {
                    attachment[] =
                    {
						PylonRack_4Rnd_LG_scalpel,
                        PylonRack_4Rnd_LG_scalpel,
                        PylonRack_1Rnd_Missile_AGM_02_F,
                        PylonRack_4Rnd_LG_scalpel,
                        PylonRack_4Rnd_LG_scalpel,
                        PylonRack_1Rnd_Missile_AGM_02_F
                    };
                };
                class CAS: CAS
                {
                    attachment[] =
                    {
						PylonRack_12Rnd_missiles,
                        PylonRack_12Rnd_missiles,
                        PylonMissile_1Rnd_Mk82_F,
						PylonRack_12Rnd_missiles,
                        PylonRack_12Rnd_missiles,
                        PylonMissile_1Rnd_Mk82_F
                    };
                };
            };
		};
	};
};