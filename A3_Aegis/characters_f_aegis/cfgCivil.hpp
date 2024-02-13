/* Civilians */
class C_man_1: Civilian_F
{
    headgearList[] =
    {
        H_Cap_tan,0.25,
        H_Cap_blk,0.25,
        H_Cap_blk_CMMG,0.25,
        H_Cap_brn_SERO,0.25,
        H_Cap_red,0.25,
        H_Cap_grn,0.25,
        H_Cap_blu,0.25,
        H_Cap_grn_BI,0.25,
        H_Cap_surfer,0.25,
        H_Cap_Lyfe,0.25,
        H_Cap_MaldenTours,0.25,
        H_Cap_redburger,0.25,
        H_Bandanna_khk,0.25,
        H_Bandanna_sgg,0.25,
        H_Bandanna_cbr,0.25,
        H_Bandanna_gry,0.25,
        H_Bandanna_camo,0.25,
        H_Bandanna_mcamo,0.25,
        H_Bandanna_surfer,0.25,
        H_Bandanna_surfer_blk,0.25,
        H_Bandanna_surfer_grn,0.25,
        H_Bandanna_blu,0.25,
        H_Bandanna_sand,0.25,
        H_StrawHat,0.25,
        H_StrawHat_dark,0.25,
        H_Hat_blue,0.25,
        H_Hat_brown,0.25,
        H_Hat_camo,0.25,
        H_Hat_grey,0.25,
        H_Hat_checker,0.25,
        H_Hat_tan,0.25,
        H_Watchcap_blk,0.25,
        H_Watchcap_cbr,0.25,
        H_Watchcap_camo,0.25,
        H_Watchcap_khk,0.25,
        H_Watchcap_sgg,0.25,
        H_Watchcap_red,0.25,
        H_FakeHeadgear,2,
        "",2
    };
    class Wounds
    {
        tex[] = {};
        mat[] =
        {
			"A3\Characters_F\Civil\Data\c_cloth1.rvmat",
			"A3\Characters_F\Civil\Data\c_cloth1_injury.rvmat",
			"A3\Characters_F\Civil\Data\c_cloth1_injury.rvmat",
			"A3\Characters_F\Civil\Data\c_cloth2.rvmat",
			"A3\Characters_F\Civil\Data\c_cloth2_injury.rvmat",
			"A3\Characters_F\Civil\Data\c_cloth2_injury.rvmat",
			"A3\Characters_F\Civil\Data\c_cloth3.rvmat",
			"A3\Characters_F\Civil\Data\c_cloth3_injury.rvmat",
			"A3\Characters_F\Civil\Data\c_cloth3_injury.rvmat",
			"A3\Characters_F\Civil\Data\c_cloth4.rvmat",
			"A3\Characters_F\Civil\Data\c_cloth4_injury.rvmat",
			"A3\Characters_F\Civil\Data\c_cloth4_injury.rvmat",
			"A3\Characters_F\civil\Data\c_poloshirt.rvmat",
			"A3\Characters_F\Civil\Data\c_poloshirt_injury.rvmat",
			"A3\Characters_F\Civil\Data\c_poloshirt_injury.rvmat",
			"A3\Characters_F\Common\Data\coveralls.rvmat",
			"A3\Characters_F\Common\Data\coveralls_injury.rvmat",
			"A3\Characters_F\Common\Data\coveralls_injury.rvmat",
			"A3\Characters_F\Civil\Data\hunter.rvmat",
			"A3\Characters_F\Civil\Data\hunter_injury.rvmat",
			"A3\Characters_F\Civil\Data\hunter_injury.rvmat",
			"A3\Characters_F\Civil\Data\c_poloshirtpants.rvmat",
			"A3\Characters_F\Civil\Data\c_poloshirtpants_injury.rvmat",
			"A3\Characters_F\Civil\Data\c_poloshirtpants_injury.rvmat",
			"A3\Characters_F\Civil\Data\priest.rvmat",
			"A3\Characters_F\Civil\Data\priest_injury.rvmat",
			"A3\Characters_F\Civil\Data\priest_injury.rvmat",
			INJURY_PERSONALITY_MATERIALS
        };
    };
};
class C_man_1_1_F: C_man_1
{
    model = "\A3\Characters_F\Civil\c_citizen3.p3d";
	modelSides[] = {TFriendly};
    hiddenSelections[] =
    {
        camo1,
        camo2
    };
    hiddenSelectionsTextures[] =
    {
        "\A3\Characters_F\Civil\Data\c_cloth1_CO.paa",
        "\A3\Characters_F\Civil\Data\c_cloth4_CO.paa"
    };
};
class C_man_1_2_F: C_man_1_1_F
{
    model = "\A3\Characters_F\Civil\c_citizen4.p3d";
	modelSides[] = {TFriendly};
    uniformClass = U_C_Commoner1_2;
    hiddenSelections[] =
    {
        camo1,
        camo2
    };
    hiddenSelectionsTextures[] =
    {
        "\A3\Characters_F\Civil\Data\c_cloth2_CO.paa",
        "\A3\Characters_F\Civil\Data\c_cloth4_CO.paa"
    };
};
class C_man_1_3_F: C_man_1_1_F
{
    model = "\A3\Characters_F\Civil\c_citizen5.p3d";
	modelSides[] = {TFriendly};
    uniformClass = U_C_Commoner1_3;
    hiddenSelections[] =
    {
        camo1,
        camo2
    };
    hiddenSelectionsTextures[] =
    {
        "\A3\Characters_F\Common\Data\basicbody_blue_CO.paa",
        "\A3\Characters_F\Civil\Data\c_cloth4_CO.paa"
    };
};
class C_man_p_fugitive_F: C_man_1
{
	modelSides[] = {TFriendly};
    hiddenSelections[] = {camo};
    hiddenSelectionsTextures[] = {"\A3\Characters_F\Civil\Data\c_cloth1_CO.paa"};
	linkedItems[] = {};
	respawnLinkedItems[] = {};
};
class C_man_p_beggar_F: C_man_p_fugitive_F
{
	model = "\A3\Characters_F\Civil\I_L_Looter_01_tshirt_F.p3d";
	modelSides[] = {TFriendly};
    hiddenSelections[] =
    {
        camo1,
        camo2
    };
    hiddenSelectionsTextures[] =
    {
        "\A3\Characters_F\Civil\Data\c_cloth1_v2_CO.paa",
        "\A3\Characters_F_Gamma\Guerrilla\Data\IG_Guerrilla3_1_CO.paa"
    };
};
class C_man_w_worker_F: C_man_1
{
	modelSides[] = {TFriendly};
};
class C_scientist_F: C_man_w_worker_F
{
	modelSides[] = {TFriendly};
};
class C_man_hunter_1_F: C_man_1
{
    model = "\A3\Characters_F_Gamma\Guerrilla\IG_Guerrilla3_1.p3d";
	modelSides[] = {TFriendly};
	displayName = $STR_A3_A_CfgVehicles_C_man_hunter_1_F0;
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3\Characters_F\Civil\Data\hunter_bushman_CO.paa"};
    hideProxySelections[] = {ghillie_hide};
    headgearList[] =
    {
        H_Booniehat_khk,1,
        H_Booniehat_oli,1,
        H_Booniehat_tan,1,
        H_Booniehat_mgrn,1
    };
	linkedItems[] =
    {
        H_Booniehat_mgrn,
        ItemSmartPhone,
        ItemMap,
        ItemCompass,
        ItemWatch
    };
	respawnLinkedItems[] =
    {
        H_Booniehat_mgrn,
        ItemSmartPhone,
        ItemMap,
        ItemCompass,
        ItemWatch
    };
};
class C_man_p_shorts_1_F: C_man_1
{
    scope = protected;
    scopeCurator = private;
};
class C_man_pilot_F: C_man_1
{
	modelSides[] = {TFriendly};
    headgearList[] =
    {
        H_HeadSet_black_F,1,
        H_HeadSet_orange_F,1,
        H_HeadSet_red_F,1,
        H_HeadSet_white_F,1,
        H_HeadSet_yellow_F,1
    };
	linkedItems[] =
    {
        H_HeadSet_black_F,
        ItemSmartPhone,
        ItemWatch,
        ItemRadio
    };
	respawnLinkedItems[] =
    {
        H_HeadSet_black_F,
        ItemSmartPhone,
        ItemWatch,
        ItemRadio
    };
};
class C_journalist_F: C_man_1
{
	modelSides[] = {TFriendly};
	linkedItems[] =
    {
        H_Cap_press,
        V_Press_F,
        ItemSmartPhone,
        ItemWatch
    };
	respawnLinkedItems[] =
    {
        H_Cap_press,
        V_Press_F,
        ItemSmartPhone,
        ItemWatch
    };
};
class C_Soldier_VR_F: C_man_1
{
	modelSides[] = {TFriendly};
};
class C_Driver_1_F: C_man_1
{
	modelSides[] = {TFriendly};
	linkedItems[] =
    {
        H_RacingHelmet_1_F,
        ItemSmartPhone,
        ItemWatch
    };
	respawnLinkedItems[] =
    {
        H_RacingHelmet_1_F,
        ItemSmartPhone,
        ItemWatch
    };
};
class C_Driver_2_F: C_Driver_1_F
{
	linkedItems[] =
    {
        H_RacingHelmet_2_F,
        ItemSmartPhone,
        ItemWatch
    };
	respawnLinkedItems[] =
    {
        H_RacingHelmet_2_F,
        ItemSmartPhone,
        ItemWatch
    };
};
class C_Driver_3_F: C_Driver_1_F
{
	linkedItems[] =
    {
        H_RacingHelmet_3_F,
        ItemSmartPhone,
        ItemWatch
    };
	respawnLinkedItems[] =
    {
        H_RacingHelmet_3_F,
        ItemSmartPhone,
        ItemWatch
    };
};
class C_Driver_4_F: C_Driver_1_F
{
	linkedItems[] =
    {
        H_RacingHelmet_4_F,
        ItemSmartPhone,
        ItemWatch
    };
	respawnLinkedItems[] =
    {
        H_RacingHelmet_4_F,
        ItemSmartPhone,
        ItemWatch
    };
};
class C_Marshal_F: B_RangeMaster_F
{
	modelSides[] = {TFriendly};
	linkedItems[] =
    {
        H_Cap_marshal,
        ItemSmartPhone,
        ItemWatch,
        ItemRadio
    };
	respawnLinkedItems[] =
    {
        H_Cap_marshal,
        ItemSmartPhone,
        ItemWatch,
        ItemRadio
    };
};
class C_man_sport_1_F: C_man_1
{
	linkedItems[] = {};
	respawnLinkedItems[] = {};
};
class C_Man_casual_1_F: C_man_1
{
	linkedItems[] =
    {
        ItemSmartPhone,
        ItemWatch
    };
	respawnLinkedItems[] =
    {
        ItemSmartPhone,
        ItemWatch
    };
};
class C_Man_ConstructionWorker_01_Red_F: C_Driver_1_F
{
	linkedItems[] =
    {
        H_Construction_earprot_white_F,
        ItemSmartPhone,
        ItemWatch,
        ItemRadio
    };
	respawnLinkedItems[] =
    {
        H_Construction_earprot_white_F,
        ItemSmartPhone,
        ItemWatch,
        ItemRadio
    };
};
class C_Man_ConstructionWorker_01_Vrana_F: C_Man_ConstructionWorker_01_Red_F
{
	linkedItems[] =
    {
        H_Construction_earprot_vrana_F,
        ItemSmartPhone,
        ItemWatch,
        ItemRadio
    };
	respawnLinkedItems[] =
    {
        H_Construction_earprot_vrana_F,
        ItemSmartPhone,
        ItemWatch,
        ItemRadio
    };
};
class C_Man_ConstructionWorker_01_Black_F: C_Man_ConstructionWorker_01_Red_F
{
	linkedItems[] =
    {
        H_Construction_earprot_red_F,
        ItemSmartPhone,
        ItemWatch,
        ItemRadio
    };
	respawnLinkedItems[] =
    {
        H_Construction_earprot_red_F,
        ItemSmartPhone,
        ItemWatch,
        ItemRadio
    };
};
class C_Man_ConstructionWorker_01_Blue_F: C_Man_ConstructionWorker_01_Red_F
{
	linkedItems[] =
    {
        H_Construction_earprot_yellow_F,
        ItemSmartPhone,
        ItemWatch,
        ItemRadio
    };
	respawnLinkedItems[] =
    {
        H_Construction_earprot_yellow_F,
        ItemSmartPhone,
        ItemWatch,
        ItemRadio
    };
};
class C_Paramedic_01_base_F: Civilian_F
{
	linkedItems[] = {DefaultManAidWorkerLinkedItems};
	respawnLinkedItems[] = {DefaultManAidWorkerLinkedItems};
};
class C_Journalist_01_War_F: C_journalist_F
{
	linkedItems[] =
    {
        H_PASGT_basic_blue_press_F,
        V_Press_F,
        ItemSmartPhone,
        ItemMap,
        ItemWatch,
        ItemRadio
    };
	respawnLinkedItems[] =
    {
        H_PASGT_basic_blue_press_F,
        V_Press_F,
        ItemSmartPhone,
        ItemMap,
        ItemWatch,
        ItemRadio
    };
};
class C_Man_UtilityWorker_01_F: Civilian_F
{
	linkedItems[] =
    {
        V_Safety_yellow_F,
        ItemSmartPhone,
        ItemWatch,
        ItemRadio
    };
	respawnLinkedItems[] =
    {
        V_Safety_yellow_F,
        ItemSmartPhone,
        ItemWatch,
        ItemRadio
    };
	items[] = {FirstAidKit};
	respawnItems[] = {FirstAidKit};
};
class C_Man_UAV_06_F: Civilian_F
{
	linkedItems[] = {C_UavTerminal};
	respawnLinkedItems[] = {C_UavTerminal};
};
class C_Man_UAV_06_medical_F: Civilian_F
{
	linkedItems[] = {C_UavTerminal};
	respawnLinkedItems[] = {C_UavTerminal};
};
class C_Man_Fisherman_01_F: Civilian_F
{
	linkedItems[] =
    {
        V_Pocketed_coyote_F,
        H_Booniehat_tan,
        ItemSmartPhone
    };
	respawnLinkedItems[] =
    {
        V_Pocketed_coyote_F,
        H_Booniehat_tan,
        ItemSmartPhone
    };
};
class C_Man_Messenger_01_F: Civilian_F
{
	linkedItems[] =
    {
        V_LegStrapBag_coyote_F,
        H_Cap_tan,
        ItemSmartPhone
    };
	respawnLinkedItems[] =
    {
        V_LegStrapBag_coyote_F,
        H_Cap_tan,
        ItemSmartPhone
    };
};
class C_Story_Mechanic_01_F: Civilian_F
{
	modelSides[] = {TFriendly};
	linkedItems[] =
    {
        H_Cap_red,
        ItemSmartPhone
    };
	respawnLinkedItems[] =
    {
        H_Cap_red,
        ItemSmartPhone
    };
};
class C_man_1_1_F_afro: C_man_1_1_F
{
    author = $STR_A3_A_AveryTheKitty;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\C_man_1_1_F_afro.jpg";
    vehicleClass = Afroamerican;
    editorSubcategory = EdSubcat_Personnel_African;
    identityTypes[] =
    {
        Head_African,
        G_CIVIL_male
    };
	genericNames = AfroMen;
};
class C_man_1_1_F_euro: C_man_1_1_F
{
    author = $STR_A3_A_AveryTheKitty;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\C_man_1_1_F_euro.jpg";
    vehicleClass = European;
    editorSubcategory = EdSubcat_Personnel_European;
    identityTypes[] =
    {
        Head_Euro,
        G_CIVIL_male
    };
	genericNames = NATOMen;
};
class C_man_1_1_F_asia: C_man_1_1_F
{
    author = $STR_A3_A_AveryTheKitty;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\C_man_1_1_F_asia.jpg";
    vehicleClass = Asian;
    editorSubcategory = EdSubcat_Personnel_Asian;
    identityTypes[] =
    {
        Head_Asian,
        G_CIVIL_male
    };
	genericNames = AsianMen;
};
class C_man_1_2_F_afro: C_man_1_2_F
{
    author = $STR_A3_A_AveryTheKitty;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\C_man_1_2_F_afro.jpg";
    vehicleClass = Afroamerican;
    editorSubcategory = EdSubcat_Personnel_African;
    identityTypes[] =
    {
        Head_African,
        G_CIVIL_male
    };
	genericNames = AfroMen;
};
class C_man_1_2_F_euro: C_man_1_2_F
{
    author = $STR_A3_A_AveryTheKitty;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\C_man_1_2_F_euro.jpg";
    vehicleClass = European;
    editorSubcategory = EdSubcat_Personnel_European;
    identityTypes[] =
    {
        Head_Euro,
        G_CIVIL_male
    };
	genericNames = NATOMen;
};
class C_man_1_2_F_asia: C_man_1_2_F
{
    author = $STR_A3_A_AveryTheKitty;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\C_man_1_2_F_asia.jpg";
    vehicleClass = Asian;
    editorSubcategory = EdSubcat_Personnel_Asian;
    identityTypes[] =
    {
        Head_Asian,
        G_CIVIL_male
    };
	genericNames = AsianMen;
};
class C_man_1_3_F_afro: C_man_1_3_F
{
    author = $STR_A3_A_AveryTheKitty;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\C_man_1_3_F_afro.jpg";
    vehicleClass = Afroamerican;
    editorSubcategory = EdSubcat_Personnel_African;
    identityTypes[] =
    {
        Head_African,
        G_CIVIL_male
    };
	genericNames = AfroMen;
};
class C_man_1_3_F_euro: C_man_1_3_F
{
    author = $STR_A3_A_AveryTheKitty;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\C_man_1_3_F_euro.jpg";
    vehicleClass = European;
    editorSubcategory = EdSubcat_Personnel_European;
    identityTypes[] =
    {
        Head_Euro,
        G_CIVIL_male
    };
	genericNames = NATOMen;
};
class C_man_1_3_F_asia: C_man_1_3_F
{
    author = $STR_A3_A_AveryTheKitty;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\C_man_1_3_F_asia.jpg";
    vehicleClass = Asian;
    editorSubcategory = EdSubcat_Personnel_Asian;
    identityTypes[] =
    {
        Head_Asian,
        G_CIVIL_male
    };
	genericNames = AsianMen;
};
class C_man_priest_F: C_man_1
{
    author = $STR_A3_A_AveryTheKitty;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\C_man_priest_F.jpg";
    model = "\A3_Aegis\Characters_F_Aegis\Uniforms\c_priest.p3d";
	modelSides[] = {TFriendly};
    uniformClass = U_C_PriestBody;
    displayName = $STR_A3_C_man_priest_F0;
	class EventHandlers{};
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3\Characters_F\Civil\Data\priest_CO.paa"};
};
class C_Man_casual_7_F: C_Man_casual_1_F
{
  author = $STR_A3_A_AveryTheKitty;
  editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\C_Man_casual_7_F.jpg";
  displayName = "Civilian (Casual) 4";
  uniformClass = U_C_Man_casual_7_F;
  hiddenSelectionsTextures[] = {"\A3\Characters_F\Civil\Data\IG_poloshirt_1_CO.paa"};
};
class C_Man_casual_7_F_afro: C_Man_casual_7_F
{
    author = $STR_A3_A_AveryTheKitty;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\C_Man_casual_7_F.jpg";
    vehicleClass = Afroamerican;
    editorSubcategory = EdSubcat_Personnel_African;
    identityTypes[] =
    {
        Head_African,
        G_CIVIL_male
    };
	genericNames = AfroMen;
};
class C_Man_casual_7_F_euro: C_Man_casual_7_F
{
    author = $STR_A3_A_AveryTheKitty;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\C_Man_casual_7_F.jpg";
    vehicleClass = European;
    editorSubcategory = EdSubcat_Personnel_European;
    identityTypes[] =
    {
        Head_Euro,
        G_CIVIL_male
    };
	genericNames = NATOMen;
};
class C_Man_casual_7_F_asia: C_Man_casual_7_F
{
    author = $STR_A3_A_AveryTheKitty;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\C_Man_casual_7_F.jpg";
    vehicleClass = Asian;
    editorSubcategory = EdSubcat_Personnel_Asian;
    identityTypes[] =
    {
        Head_Asian,
        G_CIVIL_male
    };
	genericNames = AsianMen;
};
class C_Man_casual_7_F_tanoan: C_Man_casual_7_F
{
    author = $STR_A3_A_AveryTheKitty;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\C_Man_casual_7_F.jpg";
    vehicleClass = MenTanoan;
    editorSubcategory = EdSubcat_Personnel_Tanoan;
     identityTypes[] =
    {
        LanguageFRE_F,
        Head_Tanoan,
        G_CIV_exp
    };
	genericNames = TanoanMen;
};
class C_Man_casual_8_F: C_Man_casual_1_F
{
  author = $STR_A3_A_AveryTheKitty;
  editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\C_Man_casual_8_F.jpg";
  displayName = "Civilian (Casual) 5";
  uniformClass = U_C_Man_casual_8_F;
  hiddenSelectionsTextures[] = {"\A3\Characters_F\Civil\Data\IG_poloshirt_2_CO.paa"};
};
class C_Man_casual_8_F_afro: C_Man_casual_8_F
{
    author = $STR_A3_A_AveryTheKitty;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\C_Man_casual_8_F.jpg";
    vehicleClass = Afroamerican;
    editorSubcategory = EdSubcat_Personnel_African;
    identityTypes[] =
    {
        Head_African,
        G_CIVIL_male
    };
	genericNames = AfroMen;
};
class C_Man_casual_8_F_euro: C_Man_casual_8_F
{
    author = $STR_A3_A_AveryTheKitty;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\C_Man_casual_8_F.jpg";
    vehicleClass = European;
    editorSubcategory = EdSubcat_Personnel_European;
    identityTypes[] =
    {
        Head_Euro,
        G_CIVIL_male
    };
	genericNames = NATOMen;
};
class C_Man_casual_8_F_asia: C_Man_casual_8_F
{
    author = $STR_A3_A_AveryTheKitty;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\C_Man_casual_8_F.jpg";
    vehicleClass = Asian;
    editorSubcategory = EdSubcat_Personnel_Asian;
    identityTypes[] =
    {
        Head_Asian,
        G_CIVIL_male
    };
	genericNames = AsianMen;
};
class C_Man_casual_8_F_tanoan: C_Man_casual_8_F
{
    author = $STR_A3_A_AveryTheKitty;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\C_Man_casual_8_F.jpg";
    vehicleClass = MenTanoan;
    editorSubcategory = EdSubcat_Personnel_Tanoan;
     identityTypes[] =
    {
        LanguageFRE_F,
        Head_Tanoan,
        G_CIV_exp
    };
	genericNames = TanoanMen;
};
class C_Man_casual_9_F: C_Man_casual_1_F
{
  author = $STR_A3_A_AveryTheKitty;
  editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\C_Man_casual_9_F.jpg";
  displayName = "Civilian (Casual) 6";
  uniformClass = U_C_Man_casual_9_F;
  hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\U_C_Man_casual_9_F_CO.paa"};
};
class C_Man_casual_9_F_afro: C_Man_casual_9_F
{
    author = $STR_A3_A_AveryTheKitty;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\C_Man_casual_9_F.jpg";
    vehicleClass = Afroamerican;
    editorSubcategory = EdSubcat_Personnel_African;
    identityTypes[] =
    {
        Head_African,
        G_CIVIL_male
    };
	genericNames = AfroMen;
};
class C_Man_casual_9_F_euro: C_Man_casual_9_F
{
    author = $STR_A3_A_AveryTheKitty;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\C_Man_casual_9_F.jpg";
    vehicleClass = European;
    editorSubcategory = EdSubcat_Personnel_European;
    identityTypes[] =
    {
        Head_Euro,
        G_CIVIL_male
    };
	genericNames = NATOMen;
};
class C_Man_casual_9_F_asia: C_Man_casual_9_F
{
    author = $STR_A3_A_AveryTheKitty;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\C_Man_casual_9_F.jpg";
    vehicleClass = Asian;
    editorSubcategory = EdSubcat_Personnel_Asian;
    identityTypes[] =
    {
        Head_Asian,
        G_CIVIL_male
    };
	genericNames = AsianMen;
};
class C_Man_casual_9_F_tanoan: C_Man_casual_9_F
{
    author = $STR_A3_A_AveryTheKitty;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\C_Man_casual_9_F.jpg";
    vehicleClass = MenTanoan;
    editorSubcategory = EdSubcat_Personnel_Tanoan;
     identityTypes[] =
    {
        LanguageFRE_F,
        Head_Tanoan,
        G_CIV_exp
    };
	genericNames = TanoanMen;
};

