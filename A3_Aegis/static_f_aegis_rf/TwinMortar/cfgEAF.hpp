/* LDF */
class Aegis_I_E_TwinMortar_RF: B_T_TwinMortar_RF
{
    side = TGuerrila;
	faction = IND_E_F;
	crew = I_UAV_AI;
	typicalCargo[] = {I_UAV_AI};    
};

/* LDF (Arid) */
class Aegis_I_E_TwinMortar_ard_RF: B_TwinMortar_RF
{
    //editorPreview = "\A3_Aegis\Editorpreviews_F_Aegis\Data\CfgVehicles\Aegis_B_D_TwinMortar_RF.jpg";
    side = TGuerrila;
	faction = IND_E_ard_F;
	crew = I_UAV_AI;
	typicalCargo[] = {I_UAV_AI};    
    textureList[] = {Tan, 1};
};

/* LDF (BLUFOR) */
class Aegis_B_E_TwinMortar_RF: B_T_TwinMortar_RF
{
    faction = BLU_EAF_F;
};
class Aegis_B_E_TwinMortar_ard_RF: B_TwinMortar_RF
{
    //editorPreview = "\A3_Aegis\Editorpreviews_F_Aegis\Data\CfgVehicles\Aegis_B_D_TwinMortar_RF.jpg";
    faction = BLU_EAF_ard_F;
    textureList[] = {Tan, 1};
};