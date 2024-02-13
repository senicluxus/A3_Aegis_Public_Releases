class CfgPatches
{
	class A3_Aegis_Air_F_Aegis_Heli_Attack_04
	{
		addonRootClass = A3_Aegis_Air_F_Aegis;
		requiredAddons[] = {A3_Aegis_Air_F_Aegis};
		requiredVersion=0.1;
		units[]=
		{
			/* From "cfgEAF.hpp" */

			/* From "cfgION.hpp" */
			Aegis_B_ION_Heli_Attack_04_F,

			/* From "cfgOPFOR.hpp" */
			Aegis_O_A_Heli_Attack_04_F,

			/* From "cfgRaven.hpp" */
			Aegis_I_Raven_Heli_Attack_04_F,
			Aegis_O_Raven_Heli_Attack_04_F,

			/* From "cfgRUS.hpp" */
			Aegis_O_R_Heli_Attack_04_F,
			Aegis_O_R_Heli_Attack_04_ard_F,

			/* From "cfgSFIA.hpp"*/
			Aegis_O_SFIA_Heli_Attack_04_F
		};
		weapons[]={};
	};
};