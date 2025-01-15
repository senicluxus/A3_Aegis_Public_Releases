/* Takistani CSAT */
class Atlas_O_T_Heli_Attack_04_F: Aegis_Heli_Attack_04_base_F
{
	author = $STR_A3_A_Grave;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_T_Heli_Attack_04_F.jpg";
	displayName = $STR_A3_A_CfgVehicles_Heli_Attack_04_base_F0;
	scope = public;
	scopeCurator = public;
	scopeArsenal = 0;
	forceInGarage = 0;
    side = TEast;
	faction = Atlas_OPF_T_F;
	crew = Atlas_O_T_Helipilot_F;
	typicalCargo[] = {Atlas_O_T_Helipilot_F};
	textureList[] =
	{
		Black,0,
		Takistan,1
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
		"\A3_Atlas\air_f_Atlas\Heli_Attack_04\Data\Heli_Attack_04_ext_01_TK_CO.paa",
		"\A3_Atlas\air_f_Atlas\Heli_Attack_04\Data\Heli_Attack_04_ext_02_TK_CO.paa",
		"\A3_Atlas\air_f_Atlas\Heli_Attack_04\Data\Heli_Attack_04_ext_03_TK_CO.paa"
	};	
    /* Inventory */
	class TransportMagazines
	{
		mag_xx(SmokeShell,2);
		mag_xx(SmokeShellRed,2);
		mag_xx(30Rnd_556x45_stanag_sand_green,4);
	};
	class TransportWeapons
	{
		weap_xx(arifle_SCAR_L_Short_F,2);
	};
};