/* Civil Cargo Pilots*/
class Aegis_C_Man_CargoPilot_F: C_man_pilot_F
{
    author = $STR_A3_A_Ravenholme;
    displayName = $STR_A3_A_CfgVehicles_C_Man_CargoPilot_F0;
    //editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_C_Man_CargoPilot_F.jpg";
    uniformClass = U_C_Uniform_Formal_01_white_F;
    backpack = ;
    headgearList[] =
    {
        H_HeadSet_black_F,1
    };
	linkedItems[] =
    {
        H_HeadSet_black_F,
        ItemSmartPhone,
        ItemWatch,
        ItemRadio
    };
	respawnLinkedItems[] =
    {
        H_HeadSet_black_F,
        ItemSmartPhone,
        ItemWatch,
        ItemRadio
    };
};
class Aegis_C_Man_CargoPilot_afro_F: Aegis_C_Man_CargoPilot_F
{
    author = $STR_A3_A_Ravenholme;
     //editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_C_Man_CargoPilot_F.jpg";
    vehicleClass = Afroamerican;
    editorSubcategory = EdSubcat_Personnel_African;
    identityTypes[] =
    {
        Head_African,
        G_CIVIL_male
    };
	genericNames = AfroMen;
};
class Aegis_C_Man_CargoPilot_euro_F: Aegis_C_Man_CargoPilot_F
{
    author = $STR_A3_A_Ravenholme;
     //editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_C_Man_CargoPilot_F.jpg";
    vehicleClass = European;
    editorSubcategory = EdSubcat_Personnel_European;
    identityTypes[] =
    {
        Head_Euro,
        G_CIVIL_male
    };
	genericNames = NATOMen;
};
class Aegis_C_Man_CargoPilot_asia_F: Aegis_C_Man_CargoPilot_F
{
    author = $STR_A3_A_Ravenholme;
     //editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_C_Man_CargoPilot_F.jpg";
    vehicleClass = Asian;
    editorSubcategory = EdSubcat_Personnel_Asian;
    identityTypes[] =
    {
        Head_Asian,
        G_CIVIL_male
    };
	genericNames = AsianMen;
};
class Aegis_C_Man_CargoPilot_tna_F: Aegis_C_Man_CargoPilot_F
{
    author = $STR_A3_A_Ravenholme;
     //editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_C_Man_CargoPilot_F.jpg";
    vehicleClass = MenTanoan;
    editorSubcategory = EdSubcat_Personnel_Tanoan;
     identityTypes[] =
    {
        LanguageFRE_F,
        Head_Tanoan,
        G_CIV_exp
    };
	genericNames = TanoanMen;
};