#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
#include "cfgVehicles.hpp"
class CfgWeapons
{
	class ItemCore;
	class HeadgearItem;
	class HelmetBase: ItemCore
	{
		class ItemInfo: HeadgearItem{};
	};
	// Arma 3
	class H_HelmetB;
	class H_HelmetB_light;
	class H_Booniehat_khk: HelmetBase
	{
		class ItemInfo: ItemInfo{};
	};
	class H_HelmetSpecB;
	class H_HelmetIA;
    class H_Cap_red;
	class H_HelmetCrew_B;
	class H_HelmetCrew_I: H_HelmetCrew_B
	{
		class ItemInfo;
	};
	class H_PilotHelmetFighter_B: H_HelmetB
	{
		class ItemInfo;
	};
	class H_PilotHelmetFighter_I;
	class H_PilotHelmetHeli_B: H_HelmetB
	{
		class ItemInfo;
	};
	class H_PilotHelmetHeli_O: H_PilotHelmetHeli_B
	{
		class ItemInfo;
	};
	class H_CrewHelmetHeli_B: H_HelmetB
	{
		class ItemInfo;
	};
	class H_CrewHelmetHeli_O: H_CrewHelmetHeli_B
	{
		class ItemInfo;
	};
	class H_HelmetO_ocamo;
	class H_HelmetLeaderO_ocamo;
	class H_MilCap_ocamo;
	class H_HelmetSpecO_ocamo;
	// Arma 3 Apex
	class H_HelmetO_ViperSP_hex_F;
	// Arma 3 Tanks
	class H_Tank_black_F;
	// Arma 3 Enoch
	class H_HelmetHBK_base_F;
	class H_HelmetHBK_headset_base_F;
	class H_HelmetHBK_ear_base_F;
	class H_HelmetHBK_chops_base_F;
	// Arma 3 Aegis
	class H_HelmetSpecB_light;
	class H_MK7_Base_F;
	class Aegis_H_Milcap_nohs_base_F;
	class Aegis_H_Milcap_tachs_base_F;
	// Arma 3 Atlas
    class H_HelmetB_cover_fleck_F: H_HelmetB
    {
      author = $STR_A3_A_Charms;
      displayName = $STR_A3_A_CfgWeapons_H_HelmetB_cover_fleck0;
      picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\H_HelmetB_cover_fleck_F_ca.paa";
      hiddenSelectionsMaterials[] = {"\A3_Atlas\Characters_F_Atlas\Headgear\Data\equip1_cover.rvmat"};
      hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Headgear\Data\equip1_fleck_CO.paa"};
    };
    class H_HelmetSpecB_cover_fleck_F: H_HelmetSpecB
    {
      author = $STR_A3_A_Charms;
      displayName = $STR_A3_A_CfgWeapons_H_HelmetSpecB_cover_fleck_F0;
      picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\H_HelmetSpecB_cover_fleck_F_ca.paa";
      hiddenSelectionsMaterials[] = {"\A3_Atlas\Characters_F_Atlas\Headgear\Data\equip1_cover.rvmat"};
      hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Headgear\Data\equip1_fleck_CO.paa"};
    };
    class H_HelmetB_cover_Multitarn_F: H_HelmetB
    {
      author = $STR_A3_A_Charms;
      displayName = $STR_A3_A_CfgWeapons_H_HelmetB_cover_multitarn0;
      picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\H_HelmetB_cover_multitarn_F_ca.paa";
      hiddenSelectionsMaterials[] = {"\A3_Atlas\Characters_F_Atlas\Headgear\Data\equip1_cover.rvmat"};
      hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Headgear\Data\equip1_Multitarn_CO.paa"};
    };
    class H_HelmetSpecB_cover_Multitarn_F: H_HelmetSpecB
    {
      author = $STR_A3_A_Charms;
      displayName = $STR_A3_A_CfgWeapons_H_HelmetSpecB_cover_Multitarn_F0;
      picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\H_HelmetSpecB_cover_Multitarn_F_ca.paa";
      hiddenSelectionsMaterials[] = {"\A3_Atlas\Characters_F_Atlas\Headgear\Data\equip1_cover.rvmat"};
      hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Headgear\Data\equip1_Multitarn_CO.paa"};
    };
	class H_MK7_Marar_F: H_MK7_Base_F
    {
        author = "Bran Flakes and TacticalDruid";
        scope = public;
        displayName = $STR_A3_A_CfgWeaponsH_MK7_Marar_F0;
        picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\H_MK7_Marar_F_ca";
        model = "\A3_Aegis\Characters_F_Aegis\Headgear\H_Mk7_F";
        hiddenSelections[] = { "Camo","Camo2","Camo3" };
        hiddenSelectionsTextures[] =
        {
         	"\A3_Atlas\Characters_F_Atlas\Headgear\Data\MK7_Marar.paa",
         	"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_HelmetSpecter_01_brown_CO.paa",
         	"\A3_Aegis\Characters_F_Aegis\Headgear\Data\equip_d_co.paa"
        };
    };
	class H_HelmetB_green: H_HelmetB
	{
	  	author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_H_HelmetB_green0;
	  	picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_HelmetB_green_CA.paa";
	  	hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Headgear\Data\equip1_green_CO.paa"};
	};
	class H_HelmetSpecB_green: H_HelmetSpecB
	{
	  	author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_H_HelmetSpecB_green0;
	  	picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_HelmetSpecB_green_CA.paa";
	  	hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Headgear\Data\equip1_green_CO.paa"};
	};
	class H_HelmetB_light_green: H_HelmetB_light
	{
	  	author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_H_HelmetB_light_green0;
	  	picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_HelmetB_light_green_CA.paa";
	  	hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Headgear\Data\equip1_green_CO.paa"};
	};
	class H_HelmetSpecB_light_green: H_HelmetSpecB_light
	{
	  	author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_H_HelmetSpecB_light_green0;
	  	picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_HelmetSpecB_light_green_CA.paa";
	  	hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Headgear\Data\equip1_green_CO.paa"};
	};
	class H_HelmetB_light_idfsf: H_HelmetB_light
	{
	  	author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_H_HelmetB_idfsf0;
	  	picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_HelmetB_light_green_CA.paa";
	  	hiddenSelectionsMaterials[]	= {"\A3_atlas\Characters_F_atlas\Headgear\Data\H_OPSCORE.rvmat"};
	  	hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Headgear\Data\idfsf_helmet_CO.paa"};
	};
	class H_HelmetSpecB_light_idfsf: H_HelmetSpecB_light
	{
	  	author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_H_HelmetSpecB_light_idfsf0;
	  	picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_HelmetSpecB_light_green_CA.paa";
	  	hiddenSelectionsMaterials[]	= {"\A3_atlas\Characters_F_atlas\Headgear\Data\H_OPSCORE.rvmat"};
	  	hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Headgear\Data\idfsf_helmet_CO.paa"};
	};
	class H_O_Helmet_canvas_owcamo: H_HelmetIA
	{
	  	author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_H_O_Helmet_canvas_owcamo0;
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_O_Helmet_canvas_owcamo_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Headgear\Data\headgear_helmet_canvas_owcamo_CO.paa"};
	};
	class H_O_Helmet_canvas_semiarid: H_HelmetIA
	{
	  	author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_H_O_Helmet_canvas_semiarid0;
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_O_Helmet_canvas_semiarid_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Headgear\Data\headgear_helmet_canvas_semiarid_CO.paa"};
	};
	class H_O_Helmet_canvas_RACS: H_HelmetIA
	{
	  	author = $STR_A3_A_AveryTheKitty;
		displayName =  $STR_A3_A_CfgWeapons_H_O_Helmet_canvas_RACS0;
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_O_Helmet_canvas_semiarid_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Headgear\Data\headgear_helmet_canvas_racs_CO.paa"};
	};
    /*
	class H_HelmetO_semiarid: H_HelmetO_ocamo
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_H_HelmetO_semiarid0;
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_HelmetO_semiarid_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\tech_tka_CO.paa"};
	};
	class H_HelmetLeaderO_semiarid: H_HelmetLeaderO_ocamo
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_H_HelmetLeaderO_semiarid0;
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_HelmetLeaderO_semiarid_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\tech_tka_CO.paa"};
	};
	class H_HelmetSpecO_semiarid: H_HelmetSpecO_ocamo
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_H_HelmetSpecO_semiarid0;
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_HelmetSpecO_semiarid_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\tech_tka_CO.paa"};
	};
    */
	class H_HelmetO_whex_F: H_HelmetO_ocamo
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_H_HelmetO_whex_F0;
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_HelmetO_whex_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\tech_wdl_CO.paa"};
	};
	class H_HelmetLeaderO_whex_F: H_HelmetLeaderO_ocamo
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_H_HelmetLeaderO_whex_F0;
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_HelmetLeaderO_whex_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\tech_wdl_CO.paa"};
	};
	class H_HelmetSpecO_whex_F: H_HelmetSpecO_ocamo
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_H_HelmetSpecO_whex_F0;
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_HelmetSpecO_whex_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\tech_wdl_CO.paa"};
	};
	class H_HelmetO_ViperSP_whex_F: H_HelmetO_ViperSP_hex_F
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_H_HelmetO_ViperSP_whex_F0;
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_HelmetO_ViperSP_whex_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Headgear\Data\headgear_ViperSP_whex_CO.paa"};
	};
	class H_HelmetHBK_aucamo_F: H_HelmetHBK_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_H_HelmetHBK_aucamo_F0;
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_HelmetHBK_aucamo_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Headgear\Data\H_HelmetHBK_01_aucamo_CO.paa"};
	};
	class H_HelmetHBK_aucamo_headset_F: H_HelmetHBK_headset_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_H_HelmetHBK_aucamo_headset_F0;
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_HelmetHBK_aucamo_headset_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Headgear\Data\H_HelmetHBK_01_aucamo_CO.paa"};
	};
	class H_HelmetHBK_aucamo_ear_F: H_HelmetHBK_ear_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_H_HelmetHBK_aucamo_ear_F0;
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_HelmetHBK_aucamo_ear_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Headgear\Data\H_HelmetHBK_01_aucamo_CO.paa"};
	};
	class H_HelmetHBK_aucamo_chops_F: H_HelmetHBK_chops_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_H_HelmetHBK_aucamo_chops_F0;
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_HelmetHBK_aucamo_chops_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Headgear\Data\H_HelmetHBK_01_aucamo_CO.paa"};
	};
	class H_HelmetHBK_aucamo_arid_F: H_HelmetHBK_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_H_HelmetHBK_aucamo_arid_F0;
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_HelmetHBK_aucamo_arid_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Headgear\Data\H_HelmetHBK_01_aucamo_arid_CO.paa"};
	};
	class H_HelmetHBK_aucamo_arid_headset_F: H_HelmetHBK_headset_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_H_HelmetHBK_aucamo_arid_headset_F0;
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_HelmetHBK_aucamo_arid_headset_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Headgear\Data\H_HelmetHBK_01_aucamo_arid_CO.paa"};
	};
	class H_HelmetHBK_aucamo_arid_ear_F: H_HelmetHBK_ear_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_H_HelmetHBK_aucamo_arid_ear_F0;
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_HelmetHBK_aucamo_arid_ear_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Headgear\Data\H_HelmetHBK_01_aucamo_arid_CO.paa"};
	};
	class H_HelmetHBK_aucamo_arid_chops_F: H_HelmetHBK_chops_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_H_HelmetHBK_aucamo_arid_chops_F0;
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_HelmetHBK_aucamo_arid_chops_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Headgear\Data\H_HelmetHBK_01_aucamo_arid_CO.paa"};
	};
	class H_HelmetHBK_aucamo_tropic_F: H_HelmetHBK_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_H_HelmetHBK_aucamo_tropic_F0;
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_HelmetHBK_aucamo_tropic_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Headgear\Data\H_HelmetHBK_01_aucamo_tropic_CO.paa"};
	};
	class H_HelmetHBK_aucamo_tropic_headset_F: H_HelmetHBK_headset_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_H_HelmetHBK_aucamo_tropic_headset_F0;
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_HelmetHBK_aucamo_tropic_headset_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Headgear\Data\H_HelmetHBK_01_aucamo_tropic_CO.paa"};
	};
	class H_HelmetHBK_aucamo_tropic_ear_F: H_HelmetHBK_ear_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_H_HelmetHBK_aucamo_tropic_ear_F0;
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_HelmetHBK_aucamo_ear_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Headgear\Data\H_HelmetHBK_01_aucamo_tropic_CO.paa"};
	};
	class H_HelmetHBK_aucamo_tropic_chops_F: H_HelmetHBK_chops_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_H_HelmetHBK_aucamo_tropic_chops_F0;
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_HelmetHBK_aucamo_tropic_chops_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Headgear\Data\H_HelmetHBK_01_aucamo_tropic_CO.paa"};
	};
    /*
	class H_HelmetSpecter_cover_autumn_F: H_HelmetSpecter_cover_base_F
	{
		author = $STR_A3_A_AveryTheKitty_Deathstruck_and_Midnas;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_H_HelmetSpecter_cover_autumn_F0;
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_HelmetSpecter_cover_autumn_F_CA.paa";
		hiddenSelectionsTextures[] =
		{
			"\A3_Atlas\Characters_F_Atlas\Headgear\Data\H_HelmetSpecter_01_CO.paa",
			"\A3_Atlas\Characters_F_Atlas\Headgear\Data\H_HelmetSpecter_01_cover_autumn_CO.paa"
		};
	};*/
	class H_HelmetSpecter_cover_base_F;
	class H_HelmetSpecter_cover_CDF_F: H_HelmetSpecter_cover_base_F
	{
		author = $STR_A3_A_AveryTheKitty_Deathstruck_and_Midnas;
		scope = public;
		displayName = "Raven Helmet (Cover, CDF)";
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\H_HelmetSpecter_cover_CDF_F_ca.paa";
		hiddenSelectionsTextures[] =
		{
			"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_HelmetSpecter_01_CO.paa",
			"\A3_Atlas\Characters_F_Atlas\Headgear\Data\H_HelmetSpecter_cover_cdf_CO.paa"
		};
	};
	class H_HelmetSpecter_cover_whex_CO: H_HelmetSpecter_cover_base_F
    {
        author = $STR_A3_A_AveryTheKitty_Deathstruck_and_Midnas;
        scope = public;
        displayName = $STR_A3_A_CfgWeapons_H_HelmetSpecter_cover_whex_F0;
        picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_HelmetSpecter_cover_whex_CO_CA.paa";
        hiddenSelectionsTextures[] =
        {
            "\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_HelmetSpecter_01_CO.paa",
            "\A3_Atlas\Characters_F_Atlas\Headgear\Data\H_HelmetSpecter_cover_whex_CO.paa"
        };
    };
  class H_HelmetSpecter_cover_semiarid_CO: H_HelmetSpecter_cover_base_F
    {
        author = $STR_A3_A_AveryTheKitty_Deathstruck_and_Midnas;
        scope = public;
        displayName = $STR_A3_A_CfgWeapons_H_HelmetSpecter_cover_semiarid_F0;
        picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_HelmetSpecter_cover_whex_CO_CA.paa";
        hiddenSelectionsTextures[] =
        {
            "\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_HelmetSpecter_01_CO.paa",
            "\A3_Atlas\Characters_F_Atlas\Headgear\Data\H_HelmetSpecter_01_cover_semiarid_CO.paa"
        };
    };
	/* Orlite / Guardian Helmets */
	class H_HelmetI_I_01_base_F: HelmetBase
	{
		author = $STR_A3_A_Jamie;
		scope = private;
		model = "\A3_Atlas\Characters_F_Atlas\Headgear\H_HelmetI_I_01_F.p3d";
		hiddenSelections[] = {camo, camo2};
		descriptionShort = $STR_A3_SP_AL_II;
		class ItemInfo: ItemInfo
		{
			mass = 30;
			hiddenSelections[] = {camo, camo2};
			uniformModel = "\A3_Atlas\Characters_F_Atlas\Headgear\H_HelmetI_I_01_F.p3d";
			modelSides[] =
			{
				TGuerrila,
				TCivilian
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = HitHead;
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};

	class H_HelmetI_I_01_cover_base_F: H_HelmetI_I_01_base_F
	{
		author = $STR_A3_A_Jamie;
		model = "\A3_Atlas\Characters_F_Atlas\Headgear\H_HelmetI_I_01_cover_F.p3d";
		hiddenSelections[] =
		{
			camo,
			camo1,
			camo2
		};
		class ItemInfo: ItemInfo
		{
			mass = 40;
			hiddenSelections[] =
			{
				camo,
				camo1,
				camo2
			};
			uniformModel = "\A3_Atlas\Characters_F_Atlas\Headgear\H_HelmetI_I_01_cover_F.p3d";
			modelSides[] =
			{
				TGuerrila,
				TCivilian
			};
	  	};
	};

	class Atlas_H_HelmetI_I_01_cover_alt_base_F: H_HelmetI_I_01_base_F
	{
		author = $STR_A3_A_Jamie;
		model = "\A3_Atlas\Characters_F_Atlas\Headgear\H_HelmetI_I_01_cover_alt_F.p3d";
		hiddenSelections[] =
		{
			camo,
			camo1,
			camo2
		};
		class ItemInfo: ItemInfo
		{
			mass = 40;
			hiddenSelections[] =
			{
				camo,
				camo1,
				camo2
			};
			uniformModel = "\A3_Atlas\Characters_F_Atlas\Headgear\H_HelmetI_I_01_cover_alt_F.p3d";
			modelSides[] =
			{
				TGuerrila,
				TCivilian
			};
	  	};
	};

	class H_HelmetI_I_01_F: H_HelmetI_I_01_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_H_HelmetI_I_01_F0;
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_HelmetI_I_01_F_CA.paa";
		hiddenSelectionsTextures[] = 
		{
			"\A3_Atlas\Characters_F_Atlas\Headgear\Data\H_HelmetI_I_01_CO.paa",
			"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_HelmetSpecter_01_cover_khaki_CO.paa"
		};
	};
	class H_HelmetI_I_01_cover_F: H_HelmetI_I_01_cover_base_F
	{
		author = $STR_A3_A_AveryTheKitty_and_Lakarak;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_H_HelmetI_I_01_cover_F0;
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_HelmetI_I_01_cover_F_CA.paa";
		hiddenSelectionsTextures[] =
		{
			"\A3_Atlas\Characters_F_Atlas\Headgear\Data\H_HelmetI_I_01_CO.paa",
			"\A3_Atlas\Characters_F_Atlas\Headgear\Data\H_HelmetI_I_01_cover_CO.paa",
			"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_HelmetSpecter_01_cover_khaki_CO.paa",
		};
	};
	class Atlas_H_HelmetI_I_01_cover_alt_F: Atlas_H_HelmetI_I_01_cover_alt_base_F
	{
		author = $STR_A3_A_Jamie;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_H_HelmetI_I_01_cover_alt_F0;
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_Atlas_H_HelmetI_I_01_cover_alt_F_CA.paa";
		hiddenSelectionsTextures[] =
		{
			"\A3_Atlas\Characters_F_Atlas\Headgear\Data\H_HelmetI_I_01_CO.paa",
			"\A3_Atlas\Characters_F_Atlas\Headgear\Data\H_HelmetI_I_01_cover_alt_IDF_CO.paa",
			"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_HelmetSpecter_01_cover_khaki_CO.paa",
		};
	};
	class Atlas_H_HelmetI_I_01_cover_alt_blk_F: Atlas_H_HelmetI_I_01_cover_alt_base_F
	{
		author = $STR_A3_A_Jamie;
		scope = public;
		displayName = "Guardian Helmet (Cover, Black)";
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_Atlas_H_HelmetI_I_01_cover_alt_blk_F_CA.paa";
		hiddenSelectionsTextures[] =
		{
			"\A3_Atlas\Characters_F_Atlas\Headgear\Data\H_HelmetI_I_01_CO.paa",
			"\A3_Atlas\Characters_F_Atlas\Headgear\Data\H_HelmetI_I_01_cover_alt_blk_CO.paa",
			"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_HelmetSpecter_01_cover_khaki_CO.paa",
		};
	};
	class Atlas_H_HelmetI_I_01_cover_alt_UN_F: Atlas_H_HelmetI_I_01_cover_alt_base_F
	{
		author = $STR_A3_A_Jamie;
		scope = public;
		displayName = "Guardian Helmet [UN] (Cover)";
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_Atlas_H_HelmetI_I_01_cover_alt_UN_F_CA.paa";
		hiddenSelectionsTextures[] =
		{
			"\A3_Atlas\Characters_F_Atlas\Headgear\Data\H_HelmetI_I_01_CO.paa",
			"\A3_Atlas\Characters_F_Atlas\Headgear\Data\H_HelmetI_I_01_cover_alt_UN_CO.paa",
			"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_HelmetSpecter_01_cover_khaki_CO.paa",
		};
	};
	/* Guardian Helmet - END */
	class H_Booniehat_whex_F: H_Booniehat_khk
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_H_Booniehat_whex_F0;
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_Booniehat_whex_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Headgear\Data\booniehat_owcamo_CO.paa"};
	};
	class H_Booniehat_whex_hs_F: H_Booniehat_whex_F
	{
		author = $STR_A3_A_AveryTheKitty;
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_Booniehat_whex_hs_F_CA.paa";
		displayName = $STR_A3_A_CfgWeapons_H_Booniehat_whex_hs_F0;
		model = "\A3\Characters_F_EPB\Common\booniehat_hs.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Characters_F_EPB\Common\booniehat_hs.p3d";
		};
	};
	class H_Booniehat_aucamo_F: H_Booniehat_khk
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_H_Booniehat_aucamo0;
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_Booniehat_aucamo_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Headgear\Data\booniehat_aucamo_CO.paa"};
	};
	class H_Booniehat_aucamo_hs_F: H_Booniehat_aucamo_F
	{
		author = $STR_A3_A_AveryTheKitty;
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_Booniehat_aucamo_hs_F_CA.paa";
		displayName = $STR_A3_A_CfgWeapons_H_Booniehat_aucamo_hs_F0;
		model = "\A3\Characters_F_EPB\Common\booniehat_hs.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Characters_F_EPB\Common\booniehat_hs.p3d";
		};
	};
	/*Arma 3 Atlas - ADF*/ //MOVE TO ATLAS
	// Booniehat [ADF] (Arid)
	class H_Booniehat_aucamo_ard_F: H_Booniehat_aucamo_F
	{
		author = "Lowaltitude";
		displayName = "Booniehat [ADF] (Arid)";
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_Booniehat_aucamo_ard_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Headgear\Data\booniehat_aucamo_ard_CO.paa"};
	};
	// Booniehat [ADF] (Arid, Headset)
	class H_Booniehat_aucamo_ard_hs_F: H_Booniehat_aucamo_ard_F
	{
		author = "Lowaltitude";
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_Booniehat_aucamo_ard_hs_F_CA.paa";
		displayName = "Booniehat [ADF] (Arid, Headset)";
		model = "\A3\Characters_F_EPB\Common\booniehat_hs.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Characters_F_EPB\Common\booniehat_hs.p3d";
		};
	};
	// Booniehat [ADF] (Tropic)
	class H_Booniehat_aucamo_trp_F: H_Booniehat_khk
	{
		author = "Lowaltitude and abb0t";
		displayName = "Booniehat [ADF] (Tropic)";
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_Booniehat_aucamo_trp_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Headgear\Data\booniehat_aucamo_trp_CO.paa"};
	};
	// Booniehat [ADF] (Tropic, Headset)
	class H_Booniehat_aucamo_trp_hs_F: H_Booniehat_aucamo_trp_F
	{
		author = "Lowaltitude and abb0t";
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_Booniehat_aucamo_trp_hs_F_CA.paa";
		displayName = "Booniehat [ADF] (Tropic, Headset)";
		model = "\A3\Characters_F_EPB\Common\booniehat_hs.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Characters_F_EPB\Common\booniehat_hs.p3d";
		};
	};
	class H_Cap_aucamo: H_Cap_red
	{
	 	displayName = $STR_A3_A_CfgWeapons_H_Cap_aucamo0;
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_Cap_aucamo_CA.paa";
	  	hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Headgear\Data\capb_ADF_Woodland.paa"};
	};
	class H_Cap_aucamo_ard: H_Cap_red
	{
	 	displayName = "Cap [ADF] (Arid)";
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_Cap_aucamo_ard_CA.paa";
	  	hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Headgear\Data\capb_ADF_Arid.paa"};
	};	
	class H_Cap_aucamo_trp: H_Cap_red
	{
	 	displayName = "Cap [ADF] (Tropic)";
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_Cap_aucamo_trp_CA.paa";
	  	hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Headgear\Data\capb_ADF_Tropic.paa"};
	};
	class H_MilCap_aucamo: H_MilCap_ocamo
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_H_MilCap_aucamo0;
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_MilCap_aucamo_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Headgear\Data\cappatrol_ADF_Woodland.paa"};
	};
	class Atlas_H_MilCap_nohs_aucamo: Aegis_H_Milcap_nohs_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_H_MilCap_nohs_aucamo0;
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_Atlas_H_MilCap_nohs_aucamo_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Headgear\Data\cappatrol_ADF_Woodland.paa"};
	};
	class H_Booniehat_flecktarn: H_Booniehat_khk
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_H_Booniehat_flecktarn0;
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_Booniehat_flecktarn_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Headgear\Data\booniehat_flecktarn_CO.paa"};
	};
	class H_Booniehat_flecktarn_hs: H_Booniehat_flecktarn
	{
		author = $STR_A3_A_AveryTheKitty;
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_Booniehat_flecktarn_hs_CA.paa";
		displayName = $STR_A3_A_CfgWeapons_H_Booniehat_flecktarn_hs0;
		model = "\A3\Characters_F_EPB\Common\booniehat_hs.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Characters_F_EPB\Common\booniehat_hs.p3d";
		};
	};
	class H_Booniehat_multitarn: H_Booniehat_khk
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_H_Booniehat_multitarn0;
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_Booniehat_multitarn_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Headgear\Data\booniehat_multitarn_CO.paa"};
	};
	class H_Booniehat_multitarn_hs: H_Booniehat_multitarn
	{
		author = $STR_A3_A_AveryTheKitty;
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_Booniehat_multitarn_hs_CA.paa";
		displayName = $STR_A3_A_CfgWeapons_H_Booniehat_multitarn_hs0;
		model = "\A3\Characters_F_EPB\Common\booniehat_hs.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Characters_F_EPB\Common\booniehat_hs.p3d";
		};
	};
	class H_Booniehat_semiarid: H_Booniehat_khk
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_H_Booniehat_semiarid0;
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_Booniehat_semiarid_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Headgear\Data\booniehat_semiarid_CO.paa"};
	};
	class H_Booniehat_semiarid_hs: H_Booniehat_semiarid
	{
		author = $STR_A3_A_AveryTheKitty;
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_Booniehat_semiarid_hs_CA.paa";
		displayName = $STR_A3_A_CfgWeapons_H_Booniehat_semiarid_hs0;
		model = "\A3\Characters_F_EPB\Common\booniehat_hs.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Characters_F_EPB\Common\booniehat_hs.p3d";
		};
	};
	class H_Booniehat_jungle: H_Booniehat_khk
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_H_Booniehat_jungle0;
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_Booniehat_jungle_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Headgear\Data\booniehat_jungle_CO.paa"};
	};
	class H_Booniehat_jungle_hs: H_Booniehat_jungle
	{
		author = $STR_A3_A_AveryTheKitty;
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_Booniehat_jungle_hs_CA.paa";
		displayName = $STR_A3_A_CfgWeapons_H_Booniehat_jungle_hs0;
		model = "\A3\Characters_F_EPB\Common\booniehat_hs.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Characters_F_EPB\Common\booniehat_hs.p3d";
		};
	};
    /*
	class H_Booniehat_autumn: H_Booniehat_khk
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_H_Booniehat_autumn0;
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_Booniehat_autumn_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Headgear\Data\booniehat_autumn_CO.paa"};
	};
	class H_Booniehat_autumn_hs: H_Booniehat_autumn
	{
		author = $STR_A3_A_AveryTheKitty;
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_Booniehat_autumn_hs_CA.paa";
		displayName = $STR_A3_A_CfgWeapons_H_Booniehat_autumn_hs0;
		model = "\A3\Characters_F_EPB\Common\booniehat_hs.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Characters_F_EPB\Common\booniehat_hs.p3d";
		};
	};
    */
	class H_MilCap_sgg: H_MilCap_ocamo
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_H_MilCap_sgg0;
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_MilCap_sgg_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Headgear\Data\cappatrol_sage_CO.paa"};
	};
	class Atlas_H_MilCap_nohs_sgg: Aegis_H_Milcap_nohs_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_H_MilCap_nohs_sgg0;
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_Atlas_H_MilCap_nohs_sgg_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Headgear\Data\cappatrol_sage_CO.paa"};
	};
	class H_MilCap_whex_F: H_MilCap_ocamo
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_H_MilCap_whex_F0;
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_MilCap_whex_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Headgear\Data\cappatrol_owcamo_CO.paa"};
	};
	class Atlas_H_MilCap_nohs_whex_F: Aegis_H_Milcap_nohs_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_H_MilCap_nohs_whex_F0;
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_Atlas_H_MilCap_nohs_whex_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Headgear\Data\cappatrol_owcamo_CO.paa"};
	};
	class H_MilCap_semiarid: H_MilCap_ocamo
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_H_MilCap_semiarid0;
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_MilCap_semiarid_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Headgear\Data\cappatrol_semiarid_CO.paa"};
	};
	class Atlas_H_MilCap_nohs_semiarid: Aegis_H_Milcap_nohs_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_H_MilCap_nohs_semiarid0;
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_Atlas_H_MilCap_nohs_semiarid_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Headgear\Data\cappatrol_semiarid_CO.paa"};
	};
	class H_MilCap_jungle: H_MilCap_ocamo
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_H_MilCap_jungle0;
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_MilCap_jungle_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Headgear\Data\cappatrol_jungle_CO.paa"};
	};
	class Atlas_H_MilCap_nohs_jungle: Aegis_H_Milcap_nohs_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_H_MilCap_nohs_jungle0;
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_Atlas_H_MilCap_nohs_jungle_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Headgear\Data\cappatrol_jungle_CO.paa"};
	};
	class Atlas_H_MilCap_tachs_Jungle: Aegis_H_Milcap_tachs_base_F
	{
		author = $STR_A3_A_Ravenholme;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_H_MilCap_tachs_jungle0;
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_Atlas_H_MilCap_tachs_jungle_CA.paa";
		hiddenSelectionsTextures[] = 
		{
			"\A3_Atlas\Characters_F_Atlas\Headgear\Data\cappatrol_jungle_CO.paa",
			"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_Headset_Tactical_grn_CO.paa",
			"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_Headset_Tactical_grn_CO.paa",
			"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_Headset_Tactical_grn_CO.paa"

		};
	};
	class Aegis_H_MilCap_tachs_tan;
	class Atlas_H_MilCap_tachs_kzg: Aegis_H_MilCap_tachs_tan
	{
		author = $STR_A3_A_BranFlakes;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_H_MilCap_tachs_kzg0;
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_Atlas_H_Milcap_tachs_kzg_ca.paa";
		hiddenSelectionsTextures[] = 
		{
			"\A3_Atlas\Characters_F_Atlas\Headgear\Data\cappatrol_kzg_co.paa",
			"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_Headset_Tactical_khk_CO.paa",
			"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_Headset_Tactical_khk_CO.paa",
			"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_Headset_Tactical_khk_CO.paa"

		};
	};
	class Atlas_H_MilCap_nohs_kzg: Aegis_H_Milcap_nohs_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_H_MilCap_nohs_kzg0;
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_Atlas_H_Milcap_nohs_kzg_ca.paa";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Headgear\Data\cappatrol_kzg_co.paa",};
	};
    /*
	class H_MilCap_autumn: H_MilCap_ocamo
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_H_MilCap_autumn0;
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_MilCap_autumn_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Headgear\Data\cappatrol_autumn_CO.paa"};
	};
    */
	class H_HelmetCrew_I_I: H_HelmetCrew_I
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = "Crew Helmet (Sand)";
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_HelmetCrew_I_I_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Headgear\Data\H_HelmetCrew_I_I_CO.paa"};
	};
	class H_PilotHelmetFighter_B_A: H_PilotHelmetFighter_B
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_H_PilotHelmetFighter_B_O0;
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_PilotHelmetFighter_B_A_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Headgear\Data\pilot_helmet_aucamo_CO.paa"};
		class ItemInfo: ItemInfo
		{
			modelSides[] =
			{
				TWest,
				TCivilian
			};
		};
	};
	class H_PilotHelmetFighter_I_I: H_PilotHelmetFighter_B
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_H_PilotHelmetFighter_I_I0;
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_PilotHelmetFighter_I_I_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Headgear\Data\pilot_helmet_olive_CO.paa"};
		class ItemInfo: ItemInfo
		{
			modelSides[] =
			{
				TGuerrila,
				TCivilian
			};
		};
	};
	class H_PilotHelmetHeli_B_A: H_PilotHelmetHeli_B
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = "Heli Pilot Helmet [ADF]";
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_PilotHelmetHeli_B_A_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Headgear\Data\helmet_heli_aucamo_CO.paa"};
	};
	class H_CrewHelmetHeli_B_A: H_CrewHelmetHeli_B
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = "Heli Crew Helmet [ADF]";
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_CrewHelmetHeli_B_A_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Headgear\Data\helmet_heli_aucamo_CO.paa"};
	};
	class H_Hat_Pakol_base_F: HelmetBase
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = private;
		model = "\A3_Atlas\Characters_F_Atlas\Headgear\H_Hat_Pakol_01_F.p3d";
		hiddenSelections[] = {Camo};
		descriptionShort = $STR_A3_SP_noarmor;
		class ItemInfo: ItemInfo
		{
			mass = 5;
			hiddenSelections[] = {Camo};
			uniformModel = "\A3_Atlas\Characters_F_Atlas\Headgear\H_Hat_Pakol_01_F.p3d";
			modelSides[] = {TCivilian};
            class HitpointsProtectionInfo{};
		};
	};
	class H_Hat_Pakol_brn_F: H_Hat_Pakol_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = "Traditional Hat (Brown)";
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_Hat_Pakol_brn_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Headgear\Data\H_Hat_Pakol_01_brn_CO.paa"};
	};
	class H_Hat_Pakol_gry_F: H_Hat_Pakol_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = "Traditional Hat (Grey)";
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_Hat_Pakol_gry_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Headgear\Data\H_Hat_Pakol_01_gry_CO.paa"};
	};
	class H_Hat_Pakol_tan_F: H_Hat_Pakol_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = "Traditional Hat (Tan)";
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_Hat_Pakol_tan_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Headgear\Data\H_Hat_Pakol_01_tan_CO.paa"};
	};
		class H_HelmetHBK_commando_F: H_HelmetHBK_base_F
	{
		author = "BranFlakes";
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_H_HelmetHBK_commando_F0;
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_HelmetHBK_commando_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Headgear\Data\H_HelmetHBK_01_commando_CO.paa"};
	};
	class H_HelmetHBK_commando_headset_F: H_HelmetHBK_headset_base_F
	{
		author = "BranFlakes";
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_H_HelmetHBK_commando_headset_F0;
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_HelmetHBK_commando_headset_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Headgear\Data\H_HelmetHBK_01_commando_CO.paa"};
	};
	class H_HelmetHBK_commando_ear_F: H_HelmetHBK_ear_base_F
	{
		author = "BranFlakes";
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_H_HelmetHBK_commando_ear_F0;
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_HelmetHBK_commando_headset_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Headgear\Data\H_HelmetHBK_01_commando_CO.paa"};
	};

	/* Luchnik Variants*/
	class H_HelmetLuchnik_cover_base_F;
	class H_HelmetLuchnik_cover_semiarid_F: H_HelmetLuchnik_cover_base_F
	{
		displayName = $STR_A3_A_CfgWeapons_H_HelmetLuchnik_cover_semiarid_F0;
		scope = Public;
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\H_HelmetLuchnik_cover_semiarid_F_CA.paa";
		hiddenSelectionsTextures[] =
		{
			"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_HelmetEAST_khk_CO.paa",
			"\A3_Atlas\Characters_F_Atlas\Headgear\Data\H_HelmetEAST_Cover_semiarid_CO.paa"
		};
	};
	class H_HelmetLuchnik_cover_ardi_F: H_HelmetLuchnik_cover_base_F
	{
		displayName = $STR_A3_A_CfgWeapons_H_HelmetLuchnik_cover_ardi_F0;
		scope = Public;
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_HelmetLuchnik_cover_ardi_F_CA.paa";
		hiddenSelectionsTextures[] =
		{
			"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_HelmetEAST_khk_CO.paa",
			"\A3_Atlas\Characters_F_Atlas\Headgear\Data\H_HelmetEAST_Cover_ardi_CO.paa"
		};
	};
	class H_HelmetLuchnik_cover_whex_F: H_HelmetLuchnik_cover_base_F
	{
		displayName = $STR_A3_A_CfgWeapons_H_HelmetLuchnik_cover_whex_F0;
		scope = Public;
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\H_HelmetLuchnik_cover_whex_F_CA.paa";
		hiddenSelectionsTextures[] =
		{
			"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_HelmetEAST_grn_CO.paa",
			"\A3_Atlas\Characters_F_Atlas\Headgear\Data\H_HelmetEAST_Cover_whex_CO.paa"
		};
	};
	class H_HelmetLuchnik_cover_sfia_F: H_HelmetLuchnik_cover_base_F
	{
		displayName = $STR_A3_A_CfgWeapons_H_HelmetLuchnik_cover_sfia_F0;
		scope = Public;
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_HelmetLuchnik_cover_sfia_F_CA.paa";
		hiddenSelectionsTextures[] =
		{
			"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_HelmetEAST_khk_CO.paa",
			"\A3_Atlas\Characters_F_Atlas\Headgear\Data\H_HelmetEAST_Cover_sfia_CO.paa"
		};
	};
	class H_HelmetLuchnik_ear_base_F;
	class H_HelmetLuchnik_ear_whex_F: H_HelmetLuchnik_ear_base_F
	{
		displayName = $STR_A3_A_CfgWeapons_H_HelmetLuchnik_ear_whex_F0;
		scope = Public;
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\H_HelmetLuchnik_cover_whex_F_CA.paa";
		hiddenSelectionsTextures[] =
		{
			"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_HelmetEAST_grn_CO.paa",
			"\A3_Atlas\Characters_F_Atlas\Headgear\Data\H_HelmetEAST_Cover_whex_CO.paa"
		};
	};


	/* Liberator Helmets */
	class Atlas_H_HelmetCCH_base_F: HelmetBase
	{
		author = $STR_A3_A_JC980_Jamie;
		scope = private;
		model = "\A3_Atlas\Characters_F_Atlas\Headgear\Atlas_H_HelmetCCH_F.p3d";
		hiddenSelections[] = {camo};
		descriptionShort = $STR_A3_SP_AL_II;
		class ItemInfo: ItemInfo
		{
			mass = 33;
			hiddenSelections[] = {camo};
			allowedSlots[]={901,701,605};
			uniformModel = "\A3_Atlas\Characters_F_Atlas\Headgear\Atlas_H_HelmetCCH_F.p3d";
			modelSides[] =
			{
				TEast,
				TCivilian
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = HitHead;
					armor = 7;
					passThrough = 0.5;
				};
			};
		};
	};
	class Atlas_H_HelmetCCH_grn_F: Atlas_H_HelmetCCH_base_F
	{
		author = $STR_A3_A_JC980_Jamie;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_H_HelmetCCH_grn_F0;
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\Atlas_H_HelmetCCH_grn_F_ca.paa";
		hiddenSelectionsTextures[] =
		{
			"\A3_Atlas\characters_f_atlas\Headgear\Data\H_HelmetCCH_oli_CO.paa"
		};
	};
	class Atlas_H_HelmetCCH_khk_F: Atlas_H_HelmetCCH_base_F
	{
		author = $STR_A3_A_JC980_Jamie;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_H_HelmetCCH_khk_F0;
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\Atlas_H_HelmetCCH_khk_F_ca.paa";
		hiddenSelectionsTextures[] =
		{
			"\A3_Atlas\characters_f_atlas\Headgear\Data\H_HelmetCCH_khk_CO.paa"
		};
	};
	class Atlas_H_HelmetCCH_blk_F: Atlas_H_HelmetCCH_base_F
	{
		author = $STR_A3_A_JC980_Jamie;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_H_HelmetCCH_blk_F0;
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_Atlas_H_HelmetCCH_blk_F_ca.paa";
		hiddenSelectionsTextures[] =
		{
			"\A3_Atlas\characters_f_atlas\Headgear\Data\H_HelmetCCH_blk_CO.paa"
		};
	};
	class Atlas_H_HelmetCCH_headset_base_F: Atlas_H_HelmetCCH_base_F
	{
		author = $STR_A3_A_JC980_Jamie;
		scope = Private;
		model = "\A3_Atlas\Characters_F_Atlas\Headgear\Atlas_H_HelmetCCH_Headset_F.p3d";
		hiddenSelections[] =
		{
			camo,
			camo1
		};
		class ItemInfo: ItemInfo
		{
			mass = 43;
			hiddenSelections[] =
			{
				camo,
				camo1
			};
			uniformModel = "\A3_Atlas\Characters_F_Atlas\Headgear\Atlas_H_HelmetCCH_Headset_F.p3d";
			modelSides[] =
			{
				TGuerrila,
				TCivilian
			};
	  	};
	};
	class Atlas_H_HelmetCCH_Headset_grn_F: Atlas_H_HelmetCCH_headset_base_F
	{
		author = $STR_A3_A_JC980_Jamie;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_H_HelmetCCH_headset_grn_F0;
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\Atlas_H_HelmetCCH_Headset_grn_F_ca.paa";
		hiddenSelectionsTextures[] =
		{
			"\A3_Atlas\characters_f_atlas\Headgear\Data\H_HelmetCCH_oli_CO.paa",
			"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_HelmetSpecter_01_cover_autumn_CO.paa"
		};
	};
	class Atlas_H_HelmetCCH_Headset_khk_F: Atlas_H_HelmetCCH_headset_base_F
	{
		author = $STR_A3_A_JC980_Jamie;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_H_HelmetCCH_headset_khk_F0;
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\Atlas_H_HelmetCCH_Headset_khk_F_ca.paa";
		hiddenSelectionsTextures[] =
		{
			"\A3_Atlas\characters_f_atlas\Headgear\Data\H_HelmetCCH_khk_CO.paa",
			"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_HelmetSpecter_01_cover_autumn_CO.paa"

		};
	};
	class Atlas_H_HelmetCCH_Headset_blk_F: Atlas_H_HelmetCCH_headset_base_F
	{
		author = $STR_A3_A_JC980_Jamie;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_H_HelmetCCH_headset_blk_F0;
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_Atlas_H_HelmetCCH_Headset_blk_F_ca.paa";
		hiddenSelectionsTextures[] =
		{
			"\A3_Atlas\characters_f_atlas\Headgear\Data\H_HelmetCCH_blk_CO.paa",
			"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_HelmetSpecter_01_cover_autumn_CO.paa"

		};
	};
	class Atlas_H_HelmetCCH_Cover_base_F: Atlas_H_HelmetCCH_base_F
	{
		author = $STR_A3_A_JC980_Jamie;
		scope = Private;
		model = "\A3_Atlas\Characters_F_Atlas\Headgear\Atlas_H_HelmetCCH_Cover_F.p3d";
		hiddenSelections[] =
		{
			camo,
			camo1,
			camo2
		};
		class ItemInfo: ItemInfo
		{
			mass = 43;
			hiddenSelections[] =
			{
				camo,
				camo1,
				camo2
			};
			uniformModel = "\A3_Atlas\Characters_F_Atlas\Headgear\Atlas_H_HelmetCCH_Cover_F.p3d";
			modelSides[] =
			{
				TGuerrila,
				TCivilian
			};
	  	};
	};
	class Atlas_H_HelmetCCH_cover_hex_F: Atlas_H_HelmetCCH_Cover_base_F
	{
		author = $STR_A3_A_JC980_Jamie;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_H_HelmetCCH_cover_hex_F0;
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\Atlas_H_HelmetCCH_cover_hex_F_ca.paa";
		hiddenSelectionsTextures[] =
		{
			"\A3_Atlas\characters_f_atlas\Headgear\Data\H_HelmetCCH_khk_CO.paa",
			"\A3_Atlas\characters_f_atlas\Headgear\Data\H_HelmetCCH_Cover_hex_CO.paa",
			"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_HelmetSpecter_01_cover_autumn_CO.paa"
		};
	};
	class Atlas_H_HelmetCCH_cover_mhex_F: Atlas_H_HelmetCCH_Cover_base_F
	{
		author = $STR_A3_A_JC980_Jamie;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_H_HelmetCCH_cover_mhex_F0;
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\Atlas_H_HelmetCCH_cover_mhex_F_ca.paa";
		hiddenSelectionsTextures[] =
		{
			"\A3_Atlas\characters_f_atlas\Headgear\Data\H_HelmetCCH_khk_CO.paa",
			"\A3_Atlas\characters_f_atlas\Headgear\Data\H_HelmetCCH_Cover_mhex_CO.paa",
			"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_HelmetSpecter_01_cover_autumn_CO.paa"
		};
	};
	class Atlas_H_HelmetCCH_Cover_ghex_F: Atlas_H_HelmetCCH_Cover_base_F
	{
		author = $STR_A3_A_JC980_Jamie;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_H_HelmetCCH_cover_ghex_F0;
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\Atlas_H_HelmetCCH_cover_ghex_F_ca.paa";
		hiddenSelectionsTextures[] =
		{
			"\A3_Atlas\characters_f_atlas\Headgear\Data\H_HelmetCCH_khk_CO.paa",
			"\A3_Atlas\characters_f_atlas\Headgear\Data\H_HelmetCCH_Cover_ghex_CO.paa",
			"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_HelmetSpecter_01_cover_autumn_CO.paa"
		};
	};
	class Atlas_H_HelmetCCH_Cover_semiarid_F: Atlas_H_HelmetCCH_Cover_base_F
	{
		author = $STR_A3_A_JC980_Jamie;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_H_HelmetCCH_cover_semiarid_F0;
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\Atlas_H_HelmetCCH_cover_semiarid_F_ca.paa";
		hiddenSelectionsTextures[] =
		{
			"\A3_Atlas\characters_f_atlas\Headgear\Data\H_HelmetCCH_khk_CO.paa",
			"\A3_Atlas\characters_f_atlas\Headgear\Data\H_HelmetCCH_Cover_semiarid_CO.paa",
			"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_HelmetSpecter_01_cover_autumn_CO.paa"
		};
	};
	class Atlas_H_HelmetCCH_Cover_dst_F: Atlas_H_HelmetCCH_Cover_base_F
	{
		author = $STR_A3_A_JC980_Jamie;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_H_HelmetCCH_cover_dst_F0;
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\Atlas_H_HelmetCCH_cover_dst_F_ca.paa";
		hiddenSelectionsTextures[] =
		{
			"\A3_Atlas\characters_f_atlas\Headgear\Data\H_HelmetCCH_khk_CO.paa",
			"\A3_Atlas\characters_f_atlas\Headgear\Data\H_HelmetCCH_Cover_dst_CO.paa",
			"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_HelmetSpecter_01_cover_autumn_CO.paa"
		};
	};
	class Atlas_H_HelmetCCH_Cover_whex_F: Atlas_H_HelmetCCH_Cover_base_F
	{
		author = $STR_A3_A_JC980_Jamie;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_H_HelmetCCH_cover_whex_F0;
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\Atlas_H_HelmetCCH_cover_whex_F_ca.paa";
		hiddenSelectionsTextures[] =
		{
			"\A3_Atlas\characters_f_atlas\Headgear\Data\H_HelmetCCH_oli_CO.paa",
			"\A3_Atlas\characters_f_atlas\Headgear\Data\H_HelmetCCH_Cover_whex_CO.paa",
			"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_HelmetSpecter_01_cover_autumn_CO.paa"
		};
	};
	class Atlas_H_HelmetCCH_Cover_uhex_F: Atlas_H_HelmetCCH_Cover_base_F
	{
		author = $STR_A3_A_JC980_Jamie;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_H_HelmetCCH_cover_uhex_F0;
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_Atlas_H_HelmetCCH_Cover_uhex_F_ca.paa";
		hiddenSelectionsTextures[] =
		{
			"\A3_Atlas\characters_f_atlas\Headgear\Data\H_HelmetCCH_khk_CO.paa",
			"\A3_Atlas\characters_f_atlas\Headgear\Data\H_HelmetCCH_Cover_uhex_CO.paa",
			"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_HelmetSpecter_01_cover_autumn_CO.paa"
		};
	};

	/* Intruder Helmet - HiCut Liberators*/
	class Atlas_H_HelmetCCH_HiCut_base_F: HelmetBase
	{
		author = $STR_A3_A_JC980_Jamie;
		scope = private;
		model = "\A3_Atlas\Characters_F_Atlas\Headgear\Atlas_H_HelmetCCH_HiCut_F.p3d";
		hiddenSelections[] = {camo};
		descriptionShort = $STR_A3_SP_AL_II;
		class ItemInfo: ItemInfo
		{
			mass = 25;
			hiddenSelections[] = {camo};
			allowedSlots[]={901,701,605};
			uniformModel = "\A3_Atlas\Characters_F_Atlas\Headgear\Atlas_H_HelmetCCH_HiCut_F.p3d";
			modelSides[] =
			{
				TEast,
				TCivilian
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = HitHead;
					armor = 7;
					passThrough = 0.5;
				};
			};
		};
	};
	class Atlas_H_HelmetCCH_HiCut_grn_F: Atlas_H_HelmetCCH_HiCut_base_F
	{
		author = $STR_A3_A_JC980_Jamie;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_H_HelmetCCH_HiCut_grn_F0;
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_Atlas_H_HelmetCCH_HiCut_grn_F_ca.paa";
		hiddenSelectionsTextures[] =
		{
			"\A3_Atlas\characters_f_atlas\Headgear\Data\H_HelmetCCH_HiCut_oli_CO.paa"
		};
	};
	class Atlas_H_HelmetCCH_HiCut_khk_F: Atlas_H_HelmetCCH_HiCut_base_F
	{
		author = $STR_A3_A_JC980_Jamie;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_H_HelmetCCH_HiCut_khk_F0;
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_Atlas_H_HelmetCCH_HiCut_khk_F_ca.paa";
		hiddenSelectionsTextures[] =
		{
			"\A3_Atlas\characters_f_atlas\Headgear\Data\H_HelmetCCH_HiCut_khk_CO.paa"
		};
	};
	class Atlas_H_HelmetCCH_HiCut_blk_F: Atlas_H_HelmetCCH_HiCut_base_F
	{
		author = $STR_A3_A_JC980_Jamie;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_H_HelmetCCH_HiCut_blk_F0;
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_Atlas_H_HelmetCCH_HiCut_blk_F_ca.paa";
		hiddenSelectionsTextures[] =
		{
			"\A3_Atlas\characters_f_atlas\Headgear\Data\H_HelmetCCH_HiCut_blk_CO.paa"
		};
	};
	class Atlas_H_HelmetCCH_HiCut_headset_base_F: Atlas_H_HelmetCCH_HiCut_base_F
	{
		author = $STR_A3_A_JC980_Jamie;
		scope = Private;
		model = "\A3_Atlas\Characters_F_Atlas\Headgear\Atlas_H_HelmetCCH_HiCut_Headset_F.p3d";
		hiddenSelections[] =
		{
			camo,
			camo1
		};
		class ItemInfo: ItemInfo
		{
			mass = 33;
			hiddenSelections[] =
			{
				camo,
				camo1
			};
			uniformModel = "\A3_Atlas\Characters_F_Atlas\Headgear\Atlas_H_HelmetCCH_HiCut_Headset_F.p3d";
			modelSides[] =
			{
				TGuerrila,
				TCivilian
			};
	  	};
	};
	class Atlas_H_HelmetCCH_HiCut_Headset_grn_F: Atlas_H_HelmetCCH_HiCut_headset_base_F
	{
		author = $STR_A3_A_JC980_Jamie;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_H_HelmetCCH_HiCut_headset_grn_F0;
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_Atlas_H_HelmetCCH_HiCut_Headset_grn_F_ca.paa";
		hiddenSelectionsTextures[] =
		{
			"\A3_Atlas\characters_f_atlas\Headgear\Data\H_HelmetCCH_HiCut_oli_CO.paa",
			"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_HelmetSpecter_01_cover_autumn_CO.paa"
		};
	};
	class Atlas_H_HelmetCCH_HiCut_Headset_khk_F: Atlas_H_HelmetCCH_HiCut_headset_base_F
	{
		author = $STR_A3_A_JC980_Jamie;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_H_HelmetCCH_HiCut_headset_khk_F0;
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_Atlas_H_HelmetCCH_HiCut_Headset_khk_F_ca.paa";
		hiddenSelectionsTextures[] =
		{
			"\A3_Atlas\characters_f_atlas\Headgear\Data\H_HelmetCCH_HiCut_khk_CO.paa",
			"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_HelmetSpecter_01_cover_autumn_CO.paa"

		};
	};
	class Atlas_H_HelmetCCH_HiCut_Headset_blk_F: Atlas_H_HelmetCCH_HiCut_headset_base_F
	{
		author = $STR_A3_A_JC980_Jamie;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_H_HelmetCCH_HiCut_headset_blk_F0;
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_Atlas_H_HelmetCCH_HiCut_Headset_blk_F_ca.paa";
		hiddenSelectionsTextures[] =
		{
			"\A3_Atlas\characters_f_atlas\Headgear\Data\H_HelmetCCH_HiCut_blk_CO.paa",
			"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_HelmetSpecter_01_cover_autumn_CO.paa"

		};
	};
	class Atlas_H_HelmetCCH_HiCut_Cover_base_F: Atlas_H_HelmetCCH_HiCut_base_F
	{
		author = $STR_A3_A_JC980_Jamie;
		scope = Private;
		model = "\A3_Atlas\Characters_F_Atlas\Headgear\Atlas_H_HelmetCCH_HiCut_Cover_F.p3d";
		hiddenSelections[] =
		{
			camo,
			camo1,
			camo2
		};
		class ItemInfo: ItemInfo
		{
			mass = 33;
			hiddenSelections[] =
			{
				camo,
				camo1,
				camo2
			};
			uniformModel = "\A3_Atlas\Characters_F_Atlas\Headgear\Atlas_H_HelmetCCH_HiCut_Cover_F.p3d";
			modelSides[] =
			{
				TGuerrila,
				TCivilian
			};
	  	};
	};
	class Atlas_H_HelmetCCH_HiCut_cover_hex_F: Atlas_H_HelmetCCH_HiCut_Cover_base_F
	{
		author = $STR_A3_A_JC980_Jamie;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_H_HelmetCCH_HiCut_cover_hex_F0;
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_Atlas_H_HelmetCCH_HiCut_Cover_hex_F_ca.paa";
		hiddenSelectionsTextures[] =
		{
			"\A3_Atlas\characters_f_atlas\Headgear\Data\H_HelmetCCH_HiCut_khk_CO.paa",
			"\A3_Atlas\characters_f_atlas\Headgear\Data\H_HelmetCCH_HiCut_Cover_hex_CO.paa",
			"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_HelmetSpecter_01_cover_autumn_CO.paa"
		};
	};
	class Atlas_H_HelmetCCH_HiCut_cover_mhex_F: Atlas_H_HelmetCCH_HiCut_Cover_base_F
	{
		author = $STR_A3_A_JC980_Jamie;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_H_HelmetCCH_HiCut_cover_mhex_F0;
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_Atlas_H_HelmetCCH_HiCut_Cover_mhex_F_ca.paa";
		hiddenSelectionsTextures[] =
		{
			"\A3_Atlas\characters_f_atlas\Headgear\Data\H_HelmetCCH_HiCut_khk_CO.paa",
			"\A3_Atlas\characters_f_atlas\Headgear\Data\H_HelmetCCH_HiCut_Cover_mhex_CO.paa",
			"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_HelmetSpecter_01_cover_autumn_CO.paa"
		};
	};
	class Atlas_H_HelmetCCH_HiCut_Cover_ghex_F: Atlas_H_HelmetCCH_HiCut_Cover_base_F
	{
		author = $STR_A3_A_JC980_Jamie;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_H_HelmetCCH_HiCut_cover_ghex_F0;
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_Atlas_H_HelmetCCH_HiCut_Cover_ghex_F_ca.paa";
		hiddenSelectionsTextures[] =
		{
			"\A3_Atlas\characters_f_atlas\Headgear\Data\H_HelmetCCH_HiCut_khk_CO.paa",
			"\A3_Atlas\characters_f_atlas\Headgear\Data\H_HelmetCCH_HiCut_Cover_ghex_CO.paa",
			"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_HelmetSpecter_01_cover_autumn_CO.paa"
		};
	};
	class Atlas_H_HelmetCCH_HiCut_Cover_semiarid_F: Atlas_H_HelmetCCH_HiCut_Cover_base_F
	{
		author = $STR_A3_A_JC980_Jamie;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_H_HelmetCCH_HiCut_cover_semiarid_F0;
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_Atlas_H_HelmetCCH_HiCut_Cover_semiarid_F_ca.paa";
		hiddenSelectionsTextures[] =
		{
			"\A3_Atlas\characters_f_atlas\Headgear\Data\H_HelmetCCH_HiCut_khk_CO.paa",
			"\A3_Atlas\characters_f_atlas\Headgear\Data\H_HelmetCCH_HiCut_Cover_semiarid_CO.paa",
			"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_HelmetSpecter_01_cover_autumn_CO.paa"
		};
	};
	class Atlas_H_HelmetCCH_HiCut_Cover_dst_F: Atlas_H_HelmetCCH_HiCut_Cover_base_F
	{
		author = $STR_A3_A_JC980_Jamie;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_H_HelmetCCH_HiCut_cover_dst_F0;
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_Atlas_H_HelmetCCH_HiCut_Cover_dst_F_ca.paa";
		hiddenSelectionsTextures[] =
		{
			"\A3_Atlas\characters_f_atlas\Headgear\Data\H_HelmetCCH_HiCut_khk_CO.paa",
			"\A3_Atlas\characters_f_atlas\Headgear\Data\H_HelmetCCH_HiCut_Cover_dst_CO.paa",
			"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_HelmetSpecter_01_cover_autumn_CO.paa"
		};
	};
	class Atlas_H_HelmetCCH_HiCut_Cover_whex_F: Atlas_H_HelmetCCH_HiCut_Cover_base_F
	{
		author = $STR_A3_A_JC980_Jamie;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_H_HelmetCCH_HiCut_cover_whex_F0;
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_Atlas_H_HelmetCCH_HiCut_Cover_whex_F_ca.paa";
		hiddenSelectionsTextures[] =
		{
			"\A3_Atlas\characters_f_atlas\Headgear\Data\H_HelmetCCH_HiCut_oli_CO.paa",
			"\A3_Atlas\characters_f_atlas\Headgear\Data\H_HelmetCCH_HiCut_Cover_whex_CO.paa",
			"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_HelmetSpecter_01_cover_autumn_CO.paa"
		};
	};
	class Atlas_H_HelmetCCH_HiCut_Cover_uhex_F: Atlas_H_HelmetCCH_HiCut_Cover_base_F
	{
		author = $STR_A3_A_JC980_Jamie;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_H_HelmetCCH_HiCut_cover_uhex_F0;
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_Atlas_H_HelmetCCH_HiCut_Cover_uhex_F_ca.paa";
		hiddenSelectionsTextures[] =
		{
			"\A3_Atlas\characters_f_atlas\Headgear\Data\H_HelmetCCH_HiCut_khk_CO.paa",
			"\A3_Atlas\characters_f_atlas\Headgear\Data\H_HelmetCCH_HiCut_Cover_uhex_CO.paa",
			"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_HelmetSpecter_01_cover_autumn_CO.paa"
		};
	};

	/* Opscore - FASTMT*/
	class Aegis_H_Helmet_FASTMT_Cover_base_F;
	class Atlas_H_Helmet_FASTMT_Cover_aucamo_F: Aegis_H_Helmet_FASTMT_Cover_base_F
	{
		author = $STR_A3_A_JC980_Jamie;
        scope = public;
        displayName = $STR_A3_A_CfgWeapons_H_Helmet_FASTMT_Cover_aucamo_F0;
        picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\Atlas_H_Helmet_FASTMT_Cover_aucamo_F_ca.paa";
		hiddenSelectionsTextures[] =
        {
			"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_HelmetFASTMT_rgr_CO.paa",
			"\A3_Atlas\Characters_F_Atlas\Headgear\Data\H_HelmetFASTMT_Cover_aucamo_CO.paa",
			"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_HeadsetWest_oli_CO.paa"
        };
	};
	class Atlas_H_Helmet_FASTMT_Cover_aucamo_trp_F: Aegis_H_Helmet_FASTMT_Cover_base_F
	{
		author = $STR_A3_A_JC980_Jamie;
        scope = public;
        displayName = $STR_A3_A_CfgWeapons_H_Helmet_FASTMT_Cover_aucamo_trp_F0;
        picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\Atlas_H_Helmet_FASTMT_Cover_aucamo_trp_F_ca.paa";
		hiddenSelectionsTextures[] =
        {
			"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_HelmetFASTMT_rgr_CO.paa",
			"\A3_Atlas\Characters_F_Atlas\Headgear\Data\H_HelmetFASTMT_Cover_aucamo_tropic_CO.paa",
			"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_HeadsetWest_oli_CO.paa"
        };
	};
	class Atlas_H_Helmet_FASTMT_Cover_aucamo_ard_F: Aegis_H_Helmet_FASTMT_Cover_base_F
	{
		author = $STR_A3_A_JC980_Jamie;
        scope = public;
        displayName = $STR_A3_A_CfgWeapons_H_Helmet_FASTMT_Cover_aucamo_ard_F0;
        picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\Atlas_H_Helmet_FASTMT_Cover_aucamo_ard_F_ca.paa";
		hiddenSelectionsTextures[] =
        {
			"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_HelmetFASTMT_rgr_CO.paa",
			"\A3_Atlas\Characters_F_Atlas\Headgear\Data\H_HelmetFASTMT_Cover_aucamo_arid_CO.paa",
			"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_HeadsetWest_oli_CO.paa"
        };
	};
	class Atlas_H_Helmet_FASTMT_Cover_Mo_North_F: Aegis_H_Helmet_FASTMT_Cover_base_F
	{
		author = $STR_A3_A_JC980_Jamie;
        scope = private;
        displayName = "Operator Helmet [Morocco] (Cover)";
        picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\Atlas_H_Helmet_FASTMT_Cover_aucamo_ard_F_ca.paa";
		hiddenSelectionsTextures[] =
        {
			"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_HelmetFASTMT_rgr_CO.paa",
			"\A3_Atlas\Characters_F_Atlas\Headgear\Data\H_HelmetFASTMT_Cover_Mo_North_CO.paa",
			"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_HeadsetWest_oli_CO.paa"
        };
	};

	/* Field Caps */
	class Atlas_H_FieldCap_flecktarn: HelmetBase
	{
		author = $STR_A3_A_Jamie;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_H_FieldCap_flecktarn0;
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\Atlas_H_FieldCap_flecktarn_ca.paa";
		model = "\A3_Atlas\characters_f_atlas\Headgear\h_capfield.p3d";
        hiddenSelections[] = { "camo" };
		hiddenSelectionsTextures[] = {"\A3_Atlas\characters_f_atlas\Headgear\Data\h_capfield_flecktarn_CO.paa"};
		class ItemInfo: ItemInfo
		{
			mass = 8;
			hiddenSelections[] =
			{
				camo
			};
			uniformModel = "\A3_Atlas\characters_f_atlas\Headgear\h_capfield.p3d";
			allowedSlots[]={901,701,605};
			modelSides[] =
			{
				TGuerrila,
				TCivilian
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = HitHead;
					armor = 0;
					passThrough = 0;
				};
			};
	  	};
	};
	class Atlas_H_FieldCap_hs_flecktarn: HelmetBase
	{
		author = $STR_A3_A_Jamie;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_H_FieldCap_hs_flecktarn0;
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_Atlas_H_FieldCap_hs_flecktarn_ca.paa";
		model = "\A3_Atlas\characters_f_atlas\Headgear\h_capfield_headset.p3d";
        hiddenSelections[] = 
		{ 
			camo,
			camo1,
			camo2,
			camo3
		};
		hiddenSelectionsTextures[] = 
		{
			"\A3_Atlas\characters_f_atlas\Headgear\Data\h_capfield_flecktarn_CO.paa",
			"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_Headset_Tactical_khk_CO.paa",
			"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_Headset_Tactical_khk_CO.paa",
			"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_Headset_Tactical_khk_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			mass = 8;
			hiddenSelections[] =
			{
				camo,
				camo1,
				camo2,
				camo3
			};
			uniformModel = "\A3_Atlas\characters_f_atlas\Headgear\h_capfield_headset.p3d";
			allowedSlots[]={901,701,605};
			modelSides[] =
			{
				TGuerrila,
				TCivilian
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = HitHead;
					armor = 0;
					passThrough = 0;
				};
			};
	  	};
	};
	class Atlas_H_FieldCap_multitarn: Atlas_H_FieldCap_flecktarn
	{
		author = $STR_A3_A_Jamie;
		displayName = $STR_A3_A_CfgWeapons_H_FieldCap_multitarn0;
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\Atlas_H_FieldCap_multitarn_ca.paa";
		hiddenSelectionsTextures[] = {"\A3_Atlas\characters_f_atlas\Headgear\Data\h_capfield_multitarn_CO.paa"};
	};
	class Atlas_H_FieldCap_hs_multitarn: Atlas_H_FieldCap_hs_flecktarn
	{
		author = $STR_A3_A_Jamie;
		displayName = $STR_A3_A_CfgWeapons_H_FieldCap_hs_multitarn0;
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_Atlas_H_FieldCap_hs_multitarn_ca.paa";
		hiddenSelectionsTextures[] = 
		{
			"\A3_Atlas\characters_f_atlas\Headgear\Data\h_capfield_multitarn_CO.paa",
			"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_Headset_Tactical_khk_CO.paa",
			"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_Headset_Tactical_khk_CO.paa",
			"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_Headset_Tactical_khk_CO.paa"
		};
	};
	class Atlas_H_FieldCap_ldf: Atlas_H_FieldCap_flecktarn
	{
		author = $STR_A3_A_Jamie;
		displayName = $STR_A3_A_CfgWeapons_H_FieldCap_ldf0;
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\Atlas_H_FieldCap_ldf_ca.paa";
		hiddenSelectionsTextures[] = {"\A3_Atlas\characters_f_atlas\Headgear\Data\h_capfield_ldf_CO.paa"};
	};
	class Atlas_H_FieldCap_hs_ldf: Atlas_H_FieldCap_hs_flecktarn
	{
		author = $STR_A3_A_Jamie;
		displayName = $STR_A3_A_CfgWeapons_H_FieldCap_hs_ldf0;
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_Atlas_H_FieldCap_hs_ldf_ca.paa";
		hiddenSelectionsTextures[] = 
		{
			"\A3_Atlas\characters_f_atlas\Headgear\Data\h_capfield_ldf_CO.paa",
			"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_Headset_Tactical_grn_CO.paa",
			"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_Headset_Tactical_grn_CO.paa",
			"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_Headset_Tactical_grn_CO.paa"
		};
	};
	class Atlas_H_FieldCap_pantera: Atlas_H_FieldCap_flecktarn
	{
		author = $STR_A3_A_Jamie;
		displayName = $STR_A3_A_CfgWeapons_H_FieldCap_pantera0;
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\Atlas_H_FieldCap_pantera_ca.paa";
		hiddenSelectionsTextures[] = {"\A3_Atlas\characters_f_atlas\Headgear\Data\h_capfield_pantera_CO.paa"};
	};
	class Atlas_H_FieldCap_hs_pantera: Atlas_H_FieldCap_hs_flecktarn
	{
		author = $STR_A3_A_Jamie;
		displayName = $STR_A3_A_CfgWeapons_H_FieldCap_hs_pantera0;
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_Atlas_H_FieldCap_hs_pantera_ca.paa";
		hiddenSelectionsTextures[] = 
		{
			"\A3_Atlas\characters_f_atlas\Headgear\Data\h_capfield_pantera_CO.paa",
			"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_Headset_Tactical_grn_CO.paa",
			"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_Headset_Tactical_grn_CO.paa",
			"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_Headset_Tactical_grn_CO.paa"
		};
	};

	class Atlas_H_FieldCap_kzg: Atlas_H_FieldCap_flecktarn
	{
		author = $STR_A3_A_BranFlakes;
		displayName = $STR_A3_A_CfgWeapons_H_FieldCap_kzg0;
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_Atlas_H_FieldCap_kzg_ca.paa";
		hiddenSelectionsTextures[] = {"\A3_Atlas\characters_f_atlas\Headgear\Data\h_capfield_kzg_CO.paa"};
	};
	class Atlas_H_FieldCap_hs_kzg: Atlas_H_FieldCap_hs_flecktarn
	{
		author = $STR_A3_A_BranFlakes;
		displayName = $STR_A3_A_CfgWeapons_H_FieldCap_hs_kzg0;
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_Atlas_H_FieldCap_hs_kzg_ca.paa";
		hiddenSelectionsTextures[] = 
		{
			"\A3_Atlas\characters_f_atlas\Headgear\Data\h_capfield_kzg_CO.paa",
			"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_Headset_Tactical_khk_CO.paa",
			"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_Headset_Tactical_khk_CO.paa",
			"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_Headset_Tactical_khk_CO.paa"
		};
	};
	/* Field Caps - End */

	/* Covered Basic Helmets - Base classes */
	class Atlas_H_PASGT_Cover_base_F: HelmetBase
	{
		author = "Tactical Druid";
		scope = private;
		model = "\A3_Atlas\characters_f_atlas\Headgear\Atlas_H_PASGT_Cover_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Camo2"
		};
		descriptionShort = $STR_A3_SP_AL_II;
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3_Atlas\characters_f_atlas\Headgear\Atlas_H_PASGT_Cover_F.p3d";
			allowedSlots[]={901,701,605};
			modelSides[] =
			{
				TGuerrila,
				TCivilian
			};
			hiddenSelections[]=
			{
				"Camo",
				"Camo2"
			};
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class Atlas_H_PASGT_Cover_O_Base_F: Atlas_H_PASGT_Cover_Base_F
	{
		author = $STR_A3_A_TacticalDruid;
		scope = private;
		model = "\A3_Atlas\characters_f_atlas\Headgear\Atlas_H_PASGT_Cover_O_F.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3_Atlas\characters_f_atlas\Headgear\Atlas_H_PASGT_Cover_O_F.p3d";
		};
	};
	class Atlas_H_PASGT_Cover_I_Base_F: Atlas_H_PASGT_Cover_Base_F
	{
		author = $STR_A3_A_TacticalDruid;
		scope = private;
		model = "\A3_Atlas\characters_f_atlas\Headgear\Atlas_H_PASGT_Cover_I_F.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3_Atlas\characters_f_atlas\Headgear\Atlas_H_PASGT_Cover_I_F.p3d";
		};
	};
	class Atlas_H_PASGT_Cover_alt_Base_F: Atlas_H_PASGT_Cover_Base_F
	{
		author = $STR_A3_A_TacticalDruid;
		scope = private;
		model = "\A3_Atlas\characters_f_atlas\Headgear\Atlas_H_PASGT_Cover_alt_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Camo2"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3_Atlas\characters_f_atlas\Headgear\Atlas_H_PASGT_Cover_alt_F.p3d";
		};
	};
	/* Covered Basic Helmet Base Classes - End */

	/* Covered Basic Helmets*/
	
	class Atlas_H_PASGT_Cover_Green_F: Atlas_H_PASGT_Cover_base_F
	{
		author = $STR_A3_A_TacticalDruid_and_Lowaltitude;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_H_PASGT_Cover_Green_f0;
		picture = "\A3_Atlas\characters_f_atlas\Headgear\Data\UI\icon_Atlas_H_PASGT_Cover_Green_F_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3_Atlas\characters_f_atlas\Headgear\Data\Atlas_H_PASGT_Cover_Grn_CO.paa",
			"\A3\Characters_F_Orange\Headgear\Data\H_PASGT_olive_CO.paa",
		};
	};
	class Atlas_H_PASGT_Cover_Olive_F: Atlas_H_PASGT_Cover_base_F
	{
		author = $STR_A3_A_TacticalDruid_and_Lowaltitude;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_H_PASGT_Cover_Olive_f0;
		picture = "\A3_Atlas\characters_f_atlas\Headgear\Data\UI\icon_Atlas_H_PASGT_Cover_Olive_F_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3_Atlas\characters_f_atlas\Headgear\Data\Atlas_H_PASGT_Cover_Olv_CO.paa",
			"\A3\Characters_F_Orange\Headgear\Data\H_PASGT_olive_CO.paa"
			
		};
	};
	class Atlas_H_PASGT_Cover_Tan_F: Atlas_H_PASGT_Cover_base_F
	{
		author = $STR_A3_A_TacticalDruid_and_Lowaltitude;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_H_PASGT_Cover_Tan_f0;
		picture = "\A3_Atlas\characters_f_atlas\Headgear\Data\UI\icon_Atlas_H_PASGT_Cover_Tan_F_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3_Atlas\characters_f_atlas\Headgear\Data\Atlas_H_PASGT_Cover_cbr_CO.paa",
			"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_PASGT_sand_CO.paa"
		};
	};
	class Atlas_H_PASGT_Cover_wdl_F: Atlas_H_PASGT_Cover_base_F
	{
		author = $STR_A3_A_TacticalDruid_and_Lowaltitude;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_H_PASGT_Cover_wdl_f0;
		picture = "\A3_Atlas\characters_f_atlas\Headgear\Data\UI\icon_Atlas_H_PASGT_Cover_wdl_F_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3_Atlas\characters_f_atlas\Headgear\Data\Atlas_H_PASGT_Cover_wdl_CO.paa",
			"\A3\Characters_F_Orange\Headgear\Data\H_PASGT_olive_CO.paa"
			
		};
	};
	class Atlas_H_PASGT_Cover_UN_F: Atlas_H_PASGT_Cover_base_F
	{
		author = $STR_A3_A_TacticalDruid_and_Lowaltitude;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_H_PASGT_Cover_UN_f0;
		picture = "\A3_Atlas\characters_f_atlas\Headgear\Data\UI\icon_Atlas_H_PASGT_Cover_UN_F_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3_Atlas\characters_f_atlas\Headgear\Data\Atlas_H_PASGT_Cover_UNO_CO.paa",
			"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_PASGT_sand_CO.paa"
			
		};
	};
	/*class Atlas_H_PASGT_Cover_RACS_F: Atlas_H_PASGT_Cover_base_F
	{
		author = $STR_A3_A_TacticalDruid_and_Lowaltitude;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_H_PASGT_Cover_RACS_f0;
		//picture = "\A3_Atlas\characters_f_atlas\Headgear\Data\UI\icon_Atlas_H_PASGT_Cover_RACS_F_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3_Atlas\characters_f_atlas\Headgear\Data\Atlas_H_PASGT_Cover_RACS_CO.paa",
			"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_PASGT_sand_CO.paa"
		};
	};*/
	class Atlas_H_PASGT_Cover_HIMF_F: Atlas_H_PASGT_Cover_base_F
	{
		author = $STR_A3_A_TacticalDruid_and_Lowaltitude;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_H_PASGT_Cover_HIMF_f0;
		picture = "\A3_Atlas\characters_f_atlas\Headgear\Data\UI\icon_Atlas_H_PASGT_Cover_HIMF_F_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3_Atlas\characters_f_atlas\Headgear\Data\Atlas_H_PASGT_Cover_tiger_CO.paa",
			"\A3\Characters_F_Orange\Headgear\Data\H_PASGT_olive_CO.paa"
			
		};
	};
	class Atlas_H_PASGT_Cover_O_Hex_F: Atlas_H_PASGT_Cover_O_base_F
	{
		author = $STR_A3_A_TacticalDruid_and_Lowaltitude;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_H_PASGT_Cover_Hex_f0;
		picture = "\A3_Atlas\characters_f_atlas\Headgear\Data\UI\icon_Atlas_H_PASGT_Cover_O_Hex_F_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3_Atlas\characters_f_atlas\Headgear\Data\Atlas_H_PASGT_Cover_O_Hex_CO.paa",
			"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_PASGT_sand_CO.paa"
		};
	};
	class Atlas_H_PASGT_Cover_O_GHex_F: Atlas_H_PASGT_Cover_O_base_F
	{
		author = $STR_A3_A_TacticalDruid_and_Lowaltitude;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_H_PASGT_Cover_GHex_f0;
		picture = "\A3_Atlas\characters_f_atlas\Headgear\Data\UI\icon_Atlas_H_PASGT_Cover_O_GHex_F_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3_Atlas\characters_f_atlas\Headgear\Data\Atlas_H_PASGT_Cover_O_GHex_CO.paa",
			"\A3\Characters_F_Orange\Headgear\Data\H_PASGT_olive_CO.paa"
			
		};
	};
	class Atlas_H_PASGT_Cover_O_DHex_F: Atlas_H_PASGT_Cover_O_base_F
	{
		author = $STR_A3_A_TacticalDruid_and_Lowaltitude;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_H_PASGT_Cover_Desert_f0;
		picture = "\A3_Atlas\characters_f_atlas\Headgear\Data\UI\icon_Atlas_H_PASGT_Cover_O_DHex_F_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3_Atlas\characters_f_atlas\Headgear\Data\Atlas_H_PASGT_Cover_O_DHex_CO.paa",
			"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_PASGT_sand_CO.paa"
		};
	};
	class Atlas_H_PASGT_Cover_O_SAHex_F: Atlas_H_PASGT_Cover_O_base_F
	{
		author = $STR_A3_A_TacticalDruid_and_Lowaltitude;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_H_PASGT_Cover_SemiArid_f0;
		picture = "\A3_Atlas\characters_f_atlas\Headgear\Data\UI\icon_Atlas_H_PASGT_Cover_O_SAHex_F_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3_Atlas\characters_f_atlas\Headgear\Data\Atlas_H_PASGT_Cover_O_SHex_CO.paa",
			"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_PASGT_sand_CO.paa"
			
		};
	};
	class Atlas_H_PASGT_Cover_O_OHex_F: Atlas_H_PASGT_Cover_O_base_F
	{
		author = $STR_A3_A_TacticalDruid_and_Lowaltitude;
		scope = private;
		displayName = $STR_A3_A_CfgWeapons_H_PASGT_Cover_OHex_f0;
		picture = "\A3_Atlas\characters_f_atlas\Headgear\Data\UI\icon_Atlas_H_PASGT_Cover_O_OHex_F_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3_Atlas\characters_f_atlas\Headgear\Data\Atlas_H_PASGT_Cover_O_OHex_CO.paa",
			"\A3\Characters_F_Orange\Headgear\Data\H_PASGT_black_CO.paa"
			
		};
	};
	class Atlas_H_PASGT_Cover_O_UHex_F: Atlas_H_PASGT_Cover_O_base_F
	{
		author = $STR_A3_A_TacticalDruid_and_Lowaltitude;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_H_PASGT_Cover_oucamo_f0;
		picture = "\A3_Atlas\characters_f_atlas\Headgear\Data\UI\icon_Atlas_H_PASGT_Cover_O_UHex_F_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3_Atlas\characters_f_atlas\Headgear\Data\Atlas_H_PASGT_Cover_O_UHex_CO.paa",
			"\A3\Characters_F_Orange\Headgear\Data\H_PASGT_black_CO.paa"
			
		};
	};
	class Atlas_H_PASGT_Cover_I_EAF_F: Atlas_H_PASGT_Cover_I_base_F
	{
		author = $STR_A3_A_TacticalDruid_and_Lowaltitude;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_H_PASGT_Cover_EAF_f0;
		picture = "\A3_Atlas\characters_f_atlas\Headgear\Data\UI\icon_Atlas_H_PASGT_Cover_I_EAF_F_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3_Atlas\characters_f_atlas\Headgear\Data\Atlas_H_PASGT_Cover_I_EAF_CO.paa",
			"\A3\Characters_F_Orange\Headgear\Data\H_PASGT_olive_CO.paa"
			
		};
	};
	class Atlas_H_PASGT_Cover_I_EAF_R_F: Atlas_H_PASGT_Cover_I_base_F
	{
		author = $STR_A3_A_TacticalDruid_and_Lowaltitude;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_H_PASGT_Cover_EAF_R_f0;
		picture = "\A3_Atlas\characters_f_atlas\Headgear\Data\UI\icon_Atlas_H_PASGT_Cover_I_EAF_R_F_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3_Atlas\characters_f_atlas\Headgear\Data\Atlas_H_PASGT_Cover_I_EAR_CO.paa",
			"\A3\Characters_F_Orange\Headgear\Data\H_PASGT_olive_CO.paa"
		};
	};
	class Atlas_H_PASGT_Cover_I_UNA_F: Atlas_H_PASGT_Cover_I_base_F
	{
		author = $STR_A3_A_TacticalDruid_and_Lowaltitude;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_H_PASGT_Cover_UNA_f0;
		picture = "\A3_Atlas\characters_f_atlas\Headgear\Data\UI\icon_Atlas_H_PASGT_Cover_I_UNA_F_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3_Atlas\characters_f_atlas\Headgear\Data\Atlas_H_PASGT_Cover_I_UNO_CO.paa",
			"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_PASGT_sand_CO.paa"
			
		};
	};
	class Atlas_H_PASGT_Cover_alt_Black_F: Atlas_H_PASGT_Cover_alt_base_F
	{
		author = $STR_A3_A_TacticalDruid_and_Lowaltitude;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_H_PASGT_Cover_Black_f0;
		picture = "\A3_Atlas\characters_f_atlas\Headgear\Data\UI\icon_Atlas_H_PASGT_Cover_alt_Black_F_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3_Atlas\characters_f_atlas\Headgear\Data\Atlas_H_PASGT_Cover_alt_Black_CO.paa",
			"\A3\Characters_F_Orange\Headgear\Data\H_PASGT_black_CO.paa"
			
		};
	};
	class Atlas_H_PASGT_Cover_alt_KZG_F: Atlas_H_PASGT_Cover_alt_base_F
	{
		author = $STR_A3_A_TacticalDruid_and_Lowaltitude;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_H_PASGT_Cover_KZG_f0;
		picture = "\A3_Atlas\characters_f_atlas\Headgear\Data\UI\icon_Atlas_H_PASGT_Cover_alt_KZG_F_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3_Atlas\characters_f_atlas\Headgear\Data\Atlas_H_PASGT_Cover_KZG_CO.paa",
			"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_PASGT_sand_CO.paa"
		};
	};
	/* Covered Basic Helmets - END */
