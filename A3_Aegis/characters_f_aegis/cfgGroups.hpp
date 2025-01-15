class CfgGroups
{
    /* Definitions */
    #include "\A3_Aegis\macros_groups.hpp"

	class West
	{
		name = $STR_A3_CfgGroups_West0;
		side = TWest;
		class BLU_F
		{
			name = $STR_A3_A_CfgFactionClasses_BLU_F0;
			class Infantry
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Infantry0;
				class BUS_InfSquad
				{
					class Unit1
					{
						vehicle = B_RadioOperator_F;
					};
				};
				delete BUS_ReconTeam;
				delete BUS_ReconPatrol;
				delete BUS_ReconSentry;
				delete BUS_SniperTeam;
				delete BUS_ReconSquad;
			};
			class SpecOps
			{
				name = $STR_A3_CfgGroups_West_BLU_F_SpecOps0;
				class BUS_ReconTeam
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_ReconTeam0;
					side = TWest;
					faction = BLU_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";
					GROUP_UNIT(0,TWest,B_recon_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,B_recon_M_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,B_recon_medic_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TWest,B_recon_LAT_F,CORPORAL,10,-10);
					GROUP_UNIT(4,TWest,B_recon_JTAC_F,PRIVATE,-10,-10);
					GROUP_UNIT(5,TWest,B_recon_exp_F,PRIVATE,15,-15);
				};
				class BUS_ReconPatrol
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_ReconPatrol0;
					side = TWest;
					faction = BLU_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";
					GROUP_UNIT(0,TWest,B_recon_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,B_recon_M_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,B_recon_medic_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TWest,B_recon_F,PRIVATE,10,-10);
				};
				class BUS_ReconSentry
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_ReconSentry0;
					side = TWest;
					faction = BLU_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";
					GROUP_UNIT(0,TWest,B_recon_M_F,CORPORAL,0,0);
					GROUP_UNIT(1,TWest,B_recon_F,PRIVATE,5,-5);
				};
				class BUS_SniperTeam
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_SniperTeam0;
					side = TWest;
					faction = BLU_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";
					GROUP_UNIT(0,TWest,B_spotter_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,B_sniper_F,CORPORAL,5,-5);
				};
				class BUS_ReconSquad
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_ReconSquad0;
					side = TWest;
					faction = BLU_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";
					GROUP_UNIT(0,TWest,B_recon_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,B_recon_M_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,B_recon_medic_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TWest,B_recon_F,PRIVATE,10,-10);
					GROUP_UNIT(4,TWest,B_recon_LAT_F,PRIVATE,-10,-10);
					GROUP_UNIT(5,TWest,B_recon_JTAC_F,PRIVATE,15,-15);
					GROUP_UNIT(6,TWest,B_recon_exp_F,PRIVATE,-15,-15);
					GROUP_UNIT(7,TWest,B_Recon_Sharpshooter_F,CORPORAL,20,-20);
				};
				delete BUS_DiverTeam_Boat;
				delete BUS_DiverTeam_SDV;
				delete BUS_SmallTeam_UAV;
				delete BUS_ReconTeam_UGV;
				delete BUS_AttackTeam_UGV;
				delete BUS_ReconTeam_UAV;
				delete BUS_AttackTeam_UAV;
			};
			class Motorized
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Motorized0;
				class BUS_MotInf_Reinforce
				{
					class Unit2
					{
						vehicle = B_RadioOperator_F;
					};
					class Unit10
					{
						vehicle = B_RadioOperator_F;
					};
				};
			};
			class Mechanized
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Mechanized0;
				class BUS_MechInfSquad
				{
					class Unit0
					{
						vehicle = B_APC_Wheeled_01_cannon_v2_F;
					};
					class Unit2
					{
						vehicle = B_RadioOperator_F;
					};
				};
				class BUS_MechInf_Support
				{
					class Unit0
					{
						vehicle = B_APC_Wheeled_01_cannon_v2_F;
					};
				};
			};
		};
		class BLU_T_F
		{
			name = $STR_A3_A_CfgFactionClasses_BLU_T_F0;
			class Infantry
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Infantry0;
				class B_T_InfSquad
				{
					class Unit1
					{
						vehicle = B_T_RadioOperator_F;
					};
				};
				delete B_T_ReconTeam;
				delete B_T_ReconPatrol;
				delete B_T_ReconSentry;
				delete B_T_SniperTeam;
			};
			class SpecOps
			{
				name = $STR_A3_CfgGroups_West_BLU_F_SpecOps0;
				class B_T_ReconTeam
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_ReconTeam0;
					side = TWest;
					faction = BLU_T_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";
					GROUP_UNIT(0,TWest,B_T_recon_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,B_T_recon_M_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,B_T_recon_medic_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TWest,B_T_recon_LAT_F,CORPORAL,10,-10);
					GROUP_UNIT(4,TWest,B_T_recon_JTAC_F,PRIVATE,-10,-10);
					GROUP_UNIT(5,TWest,B_T_recon_exp_F,PRIVATE,15,-15);
				};
				class B_T_ReconPatrol
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_ReconPatrol0;
					side = TWest;
					faction = BLU_T_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";
					GROUP_UNIT(0,TWest,B_T_recon_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,B_T_recon_M_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,B_T_recon_medic_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TWest,B_T_recon_F,PRIVATE,10,-10);
				};
				class B_T_ReconSentry
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_ReconSentry0;
					side = TWest;
					faction = BLU_T_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";
					GROUP_UNIT(0,TWest,B_T_recon_M_F,CORPORAL,0,0);
					GROUP_UNIT(1,TWest,B_T_recon_F,PRIVATE,5,-5);
				};
				class B_T_SniperTeam
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_SniperTeam0;
					side = TWest;
					faction = BLU_T_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";
					GROUP_UNIT(0,TWest,B_T_spotter_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,B_T_sniper_F,CORPORAL,5,-5);
				};
				class B_T_ReconSquad
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_ReconSquad0;
					side = TWest;
					faction = BLU_T_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";
					GROUP_UNIT(0,TWest,B_T_recon_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,B_T_recon_M_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,B_T_recon_medic_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TWest,B_T_recon_F,PRIVATE,10,-10);
					GROUP_UNIT(4,TWest,B_T_recon_LAT_F,PRIVATE,-10,-10);
					GROUP_UNIT(5,TWest,B_T_recon_JTAC_F,PRIVATE,15,-15);
					GROUP_UNIT(6,TWest,B_T_recon_exp_F,PRIVATE,-15,-15);
					GROUP_UNIT(7,TWest,B_T_Recon_Sharpshooter_F,CORPORAL,20,-20);
				};
				delete B_T_DiverTeam_Boat;
				delete B_T_DiverTeam_SDV;
				delete B_T_SmallTeam_UAV;
				delete B_T_ReconTeam_UGV;
				delete B_T_AttackTeam_UGV;
				delete B_T_ReconTeam_UAV;
				delete B_T_AttackTeam_UAV;
			};
			class Motorized
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Motorized0;
				class B_T_MotInf_Reinforcements
				{
					class Unit2
					{
						vehicle = B_T_RadioOperator_F;
					};
					class Unit10
					{
						vehicle = B_T_RadioOperator_F;
					};
				};
			};
			class Mechanized
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Mechanized0;
				class B_T_MechInfSquad
				{
					class Unit0
					{
						vehicle = B_T_APC_Wheeled_01_cannon_v2_F;
					};
					class Unit2
					{
						vehicle = B_T_RadioOperator_F;
					};
				};
				class B_T_MechInf_Support
				{
					class Unit0
					{
						vehicle = B_T_APC_Wheeled_01_cannon_v2_F;
					};
				};
			};
		};
		class BLU_CTRG_F
		{
			name = $STR_A3_CfgGroups_West_CTRG_F0;
			delete Infantry;
			class InfantryArid
			{
				name = $STR_A3_CfgGroups_West_BLU_F_InfantryArid0;
				class B_C_tna_InfSquadArid
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSquad0;
					side = TWest;
					faction = BLU_CTRG_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,B_CTRG_Soldier_TL_arid_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,B_CTRG_Soldier_JTAC_arid_F,PRIVATE,5,-5);
					GROUP_UNIT(2,TWest,B_CTRG_Soldier_Exp_arid_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TWest,B_CTRG_Soldier_M_arid_F,PRIVATE,10,-10);
					GROUP_UNIT(4,TWest,B_CTRG_Soldier_TL_arid_F,SERGEANT,-10,-10);
					GROUP_UNIT(5,TWest,B_CTRG_Soldier_Medic_arid_F,CORPORAL,15,-15);
					GROUP_UNIT(6,TWest,B_CTRG_Soldier_LAT_arid_F,PRIVATE,-15,-15);
					GROUP_UNIT(7,TWest,B_CTRG_Soldier_arid_v2_F,PRIVATE,20,-20);
				};
				class B_C_tna_InfTeamArid
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam0;
					side = TWest;
					faction = BLU_CTRG_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,B_CTRG_Soldier_TL_arid_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,B_CTRG_Soldier_Exp_arid_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,B_CTRG_Soldier_arid_v2_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TWest,B_CTRG_Soldier_LAT_arid_F,PRIVATE,10,-10);
				};
				class B_C_tna_InfSentryArid
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSentry0;
					side = TWest;
					faction = BLU_CTRG_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,B_CTRG_Soldier_Exp_arid_F,CORPORAL,0,0);
					GROUP_UNIT(1,TWest,B_CTRG_Soldier_arid_v2_F,PRIVATE,5,-5);
				};
				delete CTRG_InfSquad;
				delete CTRG_InfTeam;
				delete CTRG_InfSentry;
			};
			class InfantryMediterranean
			{
				name = $STR_A3_CfgGroups_West_BLU_F_InfantryMediterranean0;
				class B_C_tna_InfSquad
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSquad0;
					side = TWest;
					faction = BLU_CTRG_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,B_CTRG_Soldier_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,B_CTRG_Soldier_JTAC_F,PRIVATE,5,-5);
					GROUP_UNIT(2,TWest,B_CTRG_Soldier_Exp_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TWest,B_CTRG_Soldier_M_F,PRIVATE,10,-10);
					GROUP_UNIT(4,TWest,B_CTRG_Soldier_TL_F,SERGEANT,-10,-10);
					GROUP_UNIT(5,TWest,B_CTRG_Soldier_Medic_F,CORPORAL,15,-15);
					GROUP_UNIT(6,TWest,B_CTRG_Soldier_LAT_F,PRIVATE,-15,-15);
					GROUP_UNIT(7,TWest,B_CTRG_Soldier_v2_F,PRIVATE,20,-20);
				};
				class B_C_tna_InfTeam
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam0;
					side = TWest;
					faction = BLU_CTRG_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,B_CTRG_Soldier_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,B_CTRG_Soldier_Exp_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,B_CTRG_Soldier_v2_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TWest,B_CTRG_Soldier_LAT_F,PRIVATE,10,-10);
				};
				class B_C_tna_InfSentry
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSentry0;
					side = TWest;
					faction = BLU_CTRG_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,B_CTRG_Soldier_Exp_F,CORPORAL,0,0);
					GROUP_UNIT(1,TWest,B_CTRG_Soldier_v2_F,PRIVATE,5,-5);
				};
				delete CTRG_InfSquad;
				delete CTRG_InfTeam;
				delete CTRG_InfSentry;
			};
			class Motorized
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Motorized0;
				class B_C_MotInf_AssaultTeam_T
				{
					name = $STR_A3_CfgGroups_West_CTRG_F_Motorized_CTRG_MotInf_AssaultTeam0;
					side = TWest;
					faction = BLU_CTRG_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_motor_inf.paa";
					GROUP_UNIT(0,TWest,B_CTRG_LSV_01_armed_sand_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,B_CTRG_Soldier_LAT_F,PRIVATE,5,-5);
					GROUP_UNIT(2,TWest,B_CTRG_Soldier_Exp_F,CORPORAL,-5,-5);
				};
				class B_C_MotInf_ReconTeam_T
				{
					name = $STR_A3_CfgGroups_West_CTRG_F_Motorized_CTRG_MotInf_ReconTeam0;
					side = TWest;
					faction = BLU_CTRG_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_motor_inf.paa";
					GROUP_UNIT(0,TWest,B_CTRG_LSV_01_unarmed_sand_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,B_CTRG_Soldier_LAT_F,PRIVATE,5,-5);
					GROUP_UNIT(2,TWest,B_CTRG_Soldier_Exp_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TWest,B_CTRG_Soldier_Medic_F,CORPORAL,10,-10);
					GROUP_UNIT(4,TWest,B_CTRG_Soldier_M_F,PRIVATE,-10,-10);
					GROUP_UNIT(5,TWest,B_CTRG_Soldier_v2_F,PRIVATE,15,-15);
				};
				delete CTRG_MotInf_ReconTeam;
				delete CTRG_MotInf_AssaultTeam;
			};
		};
		class Guerilla
		{
			name = $STR_A3_CfgGroups_Indep_Guerilla0;
			class Infantry
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Infantry0;
				class IRG_SniperTeam_M
				{
					class Unit0
					{
						vehicle = B_G_Sharpshooter_F;
					};
				};
			};
			class Mechanized
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Mechanized0;
				class Aegis_B_G_MechInfSquad
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Mechanized_BUS_MechInfSquad0;
					side = TWest;
					faction = BLU_G_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_mech_inf.paa";
					GROUP_UNIT(0,TWest,Aegis_B_G_APC_Wheeled_04_export_F,LIEUTENANT,0,0);
					GROUP_UNIT(1,TWest,B_G_soldier_SL_F,SERGEANT,5,-5);
					GROUP_UNIT(2,TWest,Aegis_B_G_HeavyGunner_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TWest,B_G_soldier_LAT_F,CORPORAL,10,-10);
					GROUP_UNIT(4,TWest,B_G_soldier_M_F,PRIVATE,-10,-10);
					GROUP_UNIT(5,TWest,B_G_soldier_TL_F,SERGEANT,15,-15);
					GROUP_UNIT(6,TWest,B_G_soldier_AR_F,CORPORAL,-15,-15);
					GROUP_UNIT(7,TWest,B_G_soldier_A_F,PRIVATE,20,-20);
					GROUP_UNIT(8,TWest,B_G_medic_F,PRIVATE,-20,-20);
				};
				class Aegis_B_G_MechInf_AT
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Mechanized_BUS_MechInf_AT0;
					side = TWest;
					faction = BLU_G_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_mech_inf.paa";
					GROUP_UNIT(0,TWest,B_G_APC_Wheeled_03_cannon_F,LIEUTENANT,0,0);
					GROUP_UNIT(1,TWest,B_G_soldier_SL_F,SERGEANT,5,-5);
					GROUP_UNIT(2,TWest,B_G_soldier_AR_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TWest,B_G_soldier_LAT_F,PRIVATE,10,-10);
					GROUP_UNIT(4,TWest,B_G_soldier_LAT2_F,PRIVATE,-10,-10);
					GROUP_UNIT(5,TWest,B_G_soldier_F,SERGEANT,15,-15);
					GROUP_UNIT(6,TWest,B_G_soldier_A_F,CORPORAL,-15,-15);
					GROUP_UNIT(7,TWest,B_G_soldier_M_F,PRIVATE,20,-20);
					GROUP_UNIT(8,TWest,B_G_Medic_F,PRIVATE,-20,-20);
				};
			};
		};
		class BLU_W_F
		{
			name = $STR_A3_A_CfgFactionClasses_BLU_W_F0;
			class Infantry
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Infantry0;
				class B_W_InfSquad
				{
					class Unit1
					{
						vehicle = B_W_RadioOperator_F;
					};
				};
				class B_W_InfAssault
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfAssault0;
					side = TWest;
					faction = BLU_W_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,B_W_soldier_SL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,B_W_soldier_AR_F,PRIVATE,5,-5);
					GROUP_UNIT(2,TWest,B_W_HeavyGunner_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TWest,B_W_soldier_AAR_F,PRIVATE,10,-10);
					GROUP_UNIT(4,TWest,B_W_soldier_M_F,PRIVATE,-10,-10);
					GROUP_UNIT(5,TWest,B_W_Sharpshooter_F,CORPORAL,15,-15);
					GROUP_UNIT(6,TWest,B_W_soldier_LAT_F,PRIVATE,-15,-15);
					GROUP_UNIT(7,TWest,B_W_medic_F,PRIVATE,20,-20);
				};
				class B_W_InfTeam_Light
				{
					name = $STR_A3_CfgGroups_FireTeamLight;
					side = TWest;
					faction = BLU_W_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,B_W_soldier_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,B_W_soldier_AR_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,B_W_soldier_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TWest,B_W_soldier_LAT2_F,PRIVATE,10,-10);
				};
			};
			class SpecOps
			{
				name = $STR_A3_CfgGroups_West_BLU_F_SpecOps0;
				class B_W_ReconTeam
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_ReconTeam0;
					side = TWest;
					faction = BLU_W_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";
					GROUP_UNIT(0,TWest,B_W_recon_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,B_W_recon_M_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,B_W_recon_medic_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TWest,B_W_recon_LAT_F,CORPORAL,10,-10);
					GROUP_UNIT(4,TWest,B_W_recon_JTAC_F,PRIVATE,-10,-10);
					GROUP_UNIT(5,TWest,B_W_recon_exp_F,PRIVATE,15,-15);
				};
				class B_W_ReconPatrol
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_ReconPatrol0;
					side = TWest;
					faction = BLU_W_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";
					GROUP_UNIT(0,TWest,B_W_recon_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,B_W_recon_M_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,B_W_recon_medic_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TWest,B_W_recon_F,PRIVATE,10,-10);
				};
				class B_W_ReconSentry
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_ReconSentry0;
					side = TWest;
					faction = BLU_W_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";
					GROUP_UNIT(0,TWest,B_W_recon_M_F,CORPORAL,0,0);
					GROUP_UNIT(1,TWest,B_W_recon_F,PRIVATE,5,-5);
				};
				class B_W_SniperTeam
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_SniperTeam0;
					side = TWest;
					faction = BLU_W_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";
					GROUP_UNIT(0,TWest,B_W_spotter_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,B_W_sniper_F,CORPORAL,5,-5);
				};
				class B_W_ReconSquad
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_ReconSquad0;
					side = TWest;
					faction = BLU_W_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";
					GROUP_UNIT(0,TWest,B_W_recon_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,B_W_recon_M_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,B_W_recon_medic_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TWest,B_W_recon_F,PRIVATE,10,-10);
					GROUP_UNIT(4,TWest,B_W_recon_LAT_F,PRIVATE,-10,-10);
					GROUP_UNIT(5,TWest,B_W_recon_JTAC_F,PRIVATE,15,-15);
					GROUP_UNIT(6,TWest,B_W_recon_exp_F,PRIVATE,-15,-15);
					GROUP_UNIT(7,TWest,B_W_Recon_Sharpshooter_F,CORPORAL,20,-20);
				};
			};
			class Support
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Support0;
				class B_W_Support_CLS
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Support_BUS_Support_CLS0;
					side = TWest;
					faction = BLU_W_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,B_W_soldier_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,B_W_soldier_AR_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,B_W_medic_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TWest,B_W_medic_F,PRIVATE,10,-10);
				};
				class B_W_Support_EOD
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Support_BUS_Support_EOD0;
					side = TWest;
					faction = BLU_W_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,B_W_soldier_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,B_W_engineer_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,B_W_soldier_exp_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TWest,B_W_soldier_exp_F,PRIVATE,10,-10);
				};
				class B_W_Support_ENG
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Support_BUS_Support_ENG0;
					side = TWest;
					faction = BLU_W_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,B_W_soldier_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,B_W_engineer_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,B_W_engineer_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TWest,B_W_soldier_repair_F,PRIVATE,10,-10);
				};
				class B_W_Recon_EOD
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Support_BUS_Recon_EOD0;
					side = TWest;
					faction = BLU_W_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,B_W_recon_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,B_W_recon_exp_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,B_W_recon_exp_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TWest,B_W_recon_F,PRIVATE,10,-10);
				};
				class B_W_Support_MG
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Support_BUS_Support_MG0;
					side = TWest;
					faction = BLU_W_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,B_W_soldier_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,B_W_support_MG_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,B_W_support_AMG_F,PRIVATE,-5,-5);
				};
				class B_W_Support_GMG
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Support_BUS_Support_GMG0;
					side = TWest;
					faction = BLU_W_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,B_W_soldier_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,B_W_support_GMG_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,B_W_support_AMG_F,PRIVATE,-5,-5);
				};
				class B_W_Support_Mort
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Support_BUS_Support_Mort0;
					side = TWest;
					faction = BLU_W_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_mortar.paa";
					GROUP_UNIT(0,TWest,B_W_soldier_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,B_W_support_Mort_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,B_W_support_AMort_F,PRIVATE,-5,-5);
				};
			};
			class Motorized
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Motorized0;
				class B_W_MotInf_Team
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_Team0;
					side = TWest;
					faction = BLU_W_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_motor_inf.paa";
					GROUP_UNIT(0,TWest,B_W_MRAP_01_gmg_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,B_W_soldier_AR_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,B_W_soldier_LAT_F,PRIVATE,-5,-5);
				};
				class B_W_MotInf_AT
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_AT0;
					side = TWest;
					faction = BLU_W_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_motor_inf.paa";
					GROUP_UNIT(0,TWest,B_W_MRAP_01_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,B_W_soldier_AT_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,B_W_soldier_AT_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TWest,B_W_soldier_AAT_F,PRIVATE,0,-10);
				};
				class B_W_MotInf_AA
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_AA0;
					side = TWest;
					faction = BLU_W_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_motor_inf.paa";
					GROUP_UNIT(0,TWest,B_W_MRAP_01_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,B_W_soldier_AA_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,B_W_soldier_AA_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TWest,B_W_soldier_AAA_F,PRIVATE,0,-10);
				};
				class B_W_MotInf_MGTeam
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_MGTeam0;
					side = TWest;
					faction = BLU_W_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_motor_inf.paa";
					GROUP_UNIT(0,TWest,B_W_MRAP_01_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,B_W_soldier_TL_F,SERGEANT,5,-5);
					GROUP_UNIT(2,TWest,B_W_support_MG_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TWest,B_W_support_AMG_F,PRIVATE,0,-10);
				};
				class B_W_MotInf_GMGTeam
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_GMGTeam0;
					side = TWest;
					faction = BLU_W_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_motor_inf.paa";
					GROUP_UNIT(0,TWest,B_W_MRAP_01_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,B_W_soldier_TL_F,SERGEANT,5,-5);
					GROUP_UNIT(2,TWest,B_W_support_GMG_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TWest,B_W_support_AMG_F,PRIVATE,0,-10);
				};
				class B_W_MotInf_MortTeam
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_MortTeam0;
					side = TWest;
					faction = BLU_W_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_motor_inf.paa";
					GROUP_UNIT(0,TWest,B_W_MRAP_01_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,B_W_soldier_TL_F,SERGEANT,5,-5);
					GROUP_UNIT(2,TWest,B_W_support_Mort_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TWest,B_W_support_AMort_F,PRIVATE,0,-10);
				};
				class B_W_MotInf_Reinforcements
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_Reinforce0;
					side = TWest;
					faction = BLU_W_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_motor_inf.paa";
					GROUP_UNIT(0,TWest,B_W_Truck_01_transport_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,B_W_soldier_SL_F,SERGEANT,5,0);
					GROUP_UNIT(2,TWest,B_W_RadioOperator_F,PRIVATE,5,-2);
					GROUP_UNIT(3,TWest,B_W_soldier_LAT_F,CORPORAL,5,-4);
					GROUP_UNIT(4,TWest,B_W_soldier_M_F,PRIVATE,5,-6);
					GROUP_UNIT(5,TWest,B_W_soldier_TL_F,SERGEANT,5,-8);
					GROUP_UNIT(6,TWest,B_W_soldier_AR_F,CORPORAL,5,-10);
					GROUP_UNIT(7,TWest,B_W_soldier_A_F,PRIVATE,5,-12);
					GROUP_UNIT(8,TWest,B_W_medic_F,PRIVATE,5,-14);
					GROUP_UNIT(9,TWest,B_W_soldier_SL_F,SERGEANT,-5,0);
					GROUP_UNIT(10,TWest,B_W_RadioOperator_F,PRIVATE,-5,-2);
					GROUP_UNIT(11,TWest,B_W_soldier_LAT_F,CORPORAL,-5,-4);
					GROUP_UNIT(12,TWest,B_W_soldier_M_F,PRIVATE,-5,-6);
					GROUP_UNIT(13,TWest,B_W_soldier_TL_F,SERGEANT,-5,-8);
					GROUP_UNIT(14,TWest,B_W_soldier_AR_F,CORPORAL,-5,-10);
					GROUP_UNIT(15,TWest,B_W_soldier_A_F,PRIVATE,-5,-12);
					GROUP_UNIT(16,TWest,B_W_medic_F,PRIVATE,-5,-14);
				};
			};
			class Mechanized
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Mechanized0;
				class B_W_MechInfSquad
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Mechanized_BUS_MechInfSquad0;
					side = TWest;
					faction = BLU_W_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_mech_inf.paa";
					GROUP_UNIT(0,TWest,B_W_APC_Wheeled_01_cannon_F,LIEUTENANT,0,0);
					GROUP_UNIT(1,TWest,B_W_soldier_SL_F,SERGEANT,5,-5);
					GROUP_UNIT(2,TWest,B_W_RadioOperator_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TWest,B_W_soldier_LAT_F,CORPORAL,10,-10);
					GROUP_UNIT(4,TWest,B_W_soldier_M_F,PRIVATE,-10,-10);
					GROUP_UNIT(5,TWest,B_W_soldier_TL_F,SERGEANT,15,-15);
					GROUP_UNIT(6,TWest,B_W_soldier_AR_F,CORPORAL,-15,-15);
					GROUP_UNIT(7,TWest,B_W_soldier_A_F,PRIVATE,20,-20);
					GROUP_UNIT(8,TWest,B_W_medic_F,PRIVATE,-20,-20);
				};
				class B_W_MechInf_AT
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Mechanized_BUS_MechInf_AT0;
					side = TWest;
					faction = BLU_W_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_mech_inf.paa";
					GROUP_UNIT(0,TWest,B_W_APC_Tracked_01_rcws_F,LIEUTENANT,0,0);
					GROUP_UNIT(1,TWest,B_W_soldier_SL_F,SERGEANT,5,-5);
					GROUP_UNIT(2,TWest,B_W_soldier_AR_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TWest,B_W_soldier_AT_F,PRIVATE,10,-10);
					GROUP_UNIT(4,TWest,B_W_soldier_AT_F,PRIVATE,-10,-10);
					GROUP_UNIT(5,TWest,B_W_soldier_AT_F,SERGEANT,15,-15);
					GROUP_UNIT(6,TWest,B_W_soldier_AAT_F,CORPORAL,-15,-15);
					GROUP_UNIT(7,TWest,B_W_soldier_AAT_F,PRIVATE,20,-20);
					GROUP_UNIT(8,TWest,B_W_soldier_AAT_F,PRIVATE,-20,-20);
				};
				class B_W_MechInf_AA
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Mechanized_BUS_MechInf_AA0;
					side = TWest;
					faction = BLU_W_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_mech_inf.paa";
					GROUP_UNIT(0,TWest,B_W_APC_Tracked_01_rcws_F,LIEUTENANT,0,0);
					GROUP_UNIT(1,TWest,B_W_soldier_SL_F,SERGEANT,5,-5);
					GROUP_UNIT(2,TWest,B_W_soldier_AR_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TWest,B_W_soldier_AA_F,PRIVATE,10,-10);
					GROUP_UNIT(4,TWest,B_W_soldier_AA_F,PRIVATE,-10,-10);
					GROUP_UNIT(5,TWest,B_W_soldier_AA_F,SERGEANT,15,-15);
					GROUP_UNIT(6,TWest,B_W_soldier_AAA_F,CORPORAL,-15,-15);
					GROUP_UNIT(7,TWest,B_W_soldier_AAA_F,PRIVATE,20,-20);
					GROUP_UNIT(8,TWest,B_W_soldier_AAA_F,PRIVATE,-20,-20);
				};
				class B_W_MechInf_Support
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Mechanized_BUS_MechInf_Support0;
					side = TWest;
					faction = BLU_W_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_mech_inf.paa";
					GROUP_UNIT(0,TWest,B_W_APC_Wheeled_01_cannon_F,LIEUTENANT,0,0);
					GROUP_UNIT(1,TWest,B_W_soldier_SL_F,SERGEANT,5,-5);
					GROUP_UNIT(2,TWest,B_W_soldier_TL_F,SERGEANT,-5,-5);
					GROUP_UNIT(3,TWest,B_W_soldier_repair_F,CORPORAL,10,-10);
					GROUP_UNIT(4,TWest,B_W_engineer_F,PRIVATE,-10,-10);
					GROUP_UNIT(5,TWest,B_W_medic_F,PRIVATE,15,-15);
					GROUP_UNIT(6,TWest,B_W_soldier_AR_F,CORPORAL,-15,-15);
					GROUP_UNIT(7,TWest,B_W_soldier_exp_F,PRIVATE,20,-20);
					GROUP_UNIT(8,TWest,B_W_soldier_A_F,PRIVATE,-20,-20);
				};
			};
			class Armored
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Armored0;
				class B_W_TankPlatoon
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Armored_BUS_TankPlatoon0;
					side = TWest;
					faction = BLU_W_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_armor.paa";
					GROUP_UNIT(0,TWest,B_W_MBT_01_cannon_F,LIEUTENANT,0,0);
					GROUP_UNIT(1,TWest,B_W_MBT_01_cannon_F,SERGEANT,10,-10);
					GROUP_UNIT(2,TWest,B_W_MBT_01_cannon_F,SERGEANT,-10,-10);
					GROUP_UNIT(3,TWest,B_W_MBT_01_cannon_F,CORPORAL,20,-20);
				};
				class B_W_TankPlatoon_AA
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Armored_BUS_TankPlatoon_AA0;
					side = TWest;
					faction = BLU_W_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_armor.paa";
					GROUP_UNIT(0,TWest,B_W_MBT_01_cannon_F,LIEUTENANT,0,0);
					GROUP_UNIT(1,TWest,B_W_APC_Tracked_01_aa_F,SERGEANT,10,-10);
					GROUP_UNIT(2,TWest,B_W_MBT_01_cannon_F,SERGEANT,-10,-10);
					GROUP_UNIT(3,TWest,B_W_APC_Tracked_01_aa_F,CORPORAL,20,-20);
				};
				class B_W_TankSection
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Armored_BUS_TankSection0;
					side = TWest;
					faction = BLU_W_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_armor.paa";
					GROUP_UNIT(0,TWest,B_W_MBT_01_cannon_F,LIEUTENANT,0,0);
					GROUP_UNIT(1,TWest,B_W_MBT_01_cannon_F,SERGEANT,10,-10);
				};
				class B_W_SPGPlatoon_Scorcher
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Armored_BUS_SPGPlatoon_Scorcher0;
					side = TWest;
					faction = BLU_W_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_art.paa";
					GROUP_UNIT(0,TWest,B_W_MBT_01_arty_F,LIEUTENANT,0,0);
					GROUP_UNIT(1,TWest,B_W_MBT_01_arty_F,SERGEANT,10,-10);
					GROUP_UNIT(2,TWest,B_W_MBT_01_arty_F,SERGEANT,-10,-10);
					GROUP_UNIT(3,TWest,B_W_MBT_01_arty_F,CORPORAL,20,-20);
				};
				class B_W_SPGSection_Scorcher
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Armored_BUS_SPGSection_Scorcher0;
					side = TWest;
					faction = BLU_W_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_art.paa";
					GROUP_UNIT(0,TWest,B_W_MBT_01_arty_F,LIEUTENANT,0,0);
					GROUP_UNIT(1,TWest,B_W_MBT_01_arty_F,SERGEANT,10,-10);
				};
				class B_W_SPGSection_MLRS
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Armored_BUS_SPGSection_MLRS0;
					side = TWest;
					faction = BLU_W_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_art.paa";
					GROUP_UNIT(0,TWest,B_W_MBT_01_mlrs_F,LIEUTENANT,0,0);
					GROUP_UNIT(1,TWest,B_W_MBT_01_mlrs_F,SERGEANT,10,-10);
				};
				class B_W_TankDestrSection_Rhino
				{
					name = $STR_A3_CfgGroups_TDSection;
					side = TWest;
					faction = BLU_W_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_art.paa";
					GROUP_UNIT(0,TWest,B_W_AFV_Wheeled_01_cannon_F,LIEUTENANT,0,0);
					GROUP_UNIT(1,TWest,B_W_AFV_Wheeled_01_cannon_F,SERGEANT,10,-10);
				};
				class B_W_TankDestrSection_RhinoUP
				{
					name = $STR_A3_CfgGroups_TDSectionUP;
					side = TWest;
					faction = BLU_W_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_art.paa";
					GROUP_UNIT(0,TWest,B_W_AFV_Wheeled_01_up_cannon_F,LIEUTENANT,0,0);
					GROUP_UNIT(1,TWest,B_W_AFV_Wheeled_01_up_cannon_F,SERGEANT,10,-10);
				};
			};
		};
		class BLU_CTRG_tna_F
		{
			name = $STR_A3_A_CfgFactionClasses_BLU_CTRG_tna_F0;
			class InfantryPacific
			{
				name = $STR_A3_CfgGroups_West_BLU_F_InfantryPacific0;
				class B_C_tna_InfSquad
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSquad0;
					side = TWest;
					faction = BLU_CTRG_tna_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,B_CTRG_Soldier_TL_tna_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,B_CTRG_Soldier_JTAC_tna_F,PRIVATE,5,-5);
					GROUP_UNIT(2,TWest,B_CTRG_Soldier_Exp_tna_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TWest,B_CTRG_Soldier_M_tna_F,PRIVATE,10,-10);
					GROUP_UNIT(4,TWest,B_CTRG_Soldier_TL_tna_F,SERGEANT,-10,-10);
					GROUP_UNIT(5,TWest,B_CTRG_Soldier_Medic_tna_F,CORPORAL,15,-15);
					GROUP_UNIT(6,TWest,B_CTRG_Soldier_LAT_tna_F,PRIVATE,-15,-15);
					GROUP_UNIT(7,TWest,B_CTRG_Soldier_F,PRIVATE,20,-20);
				};
				class B_C_tna_InfTeam
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam0;
					side = TWest;
					faction = BLU_CTRG_tna_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,B_CTRG_Soldier_TL_tna_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,B_CTRG_Soldier_Exp_tna_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,B_CTRG_Soldier_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TWest,B_CTRG_Soldier_LAT_tna_F,PRIVATE,10,-10);
				};
				class B_C_tna_InfSentry
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSentry0;
					side = TWest;
					faction = BLU_CTRG_tna_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,B_CTRG_Soldier_Exp_tna_F,CORPORAL,0,0);
					GROUP_UNIT(1,TWest,B_CTRG_Soldier_F,PRIVATE,5,-5);
				};
			};
			class InfantryUrban
			{
				name = $STR_A3_CfgGroups_West_BLU_F_InfantryUrban0;
				class B_C_tna_InfSquad
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSquad0;
					side = TWest;
					faction = BLU_CTRG_tna_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,B_CTRG_Soldier_TL_urb_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,B_CTRG_Soldier_JTAC_urb_F,PRIVATE,5,-5);
					GROUP_UNIT(2,TWest,B_CTRG_Soldier_Exp_urb_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TWest,B_CTRG_Soldier_M_urb_F,PRIVATE,10,-10);
					GROUP_UNIT(4,TWest,B_CTRG_Soldier_TL_urb_F,SERGEANT,-10,-10);
					GROUP_UNIT(5,TWest,B_CTRG_Soldier_Medic_urb_F,CORPORAL,15,-15);
					GROUP_UNIT(6,TWest,B_CTRG_Soldier_LAT_urb_F,PRIVATE,-15,-15);
					GROUP_UNIT(7,TWest,B_CTRG_Soldier_urb_F,PRIVATE,20,-20);
				};
				class B_C_tna_InfTeam
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam0;
					side = TWest;
					faction = BLU_CTRG_tna_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,B_CTRG_Soldier_TL_urb_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,B_CTRG_Soldier_Exp_urb_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,B_CTRG_Soldier_urb_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TWest,B_CTRG_Soldier_LAT_urb_F,PRIVATE,10,-10);
				};
				class B_C_tna_InfSentry
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSentry0;
					side = TWest;
					faction = BLU_CTRG_tna_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,B_CTRG_Soldier_Exp_urb_F,CORPORAL,0,0);
					GROUP_UNIT(1,TWest,B_CTRG_Soldier_urb_F,PRIVATE,5,-5);
				};
			};
			class Motorized
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Motorized0;
				class B_C_tna_MotInf_AssaultTeam_T
				{
					name = $STR_A3_CfgGroups_West_CTRG_F_Motorized_CTRG_MotInf_AssaultTeam0;
					side = TWest;
					faction = BLU_CTRG_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_motor_inf.paa";
					GROUP_UNIT(0,TWest,B_CTRG_LSV_01_armed_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,B_CTRG_Soldier_LAT_tna_F,PRIVATE,5,-5);
					GROUP_UNIT(2,TWest,B_CTRG_Soldier_Exp_tna_F,CORPORAL,-5,-5);
				};
				class B_C_tna_MotInf_ReconTeam_T
				{
					name = $STR_A3_CfgGroups_West_CTRG_F_Motorized_CTRG_MotInf_ReconTeam0;
					side = TWest;
					faction = BLU_CTRG_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_motor_inf.paa";
					GROUP_UNIT(0,TWest,B_CTRG_LSV_01_unarmed_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,B_CTRG_Soldier_LAT_tna_F,PRIVATE,5,-5);
					GROUP_UNIT(2,TWest,B_CTRG_Soldier_Exp_tna_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TWest,B_CTRG_Soldier_Medic_tna_F,CORPORAL,10,-10);
					GROUP_UNIT(4,TWest,B_CTRG_Soldier_M_tna_F,PRIVATE,-10,-10);
					GROUP_UNIT(5,TWest,B_CTRG_Soldier_F,PRIVATE,15,-15);
				};
			};
		};
		class BLU_A_F
		{
		  	name = $STR_A3_A_CfgFactionClasses_BLU_A_F0;
			class Infantry
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Infantry0;
				class B_A_InfSquad
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSquad0;
					side = TWest;
					faction = BLU_A_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,B_A_soldier_SL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,B_A_RadioOperator_F,PRIVATE,5,-5);
					GROUP_UNIT(2,TWest,B_A_soldier_LAT_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TWest,B_A_soldier_M_F,PRIVATE,10,-10);
					GROUP_UNIT(4,TWest,B_A_soldier_TL_F,SERGEANT,-10,-10);
					GROUP_UNIT(5,TWest,B_A_soldier_AR_F,CORPORAL,15,-15);
					GROUP_UNIT(6,TWest,B_A_soldier_A_F,PRIVATE,-15,-15);
					GROUP_UNIT(7,TWest,B_A_medic_F,PRIVATE,20,-20);
				};
				class B_A_InfSquad_Weapons
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSquad_Weapons0;
					side = TWest;
					faction = BLU_A_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,B_A_soldier_SL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,B_A_soldier_AR_F,PRIVATE,5,-5);
					GROUP_UNIT(2,TWest,B_A_soldier_GL_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TWest,B_A_soldier_M_F,PRIVATE,10,-10);
					GROUP_UNIT(4,TWest,B_A_soldier_AT_F,PRIVATE,-10,-10);
					GROUP_UNIT(5,TWest,B_A_soldier_AAT_F,PRIVATE,15,-15);
					GROUP_UNIT(6,TWest,B_A_soldier_A_F,PRIVATE,-15,-15);
					GROUP_UNIT(7,TWest,B_A_medic_F,PRIVATE,20,-20);
				};
				class B_A_InfTeam
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam0;
					side = TWest;
					faction = BLU_A_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,B_A_soldier_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,B_A_soldier_AR_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,B_A_soldier_GL_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TWest,B_A_soldier_LAT_F,PRIVATE,10,-10);
				};
				class B_A_InfTeam_AT
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam_AT0;
					side = TWest;
					faction = BLU_A_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,B_A_soldier_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,B_A_soldier_AT_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,B_A_soldier_AT_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TWest,B_A_soldier_AAT_F,PRIVATE,10,-10);
				};
				class B_A_InfTeam_AA
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam_AA0;
					side = TWest;
					faction = BLU_A_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,B_A_soldier_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,B_A_soldier_AA_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,B_A_soldier_AA_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TWest,B_A_soldier_AAA_F,PRIVATE,10,-10);
				};
				class B_A_InfSentry
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSentry0;
					side = TWest;
					faction = BLU_A_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,B_A_soldier_GL_F,CORPORAL,0,0);
					GROUP_UNIT(1,TWest,B_A_soldier_F,PRIVATE,5,-5);
				};
			};
			class SpecOps
			{
				name = $STR_A3_CfgGroups_West_BLU_F_SpecOps0;
				class B_A_ReconTeam
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_ReconTeam0;
					side = TWest;
					faction = BLU_A_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";
					GROUP_UNIT(0,TWest,B_A_recon_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,B_A_recon_M_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,B_A_recon_medic_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TWest,B_A_recon_LAT_F,CORPORAL,10,-10);
					GROUP_UNIT(4,TWest,B_A_recon_JTAC_F,PRIVATE,-10,-10);
					GROUP_UNIT(5,TWest,B_A_recon_exp_F,PRIVATE,15,-15);
				};
				class B_A_ReconPatrol
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_ReconPatrol0;
					side = TWest;
					faction = BLU_A_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";
					GROUP_UNIT(0,TWest,B_A_recon_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,B_A_recon_M_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,B_A_recon_medic_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TWest,B_A_recon_F,PRIVATE,10,-10);
				};
				class B_A_ReconSentry
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_ReconSentry0;
					side = TWest;
					faction = BLU_A_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";
					GROUP_UNIT(0,TWest,B_A_recon_M_F,CORPORAL,0,0);
					GROUP_UNIT(1,TWest,B_A_recon_F,PRIVATE,5,-5);
				};
				class B_A_DiverTeam
				{
					name = $STR_A3_CfgGroups_West_BLU_F_SpecOps_BUS_DiverTeam0;
					side = TWest;
					faction = BLU_A_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";
					GROUP_UNIT(0,TWest,B_A_diver_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,B_A_diver_exp_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,B_A_diver_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TWest,B_A_diver_F,PRIVATE,10,-10);
				};
			};
			class Support
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Support0;
				class B_A_Support_CLS
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Support_BUS_Support_CLS0;
					side = TWest;
					faction = BLU_A_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,B_A_soldier_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,B_A_soldier_AR_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,B_A_medic_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TWest,B_A_medic_F,PRIVATE,10,-10);
				};
				class B_A_Support_EOD
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Support_BUS_Support_EOD0;
					side = TWest;
					faction = BLU_A_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,B_A_soldier_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,B_A_engineer_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,B_A_soldier_exp_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TWest,B_A_soldier_exp_F,PRIVATE,10,-10);
				};
				class B_A_Support_ENG
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Support_BUS_Support_ENG0;
					side = TWest;
					faction = BLU_A_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,B_A_soldier_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,B_A_engineer_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,B_A_engineer_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TWest,B_A_soldier_repair_F,PRIVATE,10,-10);
				};
				class B_A_Recon_EOD
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Support_BUS_Recon_EOD0;
					side = TWest;
					faction = BLU_A_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,B_A_recon_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,B_A_recon_exp_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,B_A_recon_exp_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TWest,B_A_recon_F,PRIVATE,10,-10);
				};
				class B_A_Support_MG
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Support_BUS_Support_MG0;
					side = TWest;
					faction = BLU_A_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,B_A_soldier_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,B_A_support_MG_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,B_A_support_AMG_F,PRIVATE,-5,-5);
				};
				class B_A_Support_GMG
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Support_BUS_Support_GMG0;
					side = TWest;
					faction = BLU_A_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,B_A_soldier_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,B_A_support_GMG_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,B_A_support_AMG_F,PRIVATE,-5,-5);
				};
				class B_A_Support_Mort
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Support_BUS_Support_Mort0;
					side = TWest;
					faction = BLU_A_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_mortar.paa";
					GROUP_UNIT(0,TWest,B_A_soldier_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,B_A_support_Mort_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,B_A_support_AMort_F,PRIVATE,-5,-5);
				};
			};
			class Motorized
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Motorized0;
				class B_A_MotInf_Team
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_Team0;
					side = TWest;
					faction = BLU_A_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_motor_inf.paa";
					GROUP_UNIT(0,TWest,B_A_MRAP_03_gmg_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,B_A_soldier_LAT_F,PRIVATE,5,-5);
				};
				class B_A_MotInf_AT
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_AT0;
					side = TWest;
					faction = BLU_A_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_motor_inf.paa";
					GROUP_UNIT(0,TWest,B_A_MRAP_03_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,B_A_soldier_AT_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,B_A_soldier_AT_F,PRIVATE,-5,-5);
				};
				class B_A_MotInf_AA
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_AA0;
					side = TWest;
					faction = BLU_A_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_motor_inf.paa";
					GROUP_UNIT(0,TWest,B_A_MRAP_03_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,B_A_soldier_AA_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,B_A_soldier_AA_F,PRIVATE,-5,-5);
				};
				class B_A_MotInf_MGTeam
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_MGTeam0;
					side = TWest;
					faction = BLU_A_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_motor_inf.paa";
					GROUP_UNIT(0,TWest,B_A_MRAP_03_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,B_A_support_MG_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,B_A_support_AMG_F,CORPORAL,-5,-5);
				};
				class B_A_MotInf_GMGTeam
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_GMGTeam0;
					side = TWest;
					faction = BLU_A_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_motor_inf.paa";
					GROUP_UNIT(0,TWest,B_A_MRAP_03_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,B_A_support_GMG_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,B_A_support_AMG_F,CORPORAL,-5,-5);
				};
				class B_A_MotInf_MortTeam
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_MortTeam0;
					side = TWest;
					faction = BLU_A_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_motor_inf.paa";
					GROUP_UNIT(0,TWest,B_A_MRAP_03_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,B_A_support_Mort_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,B_A_support_AMort_F,CORPORAL,-5,-5);
				};
				class B_A_MotInf_Reinforcements
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_Reinforce0;
					side = TWest;
					faction = BLU_A_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_motor_inf.paa";
					GROUP_UNIT(0,TWest,B_A_Truck_01_transport_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,B_A_soldier_SL_F,SERGEANT,5,0);
					GROUP_UNIT(2,TWest,B_A_RadioOperator_F,PRIVATE,5,-2);
					GROUP_UNIT(3,TWest,B_A_soldier_LAT_F,CORPORAL,5,-4);
					GROUP_UNIT(4,TWest,B_A_soldier_M_F,PRIVATE,5,-6);
					GROUP_UNIT(5,TWest,B_A_soldier_TL_F,SERGEANT,5,-8);
					GROUP_UNIT(6,TWest,B_A_soldier_AR_F,CORPORAL,5,-10);
					GROUP_UNIT(7,TWest,B_A_soldier_A_F,PRIVATE,5,-12);
					GROUP_UNIT(8,TWest,B_A_medic_F,PRIVATE,5,-14);
					GROUP_UNIT(9,TWest,B_A_soldier_SL_F,SERGEANT,-5,0);
					GROUP_UNIT(10,TWest,B_A_RadioOperator_F,PRIVATE,-5,-2);
					GROUP_UNIT(11,TWest,B_A_soldier_LAT_F,CORPORAL,-5,-4);
					GROUP_UNIT(12,TWest,B_A_soldier_M_F,PRIVATE,-5,-6);
					GROUP_UNIT(13,TWest,B_A_soldier_TL_F,SERGEANT,-5,-8);
					GROUP_UNIT(14,TWest,B_A_soldier_AR_F,CORPORAL,-5,-10);
					GROUP_UNIT(15,TWest,B_A_soldier_A_F,PRIVATE,-5,-12);
					GROUP_UNIT(16,TWest,B_A_medic_F,PRIVATE,-5,-14);
				};
			};
			class Mechanized
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Mechanized0;
				class B_A_MechInfSquad
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Mechanized_BUS_MechInfSquad0;
					side = TWest;
					faction = BLU_A_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_mech_inf.paa";
					GROUP_UNIT(0,TWest,B_A_APC_tracked_03_cannon_F,LIEUTENANT,0,0);
					GROUP_UNIT(1,TWest,B_A_soldier_SL_F,SERGEANT,5,-5);
					GROUP_UNIT(2,TWest,B_A_RadioOperator_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TWest,B_A_soldier_LAT_F,CORPORAL,10,-10);
					GROUP_UNIT(4,TWest,B_A_soldier_TL_F,PRIVATE,-10,-10);
					GROUP_UNIT(5,TWest,B_A_soldier_AR_F,SERGEANT,15,-15);
					GROUP_UNIT(6,TWest,B_A_soldier_A_F,CORPORAL,-15,-15);
					GROUP_UNIT(7,TWest,B_A_medic_F,PRIVATE,20,-20);
				};
				class B_A_MechInf_AT
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Mechanized_BUS_MechInf_AT0;
					side = TWest;
					faction = BLU_A_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_mech_inf.paa";
					GROUP_UNIT(0,TWest,B_A_APC_tracked_03_cannon_F,LIEUTENANT,0,0);
					GROUP_UNIT(1,TWest,B_A_soldier_SL_F,SERGEANT,5,-5);
					GROUP_UNIT(2,TWest,B_A_soldier_AT_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TWest,B_A_soldier_AT_F,PRIVATE,10,-10);
					GROUP_UNIT(4,TWest,B_A_soldier_AT_F,PRIVATE,-10,-10);
					GROUP_UNIT(5,TWest,B_A_soldier_AAT_F,PRIVATE,15,-15);
					GROUP_UNIT(6,TWest,B_A_soldier_AAT_F,PRIVATE,-15,-15);
					GROUP_UNIT(7,TWest,B_A_soldier_AAT_F,PRIVATE,20,-20);
				};
				class B_A_MechInf_AA
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Mechanized_BUS_MechInf_AA0;
					side = TWest;
					faction = BLU_A_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_mech_inf.paa";
					GROUP_UNIT(0,TWest,B_A_APC_tracked_03_cannon_F,LIEUTENANT,0,0);
					GROUP_UNIT(1,TWest,B_A_soldier_SL_F,SERGEANT,5,-5);
					GROUP_UNIT(2,TWest,B_A_soldier_AA_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TWest,B_A_soldier_AA_F,PRIVATE,10,-10);
					GROUP_UNIT(4,TWest,B_A_soldier_AA_F,PRIVATE,-10,-10);
					GROUP_UNIT(5,TWest,B_A_soldier_AAA_F,PRIVATE,15,-15);
					GROUP_UNIT(6,TWest,B_A_soldier_AAA_F,PRIVATE,-15,-15);
					GROUP_UNIT(7,TWest,B_A_soldier_AAA_F,PRIVATE,20,-20);
				};
				class B_A_MechInf_Support
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Mechanized_BUS_MechInf_Support0;
					side = TWest;
					faction = BLU_A_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_mech_inf.paa";
					GROUP_UNIT(0,TWest,B_A_APC_tracked_03_cannon_F,LIEUTENANT,0,0);
					GROUP_UNIT(1,TWest,B_A_soldier_SL_F,SERGEANT,5,-5);
					GROUP_UNIT(2,TWest,B_A_soldier_repair_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TWest,B_A_engineer_F,PRIVATE,10,-10);
					GROUP_UNIT(4,TWest,B_A_medic_F,PRIVATE,-10,-10);
					GROUP_UNIT(5,TWest,B_A_soldier_AR_F,CORPORAL,15,-15);
					GROUP_UNIT(6,TWest,B_A_soldier_exp_F,PRIVATE,-15,-15);
					GROUP_UNIT(7,TWest,B_A_soldier_A_F,PRIVATE,20,-20);
				};
			};
		};
		class BLU_A_tna_F
		{
		  	name = $STR_A3_A_CfgFactionClasses_BLU_A_tna_F0;
			class Infantry
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Infantry0;
				class B_A_InfSquad_T
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSquad0;
					side = TWest;
					faction = BLU_A_tna_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,B_A_soldier_SL_tna_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,B_A_RadioOperator_tna_F,PRIVATE,5,-5);
					GROUP_UNIT(2,TWest,B_A_soldier_LAT_tna_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TWest,B_A_soldier_M_tna_F,PRIVATE,10,-10);
					GROUP_UNIT(4,TWest,B_A_soldier_TL_tna_F,SERGEANT,-10,-10);
					GROUP_UNIT(5,TWest,B_A_soldier_AR_tna_F,CORPORAL,15,-15);
					GROUP_UNIT(6,TWest,B_A_soldier_A_tna_F,PRIVATE,-15,-15);
					GROUP_UNIT(7,TWest,B_A_medic_tna_F,PRIVATE,20,-20);
				};
				class B_A_InfSquad_Weapons_T
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSquad_Weapons0;
					side = TWest;
					faction = BLU_A_tna_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,B_A_soldier_SL_tna_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,B_A_soldier_AR_tna_F,PRIVATE,5,-5);
					GROUP_UNIT(2,TWest,B_A_soldier_GL_tna_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TWest,B_A_soldier_M_tna_F,PRIVATE,10,-10);
					GROUP_UNIT(4,TWest,B_A_soldier_AT_tna_F,PRIVATE,-10,-10);
					GROUP_UNIT(5,TWest,B_A_soldier_AAT_tna_F,PRIVATE,15,-15);
					GROUP_UNIT(6,TWest,B_A_soldier_A_tna_F,PRIVATE,-15,-15);
					GROUP_UNIT(7,TWest,B_A_medic_tna_F,PRIVATE,20,-20);
				};
				class B_A_InfTeam_T
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam0;
					side = TWest;
					faction = BLU_A_tna_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,B_A_soldier_TL_tna_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,B_A_soldier_AR_tna_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,B_A_soldier_GL_tna_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TWest,B_A_soldier_LAT_tna_F,PRIVATE,10,-10);
				};
				class B_A_InfTeam_AT_T
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam_AT0;
					side = TWest;
					faction = BLU_A_tna_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,B_A_soldier_TL_tna_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,B_A_soldier_AT_tna_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,B_A_soldier_AT_tna_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TWest,B_A_soldier_AAT_tna_F,PRIVATE,10,-10);
				};
				class B_A_InfTeam_AA_T
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam_AA0;
					side = TWest;
					faction = BLU_A_tna_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,B_A_soldier_TL_tna_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,B_A_soldier_AA_tna_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,B_A_soldier_AA_tna_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TWest,B_A_soldier_AAA_tna_F,PRIVATE,10,-10);
				};
				class B_A_InfSentry_T
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSentry0;
					side = TWest;
					faction = BLU_A_tna_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,B_A_soldier_GL_tna_F,CORPORAL,0,0);
					GROUP_UNIT(1,TWest,B_A_soldier_tna_F,PRIVATE,5,-5);
				};
			};
			class SpecOps
			{
				name = $STR_A3_CfgGroups_West_BLU_F_SpecOps0;
				class B_A_ReconTeam_T
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_ReconTeam0;
					side = TWest;
					faction = BLU_A_tna_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";
					GROUP_UNIT(0,TWest,B_A_recon_TL_tna_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,B_A_recon_M_tna_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,B_A_recon_medic_tna_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TWest,B_A_recon_LAT_tna_F,CORPORAL,10,-10);
					GROUP_UNIT(4,TWest,B_A_recon_JTAC_tna_F,PRIVATE,-10,-10);
					GROUP_UNIT(5,TWest,B_A_recon_exp_tna_F,PRIVATE,15,-15);
				};
				class B_A_ReconPatrol_T
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_ReconPatrol0;
					side = TWest;
					faction = BLU_A_tna_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";
					GROUP_UNIT(0,TWest,B_A_recon_TL_tna_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,B_A_recon_M_tna_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,B_A_recon_medic_tna_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TWest,B_A_recon_tna_F,PRIVATE,10,-10);
				};
				class B_A_ReconSentry_T
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_ReconSentry0;
					side = TWest;
					faction = BLU_A_tna_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";
					GROUP_UNIT(0,TWest,B_A_recon_M_tna_F,CORPORAL,0,0);
					GROUP_UNIT(1,TWest,B_A_recon_tna_F,PRIVATE,5,-5);
				};
				class B_A_DiverTeam_T
				{
					name = $STR_A3_CfgGroups_West_BLU_F_SpecOps_BUS_DiverTeam0;
					side = TWest;
					faction = BLU_A_tna_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";
					GROUP_UNIT(0,TWest,B_A_diver_TL_tna_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,B_A_diver_exp_tna_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,B_A_diver_tna_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TWest,B_A_diver_tna_F,PRIVATE,10,-10);
				};
			};
			class Support
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Support0;
				class B_A_Support_CLS_T
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Support_BUS_Support_CLS0;
					side = TWest;
					faction = BLU_A_tna_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,B_A_soldier_TL_tna_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,B_A_soldier_AR_tna_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,B_A_medic_tna_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TWest,B_A_medic_tna_F,PRIVATE,10,-10);
				};
				class B_A_Support_EOD_T
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Support_BUS_Support_EOD0;
					side = TWest;
					faction = BLU_A_tna_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,B_A_soldier_TL_tna_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,B_A_engineer_tna_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,B_A_soldier_exp_tna_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TWest,B_A_soldier_exp_tna_F,PRIVATE,10,-10);
				};
				class B_A_Support_ENG_T
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Support_BUS_Support_ENG0;
					side = TWest;
					faction = BLU_A_tna_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,B_A_soldier_TL_tna_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,B_A_engineer_tna_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,B_A_engineer_tna_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TWest,B_A_soldier_repair_tna_F,PRIVATE,10,-10);
				};
				class B_A_Recon_EOD_T
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Support_BUS_Recon_EOD0;
					side = TWest;
					faction = BLU_A_tna_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,B_A_recon_TL_tna_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,B_A_recon_exp_tna_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,B_A_recon_exp_tna_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TWest,B_A_recon_tna_F,PRIVATE,10,-10);
				};
				class B_A_Support_MG_T
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Support_BUS_Support_MG0;
					side = TWest;
					faction = BLU_A_tna_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,B_A_soldier_TL_tna_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,B_A_support_MG_tna_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,B_A_support_AMG_tna_F,PRIVATE,-5,-5);
				};
				class B_A_Support_GMG_T
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Support_BUS_Support_GMG0;
					side = TWest;
					faction = BLU_A_tna_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,B_A_soldier_TL_tna_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,B_A_support_GMG_tna_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,B_A_support_AMG_tna_F,PRIVATE,-5,-5);
				};
				class B_A_Support_Mort_T
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Support_BUS_Support_Mort0;
					side = TWest;
					faction = BLU_A_tna_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_mortar.paa";
					GROUP_UNIT(0,TWest,B_A_soldier_TL_tna_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,B_A_support_Mort_tna_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,B_A_support_AMort_tna_F,PRIVATE,-5,-5);
				};
			};
			class Motorized
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Motorized0;
				class B_A_MotInf_Team_T
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_Team0;
					side = TWest;
					faction = BLU_A_tna_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_motor_inf.paa";
					GROUP_UNIT(0,TWest,B_A_MRAP_03_gmg_tna_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,B_A_soldier_LAT_tna_F,PRIVATE,5,-5);
				};
				class B_A_MotInf_AT_T
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_AT0;
					side = TWest;
					faction = BLU_A_tna_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_motor_inf.paa";
					GROUP_UNIT(0,TWest,B_A_MRAP_03_tna_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,B_A_soldier_AT_tna_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,B_A_soldier_AT_tna_F,PRIVATE,-5,-5);
				};
				class B_A_MotInf_AA_T
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_AA0;
					side = TWest;
					faction = BLU_A_tna_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_motor_inf.paa";
					GROUP_UNIT(0,TWest,B_A_MRAP_03_tna_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,B_A_soldier_AA_tna_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,B_A_soldier_AA_tna_F,PRIVATE,-5,-5);
				};
				class B_A_MotInf_MGTeam_T
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_MGTeam0;
					side = TWest;
					faction = BLU_A_tna_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_motor_inf.paa";
					GROUP_UNIT(0,TWest,B_A_MRAP_03_tna_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,B_A_support_MG_tna_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,B_A_support_AMG_tna_F,CORPORAL,-5,-5);
				};
				class B_A_MotInf_GMGTeam_T
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_GMGTeam0;
					side = TWest;
					faction = BLU_A_tna_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_motor_inf.paa";
					GROUP_UNIT(0,TWest,B_A_MRAP_03_tna_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,B_A_support_GMG_tna_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,B_A_support_AMG_tna_F,CORPORAL,-5,-5);
				};
				class B_A_MotInf_MortTeam_T
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_MortTeam0;
					side = TWest;
					faction = BLU_A_tna_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_motor_inf.paa";
					GROUP_UNIT(0,TWest,B_A_MRAP_03_tna_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,B_A_support_Mort_tna_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,B_A_support_AMort_tna_F,CORPORAL,-5,-5);
				};
				class B_A_MotInf_Reinforcements_T
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_Reinforce0;
					side = TWest;
					faction = BLU_A_tna_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_motor_inf.paa";
					GROUP_UNIT(0,TWest,B_A_Truck_01_transport_tna_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,B_A_soldier_SL_tna_F,SERGEANT,5,0);
					GROUP_UNIT(2,TWest,B_A_RadioOperator_tna_F,PRIVATE,5,-2);
					GROUP_UNIT(3,TWest,B_A_soldier_LAT_tna_F,CORPORAL,5,-4);
					GROUP_UNIT(4,TWest,B_A_soldier_M_tna_F,PRIVATE,5,-6);
					GROUP_UNIT(5,TWest,B_A_soldier_TL_tna_F,SERGEANT,5,-8);
					GROUP_UNIT(6,TWest,B_A_soldier_AR_tna_F,CORPORAL,5,-10);
					GROUP_UNIT(7,TWest,B_A_soldier_A_tna_F,PRIVATE,5,-12);
					GROUP_UNIT(8,TWest,B_A_medic_tna_F,PRIVATE,5,-14);
					GROUP_UNIT(9,TWest,B_A_soldier_SL_tna_F,SERGEANT,-5,0);
					GROUP_UNIT(10,TWest,B_A_RadioOperator_tna_F,PRIVATE,-5,-2);
					GROUP_UNIT(11,TWest,B_A_soldier_LAT_tna_F,CORPORAL,-5,-4);
					GROUP_UNIT(12,TWest,B_A_soldier_M_tna_F,PRIVATE,-5,-6);
					GROUP_UNIT(13,TWest,B_A_soldier_TL_tna_F,SERGEANT,-5,-8);
					GROUP_UNIT(14,TWest,B_A_soldier_AR_tna_F,CORPORAL,-5,-10);
					GROUP_UNIT(15,TWest,B_A_soldier_A_tna_F,PRIVATE,-5,-12);
					GROUP_UNIT(16,TWest,B_A_medic_tna_F,PRIVATE,-5,-14);
				};
			};
			class Mechanized
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Mechanized0;
				class B_A_MechInfSquad_T
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Mechanized_BUS_MechInfSquad0;
					side = TWest;
					faction = BLU_A_tna_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_mech_inf.paa";
					GROUP_UNIT(0,TWest,B_A_APC_tracked_03_cannon_tna_F,LIEUTENANT,0,0);
					GROUP_UNIT(1,TWest,B_A_soldier_SL_tna_F,SERGEANT,5,-5);
					GROUP_UNIT(2,TWest,B_A_RadioOperator_tna_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TWest,B_A_soldier_LAT_tna_F,CORPORAL,10,-10);
					GROUP_UNIT(4,TWest,B_A_soldier_TL_tna_F,PRIVATE,-10,-10);
					GROUP_UNIT(5,TWest,B_A_soldier_AR_tna_F,SERGEANT,15,-15);
					GROUP_UNIT(6,TWest,B_A_soldier_A_tna_F,CORPORAL,-15,-15);
					GROUP_UNIT(7,TWest,B_A_medic_tna_F,PRIVATE,20,-20);
				};
				class B_A_MechInf_AT_T
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Mechanized_BUS_MechInf_AT0;
					side = TWest;
					faction = BLU_A_tna_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_mech_inf.paa";
					GROUP_UNIT(0,TWest,B_A_APC_tracked_03_cannon_tna_F,LIEUTENANT,0,0);
					GROUP_UNIT(1,TWest,B_A_soldier_SL_tna_F,SERGEANT,5,-5);
					GROUP_UNIT(2,TWest,B_A_soldier_AT_tna_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TWest,B_A_soldier_AT_tna_F,PRIVATE,10,-10);
					GROUP_UNIT(4,TWest,B_A_soldier_AT_tna_F,PRIVATE,-10,-10);
					GROUP_UNIT(5,TWest,B_A_soldier_AAT_tna_F,PRIVATE,15,-15);
					GROUP_UNIT(6,TWest,B_A_soldier_AAT_tna_F,PRIVATE,-15,-15);
					GROUP_UNIT(7,TWest,B_A_soldier_AAT_tna_F,PRIVATE,20,-20);
				};
				class B_A_MechInf_AA_T
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Mechanized_BUS_MechInf_AA0;
					side = TWest;
					faction = BLU_A_tna_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_mech_inf.paa";
					GROUP_UNIT(0,TWest,B_A_APC_tracked_03_cannon_tna_F,LIEUTENANT,0,0);
					GROUP_UNIT(1,TWest,B_A_soldier_SL_tna_F,SERGEANT,5,-5);
					GROUP_UNIT(2,TWest,B_A_soldier_AA_tna_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TWest,B_A_soldier_AA_tna_F,PRIVATE,10,-10);
					GROUP_UNIT(4,TWest,B_A_soldier_AA_tna_F,PRIVATE,-10,-10);
					GROUP_UNIT(5,TWest,B_A_soldier_AAA_tna_F,PRIVATE,15,-15);
					GROUP_UNIT(6,TWest,B_A_soldier_AAA_tna_F,PRIVATE,-15,-15);
					GROUP_UNIT(7,TWest,B_A_soldier_AAA_tna_F,PRIVATE,20,-20);
				};
				class B_A_MechInf_Support_T
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Mechanized_BUS_MechInf_Support0;
					side = TWest;
					faction = BLU_A_tna_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_mech_inf.paa";
					GROUP_UNIT(0,TWest,B_A_APC_tracked_03_cannon_tna_F,LIEUTENANT,0,0);
					GROUP_UNIT(1,TWest,B_A_soldier_SL_tna_F,SERGEANT,5,-5);
					GROUP_UNIT(2,TWest,B_A_soldier_repair_tna_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TWest,B_A_engineer_tna_F,PRIVATE,10,-10);
					GROUP_UNIT(4,TWest,B_A_medic_tna_F,PRIVATE,-10,-10);
					GROUP_UNIT(5,TWest,B_A_soldier_AR_tna_F,CORPORAL,15,-15);
					GROUP_UNIT(6,TWest,B_A_soldier_exp_tna_F,PRIVATE,-15,-15);
					GROUP_UNIT(7,TWest,B_A_soldier_A_tna_F,PRIVATE,20,-20);
				};
			};
		};
		class BLU_A_wdl_F
		{
		  	name = $STR_A3_A_CfgFactionClasses_BLU_A_wdl_F0;
			class Infantry
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Infantry0;
				class B_A_InfSquad_W
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSquad0;
					side = TWest;
					faction = BLU_A_wdl_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,B_A_soldier_SL_wdl_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,B_A_RadioOperator_wdl_F,PRIVATE,5,-5);
					GROUP_UNIT(2,TWest,B_A_soldier_LAT_wdl_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TWest,B_A_soldier_M_wdl_F,PRIVATE,10,-10);
					GROUP_UNIT(4,TWest,B_A_soldier_TL_wdl_F,SERGEANT,-10,-10);
					GROUP_UNIT(5,TWest,B_A_soldier_AR_wdl_F,CORPORAL,15,-15);
					GROUP_UNIT(6,TWest,B_A_soldier_A_wdl_F,PRIVATE,-15,-15);
					GROUP_UNIT(7,TWest,B_A_medic_wdl_F,PRIVATE,20,-20);
				};
				class B_A_InfSquad_Weapons_W
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSquad_Weapons0;
					side = TWest;
					faction = BLU_A_wdl_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,B_A_soldier_SL_wdl_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,B_A_soldier_AR_wdl_F,PRIVATE,5,-5);
					GROUP_UNIT(2,TWest,B_A_soldier_GL_wdl_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TWest,B_A_soldier_M_wdl_F,PRIVATE,10,-10);
					GROUP_UNIT(4,TWest,B_A_soldier_AT_wdl_F,PRIVATE,-10,-10);
					GROUP_UNIT(5,TWest,B_A_soldier_AAT_wdl_F,PRIVATE,15,-15);
					GROUP_UNIT(6,TWest,B_A_soldier_A_wdl_F,PRIVATE,-15,-15);
					GROUP_UNIT(7,TWest,B_A_medic_wdl_F,PRIVATE,20,-20);
				};
				class B_A_InfTeam_W
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam0;
					side = TWest;
					faction = BLU_A_wdl_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,B_A_soldier_TL_wdl_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,B_A_soldier_AR_wdl_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,B_A_soldier_GL_wdl_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TWest,B_A_soldier_LAT_wdl_F,PRIVATE,10,-10);
				};
				class B_A_InfTeam_AT_W
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam_AT0;
					side = TWest;
					faction = BLU_A_wdl_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,B_A_soldier_TL_wdl_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,B_A_soldier_AT_wdl_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,B_A_soldier_AT_wdl_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TWest,B_A_soldier_AAT_wdl_F,PRIVATE,10,-10);
				};
				class B_A_InfTeam_AA_W
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam_AA0;
					side = TWest;
					faction = BLU_A_wdl_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,B_A_soldier_TL_wdl_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,B_A_soldier_AA_wdl_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,B_A_soldier_AA_wdl_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TWest,B_A_soldier_AAA_wdl_F,PRIVATE,10,-10);
				};
				class B_A_InfSentry_W
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSentry0;
					side = TWest;
					faction = BLU_A_wdl_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,B_A_soldier_GL_wdl_F,CORPORAL,0,0);
					GROUP_UNIT(1,TWest,B_A_soldier_wdl_F,PRIVATE,5,-5);
				};
			};
			class SpecOps
			{
				name = $STR_A3_CfgGroups_West_BLU_F_SpecOps0;
				class B_A_ReconTeam_W
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_ReconTeam0;
					side = TWest;
					faction = BLU_A_wdl_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";
					GROUP_UNIT(0,TWest,B_A_recon_TL_wdl_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,B_A_recon_M_wdl_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,B_A_recon_medic_wdl_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TWest,B_A_recon_LAT_wdl_F,CORPORAL,10,-10);
					GROUP_UNIT(4,TWest,B_A_recon_JTAC_wdl_F,PRIVATE,-10,-10);
					GROUP_UNIT(5,TWest,B_A_recon_exp_wdl_F,PRIVATE,15,-15);
				};
				class B_A_ReconPatrol_W
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_ReconPatrol0;
					side = TWest;
					faction = BLU_A_wdl_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";
					GROUP_UNIT(0,TWest,B_A_recon_TL_wdl_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,B_A_recon_M_wdl_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,B_A_recon_medic_wdl_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TWest,B_A_recon_wdl_F,PRIVATE,10,-10);
				};
				class B_A_ReconSentry_W
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_ReconSentry0;
					side = TWest;
					faction = BLU_A_wdl_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";
					GROUP_UNIT(0,TWest,B_A_recon_M_wdl_F,CORPORAL,0,0);
					GROUP_UNIT(1,TWest,B_A_recon_wdl_F,PRIVATE,5,-5);
				};
			};
			class Support
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Support0;
				class B_A_Support_CLS_W
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Support_BUS_Support_CLS0;
					side = TWest;
					faction = BLU_A_wdl_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,B_A_soldier_TL_wdl_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,B_A_soldier_AR_wdl_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,B_A_medic_wdl_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TWest,B_A_medic_wdl_F,PRIVATE,10,-10);
				};
				class B_A_Support_EOD_W
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Support_BUS_Support_EOD0;
					side = TWest;
					faction = BLU_A_wdl_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,B_A_soldier_TL_wdl_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,B_A_engineer_wdl_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,B_A_soldier_exp_wdl_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TWest,B_A_soldier_exp_wdl_F,PRIVATE,10,-10);
				};
				class B_A_Support_ENG_W
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Support_BUS_Support_ENG0;
					side = TWest;
					faction = BLU_A_wdl_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,B_A_soldier_TL_wdl_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,B_A_engineer_wdl_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,B_A_engineer_wdl_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TWest,B_A_soldier_repair_wdl_F,PRIVATE,10,-10);
				};
				class B_A_Recon_EOD_W
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Support_BUS_Recon_EOD0;
					side = TWest;
					faction = BLU_A_wdl_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,B_A_recon_TL_wdl_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,B_A_recon_exp_wdl_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,B_A_recon_exp_wdl_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TWest,B_A_recon_wdl_F,PRIVATE,10,-10);
				};
				class B_A_Support_MG_W
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Support_BUS_Support_MG0;
					side = TWest;
					faction = BLU_A_wdl_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,B_A_soldier_TL_wdl_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,B_A_support_MG_wdl_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,B_A_support_AMG_wdl_F,PRIVATE,-5,-5);
				};
				class B_A_Support_GMG_W
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Support_BUS_Support_GMG0;
					side = TWest;
					faction = BLU_A_wdl_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,B_A_soldier_TL_wdl_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,B_A_support_GMG_wdl_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,B_A_support_AMG_wdl_F,PRIVATE,-5,-5);
				};
				class B_A_Support_Mort_W
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Support_BUS_Support_Mort0;
					side = TWest;
					faction = BLU_A_wdl_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_mortar.paa";
					GROUP_UNIT(0,TWest,B_A_soldier_TL_wdl_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,B_A_support_Mort_wdl_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,B_A_support_AMort_wdl_F,PRIVATE,-5,-5);
				};
			};
			class Motorized
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Motorized0;
				class B_A_MotInf_Team_W
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_Team0;
					side = TWest;
					faction = BLU_A_wdl_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_motor_inf.paa";
					GROUP_UNIT(0,TWest,B_A_MRAP_03_gmg_wdl_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,B_A_soldier_LAT_wdl_F,PRIVATE,5,-5);
				};
				class B_A_MotInf_AT_W
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_AT0;
					side = TWest;
					faction = BLU_A_wdl_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_motor_inf.paa";
					GROUP_UNIT(0,TWest,B_A_MRAP_03_wdl_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,B_A_soldier_AT_wdl_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,B_A_soldier_AT_wdl_F,PRIVATE,-5,-5);
				};
				class B_A_MotInf_AA_W
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_AA0;
					side = TWest;
					faction = BLU_A_wdl_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_motor_inf.paa";
					GROUP_UNIT(0,TWest,B_A_MRAP_03_wdl_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,B_A_soldier_AA_wdl_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,B_A_soldier_AA_wdl_F,PRIVATE,-5,-5);
				};
				class B_A_MotInf_MGTeam_W
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_MGTeam0;
					side = TWest;
					faction = BLU_A_wdl_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_motor_inf.paa";
					GROUP_UNIT(0,TWest,B_A_MRAP_03_wdl_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,B_A_support_MG_wdl_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,B_A_support_AMG_wdl_F,CORPORAL,-5,-5);
				};
				class B_A_MotInf_GMGTeam_W
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_GMGTeam0;
					side = TWest;
					faction = BLU_A_wdl_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_motor_inf.paa";
					GROUP_UNIT(0,TWest,B_A_MRAP_03_wdl_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,B_A_support_GMG_wdl_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,B_A_support_AMG_wdl_F,CORPORAL,-5,-5);
				};
				class B_A_MotInf_MortTeam_W
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_MortTeam0;
					side = TWest;
					faction = BLU_A_wdl_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_motor_inf.paa";
					GROUP_UNIT(0,TWest,B_A_MRAP_03_wdl_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,B_A_support_Mort_wdl_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,B_A_support_AMort_wdl_F,CORPORAL,-5,-5);
				};
				class B_A_MotInf_Reinforcements_W
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_Reinforce0;
					side = TWest;
					faction = BLU_A_wdl_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_motor_inf.paa";
					GROUP_UNIT(0,TWest,B_A_Truck_01_transport_wdl_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,B_A_soldier_SL_wdl_F,SERGEANT,5,0);
					GROUP_UNIT(2,TWest,B_A_RadioOperator_wdl_F,PRIVATE,5,-2);
					GROUP_UNIT(3,TWest,B_A_soldier_LAT_wdl_F,CORPORAL,5,-4);
					GROUP_UNIT(4,TWest,B_A_soldier_M_wdl_F,PRIVATE,5,-6);
					GROUP_UNIT(5,TWest,B_A_soldier_TL_wdl_F,SERGEANT,5,-8);
					GROUP_UNIT(6,TWest,B_A_soldier_AR_wdl_F,CORPORAL,5,-10);
					GROUP_UNIT(7,TWest,B_A_soldier_A_wdl_F,PRIVATE,5,-12);
					GROUP_UNIT(8,TWest,B_A_medic_wdl_F,PRIVATE,5,-14);
					GROUP_UNIT(9,TWest,B_A_soldier_SL_wdl_F,SERGEANT,-5,0);
					GROUP_UNIT(10,TWest,B_A_RadioOperator_wdl_F,PRIVATE,-5,-2);
					GROUP_UNIT(11,TWest,B_A_soldier_LAT_wdl_F,CORPORAL,-5,-4);
					GROUP_UNIT(12,TWest,B_A_soldier_M_wdl_F,PRIVATE,-5,-6);
					GROUP_UNIT(13,TWest,B_A_soldier_TL_wdl_F,SERGEANT,-5,-8);
					GROUP_UNIT(14,TWest,B_A_soldier_AR_wdl_F,CORPORAL,-5,-10);
					GROUP_UNIT(15,TWest,B_A_soldier_A_wdl_F,PRIVATE,-5,-12);
					GROUP_UNIT(16,TWest,B_A_medic_wdl_F,PRIVATE,-5,-14);
				};
			};
			class Mechanized
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Mechanized0;
				class B_A_MechInfSquad_W
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Mechanized_BUS_MechInfSquad0;
					side = TWest;
					faction = BLU_A_wdl_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_mech_inf.paa";
					GROUP_UNIT(0,TWest,B_A_APC_Tracked_03_cannon_wdl_F,LIEUTENANT,0,0);
					GROUP_UNIT(1,TWest,B_A_soldier_SL_wdl_F,SERGEANT,5,-5);
					GROUP_UNIT(2,TWest,B_A_RadioOperator_wdl_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TWest,B_A_soldier_LAT_wdl_F,CORPORAL,10,-10);
					GROUP_UNIT(4,TWest,B_A_soldier_TL_wdl_F,PRIVATE,-10,-10);
					GROUP_UNIT(5,TWest,B_A_soldier_AR_wdl_F,SERGEANT,15,-15);
					GROUP_UNIT(6,TWest,B_A_soldier_A_wdl_F,CORPORAL,-15,-15);
					GROUP_UNIT(7,TWest,B_A_medic_wdl_F,PRIVATE,20,-20);
				};
				class B_A_MechInf_AT_W
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Mechanized_BUS_MechInf_AT0;
					side = TWest;
					faction = BLU_A_wdl_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_mech_inf.paa";
					GROUP_UNIT(0,TWest,B_A_APC_Tracked_03_cannon_wdl_F,LIEUTENANT,0,0);
					GROUP_UNIT(1,TWest,B_A_soldier_SL_wdl_F,SERGEANT,5,-5);
					GROUP_UNIT(2,TWest,B_A_soldier_AT_wdl_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TWest,B_A_soldier_AT_wdl_F,PRIVATE,10,-10);
					GROUP_UNIT(4,TWest,B_A_soldier_AT_wdl_F,PRIVATE,-10,-10);
					GROUP_UNIT(5,TWest,B_A_soldier_AAT_wdl_F,PRIVATE,15,-15);
					GROUP_UNIT(6,TWest,B_A_soldier_AAT_wdl_F,PRIVATE,-15,-15);
					GROUP_UNIT(7,TWest,B_A_soldier_AAT_wdl_F,PRIVATE,20,-20);
				};
				class B_A_MechInf_AA_W
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Mechanized_BUS_MechInf_AA0;
					side = TWest;
					faction = BLU_A_wdl_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_mech_inf.paa";
					GROUP_UNIT(0,TWest,B_A_APC_Tracked_03_cannon_wdl_F,LIEUTENANT,0,0);
					GROUP_UNIT(1,TWest,B_A_soldier_SL_wdl_F,SERGEANT,5,-5);
					GROUP_UNIT(2,TWest,B_A_soldier_AA_wdl_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TWest,B_A_soldier_AA_wdl_F,PRIVATE,10,-10);
					GROUP_UNIT(4,TWest,B_A_soldier_AA_wdl_F,PRIVATE,-10,-10);
					GROUP_UNIT(5,TWest,B_A_soldier_AAA_wdl_F,PRIVATE,15,-15);
					GROUP_UNIT(6,TWest,B_A_soldier_AAA_wdl_F,PRIVATE,-15,-15);
					GROUP_UNIT(7,TWest,B_A_soldier_AAA_wdl_F,PRIVATE,20,-20);
				};
				class B_A_MechInf_Support_W
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Mechanized_BUS_MechInf_Support0;
					side = TWest;
					faction = BLU_A_wdl_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_mech_inf.paa";
					GROUP_UNIT(0,TWest,B_A_APC_Tracked_03_cannon_wdl_F,LIEUTENANT,0,0);
					GROUP_UNIT(1,TWest,B_A_soldier_SL_wdl_F,SERGEANT,5,-5);
					GROUP_UNIT(2,TWest,B_A_soldier_repair_wdl_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TWest,B_A_engineer_wdl_F,PRIVATE,10,-10);
					GROUP_UNIT(4,TWest,B_A_medic_wdl_F,PRIVATE,-10,-10);
					GROUP_UNIT(5,TWest,B_A_soldier_AR_wdl_F,CORPORAL,15,-15);
					GROUP_UNIT(6,TWest,B_A_soldier_exp_wdl_F,PRIVATE,-15,-15);
					GROUP_UNIT(7,TWest,B_A_soldier_A_wdl_F,PRIVATE,20,-20);
				};
			};
		};
		/*class BLU_ION_F
		{
			name = $STR_A3_A_CfgFactionClasses_BLU_ION_F0;
			class Infantry
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Infantry0;
				class B_ION_InfSquad
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSquad0;
					side = TWest;
					faction = BLU_ION_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,B_ION_soldier_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,B_ION_soldier_F,PRIVATE,5,-5);
					GROUP_UNIT(2,TWest,B_ION_soldier_LAT_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TWest,B_ION_soldier_M_F,PRIVATE,10,-10);
					GROUP_UNIT(4,TWest,B_ION_soldier_GL_F,SERGEANT,-10,-10);
					GROUP_UNIT(5,TWest,B_ION_soldier_AR_F,CORPORAL,15,-15);
					GROUP_UNIT(6,TWest,B_ION_engineer_F,PRIVATE,-15,-15);
					GROUP_UNIT(7,TWest,B_ION_soldier_medic_F,PRIVATE,20,-20);
				};
				class B_ION_InfTeam
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam0;
					side = TWest;
					faction = BLU_ION_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,B_ION_soldier_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,B_ION_soldier_AR_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,B_ION_soldier_GL_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TWest,B_ION_soldier_LAT_F,PRIVATE,10,-10);
				};
				class B_ION_InfSentry
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSentry0;
					side = TWest;
					faction = BLU_ION_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,B_ION_soldier_GL_F,CORPORAL,0,0);
					GROUP_UNIT(1,TWest,B_ION_soldier_F,PRIVATE,5,-5);
				};
			};
		};*/
		class BLU_NATO_lxWS
		{
			name = $STR_A3_A_CfgFactionClasses_BLU_D_lxWS0;
			class Infantry
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Infantry0;
				class BUS_D_InfSquad_lxWS
				{
					class Unit1
					{
						vehicle = Aegis_B_D_RadioOperator_F;
					};
				};
				delete BUS_D_ReconTeam_lxWS;
				delete BUS_D_ReconPatrol_lxWS;
				delete BUS_D_ReconSentry_lxWS;
			};
			class SpecOps
			{
				name = $STR_A3_CfgGroups_West_BLU_F_SpecOps0;
				class BUS_D_ReconTeam
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_ReconTeam0;
					side = TWest;
					faction = BLU_NATO_lxWS;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";
					GROUP_UNIT(0,TWest,B_D_recon_TL_lxWS,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,B_D_recon_M_lxWS,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,B_D_recon_medic_lxWS,PRIVATE,-5,-5);
					GROUP_UNIT(3,TWest,B_D_recon_LAT_lxWS,CORPORAL,10,-10);
					GROUP_UNIT(4,TWest,B_D_recon_JTAC_lxWS,PRIVATE,-10,-10);
					GROUP_UNIT(5,TWest,B_D_recon_exp_lxWS,PRIVATE,15,-15);
				};
				class BUS_D_ReconPatrol
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_ReconPatrol0;
					side = TWest;
					faction = BLU_NATO_lxWS;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";
					GROUP_UNIT(0,TWest,B_D_recon_TL_lxWS,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,B_D_recon_M_lxWS,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,B_D_recon_medic_lxWS,PRIVATE,-5,-5);
					GROUP_UNIT(3,TWest,B_D_recon_lxWS,PRIVATE,10,-10);
				};
				class BUS_D_ReconSentry
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_ReconSentry0;
					side = TWest;
					faction = BLU_NATO_lxWS;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";
					GROUP_UNIT(0,TWest,B_D_recon_M_lxWS,CORPORAL,0,0);
					GROUP_UNIT(1,TWest,B_D_recon_lxWS,PRIVATE,5,-5);
				};
				class BUS_D_ReconSquad
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_ReconSquad0;
					side = TWest;
					faction = BLU_NATO_lxWS;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";
					GROUP_UNIT(0,TWest,B_D_recon_TL_lxWS,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,B_D_recon_M_lxWS,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,B_D_recon_medic_lxWS,PRIVATE,-5,-5);
					GROUP_UNIT(3,TWest,B_D_recon_lxWS,PRIVATE,10,-10);
					GROUP_UNIT(4,TWest,B_D_recon_LAT_lxWS,PRIVATE,-10,-10);
					GROUP_UNIT(5,TWest,B_D_recon_JTAC_lxWS,PRIVATE,15,-15);
					GROUP_UNIT(6,TWest,B_D_recon_exp_lxWS,PRIVATE,-15,-15);
					GROUP_UNIT(7,TWest,B_D_recon_lxWS,CORPORAL,20,-20);
				};
				delete BUS_D_AttackTeam_UGV_lxWS;
				delete BUS_D_ReconTeam_UAV_lxWS;
				delete BUS_D_AttackTeam_UAV_lxWS;
				delete BUS_D_ReconTeam_UGV_lxWS;
			};
			class Mechanized
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Mechanized0;
				class BUS_D_MechInfSquad_lxWS
				{
					class Unit0
					{
						vehicle = B_D_APC_Wheeled_01_cannon_lxWS_v2;
					};
					class Unit2
					{
						vehicle = Aegis_B_D_RadioOperator_F;
					};
				};
				class BUS_D_MechInf_Support_lxWS
				{
					class Unit0
					{
						vehicle = B_D_APC_Wheeled_01_cannon_lxWS_v2;
					};
				};
				class BUS_D_MechInf_AT_lxWS
				{
					class Unit0
					{
						vehicle = B_D_APC_Wheeled_01_atgm_lxWS_v2;
					};
				};
				delete BUS_D_MechInf_AA_lxWS;
			};
			class Armored
			{
				class BUS_D_TankDestrSection_Rhino
				{
					name = $STR_A3_CfgGroups_TDSection;
					side = TWest;
					faction = BLU_NATO_lxWS;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_art.paa";
					GROUP_UNIT(0,TWest,B_D_AFV_Wheeled_01_cannon_F,LIEUTENANT,0,0);
					GROUP_UNIT(1,TWest,B_D_AFV_Wheeled_01_cannon_F,SERGEANT,10,-10);
				};
				class BUS_D_TankDestrSection_RhinoUP
				{
					name = $STR_A3_CfgGroups_TDSectionUP;
					side = TWest;
					faction = BLU_NATO_lxWS;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_art.paa";
					GROUP_UNIT(0,TWest,B_D_AFV_Wheeled_01_up_cannon_F,LIEUTENANT,0,0);
					GROUP_UNIT(1,TWest,B_D_AFV_Wheeled_01_up_cannon_F,SERGEANT,10,-10);
				};
				class BUS_D_Mortar_Platoon_lxWS
				{
					name = "$STR_A3_CfgGroups_West_BLU_F_Mortar_Platoon0";
					side = TWest;
					faction = BLU_NATO_lxWS;
					icon = "\A3\ui_f\data\map\markers\nato\b_mortar.paa";
					GROUP_UNIT(0,TWest,B_D_APC_Wheeled_01_mortar_lxWS,LIEUTENANT,0,0);
					GROUP_UNIT(1,TWest,B_D_APC_Wheeled_01_mortar_lxWS,SERGEANT,5,-5);
					GROUP_UNIT(2,TWest,B_D_APC_Wheeled_01_mortar_lxWS,SERGEANT,-5,-5);
					GROUP_UNIT(3,TWest,B_D_APC_Wheeled_01_mortar_lxWS,CORPORAL,10,-10);
				};
				class BUS_D_Mortar_Section_lxWS
				{
					name = "$STR_A3_CfgGroups_West_BLU_F_Mortar_Section0";
					side = TWest;
					faction = BLU_NATO_lxWS;
					icon = "\A3\ui_f\data\map\markers\nato\b_mortar.paa";
					GROUP_UNIT(0,TWest,B_D_APC_Wheeled_01_mortar_lxWS,LIEUTENANT,0,0);
					GROUP_UNIT(1,TWest,B_D_APC_Wheeled_01_mortar_lxWS,SERGEANT,5,-5);
				};
			};
		};
		class BLU_EAF_F
		{
			name = $STR_A3_C_CfgFactionClasses_IND_E_F0;
			class Infantry
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Infantry0;
				class Aegis_B_E_InfSquad
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSquad0;
					side = TWest;
					faction = BLU_EAF_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,Aegis_B_E_soldier_SL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,Aegis_B_E_RadioOperator_F,PRIVATE,5,-5);
					GROUP_UNIT(2,TWest,Aegis_B_E_soldier_LAT_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TWest,Aegis_B_E_soldier_M_F,PRIVATE,10,-10);
					GROUP_UNIT(4,TWest,Aegis_B_E_soldier_TL_F,SERGEANT,-10,-10);
					GROUP_UNIT(5,TWest,Aegis_B_E_soldier_AR_F,CORPORAL,15,-15);
					GROUP_UNIT(6,TWest,Aegis_B_E_soldier_A_F,PRIVATE,-15,-15);
					GROUP_UNIT(7,TWest,Aegis_B_E_medic_F,PRIVATE,20,-20);
				};
				class Aegis_B_E_InfSquad_Weapons
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSquad_Weapons0;
					side = TWest;
					faction = BLU_EAF_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,Aegis_B_E_soldier_SL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,Aegis_B_E_soldier_AR_F,PRIVATE,5,-5);
					GROUP_UNIT(2,TWest,Aegis_B_E_soldier_GL_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TWest,Aegis_B_E_soldier_M_F,PRIVATE,10,-10);
					GROUP_UNIT(4,TWest,Aegis_B_E_soldier_AT_F,PRIVATE,-10,-10);
					GROUP_UNIT(5,TWest,Aegis_B_E_soldier_AAT_F,PRIVATE,15,-15);
					GROUP_UNIT(6,TWest,Aegis_B_E_soldier_A_F,PRIVATE,-15,-15);
					GROUP_UNIT(7,TWest,Aegis_B_E_medic_F,PRIVATE,20,-20);
				};
				class Aegis_B_E_InfTeam
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam0;
					side = TWest;
					faction = BLU_EAF_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,Aegis_B_E_soldier_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,Aegis_B_E_soldier_AR_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,Aegis_B_E_soldier_GL_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TWest,Aegis_B_E_soldier_LAT_F,PRIVATE,10,-10);
				};
				class Aegis_B_E_InfTeam_AT
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam_AT0;
					side = TWest;
					faction = BLU_EAF_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,Aegis_B_E_soldier_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,Aegis_B_E_soldier_AT_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,Aegis_B_E_soldier_AT_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TWest,Aegis_B_E_soldier_AAT_F,PRIVATE,10,-10);
				};
				class Aegis_B_E_InfTeam_AA
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam_AA0;
					side = TWest;
					faction = BLU_EAF_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,Aegis_B_E_soldier_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,Aegis_B_E_soldier_AA_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,Aegis_B_E_soldier_AA_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TWest,Aegis_B_E_soldier_AAA_F,PRIVATE,10,-10);
				};
				class Aegis_B_E_InfSentry
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSentry0;
					side = TWest;
					faction = BLU_EAF_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,Aegis_B_E_soldier_GL_F,CORPORAL,0,0);
					GROUP_UNIT(1,TWest,Aegis_B_E_soldier_F,PRIVATE,5,-5);
				};
				class Aegis_B_E_InfTeam_Light
				{
					name = $STR_A3_CfgGroups_FireTeamLight;
					side = TWest;
					faction = BLU_EAF_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,Aegis_B_E_Soldier_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,Aegis_B_E_Soldier_AR_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,Aegis_B_E_Soldier_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TWest,Aegis_B_E_Soldier_LAT2_F,PRIVATE,10,-10);
				};
			};
			class SpecOps
			{
				name = $STR_A3_CfgGroups_West_BLU_F_SpecOps0;
				class Aegis_B_E_ReconTeam
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_ReconTeam0;
					side = TWest;
					faction = BLU_EAF_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";
					GROUP_UNIT(0,TWest,Aegis_B_E_recon_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,Aegis_B_E_recon_M_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,Aegis_B_E_recon_medic_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TWest,Aegis_B_E_recon_LAT_F,CORPORAL,10,-10);
					GROUP_UNIT(4,TWest,Aegis_B_E_recon_JTAC_F,PRIVATE,-10,-10);
					GROUP_UNIT(5,TWest,Aegis_B_E_recon_exp_F,PRIVATE,15,-15);
				};
				class Aegis_B_E_ReconPatrol
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_ReconPatrol0;
					side = TWest;
					faction = BLU_EAF_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";
					GROUP_UNIT(0,TWest,Aegis_B_E_recon_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,Aegis_B_E_recon_M_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,Aegis_B_E_recon_medic_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TWest,Aegis_B_E_recon_F,PRIVATE,10,-10);
				};
				class Aegis_B_E_ReconSentry
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_ReconSentry0;
					side = TWest;
					faction = BLU_EAF_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";
					GROUP_UNIT(0,TWest,Aegis_B_E_recon_M_F,CORPORAL,0,0);
					GROUP_UNIT(1,TWest,Aegis_B_E_recon_F,PRIVATE,5,-5);
				};
			};
			class Support
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Support0;
				class Aegis_B_E_Support_CLS
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Support_BUS_Support_CLS0;
					side = TWest;
					faction = BLU_EAF_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,Aegis_B_E_Soldier_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,Aegis_B_E_Soldier_AR_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,Aegis_B_E_medic_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TWest,Aegis_B_E_medic_F,PRIVATE,10,-10);
				};
				class Aegis_B_E_Support_EOD
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Support_BUS_Support_EOD0;
					side = TWest;
					faction = BLU_EAF_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,Aegis_B_E_Soldier_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,Aegis_B_E_engineer_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,Aegis_B_E_Soldier_exp_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TWest,Aegis_B_E_Soldier_exp_F,PRIVATE,10,-10);
				};
				class Aegis_B_E_Support_ENG
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Support_BUS_Support_ENG0;
					side = TWest;
					faction = BLU_EAF_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,Aegis_B_E_Soldier_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,Aegis_B_E_engineer_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,Aegis_B_E_engineer_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TWest,Aegis_B_E_Soldier_repair_F,PRIVATE,10,-10);
				};
				class Aegis_B_E_Support_MG
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Support_BUS_Support_MG0;
					side = TWest;
					faction = BLU_EAF_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,Aegis_B_E_Soldier_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,Aegis_B_E_Support_MG_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,Aegis_B_E_Support_AMG_F,PRIVATE,-5,-5);
				};
				class Aegis_B_E_Support_GMG
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Support_BUS_Support_GMG0;
					side = TWest;
					faction = BLU_EAF_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,Aegis_B_E_Soldier_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,Aegis_B_E_Support_GMG_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,Aegis_B_E_Support_AMG_F,PRIVATE,-5,-5);
				};
				class Aegis_B_E_Support_Mort
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Support_BUS_Support_Mort0;
					side = TWest;
					faction = BLU_EAF_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_mortar.paa";
					GROUP_UNIT(0,TWest,Aegis_B_E_Soldier_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,Aegis_B_E_Support_Mort_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,Aegis_B_E_Support_AMort_F,PRIVATE,-5,-5);
				};
			};
			class Motorized
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Motorized0;
				class Aegis_B_E_MotInf_Squad
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Mechanized_BUS_MechInfSquad0;
					side = TWest;
					faction = BLU_EAF_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_motor_inf.paa";
					GROUP_UNIT(0,TWest,Aegis_B_E_Truck_02_transport_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,Aegis_B_E_soldier_SL_F,SERGEANT,5,0);
					GROUP_UNIT(2,TWest,Aegis_B_E_RadioOperator_F,PRIVATE,5,-2);
					GROUP_UNIT(3,TWest,Aegis_B_E_soldier_AT_F,CORPORAL,5,-4);
					GROUP_UNIT(4,TWest,Aegis_B_E_soldier_M_F,PRIVATE,5,-6);
					GROUP_UNIT(5,TWest,Aegis_B_E_soldier_TL_F,SERGEANT,5,-8);
					GROUP_UNIT(6,TWest,Aegis_B_E_soldier_AR_F,CORPORAL,5,-10);
					GROUP_UNIT(7,TWest,Aegis_B_E_soldier_A_F,PRIVATE,5,-12);
					GROUP_UNIT(8,TWest,Aegis_B_E_medic_F,PRIVATE,5,-14);
				};
				class Aegis_B_E_MotInf_Team
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_Team0;
					side = TWest;
					faction = BLU_EAF_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_motor_inf.paa";
					GROUP_UNIT(0,TWest,Aegis_B_E_Offroad_01_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,Aegis_B_E_soldier_TL_F,SERGEANT,5,0);
					GROUP_UNIT(2,TWest,Aegis_B_E_soldier_AR_F,PRIVATE,5,-2);
					GROUP_UNIT(3,TWest,Aegis_B_E_soldier_GL_F,CORPORAL,5,-4);
					GROUP_UNIT(4,TWest,Aegis_B_E_soldier_LAT_F,PRIVATE,5,-6);
				};
				class Aegis_B_E_MotInf_Reinforcements
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_Reinforce0;
					side = TWest;
					faction = BLU_EAF_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_motor_inf.paa";
					GROUP_UNIT(0,TWest,Aegis_B_E_Truck_02_transport_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,Aegis_B_E_soldier_SL_F,SERGEANT,5,0);
					GROUP_UNIT(2,TWest,Aegis_B_E_RadioOperator_F,PRIVATE,5,-2);
					GROUP_UNIT(3,TWest,Aegis_B_E_soldier_AT_F,CORPORAL,5,-4);
					GROUP_UNIT(4,TWest,Aegis_B_E_soldier_M_F,PRIVATE,5,-6);
					GROUP_UNIT(5,TWest,Aegis_B_E_soldier_TL_F,SERGEANT,5,-8);
					GROUP_UNIT(6,TWest,Aegis_B_E_soldier_AR_F,CORPORAL,5,-10);
					GROUP_UNIT(7,TWest,Aegis_B_E_soldier_A_F,PRIVATE,5,-12);
					GROUP_UNIT(8,TWest,Aegis_B_E_medic_F,PRIVATE,5,-14);
					GROUP_UNIT(9,TWest,Aegis_B_E_soldier_SL_F,SERGEANT,-5,0);
					GROUP_UNIT(10,TWest,Aegis_B_E_RadioOperator_F,PRIVATE,-5,-2);
					GROUP_UNIT(11,TWest,Aegis_B_E_soldier_AT_F,CORPORAL,-5,-4);
					GROUP_UNIT(12,TWest,Aegis_B_E_soldier_M_F,PRIVATE,-5,-6);
					GROUP_UNIT(13,TWest,Aegis_B_E_soldier_TL_F,SERGEANT,-5,-8);
					GROUP_UNIT(14,TWest,Aegis_B_E_soldier_AR_F,CORPORAL,-5,-10);
					GROUP_UNIT(15,TWest,Aegis_B_E_soldier_A_F,PRIVATE,-5,-12);
					GROUP_UNIT(16,TWest,Aegis_B_E_medic_F,PRIVATE,-5,-14);
				};
				class Aegis_B_E_MotInf_AT
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_AT0;
					side = TWest;
					faction = BLU_EAF_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_motor_inf.paa";
					GROUP_UNIT(0,TWest,Aegis_B_E_Offroad_01_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,Aegis_B_E_Soldier_AT_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,Aegis_B_E_Soldier_AT_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TWest,Aegis_B_E_Soldier_AAT_F,PRIVATE,10,-10);
					GROUP_UNIT(4,TWest,Aegis_B_E_Soldier_AAT_F,PRIVATE,-10,-10);
				};
				class Aegis_B_E_MotInf_AA
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_AA0;
					side = TWest;
					faction = BLU_EAF_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_motor_inf.paa";
					GROUP_UNIT(0,TWest,Aegis_B_E_Offroad_01_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,Aegis_B_E_Soldier_AA_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,Aegis_B_E_Soldier_AA_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TWest,Aegis_B_E_Soldier_AAA_F,PRIVATE,10,-10);
					GROUP_UNIT(4,TWest,Aegis_B_E_Soldier_AAA_F,PRIVATE,-10,-10);
				};
				class Aegis_B_E_MotInf_MGTeam
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_MGTeam0;
					side = TWest;
					faction = BLU_EAF_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_motor_inf.paa";
					GROUP_UNIT(0,TWest,Aegis_B_E_Offroad_01_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,Aegis_B_E_Soldier_TL_F,SERGEANT,5,-5);
					GROUP_UNIT(2,TWest,Aegis_B_E_Support_MG_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TWest,Aegis_B_E_Support_AMG_F,PRIVATE,10,-10);
				};
				class Aegis_B_E_MotInf_GMGTeam
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_GMGTeam0;
					side = TWest;
					faction = BLU_EAF_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_motor_inf.paa";
					GROUP_UNIT(0,TWest,Aegis_B_E_Offroad_01_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,Aegis_B_E_Soldier_TL_F,SERGEANT,5,-5);
					GROUP_UNIT(2,TWest,Aegis_B_E_Support_GMG_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TWest,Aegis_B_E_Support_AMG_F,PRIVATE,10,-10);
				};
				class Aegis_B_E_MotInf_MortTeam
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_MortTeam0;
					side = TWest;
					faction = BLU_EAF_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_motor_inf.paa";
					GROUP_UNIT(0,TWest,Aegis_B_E_Offroad_01_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,Aegis_B_E_Soldier_TL_F,SERGEANT,5,-5);
					GROUP_UNIT(2,TWest,Aegis_B_E_Support_Mort_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TWest,Aegis_B_E_Support_AMort_F,PRIVATE,10,-10);
				};
			};
			class Mechanized
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Mechanized0;
				class Aegis_B_E_MechInfSquad
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Mechanized_BUS_MechInfSquad0;
					side = TWest;
					faction = BLU_EAF_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_mech_inf.paa";
					GROUP_UNIT(0,TWest,Aegis_B_E_APC_tracked_03_cannon_v2_F,LIEUTENANT,0,0);
					GROUP_UNIT(1,TWest,Aegis_B_E_soldier_SL_F,SERGEANT,5,-5);
					GROUP_UNIT(2,TWest,Aegis_B_E_RadioOperator_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TWest,Aegis_B_E_soldier_AT_F,CORPORAL,10,-10);
					GROUP_UNIT(4,TWest,Aegis_B_E_soldier_M_F,PRIVATE,-10,-10);
					GROUP_UNIT(5,TWest,Aegis_B_E_soldier_TL_F,SERGEANT,15,-15);
					GROUP_UNIT(6,TWest,Aegis_B_E_soldier_AR_F,CORPORAL,-15,-15);
					GROUP_UNIT(7,TWest,Aegis_B_E_soldier_A_F,PRIVATE,20,-20);
					GROUP_UNIT(8,TWest,Aegis_B_E_medic_F,PRIVATE,-20,-20);
				};
				class Aegis_B_E_MechInf_AT
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Mechanized_BUS_MechInf_AT0;
					side = TWest;
					faction = BLU_EAF_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_mech_inf.paa";
					GROUP_UNIT(0,TWest,Aegis_B_E_APC_tracked_03_cannon_v2_F,LIEUTENANT,0,0);
					GROUP_UNIT(1,TWest,Aegis_B_E_Soldier_SL_F,SERGEANT,5,-5);
					GROUP_UNIT(2,TWest,Aegis_B_E_Soldier_AT_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TWest,Aegis_B_E_Soldier_AT_F,PRIVATE,10,-10);
					GROUP_UNIT(4,TWest,Aegis_B_E_Soldier_AT_F,PRIVATE,-10,-10);
					GROUP_UNIT(5,TWest,Aegis_B_E_Soldier_AAT_F,PRIVATE,15,-15);
					GROUP_UNIT(6,TWest,Aegis_B_E_Soldier_AAT_F,PRIVATE,-15,-15);
					GROUP_UNIT(7,TWest,Aegis_B_E_Soldier_AAT_F,PRIVATE,20,-20);
				};
				class Aegis_B_E_MechInf_AA
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Mechanized_BUS_MechInf_AA0;
					side = TWest;
					faction = BLU_EAF_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_mech_inf.paa";
					GROUP_UNIT(0,TWest,Aegis_B_E_APC_tracked_03_cannon_v2_F,LIEUTENANT,0,0);
					GROUP_UNIT(1,TWest,Aegis_B_E_Soldier_SL_F,SERGEANT,5,-5);
					GROUP_UNIT(2,TWest,Aegis_B_E_Soldier_AA_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TWest,Aegis_B_E_Soldier_AA_F,PRIVATE,10,-10);
					GROUP_UNIT(4,TWest,Aegis_B_E_Soldier_AA_F,PRIVATE,-10,-10);
					GROUP_UNIT(5,TWest,Aegis_B_E_Soldier_AAA_F,PRIVATE,15,-15);
					GROUP_UNIT(6,TWest,Aegis_B_E_Soldier_AAA_F,PRIVATE,-15,-15);
					GROUP_UNIT(7,TWest,Aegis_B_E_Soldier_AAA_F,PRIVATE,20,-20);
				};
				class Aegis_B_E_MechInf_Support
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Mechanized_BUS_MechInf_Support0;
					side = TWest;
					faction = BLU_EAF_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_mech_inf.paa";
					GROUP_UNIT(0,TWest,Aegis_B_E_APC_tracked_03_cannon_v2_F,LIEUTENANT,0,0);
					GROUP_UNIT(1,TWest,Aegis_B_E_Soldier_SL_F,SERGEANT,5,-5);
					GROUP_UNIT(2,TWest,Aegis_B_E_Soldier_repair_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TWest,Aegis_B_E_engineer_F,PRIVATE,10,-10);
					GROUP_UNIT(4,TWest,Aegis_B_E_medic_F,PRIVATE,-10,-10);
					GROUP_UNIT(5,TWest,Aegis_B_E_Soldier_AR_F,CORPORAL,15,-15);
					GROUP_UNIT(6,TWest,Aegis_B_E_Soldier_exp_F,PRIVATE,-15,-15);
					GROUP_UNIT(7,TWest,Aegis_B_E_Soldier_A_F,PRIVATE,20,-20);
				};
			};
			class Armored
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Armored0;
				class Aegis_B_E_TankPlatoon
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Armored_BUS_TankPlatoon0;
					side = TWest;
					faction = BLU_EAF_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_armor.paa";
					GROUP_UNIT(0,TWest,Aegis_B_E_MBT_03_cannon_F,LIEUTENANT,0,0);
					GROUP_UNIT(1,TWest,Aegis_B_E_MBT_03_cannon_F,SERGEANT,10,-10);
					GROUP_UNIT(2,TWest,Aegis_B_E_MBT_03_cannon_F,SERGEANT,-10,-10);
					GROUP_UNIT(3,TWest,Aegis_B_E_MBT_03_cannon_F,CORPORAL,20,-20);
				};
				class Aegis_B_E_TankSection
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Armored_BUS_TankSection0;
					side = TWest;
					faction = BLU_EAF_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_armor.paa";
					GROUP_UNIT(0,TWest,Aegis_B_E_MBT_03_cannon_F,LIEUTENANT,0,0);
					GROUP_UNIT(1,TWest,Aegis_B_E_MBT_03_cannon_F,SERGEANT,10,-10);
				};
			};
		};
		class BLU_EAF_ard_F
		{
			name = $STR_A3_A_CfgFactionClasses_IND_E_ard_F0;
			class Infantry
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Infantry0;
				class Aegis_B_E_ard_InfSquad
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSquad0;
					side = TWest;
					faction = BLU_EAF_ard_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,Aegis_B_E_soldier_SL_ard_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,Aegis_B_E_RadioOperator_ard_F,PRIVATE,5,-5);
					GROUP_UNIT(2,TWest,Aegis_B_E_soldier_LAT_ard_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TWest,Aegis_B_E_soldier_M_ard_F,PRIVATE,10,-10);
					GROUP_UNIT(4,TWest,Aegis_B_E_soldier_TL_ard_F,SERGEANT,-10,-10);
					GROUP_UNIT(5,TWest,Aegis_B_E_soldier_AR_ard_F,CORPORAL,15,-15);
					GROUP_UNIT(6,TWest,Aegis_B_E_soldier_A_ard_F,PRIVATE,-15,-15);
					GROUP_UNIT(7,TWest,Aegis_B_E_medic_ard_F,PRIVATE,20,-20);
				};
				class Aegis_B_E_ard_InfSquad_Weapons
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSquad_Weapons0;
					side = TWest;
					faction = BLU_EAF_ard_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,Aegis_B_E_soldier_SL_ard_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,Aegis_B_E_soldier_AR_ard_F,PRIVATE,5,-5);
					GROUP_UNIT(2,TWest,Aegis_B_E_soldier_GL_ard_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TWest,Aegis_B_E_soldier_M_ard_F,PRIVATE,10,-10);
					GROUP_UNIT(4,TWest,Aegis_B_E_soldier_AT_ard_F,PRIVATE,-10,-10);
					GROUP_UNIT(5,TWest,Aegis_B_E_soldier_AAT_ard_F,PRIVATE,15,-15);
					GROUP_UNIT(6,TWest,Aegis_B_E_soldier_A_ard_F,PRIVATE,-15,-15);
					GROUP_UNIT(7,TWest,Aegis_B_E_medic_ard_F,PRIVATE,20,-20);
				};
				class Aegis_B_E_ard_InfTeam
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam0;
					side = TWest;
					faction = BLU_EAF_ard_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,Aegis_B_E_soldier_TL_ard_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,Aegis_B_E_soldier_AR_ard_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,Aegis_B_E_soldier_GL_ard_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TWest,Aegis_B_E_soldier_LAT_ard_F,PRIVATE,10,-10);
				};
				class Aegis_B_E_ard_InfTeam_AT
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam_AT0;
					side = TWest;
					faction = BLU_EAF_ard_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,Aegis_B_E_soldier_TL_ard_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,Aegis_B_E_soldier_AT_ard_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,Aegis_B_E_soldier_AT_ard_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TWest,Aegis_B_E_soldier_AAT_ard_F,PRIVATE,10,-10);
				};
				class Aegis_B_E_ard_InfTeam_AA
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam_AA0;
					side = TWest;
					faction = BLU_EAF_ard_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,Aegis_B_E_soldier_TL_ard_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,Aegis_B_E_soldier_AA_ard_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,Aegis_B_E_soldier_AA_ard_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TWest,Aegis_B_E_soldier_AAA_ard_F,PRIVATE,10,-10);
				};
				class Aegis_B_E_ard_InfSentry
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSentry0;
					side = TWest;
					faction = BLU_EAF_ard_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,Aegis_B_E_soldier_GL_ard_F,CORPORAL,0,0);
					GROUP_UNIT(1,TWest,Aegis_B_E_soldier_ard_F,PRIVATE,5,-5);
				};
				class Aegis_B_E_ard_InfTeam_Light
				{
					name = $STR_A3_CfgGroups_FireTeamLight;
					side = TWest;
					faction = BLU_EAF_ard_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,Aegis_B_E_Soldier_TL_ard_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,Aegis_B_E_Soldier_AR_ard_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,Aegis_B_E_Soldier_ard_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TWest,Aegis_B_E_Soldier_LAT2_ard_F,PRIVATE,10,-10);
				};
			};
			class SpecOps
			{
				name = $STR_A3_CfgGroups_West_BLU_F_SpecOps0;
				class Aegis_B_E_ard_ReconTeam
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_ReconTeam0;
					side = TWest;
					faction = BLU_EAF_ard_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";
					GROUP_UNIT(0,TWest,Aegis_B_E_recon_TL_ard_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,Aegis_B_E_recon_M_ard_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,Aegis_B_E_recon_medic_ard_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TWest,Aegis_B_E_recon_LAT_ard_F,CORPORAL,10,-10);
					GROUP_UNIT(4,TWest,Aegis_B_E_recon_JTAC_ard_F,PRIVATE,-10,-10);
					GROUP_UNIT(5,TWest,Aegis_B_E_recon_exp_ard_F,PRIVATE,15,-15);
				};
				class Aegis_B_E_ard_ReconPatrol
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_ReconPatrol0;
					side = TWest;
					faction = BLU_EAF_ard_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";
					GROUP_UNIT(0,TWest,Aegis_B_E_recon_TL_ard_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,Aegis_B_E_recon_M_ard_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,Aegis_B_E_recon_medic_ard_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TWest,Aegis_B_E_recon_ard_F,PRIVATE,10,-10);
				};
				class Aegis_B_E_ard_ReconSentry
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_ReconSentry0;
					side = TWest;
					faction = BLU_EAF_ard_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";
					GROUP_UNIT(0,TWest,Aegis_B_E_recon_M_ard_F,CORPORAL,0,0);
					GROUP_UNIT(1,TWest,Aegis_B_E_recon_ard_F,PRIVATE,5,-5);
				};
			};
			class Support
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Support0;
				class Aegis_B_E_ard_Support_CLS
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Support_BUS_Support_CLS0;
					side = TWest;
					faction = BLU_EAF_ard_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,Aegis_B_E_Soldier_TL_ard_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,Aegis_B_E_Soldier_AR_ard_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,Aegis_B_E_medic_ard_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TWest,Aegis_B_E_medic_ard_F,PRIVATE,10,-10);
				};
				class Aegis_B_E_ard_Support_EOD
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Support_BUS_Support_EOD0;
					side = TWest;
					faction = BLU_EAF_ard_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,Aegis_B_E_Soldier_TL_ard_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,Aegis_B_E_engineer_ard_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,Aegis_B_E_Soldier_exp_ard_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TWest,Aegis_B_E_Soldier_exp_ard_F,PRIVATE,10,-10);
				};
				class Aegis_B_E_ard_Support_ENG
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Support_BUS_Support_ENG0;
					side = TWest;
					faction = BLU_EAF_ard_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,Aegis_B_E_Soldier_TL_ard_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,Aegis_B_E_engineer_ard_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,Aegis_B_E_engineer_ard_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TWest,Aegis_B_E_Soldier_repair_ard_F,PRIVATE,10,-10);
				};
				class Aegis_B_E_ard_Support_MG
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Support_BUS_Support_MG0;
					side = TWest;
					faction = BLU_EAF_ard_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,Aegis_B_E_Soldier_TL_ard_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,Aegis_B_E_Support_MG_ard_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,Aegis_B_E_Support_AMG_ard_F,PRIVATE,-5,-5);
				};
				class Aegis_B_E_ard_Support_GMG
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Support_BUS_Support_GMG0;
					side = TWest;
					faction = BLU_EAF_ard_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,Aegis_B_E_Soldier_TL_ard_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,Aegis_B_E_Support_GMG_ard_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,Aegis_B_E_Support_AMG_ard_F,PRIVATE,-5,-5);
				};
				class Aegis_B_E_ard_Support_Mort
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Support_BUS_Support_Mort0;
					side = TWest;
					faction = BLU_EAF_ard_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_mortar.paa";
					GROUP_UNIT(0,TWest,Aegis_B_E_Soldier_TL_ard_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,Aegis_B_E_Support_Mort_ard_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,Aegis_B_E_Support_AMort_ard_F,PRIVATE,-5,-5);
				};
			};
			class Motorized
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Motorized0;
				class Aegis_B_E_ard_MotInf_Squad
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Mechanized_BUS_MechInfSquad0;
					side = TWest;
					faction = BLU_EAF_ard_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_motor_inf.paa";
					GROUP_UNIT(0,TWest,Aegis_B_E_Truck_02_transport_ard_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,Aegis_B_E_soldier_SL_ard_F,SERGEANT,5,0);
					GROUP_UNIT(2,TWest,Aegis_B_E_RadioOperator_ard_F,PRIVATE,5,-2);
					GROUP_UNIT(3,TWest,Aegis_B_E_soldier_AT_ard_F,CORPORAL,5,-4);
					GROUP_UNIT(4,TWest,Aegis_B_E_soldier_M_ard_F,PRIVATE,5,-6);
					GROUP_UNIT(5,TWest,Aegis_B_E_soldier_TL_ard_F,SERGEANT,5,-8);
					GROUP_UNIT(6,TWest,Aegis_B_E_soldier_AR_ard_F,CORPORAL,5,-10);
					GROUP_UNIT(7,TWest,Aegis_B_E_soldier_A_ard_F,PRIVATE,5,-12);
					GROUP_UNIT(8,TWest,Aegis_B_E_medic_ard_F,PRIVATE,5,-14);
				};
				class Aegis_B_E_ard_MotInf_Team
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_Team0;
					side = TWest;
					faction = BLU_EAF_ard_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_motor_inf.paa";
					GROUP_UNIT(0,TWest,Aegis_B_E_Offroad_01_ard_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,Aegis_B_E_soldier_TL_ard_F,SERGEANT,5,0);
					GROUP_UNIT(2,TWest,Aegis_B_E_soldier_AR_ard_F,PRIVATE,5,-2);
					GROUP_UNIT(3,TWest,Aegis_B_E_soldier_GL_ard_F,CORPORAL,5,-4);
					GROUP_UNIT(4,TWest,Aegis_B_E_soldier_LAT_ard_F,PRIVATE,5,-6);
				};
				class Aegis_B_E_ard_MotInf_Reinforcements
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_Reinforce0;
					side = TWest;
					faction = BLU_EAF_ard_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_motor_inf.paa";
					GROUP_UNIT(0,TWest,Aegis_B_E_Truck_02_transport_ard_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,Aegis_B_E_soldier_SL_ard_F,SERGEANT,5,0);
					GROUP_UNIT(2,TWest,Aegis_B_E_RadioOperator_ard_F,PRIVATE,5,-2);
					GROUP_UNIT(3,TWest,Aegis_B_E_soldier_AT_ard_F,CORPORAL,5,-4);
					GROUP_UNIT(4,TWest,Aegis_B_E_soldier_M_ard_F,PRIVATE,5,-6);
					GROUP_UNIT(5,TWest,Aegis_B_E_soldier_TL_ard_F,SERGEANT,5,-8);
					GROUP_UNIT(6,TWest,Aegis_B_E_soldier_AR_ard_F,CORPORAL,5,-10);
					GROUP_UNIT(7,TWest,Aegis_B_E_soldier_A_ard_F,PRIVATE,5,-12);
					GROUP_UNIT(8,TWest,Aegis_B_E_medic_ard_F,PRIVATE,5,-14);
					GROUP_UNIT(9,TWest,Aegis_B_E_soldier_SL_ard_F,SERGEANT,-5,0);
					GROUP_UNIT(10,TWest,Aegis_B_E_RadioOperator_ard_F,PRIVATE,-5,-2);
					GROUP_UNIT(11,TWest,Aegis_B_E_soldier_AT_ard_F,CORPORAL,-5,-4);
					GROUP_UNIT(12,TWest,Aegis_B_E_soldier_M_ard_F,PRIVATE,-5,-6);
					GROUP_UNIT(13,TWest,Aegis_B_E_soldier_TL_ard_F,SERGEANT,-5,-8);
					GROUP_UNIT(14,TWest,Aegis_B_E_soldier_AR_ard_F,CORPORAL,-5,-10);
					GROUP_UNIT(15,TWest,Aegis_B_E_soldier_A_ard_F,PRIVATE,-5,-12);
					GROUP_UNIT(16,TWest,Aegis_B_E_medic_ard_F,PRIVATE,-5,-14);
				};
				class Aegis_B_E_ard_MotInf_AT
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_AT0;
					side = TWest;
					faction = BLU_EAF_ard_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_motor_inf.paa";
					GROUP_UNIT(0,TWest,Aegis_B_E_Offroad_01_ard_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,Aegis_B_E_Soldier_AT_ard_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,Aegis_B_E_Soldier_AT_ard_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TWest,Aegis_B_E_Soldier_AAT_ard_F,PRIVATE,10,-10);
					GROUP_UNIT(4,TWest,Aegis_B_E_Soldier_AAT_ard_F,PRIVATE,-10,-10);
				};
				class Aegis_B_E_ard_MotInf_AA
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_AA0;
					side = TWest;
					faction = BLU_EAF_ard_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_motor_inf.paa";
					GROUP_UNIT(0,TWest,Aegis_B_E_Offroad_01_ard_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,Aegis_B_E_Soldier_AA_ard_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,Aegis_B_E_Soldier_AA_ard_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TWest,Aegis_B_E_Soldier_AAA_ard_F,PRIVATE,10,-10);
					GROUP_UNIT(4,TWest,Aegis_B_E_Soldier_AAA_ard_F,PRIVATE,-10,-10);
				};
				class Aegis_B_E_ard_MotInf_MGTeam
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_MGTeam0;
					side = TWest;
					faction = BLU_EAF_ard_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_motor_inf.paa";
					GROUP_UNIT(0,TWest,Aegis_B_E_Offroad_01_ard_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,Aegis_B_E_Soldier_TL_ard_F,SERGEANT,5,-5);
					GROUP_UNIT(2,TWest,Aegis_B_E_Support_MG_ard_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TWest,Aegis_B_E_Support_AMG_ard_F,PRIVATE,10,-10);
				};
				class Aegis_B_E_ard_MotInf_GMGTeam
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_GMGTeam0;
					side = TWest;
					faction = BLU_EAF_ard_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_motor_inf.paa";
					GROUP_UNIT(0,TWest,Aegis_B_E_Offroad_01_ard_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,Aegis_B_E_Soldier_TL_ard_F,SERGEANT,5,-5);
					GROUP_UNIT(2,TWest,Aegis_B_E_Support_GMG_ard_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TWest,Aegis_B_E_Support_AMG_ard_F,PRIVATE,10,-10);
				};
				class Aegis_B_E_ard_MotInf_MortTeam
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_MortTeam0;
					side = TWest;
					faction = BLU_EAF_ard_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_motor_inf.paa";
					GROUP_UNIT(0,TWest,Aegis_B_E_Offroad_01_ard_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,Aegis_B_E_Soldier_TL_ard_F,SERGEANT,5,-5);
					GROUP_UNIT(2,TWest,Aegis_B_E_Support_Mort_ard_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TWest,Aegis_B_E_Support_AMort_ard_F,PRIVATE,10,-10);
				};
			};
			class Mechanized
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Mechanized0;
				class Aegis_B_E_ard_MechInfSquad
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Mechanized_BUS_MechInfSquad0;
					side = TWest;
					faction = BLU_EAF_ard_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_mech_inf.paa";
					GROUP_UNIT(0,TWest,Aegis_B_E_APC_tracked_03_cannon_v2_ard_F,LIEUTENANT,0,0);
					GROUP_UNIT(1,TWest,Aegis_B_E_soldier_SL_ard_F,SERGEANT,5,-5);
					GROUP_UNIT(2,TWest,Aegis_B_E_RadioOperator_ard_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TWest,Aegis_B_E_soldier_AT_ard_F,CORPORAL,10,-10);
					GROUP_UNIT(4,TWest,Aegis_B_E_soldier_M_ard_F,PRIVATE,-10,-10);
					GROUP_UNIT(5,TWest,Aegis_B_E_soldier_TL_ard_F,SERGEANT,15,-15);
					GROUP_UNIT(6,TWest,Aegis_B_E_soldier_AR_ard_F,CORPORAL,-15,-15);
					GROUP_UNIT(7,TWest,Aegis_B_E_soldier_A_ard_F,PRIVATE,20,-20);
					GROUP_UNIT(8,TWest,Aegis_B_E_medic_ard_F,PRIVATE,-20,-20);
				};
				class Aegis_B_E_ard_MechInf_AT
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Mechanized_BUS_MechInf_AT0;
					side = TWest;
					faction = BLU_EAF_ard_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_mech_inf.paa";
					GROUP_UNIT(0,TWest,Aegis_B_E_APC_tracked_03_cannon_v2_ard_F,LIEUTENANT,0,0);
					GROUP_UNIT(1,TWest,Aegis_B_E_Soldier_SL_ard_F,SERGEANT,5,-5);
					GROUP_UNIT(2,TWest,Aegis_B_E_Soldier_AT_ard_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TWest,Aegis_B_E_Soldier_AT_ard_F,PRIVATE,10,-10);
					GROUP_UNIT(4,TWest,Aegis_B_E_Soldier_AT_ard_F,PRIVATE,-10,-10);
					GROUP_UNIT(5,TWest,Aegis_B_E_Soldier_AAT_ard_F,PRIVATE,15,-15);
					GROUP_UNIT(6,TWest,Aegis_B_E_Soldier_AAT_ard_F,PRIVATE,-15,-15);
					GROUP_UNIT(7,TWest,Aegis_B_E_Soldier_AAT_ard_F,PRIVATE,20,-20);
				};
				class Aegis_B_E_ard_MechInf_AA
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Mechanized_BUS_MechInf_AA0;
					side = TWest;
					faction = BLU_EAF_ard_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_mech_inf.paa";
					GROUP_UNIT(0,TWest,Aegis_B_E_APC_tracked_03_cannon_v2_ard_F,LIEUTENANT,0,0);
					GROUP_UNIT(1,TWest,Aegis_B_E_Soldier_SL_ard_F,SERGEANT,5,-5);
					GROUP_UNIT(2,TWest,Aegis_B_E_Soldier_AA_ard_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TWest,Aegis_B_E_Soldier_AA_ard_F,PRIVATE,10,-10);
					GROUP_UNIT(4,TWest,Aegis_B_E_Soldier_AA_ard_F,PRIVATE,-10,-10);
					GROUP_UNIT(5,TWest,Aegis_B_E_Soldier_AAA_ard_F,PRIVATE,15,-15);
					GROUP_UNIT(6,TWest,Aegis_B_E_Soldier_AAA_ard_F,PRIVATE,-15,-15);
					GROUP_UNIT(7,TWest,Aegis_B_E_Soldier_AAA_ard_F,PRIVATE,20,-20);
				};
				class Aegis_B_E_ard_MechInf_Support
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Mechanized_BUS_MechInf_Support0;
					side = TWest;
					faction = BLU_EAF_ard_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_mech_inf.paa";
					GROUP_UNIT(0,TWest,Aegis_B_E_APC_tracked_03_cannon_v2_ard_F,LIEUTENANT,0,0);
					GROUP_UNIT(1,TWest,Aegis_B_E_Soldier_SL_ard_F,SERGEANT,5,-5);
					GROUP_UNIT(2,TWest,Aegis_B_E_Soldier_repair_ard_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TWest,Aegis_B_E_engineer_ard_F,PRIVATE,10,-10);
					GROUP_UNIT(4,TWest,Aegis_B_E_medic_ard_F,PRIVATE,-10,-10);
					GROUP_UNIT(5,TWest,Aegis_B_E_Soldier_AR_ard_F,CORPORAL,15,-15);
					GROUP_UNIT(6,TWest,Aegis_B_E_Soldier_exp_ard_F,PRIVATE,-15,-15);
					GROUP_UNIT(7,TWest,Aegis_B_E_Soldier_A_ard_F,PRIVATE,20,-20);
				};
			};
			class Armored
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Armored0;
				class Aegis_B_E_ard_TankPlatoon
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Armored_BUS_TankPlatoon0;
					side = TWest;
					faction = BLU_EAF_ard_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_armor.paa";
					GROUP_UNIT(0,TWest,Aegis_B_E_MBT_03_cannon_ard_F,LIEUTENANT,0,0);
					GROUP_UNIT(1,TWest,Aegis_B_E_MBT_03_cannon_ard_F,SERGEANT,10,-10);
					GROUP_UNIT(2,TWest,Aegis_B_E_MBT_03_cannon_ard_F,SERGEANT,-10,-10);
					GROUP_UNIT(3,TWest,Aegis_B_E_MBT_03_cannon_ard_F,CORPORAL,20,-20);
				};
				class Aegis_B_E_ard_TankSection
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Armored_BUS_TankSection0;
					side = TWest;
					faction = BLU_EAF_ard_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_armor.paa";
					GROUP_UNIT(0,TWest,Aegis_B_E_MBT_03_cannon_ard_F,LIEUTENANT,0,0);
					GROUP_UNIT(1,TWest,Aegis_B_E_MBT_03_cannon_ard_F,SERGEANT,10,-10);
				};
			};
		};
		class BLU_ION_lxWS
		{
			class Infantry_tna
			{
				name = $STR_A3_CfgGroups_West_BLU_ION_LxWS_Infantry_tna0;
				class Aegis_B_ION_InfSquad_tna_lxWS
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSquad0;
					side = TWest;
					faction = BLU_ION_lxWS;
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					GROUP_UNIT(0,TWest,Aegis_B_ION_Soldier_TL_tna_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,Aegis_B_ION_Soldier_tna_F,PRIVATE,5,-5);
					GROUP_UNIT(2,TWest,Aegis_B_ION_Soldier_AR_tna_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TWest,Aegis_B_ION_Soldier_Marksman_tna_F,PRIVATE,10,-10);
					GROUP_UNIT(4,TWest,Aegis_B_ION_Soldier_GL_tna_F,CORPORAL,-10,-10);
					GROUP_UNIT(5,TWest,Aegis_B_ION_Soldier_tna_F,PRIVATE,15,-15);
					GROUP_UNIT(6,TWest,Aegis_B_ION_Soldier_shot_tna_F,PRIVATE,-15,-15);
					GROUP_UNIT(7,TWest,Aegis_B_ION_Soldier_medic_tna_F,PRIVATE,20,-20);
				};
				class Aegis_B_ION_InfSentry_tna_lxWS
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSentry0;
					side = TWest;
					faction = BLU_ION_lxWS;
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					GROUP_UNIT(0,TWest,Aegis_B_ION_Soldier_GL_tna_F,CORPORAL,0,0);
					GROUP_UNIT(1,TWest,Aegis_B_ION_Soldier_tna_F,PRIVATE,5,-5);
				};
				class Aegis_B_ION_InfTeam_tna_lxWS
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam0;
					side = TWest;
					faction = BLU_ION_lxWS;
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					GROUP_UNIT(0,TWest,Aegis_B_ION_Soldier_TL_tna_F,CORPORAL,0,0);
					GROUP_UNIT(1,TWest,Aegis_B_ION_Soldier_AR_tna_F,PRIVATE,5,-5);
					GROUP_UNIT(2,TWest,Aegis_B_ION_Soldier_GL_tna_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TWest,Aegis_B_ION_Soldier_medic_tna_F,PRIVATE,10,-10);
				};
			};
			class Motorized_tna
			{
				name = $STR_A3_CfgGroups_West_BLU_ION_LxWS_Motorized_tna0;
				class Aegis_B_ION_MotInf_Team_tna_lxWS
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_Team0;
					side = TWest;
					faction = BLU_ION_lxWS;
					icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
					GROUP_UNIT(0,TWest,B_ION_Offroad_armed_lxWS,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,Aegis_B_ION_Soldier_tna_F,PRIVATE,5,-5);
				};
				class Aegis_B_ION_MotInf_Reinforce_tna_lxWS
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_Reinforce0;
					side = TWest;
					faction = BLU_ION_lxWS;
					icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
					GROUP_UNIT(0,TWest,B_ION_Offroad_lxWS,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,Aegis_B_ION_Soldier_TL_tna_F,SERGEANT,5,-5);
					GROUP_UNIT(2,TWest,Aegis_B_ION_Soldier_tna_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TWest,Aegis_B_ION_Soldier_AR_tna_F,PRIVATE,10,-10);
					GROUP_UNIT(4,TWest,Aegis_B_ION_Soldier_Marksman_tna_F,PRIVATE,-10,-10);
					GROUP_UNIT(5,TWest,Aegis_B_ION_Soldier_medic_tna_F,PRIVATE,15,-15);
				};
			};
		};
		class BLU_TURA_lxWS
		{
			class Mechanized
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Mechanized0;
				class Aegis_B_Tura_MechInfSquad
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Mechanized_BUS_MechInfSquad0;
					side = TWest;
					faction = BLU_TURA_lxWS;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_mech_inf.paa";
					GROUP_UNIT(0,TWest,Aegis_B_Tura_APC_Wheeled_04_export_F,LIEUTENANT,0,0);
					GROUP_UNIT(1,TWest,B_Tura_enforcer_lxWS,SERGEANT,5,-5);
					GROUP_UNIT(2,TWest,B_Tura_hireling_lxWS,CORPORAL,-5,-5);
					GROUP_UNIT(3,TWest,B_Tura_watcher_lxWS,PRIVATE,10,-10);
					GROUP_UNIT(4,TWest,B_Tura_defector_lxWS,SERGEANT,-10,-10);
					GROUP_UNIT(5,TWest,B_Tura_scout_lxWS,CORPORAL,15,-15);
					GROUP_UNIT(6,TWest,B_Tura_medic2_lxWS,PRIVATE,-15,-15);
				};
			};		
		};
	};
	class East
	{
		name = $STR_A3_CfgGroups_East0;
		side = TEast;
		class OPF_F
		{
			name = $STR_A3_A_CfgFactionClasses_OPF_F0;
			class Infantry
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Infantry0;
				class OIA_InfSquad
				{
					class Unit1
					{
						vehicle = O_RadioOperator_F;
					};
				};
				class OIA_InfSentry
				{
					class Unit1
					{
						position[] = {5,-5,0};
					};
				};
				delete OI_reconTeam;
				delete OI_reconPatrol;
				delete OI_reconSentry;
				delete OI_SniperTeam;
				delete OIA_ReconSquad;
			};
			class UInfantry
			{
				name = $STR_A3_CfgGroups_East_OPF_F_UInfantry0;
				class OIA_GuardSquad
				{
					class Unit1
					{
						vehicle = O_Urban_RadioOperator_F;
					};
				};
			};
			class SpecOps
			{
				name = $STR_A3_CfgGroups_West_BLU_F_SpecOps0;
				class OI_reconTeam
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_ReconTeam0;
					side = TEast;
					faction = OPF_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";
					GROUP_UNIT(0,TEast,O_recon_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TEast,O_recon_M_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TEast,O_recon_medic_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TEast,O_recon_LAT_F,CORPORAL,10,-10);
					GROUP_UNIT(4,TEast,O_recon_JTAC_F,PRIVATE,-10,-10);
					GROUP_UNIT(5,TEast,O_recon_exp_F,PRIVATE,15,-15);
				};
				class OI_reconPatrol
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_ReconPatrol0;
					side = TEast;
					faction = OPF_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";
					GROUP_UNIT(0,TEast,O_recon_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TEast,O_recon_M_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TEast,O_recon_medic_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TEast,O_recon_F,PRIVATE,10,-10);
				};
				class OI_reconSentry
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_ReconSentry0;
					side = TEast;
					faction = OPF_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";
					GROUP_UNIT(0,TEast,O_recon_M_F,CORPORAL,0,0);
					GROUP_UNIT(1,TEast,O_recon_F,PRIVATE,5,-5);
				};
				class OI_SniperTeam
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_SniperTeam0;
					side = TEast;
					faction = OPF_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";
					GROUP_UNIT(0,TEast,O_spotter_F,SERGEANT,0,0);
					GROUP_UNIT(1,TEast,O_sniper_F,CORPORAL,5,-5);
				};
				class OIA_ReconSquad
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_ReconSquad0;
					side = TEast;
					faction = OPF_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";
					GROUP_UNIT(0,TEast,O_recon_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TEast,O_recon_M_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TEast,O_recon_medic_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TEast,O_recon_F,PRIVATE,10,-10);
					GROUP_UNIT(4,TEast,O_recon_LAT_F,PRIVATE,-10,-10);
					GROUP_UNIT(5,TEast,O_recon_JTAC_F,PRIVATE,15,-15);
					GROUP_UNIT(6,TEast,O_recon_exp_F,PRIVATE,-15,-15);
					GROUP_UNIT(7,TEast,O_Pathfinder_F,CORPORAL,20,-20);
				};
				delete OI_diverTeam_Boat;
				delete OI_diverTeam_SDV;
				delete OI_SmallTeam_UAV;
				delete OI_ReconTeam_UGV;
				delete OI_AttackTeam_UGV;
				delete OI_ReconTeam_UAV;
				delete OI_AttackTeam_UAV;
				delete OI_ViperTeam;
			};
			class Motorized_MTP
			{
				name = $STR_A3_CfgGroups_East_OPF_F_Motorized_MTP0;
				class OIA_MotInf_Team
				{
					class Unit1
					{
						position[] = {5,-5,0};
					};
					class Unit2
					{
						vehicle = O_soldier_LAT_F;
					};
				};
				class OIA_MotInf_Reinforce
				{
					class Unit2
					{
						vehicle = O_RadioOperator_F;
					};
				};
				delete O_MotInf_ReconViperTeam;
				delete O_MotInf_AssaultViperTeam;
			};
			class Mechanized
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Mechanized0;
				class OIA_MechInfSquad
				{
					class Unit2
					{
						vehicle = O_RadioOperator_F;
					};
				};
			};
		};
		class OPF_T_F
		{
			name = $STR_A3_A_CfgFactionClasses_OPF_T_F0;
			class Infantry
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Infantry0;
				class O_T_InfSquad
				{
					class Unit1
					{
						vehicle = O_T_RadioOperator_F;
					};
				};
				delete O_T_reconTeam;
				delete O_T_reconPatrol;
				delete O_T_reconSentry;
				delete O_T_SniperTeam;
			};
			class SpecOps
			{
				name = $STR_A3_CfgGroups_West_BLU_F_SpecOps0;
				class O_T_reconTeam
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_ReconTeam0;
					side = TEast;
					faction = OPF_T_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";
					GROUP_UNIT(0,TEast,O_T_recon_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TEast,O_T_recon_M_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TEast,O_T_recon_medic_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TEast,O_T_recon_LAT_F,CORPORAL,10,-10);
					GROUP_UNIT(4,TEast,O_T_recon_JTAC_F,PRIVATE,-10,-10);
					GROUP_UNIT(5,TEast,O_T_recon_exp_F,PRIVATE,15,-15);
				};
				class O_T_reconPatrol
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_ReconPatrol0;
					side = TEast;
					faction = OPF_T_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";
					GROUP_UNIT(0,TEast,O_T_recon_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TEast,O_T_recon_M_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TEast,O_T_recon_medic_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TEast,O_T_recon_F,PRIVATE,10,-10);
				};
				class O_T_reconSentry
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_ReconSentry0;
					side = TEast;
					faction = OPF_T_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";
					GROUP_UNIT(0,TEast,O_T_recon_M_F,CORPORAL,0,0);
					GROUP_UNIT(1,TEast,O_T_recon_F,PRIVATE,5,-5);
				};
				class O_T_SniperTeam
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_SniperTeam0;
					side = TEast;
					faction = OPF_T_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";
					GROUP_UNIT(0,TEast,O_T_spotter_F,SERGEANT,0,0);
					GROUP_UNIT(1,TEast,O_T_sniper_F,CORPORAL,5,-5);
				};
				class O_T_ReconSquad
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_ReconSquad0;
					side = TEast;
					faction = OPF_T_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";
					GROUP_UNIT(0,TEast,O_T_recon_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TEast,O_T_recon_M_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TEast,O_T_recon_medic_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TEast,O_T_recon_F,PRIVATE,10,-10);
					GROUP_UNIT(4,TEast,O_T_recon_LAT_F,PRIVATE,-10,-10);
					GROUP_UNIT(5,TEast,O_T_recon_JTAC_F,PRIVATE,15,-15);
					GROUP_UNIT(6,TEast,O_T_recon_exp_F,PRIVATE,-15,-15);
					GROUP_UNIT(7,TEast,O_T_Pathfinder_F,CORPORAL,20,-20);
				};
				delete O_T_diverTeam_Boat;
				delete O_T_diverTeam_SDV;
				delete O_T_SmallTeam_UAV;
				delete O_T_ReconTeam_UGV;
				delete O_T_AttackTeam_UGV;
				delete O_T_ReconTeam_UAV;
				delete O_T_AttackTeam_UAV;
				delete O_T_ViperTeam;
			};
			class Motorized_MTP
			{
				name = $STR_A3_CfgGroups_East_OPF_F_Motorized_MTP0;
				delete O_T_MotInf_ReconViperTeam;
				delete O_T_MotInf_AssaultViperTeam;
				class O_T_MotInf_Reinforcements
				{
					class Unit2
					{
						vehicle = O_T_RadioOperator_F;
					};
				};
			};
			class Mechanized
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Mechanized0;
				class O_T_MechInfSquad
				{
					class Unit2
					{
						vehicle = O_T_RadioOperator_F;
					};
				};
			};
		};
		class OPF_G_F
		{
			name = $STR_A3_CfgGroups_Indep_Guerilla0;
			class Infantry
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Infantry0;
				class O_G_InfSquad
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSquad0;
					side = TEast;
					faction = OPF_G_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TEast,O_G_soldier_SL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TEast,O_G_soldier_F,PRIVATE,5,-5);
					GROUP_UNIT(2,TEast,O_G_soldier_LAT_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TEast,O_G_Soldier_M_F,PRIVATE,10,-10);
					GROUP_UNIT(4,TEast,O_G_soldier_TL_F,SERGEANT,-10,-10);
					GROUP_UNIT(5,TEast,O_G_soldier_AR_F,CORPORAL,15,-15);
					GROUP_UNIT(6,TEast,O_G_Soldier_A_F,PRIVATE,-15,-15);
					GROUP_UNIT(7,TEast,O_G_medic_F,PRIVATE,20,-20);
				};
				class O_G_InfSquad_Weapons
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSquad_Weapons0;
					side = TEast;
					faction = OPF_G_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TEast,O_G_soldier_SL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TEast,O_G_soldier_AR_F,PRIVATE,5,-5);
					GROUP_UNIT(2,TEast,O_G_Soldier_GL_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TEast,O_G_Soldier_M_F,SERGEANT,10,-10);
					GROUP_UNIT(4,TEast,O_G_soldier_LAT_F,CORPORAL,-10,-10);
					GROUP_UNIT(5,TEast,O_G_soldier_LAT_F,PRIVATE,15,-15);
					GROUP_UNIT(6,TEast,O_G_soldier_A_F,PRIVATE,-15,-15);
					GROUP_UNIT(7,TEast,O_G_medic_F,PRIVATE,20,-20);
				};
				class O_G_InfTeam
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam0;
					side = TEast;
					faction = OPF_G_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TEast,O_G_Soldier_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TEast,O_G_Soldier_AR_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TEast,O_G_Soldier_GL_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TEast,O_G_Soldier_LAT_F,PRIVATE,10,-10);
				};
				class O_G_InfTeam_AT
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam_AT0;
					side = TEast;
					faction = OPF_G_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TEast,O_G_Soldier_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TEast,O_G_Soldier_LAT_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TEast,O_G_Soldier_LAT_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TEast,O_G_Soldier_LAT_F,PRIVATE,10,-10);
				};
				class O_G_InfSentry
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSentry0;
					side = TEast;
					faction = OPF_G_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TEast,O_G_Soldier_GL_F,CORPORAL,0,0);
					GROUP_UNIT(1,TEast,O_G_Soldier_F,PRIVATE,5,-5);
				};
				class O_G_ReconSentry
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_ReconSentry0;
					side = TEast;
					faction = OPF_G_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_recon.paa";
					GROUP_UNIT(0,TEast,O_G_Soldier_M_F,CORPORAL,0,0);
					GROUP_UNIT(1,TEast,O_G_Soldier_F,PRIVATE,5,-5);
				};
				class O_G_SniperTeam_M
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_SniperTeam0;
					side = TEast;
					faction = OPF_G_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_recon.paa";
					GROUP_UNIT(0,TEast,O_G_Sharpshooter_F,SERGEANT,0,0);
					GROUP_UNIT(1,TEast,O_G_Soldier_M_F,CORPORAL,5,-5);
				};
			};
			class Support
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Support0;
				class O_G_Support_CLS
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Support_BUS_Support_CLS0;
					side = TEast;
					faction = OPF_G_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TEast,O_G_Soldier_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TEast,O_G_Soldier_AR_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TEast,O_G_medic_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TEast,O_G_medic_F,PRIVATE,10,-10);
				};
				class O_G_Support_EOD
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Support_BUS_Support_EOD0;
					side = TEast;
					faction = OPF_G_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TEast,O_G_Soldier_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TEast,O_G_engineer_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TEast,O_G_Soldier_exp_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TEast,O_G_Soldier_exp_F,PRIVATE,10,-10);
				};
				class O_G_Support_ENG
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Support_BUS_Support_ENG0;
					side = TEast;
					faction = OPF_G_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TEast,O_G_Soldier_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TEast,O_G_Soldier_AR_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TEast,O_G_engineer_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TEast,O_G_engineer_F,PRIVATE,10,-10);
				};
			};
			class Motorized_MTP
			{
				name = $STR_A3_CfgGroups_Indep_Guerilla_Motorized_MTP0;
				class O_G_MotInf_Team
				{
					name = $STR_A3_CfgGroups_Indep_Guerilla_Motorized_MTP_IRG_MotInfTeam0;
					side = TEast;
					faction = OPF_G_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_motor_inf.paa";
					GROUP_UNIT(0,TEast,O_G_Offroad_01_F,LIEUTENANT,0,0);
					GROUP_UNIT(1,TEast,O_G_Soldier_TL_F,SERGEANT,5,-5);
					GROUP_UNIT(2,TEast,O_G_Soldier_AR_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TEast,O_G_Soldier_LAT_F,CORPORAL,10,-10);
					GROUP_UNIT(4,TEast,O_G_medic_F,CORPORAL,-10,-10);
					GROUP_UNIT(5,TEast,O_G_Soldier_F,CORPORAL,15,-15);
				};
				class O_G_Technicals
				{
					name = $STR_A3_CfgGroups_Indep_Guerilla_Motorized_MTP_IRG_Technicals0;
					side = TEast;
					faction = OPF_G_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_motor_inf.paa";
					GROUP_UNIT(0,TEast,O_G_Offroad_01_armed_F,LIEUTENANT,0,0);
					GROUP_UNIT(1,TEast,O_G_Offroad_01_armed_F,SERGEANT,10,-10);
					GROUP_UNIT(2,TEast,O_G_Offroad_01_armed_F,CORPORAL,-10,-10);
				};
			};
			class Mechanized
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Mechanized0;
				class Aegis_O_G_MechInfSquad
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Mechanized_BUS_MechInfSquad0;
					side = TEast;
					faction = OPF_G_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_mech_inf.paa";
					GROUP_UNIT(0,TEast,Aegis_O_G_APC_Wheeled_04_export_F,LIEUTENANT,0,0);
					GROUP_UNIT(1,TEast,O_G_soldier_SL_F,SERGEANT,5,-5);
					GROUP_UNIT(2,TEast,Aegis_O_G_HeavyGunner_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TEast,O_G_soldier_LAT_F,CORPORAL,10,-10);
					GROUP_UNIT(4,TEast,O_G_soldier_M_F,PRIVATE,-10,-10);
					GROUP_UNIT(5,TEast,O_G_soldier_TL_F,SERGEANT,15,-15);
					GROUP_UNIT(6,TEast,O_G_soldier_AR_F,CORPORAL,-15,-15);
					GROUP_UNIT(7,TEast,O_G_soldier_A_F,PRIVATE,20,-20);
					GROUP_UNIT(8,TEast,O_G_medic_F,PRIVATE,-20,-20);
				};
				class Aegis_O_G_MechInf_AT
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Mechanized_BUS_MechInf_AT0;
					side = TEast;
					faction = OPF_G_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_mech_inf.paa";
					GROUP_UNIT(0,TEast,O_G_APC_Wheeled_03_cannon_F,LIEUTENANT,0,0);
					GROUP_UNIT(1,TEast,O_G_soldier_SL_F,SERGEANT,5,-5);
					GROUP_UNIT(2,TEast,O_G_soldier_AR_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TEast,O_G_soldier_LAT_F,PRIVATE,10,-10);
					GROUP_UNIT(4,TEast,O_G_soldier_LAT2_F,PRIVATE,-10,-10);
					GROUP_UNIT(5,TEast,O_G_soldier_F,SERGEANT,15,-15);
					GROUP_UNIT(6,TEast,O_G_soldier_A_F,CORPORAL,-15,-15);
					GROUP_UNIT(7,TEast,O_G_soldier_M_F,PRIVATE,20,-20);
					GROUP_UNIT(8,TEast,O_G_Medic_F,PRIVATE,-20,-20);
				};
			};
		};
		class OPF_V_F
		{
			name = $STR_A3_A_CfgGroups_East_OPF_V_F0;
			class SpecOps
			{
				name = $STR_A3_CfgGroups_West_BLU_F_SpecOps0;
				class O_V_ViperTeam
				{
					name = $STR_A3_CfgGroups_East_OPF_F_SpecOps_OI_ViperTeam0;
					side = TEast;
					faction = OPF_V_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TEast,O_V_Soldier_TL_hex_F,SERGEANT,0,0);
					GROUP_UNIT(1,TEast,O_V_Soldier_JTAC_hex_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TEast,O_V_Soldier_M_hex_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TEast,O_V_Soldier_Exp_hex_F,PRIVATE,10,-10);
					GROUP_UNIT(4,TEast,O_V_Soldier_LAT_hex_F,PRIVATE,-10,-10);
					GROUP_UNIT(5,TEast,O_V_Soldier_Medic_hex_F,PRIVATE,15,-15);
				};
				class O_V_ViperPatrol
				{
					name = "Viper Patrol";
					side = TEast;
					faction = OPF_V_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TEast,O_V_Soldier_TL_hex_F,SERGEANT,0,0);
					GROUP_UNIT(1,TEast,O_V_Soldier_M_hex_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TEast,O_V_Soldier_Medic_hex_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TEast,O_V_Soldier_hex_F,PRIVATE,10,-10);
				};
				class O_V_ViperSentry
				{
					name = "Viper Sentry";
					side = TEast;
					faction = OPF_V_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_recon.paa";
					GROUP_UNIT(0,TEast,O_V_Soldier_M_hex_F,CORPORAL,0,0);
					GROUP_UNIT(1,TEast,O_V_Soldier_hex_F,PRIVATE,5,-5);
				};
			};
			class Motorized_MTP
			{
				name = $STR_A3_CfgGroups_East_OPF_F_Motorized_MTP0;
				class O_V_MotInf_ReconViperTeam
				{
					name = $STR_A3_CfgGroups_East_OPF_F_Motorized_MTP_O_MotInf_ReconViperTeam0;
					side = TEast;
					faction = OPF_V_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_motor_inf.paa";
					GROUP_UNIT(0,TEast,O_LSV_02_unarmed_viper_F,SERGEANT,0,0);
					GROUP_UNIT(1,TEast,O_V_Soldier_TL_hex_F,SERGEANT,5,-5);
					GROUP_UNIT(2,TEast,O_V_Soldier_JTAC_hex_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TEast,O_V_Soldier_M_hex_F,PRIVATE,10,-10);
					GROUP_UNIT(4,TEast,O_V_Soldier_Exp_hex_F,PRIVATE,-10,-10);
					GROUP_UNIT(5,TEast,O_V_Soldier_LAT_hex_F,PRIVATE,15,-15);
					GROUP_UNIT(6,TEast,O_V_Soldier_Medic_hex_F,PRIVATE,-15,-15);
				};
				class O_V_MotInf_AssaultViperTeam
				{
					name = $STR_A3_CfgGroups_East_OPF_F_Motorized_MTP_O_MotInf_AssaultViperTeam0;
					side = TEast;
					faction = OPF_V_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_motor_inf.paa";
					GROUP_UNIT(0,TEast,O_LSV_02_armed_viper_F,SERGEANT,0,0);
					GROUP_UNIT(1,TEast,O_V_Soldier_TL_hex_F,SERGEANT,5,-5);
					GROUP_UNIT(2,TEast,O_V_Soldier_JTAC_hex_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TEast,O_V_Soldier_M_hex_F,PRIVATE,10,-10);
					GROUP_UNIT(4,TEast,O_V_Soldier_Exp_hex_F,PRIVATE,-10,-10);
					GROUP_UNIT(5,TEast,O_V_Soldier_LAT_hex_F,PRIVATE,15,-15);
					GROUP_UNIT(6,TEast,O_V_Soldier_Medic_hex_F,PRIVATE,-15,-15);
				};
			};
		};
		class OPF_A_F
		{
		  	name = $STR_A3_A_CfgGroups_East_OPF_A_F0;
			class Infantry
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Infantry0;
				class O_A_InfSquad
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSquad0;
					side = TEast;
					faction = OPF_A_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TEast,O_A_soldier_SL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TEast,O_A_RadioOperator_F,PRIVATE,5,-5);
					GROUP_UNIT(2,TEast,O_A_soldier_LAT_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TEast,O_A_soldier_M_F,PRIVATE,10,-10);
					GROUP_UNIT(4,TEast,O_A_soldier_TL_F,SERGEANT,-10,-10);
					GROUP_UNIT(5,TEast,O_A_soldier_AR_F,CORPORAL,15,-15);
					GROUP_UNIT(6,TEast,O_A_soldier_A_F,PRIVATE,-15,-15);
					GROUP_UNIT(7,TEast,O_A_medic_F,PRIVATE,20,-20);
				};
				class O_A_InfSquad_Weapons
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSquad_Weapons0;
					side = TEast;
					faction = OPF_A_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TEast,O_A_soldier_SL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TEast,O_A_soldier_AR_F,PRIVATE,5,-5);
					GROUP_UNIT(2,TEast,O_A_soldier_GL_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TEast,O_A_soldier_M_F,PRIVATE,10,-10);
					GROUP_UNIT(4,TEast,O_A_soldier_AT_F,PRIVATE,-10,-10);
					GROUP_UNIT(5,TEast,O_A_soldier_F,PRIVATE,15,-15);
					GROUP_UNIT(6,TEast,O_A_soldier_A_F,PRIVATE,-15,-15);
					GROUP_UNIT(7,TEast,O_A_medic_F,PRIVATE,20,-20);
				};
				class O_A_InfTeam
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam0;
					side = TEast;
					faction = OPF_A_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TEast,O_A_soldier_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TEast,O_A_soldier_AR_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TEast,O_A_soldier_GL_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TEast,O_A_soldier_LAT_F,PRIVATE,10,-10);
				};
				class O_A_InfTeam_AT
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam_AT0;
					side = TEast;
					faction = OPF_A_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TEast,O_A_soldier_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TEast,O_A_soldier_AT_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TEast,O_A_soldier_AT_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TEast,O_A_soldier_F,PRIVATE,10,-10);
				};
				class O_A_InfTeam_AA
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam_AA0;
					side = TEast;
					faction = OPF_A_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TEast,O_A_soldier_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TEast,O_A_soldier_AA_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TEast,O_A_soldier_AA_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TEast,O_A_soldier_F,PRIVATE,10,-10);
				};
				class O_A_InfSentry
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSentry0;
					side = TEast;
					faction = OPF_A_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TEast,O_A_soldier_GL_F,CORPORAL,0,0);
					GROUP_UNIT(1,TEast,O_A_soldier_F,PRIVATE,5,-5);
				};
				class O_A_ConscriptSquad
				{
					name = $STR_A3_CfgGroups_East_OPF_R_Infantry_ConSquad0;
					side = TEast;
					faction = OPF_A_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TEast,O_A_officer_lxWS,SERGEANT,0,0);
					GROUP_UNIT(1,TEast,O_A_Soldier_GL_lxWS,PRIVATE,5,-5);
					GROUP_UNIT(2,TEast,O_A_Soldier_LAT_lxWS,CORPORAL,-5,-5);
					GROUP_UNIT(3,TEast,O_A_Soldier_lxWS,PRIVATE,10,-10);
					GROUP_UNIT(4,TEast,O_A_Soldier_TL_lxWS,SERGEANT,-10,-10);
					GROUP_UNIT(5,TEast,O_A_Soldier_AR_lxWS,CORPORAL,15,-15);
					GROUP_UNIT(6,TEast,O_A_Soldier_lxWS,PRIVATE,-15,-15);
					GROUP_UNIT(7,TEast,O_A_medic_lxWS,PRIVATE,20,-20);
				};
				class O_A_ConscriptTeam
				{
					name = $STR_A3_CfgGroups_East_OPF_R_Infantry_ConTeam0;
					side = TEast;
					faction = OPF_A_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TEast,O_A_Soldier_TL_lxWS,SERGEANT,0,0);
					GROUP_UNIT(1,TEast,O_A_Soldier_AR_lxWS,CORPORAL,5,-5);
					GROUP_UNIT(2,TEast,O_A_Soldier_GL_lxWS,PRIVATE,-5,-5);
					GROUP_UNIT(3,TEast,O_A_Soldier_LAT_lxWS,PRIVATE,10,-10);
				};
			};
			class Motorized
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Motorized0;
				class O_A_MotInf_Team
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_Team0;
					side = TEast;
					faction = OPF_A_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_motor_inf.paa";
					GROUP_UNIT(0,TEast,O_A_LSV_02_armed_F,SERGEANT,0,0);
					GROUP_UNIT(1,TEast,O_A_soldier_AR_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TEast,O_A_soldier_LAT_F,PRIVATE,-5,-5);
				};
				class O_A_MotInf_AT
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_AT0;
					side = TEast;
					faction = OPF_A_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_motor_inf.paa";
					GROUP_UNIT(0,TEast,O_A_LSV_02_unarmed_F,SERGEANT,0,0);
					GROUP_UNIT(1,TEast,O_A_soldier_AT_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TEast,O_A_soldier_AT_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TEast,O_A_soldier_F,PRIVATE,0,-10);
				};
				class O_A_MotInf_AA
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_AA0;
					side = TEast;
					faction = OPF_A_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_motor_inf.paa";
					GROUP_UNIT(0,TEast,O_A_LSV_02_unarmed_F,SERGEANT,0,0);
					GROUP_UNIT(1,TEast,O_A_soldier_AA_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TEast,O_A_soldier_AA_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TEast,O_A_soldier_F,PRIVATE,0,-10);
				};
				class O_A_MotInf_Reinforcements
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_Reinforce0;
					side = TEast;
					faction = OPF_A_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_motor_inf.paa";
					GROUP_UNIT(0,TEast,O_A_Truck_02_transport_F,SERGEANT,0,0);
					GROUP_UNIT(1,TEast,O_A_soldier_SL_F,SERGEANT,5,0);
					GROUP_UNIT(2,TEast,O_A_RadioOperator_F,PRIVATE,5,-2);
					GROUP_UNIT(3,TEast,O_A_soldier_LAT_F,CORPORAL,5,-4);
					GROUP_UNIT(4,TEast,O_A_soldier_M_F,PRIVATE,5,-6);
					GROUP_UNIT(5,TEast,O_A_soldier_TL_F,SERGEANT,5,-8);
					GROUP_UNIT(6,TEast,O_A_soldier_AR_F,CORPORAL,5,-10);
					GROUP_UNIT(7,TEast,O_A_soldier_A_F,PRIVATE,5,-12);
					GROUP_UNIT(8,TEast,O_A_medic_F,PRIVATE,5,-14);
					GROUP_UNIT(9,TEast,O_A_soldier_SL_F,SERGEANT,-5,0);
					GROUP_UNIT(10,TEast,O_A_RadioOperator_F,PRIVATE,-5,-2);
					GROUP_UNIT(11,TEast,O_A_soldier_LAT_F,CORPORAL,-5,-4);
					GROUP_UNIT(12,TEast,O_A_soldier_M_F,PRIVATE,-5,-6);
					GROUP_UNIT(13,TEast,O_A_soldier_TL_F,SERGEANT,-5,-8);
					GROUP_UNIT(14,TEast,O_A_soldier_AR_F,CORPORAL,-5,-10);
					GROUP_UNIT(15,TEast,O_A_soldier_A_F,PRIVATE,-5,-12);
					GROUP_UNIT(16,TEast,O_A_medic_F,PRIVATE,-5,-14);
				};
			};
			class Mechanized
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Mechanized0;
				class O_A_MechInfSquad
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Mechanized_BUS_MechInfSquad0;
					side = TEast;
					faction = OPF_A_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_mech_inf.paa";
					GROUP_UNIT(0,TEast,O_A_APC_Wheeled_02_rcws_v2_F,LIEUTENANT,0,0);
					GROUP_UNIT(1,TEast,O_A_soldier_SL_F,SERGEANT,5,-5);
					GROUP_UNIT(2,TEast,O_A_RadioOperator_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TEast,O_A_soldier_LAT_F,CORPORAL,10,-10);
					GROUP_UNIT(4,TEast,O_A_soldier_M_F,PRIVATE,-10,-10);
					GROUP_UNIT(5,TEast,O_A_soldier_TL_F,SERGEANT,15,-15);
					GROUP_UNIT(6,TEast,O_A_soldier_AR_F,CORPORAL,-15,-15);
					GROUP_UNIT(7,TEast,O_A_soldier_A_F,PRIVATE,20,-20);
					GROUP_UNIT(8,TEast,O_A_medic_F,PRIVATE,-20,-20);
				};
				class O_A_MechInf_AT
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Mechanized_BUS_MechInf_AT0;
					side = TEast;
					faction = OPF_A_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_mech_inf.paa";
					GROUP_UNIT(0,TEast,O_A_APC_Tracked_02_cannon_F,LIEUTENANT,0,0);
					GROUP_UNIT(1,TEast,O_A_soldier_SL_F,SERGEANT,5,-5);
					GROUP_UNIT(2,TEast,O_A_soldier_AR_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TEast,O_A_soldier_AT_F,PRIVATE,10,-10);
					GROUP_UNIT(4,TEast,O_A_soldier_AT_F,PRIVATE,-10,-10);
					GROUP_UNIT(5,TEast,O_A_soldier_AT_F,SERGEANT,15,-15);
					GROUP_UNIT(6,TEast,O_A_soldier_F,CORPORAL,-15,-15);
					GROUP_UNIT(7,TEast,O_A_soldier_F,PRIVATE,20,-20);
					GROUP_UNIT(8,TEast,O_A_soldier_F,PRIVATE,-20,-20);
				};
				class O_A_MechInf_AA
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Mechanized_BUS_MechInf_AA0;
					side = TEast;
					faction = OPF_A_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_mech_inf.paa";
					GROUP_UNIT(0,TEast,O_A_APC_Tracked_02_cannon_F,LIEUTENANT,0,0);
					GROUP_UNIT(1,TEast,O_A_soldier_SL_F,SERGEANT,5,-5);
					GROUP_UNIT(2,TEast,O_A_soldier_AR_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TEast,O_A_soldier_AA_F,PRIVATE,10,-10);
					GROUP_UNIT(4,TEast,O_A_soldier_AA_F,PRIVATE,-10,-10);
					GROUP_UNIT(5,TEast,O_A_soldier_AA_F,SERGEANT,15,-15);
					GROUP_UNIT(6,TEast,O_A_soldier_F,CORPORAL,-15,-15);
					GROUP_UNIT(7,TEast,O_A_soldier_F,PRIVATE,20,-20);
					GROUP_UNIT(8,TEast,O_A_soldier_F,PRIVATE,-20,-20);
				};
				class O_A_MechConSquad_A
				{
					name = "Mechanized Conscript Squad (Marid)";
					side = TEast;
					faction = OPF_A_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_mech_inf.paa";
					GROUP_UNIT(0,TEast,Aegis_O_A_APC_Wheeled_02_hmg_lxWS,LIEUTENANT,0,0);
					GROUP_UNIT(1,TEast,O_A_Soldier_TL_lxWS,SERGEANT,5,-5);
					GROUP_UNIT(2,TEast,O_A_Soldier_lxWS,PRIVATE,-5,-5);
					GROUP_UNIT(3,TEast,O_A_Soldier_LAT_lxWS,CORPORAL,10,-10);
					GROUP_UNIT(4,TEast,O_A_HeavyGunner_lxWS,PRIVATE,-10,-10);
					GROUP_UNIT(5,TEast,O_A_soldier_GL_lxWS,SERGEANT,15,-15);
					GROUP_UNIT(6,TEast,O_A_soldier_AR_lxWS,CORPORAL,-15,-15);
					GROUP_UNIT(7,TEast,O_A_soldier_lxWS,PRIVATE,20,-20);
					GROUP_UNIT(8,TEast,O_A_medic_lxWS,PRIVATE,-20,-20);
				};
				class O_A_MechConSquad_B
				{
					name = "Mechanized Conscript Squad (BTR-100A)";
					side = TEast;
					faction = OPF_A_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_mech_inf.paa";
					GROUP_UNIT(0,TEast,Aegis_O_A_APC_Wheeled_04_export_F,LIEUTENANT,0,0);
					GROUP_UNIT(1,TEast,O_A_Soldier_TL_lxWS,SERGEANT,5,-5);
					GROUP_UNIT(2,TEast,O_A_Soldier_lxWS,PRIVATE,-5,-5);
					GROUP_UNIT(3,TEast,O_A_Soldier_LAT_lxWS,CORPORAL,10,-10);
					GROUP_UNIT(4,TEast,O_A_HeavyGunner_lxWS,PRIVATE,-10,-10);
					GROUP_UNIT(5,TEast,O_A_soldier_GL_lxWS,SERGEANT,15,-15);
					GROUP_UNIT(6,TEast,O_A_soldier_AR_lxWS,CORPORAL,-15,-15);
					GROUP_UNIT(7,TEast,O_A_soldier_lxWS,PRIVATE,20,-20);
					GROUP_UNIT(8,TEast,O_A_medic_lxWS,PRIVATE,-20,-20);
				};
			};
			class Armored
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Armored0;
				class O_A_TankPlatoon
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Armored_BUS_TankPlatoon0;
					side = TEast;
					faction = OPF_A_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_armor.paa";
					GROUP_UNIT(0,TEast,O_A_MBT_02_cannon_F,LIEUTENANT,0,0);
					GROUP_UNIT(1,TEast,O_A_MBT_02_cannon_F,SERGEANT,10,-10);
					GROUP_UNIT(2,TEast,O_A_MBT_02_cannon_F,SERGEANT,-10,-10);
					GROUP_UNIT(3,TEast,O_A_MBT_02_cannon_F,CORPORAL,20,-20);
				};
				class O_A_TankSection
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Armored_BUS_TankSection0;
					side = TEast;
					faction = OPF_A_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_armor.paa";
					GROUP_UNIT(0,TEast,O_A_MBT_02_cannon_F,LIEUTENANT,0,0);
					GROUP_UNIT(1,TEast,O_A_MBT_02_cannon_F,SERGEANT,10,-10);
				};
			};
		};
		class OPF_R_F
		{
		  	name = $STR_A3_A_CfgFactionClasses_OPF_R_F0;
			class Infantry
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Infantry0;
				class O_R_InfSquad
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSquad0;
					side = TEast;
					faction = OPF_R_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TEast,O_R_soldier_SL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TEast,O_R_RadioOperator_F,PRIVATE,5,-5);
					GROUP_UNIT(2,TEast,O_R_soldier_LAT_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TEast,O_R_soldier_M_F,PRIVATE,10,-10);
					GROUP_UNIT(4,TEast,O_R_soldier_TL_F,SERGEANT,-10,-10);
					GROUP_UNIT(5,TEast,O_R_soldier_AR_F,CORPORAL,15,-15);
					GROUP_UNIT(6,TEast,O_R_soldier_A_F,PRIVATE,-15,-15);
					GROUP_UNIT(7,TEast,O_R_medic_F,PRIVATE,20,-20);
				};
				class O_R_InfSquad_Weapons
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSquad_Weapons0;
					side = TEast;
					faction = OPF_R_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TEast,O_R_soldier_SL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TEast,O_R_soldier_AR_F,PRIVATE,5,-5);
					GROUP_UNIT(2,TEast,O_R_soldier_GL_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TEast,O_R_soldier_M_F,PRIVATE,10,-10);
					GROUP_UNIT(4,TEast,O_R_soldier_AT_F,SERGEANT,-10,-10);
					GROUP_UNIT(5,TEast,O_R_soldier_AAT_F,CORPORAL,15,-15);
					GROUP_UNIT(6,TEast,O_R_soldier_A_F,PRIVATE,-15,-15);
					GROUP_UNIT(7,TEast,O_R_medic_F,PRIVATE,20,-20);
				};
				class O_R_InfTeam
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam0;
					side = TEast;
					faction = OPF_R_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TEast,O_R_soldier_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TEast,O_R_soldier_AR_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TEast,O_R_soldier_GL_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TEast,O_R_RadioOperator_F,PRIVATE,10,-10);
				};
				class O_R_InfTeam_AT
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam_AT0;
					side = TEast;
					faction = OPF_R_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TEast,O_R_soldier_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TEast,O_R_soldier_AT_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TEast,O_R_soldier_AT_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TEast,O_R_soldier_AAT_F,PRIVATE,10,-10);
				};
				class O_R_InfTeam_AA
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam_AA0;
					side = TEast;
					faction = OPF_R_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TEast,O_R_soldier_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TEast,O_R_soldier_AA_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TEast,O_R_soldier_AA_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TEast,O_R_soldier_AAA_F,PRIVATE,10,-10);
				};
				class O_R_InfSentry
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSentry0;
					side = TEast;
					faction = OPF_R_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TEast,O_R_soldier_GL_F,CORPORAL,0,0);
					GROUP_UNIT(1,TEast,O_R_soldier_F,PRIVATE,5,-5);
				};
				class O_R_InfTeam_AT_Heavy
				{
					name = $STR_A3_CfgGroups_East_OPF_F_Infantry_O_InfTeam_AT0;
					side = TEast;
					faction = OPF_R_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TEast,O_R_soldier_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TEast,O_R_soldier_HAT_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TEast,O_R_soldier_HAT_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TEast,O_R_soldier_AHAT_F,PRIVATE,10,-10);
				};
				class O_R_ConscriptSquad
				{
					name = $STR_A3_CfgGroups_East_OPF_R_Infantry_ConSquad0;
					side = TEast;
					faction = OPF_R_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TEast,Aegis_O_R_Conscript_SL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TEast,Aegis_O_R_Conscript_GL_F,PRIVATE,5,-5);
					GROUP_UNIT(2,TEast,Aegis_O_R_Conscript_AT_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TEast,Aegis_O_R_Conscript_M_F,PRIVATE,10,-10);
					GROUP_UNIT(4,TEast,Aegis_O_R_Conscript_TL_F,SERGEANT,-10,-10);
					GROUP_UNIT(5,TEast,Aegis_O_R_Conscript_AR_F,CORPORAL,15,-15);
					GROUP_UNIT(6,TEast,Aegis_O_R_Conscript_F,PRIVATE,-15,-15);
					GROUP_UNIT(7,TEast,Aegis_O_R_Conscript_medic_F,PRIVATE,20,-20);
				};
				class O_R_ConscriptTeam
				{
					name = $STR_A3_CfgGroups_East_OPF_R_Infantry_ConTeam0;
					side = TEast;
					faction = OPF_R_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TEast,Aegis_O_R_Conscript_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TEast,Aegis_O_R_Conscript_AR_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TEast,Aegis_O_R_Conscript_GL_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TEast,Aegis_O_R_Conscript_M_F,PRIVATE,10,-10);
				};
			};
			class SpecOps
			{
				name = $STR_A3_CfgGroups_West_BLU_F_SpecOps0;
				delete O_R_InfSquad;
				delete O_R_InfTeam;
				delete O_R_InfSentry;
				class O_R_reconTeam
				{
					class Unit0
					{
						vehicle = O_R_recon_TL_F;
					};
					class Unit1
					{
						vehicle = O_R_recon_M_F;
					};
					class Unit2
					{
						vehicle = O_R_recon_medic_F;
					};
					class Unit3
					{
						vehicle = O_R_recon_LAT_F;
					};
					class Unit4
					{
						vehicle = O_R_recon_JTAC_F;
					};
					class Unit5
					{
						vehicle = O_R_recon_exp_F;
					};
				};
				class O_R_reconSentry
				{
					class Unit0
					{
						vehicle = O_R_recon_M_F;
					};
					class Unit1
					{
						vehicle = O_R_recon_F;
					};
				};
				class O_R_reconPatrol
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_reconPatrol0;
					side = TEast;
					faction = OPF_R_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_recon.paa";
					GROUP_UNIT(0,TEast,O_R_recon_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TEast,O_R_recon_M_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TEast,O_R_recon_medic_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TEast,O_R_recon_F,PRIVATE,10,-10);
				};
				class O_R_diverTeam
				{
					name = $STR_A3_CfgGroups_West_BLU_F_SpecOps_BUS_DiverTeam0;
					side = TEast;
					faction = OPF_R_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_recon.paa";
					GROUP_UNIT(0,TEast,O_R_diver_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TEast,O_R_diver_exp_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TEast,O_R_diver_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TEast,O_R_diver_F,PRIVATE,10,-10);
				};
			};
			class Support
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Support0;
				class O_R_Support_CLS
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Support_BUS_Support_CLS0;
					side = TEast;
					faction = OPF_R_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TEast,O_R_soldier_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TEast,O_R_soldier_AR_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TEast,O_R_medic_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TEast,O_R_medic_F,PRIVATE,10,-10);
				};
				class O_R_Support_EOD
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Support_BUS_Support_EOD0;
					side = TEast;
					faction = OPF_R_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TEast,O_R_soldier_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TEast,O_R_engineer_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TEast,O_R_soldier_exp_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TEast,O_R_soldier_exp_F,PRIVATE,10,-10);
				};
				class O_R_Support_ENG
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Support_BUS_Support_ENG0;
					side = TEast;
					faction = OPF_R_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TEast,O_R_soldier_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TEast,O_R_engineer_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TEast,O_R_engineer_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TEast,O_R_soldier_repair_F,PRIVATE,10,-10);
				};
				class O_R_Recon_EOD
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Support_BUS_Recon_EOD0;
					side = TEast;
					faction = OPF_R_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TEast,O_R_recon_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TEast,O_R_recon_exp_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TEast,O_R_recon_exp_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TEast,O_R_recon_F,PRIVATE,10,-10);
				};
				class O_R_Support_MG
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Support_BUS_Support_MG0;
					side = TEast;
					faction = OPF_R_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TEast,O_R_soldier_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TEast,O_R_support_MG_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TEast,O_R_support_AMG_F,PRIVATE,-5,-5);
				};
				class O_R_Support_GMG
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Support_BUS_Support_GMG0;
					side = TEast;
					faction = OPF_R_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TEast,O_R_soldier_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TEast,O_R_support_GMG_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TEast,O_R_support_AMG_F,PRIVATE,-5,-5);
				};
				class O_R_Support_Mort
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Support_BUS_Support_Mort0;
					side = TEast;
					faction = OPF_R_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_mortar.paa";
					GROUP_UNIT(0,TEast,O_R_soldier_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TEast,O_R_support_Mort_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TEast,O_R_support_AMort_F,PRIVATE,-5,-5);
				};
			};
			class Motorized_MTP
			{
				name = $STR_A3_CfgGroups_East_OPF_F_Motorized_MTP0;
				class O_R_MotInf_Team
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_Team0;
					side = TEast;
					faction = OPF_R_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_motor_inf.paa";
					GROUP_UNIT(0,TEast,O_R_MRAP_02_gmg_F,SERGEANT,0,0);
					GROUP_UNIT(1,TEast,O_R_soldier_AR_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TEast,O_R_soldier_LAT_F,PRIVATE,-5,-5);
				};
				class O_R_MotInf_AT
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_AT0;
					side = TEast;
					faction = OPF_R_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_motor_inf.paa";
					GROUP_UNIT(0,TEast,O_R_MRAP_02_F,SERGEANT,0,0);
					GROUP_UNIT(1,TEast,O_R_soldier_AT_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TEast,O_R_soldier_AT_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TEast,O_R_soldier_AAT_F,PRIVATE,0,-10);
				};
				class O_R_MotInf_AA
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_AA0;
					side = TEast;
					faction = OPF_R_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_motor_inf.paa";
					GROUP_UNIT(0,TEast,O_R_MRAP_02_F,SERGEANT,0,0);
					GROUP_UNIT(1,TEast,O_R_soldier_AA_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TEast,O_R_soldier_AA_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TEast,O_R_soldier_AAA_F,PRIVATE,0,-10);
				};
				class O_R_MotInf_MGTeam
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_MGTeam0;
					side = TEast;
					faction = OPF_R_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_motor_inf.paa";
					GROUP_UNIT(0,TEast,O_R_MRAP_02_F,SERGEANT,0,0);
					GROUP_UNIT(1,TEast,O_R_soldier_TL_F,SERGEANT,5,-5);
					GROUP_UNIT(2,TEast,O_R_support_MG_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TEast,O_R_support_AMG_F,PRIVATE,0,-10);
				};
				class O_R_MotInf_GMGTeam
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_GMGTeam0;
					side = TEast;
					faction = OPF_R_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_motor_inf.paa";
					GROUP_UNIT(0,TEast,O_R_MRAP_02_F,SERGEANT,0,0);
					GROUP_UNIT(1,TEast,O_R_soldier_TL_F,SERGEANT,5,-5);
					GROUP_UNIT(2,TEast,O_R_support_GMG_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TEast,O_R_support_AMG_F,PRIVATE,0,-10);
				};
				class O_R_MotInf_MortTeam
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_MortTeam0;
					side = TEast;
					faction = OPF_R_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_motor_inf.paa";
					GROUP_UNIT(0,TEast,O_R_MRAP_02_F,SERGEANT,0,0);
					GROUP_UNIT(1,TEast,O_R_soldier_TL_F,SERGEANT,5,-5);
					GROUP_UNIT(2,TEast,O_R_support_Mort_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TEast,O_R_support_AMort_F,PRIVATE,0,-10);
				};
				class O_R_MotInf_Reinforcements
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_Reinforce0;
					side = TEast;
					faction = OPF_R_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_motor_inf.paa";
					GROUP_UNIT(0,TEast,O_R_Truck_03_transport_F,SERGEANT,0,0);
					GROUP_UNIT(1,TEast,O_R_soldier_SL_F,SERGEANT,5,0);
					GROUP_UNIT(2,TEast,O_R_RadioOperator_F,PRIVATE,5,-2);
					GROUP_UNIT(3,TEast,O_R_soldier_LAT_F,CORPORAL,5,-4);
					GROUP_UNIT(4,TEast,O_R_soldier_M_F,PRIVATE,5,-6);
					GROUP_UNIT(5,TEast,O_R_soldier_TL_F,SERGEANT,5,-8);
					GROUP_UNIT(6,TEast,O_R_soldier_AR_F,CORPORAL,5,-10);
					GROUP_UNIT(7,TEast,O_R_soldier_A_F,PRIVATE,-5,-8);
					GROUP_UNIT(8,TEast,O_R_medic_F,PRIVATE,-5,-10);
					GROUP_UNIT(9,TEast,O_R_soldier_TL_F,SERGEANT,-5,0);
					GROUP_UNIT(10,TEast,O_R_soldier_AR_F,CORPORAL,-5,-2);
					GROUP_UNIT(11,TEast,O_R_soldier_GL_F,PRIVATE,-5,-4);
					GROUP_UNIT(12,TEast,O_R_soldier_LAT_F,PRIVATE,-5,-6);
				};
			};
			class Mechanized
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Mechanized0;
				class O_R_MechInfSquad
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Mechanized_BUS_MechInfSquad0;
					side = TEast;
					faction = OPF_R_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_mech_inf.paa";
					GROUP_UNIT(0,TEast,O_R_APC_Wheeled_04_cannon_F,LIEUTENANT,0,0);
					GROUP_UNIT(1,TEast,O_R_soldier_SL_F,SERGEANT,5,-5);
					GROUP_UNIT(2,TEast,O_R_soldier_LAT_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TEast,O_R_soldier_M_F,PRIVATE,10,-10);
					GROUP_UNIT(4,TEast,O_R_soldier_TL_F,SERGEANT,-10,-10);
					GROUP_UNIT(5,TEast,O_R_soldier_AR_F,CORPORAL,15,-15);
					GROUP_UNIT(6,TEast,O_R_medic_F,PRIVATE,-15,-15);
				};
				class O_R_MechInf_AT
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Mechanized_BUS_MechInf_AT0;
					side = TEast;
					faction = OPF_R_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_mech_inf.paa";
					GROUP_UNIT(0,TEast,Aegis_O_R_APC_Tracked_02_30mm_lxWS,LIEUTENANT,0,0);
					GROUP_UNIT(1,TEast,O_R_soldier_SL_F,SERGEANT,5,-5);
					GROUP_UNIT(2,TEast,O_R_soldier_AR_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TEast,O_R_soldier_AT_F,PRIVATE,10,-10);
					GROUP_UNIT(4,TEast,O_R_soldier_AT_F,PRIVATE,-10,-10);
					GROUP_UNIT(5,TEast,O_R_soldier_AT_F,SERGEANT,15,-15);
					GROUP_UNIT(6,TEast,O_R_soldier_AAT_F,CORPORAL,-15,-15);
					GROUP_UNIT(7,TEast,O_R_soldier_AAT_F,PRIVATE,20,-20);
					GROUP_UNIT(8,TEast,O_R_soldier_AAT_F,PRIVATE,-20,-20);
				};
				class O_R_MechInf_AA
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Mechanized_BUS_MechInf_AA0;
					side = TEast;
					faction = OPF_R_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_mech_inf.paa";
					GROUP_UNIT(0,TEast,Aegis_O_R_APC_Tracked_02_30mm_lxWS,LIEUTENANT,0,0);
					GROUP_UNIT(1,TEast,O_R_soldier_SL_F,SERGEANT,5,-5);
					GROUP_UNIT(2,TEast,O_R_soldier_AR_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TEast,O_R_soldier_AA_F,PRIVATE,10,-10);
					GROUP_UNIT(4,TEast,O_R_soldier_AA_F,PRIVATE,-10,-10);
					GROUP_UNIT(5,TEast,O_R_soldier_AA_F,SERGEANT,15,-15);
					GROUP_UNIT(6,TEast,O_R_soldier_AAA_F,CORPORAL,-15,-15);
					GROUP_UNIT(7,TEast,O_R_soldier_AAA_F,PRIVATE,20,-20);
					GROUP_UNIT(8,TEast,O_R_soldier_AAA_F,PRIVATE,-20,-20);
				};
				class O_R_MechInf_Support
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Mechanized_BUS_MechInf_Support0;
					side = TEast;
					faction = OPF_R_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_mech_inf.paa";
					GROUP_UNIT(0,TEast,O_R_APC_Wheeled_04_cannon_F,LIEUTENANT,0,0);
					GROUP_UNIT(1,TEast,O_R_soldier_SL_F,SERGEANT,5,-5);
					GROUP_UNIT(2,TEast,O_R_soldier_TL_F,SERGEANT,-5,-5);
					GROUP_UNIT(3,TEast,O_R_soldier_repair_F,CORPORAL,10,-10);
					GROUP_UNIT(4,TEast,O_R_engineer_F,CORPORAL,-10,-10);
					GROUP_UNIT(5,TEast,O_R_medic_F,PRIVATE,15,15);
					GROUP_UNIT(6,TEast,O_R_soldier_exp_F,PRIVATE,-15,-15);
				};
				class O_R_MechConSquad
				{
					name = "Mechanized Conscript Squad";
					side = TEast;
					faction = OPF_R_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_mech_inf.paa";
					GROUP_UNIT(0,TEast,Aegis_O_R_APC_Tracked_02_30mm_lxWS,LIEUTENANT,0,0);
					GROUP_UNIT(1,TEast,Aegis_O_R_Conscript_SL_F,SERGEANT,5,-5);
					GROUP_UNIT(2,TEast,Aegis_O_R_Conscript_AT_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TEast,Aegis_O_R_Conscript_M_F,PRIVATE,10,-10);
					GROUP_UNIT(4,TEast,Aegis_O_R_Conscript_TL_F,SERGEANT,-10,-10);
					GROUP_UNIT(5,TEast,Aegis_O_R_Conscript_AR_F,CORPORAL,15,-15);
					GROUP_UNIT(6,TEast,Aegis_O_R_Conscript_medic_F,PRIVATE,-15,-15);
				};
			};
			class Armored
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Armored0;
				class O_R_TankPlatoon
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Armored_BUS_TankPlatoon0;
					side = TEast;
					faction = OPF_R_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_armor.paa";
					GROUP_UNIT(0,TEast,O_R_MBT_02_cannon_F,LIEUTENANT,0,0);
					GROUP_UNIT(1,TEast,O_R_MBT_02_cannon_F,SERGEANT,10,-10);
					GROUP_UNIT(2,TEast,O_R_MBT_02_cannon_F,SERGEANT,-10,-10);
					GROUP_UNIT(3,TEast,O_R_MBT_02_cannon_F,CORPORAL,20,-20);
				};
				class O_R_TankPlatoon_AA
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Armored_BUS_TankPlatoon_AA0;
					side = TEast;
					faction = OPF_R_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_armor.paa";
					GROUP_UNIT(0,TEast,O_R_MBT_02_cannon_F,LIEUTENANT,0,0);
					GROUP_UNIT(1,TEast,O_R_APC_Tracked_02_AA_F,SERGEANT,10,-10);
					GROUP_UNIT(2,TEast,O_R_MBT_02_cannon_F,SERGEANT,-10,-10);
					GROUP_UNIT(3,TEast,O_R_APC_Tracked_02_AA_F,CORPORAL,20,-20);
				};
				class O_R_TankSection
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Armored_BUS_TankSection0;
					side = TEast;
					faction = OPF_R_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_armor.paa";
					GROUP_UNIT(0,TEast,O_R_MBT_02_cannon_F,LIEUTENANT,0,0);
					GROUP_UNIT(1,TEast,O_R_MBT_02_cannon_F,SERGEANT,10,-10);
				};
				class O_R_SPGPlatoon_Scorcher
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Armored_BUS_SPGPlatoon_Scorcher0;
					side = TEast;
					faction = OPF_R_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_art.paa";
					GROUP_UNIT(0,TEast,O_R_MBT_02_arty_F,LIEUTENANT,0,0);
					GROUP_UNIT(1,TEast,O_R_MBT_02_arty_F,SERGEANT,10,-10);
					GROUP_UNIT(2,TEast,O_R_MBT_02_arty_F,SERGEANT,-10,-10);
					GROUP_UNIT(3,TEast,O_R_MBT_02_arty_F,CORPORAL,20,-20);
				};
				class O_R_SPGSection_Scorcher
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Armored_BUS_SPGSection_Scorcher0;
					side = TEast;
					faction = OPF_R_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_art.paa";
					GROUP_UNIT(0,TEast,O_R_MBT_02_arty_F,LIEUTENANT,0,0);
					GROUP_UNIT(1,TEast,O_R_MBT_02_arty_F,SERGEANT,10,-10);
				};
				class O_R_TankSection_Heavy
				{
					name = $STR_A3_CfgGroups_TankHeavySection;
					side = TEast;
					faction = OPF_R_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_armor.paa";
					GROUP_UNIT(0,TEast,O_R_MBT_04_command_F,LIEUTENANT,0,0);
					GROUP_UNIT(1,TEast,O_R_MBT_04_cannon_F,SERGEANT,10,-10);
				};
				class O_R_TankPlatoon_Heavy
				{
					name = $STR_A3_CfgGroups_TankHeavyPlatoon;
					side = TEast;
					faction = OPF_R_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_armor.paa";
					GROUP_UNIT(0,TEast,O_R_MBT_04_command_F,LIEUTENANT,0,0);
					GROUP_UNIT(1,TEast,O_R_MBT_04_cannon_F,SERGEANT,10,-10);
					GROUP_UNIT(2,TEast,O_R_MBT_04_cannon_F,SERGEANT,-10,-10);
					GROUP_UNIT(3,TEast,O_R_MBT_04_cannon_F,CORPORAL,20,-20);
				};
				class O_R_TankDestrSection_Nosorog
				{
					name = $STR_A3_CfgGroups_TDSection;
					side = TEast;
					faction = OPF_R_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_armor.paa";
					GROUP_UNIT(0,TEast,O_R_APC_Wheeled_04_cannon_v2_F,LIEUTENANT,0,0);
					GROUP_UNIT(1,TEast,O_R_APC_Wheeled_04_cannon_v2_F,SERGEANT,10,-10);
				};
			};
		};
		class OPF_V_tna_F
		{
			name = $STR_A3_A_CfgFactionClasses_OPF_V_tna_F0;
			class SpecOps
			{
				name = $STR_A3_CfgGroups_West_BLU_F_SpecOps0;
				class O_V_ViperTeam
				{
					name = $STR_A3_CfgGroups_East_OPF_F_SpecOps_OI_ViperTeam0;
					side = TEast;
					faction = OPF_V_tna_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_recon.paa";
					GROUP_UNIT(0,TEast,O_V_Soldier_TL_ghex_F,SERGEANT,0,0);
					GROUP_UNIT(1,TEast,O_V_Soldier_JTAC_ghex_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TEast,O_V_Soldier_M_ghex_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TEast,O_V_Soldier_Exp_ghex_F,PRIVATE,10,-10);
					GROUP_UNIT(4,TEast,O_V_Soldier_LAT_ghex_F,PRIVATE,-10,-10);
					GROUP_UNIT(5,TEast,O_V_Soldier_Medic_ghex_F,PRIVATE,15,-15);
				};
				class O_V_ViperPatrol
				{
					name = "Viper Patrol";
					side = TEast;
					faction = OPF_V_tna_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_recon.paa";
					GROUP_UNIT(0,TEast,O_V_Soldier_TL_ghex_F,SERGEANT,0,0);
					GROUP_UNIT(1,TEast,O_V_Soldier_M_ghex_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TEast,O_V_Soldier_Medic_ghex_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TEast,O_V_Soldier_ghex_F,PRIVATE,10,-10);
				};
				class O_V_ViperSentry
				{
					name = "Viper Sentry";
					side = TEast;
					faction = OPF_V_tna_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_recon.paa";
					GROUP_UNIT(0,TEast,O_V_Soldier_M_ghex_F,CORPORAL,0,0);
					GROUP_UNIT(1,TEast,O_V_Soldier_ghex_F,PRIVATE,5,-5);
				};
			};
			class Motorized_MTP
			{
				name = $STR_A3_CfgGroups_East_OPF_F_Motorized_MTP0;
				class O_V_MotInf_ReconViperTeam
				{
					name = $STR_A3_CfgGroups_East_OPF_F_Motorized_MTP_O_MotInf_ReconViperTeam0;
					side = TEast;
					faction = OPF_V_tna_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_motor_inf.paa";
					GROUP_UNIT(0,TEast,O_T_LSV_02_unarmed_viper_F,SERGEANT,0,0);
					GROUP_UNIT(1,TEast,O_V_Soldier_TL_ghex_F,SERGEANT,5,-5);
					GROUP_UNIT(2,TEast,O_V_Soldier_JTAC_ghex_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TEast,O_V_Soldier_M_ghex_F,PRIVATE,10,-10);
					GROUP_UNIT(4,TEast,O_V_Soldier_Exp_ghex_F,PRIVATE,-10,-10);
					GROUP_UNIT(5,TEast,O_V_Soldier_LAT_ghex_F,PRIVATE,15,-15);
					GROUP_UNIT(6,TEast,O_V_Soldier_Medic_ghex_F,PRIVATE,-15,-15);
				};
				class O_V_MotInf_AssaultViperTeam
				{
					name = $STR_A3_CfgGroups_East_OPF_F_Motorized_MTP_O_MotInf_AssaultViperTeam0;
					side = TEast;
					faction = OPF_V_tna_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_motor_inf.paa";
					GROUP_UNIT(0,TEast,O_T_LSV_02_armed_viper_F,SERGEANT,0,0);
					GROUP_UNIT(1,TEast,O_V_Soldier_TL_ghex_F,SERGEANT,5,-5);
					GROUP_UNIT(2,TEast,O_V_Soldier_JTAC_ghex_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TEast,O_V_Soldier_M_ghex_F,PRIVATE,10,-10);
					GROUP_UNIT(4,TEast,O_V_Soldier_Exp_ghex_F,PRIVATE,-10,-10);
					GROUP_UNIT(5,TEast,O_V_Soldier_LAT_ghex_F,PRIVATE,15,-15);
					GROUP_UNIT(6,TEast,O_V_Soldier_Medic_ghex_F,PRIVATE,-15,-15);
				};
			};
		};
		class OPF_R_ard_F
		{
		  	name = $STR_A3_A_CfgFactionClasses_OPF_R_ard_F0;
			class Infantry
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Infantry0;
				class O_R_InfSquad_A
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSquad0;
					side = TEast;
					faction = OPF_R_ard_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TEast,O_R_soldier_SL_ard_F,SERGEANT,0,0);
					GROUP_UNIT(1,TEast,O_R_RadioOperator_ard_F,PRIVATE,5,-5);
					GROUP_UNIT(2,TEast,O_R_soldier_LAT_ard_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TEast,O_R_soldier_M_ard_F,PRIVATE,10,-10);
					GROUP_UNIT(4,TEast,O_R_soldier_TL_ard_F,SERGEANT,-10,-10);
					GROUP_UNIT(5,TEast,O_R_soldier_AR_ard_F,CORPORAL,15,-15);
					GROUP_UNIT(6,TEast,O_R_soldier_A_ard_F,PRIVATE,-15,-15);
					GROUP_UNIT(7,TEast,O_R_medic_ard_F,PRIVATE,20,-20);
				};
				class O_R_InfSquad_Weapons_A
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSquad_Weapons0;
					side = TEast;
					faction = OPF_R_ard_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TEast,O_R_soldier_SL_ard_F,SERGEANT,0,0);
					GROUP_UNIT(1,TEast,O_R_soldier_AR_ard_F,PRIVATE,5,-5);
					GROUP_UNIT(2,TEast,O_R_soldier_GL_ard_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TEast,O_R_soldier_M_ard_F,PRIVATE,10,-10);
					GROUP_UNIT(4,TEast,O_R_soldier_AT_ard_F,SERGEANT,-10,-10);
					GROUP_UNIT(5,TEast,O_R_soldier_AAT_ard_F,CORPORAL,15,-15);
					GROUP_UNIT(6,TEast,O_R_soldier_A_ard_F,PRIVATE,-15,-15);
					GROUP_UNIT(7,TEast,O_R_medic_ard_F,PRIVATE,20,-20);
				};
				class O_R_InfTeam_A
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam0;
					side = TEast;
					faction = OPF_R_ard_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TEast,O_R_soldier_TL_ard_F,SERGEANT,0,0);
					GROUP_UNIT(1,TEast,O_R_soldier_AR_ard_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TEast,O_R_soldier_GL_ard_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TEast,O_R_RadioOperator_ard_F,PRIVATE,10,-10);
				};
				class O_R_InfTeam_AT_A
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam_AT0;
					side = TEast;
					faction = OPF_R_ard_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TEast,O_R_soldier_TL_ard_F,SERGEANT,0,0);
					GROUP_UNIT(1,TEast,O_R_soldier_AT_ard_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TEast,O_R_soldier_AT_ard_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TEast,O_R_soldier_AAT_ard_F,PRIVATE,10,-10);
				};
				class O_R_InfTeam_AA_A
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam_AA0;
					side = TEast;
					faction = OPF_R_ard_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TEast,O_R_soldier_TL_ard_F,SERGEANT,0,0);
					GROUP_UNIT(1,TEast,O_R_soldier_AA_ard_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TEast,O_R_soldier_AA_ard_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TEast,O_R_soldier_AAA_ard_F,PRIVATE,10,-10);
				};
				class O_R_InfSentry_A
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSentry0;
					side = TEast;
					faction = OPF_R_ard_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TEast,O_R_soldier_GL_ard_F,CORPORAL,0,0);
					GROUP_UNIT(1,TEast,O_R_soldier_ard_F,PRIVATE,5,-5);
				};
				class O_R_InfTeam_AT_Heavy_A
				{
					name = $STR_A3_CfgGroups_East_OPF_F_Infantry_O_InfTeam_AT0;
					side = TEast;
					faction = OPF_R_ard_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TEast,O_R_soldier_TL_ard_F,SERGEANT,0,0);
					GROUP_UNIT(1,TEast,O_R_soldier_HAT_ard_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TEast,O_R_soldier_HAT_ard_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TEast,O_R_soldier_AHAT_ard_F,PRIVATE,10,-10);
				};
				class O_R_ConscriptSquad_A
				{
					name = $STR_A3_CfgGroups_East_OPF_R_Infantry_ConSquad0;
					side = TEast;
					faction = OPF_R_ard_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TEast,Aegis_O_R_Conscript_SL_ard_F,SERGEANT,0,0);
					GROUP_UNIT(1,TEast,Aegis_O_R_Conscript_GL_ard_F,PRIVATE,5,-5);
					GROUP_UNIT(2,TEast,Aegis_O_R_Conscript_AT_ard_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TEast,Aegis_O_R_Conscript_M_ard_F,PRIVATE,10,-10);
					GROUP_UNIT(4,TEast,Aegis_O_R_Conscript_TL_ard_F,SERGEANT,-10,-10);
					GROUP_UNIT(5,TEast,Aegis_O_R_Conscript_AR_ard_F,CORPORAL,15,-15);
					GROUP_UNIT(6,TEast,Aegis_O_R_Conscript_ard_F,PRIVATE,-15,-15);
					GROUP_UNIT(7,TEast,Aegis_O_R_Conscript_medic_ard_F,PRIVATE,20,-20);
				};
				class O_R_ConscriptTeam_A
				{
					name = $STR_A3_CfgGroups_East_OPF_R_Infantry_ConTeam0;
					side = TEast;
					faction = OPF_R_ard_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TEast,Aegis_O_R_Conscript_TL_ard_F,SERGEANT,0,0);
					GROUP_UNIT(1,TEast,Aegis_O_R_Conscript_AR_ard_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TEast,Aegis_O_R_Conscript_GL_ard_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TEast,Aegis_O_R_Conscript_M_ard_F,PRIVATE,10,-10);
				};
			};
			class SpecOps
			{
				name = $STR_A3_CfgGroups_West_BLU_F_SpecOps0;
				class O_R_reconSquad_A
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_ReconSquad0;
					side = TEast;
					faction = OPF_R_ard_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";
					GROUP_UNIT(0,TWest,O_R_recon_TL_ard_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,O_R_recon_M_ard_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,O_R_recon_medic_ard_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TWest,O_R_recon_ard_F,PRIVATE,10,-10);
					GROUP_UNIT(4,TWest,O_R_recon_LAT_ard_F,PRIVATE,-10,-10);
					GROUP_UNIT(5,TWest,O_R_recon_JTAC_ard_F,PRIVATE,15,-15);
					GROUP_UNIT(6,TWest,O_R_recon_exp_ard_F,PRIVATE,-15,-15);
					GROUP_UNIT(7,TWest,O_R_recon_M_ard_F,CORPORAL,20,-20);
				};
				class O_R_reconTeam_A
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_reconTeam0;
					side = TEast;
					faction = OPF_R_ard_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_recon.paa";
					GROUP_UNIT(0,TEast,O_R_recon_TL_ard_F,SERGEANT,0,0);
					GROUP_UNIT(1,TEast,O_R_recon_M_ard_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TEast,O_R_recon_medic_ard_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TEast,O_R_recon_LAT_ard_F,CORPORAL,10,-10);
					GROUP_UNIT(4,TEast,O_R_recon_JTAC_ard_F,PRIVATE,-10,-10);
					GROUP_UNIT(5,TEast,O_R_recon_exp_ard_F,PRIVATE,15,-15);
				};
				class O_R_reconSentry_A
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_reconSentry0;
					side = TEast;
					faction = OPF_R_ard_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_recon.paa";
					GROUP_UNIT(0,TEast,O_R_recon_M_ard_F,CORPORAL,0,0);
					GROUP_UNIT(1,TEast,O_R_recon_ard_F,PRIVATE,5,-5);
				};
				class O_R_reconPatrol_A
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_reconPatrol0;
					side = TEast;
					faction = OPF_R_ard_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_recon.paa";
					GROUP_UNIT(0,TEast,O_R_recon_TL_ard_F,SERGEANT,0,0);
					GROUP_UNIT(1,TEast,O_R_recon_M_ard_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TEast,O_R_recon_medic_ard_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TEast,O_R_recon_ard_F,PRIVATE,10,-10);
				};
				class O_R_diverTeam_A
				{
					name = $STR_A3_CfgGroups_West_BLU_F_SpecOps_BUS_DiverTeam0;
					side = TEast;
					faction = OPF_R_ard_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_recon.paa";
					GROUP_UNIT(0,TEast,O_R_diver_TL_ard_F,SERGEANT,0,0);
					GROUP_UNIT(1,TEast,O_R_diver_exp_ard_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TEast,O_R_diver_ard_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TEast,O_R_diver_ard_F,PRIVATE,10,-10);
				};
			};
			class Support
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Support0;
				class O_R_Support_CLS
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Support_BUS_Support_CLS0;
					side = TEast;
					faction = OPF_R_ard_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TEast,O_R_soldier_TL_ard_F,SERGEANT,0,0);
					GROUP_UNIT(1,TEast,O_R_soldier_AR_ard_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TEast,O_R_medic_ard_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TEast,O_R_medic_ard_F,PRIVATE,10,-10);
				};
				class O_R_Support_EOD
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Support_BUS_Support_EOD0;
					side = TEast;
					faction = OPF_R_ard_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TEast,O_R_soldier_TL_ard_F,SERGEANT,0,0);
					GROUP_UNIT(1,TEast,O_R_engineer_ard_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TEast,O_R_soldier_exp_ard_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TEast,O_R_soldier_exp_ard_F,PRIVATE,10,-10);
				};
				class O_R_Support_ENG
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Support_BUS_Support_ENG0;
					side = TEast;
					faction = OPF_R_ard_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TEast,O_R_soldier_TL_ard_F,SERGEANT,0,0);
					GROUP_UNIT(1,TEast,O_R_engineer_ard_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TEast,O_R_engineer_ard_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TEast,O_R_soldier_repair_ard_F,PRIVATE,10,-10);
				};
				class O_R_Recon_EOD
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Support_BUS_Recon_EOD0;
					side = TEast;
					faction = OPF_R_ard_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TEast,O_R_recon_TL_ard_F,SERGEANT,0,0);
					GROUP_UNIT(1,TEast,O_R_recon_exp_ard_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TEast,O_R_recon_exp_ard_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TEast,O_R_recon_ard_F,PRIVATE,10,-10);
				};
				class O_R_Support_MG
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Support_BUS_Support_MG0;
					side = TEast;
					faction = OPF_R_ard_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TEast,O_R_soldier_TL_ard_F,SERGEANT,0,0);
					GROUP_UNIT(1,TEast,O_R_support_MG_ard_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TEast,O_R_support_AMG_ard_F,PRIVATE,-5,-5);
				};
				class O_R_Support_GMG
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Support_BUS_Support_GMG0;
					side = TEast;
					faction = OPF_R_ard_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TEast,O_R_soldier_TL_ard_F,SERGEANT,0,0);
					GROUP_UNIT(1,TEast,O_R_support_GMG_ard_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TEast,O_R_support_AMG_ard_F,PRIVATE,-5,-5);
				};
				class O_R_Support_Mort
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Support_BUS_Support_Mort0;
					side = TEast;
					faction = OPF_R_ard_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_mortar.paa";
					GROUP_UNIT(0,TEast,O_R_soldier_TL_ard_F,SERGEANT,0,0);
					GROUP_UNIT(1,TEast,O_R_support_Mort_ard_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TEast,O_R_support_AMort_ard_F,PRIVATE,-5,-5);
				};
			};
			class Motorized_MTP
			{
				name = $STR_A3_CfgGroups_East_OPF_F_Motorized_MTP0;
				class O_R_MotInf_Team
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_Team0;
					side = TEast;
					faction = OPF_R_ard_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_motor_inf.paa";
					GROUP_UNIT(0,TEast,O_R_MRAP_02_gmg_ard_F,SERGEANT,0,0);
					GROUP_UNIT(1,TEast,O_R_soldier_AR_ard_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TEast,O_R_soldier_LAT_ard_F,PRIVATE,-5,-5);
				};
				class O_R_MotInf_AT
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_AT0;
					side = TEast;
					faction = OPF_R_ard_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_motor_inf.paa";
					GROUP_UNIT(0,TEast,O_R_MRAP_02_ard_F,SERGEANT,0,0);
					GROUP_UNIT(1,TEast,O_R_soldier_AT_ard_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TEast,O_R_soldier_AT_ard_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TEast,O_R_soldier_AAT_ard_F,PRIVATE,0,-10);
				};
				class O_R_MotInf_AA
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_AA0;
					side = TEast;
					faction = OPF_R_ard_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_motor_inf.paa";
					GROUP_UNIT(0,TEast,O_R_MRAP_02_ard_F,SERGEANT,0,0);
					GROUP_UNIT(1,TEast,O_R_soldier_AA_ard_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TEast,O_R_soldier_AA_ard_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TEast,O_R_soldier_AAA_ard_F,PRIVATE,0,-10);
				};
				class O_R_MotInf_MGTeam
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_MGTeam0;
					side = TEast;
					faction = OPF_R_ard_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_motor_inf.paa";
					GROUP_UNIT(0,TEast,O_R_MRAP_02_ard_F,SERGEANT,0,0);
					GROUP_UNIT(1,TEast,O_R_soldier_TL_ard_F,SERGEANT,5,-5);
					GROUP_UNIT(2,TEast,O_R_support_MG_ard_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TEast,O_R_support_AMG_ard_F,PRIVATE,0,-10);
				};
				class O_R_MotInf_GMGTeam
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_GMGTeam0;
					side = TEast;
					faction = OPF_R_ard_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_motor_inf.paa";
					GROUP_UNIT(0,TEast,O_R_MRAP_02_ard_F,SERGEANT,0,0);
					GROUP_UNIT(1,TEast,O_R_soldier_TL_ard_F,SERGEANT,5,-5);
					GROUP_UNIT(2,TEast,O_R_support_GMG_ard_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TEast,O_R_support_AMG_ard_F,PRIVATE,0,-10);
				};
				class O_R_MotInf_MortTeam
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_MortTeam0;
					side = TEast;
					faction = OPF_R_ard_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_motor_inf.paa";
					GROUP_UNIT(0,TEast,O_R_MRAP_02_ard_F,SERGEANT,0,0);
					GROUP_UNIT(1,TEast,O_R_soldier_TL_ard_F,SERGEANT,5,-5);
					GROUP_UNIT(2,TEast,O_R_support_Mort_ard_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TEast,O_R_support_AMort_ard_F,PRIVATE,0,-10);
				};
				class O_R_MotInf_Reinforcements
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_Reinforce0;
					side = TEast;
					faction = OPF_R_ard_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_motor_inf.paa";
					GROUP_UNIT(0,TEast,O_R_Truck_03_transport_ard_F,SERGEANT,0,0);
					GROUP_UNIT(1,TEast,O_R_soldier_SL_ard_F,SERGEANT,5,0);
					GROUP_UNIT(2,TEast,O_R_RadioOperator_ard_F,PRIVATE,5,-2);
					GROUP_UNIT(3,TEast,O_R_soldier_LAT_ard_F,CORPORAL,5,-4);
					GROUP_UNIT(4,TEast,O_R_soldier_M_ard_F,PRIVATE,5,-6);
					GROUP_UNIT(5,TEast,O_R_soldier_TL_ard_F,SERGEANT,5,-8);
					GROUP_UNIT(6,TEast,O_R_soldier_AR_ard_F,CORPORAL,5,-10);
					GROUP_UNIT(7,TEast,O_R_soldier_A_ard_F,PRIVATE,-5,-8);
					GROUP_UNIT(8,TEast,O_R_medic_ard_F,PRIVATE,-5,-10);
					GROUP_UNIT(9,TEast,O_R_soldier_TL_ard_F,SERGEANT,-5,0);
					GROUP_UNIT(10,TEast,O_R_soldier_AR_ard_F,CORPORAL,-5,-2);
					GROUP_UNIT(11,TEast,O_R_soldier_GL_ard_F,PRIVATE,-5,-4);
					GROUP_UNIT(12,TEast,O_R_soldier_LAT_ard_F,PRIVATE,-5,-6);
				};
			};
			class Mechanized
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Mechanized0;
				class O_R_MechInfSquad
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Mechanized_BUS_MechInfSquad0;
					side = TEast;
					faction = OPF_R_ard_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_mech_inf.paa";
					GROUP_UNIT(0,TEast,O_R_APC_Wheeled_04_cannon_ard_F,LIEUTENANT,0,0);
					GROUP_UNIT(1,TEast,O_R_soldier_SL_ard_F,SERGEANT,5,-5);
					GROUP_UNIT(2,TEast,O_R_soldier_LAT_ard_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TEast,O_R_soldier_M_ard_F,PRIVATE,10,-10);
					GROUP_UNIT(4,TEast,O_R_soldier_TL_ard_F,SERGEANT,-10,-10);
					GROUP_UNIT(5,TEast,O_R_soldier_AR_ard_F,CORPORAL,15,-15);
					GROUP_UNIT(6,TEast,O_R_medic_ard_F,PRIVATE,-15,-15);
				};
				class O_R_MechInf_AT
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Mechanized_BUS_MechInf_AT0;
					side = TEast;
					faction = OPF_R_ard_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_mech_inf.paa";
					GROUP_UNIT(0,TEast,Aegis_O_R_APC_Tracked_02_30mm_ard_lxWS,LIEUTENANT,0,0);
					GROUP_UNIT(1,TEast,O_R_soldier_SL_ard_F,SERGEANT,5,-5);
					GROUP_UNIT(2,TEast,O_R_soldier_AR_ard_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TEast,O_R_soldier_AT_ard_F,PRIVATE,10,-10);
					GROUP_UNIT(4,TEast,O_R_soldier_AT_ard_F,PRIVATE,-10,-10);
					GROUP_UNIT(5,TEast,O_R_soldier_AT_ard_F,SERGEANT,15,-15);
					GROUP_UNIT(6,TEast,O_R_soldier_AAT_ard_F,CORPORAL,-15,-15);
					GROUP_UNIT(7,TEast,O_R_soldier_AAT_ard_F,PRIVATE,20,-20);
					GROUP_UNIT(8,TEast,O_R_soldier_AAT_ard_F,PRIVATE,-20,-20);
				};
				class O_R_MechInf_AA
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Mechanized_BUS_MechInf_AA0;
					side = TEast;
					faction = OPF_R_ard_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_mech_inf.paa";
					GROUP_UNIT(0,TEast,Aegis_O_R_APC_Tracked_02_30mm_ard_lxWS,LIEUTENANT,0,0);
					GROUP_UNIT(1,TEast,O_R_soldier_SL_ard_F,SERGEANT,5,-5);
					GROUP_UNIT(2,TEast,O_R_soldier_AR_ard_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TEast,O_R_soldier_AA_ard_F,PRIVATE,10,-10);
					GROUP_UNIT(4,TEast,O_R_soldier_AA_ard_F,PRIVATE,-10,-10);
					GROUP_UNIT(5,TEast,O_R_soldier_AA_ard_F,SERGEANT,15,-15);
					GROUP_UNIT(6,TEast,O_R_soldier_AAA_ard_F,CORPORAL,-15,-15);
					GROUP_UNIT(7,TEast,O_R_soldier_AAA_ard_F,PRIVATE,20,-20);
					GROUP_UNIT(8,TEast,O_R_soldier_AAA_ard_F,PRIVATE,-20,-20);
				};
				class O_R_MechInf_Support
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Mechanized_BUS_MechInf_Support0;
					side = TEast;
					faction = OPF_R_ard_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_mech_inf.paa";
					GROUP_UNIT(0,TEast,O_R_APC_Wheeled_04_cannon_ard_F,LIEUTENANT,0,0);
					GROUP_UNIT(1,TEast,O_R_soldier_SL_ard_F,SERGEANT,5,-5);
					GROUP_UNIT(2,TEast,O_R_soldier_TL_ard_F,SERGEANT,-5,-5);
					GROUP_UNIT(3,TEast,O_R_soldier_repair_ard_F,CORPORAL,10,-10);
					GROUP_UNIT(4,TEast,O_R_engineer_ard_F,CORPORAL,-10,-10);
					GROUP_UNIT(5,TEast,O_R_medic_ard_F,PRIVATE,15,15);
					GROUP_UNIT(6,TEast,O_R_soldier_exp_ard_F,PRIVATE,-15,-15);
				};
				class O_R_MechConSquad_A
				{
					name = "Mechanized Conscript Squad";
					side = TEast;
					faction = OPF_R_ard_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_mech_inf.paa";
					GROUP_UNIT(0,TEast,Aegis_O_R_APC_Tracked_02_30mm_ard_lxWS,LIEUTENANT,0,0);
					GROUP_UNIT(1,TEast,Aegis_O_R_Conscript_SL_ard_F,SERGEANT,5,-5);
					GROUP_UNIT(2,TEast,Aegis_O_R_Conscript_AT_ard_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TEast,Aegis_O_R_Conscript_M_ard_F,PRIVATE,10,-10);
					GROUP_UNIT(4,TEast,Aegis_O_R_Conscript_TL_ard_F,SERGEANT,-10,-10);
					GROUP_UNIT(5,TEast,Aegis_O_R_Conscript_AR_ard_F,CORPORAL,15,-15);
					GROUP_UNIT(6,TEast,Aegis_O_R_Conscript_medic_ard_F,PRIVATE,-15,-15);
				};
			};
			class Armored
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Armored0;
				class O_R_TankPlatoon
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Armored_BUS_TankPlatoon0;
					side = TEast;
					faction = OPF_R_ard_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_armor.paa";
					GROUP_UNIT(0,TEast,O_R_MBT_02_cannon_ard_F,LIEUTENANT,0,0);
					GROUP_UNIT(1,TEast,O_R_MBT_02_cannon_ard_F,SERGEANT,10,-10);
					GROUP_UNIT(2,TEast,O_R_MBT_02_cannon_ard_F,SERGEANT,-10,-10);
					GROUP_UNIT(3,TEast,O_R_MBT_02_cannon_ard_F,CORPORAL,20,-20);
				};
				class O_R_TankPlatoon_AA
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Armored_BUS_TankPlatoon_AA0;
					side = TEast;
					faction = OPF_R_ard_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_armor.paa";
					GROUP_UNIT(0,TEast,O_R_MBT_02_cannon_ard_F,LIEUTENANT,0,0);
					GROUP_UNIT(1,TEast,O_R_APC_Tracked_02_AA_ard_F,SERGEANT,10,-10);
					GROUP_UNIT(2,TEast,O_R_MBT_02_cannon_ard_F,SERGEANT,-10,-10);
					GROUP_UNIT(3,TEast,O_R_APC_Tracked_02_AA_ard_F,CORPORAL,20,-20);
				};
				class O_R_TankSection
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Armored_BUS_TankSection0;
					side = TEast;
					faction = OPF_R_ard_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_armor.paa";
					GROUP_UNIT(0,TEast,O_R_MBT_02_cannon_ard_F,LIEUTENANT,0,0);
					GROUP_UNIT(1,TEast,O_R_MBT_02_cannon_ard_F,SERGEANT,10,-10);
				};
				class O_R_SPGPlatoon_Scorcher
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Armored_BUS_SPGPlatoon_Scorcher0;
					side = TEast;
					faction = OPF_R_ard_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_art.paa";
					GROUP_UNIT(0,TEast,O_R_MBT_02_arty_ard_F,LIEUTENANT,0,0);
					GROUP_UNIT(1,TEast,O_R_MBT_02_arty_ard_F,SERGEANT,10,-10);
					GROUP_UNIT(2,TEast,O_R_MBT_02_arty_ard_F,SERGEANT,-10,-10);
					GROUP_UNIT(3,TEast,O_R_MBT_02_arty_ard_F,CORPORAL,20,-20);
				};
				class O_R_SPGSection_Scorcher
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Armored_BUS_SPGSection_Scorcher0;
					side = TEast;
					faction = OPF_R_ard_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_art.paa";
					GROUP_UNIT(0,TEast,O_R_MBT_02_arty_ard_F,LIEUTENANT,0,0);
					GROUP_UNIT(1,TEast,O_R_MBT_02_arty_ard_F,SERGEANT,10,-10);
				};
				class O_R_TankSection_Heavy
				{
					name = $STR_A3_CfgGroups_TankHeavySection;
					side = TEast;
					faction = OPF_R_ard_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_armor.paa";
					GROUP_UNIT(0,TEast,O_R_MBT_04_command_ard_F,LIEUTENANT,0,0);
					GROUP_UNIT(1,TEast,O_R_MBT_04_cannon_ard_F,SERGEANT,10,-10);
				};
				class O_R_TankPlatoon_Heavy
				{
					name = $STR_A3_CfgGroups_TankHeavyPlatoon;
					side = TEast;
					faction = OPF_R_ard_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_armor.paa";
					GROUP_UNIT(0,TEast,O_R_MBT_04_command_ard_F,LIEUTENANT,0,0);
					GROUP_UNIT(1,TEast,O_R_MBT_04_cannon_ard_F,SERGEANT,10,-10);
					GROUP_UNIT(2,TEast,O_R_MBT_04_cannon_ard_F,SERGEANT,-10,-10);
					GROUP_UNIT(3,TEast,O_R_MBT_04_cannon_ard_F,CORPORAL,20,-20);
				};
				class O_R_TankDestrSection_Nosorog
				{
					name = $STR_A3_CfgGroups_TDSection;
					side = TEast;
					faction = OPF_R_ard_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_armor.paa";
					GROUP_UNIT(0,TEast,O_R_APC_Wheeled_04_cannon_v2_ard_F,LIEUTENANT,0,0);
					GROUP_UNIT(1,TEast,O_R_APC_Wheeled_04_cannon_v2_ard_F,SERGEANT,10,-10);
				};
			};
		};
		class OPF_Raven_F
		{
			name = $STR_A3_A_CfgFactionClasses_IND_Raven_F0;
			class Infantry
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Infantry0;
				class O_Raven_InfSquad
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSquad0;
					side = TEast;
					faction = OPF_Raven_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TEast,O_Raven_soldier_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TEast,O_Raven_soldier_F,PRIVATE,5,-5);
					GROUP_UNIT(2,TEast,O_Raven_soldier_LAT_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TEast,O_Raven_soldier_M_F,PRIVATE,10,-10);
					GROUP_UNIT(4,TEast,O_Raven_soldier_GL_F,SERGEANT,-10,-10);
					GROUP_UNIT(5,TEast,O_Raven_soldier_MG_F,CORPORAL,15,-15);
					GROUP_UNIT(6,TEast,O_Raven_engineer_F,PRIVATE,-15,-15);
					GROUP_UNIT(7,TEast,O_Raven_medic_F,PRIVATE,20,-20);
				};
				class O_Raven_InfTeam
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam0;
					side = TEast;
					faction = OPF_Raven_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TEast,O_Raven_soldier_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TEast,O_Raven_soldier_MG_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TEast,O_Raven_soldier_GL_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TEast,O_Raven_soldier_LAT_F,PRIVATE,10,-10);
				};
				class O_Raven_InfSentry
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSentry0;
					side = TEast;
					faction = OPF_Raven_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TEast,O_Raven_soldier_GL_F,CORPORAL,0,0);
					GROUP_UNIT(1,TEast,O_Raven_soldier_F,PRIVATE,5,-5);
				};
			};
			class Motorized_MTP
			{
				name = $STR_A3_CfgGroups_East_OPF_F_Motorized_MTP0;
				class O_Raven_MotInf_Team
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_Team0;
					side = TEast;
					faction = OPF_Raven_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_motor_inf.paa";
					GROUP_UNIT(0,TEast,O_Raven_MRAP_02_HMG_F,SERGEANT,0,0);
					GROUP_UNIT(1,TEast,O_Raven_soldier_MG_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TEast,O_Raven_soldier_LAT_F,PRIVATE,-5,-5);
				};
				class O_Raven_MotInf_Reinforcements
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_Reinforce0;
					side = TEast;
					faction = OPF_Raven_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_motor_inf.paa";
					GROUP_UNIT(0,TEast,Aegis_O_Raven_Truck_02_F,SERGEANT,0,0);
					GROUP_UNIT(1,TEast,O_Raven_soldier_TL_F,SERGEANT,5,0);
					GROUP_UNIT(2,TEast,O_Raven_Soldier_F,PRIVATE,5,-2);
					GROUP_UNIT(3,TEast,O_Raven_soldier_LAT_F,CORPORAL,5,-4);
					GROUP_UNIT(4,TEast,O_Raven_soldier_M_F,PRIVATE,5,-6);
					GROUP_UNIT(5,TEast,O_Raven_soldier_GL_F,SERGEANT,5,-8);
					GROUP_UNIT(6,TEast,O_Raven_soldier_MG_F,CORPORAL,5,-10);
					GROUP_UNIT(7,TEast,O_Raven_engineer_F,PRIVATE,-5,-8);
					GROUP_UNIT(8,TEast,O_Raven_medic_F,PRIVATE,-5,-10);
					GROUP_UNIT(9,TEast,O_Raven_soldier_TL_F,SERGEANT,-5,0);
					GROUP_UNIT(10,TEast,O_Raven_soldier_MG_F,CORPORAL,-5,-2);
					GROUP_UNIT(11,TEast,O_Raven_soldier_GL_F,PRIVATE,-5,-4);
					GROUP_UNIT(12,TEast,O_Raven_soldier_LAT_F,PRIVATE,-5,-6);
				};
			};
			class Mechanized
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Mechanized0;
				class O_Raven_MechInfSquad
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Mechanized_BUS_MechInfSquad0;
					side = TEast;
					faction = OPF_Raven_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_mech_inf.paa";
					GROUP_UNIT(0,TEast,Aegis_O_Raven_APC_Wheeled_04_export_F,LIEUTENANT,0,0);
					GROUP_UNIT(1,TEast,O_Raven_soldier_TL_F,SERGEANT,5,-5);
					GROUP_UNIT(2,TEast,O_Raven_soldier_LAT_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TEast,O_Raven_soldier_M_F,PRIVATE,10,-10);
					GROUP_UNIT(4,TEast,O_Raven_soldier_TL_F,SERGEANT,-10,-10);
					GROUP_UNIT(5,TEast,O_Raven_soldier_MG_F,CORPORAL,15,-15);
					GROUP_UNIT(6,TEast,O_Raven_medic_F,PRIVATE,-15,-15);
				};
			};
		};
		class OPF_CD_F
		{
		  	name = $STR_A3_A_CfgFactionClasses_OPF_CD_F0;
			class Infantry
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Infantry0;
				class O_CD_InfSquad
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSquad0;
					side = TEast;
					faction = OPF_CD_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TEast,Aegis_O_C_D_soldier_SL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TEast,Aegis_O_C_D_RadioOperator_F,PRIVATE,5,-5);
					GROUP_UNIT(2,TEast,Aegis_O_C_D_soldier_LAT_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TEast,Aegis_O_C_D_soldier_M_F,PRIVATE,10,-10);
					GROUP_UNIT(4,TEast,Aegis_O_C_D_soldier_TL_F,SERGEANT,-10,-10);
					GROUP_UNIT(5,TEast,Aegis_O_C_D_soldier_AR_F,CORPORAL,15,-15);
					GROUP_UNIT(6,TEast,Aegis_O_C_D_soldier_A_F,PRIVATE,-15,-15);
					GROUP_UNIT(7,TEast,Aegis_O_C_D_medic_F,PRIVATE,20,-20);
				};
				class O_CD_InfSquad_Weapons
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSquad_Weapons0;
					side = TEast;
					faction = OPF_CD_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TEast,Aegis_O_C_D_soldier_SL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TEast,Aegis_O_C_D_soldier_AR_F,PRIVATE,5,-5);
					GROUP_UNIT(2,TEast,Aegis_O_C_D_soldier_GL_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TEast,Aegis_O_C_D_soldier_M_F,PRIVATE,10,-10);
					GROUP_UNIT(4,TEast,Aegis_O_C_D_soldier_AT_F,PRIVATE,-10,-10);
					GROUP_UNIT(5,TEast,Aegis_O_C_D_soldier_F,PRIVATE,15,-15);
					GROUP_UNIT(6,TEast,Aegis_O_C_D_soldier_A_F,PRIVATE,-15,-15);
					GROUP_UNIT(7,TEast,Aegis_O_C_D_medic_F,PRIVATE,20,-20);
				};
				class O_CD_InfTeam
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam0;
					side = TEast;
					faction = OPF_CD_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TEast,Aegis_O_C_D_soldier_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TEast,Aegis_O_C_D_soldier_AR_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TEast,Aegis_O_C_D_soldier_GL_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TEast,Aegis_O_C_D_soldier_LAT_F,PRIVATE,10,-10);
				};
				class O_CD_InfTeam_AT
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam_AT0;
					side = TEast;
					faction = OPF_CD_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TEast,Aegis_O_C_D_soldier_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TEast,Aegis_O_C_D_soldier_AT_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TEast,Aegis_O_C_D_soldier_AT_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TEast,Aegis_O_C_D_soldier_F,PRIVATE,10,-10);
				};
				class O_CD_InfTeam_AA
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam_AA0;
					side = TEast;
					faction = OPF_CD_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TEast,Aegis_O_C_D_soldier_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TEast,Aegis_O_C_D_soldier_AA_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TEast,Aegis_O_C_D_soldier_AA_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TEast,Aegis_O_C_D_soldier_F,PRIVATE,10,-10);
				};
				class O_CD_InfSentry
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSentry0;
					side = TEast;
					faction = OPF_CD_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TEast,Aegis_O_C_D_soldier_GL_F,CORPORAL,0,0);
					GROUP_UNIT(1,TEast,Aegis_O_C_D_soldier_F,PRIVATE,5,-5);
				};
			};
			class SpecOps
			{
				name = $STR_A3_CfgGroups_West_BLU_F_SpecOps0;
				class O_CD_reconTeam
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_reconTeam0;
					side = TEast;
					faction = OPF_CD_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_recon.paa";
					GROUP_UNIT(0,TEast,Aegis_O_C_D_recon_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TEast,Aegis_O_C_D_recon_M_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TEast,Aegis_O_C_D_recon_medic_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TEast,Aegis_O_C_D_recon_LAT_F,CORPORAL,10,-10);
					GROUP_UNIT(4,TEast,Aegis_O_C_D_recon_JTAC_F,PRIVATE,-10,-10);
					GROUP_UNIT(5,TEast,Aegis_O_C_D_recon_exp_F,PRIVATE,15,-15);
				};
				class O_CD_reconSentry
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_reconSentry0;
					side = TEast;
					faction = OPF_CD_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_recon.paa";
					GROUP_UNIT(0,TEast,Aegis_O_C_D_recon_M_F,CORPORAL,0,0);
					GROUP_UNIT(1,TEast,Aegis_O_C_D_recon_F,PRIVATE,5,-5);
				};
				class O_CD_reconPatrol
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_reconPatrol0;
					side = TEast;
					faction = OPF_CD_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_recon.paa";
					GROUP_UNIT(0,TEast,Aegis_O_C_D_recon_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TEast,Aegis_O_C_D_recon_M_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TEast,Aegis_O_C_D_recon_medic_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TEast,Aegis_O_C_D_recon_F,PRIVATE,10,-10);
				};
			};
		};
		class OPF_SFIA_lxWS
		{
			class Armored
			{
				class OSFIA_TankDestrSection_Nosorog
				{
					name = $STR_A3_CfgGroups_TDSection;
					side = TEast;
					faction = OPF_SFIA_lxWS;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_armor.paa";
					GROUP_UNIT(0,TEast,Aegis_O_SFIA_APC_Wheeled_04_cannon_v2_F,LIEUTENANT,0,0);
					GROUP_UNIT(1,TEast,Aegis_O_SFIA_APC_Wheeled_04_cannon_v2_F,SERGEANT,10,-10);
				};
			};
		};
		class OPF_TURA_lxWS
		{
			class Mechanized
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Mechanized0;
				class Aegis_O_Tura_MechInfSquad
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Mechanized_BUS_MechInfSquad0;
					side = TEast;
					faction = OPF_TURA_lxWS;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_mech_inf.paa";
					GROUP_UNIT(0,TEast,Aegis_O_Tura_APC_Wheeled_04_export_F,LIEUTENANT,0,0);
					GROUP_UNIT(1,TEast,O_Tura_enforcer_lxWS,SERGEANT,5,-5);
					GROUP_UNIT(2,TEast,O_Tura_hireling_lxWS,CORPORAL,-5,-5);
					GROUP_UNIT(3,TEast,O_Tura_watcher_lxWS,PRIVATE,10,-10);
					GROUP_UNIT(4,TEast,O_Tura_defector_lxWS,SERGEANT,-10,-10);
					GROUP_UNIT(5,TEast,O_Tura_scout_lxWS,CORPORAL,15,-15);
					GROUP_UNIT(6,TEast,O_Tura_medic2_lxWS,PRIVATE,-15,-15);
				};
			};		
		};
	};
	class Indep
	{
		name = $STR_A3_CfgGroups_Indep0;
		side = TGuerrila;
		class IND_F
		{
			name = $STR_A3_CfgGroups_Indep_IND_F0;
			class Infantry
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Infantry0;
				class HAF_InfSquad
				{
					class Unit1
					{
						vehicle = I_RadioOperator_F;
					};
				};
				delete HAF_SniperTeam;
			};
			class SpecOps
			{
				name = $STR_A3_CfgGroups_West_BLU_F_SpecOps0;
				class HAF_SniperTeam
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_SniperTeam0;
					side = TGuerrila;
					faction = IND_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_recon.paa";
					GROUP_UNIT(0,TGuerrila,I_spotter_F,SERGEANT,0,0);
					GROUP_UNIT(1,TGuerrila,I_sniper_F,CORPORAL,5,-5);
				};
				delete HAF_DiverTeam_Boat;
				delete HAF_DiverTeam_SDV;
				delete HAF_SmallTeam_UAV;
				delete HAF_ReconTeam_UGV;
				delete HAF_AttackTeam_UGV;
				delete HAF_ReconTeam_UAV;
				delete HAF_AttackTeam_UAV;
			};
			class Motorized
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Motorized0;
				class HAF_MotInf_Reinforce
				{
					class Unit2
					{
						vehicle = I_RadioOperator_F;
					};
					class Unit10
					{
						vehicle = I_RadioOperator_F;
					};
				};
			};
			class Mechanized
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Mechanized0;
				class HAF_MechInfSquad
				{
					class Unit2
					{
						vehicle = I_RadioOperator_F;
					};
				};
				class HAF_MechInf_AT
				{
					class Unit0
					{
						vehicle = I_APC_tracked_03_cannon_v2_F;
					};
				};
				class HAF_MechInf_AA
				{
					class Unit0
					{
						vehicle = I_APC_tracked_03_cannon_v2_F;
					};
				};
			};
			class Armored
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Armored0;
				class HAF_TankPlatoon_AA
				{
					class Unit3
					{
						vehicle = I_APC_tracked_03_cannon_v2_F;
					};
				};
			};
		};
		class IND_C_F
		{
			name = $STR_A3_CfgGroups_Indep_IND_C_F0;
			class Infantry
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Infantry0;
			};
		};
		class IND_G_F
		{
			name = $STR_A3_CfgGroups_Indep_Guerilla0;
			class Infantry
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Infantry0;
				class I_G_InfSquad
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSquad0;
					side = TGuerrila;
					faction = IND_G_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_inf.paa";
					GROUP_UNIT(0,TGuerrila,I_G_soldier_SL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TGuerrila,I_G_soldier_F,PRIVATE,5,-5);
					GROUP_UNIT(2,TGuerrila,I_G_soldier_LAT_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TGuerrila,I_G_Soldier_M_F,PRIVATE,10,-10);
					GROUP_UNIT(4,TGuerrila,I_G_soldier_TL_F,SERGEANT,-10,-10);
					GROUP_UNIT(5,TGuerrila,I_G_soldier_AR_F,CORPORAL,15,-15);
					GROUP_UNIT(6,TGuerrila,I_G_Soldier_A_F,PRIVATE,-15,-15);
					GROUP_UNIT(7,TGuerrila,I_G_medic_F,PRIVATE,20,-20);
				};
				class I_G_InfSquad_Weapons
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSquad_Weapons0;
					side = TGuerrila;
					faction = IND_G_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_inf.paa";
					GROUP_UNIT(0,TGuerrila,I_G_soldier_SL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TGuerrila,I_G_soldier_AR_F,PRIVATE,5,-5);
					GROUP_UNIT(2,TGuerrila,I_G_Soldier_GL_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TGuerrila,I_G_Soldier_M_F,SERGEANT,10,-10);
					GROUP_UNIT(4,TGuerrila,I_G_soldier_LAT_F,CORPORAL,-10,-10);
					GROUP_UNIT(5,TGuerrila,I_G_soldier_LAT_F,PRIVATE,15,-15);
					GROUP_UNIT(6,TGuerrila,I_G_soldier_A_F,PRIVATE,-15,-15);
					GROUP_UNIT(7,TGuerrila,I_G_medic_F,PRIVATE,20,-20);
				};
				class I_G_InfTeam
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam0;
					side = TGuerrila;
					faction = IND_G_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_inf.paa";
					GROUP_UNIT(0,TGuerrila,I_G_Soldier_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TGuerrila,I_G_Soldier_AR_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TGuerrila,I_G_Soldier_GL_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TGuerrila,I_G_Soldier_LAT_F,PRIVATE,10,-10);
				};
				class I_G_InfTeam_AT
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam_AT0;
					side = TGuerrila;
					faction = IND_G_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_inf.paa";
					GROUP_UNIT(0,TGuerrila,I_G_Soldier_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TGuerrila,I_G_Soldier_LAT_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TGuerrila,I_G_Soldier_LAT_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TGuerrila,I_G_Soldier_LAT_F,PRIVATE,10,-10);
				};
				class I_G_InfSentry
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSentry0;
					side = TGuerrila;
					faction = IND_G_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_inf.paa";
					GROUP_UNIT(0,TGuerrila,I_G_Soldier_GL_F,CORPORAL,0,0);
					GROUP_UNIT(1,TGuerrila,I_G_Soldier_F,PRIVATE,5,-5);
				};
				class I_G_ReconSentry
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_ReconSentry0;
					side = TGuerrila;
					faction = IND_G_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_recon.paa";
					GROUP_UNIT(0,TGuerrila,I_G_Soldier_M_F,CORPORAL,0,0);
					GROUP_UNIT(1,TGuerrila,I_G_Soldier_F,PRIVATE,5,-5);
				};
				class I_G_SniperTeam_M
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_SniperTeam0;
					side = TGuerrila;
					faction = IND_G_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_recon.paa";
					GROUP_UNIT(0,TGuerrila,I_G_Sharpshooter_F,SERGEANT,0,0);
					GROUP_UNIT(1,TGuerrila,I_G_Soldier_M_F,CORPORAL,5,-5);
				};
			};
			class Support
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Support0;
				class I_G_Support_CLS
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Support_BUS_Support_CLS0;
					side = TGuerrila;
					faction = IND_G_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_inf.paa";
					GROUP_UNIT(0,TGuerrila,I_G_Soldier_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TGuerrila,I_G_Soldier_AR_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TGuerrila,I_G_medic_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TGuerrila,I_G_medic_F,PRIVATE,10,-10);
				};
				class I_G_Support_EOD
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Support_BUS_Support_EOD0;
					side = TGuerrila;
					faction = IND_G_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_inf.paa";
					GROUP_UNIT(0,TGuerrila,I_G_Soldier_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TGuerrila,I_G_engineer_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TGuerrila,I_G_Soldier_exp_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TGuerrila,I_G_Soldier_exp_F,PRIVATE,10,-10);
				};
				class I_G_Support_ENG
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Support_BUS_Support_ENG0;
					side = TGuerrila;
					faction = IND_G_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_inf.paa";
					GROUP_UNIT(0,TGuerrila,I_G_Soldier_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TGuerrila,I_G_Soldier_AR_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TGuerrila,I_G_engineer_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TGuerrila,I_G_engineer_F,PRIVATE,10,-10);
				};
			};
			class Motorized_MTP
			{
				name = $STR_A3_CfgGroups_Indep_Guerilla_Motorized_MTP0;
				class I_G_MotInf_Team
				{
					name = $STR_A3_CfgGroups_Indep_Guerilla_Motorized_MTP_IRG_MotInfTeam0;
					side = TGuerrila;
					faction = IND_G_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_motor_inf.paa";
					GROUP_UNIT(0,TGuerrila,I_G_Offroad_01_F,LIEUTENANT,0,0);
					GROUP_UNIT(1,TGuerrila,I_G_Soldier_TL_F,SERGEANT,5,-5);
					GROUP_UNIT(2,TGuerrila,I_G_Soldier_AR_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TGuerrila,I_G_Soldier_LAT_F,CORPORAL,10,-10);
					GROUP_UNIT(4,TGuerrila,I_G_medic_F,CORPORAL,-10,-10);
					GROUP_UNIT(5,TGuerrila,I_G_Soldier_F,CORPORAL,15,-15);
				};
				class I_G_Technicals
				{
					name = $STR_A3_CfgGroups_Indep_Guerilla_Motorized_MTP_IRG_Technicals0;
					side = TGuerrila;
					faction = IND_G_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_motor_inf.paa";
					GROUP_UNIT(0,TGuerrila,I_G_Offroad_01_armed_F,LIEUTENANT,0,0);
					GROUP_UNIT(1,TGuerrila,I_G_Offroad_01_armed_F,SERGEANT,10,-10);
					GROUP_UNIT(2,TGuerrila,I_G_Offroad_01_armed_F,CORPORAL,-10,-10);
				};
			};
			class Mechanized
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Mechanized0;
				class Aegis_I_G_MechInfSquad
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Mechanized_BUS_MechInfSquad0;
					side = TGuerrila;
					faction = IND_G_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_mech_inf.paa";
					GROUP_UNIT(0,TGuerrila,Aegis_I_G_APC_Wheeled_04_export_F,LIEUTENANT,0,0);
					GROUP_UNIT(1,TGuerrila,I_G_soldier_SL_F,SERGEANT,5,-5);
					GROUP_UNIT(2,TGuerrila,Aegis_I_G_HeavyGunner_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TGuerrila,I_G_soldier_LAT_F,CORPORAL,10,-10);
					GROUP_UNIT(4,TGuerrila,I_G_soldier_M_F,PRIVATE,-10,-10);
					GROUP_UNIT(5,TGuerrila,I_G_soldier_TL_F,SERGEANT,15,-15);
					GROUP_UNIT(6,TGuerrila,I_G_soldier_AR_F,CORPORAL,-15,-15);
					GROUP_UNIT(7,TGuerrila,I_G_soldier_A_F,PRIVATE,20,-20);
					GROUP_UNIT(8,TGuerrila,I_G_medic_F,PRIVATE,-20,-20);
				};
				class Aegis_I_G_MechInf_AT
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Mechanized_BUS_MechInf_AT0;
					side = TGuerrila;
					faction = IND_G_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_mech_inf.paa";
					GROUP_UNIT(0,TGuerrila,I_G_APC_Wheeled_03_cannon_F,LIEUTENANT,0,0);
					GROUP_UNIT(1,TGuerrila,I_G_soldier_SL_F,SERGEANT,5,-5);
					GROUP_UNIT(2,TGuerrila,I_G_soldier_AR_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TGuerrila,I_G_soldier_LAT_F,PRIVATE,10,-10);
					GROUP_UNIT(4,TGuerrila,I_G_soldier_LAT2_F,PRIVATE,-10,-10);
					GROUP_UNIT(5,TGuerrila,I_G_soldier_F,SERGEANT,15,-15);
					GROUP_UNIT(6,TGuerrila,I_G_soldier_A_F,CORPORAL,-15,-15);
					GROUP_UNIT(7,TGuerrila,I_G_soldier_M_F,PRIVATE,20,-20);
					GROUP_UNIT(8,TGuerrila,I_G_Medic_F,PRIVATE,-20,-20);
				};
			};
		};
		class IND_E_F
		{
			name = $STR_A3_C_CfgFactionClasses_IND_E_F0;
			class Infantry
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Infantry0;
				class I_E_InfTeam
				{
					class Unit3
					{
						vehicle = I_E_Soldier_LAT_F;
					};
				};
				class I_E_InfSquad_Weapons
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSquad_Weapons0;
					side = TGuerrila;
					faction = IND_E_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TGuerrila,I_E_Soldier_SL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TGuerrila,I_E_Soldier_AR_F,PRIVATE,5,-5);
					GROUP_UNIT(2,TGuerrila,I_E_Soldier_GL_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TGuerrila,I_E_Soldier_M_F,PRIVATE,10,-10);
					GROUP_UNIT(4,TGuerrila,I_E_Soldier_AT_F,PRIVATE,-10,-10);
					GROUP_UNIT(5,TGuerrila,I_E_Soldier_AAT_F,PRIVATE,15,-15);
					GROUP_UNIT(6,TGuerrila,I_E_Soldier_A_F,PRIVATE,-15,-15);
					GROUP_UNIT(7,TGuerrila,I_E_medic_F,PRIVATE,20,-20);
				};
				class I_E_InfTeam_AT
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam_AT0;
					side = TGuerrila;
					faction = IND_E_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TGuerrila,I_E_Soldier_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TGuerrila,I_E_Soldier_AT_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TGuerrila,I_E_Soldier_AT_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TGuerrila,I_E_Soldier_AAT_F,PRIVATE,10,-10);
				};
				class I_E_InfTeam_AA
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam_AA0;
					side = TGuerrila;
					faction = IND_E_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TGuerrila,I_E_Soldier_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TGuerrila,I_E_Soldier_AA_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TGuerrila,I_E_Soldier_AA_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TGuerrila,I_E_Soldier_AAA_F,PRIVATE,10,-10);
				};
				class I_E_InfTeam_Light
				{
					name = $STR_A3_CfgGroups_FireTeamLight;
					side = TGuerrila;
					faction = IND_E_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TGuerrila,I_E_Soldier_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TGuerrila,I_E_Soldier_AR_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TGuerrila,I_E_Soldier_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TGuerrila,I_E_Soldier_LAT2_F,PRIVATE,10,-10);
				};
			};
			class Support
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Support0;
				class I_E_Support_CLS
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Support_BUS_Support_CLS0;
					side = TGuerrila;
					faction = IND_E_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TGuerrila,I_E_Soldier_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TGuerrila,I_E_Soldier_AR_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TGuerrila,I_E_medic_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TGuerrila,I_E_medic_F,PRIVATE,10,-10);
				};
				class I_E_Support_EOD
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Support_BUS_Support_EOD0;
					side = TGuerrila;
					faction = IND_E_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TGuerrila,I_E_Soldier_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TGuerrila,I_E_engineer_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TGuerrila,I_E_Soldier_exp_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TGuerrila,I_E_Soldier_exp_F,PRIVATE,10,-10);
				};
				class I_E_Support_ENG
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Support_BUS_Support_ENG0;
					side = TGuerrila;
					faction = IND_E_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TGuerrila,I_E_Soldier_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TGuerrila,I_E_engineer_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TGuerrila,I_E_engineer_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TGuerrila,I_E_Soldier_repair_F,PRIVATE,10,-10);
				};
				class I_E_Support_MG
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Support_BUS_Support_MG0;
					side = TGuerrila;
					faction = IND_E_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TGuerrila,I_E_Soldier_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TGuerrila,I_E_Support_MG_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TGuerrila,I_E_Support_AMG_F,PRIVATE,-5,-5);
				};
				class I_E_Support_GMG
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Support_BUS_Support_GMG0;
					side = TGuerrila;
					faction = IND_E_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TGuerrila,I_E_Soldier_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TGuerrila,I_E_Support_GMG_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TGuerrila,I_E_Support_AMG_F,PRIVATE,-5,-5);
				};
				class I_E_Support_Mort
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Support_BUS_Support_Mort0;
					side = TGuerrila;
					faction = IND_E_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_mortar.paa";
					GROUP_UNIT(0,TGuerrila,I_E_Soldier_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TGuerrila,I_E_Support_Mort_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TGuerrila,I_E_Support_AMort_F,PRIVATE,-5,-5);
				};
			};
			class SpecOps
			{
				name = $STR_A3_CfgGroups_West_BLU_F_SpecOps0;
				class I_E_ReconTeam
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_ReconTeam0;
					side = TGuerrila;
					faction = IND_E_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";
					GROUP_UNIT(0,TGuerrila,I_E_recon_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TGuerrila,I_E_recon_M_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TGuerrila,I_E_recon_medic_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TGuerrila,I_E_recon_LAT_F,CORPORAL,10,-10);
					GROUP_UNIT(4,TGuerrila,I_E_recon_JTAC_F,PRIVATE,-10,-10);
					GROUP_UNIT(5,TGuerrila,I_E_recon_exp_F,PRIVATE,15,-15);
				};
				class I_E_ReconPatrol
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_ReconPatrol0;
					side = TGuerrila;
					faction = IND_E_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";
					GROUP_UNIT(0,TGuerrila,I_E_recon_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TGuerrila,I_E_recon_M_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TGuerrila,I_E_recon_medic_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TGuerrila,I_E_recon_F,PRIVATE,10,-10);
				};
				class I_E_ReconSentry
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_ReconSentry0;
					side = TGuerrila;
					faction = IND_E_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";
					GROUP_UNIT(0,TGuerrila,I_E_recon_M_F,CORPORAL,0,0);
					GROUP_UNIT(1,TGuerrila,I_E_recon_F,PRIVATE,5,-5);
				};
			};
			class Motorized
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Motorized0;
				class I_E_MotInf_Squad
				{
					class Unit3
					{
						vehicle = I_E_RadioOperator_F;
					};
				};
				class I_E_MotInf_Team
				{
					class Unit2
					{
						vehicle = I_E_Soldier_AR_F;
					};
					class Unit3
					{
						vehicle = I_E_Soldier_GL_F;
					};
					class Unit4
					{
						vehicle = I_E_Soldier_LAT_F;
					};
				};
				class I_E_MotInf_Reinforcements
				{
					class Unit2
					{
						vehicle = I_E_RadioOperator_F;
					};
					class Unit10
					{
						vehicle = I_E_RadioOperator_F;
					};
				};
				class I_E_MotInf_AT
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_AT0;
					side = TGuerrila;
					faction = IND_E_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_motor_inf.paa";
					GROUP_UNIT(0,TGuerrila,I_E_Offroad_01_F,SERGEANT,0,0);
					GROUP_UNIT(1,TGuerrila,I_E_Soldier_AT_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TGuerrila,I_E_Soldier_AT_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TGuerrila,I_E_Soldier_AAT_F,PRIVATE,10,-10);
					GROUP_UNIT(4,TGuerrila,I_E_Soldier_AAT_F,PRIVATE,-10,-10);
				};
				class I_E_MotInf_AA
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_AA0;
					side = TGuerrila;
					faction = IND_E_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_motor_inf.paa";
					GROUP_UNIT(0,TGuerrila,I_E_Offroad_01_F,SERGEANT,0,0);
					GROUP_UNIT(1,TGuerrila,I_E_Soldier_AA_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TGuerrila,I_E_Soldier_AA_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TGuerrila,I_E_Soldier_AAA_F,PRIVATE,10,-10);
					GROUP_UNIT(4,TGuerrila,I_E_Soldier_AAA_F,PRIVATE,-10,-10);
				};
				class I_E_MotInf_MGTeam
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_MGTeam0;
					side = TGuerrila;
					faction = IND_E_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_motor_inf.paa";
					GROUP_UNIT(0,TGuerrila,I_E_Offroad_01_F,SERGEANT,0,0);
					GROUP_UNIT(1,TGuerrila,I_E_Soldier_TL_F,SERGEANT,5,-5);
					GROUP_UNIT(2,TGuerrila,I_E_Support_MG_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TGuerrila,I_E_Support_AMG_F,PRIVATE,10,-10);
				};
				class I_E_MotInf_GMGTeam
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_GMGTeam0;
					side = TGuerrila;
					faction = IND_E_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_motor_inf.paa";
					GROUP_UNIT(0,TGuerrila,I_E_Offroad_01_F,SERGEANT,0,0);
					GROUP_UNIT(1,TGuerrila,I_E_Soldier_TL_F,SERGEANT,5,-5);
					GROUP_UNIT(2,TGuerrila,I_E_Support_GMG_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TGuerrila,I_E_Support_AMG_F,PRIVATE,10,-10);
				};
				class I_E_MotInf_MortTeam
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_MortTeam0;
					side = TGuerrila;
					faction = IND_E_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_motor_inf.paa";
					GROUP_UNIT(0,TGuerrila,I_E_Offroad_01_F,SERGEANT,0,0);
					GROUP_UNIT(1,TGuerrila,I_E_Soldier_TL_F,SERGEANT,5,-5);
					GROUP_UNIT(2,TGuerrila,I_E_Support_Mort_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TGuerrila,I_E_Support_AMort_F,PRIVATE,10,-10);
				};
			};
			class Mechanized
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Mechanized0;
				class I_E_MechInfSquad
				{
					class Unit0
					{
						vehicle = I_E_APC_tracked_03_cannon_v2_F;
					};
				};
				class I_E_MechInf_AT
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Mechanized_BUS_MechInf_AT0;
					side = TGuerrila;
					faction = IND_E_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_mech_inf.paa";
					GROUP_UNIT(0,TGuerrila,I_E_APC_tracked_03_cannon_v2_F,LIEUTENANT,0,0);
					GROUP_UNIT(1,TGuerrila,I_E_Soldier_SL_F,SERGEANT,5,-5);
					GROUP_UNIT(2,TGuerrila,I_E_Soldier_AT_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TGuerrila,I_E_Soldier_AT_F,PRIVATE,10,-10);
					GROUP_UNIT(4,TGuerrila,I_E_Soldier_AT_F,PRIVATE,-10,-10);
					GROUP_UNIT(5,TGuerrila,I_E_Soldier_AAT_F,PRIVATE,15,-15);
					GROUP_UNIT(6,TGuerrila,I_E_Soldier_AAT_F,PRIVATE,-15,-15);
					GROUP_UNIT(7,TGuerrila,I_E_Soldier_AAT_F,PRIVATE,20,-20);
				};
				class I_E_MechInf_AA
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Mechanized_BUS_MechInf_AA0;
					side = TGuerrila;
					faction = IND_E_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_mech_inf.paa";
					GROUP_UNIT(0,TGuerrila,I_E_APC_tracked_03_cannon_v2_F,LIEUTENANT,0,0);
					GROUP_UNIT(1,TGuerrila,I_E_Soldier_SL_F,SERGEANT,5,-5);
					GROUP_UNIT(2,TGuerrila,I_E_Soldier_AA_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TGuerrila,I_E_Soldier_AA_F,PRIVATE,10,-10);
					GROUP_UNIT(4,TGuerrila,I_E_Soldier_AA_F,PRIVATE,-10,-10);
					GROUP_UNIT(5,TGuerrila,I_E_Soldier_AAA_F,PRIVATE,15,-15);
					GROUP_UNIT(6,TGuerrila,I_E_Soldier_AAA_F,PRIVATE,-15,-15);
					GROUP_UNIT(7,TGuerrila,I_E_Soldier_AAA_F,PRIVATE,20,-20);
				};
				class I_E_MechInf_Support
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Mechanized_BUS_MechInf_Support0;
					side = TGuerrila;
					faction = IND_E_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_mech_inf.paa";
					GROUP_UNIT(0,TGuerrila,I_E_APC_tracked_03_cannon_v2_F,LIEUTENANT,0,0);
					GROUP_UNIT(1,TGuerrila,I_E_Soldier_SL_F,SERGEANT,5,-5);
					GROUP_UNIT(2,TGuerrila,I_E_Soldier_repair_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TGuerrila,I_E_engineer_F,PRIVATE,10,-10);
					GROUP_UNIT(4,TGuerrila,I_E_medic_F,PRIVATE,-10,-10);
					GROUP_UNIT(5,TGuerrila,I_E_Soldier_AR_F,CORPORAL,15,-15);
					GROUP_UNIT(6,TGuerrila,I_E_Soldier_exp_F,PRIVATE,-15,-15);
					GROUP_UNIT(7,TGuerrila,I_E_Soldier_A_F,PRIVATE,20,-20);
				};
			};
			class Armored
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Armored0;
				class Aegis_I_E_TankPlatoon
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Armored_BUS_TankPlatoon0;
					side = TGuerrila;
					faction = IND_E_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_armor.paa";
					GROUP_UNIT(0,TGuerrila,Aegis_I_E_MBT_03_cannon_F,LIEUTENANT,0,0);
					GROUP_UNIT(1,TGuerrila,Aegis_I_E_MBT_03_cannon_F,SERGEANT,10,-10);
					GROUP_UNIT(2,TGuerrila,Aegis_I_E_MBT_03_cannon_F,SERGEANT,-10,-10);
					GROUP_UNIT(3,TGuerrila,Aegis_I_E_MBT_03_cannon_F,CORPORAL,20,-20);
				};
				class Aegis_I_E_TankSection
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Armored_BUS_TankSection0;
					side = TGuerrila;
					faction = IND_E_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_armor.paa";
					GROUP_UNIT(0,TGuerrila,Aegis_I_E_MBT_03_cannon_F,LIEUTENANT,0,0);
					GROUP_UNIT(1,TGuerrila,Aegis_I_E_MBT_03_cannon_F,SERGEANT,10,-10);
				};
			};
		};
		class IND_L_F
		{
			class Infantry
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Infantry0;
				class I_L_LooterGang
				{
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_inf.paa";
				};
				class I_L_CriminalGang
				{
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_inf.paa";
				};
			};
		};
		class IND_E_ard_F
		{
			name = $STR_A3_A_CfgFactionClasses_IND_E_ard_F0;
			class Infantry
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Infantry0;
				class I_E_ard_InfSquad
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSquad0;
					side = TGuerrila;
					faction = IND_E_ard_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TGuerrila,I_E_Soldier_TL_ard_F,SERGEANT,0,0);
					GROUP_UNIT(1,TGuerrila,I_E_Soldier_ard_F,PRIVATE,5,-5);
					GROUP_UNIT(2,TGuerrila,I_E_Soldier_LAT_ard_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TGuerrila,I_E_Soldier_M_ard_F,PRIVATE,10,-10);
					GROUP_UNIT(4,TGuerrila,I_E_Soldier_GL_ard_F,SERGEANT,-10,-10);
					GROUP_UNIT(5,TGuerrila,I_E_Soldier_AR_ard_F,CORPORAL,15,-15);
					GROUP_UNIT(6,TGuerrila,I_E_Engineer_ard_F,PRIVATE,-15,-15);
					GROUP_UNIT(7,TGuerrila,I_E_Medic_ard_F,PRIVATE,20,-20);
				};
				class I_E_ard_InfSquad_Weapons
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSquad_Weapons0;
					side = TGuerrila;
					faction = IND_E_ard_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TGuerrila,I_E_soldier_SL_ard_F,SERGEANT,0,0);
					GROUP_UNIT(1,TGuerrila,I_E_soldier_AR_ard_F,PRIVATE,5,-5);
					GROUP_UNIT(2,TGuerrila,I_E_soldier_GL_ard_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TGuerrila,I_E_soldier_M_ard_F,PRIVATE,10,-10);
					GROUP_UNIT(4,TGuerrila,I_E_soldier_AT_ard_F,PRIVATE,-10,-10);
					GROUP_UNIT(5,TGuerrila,I_E_soldier_AAT_ard_F,PRIVATE,15,-15);
					GROUP_UNIT(6,TGuerrila,I_E_soldier_A_ard_F,PRIVATE,-15,-15);
					GROUP_UNIT(7,TGuerrila,I_E_medic_ard_F,PRIVATE,20,-20);
				};
				class I_E_ard_InfTeam
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam0;
					side = TGuerrila;
					faction = IND_E_ard_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TGuerrila,I_E_Soldier_TL_ard_F,SERGEANT,0,0);
					GROUP_UNIT(1,TGuerrila,I_E_Soldier_AR_ard_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TGuerrila,I_E_Soldier_GL_ard_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TGuerrila,I_E_Soldier_LAT_ard_F,PRIVATE,10,-10);
				};
				class I_E_ard_InfTeam_AT
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam_AT0;
					side = TGuerrila;
					faction = IND_E_ard_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TGuerrila,I_E_soldier_TL_ard_F,SERGEANT,0,0);
					GROUP_UNIT(1,TGuerrila,I_E_soldier_AT_ard_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TGuerrila,I_E_soldier_AT_ard_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TGuerrila,I_E_soldier_AAT_ard_F,PRIVATE,10,-10);
				};
				class I_E_ard_InfTeam_AA
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam_AA0;
					side = TGuerrila;
					faction = IND_E_ard_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TGuerrila,I_E_soldier_TL_ard_F,SERGEANT,0,0);
					GROUP_UNIT(1,TGuerrila,I_E_soldier_AA_ard_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TGuerrila,I_E_soldier_AA_ard_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TGuerrila,I_E_soldier_AAA_ard_F,PRIVATE,10,-10);
				};
				class I_E_ard_InfSentry
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSentry0;
					side = TGuerrila;
					faction = IND_E_ard_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TGuerrila,I_E_Soldier_GL_ard_F,CORPORAL,0,0);
					GROUP_UNIT(1,TGuerrila,I_E_Soldier_ard_F,PRIVATE,5,-5);
				};
				class I_E_ard_InfTeam_Light
				{
					name = $STR_A3_CfgGroups_FireTeamLight;
					side = TGuerrila;
					faction = IND_E_ard_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TGuerrila,I_E_Soldier_TL_ard_F,SERGEANT,0,0);
					GROUP_UNIT(1,TGuerrila,I_E_Soldier_AR_ard_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TGuerrila,I_E_Soldier_ard_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TGuerrila,I_E_Soldier_LAT2_ard_F,PRIVATE,10,-10);
				};
			};
			class SpecOps
			{
				name = $STR_A3_CfgGroups_West_BLU_F_SpecOps0;
				class I_E_ard_ReconTeam
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_ReconTeam0;
					side = TGuerrila;
					faction = IND_E_ard_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";
					GROUP_UNIT(0,TGuerrila,I_E_recon_TL_ard_F,SERGEANT,0,0);
					GROUP_UNIT(1,TGuerrila,I_E_recon_M_ard_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TGuerrila,I_E_recon_medic_ard_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TGuerrila,I_E_recon_LAT_ard_F,CORPORAL,10,-10);
					GROUP_UNIT(4,TGuerrila,I_E_recon_JTAC_ard_F,PRIVATE,-10,-10);
					GROUP_UNIT(5,TGuerrila,I_E_recon_exp_ard_F,PRIVATE,15,-15);
				};
				class I_E_ard_ReconPatrol
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_ReconPatrol0;
					side = TGuerrila;
					faction = IND_E_ard_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";
					GROUP_UNIT(0,TGuerrila,I_E_recon_TL_ard_F,SERGEANT,0,0);
					GROUP_UNIT(1,TGuerrila,I_E_recon_M_ard_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TGuerrila,I_E_recon_medic_ard_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TGuerrila,I_E_recon_ard_F,PRIVATE,10,-10);
				};
				class I_E_ard_ReconSentry
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_ReconSentry0;
					side = TGuerrila;
					faction = IND_E_ard_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";
					GROUP_UNIT(0,TGuerrila,I_E_recon_M_ard_F,CORPORAL,0,0);
					GROUP_UNIT(1,TGuerrila,I_E_recon_ard_F,PRIVATE,5,-5);
				};
			};
			class Support
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Support0;
				class I_E_ard_Support_CLS
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Support_BUS_Support_CLS0;
					side = TGuerrila;
					faction = IND_E_ard_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TGuerrila,I_E_Soldier_TL_ard_F,SERGEANT,0,0);
					GROUP_UNIT(1,TGuerrila,I_E_Soldier_AR_ard_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TGuerrila,I_E_medic_ard_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TGuerrila,I_E_medic_ard_F,PRIVATE,10,-10);
				};
				class I_E_ard_Support_EOD
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Support_BUS_Support_EOD0;
					side = TGuerrila;
					faction = IND_E_ard_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TGuerrila,I_E_Soldier_TL_ard_F,SERGEANT,0,0);
					GROUP_UNIT(1,TGuerrila,I_E_engineer_ard_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TGuerrila,I_E_Soldier_exp_ard_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TGuerrila,I_E_Soldier_exp_ard_F,PRIVATE,10,-10);
				};
				class I_E_ard_Support_ENG
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Support_BUS_Support_ENG0;
					side = TGuerrila;
					faction = IND_E_ard_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TGuerrila,I_E_Soldier_TL_ard_F,SERGEANT,0,0);
					GROUP_UNIT(1,TGuerrila,I_E_engineer_ard_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TGuerrila,I_E_engineer_ard_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TGuerrila,I_E_Soldier_repair_ard_F,PRIVATE,10,-10);
				};
				class I_E_ard_Support_MG
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Support_BUS_Support_MG0;
					side = TGuerrila;
					faction = IND_E_ard_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TGuerrila,I_E_Soldier_TL_ard_F,SERGEANT,0,0);
					GROUP_UNIT(1,TGuerrila,I_E_Support_MG_ard_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TGuerrila,I_E_Support_AMG_ard_F,PRIVATE,-5,-5);
				};
				class I_E_ard_Support_GMG
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Support_BUS_Support_GMG0;
					side = TGuerrila;
					faction = IND_E_ard_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TGuerrila,I_E_Soldier_TL_ard_F,SERGEANT,0,0);
					GROUP_UNIT(1,TGuerrila,I_E_Support_GMG_ard_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TGuerrila,I_E_Support_AMG_ard_F,PRIVATE,-5,-5);
				};
				class I_E_ard_Support_Mort
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Support_BUS_Support_Mort0;
					side = TGuerrila;
					faction = IND_E_ard_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_mortar.paa";
					GROUP_UNIT(0,TGuerrila,I_E_Soldier_TL_ard_F,SERGEANT,0,0);
					GROUP_UNIT(1,TGuerrila,I_E_Support_Mort_ard_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TGuerrila,I_E_Support_AMort_ard_F,PRIVATE,-5,-5);
				};
			};
			class Motorized
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Motorized0;
				class I_E_ard_MotInf_Squad
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Mechanized_BUS_MechInfSquad0;
					side = TGuerrila;
					faction = IND_E_ard_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_motor_inf.paa";
					GROUP_UNIT(0,TGuerrila,Aegis_I_E_Truck_02_transport_ard_F,SERGEANT,0,0);
					GROUP_UNIT(1,TGuerrila,I_E_soldier_SL_ard_F,SERGEANT,5,0);
					GROUP_UNIT(2,TGuerrila,I_E_RadioOperator_ard_F,PRIVATE,5,-2);
					GROUP_UNIT(3,TGuerrila,I_E_soldier_AT_ard_F,CORPORAL,5,-4);
					GROUP_UNIT(4,TGuerrila,I_E_soldier_M_ard_F,PRIVATE,5,-6);
					GROUP_UNIT(5,TGuerrila,I_E_soldier_TL_ard_F,SERGEANT,5,-8);
					GROUP_UNIT(6,TGuerrila,I_E_soldier_AR_ard_F,CORPORAL,5,-10);
					GROUP_UNIT(7,TGuerrila,I_E_soldier_A_ard_F,PRIVATE,5,-12);
					GROUP_UNIT(8,TGuerrila,I_E_medic_ard_F,PRIVATE,5,-14);
				};
				class I_E_ard_MotInf_Team
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_Team0;
					side = TGuerrila;
					faction = IND_E_ard_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_motor_inf.paa";
					GROUP_UNIT(0,TGuerrila,Aegis_I_E_Offroad_01_ard_F,SERGEANT,0,0);
					GROUP_UNIT(1,TGuerrila,I_E_soldier_TL_ard_F,SERGEANT,5,0);
					GROUP_UNIT(2,TGuerrila,I_E_soldier_AR_ard_F,PRIVATE,5,-2);
					GROUP_UNIT(3,TGuerrila,I_E_soldier_GL_ard_F,CORPORAL,5,-4);
					GROUP_UNIT(4,TGuerrila,I_E_soldier_LAT_ard_F,PRIVATE,5,-6);
				};
				class I_E_ard_MotInf_Reinforcements
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_Reinforce0;
					side = TGuerrila;
					faction = IND_E_ard_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_motor_inf.paa";
					GROUP_UNIT(0,TGuerrila,Aegis_I_E_Truck_02_transport_ard_F,SERGEANT,0,0);
					GROUP_UNIT(1,TGuerrila,I_E_soldier_SL_ard_F,SERGEANT,5,0);
					GROUP_UNIT(2,TGuerrila,I_E_RadioOperator_ard_F,PRIVATE,5,-2);
					GROUP_UNIT(3,TGuerrila,I_E_soldier_AT_ard_F,CORPORAL,5,-4);
					GROUP_UNIT(4,TGuerrila,I_E_soldier_M_ard_F,PRIVATE,5,-6);
					GROUP_UNIT(5,TGuerrila,I_E_soldier_TL_ard_F,SERGEANT,5,-8);
					GROUP_UNIT(6,TGuerrila,I_E_soldier_AR_ard_F,CORPORAL,5,-10);
					GROUP_UNIT(7,TGuerrila,I_E_soldier_A_ard_F,PRIVATE,5,-12);
					GROUP_UNIT(8,TGuerrila,I_E_medic_ard_F,PRIVATE,5,-14);
					GROUP_UNIT(9,TGuerrila,I_E_soldier_SL_ard_F,SERGEANT,-5,0);
					GROUP_UNIT(10,TGuerrila,I_E_RadioOperator_ard_F,PRIVATE,-5,-2);
					GROUP_UNIT(11,TGuerrila,I_E_soldier_AT_ard_F,CORPORAL,-5,-4);
					GROUP_UNIT(12,TGuerrila,I_E_soldier_M_ard_F,PRIVATE,-5,-6);
					GROUP_UNIT(13,TGuerrila,I_E_soldier_TL_ard_F,SERGEANT,-5,-8);
					GROUP_UNIT(14,TGuerrila,I_E_soldier_AR_ard_F,CORPORAL,-5,-10);
					GROUP_UNIT(15,TGuerrila,I_E_soldier_A_ard_F,PRIVATE,-5,-12);
					GROUP_UNIT(16,TGuerrila,I_E_medic_ard_F,PRIVATE,-5,-14);
				};
				class I_E_ard_MotInf_AT
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_AT0;
					side = TGuerrila;
					faction = IND_E_ard_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_motor_inf.paa";
					GROUP_UNIT(0,TGuerrila,Aegis_I_E_Offroad_01_ard_F,SERGEANT,0,0);
					GROUP_UNIT(1,TGuerrila,I_E_Soldier_AT_ard_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TGuerrila,I_E_Soldier_AT_ard_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TGuerrila,I_E_Soldier_AAT_ard_F,PRIVATE,10,-10);
					GROUP_UNIT(4,TGuerrila,I_E_Soldier_AAT_ard_F,PRIVATE,-10,-10);
				};
				class I_E_ard_MotInf_AA
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_AA0;
					side = TGuerrila;
					faction = IND_E_ard_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_motor_inf.paa";
					GROUP_UNIT(0,TGuerrila,Aegis_I_E_Offroad_01_ard_F,SERGEANT,0,0);
					GROUP_UNIT(1,TGuerrila,I_E_Soldier_AA_ard_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TGuerrila,I_E_Soldier_AA_ard_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TGuerrila,I_E_Soldier_AAA_ard_F,PRIVATE,10,-10);
					GROUP_UNIT(4,TGuerrila,I_E_Soldier_AAA_ard_F,PRIVATE,-10,-10);
				};
				class I_E_ard_MotInf_MGTeam
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_MGTeam0;
					side = TGuerrila;
					faction = IND_E_ard_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_motor_inf.paa";
					GROUP_UNIT(0,TGuerrila,Aegis_I_E_Offroad_01_ard_F,SERGEANT,0,0);
					GROUP_UNIT(1,TGuerrila,I_E_Soldier_TL_ard_F,SERGEANT,5,-5);
					GROUP_UNIT(2,TGuerrila,I_E_Support_MG_ard_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TGuerrila,I_E_Support_AMG_ard_F,PRIVATE,10,-10);
				};
				class I_E_ard_MotInf_GMGTeam
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_GMGTeam0;
					side = TGuerrila;
					faction = IND_E_ard_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_motor_inf.paa";
					GROUP_UNIT(0,TGuerrila,Aegis_I_E_Offroad_01_ard_F,SERGEANT,0,0);
					GROUP_UNIT(1,TGuerrila,I_E_Soldier_TL_ard_F,SERGEANT,5,-5);
					GROUP_UNIT(2,TGuerrila,I_E_Support_GMG_ard_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TGuerrila,I_E_Support_AMG_ard_F,PRIVATE,10,-10);
				};
				class I_E_ard_MotInf_MortTeam
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_MortTeam0;
					side = TGuerrila;
					faction = IND_E_ard_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_motor_inf.paa";
					GROUP_UNIT(0,TGuerrila,Aegis_I_E_Offroad_01_ard_F,SERGEANT,0,0);
					GROUP_UNIT(1,TGuerrila,I_E_Soldier_TL_ard_F,SERGEANT,5,-5);
					GROUP_UNIT(2,TGuerrila,I_E_Support_Mort_ard_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TGuerrila,I_E_Support_AMort_ard_F,PRIVATE,10,-10);
				};
			};
			class Mechanized
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Mechanized0;
				class I_E_ard_MechInfSquad
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Mechanized_BUS_MechInfSquad0;
					side = TGuerrila;
					faction = IND_E_ard_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_mech_inf.paa";
					GROUP_UNIT(0,TGuerrila,Aegis_I_E_APC_tracked_03_cannon_v2_ard_F,LIEUTENANT,0,0);
					GROUP_UNIT(1,TGuerrila,I_E_soldier_SL_ard_F,SERGEANT,5,-5);
					GROUP_UNIT(2,TGuerrila,I_E_RadioOperator_ard_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TGuerrila,I_E_soldier_AT_ard_F,CORPORAL,10,-10);
					GROUP_UNIT(4,TGuerrila,I_E_soldier_M_ard_F,PRIVATE,-10,-10);
					GROUP_UNIT(5,TGuerrila,I_E_soldier_TL_ard_F,SERGEANT,15,-15);
					GROUP_UNIT(6,TGuerrila,I_E_soldier_AR_ard_F,CORPORAL,-15,-15);
					GROUP_UNIT(7,TGuerrila,I_E_soldier_A_ard_F,PRIVATE,20,-20);
					GROUP_UNIT(8,TGuerrila,I_E_medic_ard_F,PRIVATE,-20,-20);
				};
				class I_E_ard_MechInf_AT
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Mechanized_BUS_MechInf_AT0;
					side = TGuerrila;
					faction = IND_E_ard_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_mech_inf.paa";
					GROUP_UNIT(0,TGuerrila,Aegis_I_E_APC_tracked_03_cannon_v2_ard_F,LIEUTENANT,0,0);
					GROUP_UNIT(1,TGuerrila,I_E_Soldier_SL_ard_F,SERGEANT,5,-5);
					GROUP_UNIT(2,TGuerrila,I_E_Soldier_AT_ard_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TGuerrila,I_E_Soldier_AT_ard_F,PRIVATE,10,-10);
					GROUP_UNIT(4,TGuerrila,I_E_Soldier_AT_ard_F,PRIVATE,-10,-10);
					GROUP_UNIT(5,TGuerrila,I_E_Soldier_AAT_ard_F,PRIVATE,15,-15);
					GROUP_UNIT(6,TGuerrila,I_E_Soldier_AAT_ard_F,PRIVATE,-15,-15);
					GROUP_UNIT(7,TGuerrila,I_E_Soldier_AAT_ard_F,PRIVATE,20,-20);
				};
				class I_E_ard_MechInf_AA
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Mechanized_BUS_MechInf_AA0;
					side = TGuerrila;
					faction = IND_E_ard_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_mech_inf.paa";
					GROUP_UNIT(0,TGuerrila,Aegis_I_E_APC_tracked_03_cannon_v2_ard_F,LIEUTENANT,0,0);
					GROUP_UNIT(1,TGuerrila,I_E_Soldier_SL_ard_F,SERGEANT,5,-5);
					GROUP_UNIT(2,TGuerrila,I_E_Soldier_AA_ard_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TGuerrila,I_E_Soldier_AA_ard_F,PRIVATE,10,-10);
					GROUP_UNIT(4,TGuerrila,I_E_Soldier_AA_ard_F,PRIVATE,-10,-10);
					GROUP_UNIT(5,TGuerrila,I_E_Soldier_AAA_ard_F,PRIVATE,15,-15);
					GROUP_UNIT(6,TGuerrila,I_E_Soldier_AAA_ard_F,PRIVATE,-15,-15);
					GROUP_UNIT(7,TGuerrila,I_E_Soldier_AAA_ard_F,PRIVATE,20,-20);
				};
				class I_E_ard_MechInf_Support
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Mechanized_BUS_MechInf_Support0;
					side = TGuerrila;
					faction = IND_E_ard_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_mech_inf.paa";
					GROUP_UNIT(0,TGuerrila,Aegis_I_E_APC_tracked_03_cannon_v2_ard_F,LIEUTENANT,0,0);
					GROUP_UNIT(1,TGuerrila,I_E_Soldier_SL_ard_F,SERGEANT,5,-5);
					GROUP_UNIT(2,TGuerrila,I_E_Soldier_repair_ard_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TGuerrila,I_E_engineer_ard_F,PRIVATE,10,-10);
					GROUP_UNIT(4,TGuerrila,I_E_medic_ard_F,PRIVATE,-10,-10);
					GROUP_UNIT(5,TGuerrila,I_E_Soldier_AR_ard_F,CORPORAL,15,-15);
					GROUP_UNIT(6,TGuerrila,I_E_Soldier_exp_ard_F,PRIVATE,-15,-15);
					GROUP_UNIT(7,TGuerrila,I_E_Soldier_A_ard_F,PRIVATE,20,-20);
				};
			};
			class Armored
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Armored0;
				class I_E_ard_TankPlatoon
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Armored_BUS_TankPlatoon0;
					side = TGuerrila;
					faction = IND_E_ard_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_armor.paa";
					GROUP_UNIT(0,TGuerrila,Aegis_I_E_MBT_03_cannon_ard_F,LIEUTENANT,0,0);
					GROUP_UNIT(1,TGuerrila,Aegis_I_E_MBT_03_cannon_ard_F,SERGEANT,10,-10);
					GROUP_UNIT(2,TGuerrila,Aegis_I_E_MBT_03_cannon_ard_F,SERGEANT,-10,-10);
					GROUP_UNIT(3,TGuerrila,Aegis_I_E_MBT_03_cannon_ard_F,CORPORAL,20,-20);
				};
				class I_E_ard_TankSection
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Armored_BUS_TankSection0;
					side = TGuerrila;
					faction = IND_E_ard_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_armor.paa";
					GROUP_UNIT(0,TGuerrila,Aegis_I_E_MBT_03_cannon_ard_F,LIEUTENANT,0,0);
					GROUP_UNIT(1,TGuerrila,Aegis_I_E_MBT_03_cannon_ard_F,SERGEANT,10,-10);
				};
			};
		};
		class IND_Raven_F
		{
			name = $STR_A3_A_CfgFactionClasses_IND_Raven_F0;
			class Infantry
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Infantry0;
				class I_Raven_InfSquad
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSquad0;
					side = TGuerrila;
					faction = IND_Raven_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TGuerrila,I_Raven_soldier_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TGuerrila,I_Raven_soldier_F,PRIVATE,5,-5);
					GROUP_UNIT(2,TGuerrila,I_Raven_soldier_LAT_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TGuerrila,I_Raven_soldier_M_F,PRIVATE,10,-10);
					GROUP_UNIT(4,TGuerrila,I_Raven_soldier_GL_F,SERGEANT,-10,-10);
					GROUP_UNIT(5,TGuerrila,I_Raven_soldier_MG_F,CORPORAL,15,-15);
					GROUP_UNIT(6,TGuerrila,I_Raven_engineer_F,PRIVATE,-15,-15);
					GROUP_UNIT(7,TGuerrila,I_Raven_medic_F,PRIVATE,20,-20);
				};
				class I_Raven_InfTeam
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam0;
					side = TGuerrila;
					faction = IND_Raven_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TGuerrila,I_Raven_soldier_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TGuerrila,I_Raven_soldier_MG_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TGuerrila,I_Raven_soldier_GL_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TGuerrila,I_Raven_soldier_LAT_F,PRIVATE,10,-10);
				};
				class I_Raven_InfSentry
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSentry0;
					side = TGuerrila;
					faction = IND_Raven_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TGuerrila,I_Raven_soldier_GL_F,CORPORAL,0,0);
					GROUP_UNIT(1,TGuerrila,I_Raven_soldier_F,PRIVATE,5,-5);
				};
			};
			class Motorized_MTP
			{
				name = $STR_A3_CfgGroups_East_OPF_F_Motorized_MTP0;
				class I_Raven_MotInf_Team
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_Team0;
					side = TGuerrila;
					faction = IND_Raven_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_motor_inf.paa";
					GROUP_UNIT(0,TGuerrila,I_Raven_MRAP_02_HMG_F,SERGEANT,0,0);
					GROUP_UNIT(1,TGuerrila,I_Raven_soldier_MG_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TGuerrila,I_Raven_soldier_LAT_F,PRIVATE,-5,-5);
				};
				class I_Raven_MotInf_Reinforcements
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_Reinforce0;
					side = TGuerrila;
					faction = IND_Raven_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_motor_inf.paa";
					GROUP_UNIT(0,TGuerrila,Aegis_I_Raven_Truck_02_F,SERGEANT,0,0);
					GROUP_UNIT(1,TGuerrila,I_Raven_soldier_TL_F,SERGEANT,5,0);
					GROUP_UNIT(2,TGuerrila,I_Raven_Soldier_F,PRIVATE,5,-2);
					GROUP_UNIT(3,TGuerrila,I_Raven_soldier_LAT_F,CORPORAL,5,-4);
					GROUP_UNIT(4,TGuerrila,I_Raven_soldier_M_F,PRIVATE,5,-6);
					GROUP_UNIT(5,TGuerrila,I_Raven_soldier_GL_F,SERGEANT,5,-8);
					GROUP_UNIT(6,TGuerrila,I_Raven_soldier_MG_F,CORPORAL,5,-10);
					GROUP_UNIT(7,TGuerrila,I_Raven_engineer_F,PRIVATE,-5,-8);
					GROUP_UNIT(8,TGuerrila,I_Raven_medic_F,PRIVATE,-5,-10);
					GROUP_UNIT(9,TGuerrila,I_Raven_soldier_TL_F,SERGEANT,-5,0);
					GROUP_UNIT(10,TGuerrila,I_Raven_soldier_MG_F,CORPORAL,-5,-2);
					GROUP_UNIT(11,TGuerrila,I_Raven_soldier_GL_F,PRIVATE,-5,-4);
					GROUP_UNIT(12,TGuerrila,I_Raven_soldier_LAT_F,PRIVATE,-5,-6);
				};
			};
			class Mechanized
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Mechanized0;
				class I_Raven_MechInfSquad
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Mechanized_BUS_MechInfSquad0;
					side = TGuerrila;
					faction = IND_Raven_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_mech_inf.paa";
					GROUP_UNIT(0,TGuerrila,Aegis_I_Raven_APC_Wheeled_04_export_F,LIEUTENANT,0,0);
					GROUP_UNIT(1,TGuerrila,I_Raven_soldier_TL_F,SERGEANT,5,-5);
					GROUP_UNIT(2,TGuerrila,I_Raven_soldier_LAT_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TGuerrila,I_Raven_soldier_M_F,PRIVATE,10,-10);
					GROUP_UNIT(4,TGuerrila,I_Raven_soldier_TL_F,SERGEANT,-10,-10);
					GROUP_UNIT(5,TGuerrila,I_Raven_soldier_MG_F,CORPORAL,15,-15);
					GROUP_UNIT(6,TGuerrila,I_Raven_medic_F,PRIVATE,-15,-15);
				};
			};
		};
		class IND_TURA_lxWS
		{
			class Mechanized
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Mechanized0;
				class Aegis_I_Tura_MechInfSquad
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Mechanized_BUS_MechInfSquad0;
					side = TGuerrila;
					faction = IND_TURA_lxWS;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_mech_inf.paa";
					GROUP_UNIT(0,TGuerrila,Aegis_I_Tura_APC_Wheeled_04_export_F,LIEUTENANT,0,0);
					GROUP_UNIT(1,TGuerrila,I_SFIA_enforcer_lxWS,SERGEANT,5,-5);
					GROUP_UNIT(2,TGuerrila,I_SFIA_hireling_lxWS,CORPORAL,-5,-5);
					GROUP_UNIT(3,TGuerrila,I_SFIA_watcher_lxWS,PRIVATE,10,-10);
					GROUP_UNIT(4,TGuerrila,I_SFIA_defector_lxWS,SERGEANT,-10,-10);
					GROUP_UNIT(5,TGuerrila,I_SFIA_scout_lxWS,CORPORAL,15,-15);
					GROUP_UNIT(6,TGuerrila,I_SFIA_medic2_lxWS,PRIVATE,-15,-15);
				};
			};		
		};
	};
};