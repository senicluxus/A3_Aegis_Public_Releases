class CfgVehicles
{
    /* Inheritance Tree */
	class Helicopter_Base_F;
	class Helicopter_Base_H: Helicopter_base_F
	{
		class TextureSources;
	};

    /* RF + Aegis Compatibility */
	class Heli_EC_01_base_RF: Helicopter_Base_H
	{
		class TextureSources: TextureSources
		{
			class Karzeg_01
			{
				author = $STR_A3_A_BranFlakes;
				dlc = "rf";
				displayName = $STR_A3_A_TEXTURESOURCES_KZG0;
				textures[] = 
				{
					"\A3_Atlas\air_f_atlas_rf\Heli_Medium_EC\Data\as332_exterior_kzg_co.paa",
					"\lxRF\air_rf\heli_medium_ec\data\as332_int_cargo_co.paa",
					"#(rgb,1024,1024,1)ui('lxRF_MFDMinimap','lxRF_MFDMinimap')",
					"\A3_Atlas\air_f_atlas_rf\Heli_Medium_EC\Data\as332_adds_kzg_CO.paa", 
					"\A3_Atlas\air_f_atlas_rf\Heli_Medium_EC\Data\as332_exterior_kzg_co.paa", 
					"\lxRF\air_rf\heli_medium_ec\data\as332_int_cargo_co.paa"
				};
				materials[] = 
				{
					"\lxrf\air_rf\heli_medium_ec\data\as332_exterior_01.rvmat", 
					"\lxrf\air_rf\heli_medium_ec\data\as332_int_cargo.rvmat"
				};
				factions[] = {};
			};
			class Jagged
			{
				author = $STR_A3_A_BranFlakes;
				dlc = "rf";
				displayName = $STR_A3_A_TEXTURESOURCES_JAGGED0;
				textures[] = 
				{
					"\A3_Atlas\air_f_atlas_rf\Heli_Medium_EC\Data\as332_exterior_fr_co.paa",
					"\lxRF\air_rf\heli_medium_ec\data\as332_int_cargo_co.paa",
					"#(rgb,1024,1024,1)ui('lxRF_MFDMinimap','lxRF_MFDMinimap')",
					"\A3_Atlas\air_f_atlas_rf\Heli_Medium_EC\Data\as332_adds_fr_CO.paa", 
					"\A3_Atlas\air_f_atlas_rf\Heli_Medium_EC\Data\as332_exterior_fr_co.paa", 
					"\lxRF\air_rf\heli_medium_ec\data\as332_int_cargo_co.paa"
				};
				materials[] = 
				{
					"\lxrf\air_rf\heli_medium_ec\data\as332_exterior_01.rvmat", 
					"\lxrf\air_rf\heli_medium_ec\data\as332_int_cargo.rvmat"
				};
				factions[] = {};
			};
			class Jungle_01
			{
				author = $STR_A3_A_BranFlakes;
				dlc = "rf";
				displayName = $STR_A3_A_TEXTURESOURCES_jungle0;
				textures[] = 
				{
					"\A3_Atlas\air_f_atlas_rf\Heli_Medium_EC\Data\as332_exterior_jungle_co.paa",
					"\lxRF\air_rf\heli_medium_ec\data\as332_int_cargo_co.paa",
					"#(rgb,1024,1024,1)ui('lxRF_MFDMinimap','lxRF_MFDMinimap')",
					"\A3_Atlas\air_f_atlas_rf\Heli_Medium_EC\Data\as332_adds_jungle_CO.paa", 
					"\A3_Atlas\air_f_atlas_rf\Heli_Medium_EC\Data\as332_exterior_jungle_co.paa", 
					"\lxRF\air_rf\heli_medium_ec\data\as332_int_cargo_co.paa"
				};
				materials[] = 
				{
					"\lxrf\air_rf\heli_medium_ec\data\as332_exterior_01.rvmat", 
					"\lxrf\air_rf\heli_medium_ec\data\as332_int_cargo.rvmat"
				};
				factions[] = {};
			};
			class UNO
			{
				author = $STR_A3_A_BranFlakes;
				dlc = "rf";
				displayName = $STR_A3_A_TEXTURESOURCES_UNO0;
				textures[] = 
				{
					"\A3_Atlas\air_f_atlas_rf\Heli_Medium_EC\Data\as332_exterior_UN_co.paa",
					"\lxRF\air_rf\heli_medium_ec\data\as332_int_cargo_co.paa",
					"#(rgb,1024,1024,1)ui('lxRF_MFDMinimap','lxRF_MFDMinimap')",
					"\A3_Atlas\air_f_atlas_rf\Heli_Medium_EC\Data\as332_adds_UN_CO.paa", 
					"\A3_Atlas\air_f_atlas_rf\Heli_Medium_EC\Data\as332_exterior_UN_co.paa", 
					"\lxRF\air_rf\heli_medium_ec\data\as332_int_cargo_co.paa"
				};
				materials[] = 
				{
					"\lxrf\air_rf\heli_medium_ec\data\as332_exterior_01.rvmat", 
					"\lxrf\air_rf\heli_medium_ec\data\as332_int_cargo.rvmat"
				};
				factions[] = {};
			};
		};
		class Turrets;
	};
	class Heli_EC_01_civ_base_RF;
	class Heli_EC_01A_base_RF;
	class Heli_EC_01A_civ_base_RF;
	class Heli_EC_01A_military_base_RF;
	class Heli_EC_02_base_RF: Heli_EC_01_base_RF
	{
		class Turrets: Turrets
		{
			class CopilotTurret;
		};
	};
	class Heli_EC_03_base_RF;
	class Heli_EC_04_base_RF;
	class Heli_EC_04_military_base_RF;

    /* Atlas Factions */
	//#include "cfgGER.hpp"			// Bundeswehr Cougars
	#include "cfgKarzeg.hpp"		// Karzeghistani Cougars
	#include "cfgHIMF.hpp"			//HIMF
	#include "cfgLegion.hpp"    	// Legionnaires
	#include "cfgUNO.hpp"			// United Nations

};