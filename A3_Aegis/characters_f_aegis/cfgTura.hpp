/* Tura */
class I_Tura_deserter_lxWS;
class I_Tura_Soldier_UAV_lxWS: I_Tura_deserter_lxWS
{
    linkedItems[] = 
    {
        V_lxWS_HarnessO_oli,
        lxWS_H_turban_03_green,
        I_UAVTerminal,
        DefaultManGuerillaLinkedItems
    };
    respawnLinkedItems[] =
    {
        V_lxWS_HarnessO_oli,
        lxWS_H_turban_03_green,
        I_UAVTerminal,
        DefaultManGuerillaLinkedItems
    };
};
class B_Tura_deserter_lxWS;
class B_Tura_Soldier_UAV_lxWS: B_Tura_deserter_lxWS
{
    linkedItems[] = 
    {
        V_lxWS_HarnessO_oli,
        lxWS_H_turban_03_green,
        B_UAVTerminal,
        DefaultManGuerillaLinkedItems
    };
    respawnLinkedItems[] =
    {
        V_lxWS_HarnessO_oli,
        lxWS_H_turban_03_green,
        B_UAVTerminal,
        DefaultManGuerillaLinkedItems
    };
};
class O_Tura_deserter_lxWS;
class O_Tura_Soldier_UAV_lxWS: O_Tura_deserter_lxWS
{
    linkedItems[] = 
    {
        V_lxWS_HarnessO_oli,
        lxWS_H_turban_03_green,
        O_UAVTerminal,
        DefaultManGuerillaLinkedItems
    };
    respawnLinkedItems[] =
    {
        V_lxWS_HarnessO_oli,
        lxWS_H_turban_03_green,
        O_UAVTerminal,
        DefaultManGuerillaLinkedItems
    };
};

// Heavy Gunner (GPMG)
class I_Tura_HeavyGunner_lxWS;
class Aegis_I_Tura_HeavyGunner_2_lxWS: I_Tura_HeavyGunner_lxWS
{
    author = $STR_A3_A_Ravenholme;
    editorPreview="\A3_Aegis\Editorpreviews_F_Aegis\Data\CfgVehicles\Aegis_I_Tura_HeavyGunner_2_lxWS.jpg";
    displayName = $STR_A3_A_CfgVehicles_I_Tura_HeavyGunner_2_lxWS0;
    uniformClass = U_lxWS_Djella_B_02_Sand;
    model = "lxws\characters_f_lxws\uniform\djellaba\djellaba_02_lxWS.p3d";
    hiddenSelections[] = {"camo1", "camo2"};
    hiddenSelectionsTextures[] = 
    {
      "lxws\characters_f_lxws\uniform\djellaba\data\lxWS_djellaba_shirt_sand_co.paa",
      "lxws\characters_f_lxws\uniform\djellaba\data\lxWS_djellaba_pants_sand_co.paa"
    };
    backpack = Aegis_B_FieldPack_cbr_Tura_HG2;
    headgearList[]=
	{
		lxWS_H_turban_02_sand,2,
		lxWS_H_turban_03_sand,5,
		lxWS_H_turban_03_red,0.5,
		lxWS_H_turban_03_orange,1
	};
	linkedItems[]=
	{
		Aegis_V_Ammo_Bandolier_F,
		lxWS_H_turban_02_sand,
		DefaultManGuerillaLinkedItems
	};
	respawnLinkedItems[]=
	{
		Aegis_V_Ammo_Bandolier_F,
		lxWS_H_turban_02_sand,
		DefaultManGuerillaLinkedItems
	};
	weapons[]=
	{
		Aegis_MMG_FNMAG_old_F,
		DefaultManWeapons
	};
	respawnWeapons[]=
	{
		Aegis_MMG_FNMAG_old_F,
		DefaultManWeapons
	};
	magazines[]=
	{
		mag_2(Aegis_200Rnd_762x51_MAG_Green_F),
		HandGrenade,
		SmokeShell,
		SmokeShellGreen,
		Chemlight_green,
		Chemlight_green
	};
	respawnMagazines[]=
	{
		mag_2(Aegis_200Rnd_762x51_MAG_Green_F),
		HandGrenade,
		SmokeShell,
		SmokeShellGreen,
		Chemlight_green,
		Chemlight_green
	};
};
class Aegis_B_Tura_HeavyGunner_2_lxWS: Aegis_I_Tura_HeavyGunner_2_lxWS
{
    faction = BLU_TURA_lxWS;
    side = TWest;
};
class Aegis_O_Tura_HeavyGunner_2_lxWS: Aegis_I_Tura_HeavyGunner_2_lxWS
{
    faction = OPF_TURA_lxWS;
    side = TEast;
};

