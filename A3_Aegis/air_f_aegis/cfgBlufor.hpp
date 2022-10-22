/* US */
class B_Plane_Fighter_05_Cluster_F: B_Plane_Fighter_05_F
{
	scope = protected;
	scopeCurator = public;
	displayName = $STR_A3_A_CfgVehicles_Plane_Fighter_05_Cluster_F0;
	class Components: Components
	{
		class TransportPylonsComponent: TransportPylonsComponent
		{
			class pylons: pylons
			{
				class pylons1: pylons1{};
				class pylons2: pylons2{};
				class pylons3: pylons3{};
				class pylons4: pylons4{};
				class pylons5: pylons5
				{
					attachment = PylonRack_2Rnd_BombCluster_01_F;
				};
				class pylons6: pylons6
				{
					attachment = PylonRack_2Rnd_BombCluster_01_F;
				};
				class pylonBayRight1: pylonBayRight1{};
				class pylonBayLeft1: pylonBayLeft1{};
				class pylonBayRight2: pylonBayRight2
				{
					attachment = PylonMissile_1Rnd_BombCluster_01_F;
				};
				class pylonBayLeft2: pylonBayLeft2
				{
					attachment = PylonMissile_1Rnd_BombCluster_01_F;
				};
				class pylonCenter1: pylonCenter1{};
			};
		};
	};
};

/* US (Pacific) */
class B_T_Plane_CAS_01_Cluster_F: B_Plane_CAS_01_Cluster_F
{
	scope = protected;
	scopeCurator = public;
    faction = BLU_T_F;
    crew = B_T_Fighter_Pilot_F;
    typicalCargo[] = {B_T_Fighter_Pilot_F};
    class EjectionSystem: EjectionSystem
    {
        EjectionSeatClass = B_T_Ejection_Seat_Plane_CAS_01_F;
    };
};
class B_T_Plane_Fighter_01_Cluster_F: B_Plane_Fighter_01_Cluster_F
{
	scope = protected;
	scopeCurator = public;
    faction = BLU_T_F;
    crew = B_T_Fighter_Pilot_F;
    typicalCargo[] = {B_T_Fighter_Pilot_F};
    class EjectionSystem: EjectionSystem
    {
        EjectionSeatClass = B_T_Ejection_Seat_Plane_Fighter_01_F;
    };
};
class B_T_Plane_Fighter_05_Cluster_F: B_Plane_Fighter_05_Cluster_F
{
	scope = protected;
	scopeCurator = public;
    faction = BLU_T_F;
    crew = B_T_Fighter_Pilot_F;
    typicalCargo[] = {B_T_Fighter_Pilot_F};
    class EjectionSystem: EjectionSystem
    {
        EjectionSeatClass = B_T_Ejection_Seat_Plane_Fighter_05_F;
    };
};

/* US (Woodland) */
class B_W_Plane_CAS_01_Cluster_F: B_Plane_CAS_01_Cluster_F
{
	scope = protected;
	scopeCurator = public;
    faction = BLU_W_F;
    crew = B_W_Fighter_Pilot_F;
    typicalCargo[] = {B_W_Fighter_Pilot_F};
    class EjectionSystem: EjectionSystem
    {
        EjectionSeatClass = B_W_Ejection_Seat_Plane_CAS_01_F;
    };
};
class B_W_Plane_Fighter_01_Cluster_F: B_Plane_Fighter_01_Cluster_F
{
	scope = protected;
	scopeCurator = public;
    faction = BLU_W_F;
    crew = B_W_Fighter_Pilot_F;
    typicalCargo[] = {B_W_Fighter_Pilot_F};
    class EjectionSystem: EjectionSystem
    {
        EjectionSeatClass = B_W_Ejection_Seat_Plane_Fighter_01_F;
    };
};
class B_W_Plane_Fighter_05_Cluster_F: B_Plane_Fighter_05_Cluster_F
{
	scope = protected;
	scopeCurator = public;
    faction = BLU_W_F;
    crew = B_W_Fighter_Pilot_F;
    typicalCargo[] = {B_W_Fighter_Pilot_F};
    class EjectionSystem: EjectionSystem
    {
        EjectionSeatClass = B_W_Ejection_Seat_Plane_Fighter_05_F;
    };
};

/* BAF */
class B_A_Plane_Fighter_05_Cluster_F: B_Plane_Fighter_05_Cluster_F
{
	scope = protected;
	scopeCurator = public;
    faction = BLU_A_F;
    crew = B_A_Fighter_Pilot_F;
    typicalCargo[] = {B_A_Fighter_Pilot_F};
    class EjectionSystem: EjectionSystem
    {
        EjectionSeatClass = B_A_Ejection_Seat_Plane_Fighter_05_F;
    };
};

/* BAF (Pacific) */
class B_A_Plane_Fighter_05_Cluster_tna_F: B_A_Plane_Fighter_05_Cluster_F
{
    faction = BLU_A_tna_F;
    crew = B_A_Fighter_Pilot_tna_F;
    typicalCargo[] = {B_A_Fighter_Pilot_tna_F};
    class EjectionSystem: EjectionSystem
    {
        EjectionSeatClass = B_A_Ejection_Seat_Plane_Fighter_05_tna_F;
    };
};

/* BAF (Woodland) */
class B_A_Plane_Fighter_05_Cluster_wdl_F: B_A_Plane_Fighter_05_Cluster_F
{
    faction = BLU_A_wdl_F;
    crew = B_A_Fighter_Pilot_wdl_F;
    typicalCargo[] = {B_A_Fighter_Pilot_wdl_F};
    class EjectionSystem: EjectionSystem
    {
        EjectionSeatClass = B_A_Ejection_Seat_Plane_Fighter_05_wdl_F;
    };
};