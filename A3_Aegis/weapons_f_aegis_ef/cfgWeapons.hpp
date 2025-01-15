class CfgWeapons
{
	/* Definitions */
	#include "\A3_Aegis\macros_weaponAcc.hpp"

	/* Inheritance */
	class RifleCore;
    class MGunCore;
    class CannonCore;
	class ItemCore;

	// Arma 3
	class arifle_MX_SW_F;
	
	// Arma 3 Expedtionary Forces
	class ef_arifle_mxar: arifle_MX_SW_F
	{
		hiddenSelectionsTextures [] = 
		{
			"\A3_Aegis\Weapons_F_Aegis\Rifles\MX\Data\XMX_Base_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Rifles\MX\Data\XMX_LMG_CO.paa"
		};
		hiddenSelectionsMaterials [] = 
		{
			"\A3_Aegis\weapons_f_aegis\Rifles\MX\Data\arifle_MX.rvmat",
			"\A3_Aegis\weapons_f_aegis\Rifles\MX\Data\arifle_MXSW.rvmat"
		};
	};
	class ef_arifle_mxar_gl: ef_arifle_mxar
	{
		hiddenSelectionsTextures [] = 
		{
			"\A3_Aegis\Weapons_F_Aegis\Rifles\MX\Data\XMX_Base_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Rifles\MX\Data\GLX_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Rifles\MX\Data\XMX_LMG_CO.paa"
		};
		hiddenSelectionsMaterials [] = 
		{
			"\A3_Aegis\weapons_f_aegis\Rifles\MX\Data\arifle_MX.rvmat",
			"\A3_Aegis\weapons_f_aegis\Rifles\MX\Data\arifle_MXGL.rvmat",
			"\A3_Aegis\weapons_f_aegis\Rifles\MX\Data\arifle_MXSW.rvmat"
		};
	};
	class ef_arifle_mxar_black: ef_arifle_mxar
	{
		hiddenSelectionsTextures [] = 
		{
			"\A3_Aegis\Weapons_F_Aegis\Rifles\MX\Data\XMX_Base_Black_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Rifles\MX\Data\XMX_LMG_Black_CO.paa"
		};
	};
	class ef_arifle_mxar_gl_black: ef_arifle_mxar_gl
	{
		hiddenSelectionsTextures [] = 
		{
			"\A3_Aegis\Weapons_F_Aegis\Rifles\MX\Data\XMX_Base_Black_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Rifles\MX\Data\GLX_Black_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Rifles\MX\Data\XMX_LMG_Black_CO.paa"
		};
	};
	class ef_arifle_mxar_khk: ef_arifle_mxar
	{
		hiddenSelectionsTextures [] = 
		{
			"\A3\Weapons_F_Exp\Rifles\MX\Data\XMX_Base_khk_co.paa",
			"\A3\Weapons_F_Exp\Rifles\MX\Data\XMX_LMG_khk_co.paa"
		};
	};
	class ef_arifle_mxar_gl_khk: ef_arifle_mxar_gl
	{
		hiddenSelectionsTextures [] = 
		{
			"\A3\Weapons_F_Exp\Rifles\MX\Data\XMX_Base_khk_co.paa",
			"\A3\Weapons_F_Exp\Rifles\MX\Data\glx_khk_co.paa",
			"\A3\Weapons_F_Exp\Rifles\MX\Data\XMX_LMG_khk_co.paa"
		};
	};



	/* Vehicle Weapons */
	//#include "cfgVehicleWeapons.hpp"

	/* Weapon Attachments */
	//#include "presets.hpp"

};