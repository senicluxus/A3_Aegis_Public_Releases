/* FIA BLUFOR */
class Aegis_B_G_ZU23_lxWS_F: zu23_base_lxWS
{
	author = $STR_A3_A_Ravenholme;
   	editorPreview = "\A3_Aegis\Editorpreviews_f_Aegis\Data\CfgVehicles\Aegis_O_G_ZU23_lxWS_F.jpg";
    DLC = lxWS;
	scope = public;
	scopeCurator = public;
    side = TWest;
	faction = BLU_G_F;
    crew = B_G_Soldier_F;
    typicalCargo[] = {B_G_Soldier_F};
	textureList[] = {Green,1};
    hiddenSelectionsTextures[] = 
    {
        "lxws\vehicles_f_lxws\zu23\data\zu23_base_green_co.paa",
        "lxws\vehicles_f_lxws\zu23\data\zu23_green_co.paa",
        "lxws\vehicles_f_lxws\zu23\data\zu23_addon_1_green_co.paa",
        "lxws\vehicles_f_lxws\zu23\data\zu23_addon_2_green_co.paa"
    };
};

/* FIA INDEP */
class Aegis_I_G_ZU23_lxWS_F: Aegis_B_G_ZU23_lxWS_F
{
	author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Aegis\Editorpreviews_f_Aegis\Data\CfgVehicles\Aegis_O_G_ZU23_lxWS_F.jpg";
    DLC = lxWS;
	scope = public;
	scopeCurator = public;
	side = TGuerrila;
	faction = IND_G_F;
	crew = I_G_Soldier_F;
    typicalCargo[] = {I_G_Soldier_F};
};

/* FIA OPFOR */
class Aegis_O_G_ZU23_lxWS_F: Aegis_B_G_ZU23_lxWS_F
{
	author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Aegis\Editorpreviews_f_Aegis\Data\CfgVehicles\Aegis_O_G_ZU23_lxWS_F.jpg";
    DLC = lxWS;
	scope = public;
	scopeCurator = public;
	side = TEast;
	faction = OPF_G_F;
	crew = O_G_Soldier_F;
    typicalCargo[] = {O_G_Soldier_F};
};