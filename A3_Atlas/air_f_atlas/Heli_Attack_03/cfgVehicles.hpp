class CfgVehicles
{
	/* Inheritance Tree */
	class Helicopter_Base_F;

    /* Bases */
	class Heli_Attack_03_base_F: Helicopter_Base_F
	{
		class TextureSources
		{
			class Marar
			{
				displayName = $STR_A3_A_TextureSources_Marar0;
				author = $STR_A3_A_BranFlakes;
				textures[] =
				{
                    "\A3_Atlas\Air_F_Atlas\Heli_Attack_03\Data\Heli_Attack_03_Body_Marar_CO.paa",
                    "\A3_Atlas\Air_F_Atlas\Heli_Attack_03\Data\Heli_Attack_03_details_Marar_CO.paa",
                    "\A3_Atlas\Air_F_Atlas\Heli_Attack_03\Data\Heli_Attack_03_adds_Marar_CO.paa"
				};
				factions[] = {};
			};
			class ADF
			{
				displayName = $STR_A3_A_TEXTURESOURCES_ADF0;
				author = $STR_A3_A_BranFlakes;
				textures[] =
				{
                    "\A3_Atlas\Air_F_Atlas\Heli_Attack_03\Data\Heli_Attack_03_Body_ADF_CO.paa",
                    "\A3_Atlas\Air_F_Atlas\Heli_Attack_03\Data\Heli_Attack_03_details_ADF_CO.paa",
                    "\A3_Atlas\Air_F_Atlas\Heli_Attack_03\Data\Heli_Attack_03_adds_ADF_CO.paa"
				};
				factions[] = {};
			};
        };
    };
    /* Factions */
    #include "cfgMarar.hpp"   // Marar
    #include "cfgADF.hpp"     //ADF
};