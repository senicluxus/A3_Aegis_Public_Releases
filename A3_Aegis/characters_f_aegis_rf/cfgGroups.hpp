class CfgGroups
{
    /* Definitions */
    #include "\A3_Aegis\macros_groups.hpp"
	class West
	{
		class BLU_T_F
		{
			class Support
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Support0;
				class B_T_Support_Mort_RF
				{
					name = $STR_LXRF_CfgGroups_LightMortar;
					side = TWest;
					faction = BLU_T_F;
					icon = "\A3\ui_f\data\map\markers\nato\n_mortar.paa";
					GROUP_UNIT(0,TWest,B_T_soldier_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,Aegis_B_T_Support_CMort_RF,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,Aegis_B_T_Support_CMort_RF,PRIVATE,-5,-5);
				};
			};
		};
		class BLU_W_F
		{
			class Support
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Support0;
				class B_W_Support_Mort_RF
				{
					name = $STR_LXRF_CfgGroups_LightMortar;
					side = TWest;
					faction = BLU_W_F;
					icon = "\A3\ui_f\data\map\markers\nato\n_mortar.paa";
					GROUP_UNIT(0,TWest,B_W_soldier_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,Aegis_B_W_Support_CMort_RF,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,Aegis_B_W_Support_CMort_RF,PRIVATE,-5,-5);
				};
			};
		};
		class BLU_NATO_lxWS
		{
			class Support
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Support0;
				class B_D_Support_Mort_RF
				{
					name = $STR_LXRF_CfgGroups_LightMortar;
					side = TWest;
					faction = BLU_NATO_lxWS;
					icon = "\A3\ui_f\data\map\markers\nato\n_mortar.paa";
					GROUP_UNIT(0,TWest,B_D_soldier_TL_lxWS,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,Aegis_B_D_Support_CMort_RF,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,Aegis_B_D_Support_CMort_RF,PRIVATE,-5,-5);
				};
			};
		};
		class BLU_A_F
		{
			class Support
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Support0;
				class B_A_Support_Mort_RF
				{
					name = $STR_LXRF_CfgGroups_LightMortar;
					side = TWest;
					faction = BLU_A_F;
					icon = "\A3\ui_f\data\map\markers\nato\n_mortar.paa";
					GROUP_UNIT(0,TWest,B_A_soldier_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,Aegis_B_A_Support_CMort_RF,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,Aegis_B_A_Support_CMort_RF,PRIVATE,-5,-5);
				};
			};
		};
		class BLU_A_tna_F
		{
			class Support
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Support0;
				class B_A_Support_Mort_tna_RF
				{
					name = $STR_LXRF_CfgGroups_LightMortar;
					side = TWest;
					faction = BLU_A_tna_F;
					icon = "\A3\ui_f\data\map\markers\nato\n_mortar.paa";
					GROUP_UNIT(0,TWest,B_A_soldier_TL_tna_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,Aegis_B_A_Support_CMort_tna_RF,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,Aegis_B_A_Support_CMort_tna_RF,PRIVATE,-5,-5);
				};
			};
		};
		class BLU_A_wdl_F
		{
			class Support
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Support0;
				class B_A_Support_Mort_wdl_RF
				{
					name = $STR_LXRF_CfgGroups_LightMortar;
					side = TWest;
					faction = BLU_A_wdl_F;
					icon = "\A3\ui_f\data\map\markers\nato\n_mortar.paa";
					GROUP_UNIT(0,TWest,B_A_soldier_TL_wdl_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,Aegis_B_A_Support_CMort_wdl_RF,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,Aegis_B_A_Support_CMort_wdl_RF,PRIVATE,-5,-5);
				};
			};
		};
		class BLU_EAF_F
		{
			class Support
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Support0;
				class Aegis_B_E_Support_Mort_RF
				{
					name = $STR_LXRF_CfgGroups_LightMortar;
					side = TWest;
					faction = BLU_EAF_F;
					icon = "\A3\ui_f\data\map\markers\nato\n_mortar.paa";
					GROUP_UNIT(0,TWest,Aegis_B_E_soldier_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,Aegis_B_E_Support_CMort_RF,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,Aegis_B_E_Support_CMort_RF,PRIVATE,-5,-5);
				};
			};
			class Armored
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Armored0;
				class Aegis_B_E_TankPlatoon_AA
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Armored_BUS_TankPlatoon_AA0;
					side = TWest;
					faction = BLU_EAF_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_armor.paa";
					GROUP_UNIT(0,TWest,Aegis_B_E_MBT_03_cannon_F,LIEUTENANT,0,0);
					GROUP_UNIT(1,TWest,Aegis_B_E_Pickup_AAT_RF,SERGEANT,10,-10);
					GROUP_UNIT(2,TWest,Aegis_B_E_MBT_03_cannon_F,SERGEANT,-10,-10);
					GROUP_UNIT(3,TWest,Aegis_B_E_Pickup_AAT_RF,CORPORAL,20,-20);
				};
			};
		};
		class BLU_EAF_ard_F
		{
			class Support
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Support0;
				class Aegis_B_E_Support_Mort_ard_RF
				{
					name = $STR_LXRF_CfgGroups_LightMortar;
					side = TWest;
					faction = BLU_EAF_ard_F;
					icon = "\A3\ui_f\data\map\markers\nato\n_mortar.paa";
					GROUP_UNIT(0,TWest,Aegis_B_E_soldier_TL_ard_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,Aegis_B_E_Support_CMort_ard_RF,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,Aegis_B_E_Support_CMort_ard_RF,PRIVATE,-5,-5);
				};
			};
			class Armored
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Armored0;
				class Aegis_B_E_ard_TankPlatoon_AA
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Armored_BUS_TankPlatoon_AA0;
					side = TWest;
					faction = BLU_EAF_ard_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_armor.paa";
					GROUP_UNIT(0,TWest,Aegis_B_E_MBT_03_cannon_ard_F,LIEUTENANT,0,0);
					GROUP_UNIT(1,TWest,Aegis_B_E_Pickup_AAT_ard_RF,SERGEANT,10,-10);
					GROUP_UNIT(2,TWest,Aegis_B_E_MBT_03_cannon_ard_F,SERGEANT,-10,-10);
					GROUP_UNIT(3,TWest,Aegis_B_E_Pickup_AAT_ard_RF,CORPORAL,20,-20);
				};
			};
		};
	};
	class Indep
	{
		class IND_E_F
		{
			class Armored
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Armored0;
				class Aegis_I_E_TankPlatoon_AA
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Armored_BUS_TankPlatoon_AA0;
					side = TGuerrila;
					faction = IND_E_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_armor.paa";
					GROUP_UNIT(0,TGuerrila,Aegis_I_E_MBT_03_cannon_F,LIEUTENANT,0,0);
					GROUP_UNIT(1,TGuerrila,Aegis_I_E_Pickup_AAT_RF,SERGEANT,10,-10);
					GROUP_UNIT(2,TGuerrila,Aegis_I_E_MBT_03_cannon_F,SERGEANT,-10,-10);
					GROUP_UNIT(3,TGuerrila,Aegis_I_E_Pickup_AAT_RF,CORPORAL,20,-20);
				};
			};
		};
		class IND_E_ard_F
		{
			class Support
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Support0;
				class Aegis_I_E_Support_Mort_ard_RF
				{
					name = $STR_LXRF_CfgGroups_LightMortar;
					side = TGuerrila;
					faction = BLU_EAF_ard_F;
					icon = "\A3\ui_f\data\map\markers\nato\n_mortar.paa";
					GROUP_UNIT(0,TGuerrila,I_E_soldier_TL_ard_F,SERGEANT,0,0);
					GROUP_UNIT(1,TGuerrila,I_E_Support_CMort_ard_RF,CORPORAL,5,-5);
					GROUP_UNIT(2,TGuerrila,I_E_Support_CMort_ard_RF,PRIVATE,-5,-5);
				};
			};
			class Armored
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Armored0;
				class I_E_ard_TankPlatoon_AA
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Armored_BUS_TankPlatoon_AA0;
					side = TGuerrila;
					faction = IND_E_ard_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_armor.paa";
					GROUP_UNIT(0,TGuerrila,Aegis_I_E_MBT_03_cannon_ard_F,LIEUTENANT,0,0);
					GROUP_UNIT(1,TGuerrila,Aegis_I_E_Pickup_AAT_ard_RF,SERGEANT,10,-10);
					GROUP_UNIT(2,TGuerrila,Aegis_I_E_MBT_03_cannon_ard_F,SERGEANT,-10,-10);
					GROUP_UNIT(3,TGuerrila,Aegis_I_E_Pickup_AAT_ard_RF,CORPORAL,20,-20);
				};
			};
		};
		class IND_F
		{
			class SpecOps
			{
				name = $STR_A3_CfgGroups_West_BLU_F_SpecOps0;
				class Aegis_I_ReconSquad
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_ReconSquad0;
					side = TGuerrila;
					faction = IND_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";
					GROUP_UNIT(0,TGuerrila,Aegis_I_recon_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TGuerrila,Aegis_I_recon_M_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TGuerrila,Aegis_I_recon_medic_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TGuerrila,Aegis_I_recon_F,PRIVATE,10,-10);
					GROUP_UNIT(4,TGuerrila,Aegis_I_recon_LAT_F,PRIVATE,-10,-10);
					GROUP_UNIT(5,TGuerrila,Aegis_I_recon_JTAC_F,PRIVATE,15,-15);
					GROUP_UNIT(6,TGuerrila,Aegis_I_recon_exp_F,PRIVATE,-15,-15);
					GROUP_UNIT(7,TGuerrila,Aegis_I_recon_AR_F,CORPORAL,20,-20);
				};
				class Aegis_I_ReconTeam
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_ReconTeam0;
					side = TGuerrila;
					faction = IND_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";
					GROUP_UNIT(0,TGuerrila,Aegis_I_recon_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TGuerrila,Aegis_I_recon_M_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TGuerrila,Aegis_I_recon_medic_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TGuerrila,Aegis_I_recon_LAT_F,CORPORAL,10,-10);
					GROUP_UNIT(4,TGuerrila,Aegis_I_recon_JTAC_F,PRIVATE,-10,-10);
					GROUP_UNIT(5,TGuerrila,Aegis_I_recon_exp_F,PRIVATE,15,-15);
				};
				class Aegis_I_ReconPatrol
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_ReconPatrol0;
					side = TGuerrila;
					faction = IND_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";
					GROUP_UNIT(0,TGuerrila,Aegis_I_recon_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TGuerrila,Aegis_I_recon_M_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TGuerrila,Aegis_I_recon_medic_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TGuerrila,Aegis_I_recon_F,PRIVATE,10,-10);
				};
				class Aegis_I_ReconSentry
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_ReconSentry0;
					side = TGuerrila;
					faction = IND_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";
					GROUP_UNIT(0,TGuerrila,Aegis_I_recon_M_F,CORPORAL,0,0);
					GROUP_UNIT(1,TGuerrila,Aegis_I_recon_F,PRIVATE,5,-5);
				};
			};
		};
	};
    class East
	{
		class OPF_R_F
        {
            class UInfantry
			{
				name = $STR_A3_A_CfgGroups_East_OPF_R_F_UInfantry0;
                class Aegis_O_R_InfSquadU
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSquad0;
					side = TEast;
					faction = OPF_R_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TEast,Aegis_O_R_soldierU_SL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TEast,Aegis_O_R_RadioOperatorU_F,PRIVATE,5,-5);
					GROUP_UNIT(2,TEast,Aegis_O_R_soldierU_LAT_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TEast,Aegis_O_R_soldierU_M_F,PRIVATE,10,-10);
					GROUP_UNIT(4,TEast,Aegis_O_R_soldierU_TL_F,SERGEANT,-10,-10);
					GROUP_UNIT(5,TEast,Aegis_O_R_soldierU_AR_F,CORPORAL,15,-15);
					GROUP_UNIT(6,TEast,Aegis_O_R_soldierU_A_F,PRIVATE,-15,-15);
					GROUP_UNIT(7,TEast,Aegis_O_R_medicU_F,PRIVATE,20,-20);
				};
				class Aegis_O_R_InfSquadU_Weapons
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSquad_Weapons0;
					side = TEast;
					faction = OPF_R_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TEast,Aegis_O_R_soldierU_SL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TEast,Aegis_O_R_soldierU_AR_F,PRIVATE,5,-5);
					GROUP_UNIT(2,TEast,Aegis_O_R_soldierU_GL_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TEast,Aegis_O_R_soldierU_M_F,PRIVATE,10,-10);
					GROUP_UNIT(4,TEast,Aegis_O_R_soldierU_HAT_F,SERGEANT,-10,-10);
					GROUP_UNIT(5,TEast,Aegis_O_R_soldierU_AHAT_F,CORPORAL,15,-15);
					GROUP_UNIT(6,TEast,Aegis_O_R_soldierU_A_F,PRIVATE,-15,-15);
					GROUP_UNIT(7,TEast,Aegis_O_R_medicU_F,PRIVATE,20,-20);
				};
				class Aegis_O_R_InfTeamU
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam0;
					side = TEast;
					faction = OPF_R_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TEast,Aegis_O_R_soldierU_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TEast,Aegis_O_R_soldierU_AR_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TEast,Aegis_O_R_soldierU_GL_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TEast,Aegis_O_R_RadioOperatorU_F,PRIVATE,10,-10);
				};
				class Aegis_O_R_InfTeamU_AT
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam_AT0;
					side = TEast;
					faction = OPF_R_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TEast,Aegis_O_R_soldierU_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TEast,Aegis_O_R_soldierU_HAT_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TEast,Aegis_O_R_soldierU_HAT_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TEast,Aegis_O_R_soldierU_AHAT_F,PRIVATE,10,-10);
				};
				class Aegis_O_R_InfTeamU_AA
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam_AA0;
					side = TEast;
					faction = OPF_R_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TEast,Aegis_O_R_soldierU_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TEast,Aegis_O_R_soldierU_AA_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TEast,Aegis_O_R_soldierU_AA_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TEast,Aegis_O_R_soldierU_AAA_F,PRIVATE,10,-10);
				};
				class Aegis_O_R_InfSentryU
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSentry0;
					side = TEast;
					faction = OPF_R_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TEast,Aegis_O_R_soldierU_GL_F,CORPORAL,0,0);
					GROUP_UNIT(1,TEast,Aegis_O_R_soldierU_F,PRIVATE,5,-5);
				};
            };
        };
    };
};