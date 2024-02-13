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
		class Atlas_BLU_L_F
		{
			name = $STR_A3_A_CfgFactionClasses_BLU_L_F0;
			class Infantry
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Infantry0;
				class Atlas_B_L_InfSquad
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSquad0;
					side = TWest;
					faction = Atlas_BLU_L_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,Atlas_B_L_soldier_SL_F,SERGEANT,0,0)
					GROUP_UNIT(1,TWest,Atlas_B_L_RadioOperator_F,PRIVATE,5,-5)
					GROUP_UNIT(2,TWest,Atlas_B_L_soldier_LAT_F,CORPORAL,-5,-5)
					GROUP_UNIT(3,TWest,Atlas_B_L_soldier_M_F,PRIVATE,10,-10)
					GROUP_UNIT(4,TWest,Atlas_B_L_soldier_TL_F,SERGEANT,-10,-10)
					GROUP_UNIT(5,TWest,Atlas_B_L_soldier_AR_F,CORPORAL,15,-15)
					GROUP_UNIT(6,TWest,Atlas_B_L_soldier_A_F,PRIVATE,-15,-15)
					GROUP_UNIT(7,TWest,Atlas_B_L_medic_F,PRIVATE,20,-20)
				};
				class Atlas_B_L_InfTeam
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam0;
					side = TWest;
					faction = Atlas_BLU_L_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,Atlas_B_L_soldier_TL_F,SERGEANT,0,0)
					GROUP_UNIT(1,TWest,Atlas_B_L_soldier_AR_F,CORPORAL,5,-5)
					GROUP_UNIT(2,TWest,Atlas_B_L_soldier_GL_F,PRIVATE,-5,-5)
					GROUP_UNIT(3,TWest,Atlas_B_L_soldier_LAT_F,PRIVATE,10,-10)
				};
				class Atlas_B_L_InfSentry
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSentry0;
					side = TWest;
					faction = Atlas_BLU_L_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,Atlas_B_L_soldier_GL_F,CORPORAL,0,0)
					GROUP_UNIT(1,TWest,Atlas_B_L_soldier_F,PRIVATE,5,-5)
				};
			};
			class Motorized
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Motorized0;
				class Atlas_B_L_MotInf_Team
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_Team0;
					side = TWest;
					faction = Atlas_BLU_L_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_motor_inf.paa";
					GROUP_UNIT(0,TWest,Atlas_B_L_LSV_01_armed_F,SERGEANT,0,0)
					GROUP_UNIT(1,TWest,Atlas_B_L_soldier_LAT_F,PRIVATE,5,-5)
				};
				class Atlas_B_L_MotInf_AT
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_AT0;
					side = TWest;
					faction = Atlas_BLU_L_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_motor_inf.paa";
					GROUP_UNIT(0,TWest,Atlas_B_L_LSV_01_armed_F,SERGEANT,0,0)
					GROUP_UNIT(1,TWest,Atlas_B_L_soldier_AT_F,CORPORAL,5,-5)
					GROUP_UNIT(2,TWest,Atlas_B_L_soldier_AT_F,CORPORAL,-5,-5)
				};
				class Atlas_B_L_MotInf_AA
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_AA0;
					side = TWest;
					faction = Atlas_BLU_L_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_motor_inf.paa";
					GROUP_UNIT(0,TWest,Atlas_B_L_LSV_01_armed_F,SERGEANT,0,0)
					GROUP_UNIT(1,TWest,Atlas_B_L_soldier_AA_F,CORPORAL,5,-5)
					GROUP_UNIT(2,TWest,Atlas_B_L_soldier_AA_F,CORPORAL,-5,-5)
				};
				class Atlas_B_L_MotInf_Reinforcements
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_Reinforce0;
					side = TWest;
					faction = Atlas_BLU_L_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_motor_inf.paa";
					GROUP_UNIT(0,TWest,Atlas_B_L_Truck_01_transport_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,Atlas_B_L_soldier_SL_F,SERGEANT,5,0);
					GROUP_UNIT(2,TWest,Atlas_B_L_RadioOperator_F,PRIVATE,5,-2);
					GROUP_UNIT(3,TWest,Atlas_B_L_soldier_AT_F,CORPORAL,5,-4);
					GROUP_UNIT(4,TWest,Atlas_B_L_soldier_M_F,PRIVATE,5,-6);
					GROUP_UNIT(5,TWest,Atlas_B_L_soldier_TL_F,SERGEANT,5,-8);
					GROUP_UNIT(6,TWest,Atlas_B_L_soldier_AR_F,CORPORAL,5,-10);
					GROUP_UNIT(7,TWest,Atlas_B_L_soldier_A_F,PRIVATE,5,-12);
					GROUP_UNIT(8,TWest,Atlas_B_L_medic_F,PRIVATE,5,-14);
					GROUP_UNIT(9,TWest,Atlas_B_L_soldier_SL_F,SERGEANT,-5,0);
					GROUP_UNIT(10,TWest,Atlas_B_L_RadioOperator_F,PRIVATE,-5,-2);
					GROUP_UNIT(11,TWest,Atlas_B_L_soldier_AT_F,CORPORAL,-5,-4);
					GROUP_UNIT(12,TWest,Atlas_B_L_soldier_M_F,PRIVATE,-5,-6);
					GROUP_UNIT(13,TWest,Atlas_B_L_soldier_TL_F,SERGEANT,-5,-8);
					GROUP_UNIT(14,TWest,Atlas_B_L_soldier_AR_F,CORPORAL,-5,-10);
					GROUP_UNIT(15,TWest,Atlas_B_L_soldier_A_F,PRIVATE,-5,-12);
					GROUP_UNIT(16,TWest,Atlas_B_L_medic_F,PRIVATE,-5,-14);
				};
			};
			class Armored
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Armored0;
				class Atlas_B_L_TankDestrSection_Rhino
				{
					name = $STR_A3_CfgGroups_TDSection;
					side = TWest;
					faction = Atlas_BLU_L_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_art.paa";
					GROUP_UNIT(0,TWest,Atlas_B_L_AFV_Wheeled_01_cannon_F,LIEUTENANT,0,0);
					GROUP_UNIT(1,TWest,Atlas_B_L_AFV_Wheeled_01_cannon_F,SERGEANT,10,-10);
				};
				class Atlas_B_L_TankDestrSection_RhinoUP
				{
					name = $STR_A3_CfgGroups_TDSectionUP;
					side = TWest;
					faction = Atlas_BLU_L_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_art.paa";
					GROUP_UNIT(0,TWest,Atlas_B_L_AFV_Wheeled_01_up_cannon_F,LIEUTENANT,0,0);
					GROUP_UNIT(1,TWest,Atlas_B_L_AFV_Wheeled_01_up_cannon_F,SERGEANT,10,-10);
				};
			};
		};
		class Atlas_BLU_G_F
		{
			name = $STR_A3_A_CfgFactionClasses_BLU_G_F0;
			class Infantry
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Infantry0;
				class B_G_InfSquad
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSquad0;
					side = TWest;
					faction = Atlas_BLU_G_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,Atlas_B_G_soldier_SL_F,SERGEANT,0,0)
					GROUP_UNIT(1,TWest,Atlas_B_G_RadioOperator_F,PRIVATE,5,-5)
					GROUP_UNIT(2,TWest,Atlas_B_G_soldier_LAT_F,CORPORAL,-5,-5)
					GROUP_UNIT(3,TWest,Atlas_B_G_soldier_M_F,PRIVATE,10,-10)
					GROUP_UNIT(4,TWest,Atlas_B_G_soldier_TL_F,SERGEANT,-10,-10)
					GROUP_UNIT(5,TWest,Atlas_B_G_soldier_AR_F,CORPORAL,15,-15)
					GROUP_UNIT(6,TWest,Atlas_B_G_soldier_A_F,PRIVATE,-15,-15)
					GROUP_UNIT(7,TWest,Atlas_B_G_medic_F,PRIVATE,20,-20)
				};
				class B_G_InfSquad_Weapons
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSquad_Weapons0;
					side = TWest;
					faction = Atlas_BLU_G_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,Atlas_B_G_soldier_SL_F,SERGEANT,0,0)
					GROUP_UNIT(1,TWest,Atlas_B_G_soldier_AR_F,PRIVATE,5,-5)
					GROUP_UNIT(2,TWest,Atlas_B_G_soldier_GL_F,CORPORAL,-5,-5)
					GROUP_UNIT(3,TWest,Atlas_B_G_soldier_M_F,PRIVATE,10,-10)
					GROUP_UNIT(4,TWest,Atlas_B_G_soldier_AT_F,PRIVATE,-10,-10)
					GROUP_UNIT(5,TWest,Atlas_B_G_soldier_F,PRIVATE,15,-15)
					GROUP_UNIT(6,TWest,Atlas_B_G_soldier_A_F,PRIVATE,-15,-15)
					GROUP_UNIT(7,TWest,Atlas_B_G_medic_F,PRIVATE,20,-20)
				};
				class B_G_InfTeam
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam0;
					side = TWest;
					faction = Atlas_BLU_G_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,Atlas_B_G_soldier_TL_F,SERGEANT,0,0)
					GROUP_UNIT(1,TWest,Atlas_B_G_soldier_AR_F,CORPORAL,5,-5)
					GROUP_UNIT(2,TWest,Atlas_B_G_soldier_GL_F,PRIVATE,-5,-5)
					GROUP_UNIT(3,TWest,Atlas_B_G_soldier_LAT_F,PRIVATE,10,-10)
				};
				class B_G_InfTeam_AT
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam_AT0;
					side = TWest;
					faction = Atlas_BLU_G_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,Atlas_B_G_soldier_TL_F,SERGEANT,0,0)
					GROUP_UNIT(1,TWest,Atlas_B_G_soldier_AT_F,CORPORAL,5,-5)
					GROUP_UNIT(2,TWest,Atlas_B_G_soldier_AT_F,PRIVATE,-5,-5)
					GROUP_UNIT(3,TWest,Atlas_B_G_soldier_F,PRIVATE,10,-10)
				};
				class B_G_InfTeam_AA
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam_AA0;
					side = TWest;
					faction = Atlas_BLU_G_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,Atlas_B_G_soldier_TL_F,SERGEANT,0,0)
					GROUP_UNIT(1,TWest,Atlas_B_G_soldier_AA_F,CORPORAL,5,-5)
					GROUP_UNIT(2,TWest,Atlas_B_G_soldier_AA_F,PRIVATE,-5,-5)
					GROUP_UNIT(3,TWest,Atlas_B_G_soldier_F,PRIVATE,10,-10)
				};
				class B_G_InfSentry
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSentry0;
					side = TWest;
					faction = Atlas_BLU_G_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,Atlas_B_G_soldier_GL_F,CORPORAL,0,0)
					GROUP_UNIT(1,TWest,Atlas_B_G_soldier_F,PRIVATE,5,-5)
				};
			};
			class SpecOps
			{
				name = $STR_A3_CfgGroups_West_BLU_F_SpecOps0;
				class B_G_ReconTeam
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_ReconTeam0;
					side = TWest;
					faction = Atlas_BLU_G_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";
					GROUP_UNIT(0,TWest,Atlas_B_G_recon_TL_F,SERGEANT,0,0)
					GROUP_UNIT(1,TWest,Atlas_B_G_recon_M_F,CORPORAL,5,-5)
					GROUP_UNIT(2,TWest,Atlas_B_G_recon_medic_F,PRIVATE,-5,-5)
					GROUP_UNIT(3,TWest,Atlas_B_G_recon_LAT_F,CORPORAL,10,-10)
					GROUP_UNIT(4,TWest,Atlas_B_G_recon_JTAC_F,PRIVATE,-10,-10)
					GROUP_UNIT(5,TWest,Atlas_B_G_recon_exp_F,PRIVATE,15,-15)
				};
				class B_G_ReconPatrol
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_ReconPatrol0;
					side = TWest;
					faction = Atlas_BLU_G_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";
					GROUP_UNIT(0,TWest,Atlas_B_G_recon_TL_F,SERGEANT,0,0)
					GROUP_UNIT(1,TWest,Atlas_B_G_recon_M_F,CORPORAL,5,-5)
					GROUP_UNIT(2,TWest,Atlas_B_G_recon_medic_F,PRIVATE,-5,-5)
					GROUP_UNIT(3,TWest,Atlas_B_G_recon_F,PRIVATE,10,-10)
				};
				class B_G_ReconSentry
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_ReconSentry0;
					side = TWest;
					faction = Atlas_BLU_G_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";
					GROUP_UNIT(0,TWest,Atlas_B_G_recon_M_F,CORPORAL,0,0)
					GROUP_UNIT(1,TWest,Atlas_B_G_recon_F,PRIVATE,5,-5)
				};
			};
			class Motorized
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Motorized0;
				class B_G_MotInf_Team
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_Team0;
					side = TWest;
					faction = Atlas_BLU_G_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_motor_inf.paa";
					GROUP_UNIT(0,TWest,Atlas_B_G_MRAP_03_gmg_F,SERGEANT,0,0)
					GROUP_UNIT(1,TWest,Atlas_B_G_soldier_LAT_F,CORPORAL,5,-5)
				};
				class B_G_MotInf_AT
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_AT0;
					side = TWest;
					faction = Atlas_BLU_G_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_motor_inf.paa";
					GROUP_UNIT(0,TWest,Atlas_B_G_MRAP_03_F,SERGEANT,0,0)
					GROUP_UNIT(1,TWest,Atlas_B_G_soldier_AT_F,CORPORAL,5,-5)
					GROUP_UNIT(2,TWest,Atlas_B_G_soldier_AT_F,CORPORAL,-5,-5)
				};
				class B_G_MotInf_AA
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_AA0;
					side = TWest;
					faction = Atlas_BLU_G_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_motor_inf.paa";
					GROUP_UNIT(0,TWest,Atlas_B_G_MRAP_03_F,SERGEANT,0,0)
					GROUP_UNIT(1,TWest,Atlas_B_G_soldier_AA_F,CORPORAL,5,-5)
					GROUP_UNIT(2,TWest,Atlas_B_G_soldier_AA_F,CORPORAL,-5,-5)
				};
			};
			class Mechanized
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Mechanized0;
				class B_G_MechInfSquad
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Mechanized_BUS_MechInfSquad0;
					side = TWest;
					faction = Atlas_BLU_G_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_mech_inf.paa";
					GROUP_UNIT(0,TWest,Atlas_B_G_APC_Wheeled_03_cannon_F,LIEUTENANT,0,0)
					GROUP_UNIT(1,TWest,Atlas_B_G_soldier_SL_F,SERGEANT,5,-5)
					GROUP_UNIT(2,TWest,Atlas_B_G_RadioOperator_F,PRIVATE,-5,-5)
					GROUP_UNIT(3,TWest,Atlas_B_G_soldier_LAT_F,CORPORAL,10,-10)
					GROUP_UNIT(4,TWest,Atlas_B_G_soldier_M_F,PRIVATE,-10,-10)
					GROUP_UNIT(5,TWest,Atlas_B_G_soldier_TL_F,SERGEANT,15,-15)
					GROUP_UNIT(6,TWest,Atlas_B_G_soldier_AR_F,CORPORAL,-15,-15)
					GROUP_UNIT(7,TWest,Atlas_B_G_soldier_A_F,PRIVATE,20,-20)
					GROUP_UNIT(8,TWest,Atlas_B_G_medic_F,PRIVATE,-20,-20)
				};
			};
			class Armored
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Armored0;
				class B_G_TankPlatoon
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Armored_BUS_TankPlatoon0;
					side = TWest;
					faction = Atlas_BLU_G_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_armor.paa";
					GROUP_UNIT(0,TWest,Atlas_B_G_MBT_03_cannon_F,LIEUTENANT,0,0)
					GROUP_UNIT(1,TWest,Atlas_B_G_MBT_03_cannon_F,SERGEANT,10,-10)
					GROUP_UNIT(2,TWest,Atlas_B_G_MBT_03_cannon_F,SERGEANT,-10,-10)
					GROUP_UNIT(3,TWest,Atlas_B_G_MBT_03_cannon_F,CORPORAL,20,-20)
				};
				class B_G_TankSection
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Armored_BUS_TankSection0;
					side = TWest;
					faction = Atlas_BLU_G_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_armor.paa";
					GROUP_UNIT(0,TWest,Atlas_B_G_MBT_03_cannon_F,LIEUTENANT,0,0)
					GROUP_UNIT(1,TWest,Atlas_B_G_MBT_03_cannon_F,SERGEANT,10,-10)
				};
				class B_G_LTankSection_Assault
				{
					name = $STR_A3_CfgGroups_Indep_IND_F_Armored_I_LTankSection_Assault0;
					side = TWest;
					faction = Atlas_BLU_G_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_armor.paa";
					GROUP_UNIT(0,TWest,Atlas_B_G_LT_01_cannon_F,LIEUTENANT,0,0)
					GROUP_UNIT(1,TWest,Atlas_B_G_LT_01_cannon_F,SERGEANT,10,-10)
				};
				class B_G_LTankSection_Recon
				{
					name = $STR_A3_CfgGroups_Indep_IND_F_Armored_I_LTankSection_Recon0;
					side = TWest;
					faction = Atlas_BLU_G_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_armor.paa";
					GROUP_UNIT(0,TWest,Atlas_B_G_LT_01_scout_F,LIEUTENANT,0,0)
					GROUP_UNIT(1,TWest,Atlas_B_G_LT_01_cannon_F,SERGEANT,10,-10)
				};
				class B_G_LTankSection_AA
				{
					name = $STR_A3_CfgGroups_Indep_IND_F_Armored_I_LTankSection_AA0;
					side = TWest;
					faction = Atlas_BLU_G_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_armor.paa";
					GROUP_UNIT(0,TWest,Atlas_B_G_LT_01_AA_F,LIEUTENANT,0,0)
					GROUP_UNIT(1,TWest,Atlas_B_G_LT_01_AA_F,SERGEANT,10,-10)
				};
				class B_G_LTankSection_AT
				{
					name = $STR_A3_CfgGroups_Indep_IND_F_Armored_I_LTankSection_AT0;
					side = TWest;
					faction = Atlas_BLU_G_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_armor.paa";
					GROUP_UNIT(0,TWest,Atlas_B_G_LT_01_AT_F,LIEUTENANT,0,0)
					GROUP_UNIT(1,TWest,Atlas_B_G_LT_01_AT_F,SERGEANT,10,-10)
				};
				class B_G_LTankPlatoon_combined
				{
					name = $STR_A3_CfgGroups_Indep_IND_F_Armored_I_LTankPlatoon_combined0;
					side = TWest;
					faction = Atlas_BLU_G_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_armor.paa";
					GROUP_UNIT(0,TWest,Atlas_B_G_LT_01_scout_F,LIEUTENANT,0,0)
					GROUP_UNIT(1,TWest,Atlas_B_G_LT_01_cannon_F,SERGEANT,10,-10)
					GROUP_UNIT(2,TWest,Atlas_B_G_LT_01_cannon_F,SERGEANT,-10,-10)
					GROUP_UNIT(3,TWest,Atlas_B_G_LT_01_AT_F,CORPORAL,20,-20)
				};
				class B_G_LTankPlatoon_AA
				{
					name = $STR_A3_CfgGroups_Indep_IND_F_Armored_I_LTankPlatoon_AA0;
					side = TWest;
					faction = Atlas_BLU_G_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_armor.paa";
					GROUP_UNIT(0,TWest,Atlas_B_G_LT_01_scout_F,LIEUTENANT,0,0)
					GROUP_UNIT(1,TWest,Atlas_B_G_LT_01_AA_F,SERGEANT,10,-10)
					GROUP_UNIT(2,TWest,Atlas_B_G_LT_01_AA_F,SERGEANT,-10,-10)
					GROUP_UNIT(3,TWest,Atlas_B_G_LT_01_AA_F,CORPORAL,20,-20)
				};
			};
		};
		
		class Atlas_BLU_G_ard_F
		{
			name = $STR_A3_A_CfgFactionClasses_BLU_G_ard_F0;
			class Infantry
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Infantry0;
				class B_G_ard_InfSquad
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSquad0;
					side = TWest;
					faction = Atlas_BLU_G_ard_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,Atlas_B_G_soldier_SL_ard_F,SERGEANT,0,0)
					GROUP_UNIT(1,TWest,Atlas_B_G_RadioOperator_ard_F,PRIVATE,5,-5)
					GROUP_UNIT(2,TWest,Atlas_B_G_soldier_LAT_ard_F,CORPORAL,-5,-5)
					GROUP_UNIT(3,TWest,Atlas_B_G_soldier_M_ard_F,PRIVATE,10,-10)
					GROUP_UNIT(4,TWest,Atlas_B_G_soldier_TL_ard_F,SERGEANT,-10,-10)
					GROUP_UNIT(5,TWest,Atlas_B_G_soldier_AR_ard_F,CORPORAL,15,-15)
					GROUP_UNIT(6,TWest,Atlas_B_G_soldier_A_ard_F,PRIVATE,-15,-15)
					GROUP_UNIT(7,TWest,Atlas_B_G_medic_ard_F,PRIVATE,20,-20)
				};
				class B_G_ard_InfSquad_Weapons
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSquad_Weapons0;
					side = TWest;
					faction = Atlas_BLU_G_ard_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,Atlas_B_G_soldier_SL_ard_F,SERGEANT,0,0)
					GROUP_UNIT(1,TWest,Atlas_B_G_soldier_AR_ard_F,PRIVATE,5,-5)
					GROUP_UNIT(2,TWest,Atlas_B_G_soldier_GL_ard_F,CORPORAL,-5,-5)
					GROUP_UNIT(3,TWest,Atlas_B_G_soldier_M_ard_F,PRIVATE,10,-10)
					GROUP_UNIT(4,TWest,Atlas_B_G_soldier_AT_ard_F,PRIVATE,-10,-10)
					GROUP_UNIT(5,TWest,Atlas_B_G_soldier_ard_F,PRIVATE,15,-15)
					GROUP_UNIT(6,TWest,Atlas_B_G_soldier_A_ard_F,PRIVATE,-15,-15)
					GROUP_UNIT(7,TWest,Atlas_B_G_medic_ard_F,PRIVATE,20,-20)
				};
				class B_G_ard_InfTeam
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam0;
					side = TWest;
					faction = Atlas_BLU_G_ard_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,Atlas_B_G_soldier_TL_ard_F,SERGEANT,0,0)
					GROUP_UNIT(1,TWest,Atlas_B_G_soldier_AR_ard_F,CORPORAL,5,-5)
					GROUP_UNIT(2,TWest,Atlas_B_G_soldier_GL_ard_F,PRIVATE,-5,-5)
					GROUP_UNIT(3,TWest,Atlas_B_G_soldier_LAT_ard_F,PRIVATE,10,-10)
				};
				class B_G_ard_InfTeam_AT
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam_AT0;
					side = TWest;
					faction = Atlas_BLU_G_ard_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,Atlas_B_G_soldier_TL_ard_F,SERGEANT,0,0)
					GROUP_UNIT(1,TWest,Atlas_B_G_soldier_AT_ard_F,CORPORAL,5,-5)
					GROUP_UNIT(2,TWest,Atlas_B_G_soldier_AT_ard_F,PRIVATE,-5,-5)
					GROUP_UNIT(3,TWest,Atlas_B_G_soldier_ard_F,PRIVATE,10,-10)
				};
				class B_G_ard_InfTeam_AA
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam_AA0;
					side = TWest;
					faction = Atlas_BLU_G_ard_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,Atlas_B_G_soldier_TL_ard_F,SERGEANT,0,0)
					GROUP_UNIT(1,TWest,Atlas_B_G_soldier_AA_ard_F,CORPORAL,5,-5)
					GROUP_UNIT(2,TWest,Atlas_B_G_soldier_AA_ard_F,PRIVATE,-5,-5)
					GROUP_UNIT(3,TWest,Atlas_B_G_soldier_ard_F,PRIVATE,10,-10)
				};
				class B_G_ard_InfSentry
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSentry0;
					side = TWest;
					faction = Atlas_BLU_G_ard_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,Atlas_B_G_soldier_GL_ard_F,CORPORAL,0,0)
					GROUP_UNIT(1,TWest,Atlas_B_G_soldier_ard_F,PRIVATE,5,-5)
				};
			};
			class SpecOps
			{
				name = $STR_A3_CfgGroups_West_BLU_F_SpecOps0;
				class B_G_ard_ReconTeam
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_ReconTeam0;
					side = TWest;
					faction = Atlas_BLU_G_ard_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";
					GROUP_UNIT(0,TWest,Atlas_B_G_recon_TL_ard_F,SERGEANT,0,0)
					GROUP_UNIT(1,TWest,Atlas_B_G_recon_M_ard_F,CORPORAL,5,-5)
					GROUP_UNIT(2,TWest,Atlas_B_G_recon_medic_ard_F,PRIVATE,-5,-5)
					GROUP_UNIT(3,TWest,Atlas_B_G_recon_LAT_ard_F,CORPORAL,10,-10)
					GROUP_UNIT(4,TWest,Atlas_B_G_recon_JTAC_ard_F,PRIVATE,-10,-10)
					GROUP_UNIT(5,TWest,Atlas_B_G_recon_exp_ard_F,PRIVATE,15,-15)
				};
				class B_G_ard_ReconPatrol
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_ReconPatrol0;
					side = TWest;
					faction = Atlas_BLU_G_ard_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";
					GROUP_UNIT(0,TWest,Atlas_B_G_recon_TL_ard_F,SERGEANT,0,0)
					GROUP_UNIT(1,TWest,Atlas_B_G_recon_M_ard_F,CORPORAL,5,-5)
					GROUP_UNIT(2,TWest,Atlas_B_G_recon_medic_ard_F,PRIVATE,-5,-5)
					GROUP_UNIT(3,TWest,Atlas_B_G_recon_ard_F,PRIVATE,10,-10)
				};
				class B_G_ard_ReconSentry
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_ReconSentry0;
					side = TWest;
					faction = Atlas_BLU_G_ard_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";
					GROUP_UNIT(0,TWest,Atlas_B_G_recon_M_ard_F,CORPORAL,0,0)
					GROUP_UNIT(1,TWest,Atlas_B_G_recon_ard_F,PRIVATE,5,-5)
				};
			};
			class Motorized
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Motorized0;
				class B_G_ard_MotInf_Team
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_Team0;
					side = TWest;
					faction = Atlas_BLU_G_ard_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_motor_inf.paa";
					GROUP_UNIT(0,TWest,Atlas_B_G_MRAP_03_gmg_ard_F,SERGEANT,0,0)
					GROUP_UNIT(1,TWest,Atlas_B_G_soldier_LAT_ard_F,CORPORAL,5,-5)
				};
				class B_G_ard_MotInf_AT
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_AT0;
					side = TWest;
					faction = Atlas_BLU_G_ard_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_motor_inf.paa";
					GROUP_UNIT(0,TWest,Atlas_B_G_MRAP_03_ard_F,SERGEANT,0,0)
					GROUP_UNIT(1,TWest,Atlas_B_G_soldier_AT_ard_F,CORPORAL,5,-5)
					GROUP_UNIT(2,TWest,Atlas_B_G_soldier_AT_ard_F,CORPORAL,-5,-5)
				};
				class B_G_ard_MotInf_AA
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_AA0;
					side = TWest;
					faction = Atlas_BLU_G_ard_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_motor_inf.paa";
					GROUP_UNIT(0,TWest,Atlas_B_G_MRAP_03_ard_F,SERGEANT,0,0)
					GROUP_UNIT(1,TWest,Atlas_B_G_soldier_AA_ard_F,CORPORAL,5,-5)
					GROUP_UNIT(2,TWest,Atlas_B_G_soldier_AA_ard_F,CORPORAL,-5,-5)
				};
			};
			class Mechanized
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Mechanized0;
				class B_G_ard_MechInfSquad
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Mechanized_BUS_MechInfSquad0;
					side = TWest;
					faction = Atlas_BLU_G_ard_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_mech_inf.paa";
					GROUP_UNIT(0,TWest,Atlas_B_G_APC_Wheeled_03_cannon_ard_F,LIEUTENANT,0,0)
					GROUP_UNIT(1,TWest,Atlas_B_G_soldier_SL_ard_F,SERGEANT,5,-5)
					GROUP_UNIT(2,TWest,Atlas_B_G_RadioOperator_ard_F,PRIVATE,-5,-5)
					GROUP_UNIT(3,TWest,Atlas_B_G_soldier_LAT_ard_F,CORPORAL,10,-10)
					GROUP_UNIT(4,TWest,Atlas_B_G_soldier_M_ard_F,PRIVATE,-10,-10)
					GROUP_UNIT(5,TWest,Atlas_B_G_soldier_TL_ard_F,SERGEANT,15,-15)
					GROUP_UNIT(6,TWest,Atlas_B_G_soldier_AR_ard_F,CORPORAL,-15,-15)
					GROUP_UNIT(7,TWest,Atlas_B_G_soldier_A_ard_F,PRIVATE,20,-20)
					GROUP_UNIT(8,TWest,Atlas_B_G_medic_ard_F,PRIVATE,-20,-20)
				};
			};
			class Armored
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Armored0;
				class B_G_ard_TankPlatoon
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Armored_BUS_TankPlatoon0;
					side = TWest;
					faction = Atlas_BLU_G_ard_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_armor.paa";
					GROUP_UNIT(0,TWest,Atlas_B_G_MBT_03_cannon_ard_F,LIEUTENANT,0,0)
					GROUP_UNIT(1,TWest,Atlas_B_G_MBT_03_cannon_ard_F,SERGEANT,10,-10)
					GROUP_UNIT(2,TWest,Atlas_B_G_MBT_03_cannon_ard_F,SERGEANT,-10,-10)
					GROUP_UNIT(3,TWest,Atlas_B_G_MBT_03_cannon_ard_F,CORPORAL,20,-20)
				};
				class B_G_ard_TankSection
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Armored_BUS_TankSection0;
					side = TWest;
					faction = Atlas_BLU_G_ard_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_armor.paa";
					GROUP_UNIT(0,TWest,Atlas_B_G_MBT_03_cannon_ard_F,LIEUTENANT,0,0)
					GROUP_UNIT(1,TWest,Atlas_B_G_MBT_03_cannon_ard_F,SERGEANT,10,-10)
				};
				class B_G_ard_LTankSection_Assault
				{
					name = $STR_A3_CfgGroups_Indep_IND_F_Armored_I_LTankSection_Assault0;
					side = TWest;
					faction = Atlas_BLU_G_ard_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_armor.paa";
					GROUP_UNIT(0,TWest,Atlas_B_G_LT_01_cannon_ard_F,LIEUTENANT,0,0)
					GROUP_UNIT(1,TWest,Atlas_B_G_LT_01_cannon_ard_F,SERGEANT,10,-10)
				};
				class B_G_ard_LTankSection_Recon
				{
					name = $STR_A3_CfgGroups_Indep_IND_F_Armored_I_LTankSection_Recon0;
					side = TWest;
					faction = Atlas_BLU_G_ard_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_armor.paa";
					GROUP_UNIT(0,TWest,Atlas_B_G_LT_01_scout_ard_F,LIEUTENANT,0,0)
					GROUP_UNIT(1,TWest,Atlas_B_G_LT_01_cannon_ard_F,SERGEANT,10,-10)
				};
				class B_G_ard_LTankSection_AA
				{
					name = $STR_A3_CfgGroups_Indep_IND_F_Armored_I_LTankSection_AA0;
					side = TWest;
					faction = Atlas_BLU_G_ard_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_armor.paa";
					GROUP_UNIT(0,TWest,Atlas_B_G_LT_01_AA_ard_F,LIEUTENANT,0,0)
					GROUP_UNIT(1,TWest,Atlas_B_G_LT_01_AA_ard_F,SERGEANT,10,-10)
				};
				class B_G_LTankSection_AT
				{
					name = $STR_A3_CfgGroups_Indep_IND_F_Armored_I_LTankSection_AT0;
					side = TWest;
					faction = Atlas_BLU_G_ard_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_armor.paa";
					GROUP_UNIT(0,TWest,Atlas_B_G_LT_01_AT_ard_F,LIEUTENANT,0,0)
					GROUP_UNIT(1,TWest,Atlas_B_G_LT_01_AT_ard_F,SERGEANT,10,-10)
				};
				class B_G_ard_LTankPlatoon_combined
				{
					name = $STR_A3_CfgGroups_Indep_IND_F_Armored_I_LTankPlatoon_combined0;
					side = TWest;
					faction = Atlas_BLU_G_ard_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_armor.paa";
					GROUP_UNIT(0,TWest,Atlas_B_G_LT_01_scout_ard_F,LIEUTENANT,0,0)
					GROUP_UNIT(1,TWest,Atlas_B_G_LT_01_cannon_ard_F,SERGEANT,10,-10)
					GROUP_UNIT(2,TWest,Atlas_B_G_LT_01_cannon_ard_F,SERGEANT,-10,-10)
					GROUP_UNIT(3,TWest,Atlas_B_G_LT_01_AT_ard_F,CORPORAL,20,-20)
				};
				class B_G_ard_LTankPlatoon_AA
				{
					name = $STR_A3_CfgGroups_Indep_IND_F_Armored_I_LTankPlatoon_AA0;
					side = TWest;
					faction = Atlas_BLU_G_ard_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_armor.paa";
					GROUP_UNIT(0,TWest,Atlas_B_G_LT_01_scout_ard_F,LIEUTENANT,0,0)
					GROUP_UNIT(1,TWest,Atlas_B_G_LT_01_AA_ard_F,SERGEANT,10,-10)
					GROUP_UNIT(2,TWest,Atlas_B_G_LT_01_AA_ard_F,SERGEANT,-10,-10)
					GROUP_UNIT(3,TWest,Atlas_B_G_LT_01_AA_ard_F,CORPORAL,20,-20)
				};
			};
		};

        class Atlas_BLU_A_F
		{
			name = $STR_A3_A_CfgFactionClasses_BLU_AUS_F0;
			class Infantry
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Infantry0;
				class Atlas_B_A_InfSquad
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSquad0;
					side = TWest;
					faction = Atlas_BLU_A_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,Atlas_B_A_soldier_SL_F,SERGEANT,0,0)
					GROUP_UNIT(1,TWest,Atlas_B_A_RadioOperator_F,PRIVATE,5,-5)
					GROUP_UNIT(2,TWest,Atlas_B_A_soldier_LAT_F,CORPORAL,-5,-5)
					GROUP_UNIT(3,TWest,Atlas_B_A_soldier_M_F,PRIVATE,10,-10)
					GROUP_UNIT(4,TWest,Atlas_B_A_soldier_TL_F,SERGEANT,-10,-10)
					GROUP_UNIT(5,TWest,Atlas_B_A_soldier_AR_F,CORPORAL,15,-15)
					GROUP_UNIT(6,TWest,Atlas_B_A_soldier_A_F,PRIVATE,-15,-15)
					GROUP_UNIT(7,TWest,Atlas_B_A_medic_F,PRIVATE,20,-20)
				};
				class Atlas_B_A_InfSquad_Weapons
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSquad_Weapons0;
					side = TWest;
					faction = Atlas_BLU_A_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,Atlas_B_A_soldier_SL_F,SERGEANT,0,0)
					GROUP_UNIT(1,TWest,Atlas_B_A_soldier_AR_F,PRIVATE,5,-5)
					GROUP_UNIT(2,TWest,Atlas_B_A_soldier_GL_F,CORPORAL,-5,-5)
					GROUP_UNIT(3,TWest,Atlas_B_A_soldier_M_F,PRIVATE,10,-10)
					GROUP_UNIT(4,TWest,Atlas_B_A_soldier_AT_F,PRIVATE,-10,-10)
					GROUP_UNIT(5,TWest,Atlas_B_A_soldier_F,PRIVATE,15,-15)
					GROUP_UNIT(6,TWest,Atlas_B_A_soldier_A_F,PRIVATE,-15,-15)
					GROUP_UNIT(7,TWest,Atlas_B_A_medic_F,PRIVATE,20,-20)
				};
				class Atlas_B_A_InfTeam
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam0;
					side = TWest;
					faction = Atlas_BLU_A_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,Atlas_B_A_soldier_TL_F,SERGEANT,0,0)
					GROUP_UNIT(1,TWest,Atlas_B_A_soldier_AR_F,CORPORAL,5,-5)
					GROUP_UNIT(2,TWest,Atlas_B_A_soldier_GL_F,PRIVATE,-5,-5)
					GROUP_UNIT(3,TWest,Atlas_B_A_soldier_LAT_F,PRIVATE,10,-10)
				};
				class Atlas_B_A_InfTeam_AT
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam_AT0;
					side = TWest;
					faction = Atlas_BLU_A_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,Atlas_B_A_soldier_TL_F,SERGEANT,0,0)
					GROUP_UNIT(1,TWest,Atlas_B_A_soldier_AT_F,CORPORAL,5,-5)
					GROUP_UNIT(2,TWest,Atlas_B_A_soldier_AT_F,PRIVATE,-5,-5)
					GROUP_UNIT(3,TWest,Atlas_B_A_soldier_F,PRIVATE,10,-10)
				};
				class Atlas_B_A_InfTeam_AA
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam_AA0;
					side = TWest;
					faction = Atlas_BLU_A_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,Atlas_B_A_soldier_TL_F,SERGEANT,0,0)
					GROUP_UNIT(1,TWest,Atlas_B_A_soldier_AA_F,CORPORAL,5,-5)
					GROUP_UNIT(2,TWest,Atlas_B_A_soldier_AA_F,PRIVATE,-5,-5)
					GROUP_UNIT(3,TWest,Atlas_B_A_soldier_F,PRIVATE,10,-10)
				};
				class Atlas_B_A_InfSentry
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSentry0;
					side = TWest;
					faction = Atlas_BLU_A_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,Atlas_B_A_soldier_GL_F,CORPORAL,0,0)
					GROUP_UNIT(1,TWest,Atlas_B_A_soldier_F,PRIVATE,5,-5)
				};
			};
			class SpecOps
			{
				name = $STR_A3_CfgGroups_West_BLU_F_SpecOps0;
				class Atlas_B_A_ReconTeam
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_ReconTeam0;
					side = TWest;
					faction = Atlas_BLU_A_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";
					GROUP_UNIT(0,TWest,Atlas_B_A_recon_TL_F,SERGEANT,0,0)
					GROUP_UNIT(1,TWest,Atlas_B_A_recon_M_F,CORPORAL,5,-5)
					GROUP_UNIT(2,TWest,Atlas_B_A_recon_medic_F,PRIVATE,-5,-5)
					GROUP_UNIT(3,TWest,Atlas_B_A_recon_LAT_F,CORPORAL,10,-10)
					GROUP_UNIT(4,TWest,Atlas_B_A_recon_JTAC_F,PRIVATE,-10,-10)
					GROUP_UNIT(5,TWest,Atlas_B_A_recon_exp_F,PRIVATE,15,-15)
				};
				class Atlas_B_A_ReconPatrol
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_ReconPatrol0;
					side = TWest;
					faction = Atlas_BLU_A_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";
					GROUP_UNIT(0,TWest,Atlas_B_A_recon_TL_F,SERGEANT,0,0)
					GROUP_UNIT(1,TWest,Atlas_B_A_recon_M_F,CORPORAL,5,-5)
					GROUP_UNIT(2,TWest,Atlas_B_A_recon_medic_F,PRIVATE,-5,-5)
					GROUP_UNIT(3,TWest,Atlas_B_A_recon_F,PRIVATE,10,-10)
				};
				class Atlas_B_A_ReconSentry
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_ReconSentry0;
					side = TWest;
					faction = Atlas_BLU_A_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";
					GROUP_UNIT(0,TWest,Atlas_B_A_recon_M_F,CORPORAL,0,0)
					GROUP_UNIT(1,TWest,Atlas_B_A_recon_F,PRIVATE,5,-5)
				};
			};
			class Motorized
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Motorized0;
				class Atlas_B_A_MotInf_Team
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_Team0;
					side = TWest;
					faction = Atlas_BLU_A_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_motor_inf.paa";
					GROUP_UNIT(0,TWest,Atlas_B_A_MRAP_03_gmg_F,SERGEANT,0,0)
					GROUP_UNIT(1,TWest,Atlas_B_A_soldier_LAT_F,CORPORAL,5,-5)
				};
				class Atlas_B_A_MotInf_AT
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_AT0;
					side = TWest;
					faction = Atlas_BLU_A_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_motor_inf.paa";
					GROUP_UNIT(0,TWest,Atlas_B_A_MRAP_03_F,SERGEANT,0,0)
					GROUP_UNIT(1,TWest,Atlas_B_A_soldier_AT_F,CORPORAL,5,-5)
					GROUP_UNIT(2,TWest,Atlas_B_A_soldier_AT_F,CORPORAL,-5,-5)
				};
				class Atlas_B_A_MotInf_AA
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_AA0;
					side = TWest;
					faction = Atlas_BLU_A_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_motor_inf.paa";
					GROUP_UNIT(0,TWest,Atlas_B_A_MRAP_03_F,SERGEANT,0,0)
					GROUP_UNIT(1,TWest,Atlas_B_A_soldier_AA_F,CORPORAL,5,-5)
					GROUP_UNIT(2,TWest,Atlas_B_A_soldier_AA_F,CORPORAL,-5,-5)
				};
			};
			class Mechanized
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Mechanized0;
				class Atlas_B_A_MechInfSquad
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Mechanized_BUS_MechInfSquad0;
					side = TWest;
					faction = Atlas_BLU_A_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_mech_inf.paa";
					GROUP_UNIT(0,TWest,Atlas_B_A_APC_Wheeled_01_atgm_v2,LIEUTENANT,0,0)
					GROUP_UNIT(1,TWest,Atlas_B_A_soldier_SL_F,SERGEANT,5,-5)
					GROUP_UNIT(2,TWest,Atlas_B_A_RadioOperator_F,PRIVATE,-5,-5)
					GROUP_UNIT(3,TWest,Atlas_B_A_soldier_LAT_F,CORPORAL,10,-10)
					GROUP_UNIT(4,TWest,Atlas_B_A_soldier_M_F,PRIVATE,-10,-10)
					GROUP_UNIT(5,TWest,Atlas_B_A_soldier_TL_F,SERGEANT,15,-15)
					GROUP_UNIT(6,TWest,Atlas_B_A_soldier_AR_F,CORPORAL,-15,-15)
					GROUP_UNIT(7,TWest,Atlas_B_A_soldier_A_F,PRIVATE,20,-20)
					GROUP_UNIT(8,TWest,Atlas_B_A_medic_F,PRIVATE,-20,-20)
				};
			};
			class Armored
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Armored0;
				class Atlas_B_A_TankPlatoon
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Armored_BUS_TankPlatoon0;
					side = TWest;
					faction = Atlas_BLU_A_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_armor.paa";
					GROUP_UNIT(0,TWest,Atlas_B_A_MBT_03_cannon_F,LIEUTENANT,0,0)
					GROUP_UNIT(1,TWest,Atlas_B_A_MBT_03_cannon_F,SERGEANT,10,-10)
					GROUP_UNIT(2,TWest,Atlas_B_A_MBT_03_cannon_F,SERGEANT,-10,-10)
					GROUP_UNIT(3,TWest,Atlas_B_A_MBT_03_cannon_F,CORPORAL,20,-20)
				};
				class Atlas_B_A_TankSection
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Armored_BUS_TankSection0;
					side = TWest;
					faction = Atlas_BLU_A_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_armor.paa";
					GROUP_UNIT(0,TWest,Atlas_B_A_MBT_03_cannon_F,LIEUTENANT,0,0)
					GROUP_UNIT(1,TWest,Atlas_B_A_MBT_03_cannon_F,SERGEANT,10,-10)
				};
			};
		};

		class Atlas_BLU_A_ard_F
		{
			name = $STR_A3_A_CfgFactionClasses_BLU_AUS_ard_F0;
			class Infantry
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Infantry0;
				class Atlas_B_A_ard_InfSquad
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSquad0;
					side = TWest;
					faction = Atlas_BLU_A_ard_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,Atlas_B_A_soldier_SL_ard_F,SERGEANT,0,0)
					GROUP_UNIT(1,TWest,Atlas_B_A_RadioOperator_ard_F,PRIVATE,5,-5)
					GROUP_UNIT(2,TWest,Atlas_B_A_soldier_LAT_ard_F,CORPORAL,-5,-5)
					GROUP_UNIT(3,TWest,Atlas_B_A_soldier_M_ard_F,PRIVATE,10,-10)
					GROUP_UNIT(4,TWest,Atlas_B_A_soldier_TL_ard_F,SERGEANT,-10,-10)
					GROUP_UNIT(5,TWest,Atlas_B_A_soldier_AR_ard_F,CORPORAL,15,-15)
					GROUP_UNIT(6,TWest,Atlas_B_A_soldier_A_ard_F,PRIVATE,-15,-15)
					GROUP_UNIT(7,TWest,Atlas_B_A_medic_ard_F,PRIVATE,20,-20)
				};
				class Atlas_B_A_ard_InfSquad_Weapons
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSquad_Weapons0;
					side = TWest;
					faction = Atlas_BLU_A_ard_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,Atlas_B_A_soldier_SL_ard_F,SERGEANT,0,0)
					GROUP_UNIT(1,TWest,Atlas_B_A_soldier_AR_ard_F,PRIVATE,5,-5)
					GROUP_UNIT(2,TWest,Atlas_B_A_soldier_GL_ard_F,CORPORAL,-5,-5)
					GROUP_UNIT(3,TWest,Atlas_B_A_soldier_M_ard_F,PRIVATE,10,-10)
					GROUP_UNIT(4,TWest,Atlas_B_A_soldier_AT_ard_F,PRIVATE,-10,-10)
					GROUP_UNIT(5,TWest,Atlas_B_A_soldier_ard_F,PRIVATE,15,-15)
					GROUP_UNIT(6,TWest,Atlas_B_A_soldier_A_ard_F,PRIVATE,-15,-15)
					GROUP_UNIT(7,TWest,Atlas_B_A_medic_ard_F,PRIVATE,20,-20)
				};
				class Atlas_B_A_ard_InfTeam
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam0;
					side = TWest;
					faction = Atlas_BLU_A_ard_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,Atlas_B_A_soldier_TL_ard_F,SERGEANT,0,0)
					GROUP_UNIT(1,TWest,Atlas_B_A_soldier_AR_ard_F,CORPORAL,5,-5)
					GROUP_UNIT(2,TWest,Atlas_B_A_soldier_GL_ard_F,PRIVATE,-5,-5)
					GROUP_UNIT(3,TWest,Atlas_B_A_soldier_LAT_ard_F,PRIVATE,10,-10)
				};
				class Atlas_B_A_ard_InfTeam_AT
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam_AT0;
					side = TWest;
					faction = Atlas_BLU_A_ard_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,Atlas_B_A_soldier_TL_ard_F,SERGEANT,0,0)
					GROUP_UNIT(1,TWest,Atlas_B_A_soldier_AT_ard_F,CORPORAL,5,-5)
					GROUP_UNIT(2,TWest,Atlas_B_A_soldier_AT_ard_F,PRIVATE,-5,-5)
					GROUP_UNIT(3,TWest,Atlas_B_A_soldier_ard_F,PRIVATE,10,-10)
				};
				class Atlas_B_A_ard_InfTeam_AA
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam_AA0;
					side = TWest;
					faction = Atlas_BLU_A_ard_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,Atlas_B_A_soldier_TL_ard_F,SERGEANT,0,0)
					GROUP_UNIT(1,TWest,Atlas_B_A_soldier_AA_ard_F,CORPORAL,5,-5)
					GROUP_UNIT(2,TWest,Atlas_B_A_soldier_AA_ard_F,PRIVATE,-5,-5)
					GROUP_UNIT(3,TWest,Atlas_B_A_soldier_ard_F,PRIVATE,10,-10)
				};
				class Atlas_B_A_ard_InfSentry
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSentry0;
					side = TWest;
					faction = Atlas_BLU_A_ard_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,Atlas_B_A_soldier_GL_ard_F,CORPORAL,0,0)
					GROUP_UNIT(1,TWest,Atlas_B_A_soldier_ard_F,PRIVATE,5,-5)
				};
			};
			class SpecOps
			{
				name = $STR_A3_CfgGroups_West_BLU_F_SpecOps0;
				class Atlas_B_A_ard_ReconTeam
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_ReconTeam0;
					side = TWest;
					faction = Atlas_BLU_A_ard_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";
					GROUP_UNIT(0,TWest,Atlas_B_A_recon_TL_ard_F,SERGEANT,0,0)
					GROUP_UNIT(1,TWest,Atlas_B_A_recon_M_ard_F,CORPORAL,5,-5)
					GROUP_UNIT(2,TWest,Atlas_B_A_recon_medic_ard_F,PRIVATE,-5,-5)
					GROUP_UNIT(3,TWest,Atlas_B_A_recon_LAT_ard_F,CORPORAL,10,-10)
					GROUP_UNIT(4,TWest,Atlas_B_A_recon_JTAC_ard_F,PRIVATE,-10,-10)
					GROUP_UNIT(5,TWest,Atlas_B_A_recon_exp_ard_F,PRIVATE,15,-15)
				};
				class Atlas_B_A_ard_ReconPatrol
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_ReconPatrol0;
					side = TWest;
					faction = Atlas_BLU_A_ard_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";
					GROUP_UNIT(0,TWest,Atlas_B_A_recon_TL_ard_F,SERGEANT,0,0)
					GROUP_UNIT(1,TWest,Atlas_B_A_recon_M_ard_F,CORPORAL,5,-5)
					GROUP_UNIT(2,TWest,Atlas_B_A_recon_medic_ard_F,PRIVATE,-5,-5)
					GROUP_UNIT(3,TWest,Atlas_B_A_recon_ard_F,PRIVATE,10,-10)
				};
				class Atlas_B_A_ard_ReconSentry
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_ReconSentry0;
					side = TWest;
					faction = Atlas_BLU_A_ard_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";
					GROUP_UNIT(0,TWest,Atlas_B_A_recon_M_ard_F,CORPORAL,0,0)
					GROUP_UNIT(1,TWest,Atlas_B_A_recon_ard_F,PRIVATE,5,-5)
				};
			};
			class Motorized
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Motorized0;
				class Atlas_B_A_ard_MotInf_Team
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_Team0;
					side = TWest;
					faction = Atlas_BLU_A_ard_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_motor_inf.paa";
					GROUP_UNIT(0,TWest,Atlas_B_A_MRAP_03_gmg_ard_F,SERGEANT,0,0)
					GROUP_UNIT(1,TWest,Atlas_B_A_soldier_LAT_ard_F,CORPORAL,5,-5)
				};
				class Atlas_B_A_ard_MotInf_AT
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_AT0;
					side = TWest;
					faction = Atlas_BLU_A_ard_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_motor_inf.paa";
					GROUP_UNIT(0,TWest,Atlas_B_A_MRAP_03_ard_F,SERGEANT,0,0)
					GROUP_UNIT(1,TWest,Atlas_B_A_soldier_AT_ard_F,CORPORAL,5,-5)
					GROUP_UNIT(2,TWest,Atlas_B_A_soldier_AT_ard_F,CORPORAL,-5,-5)
				};
				class Atlas_B_A_ard_MotInf_AA
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_AA0;
					side = TWest;
					faction = Atlas_BLU_A_ard_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_motor_inf.paa";
					GROUP_UNIT(0,TWest,Atlas_B_A_MRAP_03_ard_F,SERGEANT,0,0)
					GROUP_UNIT(1,TWest,Atlas_B_A_soldier_AA_ard_F,CORPORAL,5,-5)
					GROUP_UNIT(2,TWest,Atlas_B_A_soldier_AA_ard_F,CORPORAL,-5,-5)
				};
			};
			class Mechanized
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Mechanized0;
				class Atlas_B_A_ard_MechInfSquad
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Mechanized_BUS_MechInfSquad0;
					side = TWest;
					faction = Atlas_BLU_A_ard_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_mech_inf.paa";
					GROUP_UNIT(0,TWest,Atlas_B_A_APC_Wheeled_01_atgm_ard_v2,LIEUTENANT,0,0)
					GROUP_UNIT(1,TWest,Atlas_B_A_soldier_SL_ard_F,SERGEANT,5,-5)
					GROUP_UNIT(2,TWest,Atlas_B_A_RadioOperator_ard_F,PRIVATE,-5,-5)
					GROUP_UNIT(3,TWest,Atlas_B_A_soldier_LAT_ard_F,CORPORAL,10,-10)
					GROUP_UNIT(4,TWest,Atlas_B_A_soldier_M_ard_F,PRIVATE,-10,-10)
					GROUP_UNIT(5,TWest,Atlas_B_A_soldier_TL_ard_F,SERGEANT,15,-15)
					GROUP_UNIT(6,TWest,Atlas_B_A_soldier_AR_ard_F,CORPORAL,-15,-15)
					GROUP_UNIT(7,TWest,Atlas_B_A_soldier_A_ard_F,PRIVATE,20,-20)
					GROUP_UNIT(8,TWest,Atlas_B_A_medic_ard_F,PRIVATE,-20,-20)
				};
			};
			class Armored
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Armored0;
				class Atlas_B_A_ard_TankPlatoon
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Armored_BUS_TankPlatoon0;
					side = TWest;
					faction = Atlas_BLU_A_ard_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_armor.paa";
					GROUP_UNIT(0,TWest,Atlas_B_A_MBT_03_cannon_ard_F,LIEUTENANT,0,0)
					GROUP_UNIT(1,TWest,Atlas_B_A_MBT_03_cannon_ard_F,SERGEANT,10,-10)
					GROUP_UNIT(2,TWest,Atlas_B_A_MBT_03_cannon_ard_F,SERGEANT,-10,-10)
					GROUP_UNIT(3,TWest,Atlas_B_A_MBT_03_cannon_ard_F,CORPORAL,20,-20)
				};
				class Atlas_B_A_ard_TankSection
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Armored_BUS_TankSection0;
					side = TWest;
					faction = Atlas_BLU_A_ard_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_armor.paa";
					GROUP_UNIT(0,TWest,Atlas_B_A_MBT_03_cannon_ard_F,LIEUTENANT,0,0)
					GROUP_UNIT(1,TWest,Atlas_B_A_MBT_03_cannon_ard_F,SERGEANT,10,-10)
				};
			};
		};

		class Atlas_BLU_A_trp_F
		{
			name = $STR_A3_A_CfgFactionClasses_BLU_AUS_trp_F0;
			class Infantry
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Infantry0;
				class Atlas_B_A_trp_InfSquad
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSquad0;
					side = TWest;
					faction = Atlas_BLU_A_trp_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,Atlas_B_A_soldier_SL_trp_F,SERGEANT,0,0)
					GROUP_UNIT(1,TWest,Atlas_B_A_RadioOperator_trp_F,PRIVATE,5,-5)
					GROUP_UNIT(2,TWest,Atlas_B_A_soldier_LAT_trp_F,CORPORAL,-5,-5)
					GROUP_UNIT(3,TWest,Atlas_B_A_soldier_M_trp_F,PRIVATE,10,-10)
					GROUP_UNIT(4,TWest,Atlas_B_A_soldier_TL_trp_F,SERGEANT,-10,-10)
					GROUP_UNIT(5,TWest,Atlas_B_A_soldier_AR_trp_F,CORPORAL,15,-15)
					GROUP_UNIT(6,TWest,Atlas_B_A_soldier_A_trp_F,PRIVATE,-15,-15)
					GROUP_UNIT(7,TWest,Atlas_B_A_medic_trp_F,PRIVATE,20,-20)
				};
				class Atlas_B_A_trp_InfSquad_Weapons
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSquad_Weapons0;
					side = TWest;
					faction = Atlas_BLU_A_trp_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,Atlas_B_A_soldier_SL_trp_F,SERGEANT,0,0)
					GROUP_UNIT(1,TWest,Atlas_B_A_soldier_AR_trp_F,PRIVATE,5,-5)
					GROUP_UNIT(2,TWest,Atlas_B_A_soldier_GL_trp_F,CORPORAL,-5,-5)
					GROUP_UNIT(3,TWest,Atlas_B_A_soldier_M_trp_F,PRIVATE,10,-10)
					GROUP_UNIT(4,TWest,Atlas_B_A_soldier_AT_trp_F,PRIVATE,-10,-10)
					GROUP_UNIT(5,TWest,Atlas_B_A_soldier_trp_F,PRIVATE,15,-15)
					GROUP_UNIT(6,TWest,Atlas_B_A_soldier_A_trp_F,PRIVATE,-15,-15)
					GROUP_UNIT(7,TWest,Atlas_B_A_medic_trp_F,PRIVATE,20,-20)
				};
				class Atlas_B_A_trp_InfTeam
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam0;
					side = TWest;
					faction = Atlas_BLU_A_trp_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,Atlas_B_A_soldier_TL_trp_F,SERGEANT,0,0)
					GROUP_UNIT(1,TWest,Atlas_B_A_soldier_AR_trp_F,CORPORAL,5,-5)
					GROUP_UNIT(2,TWest,Atlas_B_A_soldier_GL_trp_F,PRIVATE,-5,-5)
					GROUP_UNIT(3,TWest,Atlas_B_A_soldier_LAT_trp_F,PRIVATE,10,-10)
				};
				class Atlas_B_A_trp_InfTeam_AT
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam_AT0;
					side = TWest;
					faction = Atlas_BLU_A_trp_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,Atlas_B_A_soldier_TL_trp_F,SERGEANT,0,0)
					GROUP_UNIT(1,TWest,Atlas_B_A_soldier_AT_trp_F,CORPORAL,5,-5)
					GROUP_UNIT(2,TWest,Atlas_B_A_soldier_AT_trp_F,PRIVATE,-5,-5)
					GROUP_UNIT(3,TWest,Atlas_B_A_soldier_trp_F,PRIVATE,10,-10)
				};
				class Atlas_B_A_trp_InfTeam_AA
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam_AA0;
					side = TWest;
					faction = Atlas_BLU_A_trp_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,Atlas_B_A_soldier_TL_trp_F,SERGEANT,0,0)
					GROUP_UNIT(1,TWest,Atlas_B_A_soldier_AA_trp_F,CORPORAL,5,-5)
					GROUP_UNIT(2,TWest,Atlas_B_A_soldier_AA_trp_F,PRIVATE,-5,-5)
					GROUP_UNIT(3,TWest,Atlas_B_A_soldier_trp_F,PRIVATE,10,-10)
				};
				class Atlas_B_A_trp_InfSentry
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSentry0;
					side = TWest;
					faction = Atlas_BLU_A_trp_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,Atlas_B_A_soldier_GL_trp_F,CORPORAL,0,0)
					GROUP_UNIT(1,TWest,Atlas_B_A_soldier_trp_F,PRIVATE,5,-5)
				};
			};
			class SpecOps
			{
				name = $STR_A3_CfgGroups_West_BLU_F_SpecOps0;
				class Atlas_B_A_trp_ReconTeam
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_ReconTeam0;
					side = TWest;
					faction = Atlas_BLU_A_trp_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";
					GROUP_UNIT(0,TWest,Atlas_B_A_recon_TL_trp_F,SERGEANT,0,0)
					GROUP_UNIT(1,TWest,Atlas_B_A_recon_M_trp_F,CORPORAL,5,-5)
					GROUP_UNIT(2,TWest,Atlas_B_A_recon_medic_trp_F,PRIVATE,-5,-5)
					GROUP_UNIT(3,TWest,Atlas_B_A_recon_LAT_trp_F,CORPORAL,10,-10)
					GROUP_UNIT(4,TWest,Atlas_B_A_recon_JTAC_trp_F,PRIVATE,-10,-10)
					GROUP_UNIT(5,TWest,Atlas_B_A_recon_exp_trp_F,PRIVATE,15,-15)
				};
				class Atlas_B_A_trp_ReconPatrol
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_ReconPatrol0;
					side = TWest;
					faction = Atlas_BLU_A_trp_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";
					GROUP_UNIT(0,TWest,Atlas_B_A_recon_TL_trp_F,SERGEANT,0,0)
					GROUP_UNIT(1,TWest,Atlas_B_A_recon_M_trp_F,CORPORAL,5,-5)
					GROUP_UNIT(2,TWest,Atlas_B_A_recon_medic_trp_F,PRIVATE,-5,-5)
					GROUP_UNIT(3,TWest,Atlas_B_A_recon_trp_F,PRIVATE,10,-10)
				};
				class Atlas_B_A_trp_ReconSentry
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_ReconSentry0;
					side = TWest;
					faction = Atlas_BLU_A_trp_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";
					GROUP_UNIT(0,TWest,Atlas_B_A_recon_M_trp_F,CORPORAL,0,0)
					GROUP_UNIT(1,TWest,Atlas_B_A_recon_trp_F,PRIVATE,5,-5)
				};
			};
			class Motorized
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Motorized0;
				class Atlas_B_A_trp_MotInf_Team
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_Team0;
					side = TWest;
					faction = Atlas_BLU_A_trp_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_motor_inf.paa";
					GROUP_UNIT(0,TWest,Atlas_B_A_MRAP_03_gmg_trp_F,SERGEANT,0,0)
					GROUP_UNIT(1,TWest,Atlas_B_A_soldier_LAT_trp_F,CORPORAL,5,-5)
				};
				class Atlas_B_A_trp_MotInf_AT
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_AT0;
					side = TWest;
					faction = Atlas_BLU_A_trp_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_motor_inf.paa";
					GROUP_UNIT(0,TWest,Atlas_B_A_MRAP_03_trp_F,SERGEANT,0,0)
					GROUP_UNIT(1,TWest,Atlas_B_A_soldier_AT_trp_F,CORPORAL,5,-5)
					GROUP_UNIT(2,TWest,Atlas_B_A_soldier_AT_trp_F,CORPORAL,-5,-5)
				};
				class Atlas_B_A_trp_MotInf_AA
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_AA0;
					side = TWest;
					faction = Atlas_BLU_A_trp_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_motor_inf.paa";
					GROUP_UNIT(0,TWest,Atlas_B_A_MRAP_03_trp_F,SERGEANT,0,0)
					GROUP_UNIT(1,TWest,Atlas_B_A_soldier_AA_trp_F,CORPORAL,5,-5)
					GROUP_UNIT(2,TWest,Atlas_B_A_soldier_AA_trp_F,CORPORAL,-5,-5)
				};
			};
			class Mechanized
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Mechanized0;
				class Atlas_B_A_trp_MechInfSquad
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Mechanized_BUS_MechInfSquad0;
					side = TWest;
					faction = Atlas_BLU_A_trp_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_mech_inf.paa";
					GROUP_UNIT(0,TWest,Atlas_B_A_APC_Wheeled_01_atgm_trp_v2,LIEUTENANT,0,0)
					GROUP_UNIT(1,TWest,Atlas_B_A_soldier_SL_trp_F,SERGEANT,5,-5)
					GROUP_UNIT(2,TWest,Atlas_B_A_RadioOperator_trp_F,PRIVATE,-5,-5)
					GROUP_UNIT(3,TWest,Atlas_B_A_soldier_LAT_trp_F,CORPORAL,10,-10)
					GROUP_UNIT(4,TWest,Atlas_B_A_soldier_M_trp_F,PRIVATE,-10,-10)
					GROUP_UNIT(5,TWest,Atlas_B_A_soldier_TL_trp_F,SERGEANT,15,-15)
					GROUP_UNIT(6,TWest,Atlas_B_A_soldier_AR_trp_F,CORPORAL,-15,-15)
					GROUP_UNIT(7,TWest,Atlas_B_A_soldier_A_trp_F,PRIVATE,20,-20)
					GROUP_UNIT(8,TWest,Atlas_B_A_medic_trp_F,PRIVATE,-20,-20)
				};
			};
			class Armored
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Armored0;
				class Atlas_B_A_trp_TankPlatoon
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Armored_BUS_TankPlatoon0;
					side = TWest;
					faction = Atlas_BLU_A_trp_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_armor.paa";
					GROUP_UNIT(0,TWest,Atlas_B_A_MBT_03_cannon_trp_F,LIEUTENANT,0,0)
					GROUP_UNIT(1,TWest,Atlas_B_A_MBT_03_cannon_trp_F,SERGEANT,10,-10)
					GROUP_UNIT(2,TWest,Atlas_B_A_MBT_03_cannon_trp_F,SERGEANT,-10,-10)
					GROUP_UNIT(3,TWest,Atlas_B_A_MBT_03_cannon_trp_F,CORPORAL,20,-20)
				};
				class Atlas_B_A_trp_TankSection
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Armored_BUS_TankSection0;
					side = TWest;
					faction = Atlas_BLU_A_trp_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_armor.paa";
					GROUP_UNIT(0,TWest,Atlas_B_A_MBT_03_cannon_trp_F,LIEUTENANT,0,0)
					GROUP_UNIT(1,TWest,Atlas_B_A_MBT_03_cannon_trp_F,SERGEANT,10,-10)
				};
			};
		};

		class Atlas_BLU_H_F
		{
			name = $STR_A3_A_CfgFactionClasses_BLU_H_F0;
			class Infantry
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Infantry0;
				class B_H_InfSquad
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSquad0;
					side = TWest;
					faction = Atlas_BLU_H_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,Atlas_B_H_soldier_SL_F,SERGEANT,0,0)
					GROUP_UNIT(1,TWest,Atlas_B_H_RadioOperator_F,PRIVATE,5,-5)
					GROUP_UNIT(2,TWest,Atlas_B_H_soldier_LAT_F,CORPORAL,-5,-5)
					GROUP_UNIT(3,TWest,Atlas_B_H_soldier_M_F,PRIVATE,10,-10)
					GROUP_UNIT(4,TWest,Atlas_B_H_soldier_TL_F,SERGEANT,-10,-10)
					GROUP_UNIT(5,TWest,Atlas_B_H_soldier_AR_F,CORPORAL,15,-15)
					GROUP_UNIT(6,TWest,Atlas_B_H_soldier_A_F,PRIVATE,-15,-15)
					GROUP_UNIT(7,TWest,Atlas_B_H_medic_F,PRIVATE,20,-20)
				};
				class B_H_InfTeam
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam0;
					side = TWest;
					faction = Atlas_BLU_H_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,Atlas_B_H_soldier_TL_F,SERGEANT,0,0)
					GROUP_UNIT(1,TWest,Atlas_B_H_soldier_AR_F,CORPORAL,5,-5)
					GROUP_UNIT(2,TWest,Atlas_B_H_soldier_GL_F,PRIVATE,-5,-5)
					GROUP_UNIT(3,TWest,Atlas_B_H_soldier_LAT_F,PRIVATE,10,-10)
				};
				class B_H_InfSentry
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSentry0;
					side = TWest;
					faction = Atlas_BLU_H_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,Atlas_B_H_soldier_GL_F,CORPORAL,0,0)
					GROUP_UNIT(1,TWest,Atlas_B_H_soldier_F,PRIVATE,5,-5)
				};
			};
			class Motorized
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Motorized0;
				class B_H_MotInf_Team
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_Team0;
					side = TWest;
					faction = Atlas_BLU_H_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_motor_inf.paa";
					GROUP_UNIT(0,TWest,Atlas_B_H_Offroad_02_LMG_F,SERGEANT,0,0)
					GROUP_UNIT(1,TWest,Atlas_B_H_soldier_LAT_F,PRIVATE,5,-5)
				};
			};
			class SpecOps
			{
				name = $STR_A3_CfgGroups_West_BLU_F_SpecOps0;
				class B_H_ReconTeam
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_ReconTeam0;
					side = TWest;
					faction = Atlas_BLU_H_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_recon.paa";
					GROUP_UNIT(0,TWest,Atlas_B_H_Soldier_commando_TL_F,SERGEANT,0,0)
					GROUP_UNIT(1,TWest,Atlas_B_H_Soldier_commando_M_F,CORPORAL,5,-5)
					GROUP_UNIT(2,TWest,Atlas_B_H_Soldier_commando_medic_F,PRIVATE,-5,-5)
					GROUP_UNIT(3,TWest,Atlas_B_H_Soldier_commando_LAT_F,CORPORAL,10,-10)
					GROUP_UNIT(4,TWest,Atlas_B_H_Soldier_commando_jtac_F,PRIVATE,-10,-10)
					GROUP_UNIT(5,TWest,Atlas_B_H_Soldier_commando_exp_F,PRIVATE,15,-15)
				};
				class B_H_ReconPatrol
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_ReconPatrol0;
					side = TWest;
					faction = Atlas_BLU_H_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_recon.paa";
					GROUP_UNIT(0,TWest,Atlas_B_H_Soldier_commando_TL_F,SERGEANT,0,0)
					GROUP_UNIT(1,TWest,Atlas_B_H_Soldier_commando_M_F,CORPORAL,5,-5)
					GROUP_UNIT(2,TWest,Atlas_B_H_Soldier_commando_medic_F,PRIVATE,-5,-5)
					GROUP_UNIT(3,TWest,Atlas_B_H_Soldier_commando_F,PRIVATE,10,-10)
				};
				class B_H_ReconSentry
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_ReconSentry0;
					side = TWest;
					faction = Atlas_BLU_H_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_recon.paa";
					GROUP_UNIT(0,TWest,Atlas_B_H_Soldier_commando_M_F,CORPORAL,0,0)
					GROUP_UNIT(1,TWest,Atlas_B_H_Soldier_commando_F,PRIVATE,5,-5)
				};
			};
		};
		class Atlas_BLU_M_F
		{
			name = $STR_A3_A_CfgFactionClasses_BLU_M_F0;
			class Infantry
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Infantry0;
				class B_M_InfSquad
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSquad0;
					side = TWest;
					faction = Atlas_BLU_M_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,Atlas_B_M_SL_F,SERGEANT,0,0)
					GROUP_UNIT(1,TWest,Atlas_B_M_RadioOperator_F,PRIVATE,5,-5)
					GROUP_UNIT(2,TWest,Atlas_B_M_Soldier_LAT_F,CORPORAL,-5,-5)
					GROUP_UNIT(3,TWest,Atlas_B_M_M_F,PRIVATE,10,-10)
					GROUP_UNIT(4,TWest,Atlas_B_M_TL_F,SERGEANT,-10,-10)
					GROUP_UNIT(5,TWest,Atlas_B_M_AR_F,CORPORAL,15,-15)
					GROUP_UNIT(6,TWest,Atlas_B_M_A_F,PRIVATE,-15,-15)
					GROUP_UNIT(7,TWest,Atlas_B_M_medic_F,PRIVATE,20,-20)
				};
				class B_M_InfTeam
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam0;
					side = TWest;
					faction = Atlas_BLU_M_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,Atlas_B_M_TL_F,SERGEANT,0,0)
					GROUP_UNIT(1,TWest,Atlas_B_M_AR_F,CORPORAL,5,-5)
					GROUP_UNIT(2,TWest,Atlas_B_M_GL_F,PRIVATE,-5,-5)
					GROUP_UNIT(3,TWest,Atlas_B_M_Soldier_LAT_F,PRIVATE,10,-10)
				};
				class B_M_InfSentry
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSentry0;
					side = TWest;
					faction = Atlas_BLU_M_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,Atlas_B_M_GL_F,CORPORAL,0,0)
					GROUP_UNIT(1,TWest,Atlas_B_M_Soldier_F,PRIVATE,5,-5)
				};
			};
			class Motorized
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Motorized0;
				class B_M_MotInf_Team
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_Team0;
					side = TWest;
					faction = Atlas_BLU_M_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_motor_inf.paa";
					GROUP_UNIT(0,TWest,Atlas_B_M_MRAP_01_gmg_F,SERGEANT,0,0)
					GROUP_UNIT(1,TWest,Atlas_B_M_soldier_LAT_F,CORPORAL,5,-5)
				};
				class B_M_MotInf_AT
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_AT0;
					side = TWest;
					faction = Atlas_BLU_M_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_motor_inf.paa";
					GROUP_UNIT(0,TWest,Atlas_B_M_MRAP_01_F,SERGEANT,0,0)
					GROUP_UNIT(1,TWest,Atlas_B_M_soldier_LAT_F,CORPORAL,5,-5)
					GROUP_UNIT(2,TWest,Atlas_B_M_soldier_LAT_F,CORPORAL,-5,-5)
				};
				class Atlas_B_M_MotInf_Reinforcements
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_Reinforce0;
					side = TWest;
					faction = Atlas_BLU_M_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_motor_inf.paa";
					GROUP_UNIT(0,TWest,Atlas_B_M_Truck_02_transport_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,Atlas_B_M_SL_F,SERGEANT,5,0);
					GROUP_UNIT(2,TWest,Atlas_B_M_RadioOperator_F,PRIVATE,5,-2);
					GROUP_UNIT(3,TWest,Atlas_B_M_soldier_LAT_F,CORPORAL,5,-4);
					GROUP_UNIT(4,TWest,Atlas_B_M_M_F,PRIVATE,5,-6);
					GROUP_UNIT(5,TWest,Atlas_B_M_TL_F,SERGEANT,5,-8);
					GROUP_UNIT(6,TWest,Atlas_B_M_AR_F,CORPORAL,5,-10);
					GROUP_UNIT(7,TWest,Atlas_B_M_A_F,PRIVATE,5,-12);
					GROUP_UNIT(8,TWest,Atlas_B_M_medic_F,PRIVATE,5,-14);
					GROUP_UNIT(9,TWest,Atlas_B_M_SL_F,SERGEANT,-5,0);
					GROUP_UNIT(10,TWest,Atlas_B_M_RadioOperator_F,PRIVATE,-5,-2);
					GROUP_UNIT(11,TWest,Atlas_B_M_soldier_LAT_F,CORPORAL,-5,-4);
					GROUP_UNIT(12,TWest,Atlas_B_M_M_F,PRIVATE,-5,-6);
					GROUP_UNIT(13,TWest,Atlas_B_M_TL_F,SERGEANT,-5,-8);
					GROUP_UNIT(14,TWest,Atlas_B_M_AR_F,CORPORAL,-5,-10);
					GROUP_UNIT(15,TWest,Atlas_B_M_A_F,PRIVATE,-5,-12);
					GROUP_UNIT(16,TWest,Atlas_B_M_medic_F,PRIVATE,-5,-14);
				};
			};
			class Mechanized
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Mechanized0;
				class B_M_MechInfSquad
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Mechanized_BUS_MechInfSquad0;
					side = TWest;
					faction = Atlas_BLU_M_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_mech_inf.paa";
					GROUP_UNIT(0,TWest,Atlas_B_M_APC_Wheeled_01_cannon_v2_F,LIEUTENANT,0,0)
					GROUP_UNIT(1,TWest,Atlas_B_M_SL_F,SERGEANT,5,-5)
					GROUP_UNIT(2,TWest,Atlas_B_M_RadioOperator_F,PRIVATE,-5,-5)
					GROUP_UNIT(3,TWest,Atlas_B_M_soldier_LAT_F,CORPORAL,10,-10)
					GROUP_UNIT(4,TWest,Atlas_B_M_M_F,PRIVATE,-10,-10)
					GROUP_UNIT(5,TWest,Atlas_B_M_TL_F,SERGEANT,15,-15)
					GROUP_UNIT(6,TWest,Atlas_B_M_AR_F,CORPORAL,-15,-15)
					GROUP_UNIT(7,TWest,Atlas_B_M_A_F,PRIVATE,20,-20)
					GROUP_UNIT(8,TWest,Atlas_B_M_medic_F,PRIVATE,-20,-20)
				};
			};
		};
		class BLU_EAF_F
		{
			name = $STR_A3_C_CfgFactionClasses_IND_E_F0;
			class ReserveInfantry
			{
				name = $STR_A3_Atlas_CfgGroups_West_BLU_EAF_F_ResInfantry0;
				class Atlas_B_E_ReservistSquad
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSquad0;
					side = TWest;
					faction = BLU_EAF_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,Atlas_B_E_Reservist_SL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,Atlas_B_E_Reservist_F,PRIVATE,5,-5);
					GROUP_UNIT(2,TWest,Atlas_B_E_Reservist_AT_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TWest,Atlas_B_E_Reservist_M_F,PRIVATE,10,-10);
					GROUP_UNIT(4,TWest,Atlas_B_E_Reservist_TL_F,SERGEANT,-10,-10);
					GROUP_UNIT(5,TWest,Atlas_B_E_Reservist_AR_F,CORPORAL,15,-15);
					GROUP_UNIT(6,TWest,Atlas_B_E_Reservist_A_F,PRIVATE,-15,-15);
					GROUP_UNIT(7,TWest,Atlas_B_E_Reservist_Medic_F,PRIVATE,20,-20);
				};
				class Atlas_B_E_ReservistTeam
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam0;
					side = TWest;
					faction = BLU_EAF_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,Atlas_B_E_Reservist_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,Atlas_B_E_Reservist_AR_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,Atlas_B_E_Reservist_GL_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TWest,Atlas_B_E_Reservist_AT_F,PRIVATE,10,-10);
				};
				class Atlas_B_E_ReservistSentry
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSentry0;
					side = TWest;
					faction = BLU_EAF_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,Atlas_B_E_Reservist_GL_F,CORPORAL,0,0);
					GROUP_UNIT(1,TWest,Atlas_B_E_Reservist_F,PRIVATE,5,-5);
				};
			};
		};
		class BLU_F
		{
			name = $STR_A3_A_CfgFactionClasses_BLU_F0;
			class JSOCInfantry
			{
				name = $STR_A3_Atlas_CfgGroups_West_BLU_F_JSOC0;
				class Atlas_B_JSOCTeam
				{
					name = $STR_A3_CfgGroups_West_BLU_F_JSOC_Team0;
					side = TWest;
					faction = BLU_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";
					GROUP_UNIT(0,TWest,Atlas_B_JSOC_SL_F,SERGEANT,0,0)
					GROUP_UNIT(1,TWest,Atlas_B_JSOC_M_F,CORPORAL,5,-5)
					GROUP_UNIT(2,TWest,Atlas_B_JSOC_Medic_F,PRIVATE,-5,-5)
					GROUP_UNIT(3,TWest,Atlas_B_JSOC_LAT_F,CORPORAL,10,-10)
					GROUP_UNIT(4,TWest,Atlas_B_JSOC_JTAC_F,PRIVATE,-10,-10)
					GROUP_UNIT(5,TWest,Atlas_B_JSOC_Exp_F,PRIVATE,15,-15)
				};
				class Atlas_B_JSOCPatrol
				{
					name = $STR_A3_CfgGroups_West_BLU_F_JSOC_Patrol0;
					side = TWest;
					faction = BLU_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";
					GROUP_UNIT(0,TWest,Atlas_B_JSOC_TL_F,SERGEANT,0,0)
					GROUP_UNIT(1,TWest,Atlas_B_JSOC_M_F,CORPORAL,5,-5)
					GROUP_UNIT(2,TWest,Atlas_B_JSOC_Medic_F,PRIVATE,-5,-5)
					GROUP_UNIT(3,TWest,Atlas_B_JSOC_F,PRIVATE,10,-10)
				};
				class Atlas_B_JSOCFAC
				{
					name = $STR_A3_CfgGroups_West_BLU_F_JSOC_FACTeam0;
					side = TWest;
					faction = BLU_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";
					GROUP_UNIT(0,TWest,Atlas_B_JSOC_JTAC_F,CORPORAL,0,0)
					GROUP_UNIT(1,TWest,Atlas_B_JSOC_Sharpshooter_F,PRIVATE,5,-5)
				};
			};
		};
		class BLU_T_F
		{
			name = $STR_A3_A_CfgFactionClasses_BLU_T_F0;
			class JSOCInfantry
			{
				name = $STR_A3_Atlas_CfgGroups_West_BLU_F_JSOC0;
				class Atlas_B_T_JSOCTeam
				{
					name = $STR_A3_CfgGroups_West_BLU_F_JSOC_Team0;
					side = TWest;
					faction = BLU_T_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";
					GROUP_UNIT(0,TWest,Atlas_B_T_JSOC_SL_F,SERGEANT,0,0)
					GROUP_UNIT(1,TWest,Atlas_B_T_JSOC_M_F,CORPORAL,5,-5)
					GROUP_UNIT(2,TWest,Atlas_B_T_JSOC_Medic_F,PRIVATE,-5,-5)
					GROUP_UNIT(3,TWest,Atlas_B_T_JSOC_LAT_F,CORPORAL,10,-10)
					GROUP_UNIT(4,TWest,Atlas_B_T_JSOC_JTAC_F,PRIVATE,-10,-10)
					GROUP_UNIT(5,TWest,Atlas_B_T_JSOC_Exp_F,PRIVATE,15,-15)
				};
				class Atlas_B_T_JSOCPatrol
				{
					name = $STR_A3_CfgGroups_West_BLU_F_JSOC_Patrol0;
					side = TWest;
					faction = BLU_T_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";
					GROUP_UNIT(0,TWest,Atlas_B_T_JSOC_TL_F,SERGEANT,0,0)
					GROUP_UNIT(1,TWest,Atlas_B_T_JSOC_M_F,CORPORAL,5,-5)
					GROUP_UNIT(2,TWest,Atlas_B_T_JSOC_Medic_F,PRIVATE,-5,-5)
					GROUP_UNIT(3,TWest,Atlas_B_T_JSOC_F,PRIVATE,10,-10)
				};
				class Atlas_B_T_JSOCFAC
				{
					name = $STR_A3_CfgGroups_West_BLU_F_JSOC_FACTeam0;
					side = TWest;
					faction = BLU_T_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";
					GROUP_UNIT(0,TWest,Atlas_B_T_JSOC_JTAC_F,CORPORAL,0,0)
					GROUP_UNIT(1,TWest,Atlas_B_T_JSOC_Sharpshooter_F,PRIVATE,5,-5)
				};
			};
		};
		class BLU_W_F
		{
			name = $STR_A3_A_CfgFactionClasses_BLU_W_F0;
			class JSOCInfantry
			{
				name = $STR_A3_Atlas_CfgGroups_West_BLU_F_JSOC0;
				class Atlas_B_W_JSOCTeam
				{
					name = $STR_A3_CfgGroups_West_BLU_F_JSOC_Team0;
					side = TWest;
					faction = BLU_W_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";
					GROUP_UNIT(0,TWest,Atlas_B_W_JSOC_SL_F,SERGEANT,0,0)
					GROUP_UNIT(1,TWest,Atlas_B_W_JSOC_M_F,CORPORAL,5,-5)
					GROUP_UNIT(2,TWest,Atlas_B_W_JSOC_Medic_F,PRIVATE,-5,-5)
					GROUP_UNIT(3,TWest,Atlas_B_W_JSOC_LAT_F,CORPORAL,10,-10)
					GROUP_UNIT(4,TWest,Atlas_B_W_JSOC_JTAC_F,PRIVATE,-10,-10)
					GROUP_UNIT(5,TWest,Atlas_B_W_JSOC_Exp_F,PRIVATE,15,-15)
				};
				class Atlas_B_W_JSOCPatrol
				{
					name = $STR_A3_CfgGroups_West_BLU_F_JSOC_Patrol0;
					side = TWest;
					faction = BLU_W_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";
					GROUP_UNIT(0,TWest,Atlas_B_W_JSOC_TL_F,SERGEANT,0,0)
					GROUP_UNIT(1,TWest,Atlas_B_W_JSOC_M_F,CORPORAL,5,-5)
					GROUP_UNIT(2,TWest,Atlas_B_W_JSOC_Medic_F,PRIVATE,-5,-5)
					GROUP_UNIT(3,TWest,Atlas_B_W_JSOC_F,PRIVATE,10,-10)
				};
				class Atlas_B_W_JSOCFAC
				{
					name = $STR_A3_CfgGroups_West_BLU_F_JSOC_FACTeam0;
					side = TWest;
					faction = BLU_W_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";
					GROUP_UNIT(0,TWest,Atlas_B_W_JSOC_JTAC_F,CORPORAL,0,0)
					GROUP_UNIT(1,TWest,Atlas_B_W_JSOC_Sharpshooter_F,PRIVATE,5,-5)
				};
			};
		};
		class BLU_NATO_lxWS
		{
			name = $STR_A3_A_CfgFactionClasses_BLU_D_lxWS0;
			class JSOCInfantry
			{
				name = $STR_A3_Atlas_CfgGroups_West_BLU_F_JSOC0;
				class Atlas_B_D_JSOCTeam
				{
					name = $STR_A3_CfgGroups_West_BLU_F_JSOC_Team0;
					side = TWest;
					faction = BLU_NATO_lxWS;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";
					GROUP_UNIT(0,TWest,Atlas_B_D_JSOC_SL_F,SERGEANT,0,0)
					GROUP_UNIT(1,TWest,Atlas_B_D_JSOC_M_F,CORPORAL,5,-5)
					GROUP_UNIT(2,TWest,Atlas_B_D_JSOC_Medic_F,PRIVATE,-5,-5)
					GROUP_UNIT(3,TWest,Atlas_B_D_JSOC_LAT_F,CORPORAL,10,-10)
					GROUP_UNIT(4,TWest,Atlas_B_D_JSOC_JTAC_F,PRIVATE,-10,-10)
					GROUP_UNIT(5,TWest,Atlas_B_D_JSOC_Exp_F,PRIVATE,15,-15)
				};
				class Atlas_B_D_JSOCPatrol
				{
					name = $STR_A3_CfgGroups_West_BLU_F_JSOC_Patrol0;
					side = TWest;
					faction = BLU_NATO_lxWS;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";
					GROUP_UNIT(0,TWest,Atlas_B_D_JSOC_TL_F,SERGEANT,0,0)
					GROUP_UNIT(1,TWest,Atlas_B_D_JSOC_M_F,CORPORAL,5,-5)
					GROUP_UNIT(2,TWest,Atlas_B_D_JSOC_Medic_F,PRIVATE,-5,-5)
					GROUP_UNIT(3,TWest,Atlas_B_D_JSOC_F,PRIVATE,10,-10)
				};
				class Atlas_B_D_JSOCFAC
				{
					name = $STR_A3_CfgGroups_West_BLU_F_JSOC_FACTeam0;
					side = TWest;
					faction = BLU_NATO_lxWS;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";
					GROUP_UNIT(0,TWest,Atlas_B_D_JSOC_JTAC_F,CORPORAL,0,0)
					GROUP_UNIT(1,TWest,Atlas_B_D_JSOC_Sharpshooter_F,PRIVATE,5,-5)
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
			class ArmInfantry
			{
				name = $STR_A3_Atlas_CfgGroups_East_OPF_F_ArmInfantry0;
				class Atlas_O_InfSquad_R
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSquad0;
					side = TEast;
					faction = OPF_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TEast,Atlas_O_soldier_R_SL_F,SERGEANT,0,0)
					GROUP_UNIT(1,TEast,Atlas_O_soldier_R_RadioOp_F,PRIVATE,5,-5)
					GROUP_UNIT(2,TEast,Atlas_O_soldier_R_LAT_F,CORPORAL,-5,-5)
					GROUP_UNIT(3,TEast,Atlas_O_soldier_R_M_F,PRIVATE,10,-10)
					GROUP_UNIT(4,TEast,Atlas_O_soldier_R_TL_F,SERGEANT,-10,-10)
					GROUP_UNIT(5,TEast,Atlas_O_soldier_R_AR_F,CORPORAL,15,-15)
					GROUP_UNIT(6,TEast,Atlas_O_soldier_R_A_F,PRIVATE,-15,-15)
					GROUP_UNIT(7,TEast,Atlas_O_soldier_R_medic_F,PRIVATE,20,-20)
				};
				class Atlas_O_InfSquad_Weapons_R
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSquad_Weapons0;
					side = TEast;
					faction = OPF_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TEast,Atlas_O_soldier_R_SL_F,SERGEANT,0,0)
					GROUP_UNIT(1,TEast,Atlas_O_soldier_R_AR_F,PRIVATE,5,-5)
					GROUP_UNIT(2,TEast,Atlas_O_soldier_R_GL_F,CORPORAL,-5,-5)
					GROUP_UNIT(3,TEast,Atlas_O_soldier_R_M_F,PRIVATE,10,-10)
					GROUP_UNIT(4,TEast,Atlas_O_soldier_R_AT_F,PRIVATE,-10,-10)
					GROUP_UNIT(5,TEast,Atlas_O_soldier_R_F,PRIVATE,15,-15)
					GROUP_UNIT(6,TEast,Atlas_O_soldier_R_A_F,PRIVATE,-15,-15)
					GROUP_UNIT(7,TEast,Atlas_O_soldier_R_medic_F,PRIVATE,20,-20)
				};
				class Atlas_O_InfTeam_R
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam0;
					side = TEast;
					faction = OPF_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TEast,Atlas_O_soldier_R_TL_F,SERGEANT,0,0)
					GROUP_UNIT(1,TEast,Atlas_O_soldier_R_AR_F,CORPORAL,5,-5)
					GROUP_UNIT(2,TEast,Atlas_O_soldier_R_GL_F,PRIVATE,-5,-5)
					GROUP_UNIT(3,TEast,Atlas_O_soldier_R_LAT_F,PRIVATE,10,-10)
				};
				class Atlas_O_InfTeam_AT_R
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam_AT0;
					side = TEast;
					faction = OPF_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TEast,Atlas_O_soldier_R_TL_F,SERGEANT,0,0)
					GROUP_UNIT(1,TEast,Atlas_O_soldier_R_AT_F,CORPORAL,5,-5)
					GROUP_UNIT(2,TEast,Atlas_O_soldier_R_AT_F,PRIVATE,-5,-5)
					GROUP_UNIT(3,TEast,Atlas_O_soldier_R_F,PRIVATE,10,-10)
				};
				class Atlas_O_InfTeam_AA_R
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam_AA0;
					side = TEast;
					faction = OPF_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TEast,Atlas_O_soldier_R_TL_F,SERGEANT,0,0)
					GROUP_UNIT(1,TEast,Atlas_O_soldier_R_AA_F,CORPORAL,5,-5)
					GROUP_UNIT(2,TEast,Atlas_O_soldier_R_AA_F,PRIVATE,-5,-5)
					GROUP_UNIT(3,TEast,Atlas_O_soldier_R_F,PRIVATE,10,-10)
				};
				class Atlas_O_InfSentry_R
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSentry0;
					side = TEast;
					faction = OPF_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TEast,Atlas_O_soldier_R_GL_F,CORPORAL,0,0)
					GROUP_UNIT(1,TEast,Atlas_O_soldier_R_F,PRIVATE,5,-5)
				};
			};
		};
		class OPF_T_F
		{
			name = $STR_A3_A_CfgFactionClasses_OPF_T_F0;
			class MarInfantry
			{
				name = $STR_A3_Atlas_CfgGroups_East_OPF_T_F_MarInfantry0;
				class Atlas_O_T_InfSquad_M
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSquad0;
					side = TEast;
					faction = OPF_T_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TEast,Atlas_O_C_Marine_SL_F,SERGEANT,0,0)
					GROUP_UNIT(1,TEast,Atlas_O_C_Marine_RadioOp_F,PRIVATE,5,-5)
					GROUP_UNIT(2,TEast,Atlas_O_C_Marine_LAT_F,CORPORAL,-5,-5)
					GROUP_UNIT(3,TEast,Atlas_O_C_Marine_M_F,PRIVATE,10,-10)
					GROUP_UNIT(4,TEast,Atlas_O_C_Marine_TL_F,SERGEANT,-10,-10)
					GROUP_UNIT(5,TEast,Atlas_O_C_Marine_AR_F,CORPORAL,15,-15)
					GROUP_UNIT(6,TEast,Atlas_O_C_Marine_A_F,PRIVATE,-15,-15)
					GROUP_UNIT(7,TEast,Atlas_O_C_Marine_medic_F,PRIVATE,20,-20)
				};
				class Atlas_O_T_InfSquad_Weapons_M
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSquad_Weapons0;
					side = TEast;
					faction = OPF_T_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TEast,Atlas_O_C_Marine_SL_F,SERGEANT,0,0)
					GROUP_UNIT(1,TEast,Atlas_O_C_Marine_AR_F,PRIVATE,5,-5)
					GROUP_UNIT(2,TEast,Atlas_O_C_Marine_GL_F,CORPORAL,-5,-5)
					GROUP_UNIT(3,TEast,Atlas_O_C_Marine_M_F,PRIVATE,10,-10)
					GROUP_UNIT(4,TEast,Atlas_O_C_Marine_AT_F,PRIVATE,-10,-10)
					GROUP_UNIT(5,TEast,Atlas_O_C_Marine_F,PRIVATE,15,-15)
					GROUP_UNIT(6,TEast,Atlas_O_C_Marine_A_F,PRIVATE,-15,-15)
					GROUP_UNIT(7,TEast,Atlas_O_C_Marine_medic_F,PRIVATE,20,-20)
				};
				class Atlas_O_T_InfTeam_M
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam0;
					side = TEast;
					faction = OPF_T_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TEast,Atlas_O_C_Marine_TL_F,SERGEANT,0,0)
					GROUP_UNIT(1,TEast,Atlas_O_C_Marine_AR_F,CORPORAL,5,-5)
					GROUP_UNIT(2,TEast,Atlas_O_C_Marine_GL_F,PRIVATE,-5,-5)
					GROUP_UNIT(3,TEast,Atlas_O_C_Marine_LAT_F,PRIVATE,10,-10)
				};
				class Atlas_O_T_InfTeam_AT_M
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam_AT0;
					side = TEast;
					faction = OPF_T_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TEast,Atlas_O_C_Marine_TL_F,SERGEANT,0,0)
					GROUP_UNIT(1,TEast,Atlas_O_C_Marine_AT_F,CORPORAL,5,-5)
					GROUP_UNIT(2,TEast,Atlas_O_C_Marine_AT_F,PRIVATE,-5,-5)
					GROUP_UNIT(3,TEast,Atlas_O_C_Marine_F,PRIVATE,10,-10)
				};
				class Atlas_O_T_InfTeam_AA_M
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam_AA0;
					side = TEast;
					faction = OPF_T_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TEast,Atlas_O_C_Marine_TL_F,SERGEANT,0,0)
					GROUP_UNIT(1,TEast,Atlas_O_C_Marine_AA_F,CORPORAL,5,-5)
					GROUP_UNIT(2,TEast,Atlas_O_C_Marine_AA_F,PRIVATE,-5,-5)
					GROUP_UNIT(3,TEast,Atlas_O_C_Marine_F,PRIVATE,10,-10)
				};
				class Atlas_O_T_InfSentry_M
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSentry0;
					side = TEast;
					faction = OPF_T_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TEast,Atlas_O_C_Marine_GL_F,CORPORAL,0,0)
					GROUP_UNIT(1,TEast,Atlas_O_C_Marine_F,PRIVATE,5,-5)
				};
			};
		};
		class Atlas_OPF_V_wdl_F
		{
		  	name = $STR_A3_A_CfgFactionClasses_OPF_V_wdl_F0;
			class SpecOps
			{
				name = $STR_A3_CfgGroups_West_BLU_F_SpecOps0;
				class Atlas_O_V_ViperTeam
				{
					name = $STR_A3_CfgGroups_East_OPF_F_SpecOps_OI_ViperTeam0;
					side = TEast;
					faction = Atlas_OPF_V_wdl_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_recon.paa";
					GROUP_UNIT(0,TEast,Atlas_O_V_Soldier_TL_whex_F,SERGEANT,0,0)
					GROUP_UNIT(1,TEast,Atlas_O_V_Soldier_JTAC_whex_F,CORPORAL,5,-5)
					GROUP_UNIT(2,TEast,Atlas_O_V_Soldier_M_whex_F,PRIVATE,-5,-5)
					GROUP_UNIT(3,TEast,Atlas_O_V_Soldier_Exp_whex_F,PRIVATE,10,-10)
					GROUP_UNIT(4,TEast,Atlas_O_V_Soldier_LAT_whex_F,PRIVATE,-10,-10)
					GROUP_UNIT(5,TEast,Atlas_O_V_Soldier_Medic_whex_F,PRIVATE,15,-15)
				};
				class Atlas_O_V_ViperPatrol
				{
					name = "Viper Patrol";
					side = TEast;
					faction = Atlas_OPF_V_wdl_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_recon.paa";
					GROUP_UNIT(0,TEast,Atlas_O_V_Soldier_TL_whex_F,SERGEANT,0,0)
					GROUP_UNIT(1,TEast,Atlas_O_V_Soldier_M_whex_F,CORPORAL,5,-5)
					GROUP_UNIT(2,TEast,Atlas_O_V_Soldier_Medic_whex_F,PRIVATE,-5,-5)
					GROUP_UNIT(3,TEast,Atlas_O_V_Soldier_whex_F,PRIVATE,10,-10)
				};
				class Atlas_O_V_ViperSentry
				{
					name = "Viper Sentry";
					side = TEast;
					faction = Atlas_OPF_V_wdl_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_recon.paa";
					GROUP_UNIT(0,TEast,Atlas_O_V_Soldier_M_whex_F,CORPORAL,0,0)
					GROUP_UNIT(1,TEast,Atlas_O_V_Soldier_whex_F,PRIVATE,5,-5)
				};
			};
			class Motorized_MTP
			{
				name = $STR_A3_CfgGroups_East_OPF_F_Motorized_MTP0;
				class Atlas_O_V_MotInf_ReconViperTeam
				{
					name = $STR_A3_CfgGroups_East_OPF_F_Motorized_MTP_O_MotInf_ReconViperTeam0;
					side = TEast;
					faction = Atlas_OPF_V_wdl_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_motor_inf.paa";
					GROUP_UNIT(0,TEast,Atlas_O_W_LSV_02_unarmed_viper_F,SERGEANT,0,0)
					GROUP_UNIT(1,TEast,Atlas_O_V_Soldier_TL_whex_F,SERGEANT,5,-5)
					GROUP_UNIT(2,TEast,Atlas_O_V_Soldier_JTAC_whex_F,CORPORAL,-5,-5)
					GROUP_UNIT(3,TEast,Atlas_O_V_Soldier_M_whex_F,PRIVATE,10,-10)
					GROUP_UNIT(4,TEast,Atlas_O_V_Soldier_Exp_whex_F,PRIVATE,-10,-10)
					GROUP_UNIT(5,TEast,Atlas_O_V_Soldier_LAT_whex_F,PRIVATE,15,-15)
					GROUP_UNIT(6,TEast,Atlas_O_V_Soldier_Medic_whex_F,PRIVATE,-15,-15)
				};
				class Atlas_O_V_MotInf_AssaultViperTeam
				{
					name = $STR_A3_CfgGroups_East_OPF_F_Motorized_MTP_O_MotInf_AssaultViperTeam0;
					side = TEast;
					faction = Atlas_OPF_V_wdl_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_motor_inf.paa";
					GROUP_UNIT(0,TEast,Atlas_O_W_LSV_02_armed_viper_F,SERGEANT,0,0)
					GROUP_UNIT(1,TEast,Atlas_O_V_Soldier_TL_whex_F,SERGEANT,5,-5)
					GROUP_UNIT(2,TEast,Atlas_O_V_Soldier_JTAC_whex_F,CORPORAL,-5,-5)
					GROUP_UNIT(3,TEast,Atlas_O_V_Soldier_M_whex_F,PRIVATE,10,-10)
					GROUP_UNIT(4,TEast,Atlas_O_V_Soldier_Exp_whex_F,PRIVATE,-10,-10)
					GROUP_UNIT(5,TEast,Atlas_O_V_Soldier_LAT_whex_F,PRIVATE,15,-15)
					GROUP_UNIT(6,TEast,Atlas_O_V_Soldier_Medic_whex_F,PRIVATE,-15,-15)
				};
			};
		};
		class Atlas_OPF_W_F
		{
		  	name = $STR_A3_A_CfgFactionClasses_OPF_W_F0;
			class Infantry
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Infantry0;
				class O_W_InfSquad
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSquad0;
					side = TEast;
					faction = Atlas_OPF_W_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TEast,Atlas_O_W_soldier_SL_F,SERGEANT,0,0)
					GROUP_UNIT(1,TEast,Atlas_O_W_RadioOperator_F,PRIVATE,5,-5)
					GROUP_UNIT(2,TEast,Atlas_O_W_soldier_LAT_F,CORPORAL,-5,-5)
					GROUP_UNIT(3,TEast,Atlas_O_W_soldier_M_F,PRIVATE,10,-10)
					GROUP_UNIT(4,TEast,Atlas_O_W_soldier_TL_F,SERGEANT,-10,-10)
					GROUP_UNIT(5,TEast,Atlas_O_W_soldier_AR_F,CORPORAL,15,-15)
					GROUP_UNIT(6,TEast,Atlas_O_W_soldier_A_F,PRIVATE,-15,-15)
					GROUP_UNIT(7,TEast,Atlas_O_W_medic_F,PRIVATE,20,-20)
				};
				class O_W_InfSquad_Weapons
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSquad_Weapons0;
					side = TEast;
					faction = Atlas_OPF_W_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TEast,Atlas_O_W_soldier_SL_F,SERGEANT,0,0)
					GROUP_UNIT(1,TEast,Atlas_O_W_soldier_AR_F,PRIVATE,5,-5)
					GROUP_UNIT(2,TEast,Atlas_O_W_soldier_GL_F,CORPORAL,-5,-5)
					GROUP_UNIT(3,TEast,Atlas_O_W_soldier_M_F,PRIVATE,10,-10)
					GROUP_UNIT(4,TEast,Atlas_O_W_soldier_AT_F,PRIVATE,-10,-10)
					GROUP_UNIT(5,TEast,Atlas_O_W_soldier_F,PRIVATE,15,-15)
					GROUP_UNIT(6,TEast,Atlas_O_W_soldier_A_F,PRIVATE,-15,-15)
					GROUP_UNIT(7,TEast,Atlas_O_W_medic_F,PRIVATE,20,-20)
				};
				class O_W_InfTeam
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam0;
					side = TEast;
					faction = Atlas_OPF_W_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TEast,Atlas_O_W_soldier_TL_F,SERGEANT,0,0)
					GROUP_UNIT(1,TEast,Atlas_O_W_soldier_AR_F,CORPORAL,5,-5)
					GROUP_UNIT(2,TEast,Atlas_O_W_soldier_GL_F,PRIVATE,-5,-5)
					GROUP_UNIT(3,TEast,Atlas_O_W_soldier_LAT_F,PRIVATE,10,-10)
				};
				class O_W_InfTeam_AT
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam_AT0;
					side = TEast;
					faction = Atlas_OPF_W_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TEast,Atlas_O_W_soldier_TL_F,SERGEANT,0,0)
					GROUP_UNIT(1,TEast,Atlas_O_W_soldier_AT_F,CORPORAL,5,-5)
					GROUP_UNIT(2,TEast,Atlas_O_W_soldier_AT_F,PRIVATE,-5,-5)
					GROUP_UNIT(3,TEast,Atlas_O_W_soldier_F,PRIVATE,10,-10)
				};
				class O_W_InfTeam_AA
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam_AA0;
					side = TEast;
					faction = Atlas_OPF_W_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TEast,Atlas_O_W_soldier_TL_F,SERGEANT,0,0)
					GROUP_UNIT(1,TEast,Atlas_O_W_soldier_AA_F,CORPORAL,5,-5)
					GROUP_UNIT(2,TEast,Atlas_O_W_soldier_AA_F,PRIVATE,-5,-5)
					GROUP_UNIT(3,TEast,Atlas_O_W_soldier_F,PRIVATE,10,-10)
				};
				class O_W_InfSentry
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSentry0;
					side = TEast;
					faction = Atlas_OPF_W_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TEast,Atlas_O_W_soldier_GL_F,CORPORAL,0,0)
					GROUP_UNIT(1,TEast,Atlas_O_W_soldier_F,PRIVATE,5,-5)
				};
			};
			class SpecOps
			{
				name = $STR_A3_CfgGroups_West_BLU_F_SpecOps0;
				class O_W_reconTeam
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_ReconTeam0;
					side = TEast;
					faction = Atlas_OPF_W_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";
					GROUP_UNIT(0,TEast,Atlas_O_W_recon_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TEast,Atlas_O_W_recon_M_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TEast,Atlas_O_W_recon_medic_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TEast,Atlas_O_W_recon_LAT_F,CORPORAL,10,-10);
					GROUP_UNIT(4,TEast,Atlas_O_W_recon_JTAC_F,PRIVATE,-10,-10);
					GROUP_UNIT(5,TEast,Atlas_O_W_recon_exp_F,PRIVATE,15,-15);
				};
				class O_W_reconPatrol
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_ReconPatrol0;
					side = TEast;
					faction = Atlas_OPF_W_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";
					GROUP_UNIT(0,TEast,Atlas_O_W_recon_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TEast,Atlas_O_W_recon_M_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TEast,Atlas_O_W_recon_medic_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TEast,Atlas_O_W_recon_F,PRIVATE,10,-10);
				};
				class O_W_reconSentry
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_ReconSentry0;
					side = TEast;
					faction = Atlas_OPF_W_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";
					GROUP_UNIT(0,TEast,Atlas_O_W_recon_M_F,CORPORAL,0,0);
					GROUP_UNIT(1,TEast,Atlas_O_W_recon_F,PRIVATE,5,-5);
				};
				class O_W_ReconSquad
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_ReconSquad0;
					side = TEast;
					faction = Atlas_OPF_W_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";
					GROUP_UNIT(0,TEast,Atlas_O_W_recon_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TEast,Atlas_O_W_recon_M_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TEast,Atlas_O_W_recon_medic_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TEast,Atlas_O_W_recon_F,PRIVATE,10,-10);
					GROUP_UNIT(4,TEast,Atlas_O_W_recon_LAT_F,PRIVATE,-10,-10);
					GROUP_UNIT(5,TEast,Atlas_O_W_recon_JTAC_F,PRIVATE,15,-15);
					GROUP_UNIT(6,TEast,Atlas_O_W_recon_exp_F,PRIVATE,-15,-15);
					GROUP_UNIT(7,TEast,Atlas_O_W_Recon_CQ_F,CORPORAL,20,-20);
				};
			};
			class Motorized
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Motorized0;
				class O_W_MotInf_Team
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_Team0;
					side = TEast;
					faction = Atlas_OPF_W_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_motor_inf.paa";
					GROUP_UNIT(0,TEast,Atlas_O_W_MRAP_02_gmg_F,SERGEANT,0,0)
					GROUP_UNIT(1,TEast,Atlas_O_W_soldier_AR_F,CORPORAL,5,-5)
					GROUP_UNIT(2,TEast,Atlas_O_W_soldier_LAT_F,PRIVATE,-5,-5)
				};
				class O_W_MotInf_AT
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_AT0;
					side = TEast;
					faction = Atlas_OPF_W_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_motor_inf.paa";
					GROUP_UNIT(0,TEast,Atlas_O_W_MRAP_02_F,SERGEANT,0,0)
					GROUP_UNIT(1,TEast,Atlas_O_W_soldier_AT_F,CORPORAL,5,-5)
					GROUP_UNIT(2,TEast,Atlas_O_W_soldier_AT_F,CORPORAL,-5,-5)
					GROUP_UNIT(3,TEast,Atlas_O_W_soldier_F,PRIVATE,0,-10)
				};
				class O_W_MotInf_AA
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_AA0;
					side = TEast;
					faction = Atlas_OPF_W_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_motor_inf.paa";
					GROUP_UNIT(0,TEast,Atlas_O_W_MRAP_02_F,SERGEANT,0,0)
					GROUP_UNIT(1,TEast,Atlas_O_W_soldier_AA_F,CORPORAL,5,-5)
					GROUP_UNIT(2,TEast,Atlas_O_W_soldier_AA_F,CORPORAL,-5,-5)
					GROUP_UNIT(3,TEast,Atlas_O_W_soldier_F,PRIVATE,0,-10)
				};
				class O_W_MotInf_Reinforcements
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_Reinforce0;
					side = TEast;
					faction = Atlas_OPF_W_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_motor_inf.paa";
					GROUP_UNIT(0,TEast,Atlas_O_W_Truck_02_transport_F,SERGEANT,0,0)
					GROUP_UNIT(1,TEast,Atlas_O_W_soldier_SL_F,SERGEANT,5,0)
					GROUP_UNIT(2,TEast,Atlas_O_W_RadioOperator_F,PRIVATE,5,-2)
					GROUP_UNIT(3,TEast,Atlas_O_W_soldier_LAT_F,CORPORAL,5,-4)
					GROUP_UNIT(4,TEast,Atlas_O_W_soldier_M_F,PRIVATE,5,-6)
					GROUP_UNIT(5,TEast,Atlas_O_W_soldier_TL_F,SERGEANT,5,-8)
					GROUP_UNIT(6,TEast,Atlas_O_W_soldier_AR_F,CORPORAL,5,-10)
					GROUP_UNIT(7,TEast,Atlas_O_W_soldier_A_F,PRIVATE,5,-12)
					GROUP_UNIT(8,TEast,Atlas_O_W_medic_F,PRIVATE,5,-14)
					GROUP_UNIT(9,TEast,Atlas_O_W_soldier_SL_F,SERGEANT,-5,0)
					GROUP_UNIT(10,TEast,Atlas_O_W_RadioOperator_F,PRIVATE,-5,-2)
					GROUP_UNIT(11,TEast,Atlas_O_W_soldier_LAT_F,CORPORAL,-5,-4)
					GROUP_UNIT(12,TEast,Atlas_O_W_soldier_M_F,PRIVATE,-5,-6)
					GROUP_UNIT(13,TEast,Atlas_O_W_soldier_TL_F,SERGEANT,-5,-8)
					GROUP_UNIT(14,TEast,Atlas_O_W_soldier_AR_F,CORPORAL,-5,-10)
					GROUP_UNIT(15,TEast,Atlas_O_W_soldier_A_F,PRIVATE,-5,-12)
					GROUP_UNIT(16,TEast,Atlas_O_W_medic_F,PRIVATE,-5,-14)
				};
			};
			class Mechanized
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Mechanized0;
				class O_W_MechInfSquad
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Mechanized_BUS_MechInfSquad0;
					side = TEast;
					faction = Atlas_OPF_W_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_mech_inf.paa";
					GROUP_UNIT(0,TEast,Atlas_O_W_APC_Tracked_02_30mm_lxWS,LIEUTENANT,0,0)
					GROUP_UNIT(1,TEast,Atlas_O_W_soldier_SL_F,SERGEANT,5,-5)
					GROUP_UNIT(2,TEast,Atlas_O_W_RadioOperator_F,PRIVATE,-5,-5)
					GROUP_UNIT(3,TEast,Atlas_O_W_soldier_LAT_F,CORPORAL,10,-10)
					GROUP_UNIT(4,TEast,Atlas_O_W_soldier_M_F,PRIVATE,-10,-10)
					GROUP_UNIT(5,TEast,Atlas_O_W_soldier_TL_F,SERGEANT,15,-15)
					GROUP_UNIT(6,TEast,Atlas_O_W_soldier_AR_F,CORPORAL,-15,-15)
					GROUP_UNIT(7,TEast,Atlas_O_W_soldier_A_F,PRIVATE,20,-20)
					GROUP_UNIT(8,TEast,Atlas_O_W_medic_F,PRIVATE,-20,-20)
				};
				class O_W_MechInf_AT
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Mechanized_BUS_MechInf_AT0;
					side = TEast;
					faction = Atlas_OPF_W_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_mech_inf.paa";
					GROUP_UNIT(0,TEast,Atlas_O_W_APC_Tracked_02_30mm_lxWS,LIEUTENANT,0,0)
					GROUP_UNIT(1,TEast,Atlas_O_W_soldier_SL_F,SERGEANT,5,-5)
					GROUP_UNIT(2,TEast,Atlas_O_W_soldier_AR_F,CORPORAL,-5,-5)
					GROUP_UNIT(3,TEast,Atlas_O_W_soldier_AT_F,PRIVATE,10,-10)
					GROUP_UNIT(4,TEast,Atlas_O_W_soldier_AT_F,PRIVATE,-10,-10)
					GROUP_UNIT(5,TEast,Atlas_O_W_soldier_AT_F,SERGEANT,15,-15)
					GROUP_UNIT(6,TEast,Atlas_O_W_soldier_F,CORPORAL,-15,-15)
					GROUP_UNIT(7,TEast,Atlas_O_W_soldier_F,PRIVATE,20,-20)
					GROUP_UNIT(8,TEast,Atlas_O_W_soldier_F,PRIVATE,-20,-20)
				};
				class O_W_MechInf_AA
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Mechanized_BUS_MechInf_AA0;
					side = TEast;
					faction = Atlas_OPF_W_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_mech_inf.paa";
					GROUP_UNIT(0,TEast,Atlas_O_W_APC_Tracked_02_30mm_lxWS,LIEUTENANT,0,0)
					GROUP_UNIT(1,TEast,Atlas_O_W_soldier_SL_F,SERGEANT,5,-5)
					GROUP_UNIT(2,TEast,Atlas_O_W_soldier_AR_F,CORPORAL,-5,-5)
					GROUP_UNIT(3,TEast,Atlas_O_W_soldier_AA_F,PRIVATE,10,-10)
					GROUP_UNIT(4,TEast,Atlas_O_W_soldier_AA_F,PRIVATE,-10,-10)
					GROUP_UNIT(5,TEast,Atlas_O_W_soldier_AA_F,SERGEANT,15,-15)
					GROUP_UNIT(6,TEast,Atlas_O_W_soldier_F,CORPORAL,-15,-15)
					GROUP_UNIT(7,TEast,Atlas_O_W_soldier_F,PRIVATE,20,-20)
					GROUP_UNIT(8,TEast,Atlas_O_W_soldier_F,PRIVATE,-20,-20)
				};
			};
			class Armored
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Armored0;
				class O_W_TankPlatoon
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Armored_BUS_TankPlatoon0;
					side = TEast;
					faction = Atlas_OPF_W_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_armor.paa";
					GROUP_UNIT(0,TEast,Atlas_O_W_MBT_02_cannon_ghex_F,LIEUTENANT,0,0)
					GROUP_UNIT(1,TEast,Atlas_O_W_MBT_02_cannon_ghex_F,SERGEANT,10,-10)
					GROUP_UNIT(2,TEast,Atlas_O_W_MBT_02_cannon_ghex_F,SERGEANT,-10,-10)
					GROUP_UNIT(3,TEast,Atlas_O_W_MBT_02_cannon_ghex_F,CORPORAL,20,-20)
				};
				class O_W_TankSection
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Armored_BUS_TankSection0;
					side = TEast;
					faction = Atlas_OPF_W_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_armor.paa";
					GROUP_UNIT(0,TEast,Atlas_O_W_MBT_02_cannon_ghex_F,LIEUTENANT,0,0)
					GROUP_UNIT(1,TEast,Atlas_O_W_MBT_02_cannon_ghex_F,SERGEANT,10,-10)
				};
			};
		};
		/*class Atlas_OPF_V_F
		{
		  	name = $STR_A3_A_CfgFactionClasses_OPF_V_F0;
			class Infantry
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Infantry0;
				class O_VZ_InfSquad
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSquad0;
					side = TEast;
					faction = Atlas_OPF_W_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TEast,Atlas_O_VZ_SL_F,SERGEANT,0,0)
					GROUP_UNIT(1,TEast,Atlas_O_VZ_RadioOperator_F,PRIVATE,5,-5)
					GROUP_UNIT(2,TEast,Atlas_O_VZ_Soldier_LAT_F,CORPORAL,-5,-5)
					GROUP_UNIT(3,TEast,Atlas_O_VZ_M_F,PRIVATE,10,-10)
					GROUP_UNIT(4,TEast,Atlas_O_VZ_TL_F,SERGEANT,-10,-10)
					GROUP_UNIT(5,TEast,Atlas_O_VZ_AR_F,CORPORAL,15,-15)
					GROUP_UNIT(6,TEast,Atlas_O_VZ_A_F,PRIVATE,-15,-15)
					GROUP_UNIT(7,TEast,Atlas_O_VZ_medic_F,PRIVATE,20,-20)
				};
				class O_VZ_InfSquad_Weapons
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSquad_Weapons0;
					side = TEast;
					faction = Atlas_OPF_W_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TEast,Atlas_O_VZ_SL_F,SERGEANT,0,0)
					GROUP_UNIT(1,TEast,Atlas_O_VZ_AR_F,PRIVATE,5,-5)
					GROUP_UNIT(2,TEast,Atlas_O_VZ_GL_F,CORPORAL,-5,-5)
					GROUP_UNIT(3,TEast,Atlas_O_VZ_M_F,PRIVATE,10,-10)
					GROUP_UNIT(4,TEast,Atlas_O_VZ_Soldier_AT_F,PRIVATE,-10,-10)
					GROUP_UNIT(5,TEast,Atlas_O_VZ_soldier_F,PRIVATE,15,-15)
					GROUP_UNIT(6,TEast,Atlas_O_VZ_A_F,PRIVATE,-15,-15)
					GROUP_UNIT(7,TEast,Atlas_O_VZ_medic_F,PRIVATE,20,-20)
				};
				class O_VZ_InfTeam
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam0;
					side = TEast;
					faction = Atlas_OPF_W_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TEast,Atlas_O_VZ_TL_F,SERGEANT,0,0)
					GROUP_UNIT(1,TEast,Atlas_O_VZ_AR_F,CORPORAL,5,-5)
					GROUP_UNIT(2,TEast,Atlas_O_VZ_GL_F,PRIVATE,-5,-5)
					GROUP_UNIT(3,TEast,Atlas_O_VZ_Soldier_LAT_F,PRIVATE,10,-10)
				};
				class O_VZ_InfTeam_AT
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam_AT0;
					side = TEast;
					faction = Atlas_OPF_W_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TEast,Atlas_O_VZ_TL_F,SERGEANT,0,0)
					GROUP_UNIT(1,TEast,Atlas_O_VZ_Soldier_AT_F,CORPORAL,5,-5)
					GROUP_UNIT(2,TEast,Atlas_O_VZ_Soldier_AT_F,PRIVATE,-5,-5)
					GROUP_UNIT(3,TEast,Atlas_O_VZ_soldier_F,PRIVATE,10,-10)
				};
				class O_VZ_InfTeam_AA
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam_AA0;
					side = TEast;
					faction = Atlas_OPF_W_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TEast,Atlas_O_VZ_TL_F,SERGEANT,0,0)
					GROUP_UNIT(1,TEast,Atlas_O_VZ_Soldier_AA_F,CORPORAL,5,-5)
					GROUP_UNIT(2,TEast,Atlas_O_VZ_Soldier_AA_F,PRIVATE,-5,-5)
					GROUP_UNIT(3,TEast,Atlas_O_VZ_Soldier_F,PRIVATE,10,-10)
				};
				class O_VZ_InfSentry
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSentry0;
					side = TEast;
					faction = Atlas_OPF_W_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TEast,Atlas_O_VZ_GL_F,CORPORAL,0,0)
					GROUP_UNIT(1,TEast,Atlas_O_VZ_soldier_F,PRIVATE,5,-5)
				};
			};
			class Motorized
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Motorized0;
				class O_VZ_MotInf_Team
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_Team0;
					side = TEast;
					faction = Atlas_OPF_W_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_motor_inf.paa";
					GROUP_UNIT(0,TEast,Atlas_O_VZ_LSV_02_armed_F,SERGEANT,0,0)
					GROUP_UNIT(1,TEast,Atlas_O_VZ_AR_F,CORPORAL,5,-5)
					GROUP_UNIT(2,TEast,Atlas_O_VZ_Soldier_LAT_F,PRIVATE,-5,-5)
				};
				class O_VZ_MotInf_AT
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_AT0;
					side = TEast;
					faction = Atlas_OPF_W_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_motor_inf.paa";
					GROUP_UNIT(0,TEast,Atlas_O_VZ_LSV_02_armed_F,SERGEANT,0,0)
					GROUP_UNIT(1,TEast,Atlas_O_VZ_Soldier_AT_F,CORPORAL,5,-5)
					GROUP_UNIT(2,TEast,Atlas_O_VZ_Soldier_AT_F,CORPORAL,-5,-5)
					GROUP_UNIT(3,TEast,Atlas_O_VZ_soldier_F,PRIVATE,0,-10)
				};
				class O_VZ_MotInf_AA
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_AA0;
					side = TEast;
					faction = Atlas_OPF_W_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_motor_inf.paa";
					GROUP_UNIT(0,TEast,Atlas_O_VZ_LSV_02_armed_F,SERGEANT,0,0)
					GROUP_UNIT(1,TEast,Atlas_O_VZ_Soldier_AA_F,CORPORAL,5,-5)
					GROUP_UNIT(2,TEast,Atlas_O_VZ_Soldier_AA_F,CORPORAL,-5,-5)
					GROUP_UNIT(3,TEast,Atlas_O_VZ_soldier_F,PRIVATE,0,-10)
				};
				class O_VZ_MotInf_Reinforcements
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_Reinforce0;
					side = TEast;
					faction = Atlas_OPF_W_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_motor_inf.paa";
					GROUP_UNIT(0,TEast,Atlas_O_VZ_Truck_02_F,SERGEANT,0,0)
					GROUP_UNIT(1,TEast,Atlas_O_VZ_SL_F,SERGEANT,5,0)
					GROUP_UNIT(2,TEast,Atlas_O_VZ_soldier_F,PRIVATE,5,-2)
					GROUP_UNIT(3,TEast,Atlas_O_VZ_Soldier_LAT_F,CORPORAL,5,-4)
					GROUP_UNIT(4,TEast,Atlas_O_VZ_M_F,PRIVATE,5,-6)
					GROUP_UNIT(5,TEast,Atlas_O_VZ_TL_F,SERGEANT,5,-8)
					GROUP_UNIT(6,TEast,Atlas_O_VZ_AR_F,CORPORAL,5,-10)
					GROUP_UNIT(7,TEast,Atlas_O_VZ_A_F,PRIVATE,5,-12)
					GROUP_UNIT(8,TEast,Atlas_O_VZ_medic_F,PRIVATE,5,-14)
					GROUP_UNIT(9,TEast,Atlas_O_VZ_SL_F,SERGEANT,-5,0)
					GROUP_UNIT(10,TEast,Atlas_O_VZ_RadioOperator_F,PRIVATE,-5,-2)
					GROUP_UNIT(11,TEast,Atlas_O_VZ_Soldier_LAT_F,CORPORAL,-5,-4)
					GROUP_UNIT(12,TEast,Atlas_O_VZ_M_F,PRIVATE,-5,-6)
					GROUP_UNIT(13,TEast,Atlas_O_VZ_TL_F,SERGEANT,-5,-8)
					GROUP_UNIT(14,TEast,Atlas_O_VZ_AR_F,CORPORAL,-5,-10)
					GROUP_UNIT(15,TEast,Atlas_O_VZ_A_F,PRIVATE,-5,-12)
					GROUP_UNIT(16,TEast,Atlas_O_VZ_medic_F,PRIVATE,-5,-14)
				};
			};
			class Mechanized
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Mechanized0;
				class O_VZ_MechInfSquad
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Mechanized_BUS_MechInfSquad0;
					side = TEast;
					faction = Atlas_OPF_W_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_mech_inf.paa";
					GROUP_UNIT(0,TEast,Atlas_O_VZ_APC_Wheeled_04_cannon_F,LIEUTENANT,0,0)
					GROUP_UNIT(1,TEast,Atlas_O_VZ_SL_F,SERGEANT,5,-5)
					GROUP_UNIT(2,TEast,Atlas_O_VZ_RadioOperator_F,PRIVATE,-5,-5)
					GROUP_UNIT(3,TEast,Atlas_O_VZ_Soldier_LAT_F,CORPORAL,10,-10)
					GROUP_UNIT(4,TEast,Atlas_O_VZ_M_F,PRIVATE,-10,-10)
					GROUP_UNIT(5,TEast,Atlas_O_VZ_TL_F,SERGEANT,15,-15)
					GROUP_UNIT(6,TEast,Atlas_O_VZ_AR_F,CORPORAL,-15,-15)
					GROUP_UNIT(7,TEast,Atlas_O_VZ_A_F,PRIVATE,20,-20)
					GROUP_UNIT(8,TEast,Atlas_O_VZ_medic_F,PRIVATE,-20,-20)
				};
				class O_VZ_MechInf_AT
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Mechanized_BUS_MechInf_AT0;
					side = TEast;
					faction = Atlas_OPF_W_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_mech_inf.paa";
					GROUP_UNIT(0,TEast,Atlas_O_VZ_APC_Wheeled_04_cannon_F,LIEUTENANT,0,0)
					GROUP_UNIT(1,TEast,Atlas_O_VZ_SL_F,SERGEANT,5,-5)
					GROUP_UNIT(2,TEast,Atlas_O_VZ_AR_F,CORPORAL,-5,-5)
					GROUP_UNIT(3,TEast,Atlas_O_VZ_Soldier_AT_F,PRIVATE,10,-10)
					GROUP_UNIT(4,TEast,Atlas_O_VZ_Soldier_AT_F,PRIVATE,-10,-10)
					GROUP_UNIT(5,TEast,Atlas_O_VZ_Soldier_AT_F,SERGEANT,15,-15)
					GROUP_UNIT(6,TEast,Atlas_O_VZ_soldier_F,CORPORAL,-15,-15)
					GROUP_UNIT(7,TEast,Atlas_O_VZ_soldier_F,PRIVATE,20,-20)
					GROUP_UNIT(8,TEast,Atlas_O_VZ_soldier_F,PRIVATE,-20,-20)
				};
				class O_VZ_MechInf_AA
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Mechanized_BUS_MechInf_AA0;
					side = TEast;
					faction = Atlas_OPF_W_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_mech_inf.paa";
					GROUP_UNIT(0,TEast,Atlas_O_VZ_APC_Wheeled_04_cannon_F,LIEUTENANT,0,0)
					GROUP_UNIT(1,TEast,Atlas_O_VZ_SL_F,SERGEANT,5,-5)
					GROUP_UNIT(2,TEast,Atlas_O_VZ_AR_F,CORPORAL,-5,-5)
					GROUP_UNIT(3,TEast,Atlas_O_VZ_Soldier_AA_F,PRIVATE,10,-10)
					GROUP_UNIT(4,TEast,Atlas_O_VZ_Soldier_AA_F,PRIVATE,-10,-10)
					GROUP_UNIT(5,TEast,Atlas_O_VZ_Soldier_AA_F,SERGEANT,15,-15)
					GROUP_UNIT(6,TEast,Atlas_O_VZ_soldier_F,CORPORAL,-15,-15)
					GROUP_UNIT(7,TEast,Atlas_O_VZ_soldier_F,PRIVATE,20,-20)
					GROUP_UNIT(8,TEast,Atlas_O_VZ_soldier_F,PRIVATE,-20,-20)
				};
			};
			class Armored
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Armored0;
				class O_VZ_TankPlatoon
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Armored_BUS_TankPlatoon0;
					side = TEast;
					faction = Atlas_OPF_W_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_armor.paa";
					GROUP_UNIT(0,TEast,Atlas_O_VZ_MBT_02_cannon_ghex_F,LIEUTENANT,0,0)
					GROUP_UNIT(1,TEast,Atlas_O_VZ_MBT_02_cannon_ghex_F,SERGEANT,10,-10)
					GROUP_UNIT(2,TEast,Atlas_O_VZ_MBT_02_cannon_ghex_F,SERGEANT,-10,-10)
					GROUP_UNIT(3,TEast,Atlas_O_VZ_MBT_02_cannon_ghex_F,CORPORAL,20,-20)
				};
				class O_VZ_TankSection
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Armored_BUS_TankSection0;
					side = TEast;
					faction = Atlas_OPF_W_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_armor.paa";
					GROUP_UNIT(0,TEast,Atlas_O_VZ_MBT_02_cannon_ghex_F,LIEUTENANT,0,0)
					GROUP_UNIT(1,TEast,Atlas_O_VZ_MBT_02_cannon_ghex_F,SERGEANT,10,-10)
				};
			};
		};*/
		class Atlas_OPF_T_F
		{
			name = $STR_A3_A_CfgFactionClasses_OPF_T_F1;
			class Infantry
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Infantry0;
				class O_C_InfSquad
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSquad0;
					side = TEast;
					faction = Atlas_OPF_T_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TEast,Atlas_O_T_soldier_SL_F,SERGEANT,0,0)
					GROUP_UNIT(1,TEast,Atlas_O_T_RadioOperator_F,PRIVATE,5,-5)
					GROUP_UNIT(2,TEast,Atlas_O_T_soldier_LAT_F,CORPORAL,-5,-5)
					GROUP_UNIT(3,TEast,Atlas_O_T_soldier_M_F,PRIVATE,10,-10)
					GROUP_UNIT(4,TEast,Atlas_O_T_soldier_TL_F,SERGEANT,-10,-10)
					GROUP_UNIT(5,TEast,Atlas_O_T_soldier_AR_F,CORPORAL,15,-15)
					GROUP_UNIT(6,TEast,Atlas_O_T_soldier_A_F,PRIVATE,-15,-15)
					GROUP_UNIT(7,TEast,Atlas_O_T_medic_F,PRIVATE,20,-20)
				};
				class O_C_InfSquad_Conscript
				{
					name = "Rifle Squad (Conscripts)";
					side = TEast;
					faction = Atlas_OPF_T_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TEast,Atlas_O_T_soldier_SL_conscript_F,CORPORAL,0,0)
					GROUP_UNIT(1,TEast,Atlas_O_T_soldier_2_conscript_F,PRIVATE,5,-5)
					GROUP_UNIT(2,TEast,Atlas_O_T_soldier_LAT_conscript_F,PRIVATE,-5,-5)
					GROUP_UNIT(3,TEast,Atlas_O_T_soldier_M_conscript_F,PRIVATE,10,-10)
					GROUP_UNIT(4,TEast,Atlas_O_T_soldier_TL_conscript_F,CORPORAL,-10,-10)
					GROUP_UNIT(5,TEast,Atlas_O_T_soldier_AR_conscript_F,PRIVATE,15,-15)
					GROUP_UNIT(6,TEast,Atlas_O_T_soldier_1_conscript_F,PRIVATE,-15,-15)
					GROUP_UNIT(7,TEast,Atlas_O_T_medic_conscript_F,PRIVATE,20,-20)
				};
				class O_C_InfSquad_Weapons
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSquad_Weapons0;
					side = TEast;
					faction = Atlas_OPF_T_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TEast,Atlas_O_T_soldier_SL_F,SERGEANT,0,0)
					GROUP_UNIT(1,TEast,Atlas_O_T_soldier_AR_F,PRIVATE,5,-5)
					GROUP_UNIT(2,TEast,Atlas_O_T_soldier_GL_F,CORPORAL,-5,-5)
					GROUP_UNIT(3,TEast,Atlas_O_T_soldier_M_F,PRIVATE,10,-10)
					GROUP_UNIT(4,TEast,Atlas_O_T_soldier_AT_F,PRIVATE,-10,-10)
					GROUP_UNIT(5,TEast,Atlas_O_T_soldier_F,PRIVATE,15,-15)
					GROUP_UNIT(6,TEast,Atlas_O_T_soldier_A_F,PRIVATE,-15,-15)
					GROUP_UNIT(7,TEast,Atlas_O_T_medic_F,PRIVATE,20,-20)
				};
				class O_C_InfTeam
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam0;
					side = TEast;
					faction = Atlas_OPF_T_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TEast,Atlas_O_T_soldier_TL_F,SERGEANT,0,0)
					GROUP_UNIT(1,TEast,Atlas_O_T_soldier_AR_F,CORPORAL,5,-5)
					GROUP_UNIT(2,TEast,Atlas_O_T_soldier_GL_F,PRIVATE,-5,-5)
					GROUP_UNIT(3,TEast,Atlas_O_T_soldier_LAT_F,PRIVATE,10,-10)
				};
				class O_C_InfTeam_AT
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam_AT0;
					side = TEast;
					faction = Atlas_OPF_T_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TEast,Atlas_O_T_soldier_TL_F,SERGEANT,0,0)
					GROUP_UNIT(1,TEast,Atlas_O_T_soldier_AT_F,CORPORAL,5,-5)
					GROUP_UNIT(2,TEast,Atlas_O_T_soldier_AT_F,PRIVATE,-5,-5)
					GROUP_UNIT(3,TEast,Atlas_O_T_soldier_F,PRIVATE,10,-10)
				};
				class O_C_InfTeam_AA
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam_AA0;
					side = TEast;
					faction = Atlas_OPF_T_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TEast,Atlas_O_T_soldier_TL_F,SERGEANT,0,0)
					GROUP_UNIT(1,TEast,Atlas_O_T_soldier_AA_F,CORPORAL,5,-5)
					GROUP_UNIT(2,TEast,Atlas_O_T_soldier_AA_F,PRIVATE,-5,-5)
					GROUP_UNIT(3,TEast,Atlas_O_T_soldier_F,PRIVATE,10,-10)
				};
				class O_C_InfSentry
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSentry0;
					side = TEast;
					faction = Atlas_OPF_T_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TEast,Atlas_O_T_soldier_GL_F,CORPORAL,0,0)
					GROUP_UNIT(1,TEast,Atlas_O_T_soldier_F,PRIVATE,5,-5)
				};
			};
			class Motorized
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Motorized0;
				class O_C_MotInf_Team
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_Team0;
					side = TEast;
					faction = Atlas_OPF_T_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_motor_inf.paa";
					GROUP_UNIT(0,TEast,Atlas_O_T_LSV_02_armed_F,SERGEANT,0,0)
					GROUP_UNIT(1,TEast,Atlas_O_T_soldier_AR_F,CORPORAL,5,-5)
					GROUP_UNIT(2,TEast,Atlas_O_T_soldier_LAT_F,PRIVATE,-5,-5)
				};
				class O_C_MotInf_AT
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_AT0;
					side = TEast;
					faction = Atlas_OPF_T_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_motor_inf.paa";
					GROUP_UNIT(0,TEast,Atlas_O_T_LSV_02_unarmed_F,SERGEANT,0,0)
					GROUP_UNIT(1,TEast,Atlas_O_T_soldier_AT_F,CORPORAL,5,-5)
					GROUP_UNIT(2,TEast,Atlas_O_T_soldier_AT_F,CORPORAL,-5,-5)
					GROUP_UNIT(3,TEast,Atlas_O_T_soldier_F,PRIVATE,0,-10)
				};
				class O_C_MotInf_AA
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_AA0;
					side = TEast;
					faction = Atlas_OPF_T_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_motor_inf.paa";
					GROUP_UNIT(0,TEast,Atlas_O_T_LSV_02_unarmed_F,SERGEANT,0,0)
					GROUP_UNIT(1,TEast,Atlas_O_T_soldier_AA_F,CORPORAL,5,-5)
					GROUP_UNIT(2,TEast,Atlas_O_T_soldier_AA_F,CORPORAL,-5,-5)
					GROUP_UNIT(3,TEast,Atlas_O_T_soldier_F,PRIVATE,0,-10)
				};
				class O_C_MotInf_Reinforcements
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_Reinforce0;
					side = TEast;
					faction = Atlas_OPF_T_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_motor_inf.paa";
					GROUP_UNIT(0,TEast,Atlas_O_T_Truck_02_transport_F,SERGEANT,0,0)
					GROUP_UNIT(1,TEast,Atlas_O_T_soldier_SL_F,SERGEANT,5,0)
					GROUP_UNIT(2,TEast,Atlas_O_T_RadioOperator_F,PRIVATE,5,-2)
					GROUP_UNIT(3,TEast,Atlas_O_T_soldier_LAT_F,CORPORAL,5,-4)
					GROUP_UNIT(4,TEast,Atlas_O_T_soldier_M_F,PRIVATE,5,-6)
					GROUP_UNIT(5,TEast,Atlas_O_T_soldier_TL_F,SERGEANT,5,-8)
					GROUP_UNIT(6,TEast,Atlas_O_T_soldier_AR_F,CORPORAL,5,-10)
					GROUP_UNIT(7,TEast,Atlas_O_T_soldier_A_F,PRIVATE,5,-12)
					GROUP_UNIT(8,TEast,Atlas_O_T_medic_F,PRIVATE,5,-14)
					GROUP_UNIT(9,TEast,Atlas_O_T_soldier_SL_F,SERGEANT,-5,0)
					GROUP_UNIT(10,TEast,Atlas_O_T_RadioOperator_F,PRIVATE,-5,-2)
					GROUP_UNIT(11,TEast,Atlas_O_T_soldier_LAT_F,CORPORAL,-5,-4)
					GROUP_UNIT(12,TEast,Atlas_O_T_soldier_M_F,PRIVATE,-5,-6)
					GROUP_UNIT(13,TEast,Atlas_O_T_soldier_TL_F,SERGEANT,-5,-8)
					GROUP_UNIT(14,TEast,Atlas_O_T_soldier_AR_F,CORPORAL,-5,-10)
					GROUP_UNIT(15,TEast,Atlas_O_T_soldier_A_F,PRIVATE,-5,-12)
					GROUP_UNIT(16,TEast,Atlas_O_T_medic_F,PRIVATE,-5,-14)
				};
			};
			class Mechanized
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Mechanized0;
				class O_C_MechInfSquad
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Mechanized_BUS_MechInfSquad0;
					side = TEast;
					faction = Atlas_OPF_T_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_mech_inf.paa";
					GROUP_UNIT(0,TEast,Atlas_O_T_APC_Wheeled_02_rcws_v2_F,LIEUTENANT,0,0)
					GROUP_UNIT(1,TEast,Atlas_O_T_soldier_SL_F,SERGEANT,5,-5)
					GROUP_UNIT(2,TEast,Atlas_O_T_RadioOperator_F,PRIVATE,-5,-5)
					GROUP_UNIT(3,TEast,Atlas_O_T_soldier_LAT_F,CORPORAL,10,-10)
					GROUP_UNIT(4,TEast,Atlas_O_T_soldier_M_F,PRIVATE,-10,-10)
					GROUP_UNIT(5,TEast,Atlas_O_T_soldier_TL_F,SERGEANT,15,-15)
					GROUP_UNIT(6,TEast,Atlas_O_T_soldier_AR_F,CORPORAL,-15,-15)
					GROUP_UNIT(7,TEast,Atlas_O_T_soldier_A_F,PRIVATE,20,-20)
					GROUP_UNIT(8,TEast,Atlas_O_T_medic_F,PRIVATE,-20,-20)
				};
				class O_C_MechInf_AT
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Mechanized_BUS_MechInf_AT0;
					side = TEast;
					faction = Atlas_OPF_T_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_mech_inf.paa";
					GROUP_UNIT(0,TEast,Atlas_O_T_APC_Tracked_02_cannon_F,LIEUTENANT,0,0)
					GROUP_UNIT(1,TEast,Atlas_O_T_soldier_SL_F,SERGEANT,5,-5)
					GROUP_UNIT(2,TEast,Atlas_O_T_soldier_AR_F,CORPORAL,-5,-5)
					GROUP_UNIT(3,TEast,Atlas_O_T_soldier_AT_F,PRIVATE,10,-10)
					GROUP_UNIT(4,TEast,Atlas_O_T_soldier_AT_F,PRIVATE,-10,-10)
					GROUP_UNIT(5,TEast,Atlas_O_T_soldier_AT_F,SERGEANT,15,-15)
					GROUP_UNIT(6,TEast,Atlas_O_T_soldier_F,CORPORAL,-15,-15)
					GROUP_UNIT(7,TEast,Atlas_O_T_soldier_F,PRIVATE,20,-20)
					GROUP_UNIT(8,TEast,Atlas_O_T_soldier_F,PRIVATE,-20,-20)
				};
				class O_C_MechInf_AA
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Mechanized_BUS_MechInf_AA0;
					side = TEast;
					faction = Atlas_OPF_T_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_mech_inf.paa";
					GROUP_UNIT(0,TEast,Atlas_O_T_APC_Tracked_02_cannon_F,LIEUTENANT,0,0)
					GROUP_UNIT(1,TEast,Atlas_O_T_soldier_SL_F,SERGEANT,5,-5)
					GROUP_UNIT(2,TEast,Atlas_O_T_soldier_AR_F,CORPORAL,-5,-5)
					GROUP_UNIT(3,TEast,Atlas_O_T_soldier_AA_F,PRIVATE,10,-10)
					GROUP_UNIT(4,TEast,Atlas_O_T_soldier_AA_F,PRIVATE,-10,-10)
					GROUP_UNIT(5,TEast,Atlas_O_T_soldier_AA_F,SERGEANT,15,-15)
					GROUP_UNIT(6,TEast,Atlas_O_T_soldier_F,CORPORAL,-15,-15)
					GROUP_UNIT(7,TEast,Atlas_O_T_soldier_F,PRIVATE,20,-20)
					GROUP_UNIT(8,TEast,Atlas_O_T_soldier_F,PRIVATE,-20,-20)
				};
			};
			class Armored
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Armored0;
				class O_C_TankPlatoon
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Armored_BUS_TankPlatoon0;
					side = TEast;
					faction = Atlas_OPF_T_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_armor.paa";
					GROUP_UNIT(0,TEast,Atlas_O_T_MBT_02_cannon_F,LIEUTENANT,0,0)
					GROUP_UNIT(1,TEast,Atlas_O_T_MBT_02_cannon_F,SERGEANT,10,-10)
					GROUP_UNIT(2,TEast,Atlas_O_T_MBT_02_cannon_F,SERGEANT,-10,-10)
					GROUP_UNIT(3,TEast,Atlas_O_T_MBT_02_cannon_F,CORPORAL,20,-20)
				};
				class O_C_TankSection
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Armored_BUS_TankSection0;
					side = TEast;
					faction = Atlas_OPF_T_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_armor.paa";
					GROUP_UNIT(0,TEast,Atlas_O_T_MBT_02_cannon_F,LIEUTENANT,0,0)
					GROUP_UNIT(1,TEast,Atlas_O_T_MBT_02_cannon_F,SERGEANT,10,-10)
				};
			};
		};
	};
	class Indep
	{
		name = $STR_A3_CfgGroups_Indep0;
		side = TGuerrila;
        /*
		class Atlas_IND_C_F
		{
			name = $STR_A3_A_CfgFactionClasses_IND_C_F0;
		};
        */
		class Atlas_IND_I_F
		{
			name = $STR_A3_A_CfgFactionClasses_IND_I_F0;
			class Infantry
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Infantry0;
				class I_I_InfSquad
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSquad0;
					side = TGuerrila;
					faction = Atlas_IND_I_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_inf.paa";
					GROUP_UNIT(0,TGuerrila,Atlas_I_I_soldier_SL_F,SERGEANT,0,0)
					GROUP_UNIT(1,TGuerrila,Atlas_I_I_RadioOperator_F,PRIVATE,5,-5)
					GROUP_UNIT(2,TGuerrila,Atlas_I_I_soldier_LAT_F,CORPORAL,-5,-5)
					GROUP_UNIT(3,TGuerrila,Atlas_I_I_soldier_M_F,PRIVATE,10,-10)
					GROUP_UNIT(4,TGuerrila,Atlas_I_I_soldier_TL_F,SERGEANT,-10,-10)
					GROUP_UNIT(5,TGuerrila,Atlas_I_I_soldier_AR_F,CORPORAL,15,-15)
					GROUP_UNIT(6,TGuerrila,Atlas_I_I_soldier_A_F,PRIVATE,-15,-15)
					GROUP_UNIT(7,TGuerrila,Atlas_I_I_medic_F,PRIVATE,20,-20)
				};
				class I_I_InfSquad_Weapons
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSquad_Weapons0;
					side = TGuerrila;
					faction = Atlas_IND_I_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_inf.paa";
					GROUP_UNIT(0,TGuerrila,Atlas_I_I_soldier_SL_F,SERGEANT,0,0)
					GROUP_UNIT(1,TGuerrila,Atlas_I_I_soldier_AR_F,PRIVATE,5,-5)
					GROUP_UNIT(2,TGuerrila,Atlas_I_I_soldier_GL_F,CORPORAL,-5,-5)
					GROUP_UNIT(3,TGuerrila,Atlas_I_I_soldier_M_F,PRIVATE,10,-10)
					GROUP_UNIT(4,TGuerrila,Atlas_I_I_soldier_AT_F,PRIVATE,-10,-10)
					GROUP_UNIT(5,TGuerrila,Atlas_I_I_soldier_F,PRIVATE,15,-15)
					GROUP_UNIT(6,TGuerrila,Atlas_I_I_soldier_A_F,PRIVATE,-15,-15)
					GROUP_UNIT(7,TGuerrila,Atlas_I_I_medic_F,PRIVATE,20,-20)
				};
				class I_I_InfTeam
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam0;
					side = TGuerrila;
					faction = Atlas_IND_I_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_inf.paa";
					GROUP_UNIT(0,TGuerrila,Atlas_I_I_soldier_TL_F,SERGEANT,0,0)
					GROUP_UNIT(1,TGuerrila,Atlas_I_I_soldier_AR_F,CORPORAL,5,-5)
					GROUP_UNIT(2,TGuerrila,Atlas_I_I_soldier_GL_F,PRIVATE,-5,-5)
					GROUP_UNIT(3,TGuerrila,Atlas_I_I_soldier_LAT_F,PRIVATE,10,-10)
				};
				class I_I_InfTeam_AT
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam_AT0;
					side = TGuerrila;
					faction = Atlas_IND_I_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_inf.paa";
					GROUP_UNIT(0,TGuerrila,Atlas_I_I_soldier_TL_F,SERGEANT,0,0)
					GROUP_UNIT(1,TGuerrila,Atlas_I_I_soldier_AT_F,CORPORAL,5,-5)
					GROUP_UNIT(2,TGuerrila,Atlas_I_I_soldier_AT_F,PRIVATE,-5,-5)
					GROUP_UNIT(3,TGuerrila,Atlas_I_I_soldier_F,PRIVATE,10,-10)
				};
				class I_I_InfTeam_AA
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam_AA0;
					side = TGuerrila;
					faction = Atlas_IND_I_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_inf.paa";
					GROUP_UNIT(0,TGuerrila,Atlas_I_I_soldier_TL_F,SERGEANT,0,0)
					GROUP_UNIT(1,TGuerrila,Atlas_I_I_soldier_AA_F,CORPORAL,5,-5)
					GROUP_UNIT(2,TGuerrila,Atlas_I_I_soldier_AA_F,PRIVATE,-5,-5)
					GROUP_UNIT(3,TGuerrila,Atlas_I_I_soldier_F,PRIVATE,10,-10)
				};
				class I_I_InfSentry
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSentry0;
					side = TGuerrila;
					faction = Atlas_IND_I_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_inf.paa";
					GROUP_UNIT(0,TGuerrila,Atlas_I_I_soldier_GL_F,CORPORAL,0,0)
					GROUP_UNIT(1,TGuerrila,Atlas_I_I_soldier_F,PRIVATE,5,-5)
				};
			};
			class SpecOps
			{
				name = $STR_A3_CfgGroups_West_BLU_F_SpecOps0;
				class I_I_ReconTeam
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_ReconTeam0;
					side = TGuerrila;
					faction = Atlas_IND_I_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_recon.paa";
					GROUP_UNIT(0,TGuerrila,Atlas_I_I_recon_TL_F,SERGEANT,0,0)
					GROUP_UNIT(1,TGuerrila,Atlas_I_I_recon_M_F,CORPORAL,5,-5)
					GROUP_UNIT(2,TGuerrila,Atlas_I_I_recon_medic_F,PRIVATE,-5,-5)
					GROUP_UNIT(3,TGuerrila,Atlas_I_I_recon_LAT_F,CORPORAL,10,-10)
					GROUP_UNIT(4,TGuerrila,Atlas_I_I_recon_JTAC_F,PRIVATE,-10,-10)
					GROUP_UNIT(5,TGuerrila,Atlas_I_I_recon_exp_F,PRIVATE,15,-15)
				};
				class I_I_ReconPatrol
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_ReconPatrol0;
					side = TGuerrila;
					faction = Atlas_IND_I_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_recon.paa";
					GROUP_UNIT(0,TGuerrila,Atlas_I_I_recon_TL_F,SERGEANT,0,0)
					GROUP_UNIT(1,TGuerrila,Atlas_I_I_recon_M_F,CORPORAL,5,-5)
					GROUP_UNIT(2,TGuerrila,Atlas_I_I_recon_medic_F,PRIVATE,-5,-5)
					GROUP_UNIT(3,TGuerrila,Atlas_I_I_recon_F,PRIVATE,10,-10)
				};
				class I_I_ReconSentry
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_ReconSentry0;
					side = TGuerrila;
					faction = Atlas_IND_I_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_recon.paa";
					GROUP_UNIT(0,TGuerrila,Atlas_I_I_recon_M_F,CORPORAL,0,0)
					GROUP_UNIT(1,TGuerrila,Atlas_I_I_recon_F,PRIVATE,5,-5)
				};
				class I_I_SniperTeam
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_SniperTeam0;
					side = TGuerrila;
					faction = Atlas_IND_I_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_recon.paa";
					GROUP_UNIT(0,TGuerrila,Atlas_I_I_spotter_F,SERGEANT,0,0)
					GROUP_UNIT(1,TGuerrila,Atlas_I_I_sniper_F,CORPORAL,5,-5)
				};
			};
			class Support
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Support0;
				class I_I_Support_CLS
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Support_BUS_Support_CLS0;
					side = TGuerrila;
					faction = Atlas_IND_I_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_inf.paa";
					GROUP_UNIT(0,TGuerrila,Atlas_I_I_soldier_TL_F,SERGEANT,0,0)
					GROUP_UNIT(1,TGuerrila,Atlas_I_I_soldier_AR_F,CORPORAL,5,-5)
					GROUP_UNIT(2,TGuerrila,Atlas_I_I_medic_F,PRIVATE,-5,-5)
					GROUP_UNIT(3,TGuerrila,Atlas_I_I_medic_F,PRIVATE,10,-10)
				};
				class I_I_Support_EOD
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Support_BUS_Support_EOD0;
					side = TGuerrila;
					faction = Atlas_IND_I_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_inf.paa";
					GROUP_UNIT(0,TGuerrila,Atlas_I_I_soldier_TL_F,SERGEANT,0,0)
					GROUP_UNIT(1,TGuerrila,Atlas_I_I_engineer_F,CORPORAL,5,-5)
					GROUP_UNIT(2,TGuerrila,Atlas_I_I_soldier_exp_F,PRIVATE,-5,-5)
					GROUP_UNIT(3,TGuerrila,Atlas_I_I_soldier_exp_F,PRIVATE,10,-10)
				};
				class I_I_Support_ENG
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Support_BUS_Support_ENG0;
					side = TGuerrila;
					faction = Atlas_IND_I_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_inf.paa";
					GROUP_UNIT(0,TGuerrila,Atlas_I_I_soldier_TL_F,SERGEANT,0,0)
					GROUP_UNIT(1,TGuerrila,Atlas_I_I_engineer_F,CORPORAL,5,-5)
					GROUP_UNIT(2,TGuerrila,Atlas_I_I_engineer_F,PRIVATE,-5,-5)
					GROUP_UNIT(3,TGuerrila,Atlas_I_I_soldier_repair_F,PRIVATE,10,-10)
				};
				class I_I_Recon_EOD
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Support_BUS_Recon_EOD0;
					side = TGuerrila;
					faction = Atlas_IND_I_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_inf.paa";
					GROUP_UNIT(0,TGuerrila,Atlas_I_I_recon_TL_F,SERGEANT,0,0)
					GROUP_UNIT(1,TGuerrila,Atlas_I_I_recon_exp_F,CORPORAL,5,-5)
					GROUP_UNIT(2,TGuerrila,Atlas_I_I_recon_exp_F,PRIVATE,-5,-5)
					GROUP_UNIT(3,TGuerrila,Atlas_I_I_recon_F,PRIVATE,10,-10)
				};
				class I_I_Support_MG
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Support_BUS_Support_MG0;
					side = TGuerrila;
					faction = Atlas_IND_I_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_inf.paa";
					GROUP_UNIT(0,TGuerrila,Atlas_I_I_soldier_TL_F,SERGEANT,0,0)
					GROUP_UNIT(1,TGuerrila,Atlas_I_I_support_MG_F,CORPORAL,5,-5)
					GROUP_UNIT(2,TGuerrila,Atlas_I_I_support_AMG_F,PRIVATE,-5,-5)
				};
				class I_I_Support_GMG
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Support_BUS_Support_GMG0;
					side = TGuerrila;
					faction = Atlas_IND_I_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_inf.paa";
					GROUP_UNIT(0,TGuerrila,Atlas_I_I_soldier_TL_F,SERGEANT,0,0)
					GROUP_UNIT(1,TGuerrila,Atlas_I_I_support_GMG_F,CORPORAL,5,-5)
					GROUP_UNIT(2,TGuerrila,Atlas_I_I_support_AMG_F,PRIVATE,-5,-5)
				};
				class I_I_Support_Mort
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Support_BUS_Support_Mort0;
					side = TGuerrila;
					faction = Atlas_IND_I_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_mortar.paa";
					GROUP_UNIT(0,TGuerrila,Atlas_I_I_soldier_TL_F,SERGEANT,0,0)
					GROUP_UNIT(1,TGuerrila,Atlas_I_I_support_Mort_F,CORPORAL,5,-5)
					GROUP_UNIT(2,TGuerrila,Atlas_I_I_support_AMort_F,PRIVATE,-5,-5)
				};
			};
			class Motorized
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Motorized0;
				class I_I_MotInf_Team
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_Team0;
					side = TGuerrila;
					faction = Atlas_IND_I_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_motor_inf.paa";
					GROUP_UNIT(0,TGuerrila,Atlas_I_I_MRAP_01_gmg_F,SERGEANT,0,0)
					GROUP_UNIT(1,TGuerrila,Atlas_I_I_soldier_AR_F,CORPORAL,5,-5)
					GROUP_UNIT(2,TGuerrila,Atlas_I_I_soldier_LAT_F,PRIVATE,-5,-5)
				};
				class I_I_MotInf_AT
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_AT0;
					side = TGuerrila;
					faction = Atlas_IND_I_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_motor_inf.paa";
					GROUP_UNIT(0,TGuerrila,Atlas_I_I_MRAP_01_F,SERGEANT,0,0)
					GROUP_UNIT(1,TGuerrila,Atlas_I_I_soldier_AT_F,CORPORAL,5,-5)
					GROUP_UNIT(2,TGuerrila,Atlas_I_I_soldier_AT_F,CORPORAL,-5,-5)
					GROUP_UNIT(3,TGuerrila,Atlas_I_I_soldier_AAT_F,PRIVATE,0,-10)
				};
				class I_I_MotInf_AA
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_AA0;
					side = TGuerrila;
					faction = Atlas_IND_I_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_motor_inf.paa";
					GROUP_UNIT(0,TGuerrila,Atlas_I_I_MRAP_01_F,SERGEANT,0,0)
					GROUP_UNIT(1,TGuerrila,Atlas_I_I_soldier_AA_F,CORPORAL,5,-5)
					GROUP_UNIT(2,TGuerrila,Atlas_I_I_soldier_AA_F,CORPORAL,-5,-5)
					GROUP_UNIT(3,TGuerrila,Atlas_I_I_soldier_AAA_F,PRIVATE,0,-10)
				};
				class I_I_MotInf_MGTeam
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_MGTeam0;
					side = TGuerrila;
					faction = Atlas_IND_I_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_motor_inf.paa";
					GROUP_UNIT(0,TGuerrila,Atlas_I_I_MRAP_01_F,SERGEANT,0,0)
					GROUP_UNIT(1,TGuerrila,Atlas_I_I_soldier_TL_F,SERGEANT,5,-5)
					GROUP_UNIT(2,TGuerrila,Atlas_I_I_support_MG_F,CORPORAL,-5,-5)
					GROUP_UNIT(3,TGuerrila,Atlas_I_I_support_AMG_F,PRIVATE,0,-10)
				};
				class I_I_MotInf_GMGTeam
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_GMGTeam0;
					side = TGuerrila;
					faction = Atlas_IND_I_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_motor_inf.paa";
					GROUP_UNIT(0,TGuerrila,Atlas_I_I_MRAP_01_F,SERGEANT,0,0)
					GROUP_UNIT(1,TGuerrila,Atlas_I_I_soldier_TL_F,SERGEANT,5,-5)
					GROUP_UNIT(2,TGuerrila,Atlas_I_I_support_GMG_F,CORPORAL,-5,-5)
					GROUP_UNIT(3,TGuerrila,Atlas_I_I_support_AMG_F,PRIVATE,0,-10)
				};
				class I_I_MotInf_MortTeam
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_MortTeam0;
					side = TGuerrila;
					faction = Atlas_IND_I_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_motor_inf.paa";
					GROUP_UNIT(0,TGuerrila,Atlas_I_I_MRAP_01_F,SERGEANT,0,0)
					GROUP_UNIT(1,TGuerrila,Atlas_I_I_soldier_TL_F,SERGEANT,5,-5)
					GROUP_UNIT(2,TGuerrila,Atlas_I_I_support_Mort_F,CORPORAL,-5,-5)
					GROUP_UNIT(3,TGuerrila,Atlas_I_I_support_AMort_F,PRIVATE,0,-10)
				};
				class I_I_MotInf_Reinforcements
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_Reinforce0;
					side = TGuerrila;
					faction = Atlas_IND_I_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_motor_inf.paa";
					GROUP_UNIT(0,TGuerrila,Atlas_I_I_Truck_01_transport_F,SERGEANT,0,0)
					GROUP_UNIT(1,TGuerrila,Atlas_I_I_soldier_SL_F,SERGEANT,5,0)
					GROUP_UNIT(2,TGuerrila,Atlas_I_I_RadioOperator_F,PRIVATE,5,-2)
					GROUP_UNIT(3,TGuerrila,Atlas_I_I_soldier_LAT_F,CORPORAL,5,-4)
					GROUP_UNIT(4,TGuerrila,Atlas_I_I_soldier_M_F,PRIVATE,5,-6)
					GROUP_UNIT(5,TGuerrila,Atlas_I_I_soldier_TL_F,SERGEANT,5,-8)
					GROUP_UNIT(6,TGuerrila,Atlas_I_I_soldier_AR_F,CORPORAL,5,-10)
					GROUP_UNIT(7,TGuerrila,Atlas_I_I_soldier_A_F,PRIVATE,5,-12)
					GROUP_UNIT(8,TGuerrila,Atlas_I_I_medic_F,PRIVATE,5,-14)
					GROUP_UNIT(9,TGuerrila,Atlas_I_I_soldier_SL_F,SERGEANT,-5,0)
					GROUP_UNIT(10,TGuerrila,Atlas_I_I_RadioOperator_F,PRIVATE,-5,-2)
					GROUP_UNIT(11,TGuerrila,Atlas_I_I_soldier_LAT_F,CORPORAL,-5,-4)
					GROUP_UNIT(12,TGuerrila,Atlas_I_I_soldier_M_F,PRIVATE,-5,-6)
					GROUP_UNIT(13,TGuerrila,Atlas_I_I_soldier_TL_F,SERGEANT,-5,-8)
					GROUP_UNIT(14,TGuerrila,Atlas_I_I_soldier_AR_F,CORPORAL,-5,-10)
					GROUP_UNIT(15,TGuerrila,Atlas_I_I_soldier_A_F,PRIVATE,-5,-12)
					GROUP_UNIT(16,TGuerrila,Atlas_I_I_medic_F,PRIVATE,-5,-14)
				};
			};
			class Mechanized
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Mechanized0;
				class I_I_MechInfSquad
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Mechanized_BUS_MechInfSquad0;
					side = TGuerrila;
					faction = Atlas_IND_I_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_mech_inf.paa";
					GROUP_UNIT(0,TGuerrila,Atlas_I_I_APC_Tracked_01_rcws_F,LIEUTENANT,0,0)
					GROUP_UNIT(1,TGuerrila,Atlas_I_I_soldier_SL_F,SERGEANT,5,-5)
					GROUP_UNIT(2,TGuerrila,Atlas_I_I_RadioOperator_F,PRIVATE,-5,-5)
					GROUP_UNIT(3,TGuerrila,Atlas_I_I_soldier_LAT_F,CORPORAL,10,-10)
					GROUP_UNIT(4,TGuerrila,Atlas_I_I_soldier_M_F,PRIVATE,-10,-10)
					GROUP_UNIT(5,TGuerrila,Atlas_I_I_soldier_TL_F,SERGEANT,15,-15)
					GROUP_UNIT(6,TGuerrila,Atlas_I_I_soldier_AR_F,CORPORAL,-15,-15)
					GROUP_UNIT(7,TGuerrila,Atlas_I_I_soldier_A_F,PRIVATE,20,-20)
					GROUP_UNIT(8,TGuerrila,Atlas_I_I_medic_F,PRIVATE,-20,-20)
				};
				class I_I_MechInf_AT
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Mechanized_BUS_MechInf_AT0;
					side = TGuerrila;
					faction = Atlas_IND_I_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_mech_inf.paa";
					GROUP_UNIT(0,TGuerrila,Atlas_I_I_APC_Tracked_01_rcws_F,LIEUTENANT,0,0)
					GROUP_UNIT(1,TGuerrila,Atlas_I_I_soldier_SL_F,SERGEANT,5,-5)
					GROUP_UNIT(2,TGuerrila,Atlas_I_I_soldier_AR_F,CORPORAL,-5,-5)
					GROUP_UNIT(3,TGuerrila,Atlas_I_I_soldier_AT_F,PRIVATE,10,-10)
					GROUP_UNIT(4,TGuerrila,Atlas_I_I_soldier_AT_F,PRIVATE,-10,-10)
					GROUP_UNIT(5,TGuerrila,Atlas_I_I_soldier_AT_F,SERGEANT,15,-15)
					GROUP_UNIT(6,TGuerrila,Atlas_I_I_soldier_AAT_F,CORPORAL,-15,-15)
					GROUP_UNIT(7,TGuerrila,Atlas_I_I_soldier_AAT_F,PRIVATE,20,-20)
					GROUP_UNIT(8,TGuerrila,Atlas_I_I_soldier_AAT_F,PRIVATE,-20,-20)
				};
				class I_I_MechInf_AA
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Mechanized_BUS_MechInf_AA0;
					side = TGuerrila;
					faction = Atlas_IND_I_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_mech_inf.paa";
					GROUP_UNIT(0,TGuerrila,Atlas_I_I_APC_Tracked_01_rcws_F,LIEUTENANT,0,0)
					GROUP_UNIT(1,TGuerrila,Atlas_I_I_soldier_SL_F,SERGEANT,5,-5)
					GROUP_UNIT(2,TGuerrila,Atlas_I_I_soldier_AR_F,CORPORAL,-5,-5)
					GROUP_UNIT(3,TGuerrila,Atlas_I_I_soldier_AA_F,PRIVATE,10,-10)
					GROUP_UNIT(4,TGuerrila,Atlas_I_I_soldier_AA_F,PRIVATE,-10,-10)
					GROUP_UNIT(5,TGuerrila,Atlas_I_I_soldier_AA_F,SERGEANT,15,-15)
					GROUP_UNIT(6,TGuerrila,Atlas_I_I_soldier_AAA_F,CORPORAL,-15,-15)
					GROUP_UNIT(7,TGuerrila,Atlas_I_I_soldier_AAA_F,PRIVATE,20,-20)
					GROUP_UNIT(8,TGuerrila,Atlas_I_I_soldier_AAA_F,PRIVATE,-20,-20)
				};
				class I_I_MechInf_Support
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Mechanized_BUS_MechInf_Support0;
					side = TGuerrila;
					faction = Atlas_IND_I_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_mech_inf.paa";
					GROUP_UNIT(0,TGuerrila,Atlas_I_I_APC_Tracked_01_rcws_F,LIEUTENANT,0,0)
					GROUP_UNIT(1,TGuerrila,Atlas_I_I_soldier_SL_F,SERGEANT,5,-5)
					GROUP_UNIT(2,TGuerrila,Atlas_I_I_soldier_TL_F,SERGEANT,-5,-5)
					GROUP_UNIT(3,TGuerrila,Atlas_I_I_soldier_repair_F,CORPORAL,10,-10)
					GROUP_UNIT(4,TGuerrila,Atlas_I_I_engineer_F,PRIVATE,-10,-10)
					GROUP_UNIT(5,TGuerrila,Atlas_I_I_medic_F,PRIVATE,15,-15)
					GROUP_UNIT(6,TGuerrila,Atlas_I_I_soldier_AR_F,CORPORAL,-15,-15)
					GROUP_UNIT(7,TGuerrila,Atlas_I_I_soldier_exp_F,PRIVATE,20,-20)
					GROUP_UNIT(8,TGuerrila,Atlas_I_I_soldier_A_F,PRIVATE,-20,-20)
				};
			};
			class Armored
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Armored0;
				class I_I_TankPlatoon
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Armored_BUS_TankPlatoon0;
					side = TGuerrila;
					faction = Atlas_IND_I_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_armor.paa";
					GROUP_UNIT(0,TGuerrila,Atlas_I_I_MBT_01_cannon_F,LIEUTENANT,0,0)
					GROUP_UNIT(1,TGuerrila,Atlas_I_I_MBT_01_cannon_F,SERGEANT,10,-10)
					GROUP_UNIT(2,TGuerrila,Atlas_I_I_MBT_01_cannon_F,SERGEANT,-10,-10)
					GROUP_UNIT(3,TGuerrila,Atlas_I_I_MBT_01_cannon_F,CORPORAL,20,-20)
				};
				class I_I_TankPlatoon_AA
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Armored_BUS_TankPlatoon_AA0;
					side = TGuerrila;
					faction = Atlas_IND_I_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_armor.paa";
					GROUP_UNIT(0,TGuerrila,Atlas_I_I_MBT_01_cannon_F,LIEUTENANT,0,0)
					GROUP_UNIT(1,TGuerrila,Atlas_I_I_APC_Tracked_01_aa_F,SERGEANT,10,-10)
					GROUP_UNIT(2,TGuerrila,Atlas_I_I_MBT_01_cannon_F,SERGEANT,-10,-10)
					GROUP_UNIT(3,TGuerrila,Atlas_I_I_APC_Tracked_01_aa_F,CORPORAL,20,-20)
				};
				class I_I_TankSection
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Armored_BUS_TankSection0;
					side = TGuerrila;
					faction = Atlas_IND_I_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_armor.paa";
					GROUP_UNIT(0,TGuerrila,Atlas_I_I_MBT_01_cannon_F,LIEUTENANT,0,0)
					GROUP_UNIT(1,TGuerrila,Atlas_I_I_MBT_01_cannon_F,SERGEANT,10,-10)
				};
				class I_I_SPGPlatoon_Scorcher
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Armored_BUS_SPGPlatoon_Scorcher0;
					side = TGuerrila;
					faction = Atlas_IND_I_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_art.paa";
					GROUP_UNIT(0,TGuerrila,Atlas_I_I_MBT_01_arty_F,LIEUTENANT,0,0)
					GROUP_UNIT(1,TGuerrila,Atlas_I_I_MBT_01_arty_F,SERGEANT,10,-10)
					GROUP_UNIT(2,TGuerrila,Atlas_I_I_MBT_01_arty_F,SERGEANT,-10,-10)
					GROUP_UNIT(3,TGuerrila,Atlas_I_I_MBT_01_arty_F,CORPORAL,20,-20)
				};
				class I_I_SPGSection_Scorcher
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Armored_BUS_SPGSection_Scorcher0;
					side = TGuerrila;
					faction = Atlas_IND_I_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_art.paa";
					GROUP_UNIT(0,TGuerrila,Atlas_I_I_MBT_01_arty_F,LIEUTENANT,0,0)
					GROUP_UNIT(1,TGuerrila,Atlas_I_I_MBT_01_arty_F,SERGEANT,10,-10)
				};
			};
		};
        
		class Atlas_IND_UNO_F
		{
			name = $STR_A3_A_CfgFactionClasses_IND_UNO_F0;
			class Infantry
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Infantry0;
				class Atlas_I_UNO_InfSquad
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_UNO_InfSquad0;
					side = TGuerrila;
					faction = Atlas_IND_UNO_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_inf.paa";
					GROUP_UNIT(0,TGuerrila,Atlas_I_UNO_soldier_SL_F,SERGEANT,0,0)
					GROUP_UNIT(1,TGuerrila,Atlas_I_UNO_RadioOperator_F,PRIVATE,5,-5)
					GROUP_UNIT(2,TGuerrila,Atlas_I_UNO_Soldier_LAT_F,CORPORAL,-5,-5)
					GROUP_UNIT(3,TGuerrila,Atlas_I_UNO_Soldier_M_F,PRIVATE,10,-10)
					GROUP_UNIT(4,TGuerrila,Atlas_I_UNO_Soldier_TL_F,SERGEANT,-10,-10)
					GROUP_UNIT(5,TGuerrila,Atlas_I_UNO_Soldier_AR_F,CORPORAL,15,-15)
					GROUP_UNIT(6,TGuerrila,Atlas_I_UNO_Soldier_A_F,PRIVATE,-15,-15)
					GROUP_UNIT(7,TGuerrila,Atlas_I_UNO_Medic_F,PRIVATE,20,-20)
				};
				class Atlas_I_UNO_InfTeam
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_UNO_InfTeam0;
					side = TGuerrila;
					faction = Atlas_IND_UNO_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_inf.paa";
					GROUP_UNIT(0,TGuerrila,Atlas_I_UNO_Soldier_TL_F,SERGEANT,0,0)
					GROUP_UNIT(1,TGuerrila,Atlas_I_UNO_Soldier_AR_F,CORPORAL,5,-5)
					GROUP_UNIT(2,TGuerrila,Atlas_I_UNO_Soldier_GL_F,PRIVATE,-5,-5)
					GROUP_UNIT(3,TGuerrila,Atlas_I_UNO_Soldier_LAT_F,PRIVATE,10,-10)
				};
			};
		};

		class Atlas_IND_UNO_wdl_F
		{
			name = $STR_A3_A_CfgFactionClasses_IND_UNO_wdl_F0;
			class Infantry
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Infantry0;
				class Atlas_I_UNO_wdl_InfSquad
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_UNO_InfSquad0;
					side = TGuerrila;
					faction = Atlas_IND_UNO_wdl_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_inf.paa";
					GROUP_UNIT(0,TGuerrila,Atlas_I_UNO_wdl_soldier_SL_F,SERGEANT,0,0)
					GROUP_UNIT(1,TGuerrila,Atlas_I_UNO_wdl_RadioOperator_F,PRIVATE,5,-5)
					GROUP_UNIT(2,TGuerrila,Atlas_I_UNO_wdl_Soldier_LAT_F,CORPORAL,-5,-5)
					GROUP_UNIT(3,TGuerrila,Atlas_I_UNO_wdl_Soldier_M_F,PRIVATE,10,-10)
					GROUP_UNIT(4,TGuerrila,Atlas_I_UNO_wdl_Soldier_TL_F,SERGEANT,-10,-10)
					GROUP_UNIT(5,TGuerrila,Atlas_I_UNO_wdl_Soldier_AR_F,CORPORAL,15,-15)
					GROUP_UNIT(6,TGuerrila,Atlas_I_UNO_wdl_Soldier_A_F,PRIVATE,-15,-15)
					GROUP_UNIT(7,TGuerrila,Atlas_I_UNO_wdl_Medic_F,PRIVATE,20,-20)
				};
				class Atlas_I_UNO_wdl_InfTeam
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_UNO_InfTeam0;
					side = TGuerrila;
					faction = Atlas_IND_UNO_wdl_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_inf.paa";
					GROUP_UNIT(0,TGuerrila,Atlas_I_UNO_wdl_Soldier_TL_F,SERGEANT,0,0)
					GROUP_UNIT(1,TGuerrila,Atlas_I_UNO_wdl_Soldier_AR_F,CORPORAL,5,-5)
					GROUP_UNIT(2,TGuerrila,Atlas_I_UNO_wdl_Soldier_GL_F,PRIVATE,-5,-5)
					GROUP_UNIT(3,TGuerrila,Atlas_I_UNO_wdl_Soldier_LAT_F,PRIVATE,10,-10)
				};
			};
		};
		class IND_E_F
		{
			name = $STR_A3_C_CfgFactionClasses_IND_E_F0;
			class ReserveInfantry
			{
				name = $STR_A3_Atlas_CfgGroups_West_BLU_EAF_F_ResInfantry0;
				class Atlas_I_E_ReservistSquad
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSquad0;
					side = TGuerrila;
					faction = IND_E_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TGuerrila,Atlas_I_E_Reservist_SL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TGuerrila,Atlas_I_E_Reservist_F,PRIVATE,5,-5);
					GROUP_UNIT(2,TGuerrila,Atlas_I_E_Reservist_AT_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TGuerrila,Atlas_I_E_Reservist_M_F,PRIVATE,10,-10);
					GROUP_UNIT(4,TGuerrila,Atlas_I_E_Reservist_TL_F,SERGEANT,-10,-10);
					GROUP_UNIT(5,TGuerrila,Atlas_I_E_Reservist_AR_F,CORPORAL,15,-15);
					GROUP_UNIT(6,TGuerrila,Atlas_I_E_Reservist_A_F,PRIVATE,-15,-15);
					GROUP_UNIT(7,TGuerrila,Atlas_I_E_Reservist_Medic_F,PRIVATE,20,-20);
				};
				class Atlas_I_E_ReservistTeam
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam0;
					side = TGuerrila;
					faction = IND_E_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TGuerrila,Atlas_I_E_Reservist_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TGuerrila,Atlas_I_E_Reservist_AR_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TGuerrila,Atlas_I_E_Reservist_GL_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TGuerrila,Atlas_I_E_Reservist_AT_F,PRIVATE,10,-10);
				};
				class Atlas_I_E_ReservistSentry
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSentry0;
					side = TGuerrila;
					faction = IND_E_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TGuerrila,Atlas_I_E_Reservist_GL_F,CORPORAL,0,0);
					GROUP_UNIT(1,TGuerrila,Atlas_I_E_Reservist_F,PRIVATE,5,-5);
				};
			};
		};
	};
};