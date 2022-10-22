#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class NewTurret;
class CfgVehicles
{
	// Arma 3
	class Car_F;
	class Truck_F: Car_F
	{
		class AnimationSources;
	};
	class Truck_02_base_F: Truck_F
	{
		class TextureSources
		{
			class Separatist_01
			{
				displayName = $STR_A3_O_TEXTURESOURCES_SEPARATIST_010;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kab_RUkhk_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kuz_RUkhk_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_int_RUkhk_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_chassis_RUkhk_CO.paa"
				};
				factions[] = {Atlas_OPF_S_F};
			};
			class Separatist_02
			{
				displayName = $STR_A3_O_TEXTURESOURCES_SEPARATIST_020;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kab_RUkhk_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kuz_RUkhk_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_int_RUkhk_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_chassis_RUkhk_CO.paa"
				};
				factions[] = {Atlas_OPF_S_F};
			};
			class Separatist_03
			{
				displayName = $STR_A3_O_TEXTURESOURCES_SEPARATIST_030;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kab_RUkhk_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kuz_RUkhk_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_int_RUkhk_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_chassis_RUkhk_CO.paa"
				};
				factions[] = {Atlas_OPF_S_F};
			};
		};
		class AnimationSources: AnimationSources
		{
			class spz_hide;
		};
		class Turrets;
	};
	class Truck_02_transport_base_F: Truck_02_base_F
	{
		class TextureSources
		{
			class Separatist_01
			{
				displayName = $STR_A3_O_TEXTURESOURCES_SEPARATIST_010;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kab_RUkhk_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kuz_RUkhk_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_int_RUkhk_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_chassis_RUkhk_CO.paa"
				};
				factions[] = {Atlas_OPF_S_F};
			};
			class Separatist_02
			{
				displayName = $STR_A3_O_TEXTURESOURCES_SEPARATIST_020;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kab_RUkhk_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kuz_RUkhk_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_int_RUkhk_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_chassis_RUkhk_CO.paa"
				};
				factions[] = {Atlas_OPF_S_F};
			};
			class Separatist_03
			{
				displayName = $STR_A3_O_TEXTURESOURCES_SEPARATIST_030;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kab_RUkhk_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kuz_RUkhk_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_int_RUkhk_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_chassis_RUkhk_CO.paa"
				};
				factions[] = {Atlas_OPF_S_F};
			};
		};
	};
    class O_Truck_02_covered_F;
    class O_Truck_02_transport_F;
	// Arma 3 West Sahara
	class Truck_02_cargo_base_lxWS: Truck_02_Base_F
	{
		hiddenSelections[] = {camo1, camo2, camo3, camo4, camo9};
		class TextureSources
		{
			class Separatist_01
			{
				displayName = $STR_A3_O_TEXTURESOURCES_SEPARATIST_010;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kab_RUkhk_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kuz_RUkhk_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_int_RUkhk_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_chassis_RUkhk_CO.paa",
					"lxws\vehicles_f_lxws\Truck_02\data\addons_black_co.paa"
				};
				factions[] = {Atlas_OPF_S_F};
			};
			class Separatist_02
			{
				displayName = $STR_A3_O_TEXTURESOURCES_SEPARATIST_020;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kab_RUkhk_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kuz_RUkhk_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_int_RUkhk_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_chassis_RUkhk_CO.paa",
					"lxws\vehicles_f_lxws\Truck_02\data\addons_black_co.paa"
				};
				factions[] = {Atlas_OPF_S_F};
			};
			class Separatist_03
			{
				displayName = $STR_A3_O_TEXTURESOURCES_SEPARATIST_030;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kab_RUkhk_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kuz_RUkhk_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_int_RUkhk_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_chassis_RUkhk_CO.paa",
					"lxws\vehicles_f_lxws\Truck_02\data\addons_black_co.paa"
				};
				factions[] = {Atlas_OPF_S_F};
			};
		};
	};
	class Truck_02_flatbed_base_lxWS: Truck_02_cargo_base_lxWS{};
	// Arma 3 Opposing Forces
    /*
    #include "cfgPara.hpp"
	*/
	#include "cfgChKDZ.hpp"
	// Deprecated Classes! C:
    #include "deprecated.hpp"
};