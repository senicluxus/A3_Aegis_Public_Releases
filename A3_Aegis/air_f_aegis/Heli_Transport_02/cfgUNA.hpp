class Aegis_B_UN_lxWS_Heli_Transport_02_VIP_F: Aegis_Heli_Transport_02_VIP_base_F
{
	author = $STR_A3_A_Grave;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_B_UN_lxWS_Heli_Transport_02_VIP_F.jpg";
	scope = public;
	displayName = $STR_A3_A_CfgVehicles_Heli_Transport_02_vip_base_F0;
	side = TWest;
	faction = BLU_UN_lxWS;
	crew = B_UN_Helipilot_lxWS;
	typicalCargo[]=
	{
		B_UN_Helipilot_lxWS
	};
    hiddenSelectionsTextures[]=
	{
		"lxWS\air_f_lxWS\Data\UN\Heli_Transport_02_1_UN_CO.paa",
		"\A3_Aegis\air_f_Aegis\Heli_Transport_02\data\Skins\Heli_Transport_02_ext_02_UNA_CO.paa", ///update texture
		"lxWS\air_f_lxWS\Data\UN\Heli_Transport_02_2_UN_CO.paa",
		"lxWS\air_f_lxWS\Data\UN\Heli_Transport_02_int_02_UN_CO.paa"
	};
    textureList[] = 
    {
        UNA,1
    };
    class TransportItems
	{
		item_xx(FirstAidKit,10);
	};
};
class Aegis_B_UN_lxWS_Heli_Transport_02_Heavy_F: Aegis_Heli_Transport_02_Heavy_base_F
{
	author = $STR_A3_A_Grave;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_B_UN_lxWS_Heli_Transport_02_Heavy_F.jpg";
	scope = public;
	displayName = $STR_A3_A_CfgVehicles_Heli_Transport_02_heavy_base_F0;
	side = TWest;
	faction = BLU_UN_lxWS;
	crew = B_UN_Helipilot_lxWS;
	typicalCargo[]=
	{
		B_UN_Helipilot_lxWS
	};
    hiddenSelectionsTextures[]=
	{
		"\A3_Aegis\air_f_Aegis\Heli_Transport_02\data\Skins\Heli_Transport_02_ext_01_UNA_CO.paa",
		"\A3_Aegis\air_f_Aegis\Heli_Transport_02\data\Skins\Heli_Transport_02_ext_02_UNA_CO.paa", ///update texture
		"lxWS\air_f_lxWS\Data\UN\Heli_Transport_02_2_UN_CO.paa",
		"lxWS\air_f_lxWS\Data\UN\Heli_Transport_02_int_02_UN_CO.paa"
	};
    textureList[] = 
    {
        UNA,1
    };
	availableForSupportTypes[] =
	{
		Drop,
		Transport
	};
	class TransportBackpacks
	{
		bag_xx(B_Parachute,16);
	};
    class TransportItems
	{
		item_xx(FirstAidKit,16);
		item_xx(Toolkit,1);
		item_xx(Medikit,1);
		item_xx(ItemGPS,1);
	};
	class TransportMagazines
	{
		mag_xx(SmokeShell,2);
		mag_xx(SmokeShellGreen,2);
		mag_xx(35Rnd_556x45_Velko_lxWS,4);
	};
	class TransportWeapons
	{
		weap_xx(arifle_Velko_lxWS,2);
	};
};