/* Civilians */
class C_Boat_Civil_02_F: Boat_Civil_02_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\C_Boat_Civil_02_F.jpg";
	scope = public;
	crew = C_Man_Fisherman_01_F;
	side = TCivilian;
	faction = CIV_F;
	typicalCargo[] = {C_Man_Fisherman_01_F};
	textureList[] =
	{
		Red,1,
		Blue,1
	};
};

/* Malden */
class Aegis_C_Boat_Civil_02_F_Malden: C_Boat_Civil_02_F
{
	faction = Aegis_CIV_MA_F;
    crew = Aegis_C_Man_Fisherman_01_F_malden;
    typicalCargo[] =
	{
		Aegis_C_Man_Fisherman_01_F_malden
	};
};

/* Tanoa */
class Aegis_C_Boat_Civil_02_F_Tanoa: C_Boat_Civil_02_F
{
	faction = Aegis_CIV_HI_F;
    crew = Aegis_C_Man_Fisherman_01_F_Tanoan;
    typicalCargo[] =
	{
		Aegis_C_Man_Fisherman_01_F_Tanoan
	};
};