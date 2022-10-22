class CfgVehicles
{
    /* Definitons */
    #include "\A3_Aegis\macros_characters.hpp"
    #include "\A3_Aegis\macros_smokeShells.hpp"

    /* Bases */
    class Civilian_F;
	class SoldierWB;
	class SoldierEB;
	class SoldierGB;

    /* Factions */
    #include "cfgOPFOR.hpp"     // Belarus
    class I_soldier_F;
    class I_soldier_lite_F;
    class I_pilot_F;
    class B_pilot_F;
    class B_Diver_F;
    class B_CBRN_Man_Oversuit_01_MTP_F;
    #include "cfgCivil.hpp"     // Civilians
    class B_Soldier_base_F: SoldierWB
    {
        class EventHandlers;
    };
    #include "cfgADF.hpp"       //Australia
    #include "cfgViper.hpp"     // Viper
    #include "cfgLegion.hpp"    // Legionnaires
	#include "cfgGER.hpp"		// Bundeswehr
	#include "cfgTKA.hpp"		// Takistani Army
    #include "cfgHIMF.hpp"      // HIMF
    #include "cfgIDF.hpp"       // IDF
    #include "cfgUNO.hpp"       // UNO
    #include "cfgVenezuela.hpp" // Venezuela
    #include "cfgMarar.hpp"		//Marar

    /* Uniforms */
    #include "cfgUniforms.hpp"

    /* Deprecated */
    #include "deprecated.hpp"
};