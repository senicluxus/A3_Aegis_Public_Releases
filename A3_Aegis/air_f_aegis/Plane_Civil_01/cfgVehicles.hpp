class CfgVehicles
{
	class Plane_Base_F;

    /* Bases */
	class Plane_Civil_01_base_F: Plane_Base_F
	{
        /* Liveries */
		class TextureSources
		{
			class White_1
			{
				displayName = $STR_A3_A_CfgVehicles_Plane_Civil_01_base_F_TextureSources_White_10;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3\Air_F_Exp\Plane_Civil_01\Data\BTT_ext_01_CO.paa",
					"\A3\Air_F_Exp\Plane_Civil_01\Data\BTT_ext_02_CO.paa",
					"\A3\Air_F_Exp\Plane_Civil_01\Data\BTT_int_01_CO.paa",
					"\A3\Air_F_Exp\Plane_Civil_01\Data\BTT_int_02_CO.paa"
				};
				factions[] = {CIV_F};
			};
			class White_2
			{
				displayName = $STR_A3_A_CfgVehicles_Plane_Civil_01_base_F_TextureSources_White_20;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3\Air_F_Exp\Plane_Civil_01\Data\BTT_ext_01_CO.paa",
					"\A3\Air_F_Exp\Plane_Civil_01\Data\BTT_ext_02_CO.paa",
					"\A3\Air_F_Exp\Plane_Civil_01\Data\BTT_int_01_tan_CO.paa",
					"\A3\Air_F_Exp\Plane_Civil_01\Data\BTT_int_02_tan_CO.paa"
				};
				factions[] = {CIV_F};
			};
		};
		textureList[] +=
		{
			White_1,1,
			White_2,1
		};
	};
};