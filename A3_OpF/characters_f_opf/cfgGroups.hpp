#define GROUP_UNIT(a,b,c,d,e,f) \
	class Unit##a## \
	{ \
		side = ##b##; \
		vehicle = ##c##; \
		rank = ##d##; \
		position[] = {##e##,##f##,0}; \
	};

class CfgGroups
{
	class West
	{
		name = $STR_A3_CfgGroups_West0;
		side = TWest;
		class Opf_BLU_P_F
		{
			name = $STR_A3_O_CfgFactionClasses_BLU_P_F0;
			class Infantry
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Infantry0;
				class Opf_B_P_InfSquad
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSquad0;
					side = TWest;
					faction = Opf_BLU_P_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TWest,Opf_B_P_soldier_SL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,Opf_B_P_soldier_F,PRIVATE,5,-5);
					GROUP_UNIT(2,TWest,Opf_B_P_soldier_LAT_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TWest,Opf_B_P_Soldier_M_F,PRIVATE,10,-10);
					GROUP_UNIT(4,TWest,Opf_B_P_soldier_TL_F,SERGEANT,-10,-10);
					GROUP_UNIT(5,TWest,Opf_B_P_soldier_AR_F,CORPORAL,15,-15);
					GROUP_UNIT(6,TWest,Opf_B_P_Soldier_A_F,PRIVATE,-15,-15);
					GROUP_UNIT(7,TWest,Opf_B_P_medic_F,PRIVATE,20,-20);
				};
				class Opf_B_P_InfSquad_Weapons
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSquad_Weapons0;
					side = TWest;
					faction = Opf_BLU_P_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TWest,Opf_B_P_soldier_SL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,Opf_B_P_soldier_AR_F,PRIVATE,5,-5);
					GROUP_UNIT(2,TWest,Opf_B_P_Soldier_GL_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TWest,Opf_B_P_Soldier_M_F,SERGEANT,10,-10);
					GROUP_UNIT(4,TWest,Opf_B_P_soldier_AT_F,CORPORAL,-10,-10);
					GROUP_UNIT(5,TWest,Opf_B_P_soldier_LAT_F,PRIVATE,15,-15);
					GROUP_UNIT(6,TWest,Opf_B_P_soldier_A_F,PRIVATE,-15,-15);
					GROUP_UNIT(7,TWest,Opf_B_P_medic_F,PRIVATE,20,-20);
				};
				class Opf_B_P_InfTeam
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam0;
					side = TWest;
					faction = Opf_BLU_P_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TWest,Opf_B_P_Soldier_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,Opf_B_P_Soldier_AR_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,Opf_B_P_Soldier_GL_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TWest,Opf_B_P_Soldier_LAT_F,PRIVATE,10,-10);
				};
				class Opf_B_P_InfTeam_AT
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam_AT0;
					side = TWest;
					faction = Opf_BLU_P_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TWest,Opf_B_P_Soldier_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,Opf_B_P_Soldier_AT_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,Opf_B_P_Soldier_LAT_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TWest,Opf_B_P_Soldier_LAT_F,PRIVATE,10,-10);
				};
				class Opf_B_P_InfSentry
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSentry0;
					side = TWest;
					faction = Opf_BLU_P_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TWest,Opf_B_P_Soldier_GL_F,CORPORAL,0,0);
					GROUP_UNIT(1,TWest,Opf_B_P_Soldier_F,PRIVATE,5,-5);
				};
				class Opf_B_P_ReconSentry
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_ReconSentry0;
					side = TWest;
					faction = Opf_BLU_P_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_recon.paa";
					GROUP_UNIT(0,TWest,Opf_B_P_Soldier_M_F,CORPORAL,0,0);
					GROUP_UNIT(1,TWest,Opf_B_P_Soldier_F,PRIVATE,5,-5);
				};
				class Opf_B_P_SniperTeam_M
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_SniperTeam0;
					side = TWest;
					faction = Opf_BLU_P_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_recon.paa";
					GROUP_UNIT(0,TWest,Opf_B_P_Sharpshooter_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,Opf_B_P_Soldier_M_F,CORPORAL,5,-5);
				};
			};
			class Support
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Support0;
				class Opf_B_P_Support_CLS
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Support_BUS_Support_CLS0;
					side = TWest;
					faction = Opf_BLU_P_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TWest,Opf_B_P_Soldier_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,Opf_B_P_Soldier_AR_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,Opf_B_P_medic_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TWest,Opf_B_P_medic_F,PRIVATE,10,-10);
				};
				class Opf_B_P_Support_EOD
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Support_BUS_Support_EOD0;
					side = TWest;
					faction = Opf_BLU_P_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TWest,Opf_B_P_Soldier_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,Opf_B_P_engineer_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,Opf_B_P_Soldier_exp_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TWest,Opf_B_P_Soldier_exp_F,PRIVATE,10,-10);
				};
				class Opf_B_P_Support_ENG
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Support_BUS_Support_ENG0;
					side = TWest;
					faction = Opf_BLU_P_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TWest,Opf_B_P_Soldier_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,Opf_B_P_Soldier_AR_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,Opf_B_P_engineer_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TWest,Opf_B_P_engineer_F,PRIVATE,10,-10);
				};
			};
			class Motorized_MTP
			{
				name = $STR_A3_CfgGroups_Indep_Guerilla_Motorized_MTP0;
				class Opf_B_P_MotInf_Team
				{
					name = $STR_A3_CfgGroups_Indep_Guerilla_Motorized_MTP_IRG_MotInfTeam0;
					side = TWest;
					faction = Opf_BLU_P_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_motor_inf.paa";
					GROUP_UNIT(0,TWest,Opf_B_P_Offroad_01_F,LIEUTENANT,0,0);
					GROUP_UNIT(1,TWest,Opf_B_P_Soldier_TL_F,SERGEANT,5,-5);
					GROUP_UNIT(2,TWest,Opf_B_P_Soldier_AR_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TWest,Opf_B_P_Soldier_LAT_F,CORPORAL,10,-10);
					GROUP_UNIT(4,TWest,Opf_B_P_medic_F,CORPORAL,-10,-10);
					GROUP_UNIT(5,TWest,Opf_B_P_Soldier_F,CORPORAL,15,-15);
				};
				class Opf_B_P_Technicals
				{
					name = $STR_A3_CfgGroups_Indep_Guerilla_Motorized_MTP_IRG_Technicals0;
					side = TWest;
					faction = Opf_BLU_P_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_motor_inf.paa";
					GROUP_UNIT(0,TWest,Opf_B_P_Offroad_01_armed_F,LIEUTENANT,0,0);
					GROUP_UNIT(1,TWest,Opf_B_P_Offroad_01_armed_F,SERGEANT,10,-10);
					GROUP_UNIT(2,TWest,Opf_B_P_Offroad_01_AT_F,CORPORAL,-10,-10);
				};
			};
			class Mechanized
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Mechanized0;
				class Opf_B_P_MechInfSquad
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Mechanized_BUS_MechInfSquad0;
					side = TWest;
					faction = Opf_BLU_P_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_mech_inf.paa";
					GROUP_UNIT(0,TWest,Opf_B_P_APC_Wheeled_03_cannon_F,LIEUTENANT,0,0);
					GROUP_UNIT(1,TWest,Opf_B_P_soldier_SL_F,SERGEANT,5,-5);
					GROUP_UNIT(2,TWest,Opf_B_P_Soldier_LAT_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TWest,Opf_B_P_Soldier_M_F,PRIVATE,10,-10);
					GROUP_UNIT(4,TWest,Opf_B_P_Soldier_TL_F,SERGEANT,-10,-10);
					GROUP_UNIT(5,TWest,Opf_B_P_Soldier_AR_F,CORPORAL,15,-15);
					GROUP_UNIT(6,TWest,Opf_B_P_medic_F,PRIVATE,-15,-15);
				};
			};
		};
	};
	class East
	{
		name = $STR_A3_CfgGroups_East0;
		side = TEast;
		class Opf_OPF_P_F
		{
		  	name = $STR_A3_O_CfgFactionClasses_OPF_P_F0;
			class InfantryMilitants
			{
				name = $STR_A3_O_CfgGroups_East_OPF_P_Militants0;
				class Opf_O_P_InfSquad
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSquad0;
					side = TEast;
					faction = Opf_OPF_P_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TEast,Opf_O_P_soldier_TL_F,SERGEANT,0,0)
					GROUP_UNIT(1,TEast,Opf_O_P_soldier_1_F,PRIVATE,5,-5)
					GROUP_UNIT(2,TEast,Opf_O_P_soldier_LAT_F,CORPORAL,-5,-5)
					GROUP_UNIT(3,TEast,Opf_O_P_soldier_M_F,PRIVATE,10,-10)
					GROUP_UNIT(4,TEast,Opf_O_P_soldier_GL_F,SERGEANT,-10,-10)
					GROUP_UNIT(5,TEast,Opf_O_P_soldier_AR_F,CORPORAL,15,-15)
					GROUP_UNIT(6,TEast,Opf_O_P_soldier_exp_F,PRIVATE,-15,-15)
					GROUP_UNIT(7,TEast,Opf_O_P_medic_F,PRIVATE,20,-20)
				};
				class Opf_O_P_InfTeam
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam0;
					side = TEast;
					faction = Opf_OPF_P_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TEast,Opf_O_P_soldier_TL_F,SERGEANT,0,0)
					GROUP_UNIT(1,TEast,Opf_O_P_soldier_AR_F,PRIVATE,5,-5)
					GROUP_UNIT(2,TEast,Opf_O_P_soldier_GL_F,CORPORAL,-5,-5)
					GROUP_UNIT(3,TEast,Opf_O_P_soldier_LAT_F,PRIVATE,10,-10)
				};
				class Opf_O_P_InfSentry
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSentry0;
					side = TEast;
					faction = Opf_OPF_P_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(2,TEast,Opf_O_P_soldier_GL_F,CORPORAL,0,0)
					GROUP_UNIT(3,TEast,Opf_O_P_soldier_1_F,PRIVATE,5,-5)
				};
            };
			class Infantry
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Infantry0;
				class Opf_O_P_M_InfSquad
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSquad0;
					side = TEast;
					faction = Opf_OPF_P_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TEast,Opf_O_P_M_soldier_2_F,SERGEANT,0,0)
					GROUP_UNIT(1,TEast,Opf_O_P_M_soldier_1_F,PRIVATE,5,-5)
					GROUP_UNIT(2,TEast,Opf_O_P_M_soldier_5_F,CORPORAL,-5,-5)
					GROUP_UNIT(3,TEast,Opf_O_P_M_soldier_7_F,PRIVATE,10,-10)
					GROUP_UNIT(4,TEast,Opf_O_P_M_soldier_6_F,SERGEANT,-10,-10)
					GROUP_UNIT(5,TEast,Opf_O_P_M_soldier_4_F,CORPORAL,15,-15)
					GROUP_UNIT(6,TEast,Opf_O_P_M_soldier_8_F,PRIVATE,-15,-15)
					GROUP_UNIT(7,TEast,Opf_O_P_M_Soldier_3_F,PRIVATE,20,-20)
				};
				class Opf_O_P_M_InfTeam
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam0;
					side = TEast;
					faction = Opf_OPF_P_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TEast,Opf_O_P_M_soldier_2_F,SERGEANT,0,0)
					GROUP_UNIT(1,TEast,Opf_O_P_M_soldier_4_F,PRIVATE,5,-5)
					GROUP_UNIT(2,TEast,Opf_O_P_M_soldier_6_F,CORPORAL,-5,-5)
					GROUP_UNIT(3,TEast,Opf_O_P_M_soldier_5_F,PRIVATE,10,-10)
				};
				class Opf_O_P_M_InfSentry
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSentry0;
					side = TEast;
					faction = Opf_OPF_P_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(2,TEast,Opf_O_P_M_soldier_6_F,CORPORAL,0,0)
					GROUP_UNIT(3,TEast,Opf_O_P_M_soldier_1_F,PRIVATE,5,-5)
				};
            };
			class Motorized_MTP
			{
				name = $STR_A3_CfgGroups_Indep_Guerilla_Motorized_MTP0;
				class Opf_O_P_MotInf_Team
				{
					name = $STR_A3_CfgGroups_Indep_Guerilla_Motorized_MTP_IRG_MotInfTeam0;
					side = TEast;
					faction = Opf_OPF_P_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_motor_inf.paa";
					GROUP_UNIT(0,TEast,Opf_O_P_Offroad_01_F,LIEUTENANT,0,0)
					GROUP_UNIT(1,TEast,Opf_O_P_M_Soldier_2_F,SERGEANT,5,-5)
					GROUP_UNIT(2,TEast,Opf_O_P_M_Soldier_4_F,CORPORAL,-5,-5)
					GROUP_UNIT(3,TEast,Opf_O_P_M_Soldier_5_F,CORPORAL,10,-10)
					GROUP_UNIT(4,TEast,Opf_O_P_M_Soldier_3_F,CORPORAL,-10,-10)
					GROUP_UNIT(5,TEast,Opf_O_P_M_Soldier_1_F,CORPORAL,15,-15)
				};
				class Opf_O_P_Technicals
				{
					name = $STR_A3_CfgGroups_Indep_Guerilla_Motorized_MTP_IRG_Technicals0;
					side = TEast;
					faction = Opf_OPF_P_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_motor_inf.paa";
					GROUP_UNIT(0,TEast,Opf_O_P_Offroad_01_armed_F,LIEUTENANT,0,0)
					GROUP_UNIT(1,TEast,Opf_O_P_Offroad_01_armed_F,SERGEANT,10,-10)
					GROUP_UNIT(2,TEast,Opf_O_P_Offroad_01_AT_F,CORPORAL,-10,-10)
				};
			};
			class Mechanized
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Mechanized0;
				class Opf_O_P_MechInfSquad
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Mechanized_BUS_MechInfSquad0;
					side = TEast;
					faction = Opf_OPF_P_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_mech_inf.paa";
					GROUP_UNIT(0,TEast,Opf_O_P_APC_Wheeled_04_export_F,LIEUTENANT,0,0);
					GROUP_UNIT(1,TEast,Opf_O_P_M_soldier_2_F,SERGEANT,5,-5);
					GROUP_UNIT(2,TEast,Opf_O_P_M_Soldier_5_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TEast,Opf_O_P_M_Soldier_7_F,PRIVATE,10,-10);
					GROUP_UNIT(4,TEast,Opf_O_P_M_Soldier_6_F,SERGEANT,-10,-10);
					GROUP_UNIT(5,TEast,Opf_O_P_M_Soldier_4_F,CORPORAL,15,-15);
					GROUP_UNIT(6,TEast,Opf_O_P_M_Soldier_3_F,PRIVATE,-15,-15);
				};
			};
		};
		class Opf_OPF_S_F
		{
		  	name = $STR_A3_O_CfgFactionClasses_OPF_S_F0;
			class Infantry
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Infantry0;
				class SeparatistFireTeam
				{
					name = "Separatist Fire Team";
					side = TEast;
					faction = Opf_OPF_S_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TEast,Opf_O_S_Soldier_2_F,SERGEANT,0,0)
					GROUP_UNIT(1,TEast,Opf_O_S_Soldier_4_F,PRIVATE,5,-5)
					GROUP_UNIT(2,TEast,Opf_O_S_Soldier_1_F,CORPORAL,-5,-5)
					GROUP_UNIT(3,TEast,Opf_O_S_Soldier_3_F,PRIVATE,10,-10)
				};
				class SeparatistShockTeam
				{
					name = "Separatist Shock Team";
					side = TEast;
					faction = Opf_OPF_S_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TEast,Opf_O_S_Soldier_6_F,SERGEANT,0,0)
					GROUP_UNIT(1,TEast,Opf_O_S_Soldier_5_F,PRIVATE,5,-5)
					GROUP_UNIT(2,TEast,Opf_O_S_Soldier_7_F,CORPORAL,-5,-5)
					GROUP_UNIT(3,TEast,Opf_O_S_Soldier_8_F,PRIVATE,10,-10)
				};
				class SeparatistCombatGroup
				{
					name = "Separatist Combat Group";
					side = TEast;
					faction = Opf_OPF_S_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TEast,Opf_O_S_Soldier_2_F,SERGEANT,0,0)
					GROUP_UNIT(1,TEast,Opf_O_S_Soldier_4_F,PRIVATE,5,-5)
					GROUP_UNIT(2,TEast,Opf_O_S_Soldier_6_F,CORPORAL,-5,-5)
					GROUP_UNIT(3,TEast,Opf_O_S_Soldier_1_F,PRIVATE,10,-10)
					GROUP_UNIT(4,TEast,Opf_O_S_Soldier_7_F,SERGEANT,-10,-10)
					GROUP_UNIT(5,TEast,Opf_O_S_Soldier_5_F,CORPORAL,15,-15)
					GROUP_UNIT(6,TEast,Opf_O_S_Soldier_8_F,PRIVATE,-15,-15)
					GROUP_UNIT(7,TEast,Opf_O_S_Soldier_3_F,PRIVATE,20,-20)
				};
            };
			class Motorized_MTP
			{
				name = $STR_A3_CfgGroups_Indep_Guerilla_Motorized_MTP0;
				class Opf_O_S_MotInf_Team
				{
					name = $STR_A3_CfgGroups_Indep_Guerilla_Motorized_MTP_IRG_MotInfTeam0;
					side = TEast;
					faction = Opf_OPF_S_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_motor_inf.paa";
					GROUP_UNIT(0,TEast,Opf_O_S_Offroad_01_F,LIEUTENANT,0,0)
					GROUP_UNIT(1,TEast,Opf_O_S_Soldier_2_F,SERGEANT,5,-5)
					GROUP_UNIT(2,TEast,Opf_O_S_Soldier_4_F,CORPORAL,-5,-5)
					GROUP_UNIT(3,TEast,Opf_O_S_Soldier_5_F,CORPORAL,10,-10)
					GROUP_UNIT(4,TEast,Opf_O_S_Soldier_3_F,CORPORAL,-10,-10)
					GROUP_UNIT(5,TEast,Opf_O_S_Soldier_1_F,CORPORAL,15,-15)
				};
				class Opf_O_S_Technicals
				{
					name = $STR_A3_CfgGroups_Indep_Guerilla_Motorized_MTP_IRG_Technicals0;
					side = TEast;
					faction = Opf_OPF_S_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_motor_inf.paa";
					GROUP_UNIT(0,TEast,Opf_O_S_Offroad_01_armed_F,LIEUTENANT,0,0)
					GROUP_UNIT(1,TEast,Opf_O_S_Offroad_01_armed_F,SERGEANT,10,-10)
					GROUP_UNIT(2,TEast,Opf_O_S_Offroad_01_armed_F,CORPORAL,-10,-10)
				};
			};
			class Mechanized
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Mechanized0;
				class Opf_O_P_MechInfSquad
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Mechanized_BUS_MechInfSquad0;
					side = TEast;
					faction = Opf_OPF_S_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_mech_inf.paa";
					GROUP_UNIT(0,TEast,Opf_O_S_APC_Wheeled_04_export_F,LIEUTENANT,0,0);
					GROUP_UNIT(1,TEast,Opf_O_S_Soldier_2_F,SERGEANT,5,-5);
					GROUP_UNIT(2,TEast,Opf_O_S_Soldier_5_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TEast,Opf_O_S_Soldier_7_F,PRIVATE,10,-10);
					GROUP_UNIT(4,TEast,Opf_O_S_Soldier_6_F,SERGEANT,-10,-10);
					GROUP_UNIT(5,TEast,Opf_O_S_Soldier_4_F,CORPORAL,15,-15);
					GROUP_UNIT(6,TEast,Opf_O_S_Soldier_3_F,PRIVATE,-15,-15);
				};
			};
		};
    };
	class Indep
	{
		name = $STR_A3_CfgGroups_Indep0;
		side = TGuerrila;
		/*
		class Opf_IND_R_F
		{
			name = $STR_A3_O_CfgFactionClasses_IND_R_F0;
			class Infantry
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Infantry0;
				class Opf_I_R_InfSquad
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSquad0;
					side = TGuerrila;
					faction = Opf_IND_R_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TGuerrila,Opf_I_R_soldier_TL_F,SERGEANT,0,0)
					GROUP_UNIT(1,TGuerrila,Opf_I_R_soldier_F,PRIVATE,5,-5)
					GROUP_UNIT(2,TGuerrila,Opf_I_R_soldier_LAT_F,CORPORAL,-5,-5)
					GROUP_UNIT(3,TGuerrila,Opf_I_R_soldier_M_F,PRIVATE,10,-10)
					GROUP_UNIT(4,TGuerrila,Opf_I_R_soldier_GL_F,SERGEANT,-10,-10)
					GROUP_UNIT(5,TGuerrila,Opf_I_R_soldier_MG_F,CORPORAL,15,-15)
					GROUP_UNIT(6,TGuerrila,Opf_I_R_engineer_F,PRIVATE,-15,-15)
					GROUP_UNIT(7,TGuerrila,Opf_I_R_medic_F,PRIVATE,20,-20)
				};
				class Opf_I_R_InfTeam
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam0;
					side = TGuerrila;
					faction = Opf_IND_R_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TGuerrila,Opf_I_R_soldier_TL_F,SERGEANT,0,0)
					GROUP_UNIT(1,TGuerrila,Opf_I_R_soldier_AR_F,CORPORAL,5,-5)
					GROUP_UNIT(2,TGuerrila,Opf_I_R_soldier_GL_F,PRIVATE,-5,-5)
					GROUP_UNIT(3,TGuerrila,Opf_I_R_soldier_LAT_F,PRIVATE,10,-10)
				};
				class Opf_I_R_InfSentry
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSentry0;
					side = TGuerrila;
					faction = Opf_IND_R_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TGuerrila,Opf_I_R_soldier_GL_F,CORPORAL,0,0)
					GROUP_UNIT(1,TGuerrila,Opf_I_R_soldier_F,PRIVATE,5,-5)
				};
			};
		};
		*/
		class Opf_IND_I_F
		{
		  	name = $STR_A3_O_CfgFactionClasses_IND_I_F0;
			class Infantry
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Infantry0;
				class InsurgentFireTeam
				{
					name = "Insurgent Fire Team";
					side = TGuerrila;
					faction = Opf_IND_I_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_inf.paa";
					GROUP_UNIT(0,TGuerrila,Opf_I_I_Soldier_2_F,SERGEANT,0,0)
					GROUP_UNIT(1,TGuerrila,Opf_I_I_Soldier_4_F,PRIVATE,5,-5)
					GROUP_UNIT(2,TGuerrila,Opf_I_I_Soldier_1_F,CORPORAL,-5,-5)
					GROUP_UNIT(3,TGuerrila,Opf_I_I_Soldier_3_F,PRIVATE,10,-10)
				};
				class InsurgentShockTeam
				{
					name = "Insurgent Shock Team";
					side = TGuerrila;
					faction = Opf_IND_I_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_inf.paa";
					GROUP_UNIT(0,TGuerrila,Opf_I_I_Soldier_6_F,SERGEANT,0,0)
					GROUP_UNIT(1,TGuerrila,Opf_I_I_Soldier_5_F,PRIVATE,5,-5)
					GROUP_UNIT(2,TGuerrila,Opf_I_I_Soldier_7_F,CORPORAL,-5,-5)
					GROUP_UNIT(3,TGuerrila,Opf_I_I_Soldier_8_F,PRIVATE,10,-10)
				};
				class InsurgentCombatGroup
				{
					name = "Insurgent Combat Group";
					side = TGuerrila;
					faction = Opf_IND_I_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_inf.paa";
					GROUP_UNIT(0,TGuerrila,Opf_I_I_Soldier_2_F,SERGEANT,0,0)
					GROUP_UNIT(1,TGuerrila,Opf_I_I_Soldier_4_F,PRIVATE,5,-5)
					GROUP_UNIT(2,TGuerrila,Opf_I_I_Soldier_6_F,CORPORAL,-5,-5)
					GROUP_UNIT(3,TGuerrila,Opf_I_I_Soldier_1_F,PRIVATE,10,-10)
					GROUP_UNIT(4,TGuerrila,Opf_I_I_Soldier_7_F,SERGEANT,-10,-10)
					GROUP_UNIT(5,TGuerrila,Opf_I_I_Soldier_5_F,CORPORAL,15,-15)
					GROUP_UNIT(6,TGuerrila,Opf_I_I_Soldier_8_F,PRIVATE,-15,-15)
					GROUP_UNIT(7,TGuerrila,Opf_I_I_Soldier_3_F,PRIVATE,20,-20)
				};
				class TribalFireTeam
				{
					name = "Bandit Fire Team";
					side = TGuerrila;
					faction = Opf_IND_I_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_inf.paa";
					GROUP_UNIT(0,TGuerrila,Opf_I_I_tribal_enforcer,CORPORAL,0,0);
					GROUP_UNIT(1,TGuerrila,Opf_I_I_tribal_hireling,PRIVATE,5,-5);
					GROUP_UNIT(2,TGuerrila,Opf_I_I_tribal_watcher,PRIVATE,-5,-5);
					GROUP_UNIT(3,TGuerrila,Opf_I_I_tribal_deserter,PRIVATE,10,-10);
				};
				class TribalSentry
				{
					name = "Bandit Sentry";
					side = TGuerrila;
					faction = Opf_IND_I_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_inf.paa";
					GROUP_UNIT(0,TGuerrila,Opf_I_I_tribal_watcher,CORPORAL,0,0);
					GROUP_UNIT(1,TGuerrila,Opf_I_I_tribal_deserter,PRIVATE,5,-5);
				};
				class TribalCombatGroup
				{
					name = "Bandit Combat Group";
					side = TGuerrila;
					faction = Opf_IND_I_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_inf.paa";
					GROUP_UNIT(0,TGuerrila,Opf_I_I_tribal_enforcer,SERGEANT,0,0);
					GROUP_UNIT(1,TGuerrila,Opf_I_I_tribal_scout,PRIVATE,5,-5);
					GROUP_UNIT(2,TGuerrila,Opf_I_I_tribal_hireling,PRIVATE,-5,-5);
					GROUP_UNIT(3,TGuerrila,Opf_I_I_tribal_watcher,PRIVATE,10,-10);
					GROUP_UNIT(4,TGuerrila,Opf_I_I_tribal_deserter,CORPORAL,-10,-10);
					GROUP_UNIT(5,TGuerrila,Opf_I_I_tribal_deserter,PRIVATE,15,-15);
					GROUP_UNIT(6,TGuerrila,Opf_I_I_tribal_sapper,PRIVATE,-15,-15);
					GROUP_UNIT(7,TGuerrila,Opf_I_I_tribal_medic,PRIVATE,20,-20);
				};
            };
			class Motorized_MTP
			{
				name = $STR_A3_CfgGroups_Indep_Guerilla_Motorized_MTP0;
				class Opf_I_I_MotInf_Team
				{
					name = $STR_A3_CfgGroups_Indep_Guerilla_Motorized_MTP_IRG_MotInfTeam0;
					side = TGuerrila;
					faction = Opf_IND_I_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_motor_inf.paa";
					GROUP_UNIT(0,TGuerrila,Opf_I_I_Offroad_01_F,LIEUTENANT,0,0)
					GROUP_UNIT(1,TGuerrila,Opf_I_I_Soldier_2_F,SERGEANT,5,-5)
					GROUP_UNIT(2,TGuerrila,Opf_I_I_Soldier_4_F,CORPORAL,-5,-5)
					GROUP_UNIT(3,TGuerrila,Opf_I_I_Soldier_5_F,CORPORAL,10,-10)
					GROUP_UNIT(4,TGuerrila,Opf_I_I_Soldier_3_F,CORPORAL,-10,-10)
					GROUP_UNIT(5,TGuerrila,Opf_I_I_Soldier_1_F,CORPORAL,15,-15)
				};
				class Opf_I_I_Technicals
				{
					name = $STR_A3_CfgGroups_Indep_Guerilla_Motorized_MTP_IRG_Technicals0;
					side = TGuerrila;
					faction = Opf_IND_I_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_motor_inf.paa";
					GROUP_UNIT(0,TGuerrila,Opf_I_I_Offroad_01_armed_F,LIEUTENANT,0,0)
					GROUP_UNIT(1,TGuerrila,Opf_I_I_Offroad_01_armed_F,SERGEANT,10,-10)
					GROUP_UNIT(2,TGuerrila,Opf_I_I_Offroad_01_armed_F,CORPORAL,-10,-10)
				};
			};
		};
    };
};