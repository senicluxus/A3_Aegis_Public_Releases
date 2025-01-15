/* Ardistan */
class Atlas_I_AR_APC_Wheeled_04_cannon_v2_F: APC_Wheeled_04_base_v2_F
{
    author = $STR_A3_A_AveryTheKitty_and_Lakarak;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_I_AR_APC_Wheeled_04_cannon_v2_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TGuerrila;
	faction = Atlas_IND_AR_F;
	crew = Atlas_I_AR_Crew_F;
	typicalCargo[] = {Atlas_I_AR_Crew_F};
    textureList[] = {ardistan,1};
	hiddenSelectionsTextures[] =
    {
        "\A3_Atlas\Armor_F_Atlas\APC_Wheeled_04\Data\APC_Wheeled_04_body_ardi_CO.paa",
        "\A3_Atlas\Armor_F_Atlas\APC_Wheeled_04\Data\APC_Wheeled_04_body2_ardi_CO.paa",
        "\A3_Atlas\Armor_F_Atlas\APC_Wheeled_04\Data\apc_wheeled_04_sprut_turret_ardi_co.paa"
    };
    /* Inventory */
	class TransportWeapons
	{
		weap_xx(arifle_AKS_F,2);
	};
	class TransportMagazines
	{
		mag_xx(SmokeShell,2);
		mag_xx(SmokeShellBlue,2);
		mag_xx(30Rnd_545x39_Black_Mag_F,4);
	};
	class TransportItems
	{
		item_xx(FirstAidKit,10);
		item_xx(Toolkit,1);
		item_xx(Medikit,1);
	};
	class TransportBackpacks
	{
		bag_xx(B_FieldPack_owcamo,2);
	};
	
};
class Atlas_I_AR_Wheeled_04_export_F: APC_Wheeled_04_export_base_F
{
    author = $STR_A3_A_AveryTheKitty_Lukin_Lakarak;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_I_AR_Wheeled_04_export_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TGuerrila;
	faction = Atlas_IND_AR_F;
	crew = Atlas_I_AR_Crew_F;
	typicalCargo[] = {Atlas_I_AR_Crew_F};
    textureList[] = {ardistan,1};
	hiddenSelectionsTextures[] =
    {
        "\A3_Atlas\Armor_F_Atlas\APC_Wheeled_04\Data\APC_Wheeled_04_body_export_ardi_CO.paa",
        "\A3_Atlas\Armor_F_Atlas\APC_Wheeled_04\Data\APC_Wheeled_04_body2_ardi_CO.paa",
        "\A3_Atlas\Armor_F_Atlas\APC_Wheeled_04\data\btr100a_turret_ardi_co.paa"
    };
	/* Inventory */
	class TransportMagazines
	{
		mag_xx(30Rnd_545x39_Black_Mag_F,12);
		mag_xx(Aegis_45Rnd_545x39_Mag_Green_F,12);
		mag_xx(HandGrenade,6);
		mag_xx(MiniGrenade,6);
		mag_xx(1Rnd_HE_Grenade_shell,6);
		mag_xx(1Rnd_Smoke_Grenade_shell,3);
		mag_xx(1Rnd_SmokeBlue_Grenade_shell,3);
		mag_xx(1Rnd_SmokeOrange_Grenade_shell,3);
		mag_xx(1Rnd_SmokePurple_Grenade_shell,3);
		mag_xx(SmokeShell,8);
		mag_xx(SmokeShellBlue,8);
		mag_xx(SmokeShellOrange,8);
		mag_xx(SmokeShellPurple,8);
		mag_xx(RPG7_F,8);
		mag_xx(Titan_AA,2);
	};
	class TransportItems
	{
		item_xx(FirstAidKit,10);
		item_xx(Toolkit,1);
		item_xx(Medikit,1);
	};
	class TransportWeapons
	{
		weap_xx(Aegis_arifle_AKM74_F,2);
		weap_xx(Aegis_arifle_RPK74M_F,1);
		weap_xx(Aegis_launch_RPG7M_F,1);
	};
	class TransportBackpacks
	{
		bag_xx(B_FieldPack_ardi,2);
	};
};