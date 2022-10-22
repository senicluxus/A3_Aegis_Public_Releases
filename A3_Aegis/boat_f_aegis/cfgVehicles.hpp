class CfgVehicles
{
	/* Inheritance Tree */
	class FloatingStructure_F;
	class StaticShip;
	class House_F;

    /* Trawler */
	class C_Boat_Civil_04_F: FloatingStructure_F
	{
		editorCategory = EdCat_Structures;
		editorSubcategory = EdSubcat_StaticShips;
	};

    /* Carrier */
	class Land_Carrier_01_base_F: StaticShip
	{
		displayName = "USS Freedom";
		editorCategory = EdCat_Structures;
	};
	class Land_Carrier_01_hull_base_F: House_F
	{
		class MarkerLights
		{
			class M_light_base
			{
				useFlare = true;
			};
		};
	};

    /* Destroyer */
	class Land_Destroyer_01_base_F: StaticShip
	{
		displayName = "USS Liberty";
		editorCategory = EdCat_Structures;
	};
	class Land_Destroyer_01_hull_base_F: House_F
	{
		class MarkerLights
		{
			class M_light_base
			{
				useFlare = true;
			};
		};
	};
};