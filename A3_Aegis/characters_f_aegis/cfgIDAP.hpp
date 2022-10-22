/* IDAP */
class C_IDAP_Man_Base_F: Civilian_F
{
	modelSides[] = {TFriendly};
};
class C_IDAP_Man_AidWorker_02_F;
class C_IDAP_Man_AidWorker_03_F;
class C_IDAP_Man_AidWorker_04_F;
class C_IDAP_Man_AidWorker_07_F: C_IDAP_Man_AidWorker_03_F
{
	linkedItems[] =
    {
        V_Plain_medical_F,
        H_Cap_White_IDAP_F,
        DefaultManAidWorkerLinkedItems
    };
	respawnLinkedItems[] =
    {
        V_Plain_medical_F,
        H_Cap_White_IDAP_F,
        DefaultManAidWorkerLinkedItems
    };
};
class C_IDAP_Man_AidWorker_08_F: C_IDAP_Man_AidWorker_04_F
{
	linkedItems[] =
    {
        V_Pocketed_black_F,
        H_Hat_Safari_sand_F,
        DefaultManAidWorkerLinkedItems
    };
	respawnLinkedItems[] =
    {
        V_Pocketed_black_F,
        H_Hat_Safari_sand_F,
        DefaultManAidWorkerLinkedItems
    };
};
class C_IDAP_Man_AidWorker_09_F: C_IDAP_Man_AidWorker_02_F
{
	linkedItems[] =
    {
        V_LegStrapBag_black_F,
        H_PASGT_basic_white_F,
        DefaultManAidWorkerLinkedItems
    };
	respawnLinkedItems[] =
    {
        V_LegStrapBag_black_F,
        H_PASGT_basic_white_F,
        DefaultManAidWorkerLinkedItems
    };
};
class C_IDAP_Pilot_01_F: C_IDAP_Man_Base_F
{
	linkedItems[] =
    {
        H_HeadSet_orange_F,
        DefaultManAidWorkerLinkedItems
    };
	respawnLinkedItems[] =
    {
        H_HeadSet_orange_F,
        DefaultManAidWorkerLinkedItems
    };
};
class C_IDAP_Man_EOD_01_F: C_IDAP_Man_Base_F
{
	linkedItems[] =
    {
        V_EOD_IDAP_blue_F,
        H_PASGT_basic_white_F,
        G_EyeProtectors_F,
        DefaultManAidWorkerLinkedItems
    };
	respawnLinkedItems[] =
    {
        V_EOD_IDAP_blue_F,
        H_PASGT_basic_white_F,
        G_EyeProtectors_F,
        DefaultManAidWorkerLinkedItems
    };
};
class C_IDAP_Man_UAV_01_F: C_IDAP_Man_Base_F
{
	linkedItems[] =
    {
        C_UavTerminal,
        ItemMap,
        ItemWatch,
        ItemRadio
    };
	respawnLinkedItems[] =
    {
        C_UavTerminal,
        ItemMap,
        ItemWatch,
        ItemRadio
    };
};
class C_IDAP_Man_UAV_06_F: C_IDAP_Man_Base_F
{
	linkedItems[] =
    {
        C_UavTerminal,
        ItemMap,
        ItemWatch,
        ItemRadio
    };
	respawnLinkedItems[] =
    {
        C_UavTerminal,
        ItemMap,
        ItemWatch,
        ItemRadio
    };
};
class C_IDAP_Man_UAV_06_medical_F: C_IDAP_Man_Base_F
{
	linkedItems[] =
    {
        C_UavTerminal,
        ItemMap,
        ItemWatch,
        ItemRadio
    };
	respawnLinkedItems[] =
    {
        C_UavTerminal,
        ItemMap,
        ItemWatch,
        ItemRadio
    };
};
class C_IDAP_Man_UAV_06_antimine_F: C_IDAP_Man_Base_F
{
	identityTypes[] =
    {
        LanguageENGFRE_F,
        LanguageENGB_F,
        LanguageENG_F,
        Head_Euro,
        Head_NATO
    };
	linkedItems[] =
    {
        H_PASGT_basic_white_F,
        G_EyeProtectors_F,
        C_UavTerminal,
        ItemMap,
        ItemWatch,
        ItemRadio
    };
	respawnLinkedItems[] =
    {
        H_PASGT_basic_white_F,
        G_EyeProtectors_F,
        C_UavTerminal,
        ItemMap,
        ItemWatch,
        ItemRadio
    };
};
class C_IDAP_Man_UGV_02_Demining_F: C_IDAP_Man_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\C_IDAP_Man_UGV_02_Demining_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_A_CfgVehicles_B_ION_soldier_UGV_02_Demining_F0;
	identityTypes[] =
    {
        LanguageENGFRE_F,
        LanguageENGB_F,
        LanguageENG_F,
        Head_Euro,
        Head_NATO
    };
	uniformClass = U_C_IDAP_Man_Tee_F;
	role = SpecialOperative;
	headgearList[] = {};
	linkedItems[] =
    {
        V_EOD_IDAP_blue_F,
        H_PASGT_basic_white_F,
        G_EyeProtectors_F,
        C_UavTerminal,
        ItemMap,
        ItemWatch,
        ItemRadio
    };
	respawnlinkedItems[] =
    {
        V_EOD_IDAP_blue_F,
        H_PASGT_basic_white_F,
        G_EyeProtectors_F,
        C_UavTerminal,
        ItemMap,
        ItemWatch,
        ItemRadio
    };
	backpack = C_IDAP_UGV_02_Demining_backpack_F;
};