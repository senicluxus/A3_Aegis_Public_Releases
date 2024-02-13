/* LDF - BLUFOR */
class I_E_HMG_01_F;
class I_E_HMG_01_high_F;
class I_E_HMG_01_A_F;
class Aegis_B_E_HMG_01_F: I_E_HMG_01_F
{
	author = $STR_A3_A_Ravenholme;
	side = TWest;
	faction = BLU_EAF_F;
	crew = Aegis_B_E_Soldier_F;
};
class Aegis_B_E_HMG_01_high_F: I_E_HMG_01_high_F
{
	author = $STR_A3_A_Ravenholme;
	side = TWest;
	faction = BLU_EAF_F;
	crew = Aegis_B_E_Soldier_F;
};
class Aegis_B_E_HMG_01_A_F: I_E_HMG_01_A_F
{
	author = $STR_A3_A_Ravenholme;
	side = TWest;
	faction = BLU_EAF_F;
	crew = B_UAV_AI;
    class AssembleInfo
		{
			displayName = "";
			assembleTo = "";
			base = "";
			primary = 0;
			dissasembleTo[] = {"Aegis_B_E_HMG_01_A_Weapon_F","I_E_HMG_01_support_F"};
		};
};
class Aegis_B_E_HMG_01_A_Weapon_F: I_E_HMG_01_A_Weapon_F
{
	author = $STR_A3_A_Ravenholme;
	scope = protected;
	displayName = $STR_A3_C_I_E_HMG_01_A_Weapon_F0;
	faction = BLU_EAF_F;
	class assembleInfo: assembleInfo
	{
			assembleTo = "Aegis_B_E_HMG_01_A_F";
	};
};