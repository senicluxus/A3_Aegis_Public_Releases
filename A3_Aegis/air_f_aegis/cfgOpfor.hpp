/* IAF */
class O_Plane_Fighter_03_Cluster_F: O_Plane_Fighter_03_dynamicLoadout_F
{
	scope = protected;
	scopeCurator = public;
    displayName = $STR_A3_CfgVehicles_I_Plane_Fighter_03_Cluster_F0;
	class Components: Components
	{
		class TransportPylonsComponent: TransportPylonsComponent
		{
			class pylons: pylons
			{
				class pylons1: pylons1{};
				class pylons2: pylons2{};
				class pylons3: pylons3
				{
					attachment = PylonMissile_1Rnd_BombCluster_02_cap_F;
				};
				class pylons4: pylons4{};
				class pylons5: pylons5
				{
					attachment = PylonMissile_1Rnd_BombCluster_02_cap_F;
				};
				class pylons6: pylons6{};
				class pylons7: pylons7{};
			};
		};
	};
};

/* China */
class O_T_Plane_CAS_02_ghex_Cluster_F: O_Plane_CAS_02_Cluster_F
{
	scope = protected;
	scopeCurator = public;
	faction = OPF_T_F;
	crew = O_T_Fighter_Pilot_F;
	typicalCargo[] = {O_T_Fighter_Pilot_F};
	textureList[] =
	{
		Grey,0,
		GreenHex,1
	};
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Air_F_Aegis\Plane_CAS_02\Data\Fighter02_ext01_ghex_CO.paa",
		"\A3_Aegis\Air_F_Aegis\Plane_CAS_02\Data\Fighter02_ext02_ghex_CO.paa"
	};
    class EjectionSystem: EjectionSystem
    {
        EjectionSeatClass = O_T_Ejection_Seat_Plane_CAS_02_F;
    };
};
class O_T_Plane_Fighter_02_ghex_Cluster_F: O_Plane_Fighter_02_Cluster_F
{
	scope = protected;
	scopeCurator = public;
	faction = OPF_T_F;
	crew = O_T_Fighter_Pilot_F;
	typicalCargo[] = {O_T_Fighter_Pilot_F};
	textureList[] =
	{
		CamoGreyHex,0,
		CamoGreenHex,1
	};
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Air_F_Aegis\Plane_Fighter_02\Data\Fighter_02_fuselage_01_ghex_CO.paa",
		"\A3_Aegis\Air_F_Aegis\Plane_Fighter_02\Data\Fighter_02_fuselage_02_ghex_CO.paa",
		"\A3_Aegis\Air_F_Aegis\Plane_Fighter_02\Data\Fighter_02_fuselage_01_ghex_CO.paa",
		"\A3\Air_F_Jets\Plane_Fighter_02\Data\Numbers\Fighter_02_number_02_CO.paa",
		"\A3\Air_F_Jets\Plane_Fighter_02\Data\Numbers\Fighter_02_number_00_CO.paa",
		"\A3\Air_F_Jets\Plane_Fighter_02\Data\Numbers\Fighter_02_number_01_CO.paa",
		"\A3\Data_F\clear_empty.paa"
	};
	class EjectionSystem: EjectionSystem
	{
		EjectionSeatClass = O_T_Ejection_Seat_Plane_Fighter_02_F;
	};
};

/* Argana */
class O_A_Plane_Fighter_03_Cluster_F: O_Plane_Fighter_03_Cluster_F
{
	faction = OPF_A_F;
	crew = O_A_Fighter_Pilot_F;
	typicalCargo[] = {O_A_Fighter_Pilot_F};
	class EjectionSystem: EjectionSystem
	{
		EjectionSeatClass = O_Ejection_Seat_Plane_Fighter_03_F;
	};
};