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
		class Atlas_BLU_H_F
		{
			name = $STR_A3_A_CfgFactionClasses_BLU_H_F0;
			class Motorized
			{
				class Atlas_B_H_MotInf_AT
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_AT0;
					side = TWest;
					faction = Atlas_BLU_H_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_motor_inf.paa";
					GROUP_UNIT(0,TWest,Atlas_B_H_Pickup_AT_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,Atlas_B_H_Soldier_LAT_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,Atlas_B_H_Soldier_F,PRIVATE,-5,-5);
				};
				class  Atlas_B_H_MotInf_AA
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_AA0;
					side = TWest;
					faction = Atlas_BLU_H_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_motor_inf.paa";
					GROUP_UNIT(0,TWest,Atlas_B_H_Pickup_aat_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,Atlas_B_H_Soldier_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,Atlas_B_H_Soldier_F,PRIVATE,-5,-5);
				};
				class Atlas_B_H_MotInf_MortTeam
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_MortTeam0;
					side = TWest;
					faction = Atlas_BLU_H_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_motor_inf.paa";
					GROUP_UNIT(0,TWest,Atlas_B_H_Pickup_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,Atlas_B_H_Soldier_TL_F,SERGEANT,5,-5);
					GROUP_UNIT(2,TWest,Atlas_B_H_Support_CMort_RF,CORPORAL,-5,-5);
					GROUP_UNIT(3,TWest,Atlas_B_H_Support_CMort_RF,PRIVATE,10,-10);
				};
			};
			class Support
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Support0;
				class Atlas_B_H_Support_Mort
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Support_BUS_Support_Mort0;
					side = TWest;
					faction = Atlas_BLU_H_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_mortar.paa";
					GROUP_UNIT(0,TWest,Atlas_B_H_Soldier_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,Atlas_B_H_Support_CMort_RF,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,Atlas_B_H_Support_CMort_RF,PRIVATE,-5,-5);
				};
			};
		};
		class Atlas_BLU_K_F
		{
			name = $STR_A3_A_CfgFactionClasses_BLU_K_F0;
			class Motorized
			{
				class  Atlas_B_K_MotInf_AA
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_AA0;
					side = TWest;
					faction = Atlas_BLU_K_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_motor_inf.paa";
					GROUP_UNIT(0,TWest,Atlas_B_K_Pickup_aat_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,Atlas_B_K_Soldier_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,Atlas_B_K_Soldier_F,PRIVATE,-5,-5);
				};
				class Atlas_B_K_MotInf_MortTeam
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_MortTeam0;
					side = TWest;
					faction = Atlas_BLU_K_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_motor_inf.paa";
					GROUP_UNIT(0,TWest,Atlas_B_K_Pickup_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,Atlas_B_K_Soldier_TL_F,SERGEANT,5,-5);
					GROUP_UNIT(2,TWest,Atlas_B_K_Support_CMort_RF,CORPORAL,-5,-5);
					GROUP_UNIT(3,TWest,Atlas_B_K_Support_CMort_RF,PRIVATE,10,-10);
				};
			};
			class Support
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Support0;
				class Atlas_B_K_Support_Mort
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Support_BUS_Support_Mort0;
					side = TWest;
					faction = Atlas_BLU_K_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_mortar.paa";
					GROUP_UNIT(0,TWest,Atlas_B_K_Soldier_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,Atlas_B_K_Support_CMort_RF,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,Atlas_B_K_Support_CMort_RF,PRIVATE,-5,-5);
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
			class SpecOps
			{
				name = $STR_A3_CfgGroups_West_BLU_F_SpecOps0;
				class Atlas_I_PathfinderSquad
				{
					name = $STR_A3_CfgGroups_IND_F_Pathfinder_Squad0;
					side = TGuerrila;
					faction = IND_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TGuerrila,Atlas_I_Pathfinder_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TGuerrila,Atlas_I_Pathfinder_M_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TGuerrila,Atlas_I_Pathfinder_medic_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TGuerrila,Atlas_I_Pathfinder_F,PRIVATE,10,-10);
					GROUP_UNIT(4,TGuerrila,Atlas_I_Pathfinder_AT_F,PRIVATE,-10,-10);
					GROUP_UNIT(5,TGuerrila,Atlas_I_Pathfinder_RadioOperator_F,PRIVATE,15,-15);
					GROUP_UNIT(6,TGuerrila,Atlas_I_Pathfinder_exp_F,PRIVATE,-15,-15);
					GROUP_UNIT(7,TGuerrila,Atlas_I_Pathfinder_AR_F,CORPORAL,20,-20);
				};
				class Atlas_I_PathfinderTeam
				{
					name = $STR_A3_CfgGroups_IND_F_Pathfinder_Team0;
					side = TGuerrila;
					faction = IND_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TGuerrila,Atlas_I_Pathfinder_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TGuerrila,Atlas_I_Pathfinder_M_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TGuerrila,Atlas_I_Pathfinder_medic_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TGuerrila,Atlas_I_Pathfinder_AT_F,CORPORAL,10,-10);
					GROUP_UNIT(4,TGuerrila,Atlas_I_Pathfinder_RadioOperator_F,PRIVATE,-10,-10);
					GROUP_UNIT(5,TGuerrila,Atlas_I_Pathfinder_exp_F,PRIVATE,15,-15);
				};
				class Atlas_I_PathfinderPatrol
				{
					name = $STR_A3_CfgGroups_IND_F_Pathfinder_Patrol0;
					side = TGuerrila;
					faction = IND_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TGuerrila,Atlas_I_Pathfinder_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TGuerrila,Atlas_I_Pathfinder_M_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TGuerrila,Atlas_I_Pathfinder_medic_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TGuerrila,Atlas_I_Pathfinder_F,PRIVATE,10,-10);
				};
				class Atlas_I_PathfinderSentry
				{
					name = $STR_A3_CfgGroups_IND_F_Pathfinder_Sentry0;
					side = TGuerrila;
					faction = IND_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TGuerrila,Atlas_I_Pathfinder_M_F,CORPORAL,0,0);
					GROUP_UNIT(1,TGuerrila,Atlas_I_Pathfinder_F,PRIVATE,5,-5);
				};
			};
		};
	};
};