/*	
	class Atlas_H_Helmet_FASTMT_Cover_CDF_F: Aegis_H_Helmet_FASTMT_Cover_base_F
	{
		author = $STR_A3_A_JC980_Jamie;
        scope = public;
        displayName = "Operator Helmet [CDF] (Cover)";
        picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\Atlas_H_Helmet_FASTMT_Cover_aucamo_trp_F_ca.paa";
		hiddenSelectionsTextures[] =
        {
			"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_HelmetFASTMT_rgr_CO.paa",
			"\A3_Atlas\Characters_F_Atlas\Headgear\Data\H_HelmetFASTMT_Cover_CDF_CO.paa",
			"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_HeadsetWest_oli_CO.paa"
        };
	};

	class Atlas_H_Helmet_FASTMT_Cover_KZG_F: Aegis_H_Helmet_FASTMT_Cover_base_F
	{
		author = $STR_A3_A_JC980_Jamie;
        scope = private;
        displayName = "Operator Helmet [Karzeghistan] (Cover)";
        picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\Atlas_H_Helmet_FASTMT_Cover_aucamo_trp_F_ca.paa";
		hiddenSelectionsTextures[] =
        {
			"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_HelmetFASTMT_rgr_CO.paa",
			"\A3_Atlas\Characters_F_Atlas\Headgear\Data\H_HelmetFASTMT_Cover_KZG_CO.paa",
			"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_HeadsetWest_oli_CO.paa"
        };
	};
*/
	/*class Atlas_H_ViperP4_01_base_F: HelmetBase
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = private;
		model = "\A3_Atlas\Characters_F_Atlas\Headgear\ViperP4_01.p3d";
		hiddenSelections[] =
		{
			camo1,
			camo2
		};
		descriptionShort = $STR_A3_SP_AL_IV;
		class ItemInfo: ItemInfo
		{
			mass = 33;
			hiddenSelections[] =
			{
				camo1,
				camo2
			};
			uniformModel = "\A3_Atlas\Characters_F_Atlas\Headgear\ViperP4_01.p3d";
			modelSides[] =
			{
				TWest,
				TCivilian
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = HitHead;
					armor = 7;
					passThrough = 0.5;
				};
			};
		};
	};
	class Atlas_H_ViperP4_hs_01_base_F: Atlas_H_ViperP4_01_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = private;
		model = "\A3_Atlas\Characters_F_Atlas\Headgear\ViperP4_01_hs.p3d";
		descriptionShort = $STR_A3_SP_AL_IV;
		class ItemInfo: ItemInfo
		{
			mass = 33;
			uniformModel = "\A3_Atlas\Characters_F_Atlas\Headgear\ViperP4_01_hs.p3d";
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = HitHead;
					armor = 7;
					passThrough = 0.5;
				};
			};
		};
	};
	class Atlas_H_ViperP4_02_base_F: Atlas_H_ViperP4_01_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = private;
		model = "\A3_Atlas\Characters_F_Atlas\Headgear\ViperP4_02.p3d";
		descriptionShort = $STR_A3_SP_AL_IV;
		class ItemInfo: ItemInfo
		{
			mass = 33;
			uniformModel = "\A3_Atlas\Characters_F_Atlas\Headgear\ViperP4_02.p3d";
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = HitHead;
					armor = 7;
					passThrough = 0.5;
				};
			};
		};
	};
	class Atlas_H_ViperP4_03_base_F: Atlas_H_ViperP4_01_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = private;
		model = "\A3_Atlas\Characters_F_Atlas\Headgear\ViperP4_03.p3d";
		descriptionShort = $STR_A3_SP_AL_IV;
		class ItemInfo: ItemInfo
		{
			mass = 33;
			uniformModel = "\A3_Atlas\Characters_F_Atlas\Headgear\ViperP4_03.p3d";
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = HitHead;
					armor = 7;
					passThrough = 0.5;
				};
			};
		};
	};
	class Atlas_H_ViperP4_hs_03_base_F: Atlas_H_ViperP4_03_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = private;
		model = "\A3_Atlas\Characters_F_Atlas\Headgear\ViperP4_03_hs.p3d";
		descriptionShort = $STR_A3_SP_AL_IV;
		class ItemInfo: ItemInfo
		{
			mass = 33;
			uniformModel = "\A3_Atlas\Characters_F_Atlas\Headgear\ViperP4_03_hs.p3d";
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = HitHead;
					armor = 7;
					passThrough = 0.5;
				};
			};
		};
	};
	/* Viper Black */
	/*class Atlas_H_ViperP4_01_black_F: Atlas_H_ViperP4_01_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		scopeArsenal = public;
		//displayName = $STR_Atlas_ViperP4_01_black_dn;
		hiddenSelectionsTextures[] =
		{
			"\A3_Atlas\Characters_F_Atlas\Headgear\Data\ViperP4_black_CO.paa"
		};
		picture = "\A3_Atlas\EU\Characters_F_Atlas\Headgear\Data\UI\icon_ExtEra_h_EU_ViperP4_01_black_CA.paa";
	};
	class Atlas_H_ViperP4_hs_01_black_F: Atlas_H_ViperP4_hs_01_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		scopeArsenal = public;
		//displayName = $STR_Atlas_ViperP4_01_hs_black_dn;
		hiddenSelectionsTextures[] =
		{
			"\A3_Atlas\Characters_F_Atlas\Headgear\Data\ViperP4_black_CO.paa",
			"\A3_Atlas\Characters_F_Atlas\Headgear\Data\ViperP4_black_CO.paa"
		};
		picture = "\A3_Atlas\EU\Characters_F_Atlas\Headgear\Data\UI\icon_ExtEra_h_EU_ViperP4_01_black_CA.paa";
	};
	class ExtEra_h_EU_ViperP4_02_Black_F: Atlas_H_ViperP4_02_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		scopeArsenal = public;
		//displayName = $STR_Atlas_ViperP4_02_black_dn;
		hiddenSelectionsTextures[] =
		{
			"\A3_Atlas\Characters_F_Atlas\Headgear\Data\ViperP4_black_CO.paa",
			"\A3_Atlas\Characters_F_Atlas\Headgear\Data\ViperP4_black_CO.paa"
		};
		picture = "\ExtEra\EU\Characters\Headgear\Data\UI\icon_ExtEra_h_EU_ViperP4_02_black_CA.paa";
	};
	/* Green */
	/*class Atlas_H_ViperP4_01_Green_F: Atlas_H_ViperP4_01_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		scopeArsenal = public;
		//displayName = $STR_Atlas_ViperP4_01_green_dn;
		hiddenSelectionsTextures[] =
		{
			"\A3_Atlas\Characters_F_Atlas\Headgear\Data\ViperP4_green_CO.paa"
		};
		picture = "\A3_Atlas\EU\Characters_F_Atlas\Headgear\Data\UI\icon_ExtEra_h_EU_ViperP4_01_black_CA.paa";
	};
	class Atlas_H_ViperP4_hs_01_Green_F: Atlas_H_ViperP4_hs_01_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		scopeArsenal = public;
		//displayName = $STR_Atlas_ViperP4_01_hs_green_dn;
		hiddenSelectionsTextures[] =
		{
			"\A3_Atlas\Characters_F_Atlas\Headgear\Data\ViperP4_green_CO.paa",
			"\A3_Atlas\Characters_F_Atlas\Headgear\Data\ViperP4_green_CO.paa"
		};
		picture = "\A3_Atlas\EU\Characters_F_Atlas\Headgear\Data\UI\icon_ExtEra_h_EU_ViperP4_01_black_CA.paa";
	};
	class ExtEra_h_EU_ViperP4_02_Green_F: Atlas_H_ViperP4_02_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		scopeArsenal = public;
		//displayName = $STR_Atlas_ViperP4_02_green_dn;
		hiddenSelectionsTextures[] =
		{
			"\A3_Atlas\Characters_F_Atlas\Headgear\Data\ViperP4_green_CO.paa",
			"\A3_Atlas\Characters_F_Atlas\Headgear\Data\ViperP4_green_CO.paa"
		};
		picture = "\ExtEra\EU\Characters\Headgear\Data\UI\icon_ExtEra_h_EU_ViperP4_02_black_CA.paa";
	};
	/* Woodland */
	/*class ExtEra_h_EU_ViperP4_03_geotiger_F: Atlas_H_ViperP4_hs_03_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		scopeArsenal = public;
		//displayName = $STR_Atlas_ViperP4_03_hs_woodland_dn;
		hiddenSelectionsTextures[] =
		{
			"\A3_Atlas\Characters_F_Atlas\Headgear\Data\ViperP4_green_CO.paa",
			"\A3_Atlas\Characters_F_Atlas\Headgear\Data\ViperP4_green_CO.paa"
		};
		picture = "\ExtEra\EU\Characters\Headgear\Data\UI\icon_ExtEra_h_EU_ViperP4_02_black_CA.paa";
	};*/
    // Deprecated classes
    #include "deprecated.hpp"
};