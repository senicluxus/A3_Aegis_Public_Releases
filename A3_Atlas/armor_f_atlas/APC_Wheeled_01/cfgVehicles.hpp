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
	class APC_Wheeled_01_base_F: Wheeled_APC_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret{};
		};
		class AnimationSources;
		class TextureSources
		{
			class ADF
			{
				displayName = $STR_A3_A_TEXTURESOURCES_ADF0;
				author = $STR_A3_A_BranFlakes;
				textures[] =
				{
					"\A3_Atlas\Armor_f_Atlas\APC_Wheeled_01\Data\APC_Wheeled_01_base_ADF_CO.paa",
					"\A3_Atlas\Armor_f_Atlas\APC_Wheeled_01\Data\APC_Wheeled_01_adds_ADF_CO.paa",
					"\A3_Atlas\Armor_f_Atlas\APC_Wheeled_01\Data\APC_Wheeled_01_tows_ADF_CO.paa",
        			"\A3\Armor_f\Data\camonet_CSAT_Stripe_Desert_CO.paa",
        			"\A3\Armor_F\Data\cage_sand_CO.paa"
				};
				factions[] = {};
			};
			class Marar
			{
				displayName = $STR_A3_A_TextureSources_Marar0;
				author = $STR_A3_A_BranFlakes;
				textures[] =
				{
					"\A3_Atlas\Armor_f_Atlas\APC_Wheeled_01\Data\APC_Wheeled_01_base_Marar_CO.paa",
					"\A3_Atlas\Armor_f_Atlas\APC_Wheeled_01\Data\APC_Wheeled_01_adds_Marar_CO.paa",
					"\A3_Atlas\Armor_f_Atlas\APC_Wheeled_01\Data\APC_Wheeled_01_tows_Marar_CO.paa",
       				"\A3\Armor_F\Data\camonet_NATO_Desert_CO.paa",
        			"\A3\Armor_F\Data\cage_sand_CO.paa"
				};
				factions[] = {};
			};
		};
	};
	class APC_Wheeled_01_base_v2_F: APC_Wheeled_01_base_F{};
};