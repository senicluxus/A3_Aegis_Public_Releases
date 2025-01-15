class CfgWeapons
{
	/* Inheritance Tree */
	class ItemCore;
	class VestItem;

    /* Bases */
	class V_PlateCarrier1_rgr;
	class V_PlateCarrierL_CTRG: V_PlateCarrier1_rgr
	{
		class ItemInfo;
	};
	class V_PlateCarrierLite_Black_noFlag_RF;
	class Aegis_V_PlateCarrier_RF_base;
	/* Reaction Forces Carrier Rig Variation */
	class Atlas_V_PlateCarrier_RF_snd: Aegis_V_PlateCarrier_RF_base
    {
		author = "Rotators Collective";
        scope = public;
		scopeArsenal = public;
        displayName  = $STR_A3_A_cfgWeapons_V_PlateCarrier_RF_snd_F0; 
        picture = "\A3_Atlas\Characters_F_Atlas\Vests\Data\UI\icon_V_PlateCarrier2_snd_F_CA.paa"; 
        hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Vests\Data\vests_sand_CO.paa"};
    };
	class Atlas_V_PlateCarrier_RF_aucamo: Aegis_V_PlateCarrier_RF_base
    {
		author = "Rotators Collective";
        scope = public;
		scopeArsenal = public;
        displayName  = $STR_A3_A_cfgWeapons_V_PlateCarrier_RF_aucamo_F0; 
        picture = "\A3_Atlas\Characters_F_Atlas\Vests\Data\UI\icon_V_PlateCarrier2_snd_F_CA.paa"; 
        hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Vests\Data\vests_aucamo_CO.paa"};
    };
	class Atlas_V_PlateCarrier_RF_aucamo_ard: Aegis_V_PlateCarrier_RF_base
    {
		author = "Rotators Collective";
        scope = public;
		scopeArsenal = public;
        displayName  = $STR_A3_A_cfgWeapons_V_PlateCarrier_RF_aucamo_ard_F0; 
        picture = "\A3_Atlas\Characters_F_Atlas\Vests\Data\UI\icon_V_PlateCarrier2_snd_F_CA.paa";  
        hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Vests\Data\vests_aucamo_arid_CO.paa"};
    };
	class Atlas_V_PlateCarrier_RF_aucamo_trp: Aegis_V_PlateCarrier_RF_base
    {
		author = "Rotators Collective";
        scope = public;
		scopeArsenal = public;
        displayName  = $STR_A3_A_cfgWeapons_V_PlateCarrier_RF_aucamo_trp_F0; 
        picture = "\A3_Atlas\Characters_F_Atlas\Vests\Data\UI\icon_V_PlateCarrier2_snd_F_CA.paa";  
        hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Vests\Data\vests_aucamo_tropic_CO.paa"};
    };
    class V_TacVest_rig_khk_RF;
    class Atlas_V_TacVest_Rig_ard_RF: V_TacVest_rig_khk_RF
	{
		author = "Rotators Collective";
		displayName = $STR_A3_A_V_TacVest_Rig_ard_RF0;
		picture = "\A3_Atlas\Characters_F_Atlas_RF\Vests\Data\UI\icon_Atlas_V_TacVest_Rig_ard_RF_CA.paa";
		hiddenSelectionsTextures[] = 
		{
			"\A3_Atlas\Characters_F_Atlas\Vests\Data\Atlas_V_TacVest_Ard_CO.paa",
			"\A3_Atlas\Characters_F_Atlas_RF\Vests\Data\vests_ard_CO.paa"
		};
		hiddenSelectionsMaterials[] = {"\A3_Aegis\Characters_F_Aegis\Vests\Data\tacticalvest.rvmat"};
	};
	class Aegis_V_TacVest_RigB_khk_RF;
	class Atlas_V_TacVest_RigB_ard_RF: Aegis_V_TacVest_RigB_khk_RF
	{
		author = "Rotators Collective";
		displayName = $STR_A3_A_V_TacVest_RigB_ard_RF0;
		picture = "\A3_Atlas\Characters_F_Atlas_RF\Vests\Data\UI\icon_Atlas_V_TacVest_RigB_ard_RF_CA.paa";
		hiddenSelectionsTextures[] = 
		{
			"\A3_Atlas\Characters_F_Atlas\Vests\Data\Atlas_V_TacVest_Ard_CO.paa",
			"\A3_Atlas\Characters_F_Atlas_RF\Vests\Data\vests_ard_CO.paa",
			"\A3_Atlas\Characters_F_Atlas_RF\Vests\Data\vests_ard_CO.paa"
		};
		hiddenSelectionsMaterials[] = {"\A3_Aegis\Characters_F_Aegis\Vests\Data\tacticalvest.rvmat"};
	};
};