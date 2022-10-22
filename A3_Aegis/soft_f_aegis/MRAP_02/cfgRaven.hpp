/* Raven Security - Indep */
class I_Raven_MRAP_02_F: O_R_MRAP_02_ard_F
{
    author = $STR_A3_A_Heliotrope;
    faction = IND_Raven_F;
	side = TGuerrila;
    crew = I_Raven_Soldier_F;
    typicalCargo[] =
    {
        I_Raven_Soldier_F,
        I_Raven_Soldier_F
    };
};
class I_Raven_MRAP_02_HMG_F: O_R_MRAP_02_hmg_ard_F
{
    author = $STR_A3_A_Heliotrope;
    faction = IND_Raven_F;
	side = TGuerrila;
    crew = I_Raven_Soldier_F;
    typicalCargo[] =
    {
        I_Raven_Soldier_F,
        I_Raven_Soldier_F
    };
};
class I_Raven_MRAP_02_GMG_F: O_R_MRAP_02_gmg_ard_F
{
    author = $STR_A3_A_Heliotrope;
    faction = IND_Raven_F;
	side = TGuerrila;
    crew = I_Raven_Soldier_F;
    typicalCargo[] =
    {
        I_Raven_Soldier_F,
        I_Raven_Soldier_F
    };
};

/* Raven Security - OPFOR */
class O_Raven_MRAP_02_F: I_Raven_MRAP_02_F
{
    faction = OPF_Raven_F;
	side = TEast;
    crew = O_Raven_Soldier_F;
    typicalCargo[] =
    {
        O_Raven_Soldier_F,
        O_Raven_Soldier_F
    };
};
class O_Raven_MRAP_02_HMG_F: I_Raven_MRAP_02_HMG_F
{
    faction = OPF_Raven_F;
	side = TEast;
    crew = O_Raven_Soldier_F;
    typicalCargo[] =
    {
        O_Raven_Soldier_F,
        O_Raven_Soldier_F
    };
};
class O_Raven_MRAP_02_GMG_F: I_Raven_MRAP_02_GMG_F
{
    faction = OPF_Raven_F;
	side = TEast;
    crew = O_Raven_Soldier_F;
    typicalCargo[] =
    {
        O_Raven_Soldier_F,
        O_Raven_Soldier_F
    };
};