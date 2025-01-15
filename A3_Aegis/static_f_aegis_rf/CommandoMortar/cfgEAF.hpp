/* LDF (Arid) */
class Aegis_I_E_CommandoMortar_ard_RF: B_D_CTRG_CommandoMortar_RF
{
    author = $STR_A3_A_Ravenholme;
    side = TGuerrila;
	faction = IND_E_ard_F;
    crew = I_E_Soldier_ard_F;
};

/* LDF (BLUFOR) */
class Aegis_B_E_CommandoMortar_RF: I_E_CommandoMortar_RF
{
    author = $STR_A3_A_Ravenholme;
	side = TWest;
	faction = BLU_EAF_F;
	crew = Aegis_B_E_Soldier_F;
};
class Aegis_B_E_CommandoMortar_ard_RF: Aegis_I_E_CommandoMortar_ard_RF
{
    author = $STR_A3_A_Ravenholme;
	side = TWest;
    faction = BLU_EAF_ard_F;
    crew = Aegis_B_E_Soldier_ard_F;
};