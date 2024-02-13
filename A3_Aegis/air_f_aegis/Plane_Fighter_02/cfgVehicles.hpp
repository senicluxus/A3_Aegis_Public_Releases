class CfgVehicles
{
    /* Inheritance Tree */
	class Plane_Base_F;

    /* Bases */
	class Plane_Fighter_02_Base_F: Plane_Base_F
	{
        /* Liveries */
		class TextureSources
		{
			class CamoAridHex
			{
				displayName = $STR_A3_A_TextureSources_CamoAridHex0;
			};
			class CamoGreyHex
			{
				displayName = $STR_A3_A_TextureSources_CamoGreyHex0;
				factions[] = {};
			};
			class RUBlue
			{
				displayName = "Blue (Star)";
				textures[] =
				{
					"\A3_Aegis\Air_F_Aegis\Plane_Fighter_02\Data\Fighter_02_fuselage_01_rublue_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Plane_Fighter_02\Data\Fighter_02_fuselage_02_rublue_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Plane_Fighter_02\Data\Fighter_02_fuselage_01_rublue_CO.paa",
					"\A3\Air_F_Jets\Plane_Fighter_02\Data\Numbers\Fighter_02_number_02_CO.paa",
					"\A3\Air_F_Jets\Plane_Fighter_02\Data\Numbers\Fighter_02_number_00_CO.paa",
					"\A3\Air_F_Jets\Plane_Fighter_02\Data\Numbers\Fighter_02_number_01_CO.paa",
					"\A3\Data_F\clear_empty.paa"
				};
				factions[] = {};
			};
			class CamoBlue
			{
				displayName = "$STR_A3_VirtualGarage_Fighter_02_Camo_03";
				author = "$STR_A3_author_B01";
				textures[]=
				{
					"a3\air_f_jets\plane_fighter_02\data\Fighter_02_fuselage_01_Blue_co.paa",
					"a3\air_f_jets\plane_fighter_02\data\Fighter_02_fuselage_02_Blue_co.paa",
					"a3\air_f_jets\plane_fighter_02\data\Fighter_02_fuselage_01_Blue_co.paa",
					"a3\air_f_jets\plane_fighter_02\data\Numbers\Fighter_02_number_02_co.paa",
					"a3\air_f_jets\plane_fighter_02\data\Numbers\Fighter_02_number_00_co.paa",
					"a3\air_f_jets\plane_fighter_02\data\Numbers\Fighter_02_number_01_co.paa",
					"a3\data_f\clear_empty.paa"
				};
				factions[]={};
			};
			class CamoGreenHex
			{
				displayName = $STR_A3_A_TextureSources_CamoGreenHex0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Air_F_Aegis\Plane_Fighter_02\Data\Fighter_02_fuselage_01_ghex_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Plane_Fighter_02\Data\Fighter_02_fuselage_02_ghex_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Plane_Fighter_02\Data\Fighter_02_fuselage_01_ghex_CO.paa",
					"\A3\Air_F_Jets\Plane_Fighter_02\Data\Numbers\Fighter_02_number_02_CO.paa",
					"\A3\Air_F_Jets\Plane_Fighter_02\Data\Numbers\Fighter_02_number_00_CO.paa",
					"\A3\Air_F_Jets\Plane_Fighter_02\Data\Numbers\Fighter_02_number_01_CO.paa",
					"\A3\Data_F\clear_empty.paa"
				};
				factions[] = {};
			};
			/*class Russian
			{
				displayName = $STR_A3_TEXTURESOURCES_RUSSIANSTARFLAG0;
				author = $STR_A3_A_lilithsspawn;
				textures[] =
				{
					"\A3_Aegis\Air_F_Aegis\Plane_Fighter_02\Data\Fighter_02_fuselage_01_rus_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Plane_Fighter_02\Data\Fighter_02_fuselage_02_rus_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Plane_Fighter_02\Data\Fighter_02_fuselage_01_rus_CO.paa",
					"\A3\Air_F_Jets\Plane_Fighter_02\Data\Numbers\Fighter_02_number_02_CO.paa",
					"\A3\Air_F_Jets\Plane_Fighter_02\Data\Numbers\Fighter_02_number_00_CO.paa",
					"\A3\Air_F_Jets\Plane_Fighter_02\Data\Numbers\Fighter_02_number_01_CO.paa",
					"\A3\Data_F\clear_empty.paa"
				};
				factions[] = {};
			};*/
		};
		textureList[] =
		{
			CamoAridHex,1,
			CamoGreyHex,0,
			RUBlue,0,
			CamoBlue,0,
			CamoGreenHex,0
		};

		class EjectionSystem;
	};
	class Ejection_Seat_Plane_Fighter_02_base_F;

	/* Factions */
	#include "cfgOPFOR.hpp"     // IAF & China
	#include "cfgRUS.hpp"       // Russia
};