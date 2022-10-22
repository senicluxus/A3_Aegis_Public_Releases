// United Nations (Sahrani)

class Atlas_I_UNO_Heli_Light_02_dynamicLoadout_F: O_Heli_Light_02_dynamicLoadout_F
{
	author = $STR_A3_A_BranFlakes;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\I_UNO_Heli_Light_02_dynamicLoadout_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TGuerrila;
	faction = Atlas_IND_UNO_F;
	crew = Atlas_I_UNO_Helipilot_F;
	typicalCargo[] = {Atlas_I_UNO_Helipilot_F};
    textureList[] = {UNO,1};
	hiddenSelectionsTextures[] = {"\A3_Atlas\Air_F_Atlas\Heli_Light_02\Data\Heli_Light_02_ext_UN_CO.paa"};
	class TransportMagazines
	{
		mag_xx(SmokeShell,2);
		mag_xx(SmokeShellGreen,2);
		mag_xx(30Rnd_65x39_caseless_msbs_mag,4);
	};
	class TransportWeapons
	{
		weap_xx(arifle_G36C_F,2);
	};
};
class Atlas_I_UNO_Heli_Light_02_unarmed_F: O_Heli_Light_02_unarmed_F
{
	author = $STR_A3_A_BranFlakes;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\I_UNO_Heli_Light_02_unarmed_F.jpg";
	scope = public;
	scopeCurator = public;
	scopeArsenal = private;
	forceInGarage = false;
	side = TGuerrila;
	faction = Atlas_IND_UNO_F;
	crew = Atlas_I_UNO_Helipilot_F;
	typicalCargo[] = {Atlas_I_UNO_Helipilot_F};
    textureList[] = {UNO,1};
	hiddenSelectionsTextures[] = {"\A3_Atlas\Air_F_Atlas\Heli_Light_02\Data\Heli_Light_02_ext_UN_CO.paa"};
    class TransportMagazines
    {
        mag_xx(SmokeShell,2);
        mag_xx(SmokeShellGreen,2);
        mag_xx(30Rnd_65x39_caseless_msbs_mag,4);
    };
    class TransportWeapons
    {
        weap_xx(arifle_G36C_F,2);
    };
};

// United Nations (Chernarus)

class Atlas_I_UNO_wdl_Heli_Light_02_dynamicLoadout_F: O_Heli_Light_02_dynamicLoadout_F
{
	author = $STR_A3_A_BranFlakes;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\I_UNO_Heli_Light_02_dynamicLoadout_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TGuerrila;
	faction = Atlas_IND_UNO_wdl_F;
	crew = Atlas_I_UNO_wdl_Helipilot_F;
	typicalCargo[] = {Atlas_I_UNO_wdl_Helipilot_F};
    textureList[] = {UNO,1};
	hiddenSelectionsTextures[] = {"\A3_Atlas\Air_F_Atlas\Heli_Light_02\Data\Heli_Light_02_ext_UN_CO.paa"};
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
};
class Atlas_I_UNO_wdl_Heli_Light_02_unarmed_F: O_Heli_Light_02_unarmed_F
{
	author = $STR_A3_A_BranFlakes;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\I_UNO_Heli_Light_02_unarmed_F.jpg";
	scope = public;
	scopeCurator = public;
	scopeArsenal = private;
	forceInGarage = false;
	side = TGuerrila;
	faction = Atlas_IND_UNO_wdl_F;
	crew = Atlas_I_UNO_wdl_Helipilot_F;
	typicalCargo[] = {Atlas_I_UNO_wdl_Helipilot_F};
    textureList[] = {UNO,1};
	hiddenSelectionsTextures[] = {"\A3_Atlas\Air_F_Atlas\Heli_Light_02\Data\Heli_Light_02_ext_UN_CO.paa"};
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
};