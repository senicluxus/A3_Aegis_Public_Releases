/* Russia */
class O_R_Plane_CAS_02_Cluster_F: O_Plane_CAS_02_Cluster_F
{
	scope = protected;
	scopeCurator = public;
	faction = OPF_R_F;
	crew = O_R_Fighter_Pilot_F;
	typicalCargo[] = {O_R_Fighter_Pilot_F};
	textureList[] = {Blue,1};
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Air_F_Aegis\Plane_CAS_02\Data\Fighter02_ext01_rublue_CO.paa",
		"\A3_Aegis\Air_F_Aegis\Plane_CAS_02\Data\Fighter02_ext02_rublue_CO.paa"
	};
    class EjectionSystem: EjectionSystem
    {
        EjectionSeatClass = O_R_Ejection_Seat_Plane_CAS_02_F;
    };
};
class O_R_Plane_Fighter_02_Cluster_F: O_Plane_Fighter_02_Cluster_F
{
	scope = protected;
	scopeCurator = public;
	faction = OPF_R_F;
	crew = O_R_Fighter_Pilot_F;
	typicalCargo[] = {O_R_Fighter_Pilot_F};
	textureList[] = {RUBlue,1};
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Air_F_Aegis\Plane_Fighter_02\Data\Fighter_02_fuselage_01_rublue_CO.paa",
		"\A3_Aegis\Air_F_Aegis\Plane_Fighter_02\Data\Fighter_02_fuselage_02_rublue_CO.paa",
		"\A3_Aegis\Air_F_Aegis\Plane_Fighter_02\Data\Fighter_02_fuselage_01_rublue_CO.paa",
		"\A3\Air_F_Jets\Plane_Fighter_02\Data\Numbers\Fighter_02_number_02_CO.paa",
		"\A3\Air_F_Jets\Plane_Fighter_02\Data\Numbers\Fighter_02_number_00_CO.paa",
		"\A3\Air_F_Jets\Plane_Fighter_02\Data\Numbers\Fighter_02_number_01_CO.paa",
		"\A3\Data_F\clear_empty.paa"
	};
	class EjectionSystem: EjectionSystem
	{
		EjectionSeatClass = O_R_Ejection_Seat_Plane_CAS_02_F;
	};
};

/* Russia (Mediterranean) */
class O_R_Plane_CAS_02_Cluster_ard_F: O_R_Plane_CAS_02_Cluster_F
{
	faction = OPF_R_ard_F;
	crew = O_R_Fighter_Pilot_ard_F;
	typicalCargo[] = {O_R_Fighter_Pilot_ard_F};
    class EjectionSystem: EjectionSystem
    {
        EjectionSeatClass = O_R_Ejection_Seat_Plane_CAS_02_ard_F;
    };
};
class O_R_Plane_Fighter_02_Cluster_ard_F: O_R_Plane_Fighter_02_Cluster_F
{
	faction = OPF_R_ard_F;
	crew = O_R_Fighter_Pilot_ard_F;
	typicalCargo[] = {O_R_Fighter_Pilot_ard_F};
    class EjectionSystem: EjectionSystem
    {
        EjectionSeatClass = O_R_Ejection_Seat_Plane_Fighter_02_ard_F;
    };
};