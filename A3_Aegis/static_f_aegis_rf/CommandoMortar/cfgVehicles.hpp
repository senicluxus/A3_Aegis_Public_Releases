class CfgVehicles
{
	/* Inheritance Tree */
	class StaticMGWeapon;
	class Weapon_Bag_Base;

    /* Bases */
	class B_CommandoMortar_RF;
	class B_CommandoMortar_weapon_RF: Weapon_Bag_Base
	{
		displayName = $STR_A3_A_CfgVehicles_CommandoMortar_Green_Weapon_RF0;
	};
	class O_CommandoMortar_RF;
	class O_CommandoMortar_weapon_RF: B_CommandoMortar_weapon_RF
	{
		displayName = $STR_A3_A_CfgVehicles_CommandoMortar_Tan_Weapon_RF0;
	};
	class B_D_CTRG_CommandoMortar_RF;
	class B_D_CTRG_CommandoMortar_weapon_RF: B_CommandoMortar_weapon_RF
	{
		displayName = $STR_A3_A_CfgVehicles_CommandoMortar_Sand_Weapon_RF0;
	};
	class I_E_CommandoMortar_RF;

	/* Factions */
	#include "cfgBLUFOR.hpp"	// US & BAF
	#include "cfgEAF.hpp"		// LDF
	#include "cfgArgana.hpp"	// Argana
	#include "cfgSFIA.hpp"		// SFIA
	#include "cfgTura.hpp"		// Tura
};