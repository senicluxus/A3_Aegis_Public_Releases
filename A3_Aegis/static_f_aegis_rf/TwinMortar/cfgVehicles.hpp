class CfgVehicles
{
	/* Inheritance Tree */
	class StaticMGWeapon;

    /* Bases */
	class TwinMortar_base_RF: StaticMGWeapon
	{
		class TextureSources
		{
			class Black
			{
				factions[] = {};
			};
			class AAF
			{
				factions[] = {};
			};
			class Tan
			{
				factions[] = {};
			};
			class NATO
			{
				factions[] = {};
			};
			class NATO_P
			{
				factions[] = {};
			};
			class CSAT
			{
				factions[] = {};
			};
			class CSAT_Paific
			{
				factions[] = {};
			};
		};
	};
	class B_TwinMortar_RF;
	class B_T_TwinMortar_RF;

	/* Factions */
	#include "cfgBLUFOR.hpp"	// US & BAF
	#include "cfgEAF.hpp"		// LDF

};