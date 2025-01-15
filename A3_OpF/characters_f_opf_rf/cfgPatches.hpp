class CfgPatches
{
	class A3_Opf_Characters_F_Opf_RF
	{
		author = $STR_A3_A_Ravenholme;
		name = "Arma 3 Opposing Forces - Reaction Forces Characters";
		requiredAddons[] =
		{
			A3_Aegis_Characters_F_Aegis,
			A3_Opf_Data_F_Opf,
			A3_Opf_Characters_F_Opf,
            RF_Characters,
			A3_Characters_F_Enoch,
			A3_Characters_F_Heads,
			A3_Characters_F_Orange,
			A3_Characters_F_Tacops
		};
		requiredVersion = 0.1;
        skipWhenMissingDependencies = 1;
		units[] =
        {
			Opf_B_P_Soldier_Cmort_RF,
			Opf_O_P_M_Soldier_CMort_RF,
			Opf_O_S_Soldier_CMort_RF,
			Opf_O_S_Soldier_CQ_RF
        };
		weapons[] = {/* Auto-compiled by pboProject */};
	};
};