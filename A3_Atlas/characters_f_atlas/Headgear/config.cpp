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
	// Arma 3 Atlas
	class H_MK7_Marar_F: H_MK7_Base_F
    {
        author = "Bran Flakes and TacticalDruid";
        scope = public;
        displayName = $STR_A3_A_CfgWeaponsH_MK7_Marar_F0;
        //picture = "Picture path";
        model = "\A3_Aegis\Characters_F_Aegis\Headgear\H_Mk7_F";
        hiddenSelections[] = { "Camo","Camo2","Camo3" };
        hiddenSelectionsTextures[] =
        {
         	"\A3_Atlas\Characters_F_Atlas\Headgear\Data\MK7_Marar.tga",
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
    /*
	class H_HelmetO_semiarid: H_HelmetO_ocamo
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_H_HelmetO_semiarid0;
		//picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_HelmetO_semiarid_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\tech_tka_CO.paa"};
	};
	class H_HelmetLeaderO_semiarid: H_HelmetLeaderO_ocamo
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_H_HelmetLeaderO_semiarid0;
		//picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_HelmetLeaderO_semiarid_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\tech_tka_CO.paa"};
	};
	class H_HelmetSpecO_semiarid: H_HelmetSpecO_ocamo
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_H_HelmetSpecO_semiarid0;
		//picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_HelmetSpecO_semiarid_CA.paa";
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
		//picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_HelmetSpecter_cover_autumn_F_CA.paa";
		hiddenSelectionsTextures[] =
		{
			"\A3_Atlas\Characters_F_Atlas\Headgear\Data\H_HelmetSpecter_01_CO.paa",
			"\A3_Atlas\Characters_F_Atlas\Headgear\Data\H_HelmetSpecter_01_cover_autumn_CO.paa"
		};
	};
    */
	class H_HelmetI_I_01_base_F: HelmetBase
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = private;
		model = "\A3_Atlas\Characters_F_Atlas\Headgear\H_HelmetI_I_01_F.p3d";
		hiddenSelections[] = {camo};
		descriptionShort = $STR_A3_SP_AL_II;
		class ItemInfo: ItemInfo
		{
			mass = 30;
			hiddenSelections[] = {camo};
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
	class H_HelmetI_I_01_F: H_HelmetI_I_01_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_H_HelmetI_I_01_F0;
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_HelmetI_I_01_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Headgear\Data\H_HelmetI_I_01_CO.paa"};
	};
	class H_HelmetI_I_01_cover_base_F: H_HelmetI_I_01_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		model = "\A3_Atlas\Characters_F_Atlas\Headgear\H_HelmetI_I_01_cover_F.p3d";
		hiddenSelections[] =
		{
			camo1,
			camo2
		};
		class ItemInfo: ItemInfo
		{
			mass = 40;
			hiddenSelections[] =
			{
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
	class H_HelmetI_I_01_cover_F: H_HelmetI_I_01_cover_base_F
	{
		author = $STR_A3_A_AveryTheKitty_and_Lakarak;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_H_HelmetI_I_01_cover_F0;
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_HelmetI_I_01_cover_F_CA.paa";
		hiddenSelectionsTextures[] =
		{
			"\A3_Atlas\Characters_F_Atlas\Headgear\Data\H_HelmetI_I_01_CO.paa",
			"\A3_Atlas\Characters_F_Atlas\Headgear\Data\H_HelmetI_I_01_cover_CO.paa"
		};
	};
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
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_Booniehat_whex_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Headgear\Data\booniehat_aucamo_CO.paa"};
	};
	class H_Booniehat_aucamo_hs_F: H_Booniehat_aucamo_F
	{
		author = $STR_A3_A_AveryTheKitty;
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_Booniehat_whex_hs_F_CA.paa";
		displayName = $STR_A3_A_CfgWeapons_H_Booniehat_aucamo_hs_F0;
		model = "\A3\Characters_F_EPB\Common\booniehat_hs.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Characters_F_EPB\Common\booniehat_hs.p3d";
		};
	};
	class H_Cap_aucamo: H_Cap_red
	{
	 	displayName = $STR_A3_A_CfgWeapons_H_Cap_aucamo0;
		picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_Cap_brn_SPECOPS_CA.paa";
	  	hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Headgear\Data\capb_ADF_Woodland.paa"};
	};
	class H_MilCap_aucamo: H_MilCap_ocamo
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_H_MilCap_aucamo0;
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_MilCap_sgg_CA.paa";
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
		//picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_Booniehat_autumn_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Headgear\Data\booniehat_autumn_CO.paa"};
	};
	class H_Booniehat_autumn_hs: H_Booniehat_autumn
	{
		author = $STR_A3_A_AveryTheKitty;
		//picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_Booniehat_autumn_hs_CA.paa";
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
	class H_MilCap_whex_F: H_MilCap_ocamo
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_H_MilCap_whex_F0;
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_MilCap_whex_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Headgear\Data\cappatrol_owcamo_CO.paa"};
	};
	class H_MilCap_semiarid: H_MilCap_ocamo
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_H_MilCap_semiarid0;
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_MilCap_semiarid_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Headgear\Data\cappatrol_semiarid_CO.paa"};
	};
	class H_MilCap_jungle: H_MilCap_ocamo
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_H_MilCap_jungle0;
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_MilCap_jungle_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Headgear\Data\cappatrol_jungle_CO.paa"};
	};
    /*
	class H_MilCap_autumn: H_MilCap_ocamo
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_H_MilCap_autumn0;
		//picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_MilCap_autumn_CA.paa";
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
		displayName = $STR_A3_A_CfgWeapons_H_PilotHelmetHeli_B_O0;
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
    // Deprecated classes
    #include "deprecated.hpp"
};