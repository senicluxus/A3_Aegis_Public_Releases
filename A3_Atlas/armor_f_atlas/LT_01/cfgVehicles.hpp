class CfgVehicles
{
	/* Inheritance Tree */
	class Tank_F;

    /* Bases */
	class LT_01_base_F: Tank_F
	{
		class TextureSources
		{
			class Indep_Olive
			{
				textures[] =
				{
					"\A3\Armor_F_Tank\LT_01\Data\LT_01_Main_olive_CO.paa",
					"\A3\Armor_F_Tank\LT_01\Data\LT_01_Radar_olive_CO.paa",
					"\A3\Armor_F\Data\camonet_NATO_Green_CO.paa",
					"\A3\Armor_F\Data\cage_olive_CO.paa"
				};
				factions[] = {};
			};
			class Sand
			{
				displayName = $STR_A3_A_TEXTURESOURCES_BWArid0;
				textures[] =
				{
					"\A3_Atlas\Armor_F_Atlas\LT_01\Data\LT_01_Main_sand_CO.paa",
					"\A3_Atlas\Armor_F_Atlas\LT_01\Data\LT_01_Radar_sand_CO.paa",
					"\A3\Armor_F\Data\camonet_NATO_Desert_CO.paa",
					"\A3\Armor_F\Data\cage_sand_CO.paa"
				};
				factions[] = {};
			};
		};
		class Turrets;
	};
	class LT_01_AT_base_F: LT_01_base_F
	{
		class TextureSources: TextureSources
		{
			class Indep_Olive: Indep_Olive
			{
				textures[] =
				{
					"\A3\Armor_F_Tank\LT_01\Data\LT_01_Main_olive_CO.paa",
					"\A3\Armor_F_Tank\LT_01\Data\LT_01_AT_olive_CO.paa",
					"\A3\Armor_F\Data\camonet_NATO_Green_CO.paa",
					"\A3\Armor_F\Data\cage_olive_CO.paa"
				};
			};
			class Sand: Sand
			{
				textures[] =
				{
					"\A3_Atlas\Armor_F_Atlas\LT_01\Data\LT_01_Main_sand_CO.paa",
					"\A3_Atlas\Armor_F_Atlas\LT_01\Data\LT_01_AT_Sand_CO.paa",
					"\A3\Armor_F\Data\camonet_NATO_Desert_CO.paa",
					"\A3\Armor_F\Data\cage_sand_CO.paa"
				};
				factions[] = {};
			};
		};
		class Turrets: Turrets
		{
			class MainTurret;
		};
	};
	class LT_01_scout_base_F: LT_01_base_F
	{
		class TextureSources: TextureSources
		{
			class Indep_Olive: Indep_Olive
			{
				textures[] =
				{
					"\A3\Armor_F_Tank\LT_01\Data\LT_01_Main_olive_CO.paa",
					"\A3\Armor_F_Tank\LT_01\Data\LT_01_Radar_olive_CO.paa",
					"\A3\Armor_F\Data\camonet_NATO_Green_CO.paa",
					"\A3\Armor_F\Data\cage_olive_CO.paa"
				};
			};
			class Sand: Sand
			{
				textures[] =
				{
					"\A3_Atlas\Armor_F_Atlas\LT_01\Data\LT_01_Main_sand_CO.paa",
					"\A3_Atlas\Armor_F_Atlas\LT_01\Data\LT_01_Radar_sand_CO.paa",
					"\A3\Armor_F\Data\camonet_NATO_Desert_CO.paa",
					"\A3\Armor_F\Data\cage_sand_CO.paa"
				};
				factions[] = {};
			};
		};
		class Turrets: Turrets
		{
			class MainTurret;
		};
	};
	class LT_01_AA_base_F: LT_01_base_F
	{
		class TextureSources: TextureSources
		{
			class Indep_Olive: Indep_Olive
			{
				textures[] =
				{
					"\A3\Armor_F_Tank\LT_01\Data\LT_01_Main_olive_CO.paa",
					"\A3\Armor_F_Tank\LT_01\Data\LT_01_AT_olive_CO.paa",
					"\A3\Armor_F\Data\camonet_NATO_Green_CO.paa",
					"\A3\Armor_F\Data\cage_olive_CO.paa"
				};
			};
			class Sand: Sand
			{
				textures[] =
				{
					"\A3_Atlas\Armor_F_Atlas\LT_01\Data\LT_01_Main_sand_CO.paa",
					"\A3_Atlas\Armor_F_Atlas\LT_01\Data\LT_01_AT_Sand_CO.paa",
					"\A3\Armor_F\Data\camonet_NATO_Desert_CO.paa",
					"\A3\Armor_F\Data\cage_Sand_CO.paa"
				};
				factions[] = {};
			};
		};
		class Turrets: Turrets
		{
			class MainTurret;
		};
	};
	class LT_01_cannon_base_F: LT_01_base_F
	{
		class TextureSources: TextureSources
		{
			class Indep_Olive: Indep_Olive
			{
				textures[] =
				{
					"\A3\Armor_F_Tank\LT_01\Data\LT_01_Main_olive_CO.paa",
					"\A3\Armor_F_Tank\LT_01\Data\LT_01_Cannon_olive_CO.paa",
					"\A3\Armor_F\Data\camonet_NATO_Green_CO.paa",
					"\A3\Armor_F\Data\cage_olive_CO.paa"
				};
			};
			class Sand: Sand
			{
				textures[] =
				{
					"\A3_Atlas\Armor_F_Atlas\LT_01\Data\LT_01_Main_sand_CO.paa",
					"\A3_Atlas\Armor_F_Atlas\LT_01\Data\LT_01_Cannon_sand_CO.paa",
					"\A3\Armor_F\Data\camonet_NATO_Desert_CO.paa",
					"\A3\Armor_F\Data\cage_Sand_CO.paa"
				};
				factions[] = {};
			};
		};
		class Turrets: Turrets
		{
			class MainTurret;
		};
	};

	/* Factions */
    #include "cfgGER.hpp"   // Bundeswehr

    /* Deprecated */
    #include "deprecated.hpp"
};