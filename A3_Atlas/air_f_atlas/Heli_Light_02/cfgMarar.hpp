class Atlas_B_M_Heli_Light_02_dynamicLoadout_F: O_Heli_Light_02_dynamicLoadout_F
{
	author = $STR_A3_A_BranFlakes;
	displayName = $STR_A3_A_CfgVehicles_B_M_Heli_Light_02_F0;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_M_Heli_Light_02_dynamicLoadout_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TWest;
	faction = Atlas_BLU_M_F;
	crew = Atlas_B_M_Helipilot_F;
	typicalCargo[] = {Atlas_B_M_Helipilot_F};
    textureList[] = {Marar,1};
	hiddenSelectionsTextures[] = {"\A3_Atlas\Air_F_Atlas\Heli_Light_02\Data\Heli_Light_02_ext_Marar_CO.paa"};
	class TransportMagazines
	{
		mag_xx(SmokeShell,2);
		mag_xx(SmokeShellRed,2);
		mag_xx(30Rnd_556x45_Stanag_red,4);
	};
	class TransportWeapons
	{
		weap_xx(arifle_Mk20_plain_F,2);
	};
};
class Atlas_B_M_Heli_Light_02_unarmed_F: O_Heli_Light_02_unarmed_F
{
	author = $STR_A3_A_BranFlakes;
	displayName = $STR_A3_A_CfgVehicles_B_M_Heli_Light_02_Unarmed_F0;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_M_Heli_Light_02_unarmed_F.jpg";
	scope = public;
	scopeCurator = public;
	scopeArsenal = private;
	forceInGarage = false;
	side = TWest;
	faction = Atlas_BLU_M_F;
	crew = Atlas_B_M_Helipilot_F;
	typicalCargo[] = {Atlas_B_M_Helipilot_F};
    textureList[] = {Marar,1};
	hiddenSelectionsTextures[] = {"\A3_Atlas\Air_F_Atlas\Heli_Light_02\Data\Heli_Light_02_ext_Marar_CO.paa"};
    class TransportMagazines
    {
        mag_xx(SmokeShell,2);
        mag_xx(SmokeShellRed,2);
        mag_xx(30Rnd_556x45_Stanag_red,4);
    };
    class TransportWeapons
    {
        weap_xx(arifle_Mk20_plain_F,2);
    };
};