class CfgVehicles
{
	/* Inheritance Tree */
	class Car_F;
	class Wheeled_APC_F: Car_F
	{
		class Turrets
		{
			class MainTurret;
		};
	};

    /* Bases */
	class APC_Wheeled_03_base_F: Wheeled_APC_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret{};
		};
		class AnimationSources;
		class TextureSources
		{
			class Sand_01
			{
				DisplayName = $STR_A3_TEXTURESOURCES_SAND0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3\Armor_F_Gamma\APC_Wheeled_03\Data\APC_Wheeled_03_Ext_CO.paa",
					"\A3\Armor_F_Gamma\APC_Wheeled_03\Data\APC_Wheeled_03_Ext2_CO.paa",
					"\A3\Armor_F_Gamma\APC_Wheeled_03\Data\RCWS30_CO.paa",
					"\A3\Armor_F_Gamma\APC_Wheeled_03\Data\APC_Wheeled_03_Ext_alpha_CO.paa",
					"\A3\Armor_F\Data\camonet_NATO_Desert_CO.paa",
					"\A3\Armor_F\Data\cage_sand_CO.paa"
				};
				factions[] = {};
			};
			class Olive_01
			{
				displayName = $STR_A3_TEXTURESOURCES_OLIVE0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Atlas\Armor_F_Atlas\APC_Wheeled_03\Data\APC_Wheeled_03_Ext_olive_CO.paa",
					"\A3_Atlas\Armor_F_Atlas\APC_Wheeled_03\Data\APC_Wheeled_03_Ext2_olive_CO.paa",
					"\A3_Atlas\Armor_F_Atlas\APC_Wheeled_03\Data\RCWS30_olive_CO.paa",
					"\A3_Atlas\Armor_F_Atlas\APC_Wheeled_03\Data\APC_Wheeled_03_Ext_alpha_olive_CO.paa",
					"\A3\Armor_F\Data\camonet_NATO_Green_CO.paa",
					"\A3\Armor_F\Data\cage_olive_CO.paa"
				};
				factions[] = {};
			};
			class Woodland_01
			{
				displayName = $STR_A3_A_TEXTURESOURCES_WOODLAND0;
				author = $STR_A3_A_wsxcgy;
				textures[] =
				{
					"\A3_Atlas\Armor_F_Atlas\APC_Wheeled_03\Data\APC_Wheeled_03_Ext_wdl_CO.paa",
					"\A3_Atlas\Armor_F_Atlas\APC_Wheeled_03\Data\APC_Wheeled_03_Ext2_wdl_CO.paa",
					"\A3_Atlas\Armor_F_Atlas\APC_Wheeled_03\Data\RCWS30_wdl_CO.paa",
					"\A3_Atlas\Armor_F_Atlas\APC_Wheeled_03\Data\APC_Wheeled_03_Ext_alpha_wdl_CO.paa",
					"\A3\Armor_F\Data\camonet_NATO_Green_CO.paa",
					"\A3\Armor_F\Data\cage_olive_CO.paa"
				};
				factions[] = {};
			};
			class Desert_01
			{
				displayName = $STR_A3_A_TEXTURESOURCES_DESERT0;
				author = $STR_A3_A_wsxcgy;
				textures[] =
				{
					"\A3_Atlas\Armor_F_Atlas\APC_Wheeled_03\Data\APC_Wheeled_03_Ext_desert_CO.paa",
					"\A3_Atlas\Armor_F_Atlas\APC_Wheeled_03\Data\APC_Wheeled_03_Ext2_desert_CO.paa",
					"\A3_Atlas\Armor_F_Atlas\APC_Wheeled_03\Data\RCWS30_desert_CO.paa",
					"\A3_Atlas\Armor_F_Atlas\APC_Wheeled_03\Data\APC_Wheeled_03_Ext_alpha_desert_CO.paa",
					"\A3\Armor_F\Data\camonet_NATO_Desert_CO.paa",
					"\A3\Armor_F\Data\cage_sand_CO.paa"
				};
				factions[] = {};
			};
		};
	};
    /* Factions */
	class I_APC_Wheeled_03_base_F: APC_Wheeled_03_base_F{};
	class I_APC_Wheeled_03_cannon_F: I_APC_Wheeled_03_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret{};
		};
	};
    #include "cfgGER.hpp"   // Bundeswehr

    /* Deprecated */
    #include "deprecated.hpp"
};