/* Base Classes */
class C_Man_Firefighter_RF;
class C_Pilot_RF;
class C_Pilot_Rescue_RF;

/* Livonia */
class Aegis_C_Man_Firefighter_RF_Enoch: C_Man_Firefighter_RF
{
    author = $STR_A3_A_Ravenholme;
    editorSubcategory = EdSubcat_Personnel;
    faction = Aegis_CIV_LIV_F;
    identityTypes[] = 
    {
        Head_Euro,
        Head_Enoch,
        G_CIVIL_male,
        LanguagePOL_F
    };
    genericNames = EnochMen;
};
class Aegis_C_Pilot_RF_Enoch: C_Pilot_RF
{
    author = $STR_A3_A_Ravenholme;
    editorSubcategory = EdSubcat_Personnel;
    faction = Aegis_CIV_LIV_F;
    identityTypes[] = 
    {
        Head_Euro,
        Head_Enoch,
        G_CIVIL_male,
        LanguagePOL_F
    };
    genericNames = EnochMen;
};
class Aegis_C_Pilot_Rescue_RF_Enoch: C_Pilot_Rescue_RF
{
    author = $STR_A3_A_Ravenholme;
    editorSubcategory = EdSubcat_Personnel;
    faction = Aegis_CIV_LIV_F;
    identityTypes[] = 
    {
        Head_Euro,
        Head_Enoch,
        G_CIVIL_male,
        LanguagePOL_F
    };
    genericNames = EnochMen;
};

/* Tanoans */
class Aegis_C_Man_Firefighter_RF_tanoan: C_Man_Firefighter_RF
{
    author = $STR_A3_A_Ravenholme;
    vehicleClass = MenTanoan;
    editorSubcategory = EdSubcat_Personnel;
    faction = Aegis_CIV_HI_F;
     identityTypes[] =
    {
        LanguageFRE_F,
        Head_Tanoan,
        G_CIV_exp
    };
	genericNames = TanoanMen;
};
class Aegis_C_Pilot_RF_tanoan: C_Pilot_RF
{
    author = $STR_A3_A_Ravenholme;
    vehicleClass = MenTanoan;
    editorSubcategory = EdSubcat_Personnel;
    faction = Aegis_CIV_HI_F;
     identityTypes[] =
    {
        LanguageFRE_F,
        Head_Tanoan,
        G_CIV_exp
    };
	genericNames = TanoanMen;
};
class Aegis_C_Pilot_Rescue_RF_tanoan: C_Pilot_Rescue_RF
{
    author = $STR_A3_A_Ravenholme;
    vehicleClass = MenTanoan;
    editorSubcategory = EdSubcat_Personnel;
    faction = Aegis_CIV_HI_F;
     identityTypes[] =
    {
        LanguageFRE_F,
        Head_Tanoan,
        G_CIV_exp
    };
	genericNames = TanoanMen;
};

/* Arganans - lxWS*/
class Aegis_C_Pilot_RF_lxWS: C_Pilot_RF
{
    author = $STR_A3_A_Ravenholme;
    editorSubcategory = EdSubcat_Personnel;
    faction = Aegis_CIV_ARG_F;
    genericNames = lxWS_WSaharaMen;
    identityTypes[] = 
    {
        Head_TK,
        Head_African, 
        lxWS_Head_African,
        LanguageFRE_F,
        G_CIVIL_male
    };
};

/* Malden */
class Aegis_C_Man_Firefighter_RF_malden: C_Man_Firefighter_RF
{
    author = $STR_A3_A_Ravenholme;
    editorSubcategory = EdSubcat_Personnel;
    faction = Aegis_CIV_MA_F;
    identityTypes[] = 
    {
        Head_Euro,
        Head_Greek,
        G_CIVIL_male,
        LanguageFRE_F
    };
    genericNames = FrenchMen;
};
class Aegis_C_Pilot_RF_malden: C_Pilot_RF
{
    author = $STR_A3_A_Ravenholme;
    editorSubcategory = EdSubcat_Personnel;
    faction = Aegis_CIV_MA_F;
    identityTypes[] = 
    {
        Head_Euro,
        Head_Greek,
        G_CIVIL_male,
        LanguageFRE_F
    };
    genericNames = FrenchMen;
};
class Aegis_C_Pilot_Rescue_RF_malden: C_Pilot_Rescue_RF
{
    author = $STR_A3_A_Ravenholme;
    editorSubcategory = EdSubcat_Personnel;
    faction = Aegis_CIV_MA_F;
    identityTypes[] = 
    {
        Head_Euro,
        Head_Greek,
        G_CIVIL_male,
        LanguageFRE_F
    };
    genericNames = FrenchMen;
};