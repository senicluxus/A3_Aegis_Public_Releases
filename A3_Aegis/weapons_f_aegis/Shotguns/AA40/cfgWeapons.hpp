class CfgWeapons
{
    /* Definitions */
	#include "\A3_Aegis\macros_weaponAcc.hpp"
    
    /* Inheritance Tree */
	#include "\A3_Aegis\cfgRifles.hpp"

    /* weapons */
	class sgun_aa40_base_lxWS;
	class sgun_AA40_F: sgun_aa40_base_lxWS
	{
	scope = protected;
	};
	
	class Aegis_sgun_aa40_khk_lxWS: sgun_aa40_base_lxWS
	{
		author = "POLPOX";
		baseWeapon = Aegis_sgun_aa40_khk_lxWS;
		displayName = "AA40 12G (Khaki)";
		scope = public;
		magazines[] = 
		{
			Aegis_20Rnd_12Gauge_AA40_Pellets_khk_lxWS,
			Aegis_20Rnd_12Gauge_AA40_Slug_khk_lxWS,
			Aegis_20Rnd_12Gauge_AA40_Smoke_khk_lxWS,
			Aegis_20Rnd_12Gauge_AA40_HE_khk_lxWS,
			Aegis_8Rnd_12Gauge_AA40_Pellets_khk_lxWS,
			Aegis_8Rnd_12Gauge_AA40_Slug_khk_lxWS,
			Aegis_8Rnd_12Gauge_AA40_Smoke_khk_lxWS,
			Aegis_8Rnd_12Gauge_AA40_HE_khk_lxWS
		};
		picture = "\A3_Aegis\weapons_f_aegis\Shotguns\AA40\Data\UI\icon_sgun_aa40_lxws_khk_ca.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\weapons_f_aegis\Shotguns\AA40\Data\aa40_khk_co.paa"};
		hiddenSelectionsMaterials[] = {"\lxws\weapons_1_f_lxWS\shotguns\aa40\data\aa40.rvmat"};
	};

	/* Presets */
	class Aegis_sgun_AA40_khk_Holo_lxWS: Aegis_sgun_AA40_khk_lxWS
	{
		class LinkedItems
		{
        	LINKED_TOP(optic_Holosight_khk_F);
		};
	};

};

