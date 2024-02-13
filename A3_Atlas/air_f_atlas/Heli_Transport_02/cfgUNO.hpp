class Atlas_I_UNO_Heli_Transport_02_VIP_F: Aegis_Heli_Transport_02_VIP_base_F
{
	author = $STR_A3_A_Grave;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_I_UNO_lxws_Heli_Transport_02_VIP_F.jpg";
	displayName = $STR_A3_A_CfgVehicles_Heli_Transport_02_vip_base_F0;
	scope = public;
	scopeCurator = public;
	side = TGuerrila;
	faction = Atlas_IND_UNO_F;
	crew = Atlas_I_UNO_Helipilot_F;
	typicalCargo[] = {Atlas_I_UNO_Helipilot_F};
    hiddenSelectionsTextures[]=
	{
		"\A3_Atlas\Air_F_Atlas\Heli_Transport_02\Data\Heli_Transport_02_ext_01_UN_VIP_CO.paa",
		"\A3_Atlas\Air_F_Atlas\Heli_Transport_02\Data\Heli_Transport_02_ext_02_UN_CO.paa",
		"\A3_Atlas\Air_F_Atlas\Heli_Transport_02\Data\Heli_Transport_02_ext_02_UN_CO.paa",
		"lxWS\air_f_lxWS\Data\UN\Heli_Transport_02_int_02_UN_CO.paa"
	};
    textureList[] = 
    {
        UNO_VIP,1
    };
    class TransportItems
	{
		item_xx(FirstAidKit,10);
	};
};
class Atlas_I_UNO_Heli_Transport_02_Heavy_F: Aegis_Heli_Transport_02_Heavy_base_F
{
	author = $STR_A3_A_Grave;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_I_UNO_lxws_Heli_Transport_02_Heavy_F.jpg";
	displayName = $STR_A3_A_CfgVehicles_Heli_Transport_02_heavy_base_F0;
	scope = public;
	scopeCurator = public;
	side = TGuerrila;
	faction = Atlas_IND_UNO_F;
	crew = Atlas_I_UNO_Helipilot_F;
	typicalCargo[] = {Atlas_I_UNO_Helipilot_F};
    hiddenSelectionsTextures[]=
	{
		"\A3_Atlas\Air_F_Atlas\Heli_Transport_02\Data\Heli_Transport_02_ext_01_UN_CO.paa",
		"\A3_Atlas\Air_F_Atlas\Heli_Transport_02\Data\Heli_Transport_02_ext_02_UN_CO.paa",
		"\A3_Atlas\Air_F_Atlas\Heli_Transport_02\Data\Heli_Transport_02_ext_02_UN_CO.paa",
		"lxWS\air_f_lxWS\Data\UN\Heli_Transport_02_int_02_UN_CO.paa"
	};
    textureList[] = 
    {
        UNO,1
    };
    class TransportItems
	{
		item_xx(FirstAidKit,10);
	};
    class TransportMagazines
    {
        mag_xx(SmokeShell,2);
        mag_xx(SmokeShellGreen,2);
        mag_xx(30Rnd_556x45_stanag_sand_red,8);
    };
    class TransportWeapons
    {
        weap_xx(Aegis_arifle_M4A1_Short_sand_F,2);
    };
};