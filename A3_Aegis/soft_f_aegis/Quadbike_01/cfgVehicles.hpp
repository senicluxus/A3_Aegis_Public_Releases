class CfgVehicles
{
	/* Inheritance Tree */
	class Car_F;

    /* Bases */
	class Quadbike_01_base_F: Car_F
	{
        /* Lights */
		class Reflectors
		{
			class Left
			{
				useFlare = true;
			};
		};

        /* Liveries */
		class TextureSources
		{
			class Black
			{
				factions[] = {};
			};
			class Blufor
			{
				factions[] = {};
			};
			class Guerrilla_02
			{
				factions[] = {};
			};
			class Olive
			{
				factions[] = {};
			};
			class LDF
			{
				textures[] =
				{
					"\A3_Aegis\Soft_F_Aegis\Quadbike_01\Data\Quadbike_01_EAF_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Quadbike_01\Data\Quadbike_01_wheel_EAF_CO.paa"
				};
				factions[] = {};
			};
			class Green
			{
				displayName = $STR_A3_TextureSources_Green0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Soft_F_Aegis\Quadbike_01\Data\Quadbike_01_RUkhk_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Quadbike_01\Data\Quadbike_01_wheel_RUkhk_CO.paa"
				};
				factions[] = {};
			};
		};
	};
	class I_E_Quadbike_01_F: Quadbike_01_base_F
	{
		hiddenSelectionsTextures[] =
		{
			"\A3_Aegis\Soft_F_Aegis\Quadbike_01\Data\Quadbike_01_EAF_CO.paa",
			"\A3_Aegis\Soft_F_Aegis\Quadbike_01\Data\Quadbike_01_wheel_EAF_CO.paa"
		};
	};
    /* Factions */
    #include "cfgBLUFOR.hpp"
    #include "cfgOPFOR.hpp"
    #include "cfgSyndikat.hpp"
    #include "cfgGendarmerie.hpp"
    #include "cfgRUS.hpp"
	#include "cfgEAF.hpp"
	#include "cfgCivil.hpp"
	
};