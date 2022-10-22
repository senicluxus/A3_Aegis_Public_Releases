#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class CfgVehicles
{
	// Arma 3
	class Truck_F;
	//class Truck_02_viv_base_F;
	class Truck_02_base_F: Truck_F
	{	
		class Turrets;
		class TextureSources
		{
			class Marar
			{
				displayName = $STR_A3_A_TextureSources_Marar0;
				author = $STR_A3_A_BranFlakes;
				textures[] =
				{
				"\A3_Atlas\Soft_F_Atlas\Truck_02\Data\Truck_02_kab_Marar_CO.paa",
				"\A3_Atlas\Soft_F_Atlas\Truck_02\Data\Truck_02_kuz_Marar_CO.paa",
				"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
				"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_INDP_CO.paa"
				};
				factions[] = {};
			};
			class UNO
			{
				displayName = $STR_A3_A_TEXTURESOURCES_UNO0;
				author = $STR_A3_A_BranFlakes;
				textures[] =
				{
				"\A3_Atlas\Soft_F_Atlas\Truck_02\Data\Truck_02_kab_UN_CO.paa",
				"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kuz_RUkhk_CO.paa",
				"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
				"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_chassis_RUkhk_CO.paa"
				};
				factions[] = {};
			};
		};	
	};

	class Truck_02_transport_base_F: Truck_02_base_F
	{
		class TextureSources
		{
			class Marar
			{
				displayName = $STR_A3_A_TextureSources_Marar0;
				author = $STR_A3_A_BranFlakes;
				textures[] =
				{
				"\A3_Atlas\Soft_F_Atlas\Truck_02\Data\Truck_02_kab_Marar_CO.paa",
				"\A3_Atlas\Soft_F_Atlas\Truck_02\Data\Truck_02_kuz_Marar_CO.paa",
				"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
				"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_INDP_CO.paa"
				};
				factions[] = {};
			};
			class UNO
			{
				displayName = $STR_A3_A_TEXTURESOURCES_UNO0;
				author = $STR_A3_A_BranFlakes;
				textures[] =
				{
				"\A3_Atlas\Soft_F_Atlas\Truck_02\Data\Truck_02_kab_UN_CO.paa",
				"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kuz_RUkhk_CO.paa",
				"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
				"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_chassis_RUkhk_CO.paa"
				};
				factions[] = {};
			};
		};
	};

	class Truck_02_box_base_lxWS: Truck_02_Base_F
	{
		class TextureSources
		{
			class Marar
			{
				displayName = $STR_A3_A_TextureSources_Marar0;
				author = $STR_A3_A_BranFlakes;
				textures[] =
				{
				"\A3_Atlas\Soft_F_Atlas\Truck_02\Data\Truck_02_kab_Marar_CO.paa",
				"\A3_Atlas\Soft_F_Atlas\Truck_02\Data\Truck_02_repair_Marar_CO.paa",
				"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
				"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_chassis_ghex_CO.paa",
				"lxws\vehicles_f_lxws\Truck_02\data\addons_black_co.paa"
				};
				factions[] = {};
			};
			class UNO
			{
				displayName = $STR_A3_A_TEXTURESOURCES_UNO0;
				author = $STR_A3_A_BranFlakes;
				textures[] =
				{
				"\A3_Atlas\Soft_F_Atlas\Truck_02\Data\Truck_02_kab_UN_CO.paa",
				"\A3_Atlas\Soft_F_Atlas\Truck_02\Data\Truck_02_repair_UN_CO.paa",
				"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
				"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_chassis_RUkhk_CO.paa",
				"lxws\vehicles_f_lxws\Truck_02\data\addons_black_co.paa"
				};
				factions[] = {};
			};
		};
	};
	/*class Truck_02_box_base_F: Truck_02_base_F
	{
		class TextureSources
		{
			class Marar
			{
				displayName = $STR_A3_A_TextureSources_Marar0;
				author = $STR_A3_A_BranFlakes;
				textures[] =
				{
				"\A3_Atlas\Soft_F_Atlas\Truck_02\Data\Truck_02_kab_Marar_CO.paa",
				"\A3_Atlas\Soft_F_Atlas\Truck_02\Data\Truck_02_repair_Marar_CO.paa",
				"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
				"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_chassis_ghex_CO.paa"
				};
				factions[] = {};
			};
			class UNO
			{
				displayName = $STR_A3_A_TEXTURESOURCES_UNO0;
				author = $STR_A3_A_BranFlakes;
				textures[] =
				{
				"\A3_Atlas\Soft_F_Atlas\Truck_02\Data\Truck_02_kab_UN_CO.paa",
				"\A3_Atlas\Soft_F_Atlas\Truck_02\Data\Truck_02_repair_UN_CO.paa",
				"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
				"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_chassis_RUkhk_CO.paa"
				};
				factions[] = {};
			};
		};
	};*/

	class Truck_02_medical_base_F: Truck_02_box_base_lxWS
	{
		class TextureSources
		{
			class Marar
			{
				displayName = $STR_A3_A_TextureSources_Marar0;
				author = $STR_A3_A_BranFlakes;
				textures[] =
				{
				"\A3_Atlas\Soft_F_Atlas\Truck_02\Data\Truck_02_kab_Marar_CO.paa",
				"\A3_Atlas\Soft_F_Atlas\Truck_02\Data\Truck_02_kuz_Marar_CO.paa",
				"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
				"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_chassis_ghex_CO.paa",
				"lxws\vehicles_f_lxws\Truck_02\data\addons_black_co.paa"
				};
				factions[] = {};
			};
			class UNO
			{
				displayName = $STR_A3_A_TEXTURESOURCES_UNO0;
				author = $STR_A3_A_BranFlakes;
				textures[] =
				{
				"\A3_Atlas\Soft_F_Atlas\Truck_02\Data\Truck_02_kab_UN_CO.paa",
				"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kuz_RUkhk_CO.paa",
				"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
				"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_chassis_RUkhk_CO.paa",
				"lxws\vehicles_f_lxws\Truck_02\data\addons_black_co.paa"
				};
				factions[] = {};
			};
		};
	};

	class Truck_02_Ammo_base_lxWS: Truck_02_Base_F
	{
		class TextureSources
		{
			class Marar
			{
				displayName = $STR_A3_A_TextureSources_Marar0;
				author = $STR_A3_A_BranFlakes;
				textures[] =
				{
				"\A3_Atlas\Soft_F_Atlas\Truck_02\Data\Truck_02_kab_Marar_CO.paa",
				"\A3_Atlas\Soft_F_Atlas\Truck_02\Data\Truck_02_repair_Marar_CO.paa",
				"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
				"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_chassis_ghex_CO.paa",
				"lxws\vehicles_f_lxws\Truck_02\data\addons_black_co.paa"
				};
				factions[] = {};
			};
			class UNO
			{
				displayName = $STR_A3_A_TEXTURESOURCES_UNO0;
				author = $STR_A3_A_BranFlakes;
				textures[] =
				{
				"\A3_Atlas\Soft_F_Atlas\Truck_02\Data\Truck_02_kab_UN_CO.paa",
				"\A3_Atlas\Soft_F_Atlas\Truck_02\Data\Truck_02_repair_UN_CO.paa",
				"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
				"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_chassis_RUkhk_CO.paa",
				"lxws\vehicles_f_lxws\Truck_02\data\addons_black_co.paa"
				};
				factions[] = {};
			};
		};
	};
	/*class Truck_02_Ammo_base_F: Truck_02_base_F
	{
		class TextureSources
		{
			class Marar
			{
				displayName = $STR_A3_A_TextureSources_Marar0;
				author = $STR_A3_A_BranFlakes;
				textures[] =
				{
				"\A3_Atlas\Soft_F_Atlas\Truck_02\Data\Truck_02_kab_Marar_CO.paa",
				"\A3_Atlas\Soft_F_Atlas\Truck_02\Data\Truck_02_repair_Marar_CO.paa",
				"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
				"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_chassis_ghex_CO.paa"
				};
				factions[] = {};
			};
			class UNO
			{
				displayName = $STR_A3_A_TEXTURESOURCES_UNO0;
				author = $STR_A3_A_BranFlakes;
				textures[] =
				{
				"\A3_Atlas\Soft_F_Atlas\Truck_02\Data\Truck_02_kab_UN_CO.paa",
				"\A3_Atlas\Soft_F_Atlas\Truck_02\Data\Truck_02_repair_UN_CO.paa",
				"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
				"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_chassis_RUkhk_CO.paa"
				};
				factions[] = {};
			};
		};
	};*/

	class Truck_02_fuel_base_F: Truck_02_base_F
	{
		class TextureSources
		{
			class Marar
			{
				displayName = $STR_A3_A_TextureSources_Marar0;
				author = $STR_A3_A_BranFlakes;
				textures[] =
				{
				"\A3_Atlas\Soft_F_Atlas\Truck_02\Data\Truck_02_kab_Marar_CO.paa",
				"\A3_Atlas\Soft_F_Atlas\Truck_02\Data\Truck_02_fuel_Marar_CO.paa",
				"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
				"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_chassis_ghex_CO.paa"
				};
				factions[] = {};
			};
			class UNO
			{
				displayName = $STR_A3_A_TEXTURESOURCES_UNO0;
				author = $STR_A3_A_BranFlakes;
				textures[] =
				{
				"\A3_Atlas\Soft_F_Atlas\Truck_02\Data\Truck_02_kab_UN_CO.paa",
				"\A3_Atlas\Soft_F_Atlas\Truck_02\Data\Truck_02_fuel_UN_CO.paa",
				"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
				"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_chassis_RUkhk_CO.paa"
				};
				factions[] = {};
			};
		};
	};
	class Truck_02_cargo_base_lxWS: Truck_02_Base_F
	{
		hiddenSelections[] = {camo1, camo2, camo3, camo4, camo9};
		class TextureSources
		{
			class Marar
			{
				displayName = $STR_A3_A_TextureSources_Marar0;
				author = $STR_A3_A_BranFlakes;
				textures[] =
				{
				"\A3_Atlas\Soft_F_Atlas\Truck_02\Data\Truck_02_kab_Marar_CO.paa",
				"\A3_Atlas\Soft_F_Atlas\Truck_02\Data\Truck_02_kuz_Marar_CO.paa",
				"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
				"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_chassis_ghex_CO.paa",
				"lxws\vehicles_f_lxws\Truck_02\data\addons_black_co.paa"
				};
				factions[] = {};
			};
			class UNO
			{
				displayName = $STR_A3_A_TEXTURESOURCES_UNO0;
				author = $STR_A3_A_BranFlakes;
				textures[] =
				{
				"\A3_Atlas\Soft_F_Atlas\Truck_02\Data\Truck_02_kab_UN_CO.paa",
				"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kuz_RUkhk_CO.paa",
				"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
				"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_chassis_RUkhk_CO.paa",
				"lxws\vehicles_f_lxws\Truck_02\data\addons_black_co.paa"
				};
				factions[] = {};
			};
		};
	};
	/*class Truck_02_cargo_base_F: Truck_02_viv_base_F
	{
		class TextureSources
		{
			class Marar
			{
				displayName = $STR_A3_A_TextureSources_Marar0;
				author = $STR_A3_A_BranFlakes;
				textures[] =
				{
				"\A3_Atlas\Soft_F_Atlas\Truck_02\Data\Truck_02_kab_Marar_CO.paa",
				"\A3_Atlas\Soft_F_Atlas\Truck_02\Data\Truck_02_kuz_Marar_CO.paa",
				"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
				"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_chassis_ghex_CO.paa"
				};
				factions[] = {};
			};
			class UNO
			{
				displayName = $STR_A3_A_TEXTURESOURCES_UNO0;
				author = $STR_A3_A_BranFlakes;
				textures[] =
				{
				"\A3_Atlas\Soft_F_Atlas\Truck_02\Data\Truck_02_kab_UN_CO.paa",
				"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kuz_RUkhk_CO.paa",
				"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
				"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_chassis_RUkhk_CO.paa"
				};
				factions[] = {};
			};
		};
	};*/

	class Truck_02_flatbed_base_lxWS: Truck_02_cargo_base_lxWS{};
	/*class Truck_02_flatbed_base_F: Truck_02_viv_base_F
	{
		class TextureSources
		{
			class Marar
			{
				displayName = $STR_A3_A_TextureSources_Marar0;
				author = $STR_A3_A_BranFlakes;
				textures[] =
				{
				"\A3_Atlas\Soft_F_Atlas\Truck_02\Data\Truck_02_kab_Marar_CO.paa",
				"\A3_Atlas\Soft_F_Atlas\Truck_02\Data\Truck_02_kuz_Marar_CO.paa",
				"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
				"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_chassis_ghex_CO.paa"
				};
				factions[] = {};
			};
			class UNO
			{
				displayName = $STR_A3_A_TEXTURESOURCES_UNO0;
				author = $STR_A3_A_BranFlakes;
				textures[] =
				{
				"\A3_Atlas\Soft_F_Atlas\Truck_02\Data\Truck_02_kab_UN_CO.paa",
				"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kuz_RUkhk_CO.paa",
				"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
				"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_chassis_RUkhk_CO.paa"
				};
				factions[] = {};
			};
		};
	};*/

	class O_Truck_02_covered_F;
    class O_Truck_02_transport_F;
	class O_Truck_02_box_F;
	class O_Truck_02_medical_F;
	class O_Truck_02_Ammo_F;
	class O_Truck_02_fuel_F;
    class Truck_02_MRL_base_F;
	// Arma 3 Atlas
	#include "cfgOpfor_Aegis.hpp"       // Belarus
	#include "cfgOpfor_Atlas.hpp"       // Takistani Army
	#include "cfgVenezuela.hpp"		// Venezuela
	#include "cfgMarar.hpp"			// Marar
	#include "cfgUNO.hpp"			// United Nations
    /*
	#include "cfgHIMF.hpp"              // HIMF
	#include "cfgCDF.hpp"               // CDF
    */
    // Deprecated classes
    #include "deprecated.hpp"
};