class CfgVehicles
{
    /* Definitons */
    #include "\A3_Aegis\macros_characters.hpp"
    #include "\A3_Aegis\macros_smokeShells.hpp"

    /* Inheritance Tree */
    class CAManBase;
    class Civilian;

    /* Bases */
    class Civilian_F: Civilian
    {
        modelSides[] = {TFriendly};
        linkedItems[] = {ItemSmartPhone};
        respawnLinkedItems[] = {ItemSmartPhone};
    };
	class SoldierWB: CAManBase
    {
	    modelSides[] = {TFriendly};
    };
	class SoldierEB: CAManBase
    {
	    modelSides[] = {TFriendly};
    };
	class SoldierGB: CAManBase
    {
	    modelSides[] = {TFriendly};
    };

    /* Factions */
    #include "cfgBLUFOR.hpp"        // US & BAF
    #include "cfgUSMC.hpp"
    #include "cfgOPFOR.hpp"         // IAF, China & Argana
    #include "cfgIndep.hpp"         // AAF
    #include "cfgCivil.hpp"         // Civilians
    #include "cfgGuerrilla.hpp"     // FIA
    #include "cfgSyndikat.hpp"      // Syndikat
    class B_G_Captain_Ivan_F: I_C_Soldier_Para_2_F
    {
        modelSides[] = {TFriendly};
    };
    #include "cfgCTRG.hpp"          // CTRG
    #include "cfgViper.hpp"         // Viper
    #include "cfgGendarmerie.hpp"   // Gendarmerie
    #include "cfgIDAP.hpp"          // IDAP
    #include "cfgRUS.hpp"           // Russia
    #include "cfgEAF.hpp"           // LDF
    #include "cfgLooters.hpp"       // Looters
    #include "cfgION.hpp"           // ION
    #include "cfgRaven.hpp"         // Raven Security

    /* Uniforms */
	#include "cfgUniforms.hpp"

    /* Deprecated */
    #include "deprecated.hpp"
};