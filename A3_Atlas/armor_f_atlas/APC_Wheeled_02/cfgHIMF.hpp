class Atlas_B_H_APC_Wheeled_02_unarmed_lxWS: APC_Wheeled_02_unarmed_base_lxws
{
   scope = public;
   scopeCurator = public;
   editorPreview = "\A3_Atlas\editorpreviews_f_Atlas\Data\CfgVehicles\Atlas_B_H_APC_Wheeled_02_unarmed_lxWS.jpg";
   faction = Atlas_BLU_H_F;
   side = TWest;
   crew = Atlas_B_H_Crew_F;
   typicalCargo[] = {Atlas_B_H_Crew_F};
   textureList[] = {HIMF,1};
    hiddenSelectionsTextures[] = 
    {
        "\A3_Atlas\Armor_F_Atlas\APC_Wheeled_02\Data\apc_wheeled_02_ext_01_HIMF_CO.paa",
      	"\A3_Atlas\Armor_F_Atlas\APC_Wheeled_02\Data\apc_wheeled_02_ext_02_HIMF_CO.paa",
      	"\A3_Aegis\Armor_F_Aegis\Data\camonet_RUS_green_CO.paa",
      	"\A3_Aegis\Armor_F_Aegis\Data\cage_RUkhk_CO.paa",
      	"\A3_Atlas\Armor_F_Atlas\APC_Wheeled_02\data\apc_wheeled_02_adds_02_HIMF_CO.paa"
    };
   animationList[] = {"showBags",0,"showCanisters",0,"showTools",0,"showCamonetHull",0,"showSLATHull",0};
   class TransportWeapons
    {
        weap_xx(Aegis_arifle_M16A4_FG_F,2);
    };
    class TransportMagazines
    {
        mag_xx(30Rnd_556x45_stanag_red,8);
        mag_xx(20Rnd_762x51_Mag,6);
        mag_xx(200Rnd_556x45_Box_Red_F,4);
        mag_xx(HandGrenade,4);
        mag_xx(1Rnd_HE_Grenade_shell,6);
        mag_xx(1Rnd_Smoke_Grenade_shell,8);
        mag_xx(SmokeShell,8);
        mag_xx(SmokeShellRed,8);
        mag_xx(SmokeShellOrange,8);
        mag_xx(SmokeShellYellow,8);
        mag_xx(MRAWS_HEAT55_F,5);
    };
    class TransportBackpacks
    {
        bag_xx(B_TacticalPack_oli,2);
    };
};
class Atlas_B_H_APC_Wheeled_02_hmg_lxWS: APC_Wheeled_02_hmg_base_lxws
{
   scope = public;
   scopeCurator = public;
   editorPreview = "\A3_Atlas\editorpreviews_f_Atlas\Data\CfgVehicles\Atlas_B_H_APC_Wheeled_02_hmg_lxWS.jpg";
   faction = Atlas_BLU_H_F;
   side = TWest;
   crew = Atlas_B_H_Crew_F;
   typicalCargo[] = {Atlas_B_H_Crew_F};
   textureList[] = {HIMF,1};
    hiddenSelectionsTextures[] = 
    {
        "\A3_Atlas\Armor_F_Atlas\APC_Wheeled_02\Data\apc_wheeled_02_ext_01_HIMF_CO.paa",
      	"\A3_Atlas\Armor_F_Atlas\APC_Wheeled_02\Data\apc_wheeled_02_ext_02_HIMF_CO.paa",
      	"\A3_Atlas\Armor_F_Atlas\APC_Wheeled_02\data\apc_wheeled_02_adds_01_HIMF_CO.paa",
      	"\A3_Aegis\Armor_F_Aegis\Data\camonet_RUS_green_CO.paa",
      	"\A3_Aegis\Armor_F_Aegis\Data\cage_RUkhk_CO.paa",
      	"\A3_Atlas\Armor_F_Atlas\APC_Wheeled_02\data\apc_wheeled_02_adds_02_HIMF_CO.paa"
    };
   class Turrets : Turrets
   {
      class MainTurret : MainTurret{};
      class mg_station : mg_station
      {
        gunnerType = Atlas_B_H_Crew_F;
        magazines[] = {mag_4("100Rnd_127x99_mag_Tracer_Red")};
      };
   };
   animationList[] = {"showBags",0,"showCanisters",0,"showTools",0,"showCamonetHull",0,"showSLATHull",0, "mg_hide_armor_front",0, "mg_hide_armor_rear",0, "mg_Hide_Rail", 0};
   class TransportWeapons
    {
        weap_xx(Aegis_arifle_M16A4_FG_F,2);
    };
    class TransportMagazines
    {
        mag_xx(30Rnd_556x45_stanag_red,8);
        mag_xx(20Rnd_762x51_Mag,6);
        mag_xx(200Rnd_556x45_Box_Red_F,4);
        mag_xx(HandGrenade,4);
        mag_xx(1Rnd_HE_Grenade_shell,6);
        mag_xx(1Rnd_Smoke_Grenade_shell,8);
        mag_xx(SmokeShell,8);
        mag_xx(SmokeShellRed,8);
        mag_xx(SmokeShellOrange,8);
        mag_xx(SmokeShellYellow,8);
        mag_xx(MRAWS_HEAT55_F,5);
    };
    class TransportBackpacks
    {
        bag_xx(B_TacticalPack_oli,2);
    };
};