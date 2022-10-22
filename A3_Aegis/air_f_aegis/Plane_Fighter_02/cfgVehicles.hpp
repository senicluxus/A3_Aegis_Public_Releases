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
			class CamoBlue
			{
				displayName = $STR_A3_A_TextureSources_CamoBlue0;
				textures[] =
				{
					"\A3_Aegis\Air_F_Aegis\Plane_Fighter_02\Data\Fighter_02_fuselage_01_blue_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Plane_Fighter_02\Data\Fighter_02_fuselage_02_blue_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Plane_Fighter_02\Data\Fighter_02_fuselage_01_blue_CO.paa",
					"\A3\Air_F_Jets\Plane_Fighter_02\Data\Numbers\Fighter_02_number_02_CO.paa",
					"\A3\Air_F_Jets\Plane_Fighter_02\Data\Numbers\Fighter_02_number_00_CO.paa",
					"\A3\Air_F_Jets\Plane_Fighter_02\Data\Numbers\Fighter_02_number_01_CO.paa",
					"\A3\Data_F\clear_empty.paa"
				};
				factions[] = {};
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