class CfgVehicles
{
	// Inheritence
	class Static;
	class NonStrategic;
	class House_F;
	class House_Small_F;

	// Arma 3 Aegis
	class BlockConcrete_F: House_F
	{
        editorCategory = EdCat_Structures;
	};
    class Dirthump_1_F: House_F
	{
        editorCategory = EdCat_Structures;
	};
    class Dirthump_2_F: Dirthump_1_F
	{
        editorCategory = EdCat_Structures;
	};
    class Dirthump_3_F: Dirthump_1_F
	{
        editorCategory = EdCat_Structures;
	};
    class Dirthump_4_F: NonStrategic
	{
        editorCategory = EdCat_Structures;
	};
    class Land_Obstacle_Bridge_F: NonStrategic
	{
        editorCategory = EdCat_Structures;
	};
    class Land_Obstacle_Climb_F: House_Small_F
	{
        editorCategory = EdCat_Structures;
	};
    class Land_Obstacle_Crawl_F: Land_Obstacle_Bridge_F
	{
        editorCategory = EdCat_Structures;
	};
    class Land_Obstacle_Cross_F: Land_Obstacle_Bridge_F
	{
        editorCategory = EdCat_Structures;
	};
    class Land_Obstacle_Pass_F: Land_Obstacle_Bridge_F
	{
        editorCategory = EdCat_Structures;
	};
    class Land_Obstacle_Ramp_F: Land_Obstacle_Bridge_F
	{
        editorCategory = EdCat_Structures;
	};
    class Land_Obstacle_RunAround_F: Land_Obstacle_Bridge_F
	{
        editorCategory = EdCat_Structures;
	};
    class Land_Obstacle_Saddle_F: NonStrategic
	{
        editorCategory = EdCat_Structures;
	};
    class Land_RampConcrete_F: NonStrategic
	{
        editorCategory = EdCat_Structures;
	};
    class Land_RampConcreteHigh_F: House_F
	{
        editorCategory = EdCat_Structures;
	};
    class ShootingPos_F: House_F
	{
        editorCategory = EdCat_Structures;
	};
    class Land_ShootingPos_F: ShootingPos_F
	{
        editorCategory = EdCat_Structures;
	};
};