/* Assassin (DMR) - SVD */
class I_SFIA_scout_lxWS;
class Aegis_I_Tura_Soldier_M_lxWS: I_SFIA_scout_lxWS
{
    author = $STR_A3_A_Ravenholme;
    class SpeechVariants
	{
		class Default
		{
			speechSingular[] = {veh_infantry_sniper_s};
			speechPlural[] = {veh_infantry_sniper_p};
		};
	};
	textSingular = $STR_A3_nameSound_veh_infantry_sniper_s;
	textPlural = $STR_A3_nameSound_veh_infantry_sniper_p;
	nameSound = veh_infantry_sniper_s;
   editorPreview="\A3_Aegis\Editorpreviews_F_Aegis\Data\CfgVehicles\Aegis_B_Tura_Soldier_M_lxWS.jpg";
    displayName = $STR_A3_A_CfgVehicles_I_C_Soldier_M_F0;
    model = "lxws\characters_f_lxws\uniform\djellaba\djellaba_03_lxWS.p3d";
    hiddenSelections[] = {"camo1", "camo2"};
    hiddenSelectionsTextures[] = 
    {
      "lxws\characters_f_lxws\uniform\djellaba\data\lxWS_djellaba_shirt_green_co.paa",
      "lxws\characters_f_lxws\uniform\djellaba\data\lxWS_djellaba_pants_grey_co.paa"
    };
    uniformClass = U_lxWS_Djella_03_Green;
    headgearList[]=
	{
		lxWS_H_turban_02_green_pattern,2,
		lxWS_H_turban_03_green,5,
		lxWS_H_turban_04_green,0.5,
		lxWS_H_turban_02_green,1
	};
	linkedItems[]=
	{
		Aegis_V_ChestRigEast_Tan_F,
		lxWS_H_turban_03_green,
		DefaultManGuerillaLinkedItems
	};
	respawnLinkedItems[]=
	{
		Aegis_V_ChestRigEast_Tan_F,
		lxWS_H_turban_03_green,
		DefaultManGuerillaLinkedItems
	};
	weapons[]=
	{
		Aegis_srifle_SVD_KHS_old_F,
		DefaultManWeapons,
        Binocular
	};
	respawnWeapons[]=
	{
		Aegis_srifle_SVD_KHS_old_F,
		DefaultManWeapons,
        Binocular
	};
	magazines[]=
	{
		mag_6(Aegis_10Rnd_762x54_SVD_Yellow_Mag_F),
		HandGrenade,
		SmokeShell
    };
	respawnMagazines[]=
	{
		mag_6(Aegis_10Rnd_762x54_SVD_Yellow_Mag_F),
		HandGrenade,
		SmokeShell
	};
};
class Aegis_B_Tura_Soldier_M_lxWS: Aegis_I_Tura_Soldier_M_lxWS
{
    faction = BLU_TURA_lxWS;
    side = TWest;
};
class Aegis_O_Tura_Soldier_M_lxWS: Aegis_I_Tura_Soldier_M_lxWS
{
    faction = OPF_TURA_lxWS;
    side = TEast;
};