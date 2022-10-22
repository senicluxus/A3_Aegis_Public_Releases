/* Syndikat */
class Box_Syndicate_Wps_F: ReammoBox_F
{
    editorSubcategory = EdSubcat_Ammo_Syndicate;
};
class Box_Syndicate_Ammo_F: ReammoBox_F
{
    editorSubcategory = EdSubcat_Ammo_Syndicate;
    
    /* Inventory */
	class TransportMagazines
	{
        mag_xx(30Rnd_762x39_Mag_F,24);
        mag_xx(30Rnd_762x39_AK12_Mag_F,24);
        mag_xx(30Rnd_545x39_Mag_F,12);
        mag_xx(200Rnd_556x45_Box_F,4);
        mag_xx(10Rnd_9x21_Mag,6);
        mag_xx(1Rnd_HE_Grenade_shell,6);
        mag_xx(RPG7_F,1);
        delete _xx_HandGrenade;
        mag_xx(HandGrenade_Guer,12);
        delete _xx_MiniGrenade;
    };
};
class Box_Syndicate_WpsLaunch_F: ReammoBox_F
{
    editorSubcategory = EdSubcat_Ammo_Syndicate;
};