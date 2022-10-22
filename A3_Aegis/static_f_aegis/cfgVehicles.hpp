class CfgVehicles
{
	/* Definitions */
    #include "\A3_Aegis\macros_supportBags.hpp"
	
    /* Inheritance Tree */
	class Land;
	class LandVehicle: Land
	{
		class NewTurret;
	};
	class Items_base_F;
	class StaticWeapon: LandVehicle
	{
        /* Turrets*/
		class Turrets
		{
			class MainTurret: NewTurret
			{
				ejectDeadGunner = true;
			};
		};
	};

    /* Boat Rack */
	class Land_Destroyer_01_Boat_Rack_01_Base_F: Items_base_F
	{
		class BoatRecoverySystem
		{
			supportedVehicleOffsetsZ[] +=
			{
                // Civilians
				{C_Boat_Civil_02_F,0.5},

                // US (Pacific)
				{B_T_SDV_01_F,0},

                // China
				{O_T_SDV_01_F,0},

                // Russia
				{O_R_Boat_Armed_01_hmg_F,0.3},
				{O_R_Boat_Armed_01_hmg_ard_F,0.3},
				{O_R_Boat_Transport_01_F,0.3},
				{O_R_Boat_Transport_01_ard_F,0.3},
				{O_R_Lifeboat,0.1},
				{O_R_Lifeboat_ard_F,0.1},
				{O_R_SDV_01_F,0},
				{O_R_SDV_01_ard_F,0},
                
                // BAF
				{B_A_Boat_Armed_01_hmg_F,0.3},
				{B_A_Boat_Armed_01_hmg_tna_F,0.3},
				{B_A_Boat_Transport_01_F,0.1},
				{B_A_Boat_Transport_01_tna_F,0.1},
				{B_A_Lifeboat,0.1},
				{B_A_Lifeboat_tna_F,0.1},
				{B_A_SDV_01_F,0},
				{B_A_SDV_01_tna_F,0}
			};
		};
	};
};