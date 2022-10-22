#define HEADGEAR_HOLDER(a,b,c) \
	class Headgear_##a##: Headgear_Base_F \
	{ \
		scope = public; \
		scopeCurator = public; \
		displayName = ##b##; \
		author = $STR_A3_A_AveryTheKitty; \
		editorCategory = EdCat_Equipment; \
		editorSubcategory = ##c##; \
		vehicleClass = ItemsHeadgear; \
		model = "\A3\Weapons_F\DummyCap.p3d"; \
		class TransportItems \
		{ \
			item_xx(##a##,1); \
		}; \
	};

class CfgVehicles
{
	class Headgear_Base_F;
    class Headgear_H_HelmetCrew_I;
    class Headgear_H_PilotHelmetHeli_O;
    class Headgear_H_PilotHelmetHeli_B;
    class Headgear_H_CrewHelmetHeli_O;
    class Headgear_H_CrewHelmetHeli_B;
	// Arma 3 Atlas
	HEADGEAR_HOLDER(H_HelmetB_green,$STR_A3_A_CfgWeapons_H_HelmetB_green0,EdSubcat_Helmets)
	HEADGEAR_HOLDER(H_HelmetSpecB_green,$STR_A3_A_CfgWeapons_H_HelmetSpecB_green0,EdSubcat_Helmets)
	HEADGEAR_HOLDER(H_HelmetB_light_green,$STR_A3_A_CfgWeapons_H_HelmetB_light_green0,EdSubcat_Helmets)
	HEADGEAR_HOLDER(H_HelmetSpecB_light_green,$STR_A3_A_CfgWeapons_H_HelmetSpecB_light_green0,EdSubcat_Helmets)
	HEADGEAR_HOLDER(H_O_Helmet_canvas_owcamo,$STR_A3_A_CfgWeapons_H_O_Helmet_canvas_owcamo0,EdSubcat_Helmets)
	HEADGEAR_HOLDER(H_O_Helmet_canvas_semiarid,$STR_A3_A_CfgWeapons_H_O_Helmet_canvas_semiarid0,EdSubcat_Helmets)
    /*
	HEADGEAR_HOLDER(H_HelmetO_semiarid,$STR_A3_A_CfgWeapons_H_HelmetO_semiarid0,EdSubcat_Helmets)
	HEADGEAR_HOLDER(H_HelmetLeaderO_semiarid,$STR_A3_A_CfgWeapons_H_HelmetLeaderO_semiarid0,EdSubcat_Helmets)
	HEADGEAR_HOLDER(H_HelmetSpecO_semiarid,$STR_A3_A_CfgWeapons_H_HelmetSpecO_semiarid0,EdSubcat_Helmets)
    */
	HEADGEAR_HOLDER(H_HelmetO_whex_F,$STR_A3_A_CfgWeapons_H_HelmetO_whex_F0,EdSubcat_Helmets)
	HEADGEAR_HOLDER(H_HelmetLeaderO_whex_F,$STR_A3_A_CfgWeapons_H_HelmetLeaderO_whex_F0,EdSubcat_Helmets)
	HEADGEAR_HOLDER(H_HelmetSpecO_whex_F,$STR_A3_A_CfgWeapons_H_HelmetSpecO_whex_F0,EdSubcat_Helmets)
	HEADGEAR_HOLDER(H_HelmetO_ViperSP_whex_F,$STR_A3_A_CfgWeapons_H_HelmetO_ViperSP_whex_F0,EdSubcat_Helmets)
    /*
	HEADGEAR_HOLDER(H_HelmetHBK_aucamo_F,$STR_A3_A_CfgWeapons_H_HelmetHBK_aucamo_F0,EdSubcat_Helmets)
	HEADGEAR_HOLDER(H_HelmetHBK_aucamo_headset_F,$STR_A3_A_CfgWeapons_H_HelmetHBK_aucamo_headset_F0,EdSubcat_Helmets)
	HEADGEAR_HOLDER(H_HelmetHBK_aucamo_ear_F,$STR_A3_A_CfgWeapons_H_HelmetHBK_aucamo_ear_F0,EdSubcat_Helmets)
	HEADGEAR_HOLDER(H_HelmetHBK_aucamo_chops_F,$STR_A3_A_CfgWeapons_H_HelmetHBK_aucamo_chops_F0,EdSubcat_Helmets)
	*/
    /*
	HEADGEAR_HOLDER(H_HelmetSpecter_cover_autumn_F,$STR_A3_A_CfgWeapons_H_HelmetSpecter_cover_autumn_F0,EdSubcat_Helmets)
    */
	HEADGEAR_HOLDER(H_HelmetI_I_01_F,$STR_A3_A_CfgWeapons_H_HelmetI_I_01_F0,EdSubcat_Helmets)
	HEADGEAR_HOLDER(H_HelmetI_I_01_cover_F,$STR_A3_A_CfgWeapons_H_HelmetI_I_01_cover_F0,EdSubcat_Helmets)
	HEADGEAR_HOLDER(H_Booniehat_whex_F,$STR_A3_A_CfgWeapons_H_Booniehat_whex_F0,EdSubcat_Hats)
	HEADGEAR_HOLDER(H_Booniehat_whex_hs_F,$STR_A3_A_CfgWeapons_H_Booniehat_whex_hs_F0,EdSubcat_Hats)
	HEADGEAR_HOLDER(H_Booniehat_flecktarn,$STR_A3_A_CfgWeapons_H_Booniehat_flecktarn0,EdSubcat_Hats)
	HEADGEAR_HOLDER(H_Booniehat_flecktarn_hs,$STR_A3_A_CfgWeapons_H_Booniehat_flecktarn_hs0,EdSubcat_Hats)
	HEADGEAR_HOLDER(H_Booniehat_multitarn,$STR_A3_A_CfgWeapons_H_Booniehat_multitarn0,EdSubcat_Hats)
	HEADGEAR_HOLDER(H_Booniehat_multitarn_hs,$STR_A3_A_CfgWeapons_H_Booniehat_multitarn_hs0,EdSubcat_Hats)
	HEADGEAR_HOLDER(H_Booniehat_semiarid,$STR_A3_A_CfgWeapons_H_Booniehat_semiarid0,EdSubcat_Hats)
	HEADGEAR_HOLDER(H_Booniehat_semiarid_hs,$STR_A3_A_CfgWeapons_H_Booniehat_semiarid_hs0,EdSubcat_Hats)
	HEADGEAR_HOLDER(H_Booniehat_jungle,$STR_A3_A_CfgWeapons_H_Booniehat_jungle0,EdSubcat_Hats)
	HEADGEAR_HOLDER(H_Booniehat_jungle_hs,$STR_A3_A_CfgWeapons_H_Booniehat_jungle_hs0,EdSubcat_Hats)
    /*
	HEADGEAR_HOLDER(H_Booniehat_autumn,$STR_A3_A_CfgWeapons_H_Booniehat_autumn0,EdSubcat_Hats)
	HEADGEAR_HOLDER(H_Booniehat_autumn_hs,$STR_A3_A_CfgWeapons_H_Booniehat_autumn_hs0,EdSubcat_Hats)
    */
	HEADGEAR_HOLDER(H_MilCap_sgg,$STR_A3_A_CfgWeapons_H_MilCap_sgg0,EdSubcat_Hats)
	HEADGEAR_HOLDER(H_MilCap_whex_F,$STR_A3_A_CfgWeapons_H_MilCap_whex_F0,EdSubcat_Hats)
	HEADGEAR_HOLDER(H_MilCap_semiarid,$STR_A3_A_CfgWeapons_H_MilCap_semiarid0,EdSubcat_Hats)
	HEADGEAR_HOLDER(H_MilCap_jungle,$STR_A3_A_CfgWeapons_H_MilCap_jungle0,EdSubcat_Hats)
    /*
	HEADGEAR_HOLDER(H_MilCap_autumn,$STR_A3_A_CfgWeapons_H_MilCap_autumn0,EdSubcat_Hats)
    */
	HEADGEAR_HOLDER(H_HelmetCrew_I_I,"Crew Helmet (Sand)",EdSubcat_Helmets)
	HEADGEAR_HOLDER(H_PilotHelmetFighter_B_A,"Pilot Helmet [ADF]";,EdSubcat_Helmets)
	HEADGEAR_HOLDER(H_PilotHelmetFighter_I_I,$STR_A3_A_CfgWeapons_H_PilotHelmetFighter_I_I0,EdSubcat_Helmets)
	HEADGEAR_HOLDER(H_PilotHelmetHeli_B_A,"Heli Pilot Helmet [ADF]";,EdSubcat_Helmets)
	HEADGEAR_HOLDER(H_CrewHelmetHeli_B_A,"Heli Crew Helmet [ADF]";,EdSubcat_Helmets)
	HEADGEAR_HOLDER(H_MK7_Marar_F,$STR_A3_A_CfgWeaponsH_MK7_Marar_F0;,EdSubcat_Helmets)
	HEADGEAR_HOLDER(H_Hat_Pakol_brn_F,"Traditional Hat (Brown)",EdSubcat_Hats)
	HEADGEAR_HOLDER(H_Hat_Pakol_gry_F,"Traditional Hat (Grey)",EdSubcat_Hats)
	HEADGEAR_HOLDER(H_Hat_Pakol_tan_F,"Traditional Hat (Tan)",EdSubcat_Hats)
    // Deprecated classes
    DEPRECATED_CLASS(Headgear_H_HelmetCrew_B_H,Headgear_H_HelmetCrew_I);
    DEPRECATED_CLASS(Headgear_H_PilotHelmetHeli_B_H,Headgear_H_PilotHelmetHeli_O);
    DEPRECATED_CLASS(Headgear_H_PilotHelmetHeli_I_I,Headgear_H_PilotHelmetHeli_B);
    DEPRECATED_CLASS(Headgear_H_CrewHelmetHeli_B_H,Headgear_H_CrewHelmetHeli_O);
    DEPRECATED_CLASS(Headgear_H_CrewHelmetHeli_I_I,Headgear_H_CrewHelmetHeli_B);
};