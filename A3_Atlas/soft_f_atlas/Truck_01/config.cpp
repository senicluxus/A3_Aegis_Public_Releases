#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class CfgVehicles
{
	// Bases
	class Truck_01_base_F;
	class Truck_01_viv_base_F;

	// Arma 3
	class B_Truck_01_transport_F: Truck_01_base_F
	{
		class TextureSources
		{
			class France
			{
				displayName = $STR_A3_A_TEXTURESOURCES_GreenFR0;
				author = $STR_A3_A_BranFlakes;
				textures[] =
				{
					"\A3_atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_ext_01_fr_CO.paa",
        			"\A3_atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_ext_02_fr_CO.paa",
        			"\A3_atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_cargo_fr_CO.paa",
        			"\A3_atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_cover_fr_CO.paa"
				};
				factions[] = {};
			};
			class ADF
			{
				displayName = $STR_A3_A_TEXTURESOURCES_ADF0;
				author = $STR_A3_A_BranFlakes;
				textures[] =
				{
					"\A3_Atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_ext_01_ADF_CO.paa",
        			"\A3_Atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_ext_02_ADF_CO.paa",
        			"\A3_Atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_cargo_brown_CO.paa",
        			"\A3_Atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_cover_brown_CO.paa"
   				};
				factions[] = {};
			};
			class Brown
			{
				displayName = $STR_A3_TEXTURESOURCES_BROWN0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_ext_01_brown_CO.paa",
        			"\A3_Atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_ext_02_brown_CO.paa",
        			"\A3_Atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_cargo_brown_CO.paa",
        			"\A3_Atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_cover_brown_CO.paa"
   				};
				factions[] = {};
			};
			class KZG
			{
				displayName = "Karzeghistan";
				author = $STR_A3_A_BranFlakes;
				textures[] =
				{
					"\A3_Atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_ext_01_kzg_CO.paa",
        			"\A3_Atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_ext_02_kzg_CO.paa",
        			"\A3_Atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_cargo_kzg_co.paa",
        			"\A3_Atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_cover_kzg_co.paa"
   				};
				factions[] = {};
			};
		};
	};
	class B_Truck_01_covered_F: B_Truck_01_transport_F
	{
		class TextureSources
		{
			class France
			{
				displayName = $STR_A3_A_TEXTURESOURCES_GreenFR0;
				author = $STR_A3_A_BranFlakes;
				textures[] =
				{
					"\A3_atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_ext_01_fr_CO.paa",
        			"\A3_atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_ext_02_fr_CO.paa",
        			"\A3_atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_cargo_fr_CO.paa",
        			"\A3_atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_cover_fr_CO.paa"
				};
				factions[] = {};
			};
			class ADF
			{
				displayName = $STR_A3_A_TEXTURESOURCES_ADF0;
				author = $STR_A3_A_BranFlakes;
				textures[] =
				{
					"\A3_Atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_ext_01_ADF_CO.paa",
        			"\A3_Atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_ext_02_ADF_CO.paa",
        			"\A3_Atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_cargo_brown_CO.paa",
        			"\A3_Atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_cover_brown_CO.paa"
   				};
				factions[] = {};
			};
			class Brown
			{
				displayName = $STR_A3_TEXTURESOURCES_BROWN0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_ext_01_brown_CO.paa",
        			"\A3_Atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_ext_02_brown_CO.paa",
        			"\A3_Atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_cargo_brown_CO.paa",
        			"\A3_Atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_cover_brown_CO.paa"
   				};
				factions[] = {};
			};
			class KZG
			{
				displayName = "Karzeghistan";
				author = $STR_A3_A_BranFlakes;
				textures[] =
				{
					"\A3_Atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_ext_01_kzg_CO.paa",
        			"\A3_Atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_ext_02_kzg_CO.paa",
        			"\A3_Atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_cargo_kzg_co.paa",
        			"\A3_Atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_cover_kzg_co.paa"
   				};
				factions[] = {};
			};
		};
	};
	class B_Truck_01_mover_F: B_Truck_01_transport_F
	{
		class TextureSources
		{
			class France
			{
				displayName = $STR_A3_A_TEXTURESOURCES_GreenFR0;
				author = $STR_A3_A_BranFlakes;
				textures[] =
				{
					"\A3_atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_ext_01_fr_CO.paa",
        			"\A3_atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_ext_02_fr_CO.paa",
        			"\A3_atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_mprimer_fr_CO.paa"
				};
				factions[] = {};
			};
			class ADF
			{
				displayName = $STR_A3_A_TEXTURESOURCES_ADF0;
				author = $STR_A3_A_BranFlakes;
				textures[] =
				{
					"\A3_Atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_ext_01_ADF_CO.paa",
        			"\A3_Atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_ext_02_ADF_CO.paa",
        			"\A3_Atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_mprimer_ADF_CO.paa"
   				};
				factions[] = {};
			};
			class Brown
			{
				displayName = $STR_A3_TEXTURESOURCES_BROWN0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_ext_01_brown_CO.paa",
        			"\A3_Atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_ext_02_brown_CO.paa",
        			"\A3_Atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_mprimer_brown_CO.paa"
   				};
				factions[] = {};
			};
			class KZG
			{
				displayName = "Karzeghistan";
				author = $STR_A3_A_BranFlakes;
				textures[] =
				{
					"\A3_Atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_ext_01_kzg_CO.paa",
        			"\A3_Atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_ext_02_kzg_CO.paa",
        			"\A3_Atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_mprimer_kzg_CO.paa"
   				};
				factions[] = {};
			};
		};
	};
	class B_Truck_01_box_F: B_Truck_01_mover_F
	{
		class TextureSources
		{
			class France
			{
				displayName = $STR_A3_A_TEXTURESOURCES_GreenFR0;
				author = $STR_A3_A_BranFlakes;
				textures[] =
				{
					"\A3_atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_ext_01_fr_CO.paa",
        			"\A3_atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_ext_02_fr_CO.paa",
        			"\A3_atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_ammo_fr_CO.paa",
        			"\A3\Structures_F\Data\Metal\Containers\containers_02_set_CO.paa"
				};
				factions[] = {};
			};
			class ADF
			{
				displayName = $STR_A3_A_TEXTURESOURCES_ADF0;
				author = $STR_A3_A_BranFlakes;
				textures[] =
				{
					"\A3_Atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_ext_01_ADF_CO.paa",
        			"\A3_Atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_ext_02_ADF_CO.paa",
        			"\A3_Atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_ammo_brown_CO.paa",
        			"\A3_Atlas\Soft_F_Atlas\Truck_01\Data\Containers_02_set_brown_CO.paa"
   				};
				factions[] = {};
			};
			class Brown
			{
				displayName = $STR_A3_TEXTURESOURCES_BROWN0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_ext_01_brown_CO.paa",
        			"\A3_Atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_ext_02_brown_CO.paa",
        			"\A3_Atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_ammo_brown_CO.paa",
        			"\A3_Atlas\Soft_F_Atlas\Truck_01\Data\Containers_02_set_brown_CO.paa"
   				};
				factions[] = {};
			};
			class KZG
			{
				displayName = "Karzeghistan";
				author = $STR_A3_A_BranFlakes;
				textures[] =
				{
        			"\A3_Atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_ext_01_kzg_CO.paa",
        			"\A3_Atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_ext_02_kzg_CO.paa",
       	 			"\A3_Atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_ammo_kzg_CO.paa",
        			"\A3_Atlas\Soft_F_Atlas\Truck_01\Data\Containers_02_set_brown_CO.paa"
    			};
				factions[] = {};
			};
		};
	};
	class B_Truck_01_Repair_F: B_Truck_01_mover_F
	{
		class TextureSources
		{
			class France
			{
				displayName = $STR_A3_A_TEXTURESOURCES_GreenFR0;
				author = $STR_A3_A_BranFlakes;
				textures[] =
				{
					"\A3_atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_ext_01_fr_CO.paa",
        			"\A3_atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_ext_02_fr_CO.paa",
        			"\A3_atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_ammo_fr_CO.paa",
        			"\A3\Structures_F\Data\Metal\Containers\containers_02_set_CO.paa"
				};
				factions[] = {};
			};
			class ADF
			{
				displayName = $STR_A3_A_TEXTURESOURCES_ADF0;
				author = $STR_A3_A_BranFlakes;
				textures[] =
				{
					"\A3_Atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_ext_01_ADF_CO.paa",
        			"\A3_Atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_ext_02_ADF_CO.paa",
        			"\A3_Atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_ammo_brown_CO.paa",
        			"\A3_Atlas\Soft_F_Atlas\Truck_01\Data\Containers_02_set_brown_CO.paa"
   				};
				factions[] = {};
			};
			class Brown
			{
				displayName = $STR_A3_TEXTURESOURCES_BROWN0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_ext_01_brown_CO.paa",
        			"\A3_Atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_ext_02_brown_CO.paa",
        			"\A3_Atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_ammo_brown_CO.paa",
        			"\A3_Atlas\Soft_F_Atlas\Truck_01\Data\Containers_02_set_brown_CO.paa"
   				};
				factions[] = {};
			};
			class KZG
			{
				displayName = "Karzeghistan";
				author = $STR_A3_A_BranFlakes;
				textures[] =
				{
        			"\A3_Atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_ext_01_kzg_CO.paa",
        			"\A3_Atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_ext_02_kzg_CO.paa",
       	 			"\A3_Atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_ammo_kzg_CO.paa",
        			"\A3_Atlas\Soft_F_Atlas\Truck_01\Data\Containers_02_set_brown_CO.paa"
    			};
				factions[] = {};
			};
		};
	};
	class B_Truck_01_ammo_F: B_Truck_01_mover_F
	{
		class TextureSources
		{
			class France
			{
				displayName = $STR_A3_A_TEXTURESOURCES_GreenFR0;
				author = $STR_A3_A_BranFlakes;
				textures[] =
				{
					"\A3_atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_ext_01_fr_CO.paa",
        			"\A3_atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_ext_02_fr_CO.paa",
        			"\A3_atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_ammo_fr_CO.paa"
				};
				factions[] = {};
			};
			class ADF
			{
				displayName = $STR_A3_A_TEXTURESOURCES_ADF0;
				author = $STR_A3_A_BranFlakes;
				textures[] =
				{
					"\A3_Atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_ext_01_ADF_CO.paa",
        			"\A3_Atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_ext_02_ADF_CO.paa",
        			"\A3_Atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_ammo_brown_CO.paa"
   				};
				factions[] = {};
			};
			class Brown
			{
				displayName = $STR_A3_TEXTURESOURCES_BROWN0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_ext_01_brown_CO.paa",
        			"\A3_Atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_ext_02_brown_CO.paa",
        			"\A3_Atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_ammo_brown_CO.paa"
   				};
				factions[] = {};
			};
			class KZG
			{
				displayName = "Karzeghistan";
				author = $STR_A3_A_BranFlakes;
				textures[] =
				{
        			"\A3_Atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_ext_01_kzg_CO.paa",
        			"\A3_Atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_ext_02_kzg_CO.paa",
        			"\A3_Atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_ammo_kzg_CO.paa",
        			"\A3_Atlas\Soft_F_Atlas\Truck_01\Data\Containers_02_set_brown_CO.paa"
    			};
				factions[] = {};
			};
		};
	};
	class B_Truck_01_fuel_F: B_Truck_01_mover_F
	{
		class TextureSources
		{
			class France
			{
				displayName = $STR_A3_A_TEXTURESOURCES_GreenFR0;
				author = $STR_A3_A_BranFlakes;
				textures[] =
				{
					"\A3_atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_ext_01_fr_CO.paa",
        			"\A3_atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_ext_02_fr_CO.paa",
        			"\A3_atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_Fuel_fr_CO.paa"
				};
				factions[] = {};
			};
			class ADF
			{
				displayName = $STR_A3_A_TEXTURESOURCES_ADF0;
				author = $STR_A3_A_BranFlakes;
				textures[] =
				{
					"\A3_Atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_ext_01_ADF_CO.paa",
        			"\A3_Atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_ext_02_ADF_CO.paa",
        			"\A3_Atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_Fuel_ADF_CO.paa"
   				};
				factions[] = {};
			};
			class Brown
			{
				displayName = $STR_A3_TEXTURESOURCES_BROWN0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_ext_01_brown_CO.paa",
        			"\A3_Atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_ext_02_brown_CO.paa",
        			"\A3_Atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_Fuel_brown_CO.paa"
   				};
				factions[] = {};
			};
			class KZG
			{
				displayName = "Karzeghistan";
				author = $STR_A3_A_BranFlakes;
				textures[] =
				{
        			"\A3_Atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_ext_01_kzg_CO.paa",
        			"\A3_Atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_ext_02_kzg_CO.paa",
        			"\A3_Atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_Fuel_kzg_CO.paa"
    			};
				factions[] = {};
			};
		};
	};
	class B_Truck_01_medical_F: B_Truck_01_transport_F
	{
		class TextureSources
		{
			class France
			{
				displayName = $STR_A3_A_TEXTURESOURCES_GreenFR0;
				author = $STR_A3_A_BranFlakes;
				textures[] =
				{
					"\A3_atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_ext_01_fr_CO.paa",
        			"\A3_atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_ext_02_fr_CO.paa",
        			"\A3_atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_cargo_fr_CO.paa",
        			"\A3_atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_cover_fr_CO.paa"
				};
				factions[] = {};
			};
			class ADF
			{
				displayName = $STR_A3_A_TEXTURESOURCES_ADF0;
				author = $STR_A3_A_BranFlakes;
				textures[] =
				{
					"\A3_Atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_ext_01_ADF_CO.paa",
        			"\A3_Atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_ext_02_ADF_CO.paa",
        			"\A3_Atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_cargo_brown_CO.paa",
        			"\A3_Atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_cover_brown_CO.paa"
   				};
				factions[] = {};
			};
			class Brown
			{
				displayName = $STR_A3_TEXTURESOURCES_BROWN0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_ext_01_brown_CO.paa",
        			"\A3_Atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_ext_02_brown_CO.paa",
        			"\A3_Atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_cargo_brown_CO.paa",
        			"\A3_Atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_cover_brown_CO.paa"
   				};
				factions[] = {};
			};
			class KZG
			{
				displayName = "Karzeghistan";
				author = $STR_A3_A_BranFlakes;
				textures[] =
				{
        			"\A3_Atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_ext_01_kzg_CO.paa",
        			"\A3_Atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_ext_02_kzg_CO.paa",
        			"\A3_Atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_cargo_kzg_co.paa",
        			"\A3_Atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_cover_kzg_co.paa"
    			};
				factions[] = {};
			};
		};
	};
	// Arma 3 Enoch
	class Truck_01_flatbed_base_F: Truck_01_viv_base_F
	{
		class TextureSources
		{
			class France
			{
				displayName = $STR_A3_A_TEXTURESOURCES_GreenFR0;
				author = $STR_A3_A_BranFlakes;
				textures[] =
				{
					"\A3_atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_ext_01_fr_CO.paa",
        			"\A3_atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_ext_02_fr_CO.paa",
        			"\A3_atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_ammo_fr_CO.paa",
        			"\A3_atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_cargo_fr_CO.paa"
				};
				factions[] = {};
			};
			class ADF
			{
				displayName = $STR_A3_A_TEXTURESOURCES_ADF0;
				author = $STR_A3_A_BranFlakes;
				textures[] =
				{
					"\A3_Atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_ext_01_ADF_CO.paa",
        			"\A3_Atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_ext_02_ADF_CO.paa",
        			"\A3_Atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_ammo_IDF_CO.paa",
        			"\A3_Atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_cargo_ADF_CO.paa"
   				};
				factions[] = {};
			};
			class Brown
			{
				displayName = $STR_A3_TEXTURESOURCES_BROWN0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_ext_01_brown_CO.paa",
        			"\A3_Atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_ext_02_brown_CO.paa",
        			"\A3_Atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_ammo_IDF_CO.paa",
        			"\A3_Atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_cargo_IDF_CO.paa"
   				};
				factions[] = {};
			};
			class KZG
			{
				displayName = "Karzeghistan";
				author = $STR_A3_A_BranFlakes;
				textures[] =
				{
        			"\A3_Atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_ext_01_kzg_CO.paa",
        			"\A3_Atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_ext_02_kzg_CO.paa",
        			"\A3_Atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_ammo_kzg_CO.paa",
        			"\A3_Atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_cargo_ADF_CO.paa"
    			};
				factions[] = {};
			};
		};
	};
	class Truck_01_cargo_base_F: Truck_01_viv_base_F
	{
		class TextureSources
		{
			class France
			{
				displayName = $STR_A3_A_TEXTURESOURCES_GreenFR0;
				author = $STR_A3_A_BranFlakes;
				textures[] =
				{
					"\A3_atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_ext_01_fr_CO.paa",
        			"\A3_atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_ext_02_fr_CO.paa",
        			"\A3_atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_ammo_fr_CO.paa",
        			"\A3_atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_cargo_fr_CO.paa"
				};
				factions[] = {};
			};
			class ADF
			{
				displayName = $STR_A3_A_TEXTURESOURCES_ADF0;
				author = $STR_A3_A_BranFlakes;
				textures[] =
				{
					"\A3_Atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_ext_01_ADF_CO.paa",
        			"\A3_Atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_ext_02_ADF_CO.paa",
        			"\A3_Atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_ammo_IDF_CO.paa",
        			"\A3_Atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_cargo_ADF_CO.paa"
   				};
				factions[] = {};
			};
			class Brown
			{
				displayName = $STR_A3_TEXTURESOURCES_BROWN0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_ext_01_brown_CO.paa",
        			"\A3_Atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_ext_02_brown_CO.paa",
        			"\A3_Atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_ammo_IDF_CO.paa",
        			"\A3_Atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_cargo_IDF_CO.paa"
   				};
				factions[] = {};
			};
			class KZG
			{
				displayName = "Karzeghistan";
				author = $STR_A3_A_BranFlakes;
				textures[] =
				{
        			"\A3_Atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_ext_01_kzg_CO.paa",
        			"\A3_Atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_ext_02_kzg_CO.paa",
        			"\A3_Atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_ammo_kzg_CO.paa",
        			"\A3_Atlas\Soft_F_Atlas\Truck_01\Data\Truck_01_cargo_ADF_CO.paa"
    			};
				factions[] = {};
			};
		};
	};
	// Arma 3 Atlas
	#include "cfgLegion.hpp"            // Legionnaires
	#include "cfgBlufor_Atlas.hpp"      // Germany
	#include "cfgIDF.hpp"				// IDF
	#include "cfgADF.hpp"				//ADF
	#include "cfgKzg.hpp"				//KZG
    // Deprecated classes
    #include "deprecated.hpp"
};