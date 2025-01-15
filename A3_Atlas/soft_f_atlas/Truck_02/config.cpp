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
			class WoodlandHex
			{
				displayName = $STR_A3_A_TEXTURESOURCES_WHEX0;
				author = $STR_A3_A_Lowaltitude;
				textures[] =
				{
					"\A3_Atlas\Soft_F_Atlas\Truck_02\Data\Truck_02_kab_WHex_CO.paa",
					"\A3_Atlas\Soft_F_Atlas\Truck_02\Data\Truck_02_kuz_Whex_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_int_RUKHK_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_chassis_RUkhk_CO.paa"
				};
				factions[] = {};
			};
			class Jungle
			{
				displayName = $STR_A3_A_TEXTURESOURCES_JUNGLE0;
				author = $STR_A3_A_BranFlakes;
				textures[] =
				{
					"\A3_Atlas\Soft_F_Atlas\Truck_02\Data\Truck_02_kab_Jungle_CO.paa",
					"\A3_Atlas\Soft_F_Atlas\Truck_02\Data\Truck_02_kuz_Jungle_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_int_RUKHK_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_chassis_RUkhk_CO.paa"
				};
				factions[] = {};
			};
			class Takistan
			{
				displayName = $STR_A3_A_TEXTURESOURCES_TKHEX0;
				author = $STR_A3_A_BranFlakes;
				textures[] =
				{
					"\A3_Atlas\Soft_F_Atlas\Truck_02\Data\Truck_02_kab_tk_CO.paa",
					"\A3_Atlas\Soft_F_Atlas\Truck_02\Data\Truck_02_kuz_tk_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_OPFOR_CO.paa"
				};
				factions[] = {};
			};
			class Ardistan
			{
				displayName = $STR_A3_A_TEXTURESOURCES_ardi0;
				author = $STR_A3_A_BranFlakes;
				textures[] =
				{
					"\A3_Atlas\Soft_F_Atlas\Truck_02\Data\Truck_02_kab_ardi_CO.paa",
					"\A3_Atlas\Soft_F_Atlas\Truck_02\Data\Truck_02_kuz_ardi_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_int_RUKHK_CO.paa",
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
			class WoodlandHex
			{
				displayName = $STR_A3_A_TEXTURESOURCES_WHEX0;
				author = $STR_A3_A_Lowaltitude;
				textures[] =
				{
					"\A3_Atlas\Soft_F_Atlas\Truck_02\Data\Truck_02_kab_WHex_CO.paa",
					"\A3_Atlas\Soft_F_Atlas\Truck_02\Data\Truck_02_kuz_Whex_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_int_RUKHK_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_chassis_RUkhk_CO.paa"
				};
				factions[] = {};
			};
			class Jungle
			{
				displayName = $STR_A3_A_TEXTURESOURCES_JUNGLE0;
				author = $STR_A3_A_BranFlakes;
				textures[] =
				{
					"\A3_Atlas\Soft_F_Atlas\Truck_02\Data\Truck_02_kab_Jungle_CO.paa",
					"\A3_Atlas\Soft_F_Atlas\Truck_02\Data\Truck_02_kuz_Jungle_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_int_RUKHK_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_chassis_RUkhk_CO.paa"
				};
				factions[] = {};
			};
			class Takistan
			{
				displayName = $STR_A3_A_TEXTURESOURCES_TKHEX0;
				author = $STR_A3_A_BranFlakes;
				textures[] =
				{
					"\A3_Atlas\Soft_F_Atlas\Truck_02\Data\Truck_02_kab_tk_CO.paa",
					"\A3_Atlas\Soft_F_Atlas\Truck_02\Data\Truck_02_kuz_tk_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_OPFOR_CO.paa"
				};
				factions[] = {};
			};
			class Ardistan
			{
				displayName = $STR_A3_A_TEXTURESOURCES_ardi0;
				author = $STR_A3_A_BranFlakes;
				textures[] =
				{
					"\A3_Atlas\Soft_F_Atlas\Truck_02\Data\Truck_02_kab_ardi_CO.paa",
					"\A3_Atlas\Soft_F_Atlas\Truck_02\Data\Truck_02_kuz_ardi_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_int_RUKHK_CO.paa",
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
			class WoodlandHex
			{
				displayName = $STR_A3_A_TEXTURESOURCES_WHEX0;
				author = $STR_A3_A_Lowaltitude;
				textures[] =
				{
					"\A3_Atlas\Soft_F_Atlas\Truck_02\Data\Truck_02_kab_WHex_CO.paa",
					"\A3_Atlas\Soft_F_Atlas\Truck_02\Data\Truck_02_repair_Whex_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_int_RUKHK_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_chassis_RUkhk_CO.paa",
					"lxws\vehicles_f_lxws\Truck_02\data\addons_black_co.paa"
				};
				factions[] = {};
			};
			class Jungle
			{
				displayName = $STR_A3_A_TEXTURESOURCES_JUNGLE0;
				author = $STR_A3_A_BranFlakes;
				textures[] =
				{
					"\A3_Atlas\Soft_F_Atlas\Truck_02\Data\Truck_02_kab_Jungle_CO.paa",
					"\A3_Atlas\Soft_F_Atlas\Truck_02\Data\Truck_02_repair_Jungle_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_int_RUKHK_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_chassis_RUkhk_CO.paa",
					"lxws\vehicles_f_lxws\Truck_02\data\addons_black_co.paa"
				};
				factions[] = {};
			};
			class Takistan
			{
				displayName = $STR_A3_A_TEXTURESOURCES_TKHEX0;
				author = $STR_A3_A_BranFlakes;
				textures[] =
				{
					"\A3_Atlas\Soft_F_Atlas\Truck_02\Data\Truck_02_kab_tk_CO.paa",
					"\A3_Atlas\Soft_F_Atlas\Truck_02\Data\Truck_02_repair_tk_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_OPFOR_CO.paa",
					"lxws\vehicles_f_lxws\Truck_02\data\addons_black_co.paa"
				};
				factions[] = {};
			};
			class Ardistan
			{
				displayName = $STR_A3_A_TEXTURESOURCES_ardi0;
				author = $STR_A3_A_BranFlakes;
				textures[] =
				{
					"\A3_Atlas\Soft_F_Atlas\Truck_02\Data\Truck_02_kab_ardi_CO.paa",
					"\A3_Atlas\Soft_F_Atlas\Truck_02\Data\Truck_02_repair_ardi_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_int_RUKHK_CO.paa",
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
			class WoodlandHex
			{
				displayName = $STR_A3_A_TEXTURESOURCES_WHEX0;
				author = $STR_A3_A_Lowaltitude;
				textures[] =
				{
					"\A3_Atlas\Soft_F_Atlas\Truck_02\Data\Truck_02_kab_WHex_CO.paa",
					"\A3_Atlas\Soft_F_Atlas\Truck_02\Data\Truck_02_kuz_Whex_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_int_RUKHK_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_chassis_RUkhk_CO.paa",
					"lxws\vehicles_f_lxws\Truck_02\data\addons_black_co.paa"
				};
				factions[] = {};
			};
			class Jungle
			{
				displayName = $STR_A3_A_TEXTURESOURCES_JUNGLE0;
				author = $STR_A3_A_BranFlakes;
				textures[] =
				{
					"\A3_Atlas\Soft_F_Atlas\Truck_02\Data\Truck_02_kab_Jungle_CO.paa",
					"\A3_Atlas\Soft_F_Atlas\Truck_02\Data\Truck_02_kuz_Jungle_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_int_RUKHK_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_chassis_RUkhk_CO.paa",
					"lxws\vehicles_f_lxws\Truck_02\data\addons_black_co.paa"
				};
				factions[] = {};
			};
			class Takistan
			{
				displayName = $STR_A3_A_TEXTURESOURCES_TKHEX0;
				author = $STR_A3_A_BranFlakes;
				textures[] =
				{
					"\A3_Atlas\Soft_F_Atlas\Truck_02\Data\Truck_02_kab_tk_CO.paa",
					"\A3_Atlas\Soft_F_Atlas\Truck_02\Data\Truck_02_kuz_tk_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_OPFOR_CO.paa",
					"lxws\vehicles_f_lxws\Truck_02\data\addons_black_co.paa"
				};
				factions[] = {};
			};
			class Ardistan
			{
				displayName = $STR_A3_A_TEXTURESOURCES_ardi0;
				author = $STR_A3_A_BranFlakes;
				textures[] =
				{
					"\A3_Atlas\Soft_F_Atlas\Truck_02\Data\Truck_02_kab_ardi_CO.paa",
					"\A3_Atlas\Soft_F_Atlas\Truck_02\Data\Truck_02_kuz_ardi_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_int_RUKHK_CO.paa",
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
			class WoodlandHex
			{
				displayName = $STR_A3_A_TEXTURESOURCES_WHEX0;
				author = $STR_A3_A_Lowaltitude;
				textures[] =
				{
					"\A3_Atlas\Soft_F_Atlas\Truck_02\Data\Truck_02_kab_WHex_CO.paa",
					"\A3_Atlas\Soft_F_Atlas\Truck_02\Data\Truck_02_ammo_Whex_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_int_RUKHK_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_chassis_RUkhk_CO.paa",
					"lxws\vehicles_f_lxws\Truck_02\data\addons_black_co.paa"
				};
				factions[] = {};
			};
			class Jungle
			{
				displayName = $STR_A3_A_TEXTURESOURCES_JUNGLE0;
				author = $STR_A3_A_BranFlakes;
				textures[] =
				{
					"\A3_Atlas\Soft_F_Atlas\Truck_02\Data\Truck_02_kab_Jungle_CO.paa",
					"\A3_Atlas\Soft_F_Atlas\Truck_02\Data\Truck_02_repair_Jungle_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_int_RUKHK_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_chassis_RUkhk_CO.paa",
					"lxws\vehicles_f_lxws\Truck_02\data\addons_black_co.paa"
				};
				factions[] = {};
			};
			class Takistan
			{
				displayName = $STR_A3_A_TEXTURESOURCES_TKHEX0;
				author = $STR_A3_A_BranFlakes;
				textures[] =
				{
					"\A3_Atlas\Soft_F_Atlas\Truck_02\Data\Truck_02_kab_tk_CO.paa",
					"\A3_Atlas\Soft_F_Atlas\Truck_02\Data\Truck_02_repair_tk_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_OPFOR_CO.paa",
					"lxws\vehicles_f_lxws\Truck_02\data\addons_black_co.paa"
				};
				factions[] = {};
			};
			class Ardistan
			{
				displayName = $STR_A3_A_TEXTURESOURCES_ardi0;
				author = $STR_A3_A_BranFlakes;
				textures[] =
				{
					"\A3_Atlas\Soft_F_Atlas\Truck_02\Data\Truck_02_kab_ardi_CO.paa",
					"\A3_Atlas\Soft_F_Atlas\Truck_02\Data\Truck_02_repair_ardi_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_int_RUKHK_CO.paa",
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
			class WoodlandHex
			{
				displayName = $STR_A3_A_TEXTURESOURCES_WHEX0;
				author = $STR_A3_A_Lowaltitude;
				textures[] =
				{
					"\A3_Atlas\Soft_F_Atlas\Truck_02\Data\Truck_02_kab_WHex_CO.paa",
					"\A3_Atlas\Soft_F_Atlas\Truck_02\Data\Truck_02_fuel_Whex_CO.paa", // Needs to be subbed for repair parts
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_int_RUKHK_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_chassis_RUkhk_CO.paa"
				};
				factions[] = {};
			};
			class Jungle
			{
				displayName = $STR_A3_A_TEXTURESOURCES_JUNGLE0;
				author = $STR_A3_A_BranFlakes;
				textures[] =
				{
					"\A3_Atlas\Soft_F_Atlas\Truck_02\Data\Truck_02_kab_Jungle_CO.paa",
					"\A3_Atlas\Soft_F_Atlas\Truck_02\Data\Truck_02_fuel_Jungle_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_int_RUKHK_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_chassis_RUkhk_CO.paa"
				};
				factions[] = {};
			};
			class Takistan
			{
				displayName = $STR_A3_A_TEXTURESOURCES_TKHEX0;
				author = $STR_A3_A_BranFlakes;
				textures[] =
				{
					"\A3_Atlas\Soft_F_Atlas\Truck_02\Data\Truck_02_kab_tk_CO.paa",
					"\A3_Atlas\Soft_F_Atlas\Truck_02\Data\Truck_02_fuel_tk_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_OPFOR_CO.paa"
				};
				factions[] = {};
			};
			class Ardistan
			{
				displayName = $STR_A3_A_TEXTURESOURCES_ardi0;
				author = $STR_A3_A_BranFlakes;
				textures[] =
				{
					"\A3_Atlas\Soft_F_Atlas\Truck_02\Data\Truck_02_kab_ardi_CO.paa",
					"\A3_Atlas\Soft_F_Atlas\Truck_02\Data\Truck_02_fuel_ardi_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_int_RUKHK_CO.paa",
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
			class WoodlandHex
			{
				displayName = $STR_A3_A_TEXTURESOURCES_WHEX0;
				author = $STR_A3_A_Lowaltitude;
				textures[] =
				{
					"\A3_Atlas\Soft_F_Atlas\Truck_02\Data\Truck_02_kab_WHex_CO.paa",
					"\A3_Atlas\Soft_F_Atlas\Truck_02\Data\Truck_02_kuz_Whex_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_int_RUKHK_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_chassis_RUkhk_CO.paa",
					"lxws\vehicles_f_lxws\Truck_02\data\addons_black_co.paa"
				};
				factions[] = {};
			};
			class Jungle
			{
				displayName = $STR_A3_A_TEXTURESOURCES_JUNGLE0;
				author = $STR_A3_A_BranFlakes;
				textures[] =
				{
					"\A3_Atlas\Soft_F_Atlas\Truck_02\Data\Truck_02_kab_Jungle_CO.paa",
					"\A3_Atlas\Soft_F_Atlas\Truck_02\Data\Truck_02_kuz_Jungle_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_int_RUKHK_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_chassis_RUkhk_CO.paa",
					"lxws\vehicles_f_lxws\Truck_02\data\addons_black_co.paa"
				};
				factions[] = {};
			};
			class Takistan
			{
				displayName = $STR_A3_A_TEXTURESOURCES_TKHEX0;
				author = $STR_A3_A_BranFlakes;
				textures[] =
				{
					"\A3_Atlas\Soft_F_Atlas\Truck_02\Data\Truck_02_kab_tk_CO.paa",
					"\A3_Atlas\Soft_F_Atlas\Truck_02\Data\Truck_02_kuz_tk_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_OPFOR_CO.paa",
					"lxws\vehicles_f_lxws\Truck_02\data\addons_black_co.paa"
				};
				factions[] = {};
			};
			class Ardistan
			{
				displayName = $STR_A3_A_TEXTURESOURCES_ardi0;
				author = $STR_A3_A_BranFlakes;
				textures[] =
				{
					"\A3_Atlas\Soft_F_Atlas\Truck_02\Data\Truck_02_kab_ardi_CO.paa",
					"\A3_Atlas\Soft_F_Atlas\Truck_02\Data\Truck_02_kuz_ardi_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_int_RUKHK_CO.paa",
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
	class Truck_02_MRL_base_F: Truck_02_base_F
	{
		class TextureSources
		{
			class WoodlandHex
			{
				displayName = $STR_A3_A_TEXTURESOURCES_WHEX0;
				author = $STR_A3_A_Lowaltitude;
				textures[] =
				{
					"\A3_Atlas\Soft_F_Atlas\Truck_02\Data\Truck_02_kab_WHex_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_int_RUKHK_CO.paa",
					"\A3_Atlas\Soft_F_Atlas\Truck_02\Data\Truck_02_MRL_WHex_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_chassis_RUkhk_CO.paa",
				};
				factions[] = {};
			};

			class Ardistan
			{
				displayName = $STR_A3_A_TEXTURESOURCES_ardi0;
				author = $STR_A3_A_BranFlakes;
				textures[] =
				{
					"\A3_Atlas\Soft_F_Atlas\Truck_02\Data\Truck_02_kab_ardi_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_int_RUKHK_CO.paa",
					"\A3_Atlas\Soft_F_Atlas\Truck_02\Data\Truck_02_MRL_ardi_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_chassis_RUkhk_CO.paa",
				};
				factions[] = {};
			};
			class Takistan
			{
				displayName = $STR_A3_A_TEXTURESOURCES_TKHEX0;
				author = $STR_A3_A_BranFlakes;
				textures[] =
				{
					"\A3_Atlas\Soft_F_Atlas\Truck_02\Data\Truck_02_kab_tk_CO.paa",
					"\A3_Atlas\Soft_F_Atlas\Truck_02\Data\Truck_02_MLR_tk_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_OPFOR_CO.paa"
				};
				factions[] = {};
			};
		};
	};
	class Truck_02_aa_base_lxWS;

	class O_Truck_02_covered_F;
    class O_Truck_02_transport_F;
	class O_Truck_02_box_F;
	class O_Truck_02_medical_F;
	class O_Truck_02_Ammo_F;
	class O_Truck_02_fuel_F;
	class O_Truck_02_MRL_F;
    
	// Arma 3 Atlas
	#include "cfgOpfor_Aegis.hpp"       // Belarus
	#include "cfgOpfor_Atlas.hpp"       // Takistani Army
	//#include "cfgVenezuela.hpp"		// Venezuela
	#include "cfgMarar.hpp"				// Marar
	#include "cfgUNO.hpp"				// United Nations
	#include "cfgHIMF.hpp"              // HIMF
	//#include "cfgCDF.hpp"             // CDF
	#include "cfgArdistan.hpp"			//Ardistan
    // Deprecated classes
    #include "deprecated.hpp"
};