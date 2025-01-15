class CfgPatches
{
	class A3_Aegis_Characters_F_Aegis_EF
	{
		author = $STR_A3_A_Ravenholme;
		name = "Arma 3 Aegis - Expedtionary Forces Characters";
		requiredAddons[] =
		{
			A3_Aegis_Characters_F_Aegis,
			A3_Aegis_Data_F_Aegis,
            EF_Data,
			EF_Marines,
			A3_Characters_F_Enoch,
			A3_Characters_F_Heads,
			A3_Characters_F_Orange,
			A3_Characters_F_Tacops
		};
		requiredVersion = 0.1;
        skipWhenMissingDependencies = 1;
		units[] =
        {
			/* From "cfgOPFOR.hpp" */
			Aegis_O_BoatCrew_EF,
			Aegis_O_T_BoatCrew_EF,

			/* From "cfgRUS.hpp" */
			Aegis_O_R_BoatCrew_EF
        };
		weapons[] = {/* Auto-compiled by pboProject */};
	};
};