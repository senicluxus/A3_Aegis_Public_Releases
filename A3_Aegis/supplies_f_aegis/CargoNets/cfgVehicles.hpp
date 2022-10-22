class CfgVehicles
{
	/* Bases */
	class CargoNet_01_ammo_base_F;
    
	/* Factions */
    #include "cfgBLUFOR.hpp"    // US & BAF
    #include "cfgOPFOR.hpp"     // IAF & China
    #include "cfgIndep.hpp"     // AAF
    class C_IDAP_CargoNet_01_supplies_F: CargoNet_01_ammo_base_F
    {
	    editorSubcategory = EdSubcat_Ammo_IDAP;
    };
    #include "cfgRUS.hpp"       // Russia
    #include "cfgEAF.hpp"       // LDF
};