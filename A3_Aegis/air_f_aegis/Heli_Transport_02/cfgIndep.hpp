class Aegis_I_Heli_Transport_02_Heavy_F: Aegis_Heli_Transport_02_Heavy_base_F
{
	author = $STR_A3_A_Grave;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_I_Heli_Transport_02_Heavy_F.jpg";
	scope = public;
	displayName = $STR_A3_A_CfgVehicles_Heli_Transport_02_heavy_base_F0;
	side = TGuerrila;
	faction = IND_F;
	crew = I_helipilot_F;
	typicalCargo[] = {I_helipilot_F};
    hiddenSelectionsTextures[]=
	{
		"\A3_Aegis\air_f_Aegis\Heli_Transport_02\data\Skins\Heli_Transport_02_ext_01_AAF_CO.paa",
		"\A3_Aegis\air_f_Aegis\Heli_Transport_02\data\Skins\Heli_Transport_02_ext_02_AAF_CO.paa",
		"\A3_Aegis\air_f_Aegis\Heli_Transport_02\data\Skins\Heli_Transport_02_ext_02_AAF_CO.paa", ///update texture
		"\A3_Aegis\air_f_Aegis\Heli_Transport_02\data\Heli_Transport_02_int_02_CO.paa"
	};
    textureList[] = 
    {
        AAF,1
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
		mag_xx(30Rnd_556x45_Stanag,4);
	};
	class TransportWeapons
	{
		weap_xx(arifle_Mk20C_F,2);
	};
};