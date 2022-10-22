class CfgPatches
{
    /* Definitions */
    #include "\A3_Aegis\macros_urls.hpp"

	class A3_Aegis_Air_F_Aegis
	{
		author = $STR_A3_A_AveryTheKitty;
		name = "Arma 3 Aegis - Aircrafts";
		url = linkAegis;
		requiredAddons[] = {A3_Aegis_Data_F_Aegis};
		requiredVersion = 0.1;
		units[] =
        {
            /* From "cfgBLUFOR.hpp" */
            B_Plane_Fighter_05_Cluster_F,
            B_T_Plane_CAS_01_Cluster_F,
            B_T_Plane_Fighter_01_Cluster_F,
            B_T_Plane_Fighter_05_Cluster_F,
            B_W_Plane_CAS_01_Cluster_F,
            B_W_Plane_Fighter_01_Cluster_F,
            B_W_Plane_Fighter_05_Cluster_F,
            B_A_Plane_Fighter_05_Cluster_F,
            B_A_Plane_Fighter_05_Cluster_tna_F,
            B_A_Plane_Fighter_05_Cluster_wdl_F,

            /* From "cfgOPFOR.hpp" */
            O_Plane_Fighter_03_Cluster_F,
            O_T_Plane_CAS_02_ghex_Cluster_F,
            O_T_Plane_Fighter_02_ghex_Cluster_F,
            O_A_Plane_Fighter_03_Cluster_F,

            /* From "cfgRUS.hpp" */
            O_R_Plane_CAS_02_Cluster_F,
            O_R_Plane_Fighter_02_Cluster_F,
            O_R_Plane_CAS_02_Cluster_ard_F,
            O_R_Plane_Fighter_02_Cluster_ard_F,

            /* From "cfgEAF.hpp" */
            I_E_Plane_Fighter_04_Cluster_F
        };
		weapons[] = {/* Automated */};
	};
};