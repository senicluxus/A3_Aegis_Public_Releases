class CfgWeapons
{
	/* Definitions */
	#include "\A3_Aegis\macros_weaponAcc.hpp"

	/* Inheritance */
	class RifleCore;
    class MGunCore;
    class CannonCore;
	class ItemCore;

	// Arma 3 Bases
	class SMG_01_F;
	
	// Arma 3 Reaction Forces
	class srifle_h6_blk_rf;
	class srifle_h6_oli_rf;
	class srifle_h6_tan_rf;
	class srifle_h6_digi_rf;
	class arifle_ash12_blk_RF;
	class arifle_ash12_desert_RF;
	class arifle_ash12_urban_RF;
	class arifle_ash12_wood_RF;
	class arifle_ash12_LR_blk_RF;
	class arifle_ash12_LR_desert_RF;
	class arifle_ash12_LR_urban_RF;
	class arifle_ash12_LR_wood_RF;
	class arifle_ash12_GL_blk_RF;
	class arifle_ash12_GL_desert_RF;
	class arifle_ash12_GL_urban_RF;
	class arifle_ash12_GL_wood_RF;

	class SMG_01_black_RF: SMG_01_F
	{
		scope = protected;
		scopeArsenal = protected;
	};

	/* Vehicle Weapons */
	#include "cfgVehicleWeapons.hpp"

	/* Weapon Attachments */
	#include "presets.hpp"

};