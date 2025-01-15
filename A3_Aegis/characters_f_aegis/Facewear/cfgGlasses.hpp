class CfgGlasses
{
    /* Items */
	class None
	{
		identityTypes[] =
		{
			G_RUS_default,595,
			G_RUS_casual,1000,
			G_RUS_pilot,1000,
			G_RUS_SF,300,
			G_RUS_diver,0,
			G_EAF_default,595,
			G_EAF_casual,1000,
			G_CIVIL_aidworker,200,
			G_CIVIL_man,150,
			G_CIVIL_paramedic,520,
			G_CIVIL_constructionworker,220,
			NoGlasses,1000,
			G_NATO_default,300,
			G_NATO_casual,550,
			G_NATO_pilot,1000,
			G_NATO_recon,595,
			G_NATO_SF,300,
			G_NATO_sniper,1000,
			G_NATO_diver,0,
			G_NATO_tropic,300,
			G_T_NATO_SF,300,
			G_W_NATO_SF,300,
			G_CTRG_SF,300,
			G_IRAN_default,1000,
			G_IRAN_SF,0,
			G_IRAN_diver,0,
			G_IRAN_african,670,
			G_GUERIL_default,595,
			G_SYND_default,595,
			G_LOOTER_default,595,
			G_HAF_default,595,
			G_HAF_diver,0,
			G_ION_default,595,
			G_CIVIL_female,655,
			G_CIVIL_male,670,
			G_Competitor,0,
			G_Rangemaster,0,
			G_IRAN_officer,500
		};
	};
    class G_Diving
	{
		identityTypes[] = {NoGlasses,0};
	};
	class G_Shades_Black: None
	{
		identityTypes[] =
		{
			G_EAF_default,100,
			G_CIVIL_aidworker,100,
			G_CIVIL_constructionworker,120,
			G_CIVIL_man,80,
			NoGlasses,0,
			G_NATO_default,50,
			G_NATO_casual,100,
			G_NATO_recon,50,
			G_NATO_SF,100,
			G_NATO_tropic,50,
			G_T_NATO_SF,100,
			G_W_NATO_SF,100,
			G_CTRG_SF,100,
			G_GUERIL_default,20,
			G_SYND_default,20,
			G_HAF_default,20,
			G_ION_default,20,
			G_CIVIL_female,10,
			G_CIVIL_male,20,
			G_Competitor,10
		};
	};
	class G_Shades_Blue: None
	{
		identityTypes[] =
		{
			G_EAF_default,100,
			G_CIVIL_aidworker,100,
			G_CIVIL_constructionworker,120,
			G_CIVIL_man,80,
			NoGlasses,0,
			G_NATO_default,50,
			G_NATO_casual,100,
			G_NATO_recon,50,
			G_NATO_SF,100,
			G_NATO_tropic,50,
			G_T_NATO_SF,100,
			G_W_NATO_SF,100,
			G_CTRG_SF,100,
			G_GUERIL_default,20,
			G_SYND_default,20,
			G_HAF_default,20,
			G_ION_default,20,
			G_CIVIL_female,10,
			G_CIVIL_male,20,
			G_Competitor,10
		};
	};
	class G_Sport_Blackred: None
	{
		identityTypes[] =
		{
			G_EAF_default,10,
			NoGlasses,0,
			G_NATO_recon,5,
			G_NATO_SF,5,
			G_T_NATO_SF,5,
			G_W_NATO_SF,5,
			G_CTRG_SF,5,
			G_GUERIL_default,10,
			G_LOOTER_default,10,
			G_HAF_default,10,
			G_ION_default,10,
			G_CIVIL_female,15,
			G_CIVIL_male,25
		};
	};
	class G_Tactical_Clear: None
	{
		identityTypes[] =
		{
			G_EAF_default,50,
			NoGlasses,0,
			G_NATO_default,100,
			G_NATO_recon,50,
			G_NATO_SF,100,
			G_NATO_tropic,100,
			G_T_NATO_SF,100,
			G_W_NATO_SF,100,
			G_CTRG_SF,100,
			G_HAF_default,50,
			G_ION_default,50,
			G_Competitor,10
		};
	};
	class G_Spectacles: None
	{
		identityTypes[] =
		{
			G_CIVIL_aidworker,100,
			G_CIVIL_man,80,
			G_CIVIL_paramedic,120,
			NoGlasses,0,
			G_GUERIL_default,10,
			G_LOOTER_default,10,
			G_HAF_default,10,
			G_CIVIL_female,10,
			G_CIVIL_male,20
		};
	};
	class G_Spectacles_Tinted: None
	{
		identityTypes[] =
		{
			G_CIVIL_aidworker,100,
			G_CIVIL_man,80,
			G_CIVIL_paramedic,120,
			NoGlasses,0,
			G_GUERIL_default,10,
			G_LOOTER_default,10,
			G_HAF_default,10,
			G_CIVIL_female,10,
			G_CIVIL_male,20
		};
	};
	class G_Combat: None
	{
		model = "\A3\Characters_F_Exp\BLUFOR\G_Balaclava_TI_G_F.p3d";
		hiddenSelections[] =
		{
			camo1,
			camo2
		};
		hiddenSelectionsTextures[] =
		{
			"",
			"\A3\Characters_F\Heads\Glasses\Data\G_Combat_CA.paa"
		};
		identityTypes[] =
		{
			NoGlasses,0,
			G_NATO_default,300,
			G_NATO_SF,50
		};
	};
	class G_Lowprofile: None
	{
		identityTypes[] =
		{
			G_EAF_default,10,
			NoGlasses,0,
			G_NATO_recon,25,
			G_NATO_SF,10,
			G_T_NATO_SF,10,
			G_W_NATO_SF,10,
			G_HAF_default,25
		};
	};
	class G_Shades_Green: None
	{
		identityTypes[] =
		{
			G_EAF_default,100,
			G_CIVIL_aidworker,100,
			G_CIVIL_constructionworker,120,
			G_CIVIL_man,80,
			NoGlasses,0,
			G_NATO_default,50,
			G_NATO_casual,100,
			G_NATO_recon,50,
			G_NATO_SF,100,
			G_NATO_tropic,50,
			G_T_NATO_SF,100,
			G_W_NATO_SF,100,
			G_CTRG_SF,100,
			G_GUERIL_default,20,
			G_SYND_default,20,
			G_HAF_default,20,
			G_ION_default,20,
			G_CIVIL_female,10,
			G_CIVIL_male,20,
			G_Competitor,10
		};
	};
	class G_Shades_Red: None
	{
		identityTypes[] =
		{
			G_EAF_default,100,
			G_CIVIL_aidworker,100,
			G_CIVIL_constructionworker,120,
			G_CIVIL_man,80,
			NoGlasses,0,
			G_NATO_default,50,
			G_NATO_casual,100,
			G_NATO_recon,50,
			G_NATO_SF,100,
			G_NATO_tropic,50,
			G_T_NATO_SF,100,
			G_W_NATO_SF,100,
			G_CTRG_SF,100,
			G_GUERIL_default,20,
			G_SYND_default,20,
			G_HAF_default,20,
			G_ION_default,20,
			G_CIVIL_female,10,
			G_CIVIL_male,20,
			G_Competitor,10
		};
	};
	class G_Squares: None
	{
		identityTypes[] =
		{
			G_CIVIL_aidworker,100,
			G_CIVIL_man,80,
			G_CIVIL_constructionworker,80,
			NoGlasses,0,
			G_GUERIL_default,10,
			G_LOOTER_default,10,
			G_HAF_default,10,
			G_ION_default,10,
			G_CIVIL_female,10,
			G_CIVIL_male,15
		};
	};
	class G_Squares_Tinted: None
	{
		identityTypes[] =
		{
			G_CIVIL_aidworker,100,
			G_CIVIL_man,80,
			G_CIVIL_constructionworker,80,
			NoGlasses,0,
			G_GUERIL_default,10,
			G_LOOTER_default,10,
			G_HAF_default,10,
			G_ION_default,10,
			G_CIVIL_female,10,
			G_CIVIL_male,15
		};
	};
	class G_Sport_BlackWhite: None
	{
		identityTypes[] =
		{
			G_EAF_default,10,
			NoGlasses,0,
			G_NATO_recon,5,
			G_NATO_SF,5,
			G_T_NATO_SF,5,
			G_W_NATO_SF,5,
			G_CTRG_SF,5,
			G_GUERIL_default,10,
			G_LOOTER_default,10,
			G_HAF_default,10,
			G_ION_default,10,
			G_CIVIL_female,15,
			G_CIVIL_male,25
		};
	};
	class G_Sport_Blackyellow: None
	{
		identityTypes[] =
		{
			G_EAF_default,10,
			NoGlasses,0,
			G_NATO_recon,5,
			G_NATO_SF,5,
			G_T_NATO_SF,5,
			G_W_NATO_SF,5,
			G_CTRG_SF,5,
			G_GUERIL_default,10,
			G_LOOTER_default,10,
			G_HAF_default,10,
			G_ION_default,10,
			G_CIVIL_female,15,
			G_CIVIL_male,25
		};
	};
	class G_Sport_Greenblack: None
	{
		identityTypes[] =
		{
			G_EAF_default,10,
			NoGlasses,0,
			G_NATO_recon,5,
			G_NATO_SF,5,
			G_T_NATO_SF,5,
			G_W_NATO_SF,5,
			G_CTRG_SF,5,
			G_GUERIL_default,10,
			G_LOOTER_default,10,
			G_HAF_default,10,
			G_ION_default,10,
			G_CIVIL_female,15,
			G_CIVIL_male,25
		};
	};
	class G_Sport_Checkered: None
	{
		identityTypes[] =
		{
			G_EAF_default,10,
			NoGlasses,0,
			G_NATO_recon,5,
			G_NATO_SF,5,
			G_T_NATO_SF,5,
			G_W_NATO_SF,5,
			G_CTRG_SF,5,
			G_GUERIL_default,10,
			G_LOOTER_default,10,
			G_HAF_default,10,
			G_ION_default,10,
			G_CIVIL_female,15,
			G_CIVIL_male,25
		};
	};
	class G_Sport_Red: None
	{
		identityTypes[] =
		{
			G_EAF_default,10,
			NoGlasses,0,
			G_NATO_recon,5,
			G_NATO_SF,5,
			G_T_NATO_SF,5,
			G_W_NATO_SF,5,
			G_CTRG_SF,5,
			G_GUERIL_default,10,
			G_LOOTER_default,10,
			G_HAF_default,10,
			G_ION_default,10,
			G_CIVIL_female,15,
			G_CIVIL_male,25
		};
	};
	class G_Tactical_Black: None
	{
		identityTypes[] =
		{
			G_EAF_default,50,
			NoGlasses,0,
			G_NATO_default,100,
			G_NATO_recon,50,
			G_NATO_SF,100,
			G_NATO_tropic,100,
			G_T_NATO_SF,100,
			G_W_NATO_SF,100,
			G_CTRG_SF,100,
			G_HAF_default,50,
			G_ION_default,50,
			G_Competitor,10
		};
	};
	class G_Aviator: None
	{
		identityTypes[] =
		{
			G_EAF_default,15,
			G_CIVIL_aidworker,100,
			G_CIVIL_man,80,
			G_CIVIL_constructionworker,60,
			NoGlasses,0,
			G_NATO_default,10,
			G_NATO_casual,450,
			G_NATO_recon,15,
			G_NATO_SF,15,
			G_NATO_tropic,10,
			G_T_NATO_SF,15,
			G_W_NATO_SF,15,
			G_CTRG_SF,15,
			G_GUERIL_default,25,
			G_SYND_default,25,
			G_LOOTER_default,25,
			G_HAF_default,25,
			G_CIVIL_female,15,
			G_CIVIL_male,30,
			G_IRAN_officer,500
		};
	};
	class G_Lady_Mirror: None
	{
		identityTypes[] =
		{
			NoGlasses,0,
			G_CIVIL_female,40
		};
	};
	class G_Lady_Dark: None
	{
		identityTypes[] =
		{
			NoGlasses,0,
			G_CIVIL_female,40
		};
	};
	class G_Lady_Red: None
	{
		identityTypes[] =
		{
			NoGlasses,0,
			G_CIVIL_female,40
		};
	};
	class G_Lady_Blue: None
	{
		identityTypes[] =
		{
			NoGlasses,0,
			G_CIVIL_female,40
		};
	};
	class G_B_Diving: G_Diving
	{
		identityTypes[] =
		{
			NoGlasses,0,
			G_NATO_diver,1000
		};
	};
	class G_O_Diving: G_Diving
	{
		identityTypes[] =
		{
			NoGlasses,0,
			G_IRAN_diver,1000
		};
	};
	class G_I_Diving: G_Diving
	{
		identityTypes[] =
		{
			NoGlasses,0,
			G_HAF_diver,1000
		};
	};
	class G_Goggles_VR: None
	{
		identityTypes[] = {NoGlasses,0};
	};
	class G_Balaclava_blk: None
	{
		identityTypes[] =
		{
			G_RUS_default,25,
			G_RUS_SF,25,
			NoGlasses,0,
			G_IRAN_SF,100
		};
	};
	class G_Balaclava_oli: G_Balaclava_blk
	{
		identityTypes[] =
		{
			G_RUS_default,25,
			G_RUS_SF,25,
			NoGlasses,0
		};
	};
	class G_Balaclava_combat: G_Balaclava_blk
	{
		identityTypes[] = {NoGlasses,0};
	};
	class G_Balaclava_lowprofile: G_Balaclava_blk
	{
		identityTypes[] = {NoGlasses,0};
	};
	class G_Bandanna_blk: G_Balaclava_blk
	{
		identityTypes[] =
		{
			G_RUS_default,25,
			G_RUS_SF,25,
			G_EAF_default,25,
			NoGlasses,0,
			G_NATO_SF,25,
			G_T_NATO_SF,25,
			G_W_NATO_SF,25,
			G_IRAN_SF,25,
			G_GUERIL_default,25,
			G_SYND_default,25,
			G_LOOTER_default,25
		};
	};
	class G_Bandanna_oli: G_Bandanna_blk
	{
		identityTypes[] =
		{
			G_RUS_default,25,
			G_RUS_SF,25,
			G_EAF_default,25,
			NoGlasses,0,
			G_NATO_SF,25,
			G_T_NATO_SF,25,
			G_W_NATO_SF,25,
			G_GUERIL_default,25,
			G_SYND_default,25,
			G_LOOTER_default,25
		};
	};
	class G_Bandanna_khk: G_Bandanna_blk
	{
		identityTypes[] =
		{
			G_RUS_default,25,
			G_RUS_SF,25,
			NoGlasses,0,
			G_NATO_SF,25,
			G_GUERIL_default,25,
			G_SYND_default,25,
			G_LOOTER_default,25
		};
	};
	class G_Bandanna_tan: G_Bandanna_blk
	{
		identityTypes[] =
		{
			NoGlasses,0,
			G_GUERIL_default,25,
			G_SYND_default,25,
			G_LOOTER_default,25
		};
	};
	class G_Bandanna_beast: G_Bandanna_blk
	{
		identityTypes[] =
		{
			G_RUS_default,25,
			G_RUS_SF,25,
			G_EAF_default,25,
			NoGlasses,0,
			G_NATO_SF,25,
			G_T_NATO_SF,25,
			G_W_NATO_SF,25,
			G_IRAN_SF,25,
			G_GUERIL_default,25,
			G_SYND_default,25,
			G_LOOTER_default,25
		};
	};
	class G_Bandanna_shades: G_Bandanna_blk
	{
		identityTypes[] =
		{
			G_EAF_default,25,
			NoGlasses,0,
			G_NATO_SF,25,
			G_T_NATO_SF,25,
			G_W_NATO_SF,25,
			G_GUERIL_default,25,
			G_SYND_default,25,
			G_LOOTER_default,25
		};
	};
	class G_Bandanna_sport: G_Bandanna_shades
	{
		identityTypes[] =
		{
			NoGlasses,0,
			G_GUERIL_default,25,
			G_SYND_default,25,
			G_LOOTER_default,25
		};
	};
	class G_Bandanna_aviator: G_Bandanna_shades
	{
		identityTypes[] =
		{
			NoGlasses,0,
			G_GUERIL_default,25,
			G_SYND_default,25,
			G_LOOTER_default,25
		};
	};
	class G_Balaclava_TI_blk_F;
	class G_Balaclava_TI_G_blk_F: G_Balaclava_TI_blk_F
	{
		hiddenSelectionsTextures[] =
		{
			"\A3\Characters_F_Exp\BLUFOR\Data\G_Balaclava_TI_blk_F_CO.paa",
			"\A3_Aegis\Characters_F_Aegis\Facewear\Data\G_Combat_Goggles_blk_F_CA.paa"
		};
	};
	class G_Balaclava_TI_tna_F;
	class G_Balaclava_TI_G_tna_F: G_Balaclava_TI_tna_F
	{
		hiddenSelectionsTextures[] =
		{
			"\A3\Characters_F_Exp\BLUFOR\Data\G_Balaclava_TI_tna_F_CO.paa",
			"\A3\Characters_F_Exp\BLUFOR\Data\G_Combat_Goggles_tna_F_CA.paa"
		};
	};
	class G_Combat_Goggles_tna_F: None
	{
		model = "\A3\Characters_F_Exp\BLUFOR\G_Balaclava_TI_G_F.p3d";
		hiddenSelections[] =
		{
			camo1,
			camo2
		};
		hiddenSelectionsTextures[] =
		{
			"",
			"\A3\Characters_F_Exp\BLUFOR\Data\G_Combat_Goggles_tna_F_CA.paa"
		};
		identityTypes[] =
		{
			NoGlasses,0,
			G_NATO_tropic,300,
			G_T_NATO_SF,50,
			G_W_NATO_SF,50
		};
	};
	class G_Balaclava_Skull1: G_Balaclava_blk
	{
		author = $STR_A3_A_POLPOX;
		displayName = $STR_A3_A_CfgGlasses_G_Balaclava_Skull10;
		model = "\A3\Characters_F_Bootcamp\Guerrilla\G_balaclava_clean.p3d";
		picture = "\A3_Aegis\Characters_F_Aegis\Facewear\Data\UI\icon_G_Balaclava_Skull1_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Facewear\Data\headgear_balaclava_Skull1_CO.paa"};
		identityTypes[] = {NoGlasses,0};
	};
	class G_Bandanna_BlueFlame1: G_Bandanna_blk
	{
		author = $STR_A3_A_POLPOX;
		displayName = $STR_A3_A_CfgGlasses_G_Bandanna_BlueFlame10;
		picture = "\A3_Aegis\Characters_F_Aegis\Facewear\Data\UI\icon_G_Bandana_BlueFlame1_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Facewear\Data\headgear_bandMask_BlueFlame1_CO.paa"};
		identityTypes[] =
		{
			NoGlasses,0,
			G_LOOTER_default,50
		};
	};
	class G_Bandanna_BlueFlame2: G_Bandanna_blk
	{
		author = $STR_A3_A_POLPOX;
		displayName = $STR_A3_A_CfgGlasses_G_Bandanna_BlueFlame20;
		picture = "\A3_Aegis\Characters_F_Aegis\Facewear\Data\UI\icon_G_Bandana_BlueFlame2_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Facewear\Data\headgear_bandMask_BlueFlame2_CO.paa"};
		identityTypes[] =
		{
			NoGlasses,0,
			G_LOOTER_default,50
		};
	};
	class G_Bandanna_CandySkull: G_Bandanna_blk
	{
		author = $STR_A3_A_POLPOX;
		displayName = $STR_A3_A_CfgGlasses_G_Bandanna_CandySkull0;
		picture = "\A3_Aegis\Characters_F_Aegis\Facewear\Data\UI\icon_G_Bandana_CandySkull_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Facewear\Data\headgear_bandMask_CandySkull_CO.paa"};
		identityTypes[] = {NoGlasses,0};
	};
	class G_Bandanna_RedFlame1: G_Bandanna_blk
	{
		author = $STR_A3_A_POLPOX;
		displayName = $STR_A3_A_CfgGlasses_G_Bandanna_RedFlame10;
		picture = "\A3_Aegis\Characters_F_Aegis\Facewear\Data\UI\icon_G_Bandana_RedFlame1_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Facewear\Data\headgear_bandMask_RedFlame1_CO.paa"};
		identityTypes[] =
		{
			NoGlasses,0,
			G_LOOTER_default,50
		};
	};
	class G_Bandanna_RedFlame2: G_Bandanna_blk
	{
		author = $STR_A3_A_POLPOX;
		displayName = $STR_A3_A_CfgGlasses_G_Bandanna_RedFlame20;
		picture = "\A3_Aegis\Characters_F_Aegis\Facewear\Data\UI\icon_G_Bandana_RedFlame2_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Facewear\Data\headgear_bandMask_RedFlame2_CO.paa"};
		identityTypes[] =
		{
			NoGlasses,0,
			G_LOOTER_default,50
		};
	};
	class G_Bandanna_Skull1: G_Bandanna_blk
	{
		author = $STR_A3_A_POLPOX;
		displayName = $STR_A3_A_CfgGlasses_G_Bandanna_Skull10;
		picture = "\A3_Aegis\Characters_F_Aegis\Facewear\Data\UI\icon_G_Bandana_Skull1_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Facewear\Data\headgear_bandMask_Skull1_CO.paa"};
		identityTypes[] =
		{
			NoGlasses,0,
			G_GUERIL_default,50,
			G_SYND_default,50,
			G_LOOTER_default,50
		};
	};
	class G_Bandanna_Skull2: G_Bandanna_blk
	{
		author = $STR_A3_A_POLPOX;
		displayName = $STR_A3_A_CfgGlasses_G_Bandanna_Skull20;
		picture = "\A3_Aegis\Characters_F_Aegis\Facewear\Data\UI\icon_G_Bandana_Skull2_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Facewear\Data\headgear_bandMask_Skull2_CO.paa"};
		identityTypes[] =
		{
			NoGlasses,0,
			G_GUERIL_default,50,
			G_SYND_default,50,
			G_LOOTER_default,50
		};
	};
	class G_Bandanna_Syndikat1: G_Bandanna_blk
	{
		author = $STR_A3_A_POLPOX;
		displayName = $STR_A3_A_CfgGlasses_G_Bandanna_Syndikat10;
		picture = "\A3_Aegis\Characters_F_Aegis\Facewear\Data\UI\icon_G_Bandana_Syndikat1_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Facewear\Data\headgear_bandMask_Syndikat1_CO.paa"};
		identityTypes[] =
		{
			NoGlasses,0,
			G_SYND_default,50
		};
	};
	class G_Bandanna_Syndikat2: G_Bandanna_blk
	{
		author = $STR_A3_A_POLPOX;
		displayName = $STR_A3_A_CfgGlasses_G_Bandanna_Syndikat20;
		picture = "\A3_Aegis\Characters_F_Aegis\Facewear\Data\UI\icon_G_Bandana_Syndikat2_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Facewear\Data\headgear_bandMask_Syndikat2_CO.paa"};
		identityTypes[] =
		{
			NoGlasses,0,
			G_SYND_default,50
		};
	};
	class G_Balaclava_Flecktarn: G_Balaclava_blk
	{
		author = $STR_A3_A_POLPOX;
		displayName = $STR_A3_A_CfgGlasses_G_Balaclava_Flecktarn0;
		picture = "\A3_Aegis\Characters_F_Aegis\Facewear\Data\UI\icon_G_Balaclava_Flecktarn_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Facewear\Data\G_Balaclava_Flecktarn_CO.paa"};
		identityTypes[] = {NoGlasses,0};
	};
	class G_Balaclava_Tropentarn: G_Balaclava_blk
	{
		author = $STR_A3_A_POLPOX;
		displayName = $STR_A3_A_CfgGlasses_G_Balaclava_Tropentarn0;
		picture = "\A3_Aegis\Characters_F_Aegis\Facewear\Data\UI\icon_G_Balaclava_Tropentarn_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Facewear\Data\G_Balaclava_Tropentarn_CO.paa"};
		identityTypes[] = {NoGlasses,0};
	};
	class G_Bandanna_Germany: G_Bandanna_blk
	{
		author = $STR_A3_A_POLPOX;
		displayName = $STR_A3_A_CfgGlasses_G_Bandanna_Germany0;
		picture = "\A3_Aegis\Characters_F_Aegis\Facewear\Data\UI\icon_G_Bandana_Germany_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Facewear\Data\headgear_bandMask_Germany_CO.paa"};
		identityTypes[] = {NoGlasses,0};
	};
	class G_Shades_Yellowred: None
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgGlasses_G_Shades_Yellowred0;
		model = "\A3\Characters_F\Heads\Glasses\G_Shades_Black.p3d";
		picture = "\A3\Characters_F\Data\UI\icon_G_Shades_Red_CA.paa";
		hiddenSelections[] = {camo};
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Facewear\Data\JoeyX_yellowred_CA.paa"};
		identityTypes[] =
		{
			G_EAF_default,100,
			G_CIVIL_aidworker,100,
			G_CIVIL_constructionworker,120,
			G_CIVIL_man,80,
			NoGlasses,0,
			G_NATO_default,50,
			G_NATO_casual,100,
			G_NATO_recon,50,
			G_NATO_SF,100,
			G_NATO_tropic,50,
			G_T_NATO_SF,100,
			G_W_NATO_SF,100,
			G_CTRG_SF,100,
			G_GUERIL_default,20,
			G_SYND_default,20,
			G_HAF_default,20,
			G_ION_default,20,
			G_CIVIL_female,10,
			G_CIVIL_male,20,
			G_Competitor,10
		};
		mass = 2;
	};
	class G_Tactical_Yellow: None
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgGlasses_G_Tactical_Yellow0;
		model = "\A3\Characters_F_Beta\Heads\Glasses\G_Tactical_Black";
		picture = "\A3\Characters_F\Data\UI\icon_G_Tactical_CA.paa";
		hiddenSelections[] = {camo};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Heads\Glasses\Data\Tactical_2_CA.paa"};
		identityTypes[] =
		{
			G_EAF_default,50,
			NoGlasses,0,
			G_NATO_default,100,
			G_NATO_recon,50,
			G_NATO_SF,100,
			G_NATO_tropic,100,
			G_T_NATO_SF,100,
			G_W_NATO_SF,100,
			G_CTRG_SF,100,
			G_HAF_default,50,
			G_ION_default,50,
			G_Competitor,10
		};
		mass = 2;
	};
	class G_Tactical_Camo: None
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgGlasses_G_Tactical_Camo0;
		model = "\A3\Characters_F_Beta\Heads\Glasses\G_Tactical_Black";
		picture = "\A3\Characters_F\Data\UI\icon_G_Tactical_CA.paa";
		hiddenSelections[] = {camo};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Heads\Glasses\Data\Tactical_4_CA.paa"};
		identityTypes[] =
		{
			G_EAF_default,50,
			NoGlasses,0,
			G_NATO_default,100,
			G_NATO_recon,50,
			G_NATO_SF,100,
			G_NATO_tropic,100,
			G_T_NATO_SF,100,
			G_W_NATO_SF,100,
			G_CTRG_SF,100,
			G_HAF_default,50,
			G_ION_default,50,
			G_Competitor,10
		};
		mass = 2;
	};
	class G_Headset_light: None
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_H_Headset_light0;
		model = "\A3\Characters_F\Common\headset_light.p3d";
		picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_Headset_light_CA.paa";
		hiddenSelections[] = {camo};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\headset_3_CO.paa"};
		identityTypes[] = {NoGlasses,0};
		mass = 6;
	};
	class G_Headset_Tactical: None
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		scopeArsenal = public;
		displayName = $STR_A3_A_CfgWeapons_H_Headset_tactical_blk0;
		model = "\A3_Aegis\Characters_F_Aegis\Headgear\H_Headset_Tactical.p3d";
		picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_Headset_light_CA.paa";
		hiddenSelections[] =
		{
			camo1,
			camo2,
			camo3
		};
		descriptionShort = $STR_A3_SP_noarmor;
		hiddenSelectionsTextures[] = 
		{
			"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_Headset_Tactical_blk_CO.paa",
			"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_Headset_Tactical_blk_CO.paa",
			"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_Headset_Tactical_blk_CO.paa"
		};
		identityTypes[] = {NoGlasses,0};
		mass = 6;
	};
	class G_Headset_Tactical_khk: None
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		scopeArsenal = public;
		displayName = $STR_A3_A_CfgWeapons_H_Headset_tactical_khk0;
		model = "\A3_Aegis\Characters_F_Aegis\Headgear\H_Headset_Tactical.p3d";
		picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_Headset_light_CA.paa";
		hiddenSelections[] =
		{
			camo1,
			camo2,
			camo3
		};
		descriptionShort = $STR_A3_SP_noarmor;
		hiddenSelectionsTextures[] = 
		{
			"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_Headset_Tactical_khk_CO.paa",
			"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_Headset_Tactical_khk_CO.paa",
			"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_Headset_Tactical_khk_CO.paa"
		};
		identityTypes[] = {NoGlasses,0};
		mass = 6;
	};
	class G_Headset_Tactical_grn: None
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		scopeArsenal = public;
		displayName = $STR_A3_A_CfgWeapons_H_Headset_tactical_grn0;
		model = "\A3_Aegis\Characters_F_Aegis\Headgear\H_Headset_Tactical.p3d";
		picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_Headset_light_CA.paa";
		hiddenSelections[] =
		{
			camo1,
			camo2,
			camo3
		};
		descriptionShort = $STR_A3_SP_noarmor;
		hiddenSelectionsTextures[] = 
		{
			"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_Headset_Tactical_grn_CO.paa",
			"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_Headset_Tactical_grn_CO.paa",
			"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_Headset_Tactical_grn_CO.paa"
		};
		identityTypes[] = {NoGlasses,0};
		mass = 6;
	};
	class G_Bandanna_kawaii: G_Bandanna_blk
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgGlasses_G_Bandanna_kawaii0;
		picture = "\A3_Aegis\Characters_F_Aegis\Facewear\Data\UI\icon_G_Bandanna_kawaii_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Facewear\Data\headgear_bandMask_kawaii_CO.paa"};
		identityTypes[] = {NoGlasses,0};
	};
	class G_Bandanna_shemag: G_Bandanna_blk
	{
		author = $STR_A3_A_Lexx;
		displayName = $STR_A3_A_CfgGlasses_G_Bandanna_shemag0;
		picture = "\A3_Aegis\Characters_F_Aegis\Facewear\Data\UI\icon_G_Bandanna_shemag_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Facewear\Data\headgear_bandMask_shemag_CO.paa"};
		identityTypes[] =
		{
			NoGlasses,0,
			G_IRAN_african,50
		};
	};
	class G_Balaclava_TI_alt_F: G_Balaclava_TI_blk_F
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgGlasses_G_Balaclava_TI_alt_F0;
		picture = "\A3_Aegis\Characters_F_Aegis\Facewear\Data\UI\icon_G_Balaclava_TI_alt_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Facewear\Data\G_Balaclava_TI_alt_F_CO.paa"};
		identityTypes[] = {};
		mass = 6;
	};
	class G_Balaclava_TI_G_alt_F: G_Balaclava_TI_alt_F
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgGlasses_G_Balaclava_TI_G_alt_F0;
		model = "\A3\Characters_F_Exp\BLUFOR\G_Balaclava_TI_G_F.p3d";
		picture = "\A3_Aegis\Characters_F_Aegis\Facewear\Data\UI\icon_G_Balaclava_TI_G_alt_F_CA.paa";
		hiddenSelections[] =
		{
			camo1,
			camo2
		};
		hiddenSelectionsTextures[] =
		{
			"\A3_Aegis\Characters_F_Aegis\Facewear\Data\G_Balaclava_TI_alt_F_CO.paa",
			"\A3\Characters_F\Heads\Glasses\Data\G_Combat_CA.paa"
		};
		identityTypes[] = {};
		mass = 10;
	};
	class G_Combat_Goggles_blk_F: None
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_A_CfgGlasses_G_Combat_Goggles_blk_F0;
		model = "\A3\Characters_F_Exp\BLUFOR\G_Balaclava_TI_G_F.p3d";
		picture = "\A3_Aegis\Characters_F_Aegis\Facewear\Data\UI\icon_G_Combat_Goggles_blk_F_CA.paa";
		hiddenSelections[] =
		{
			camo1,
			camo2
		};
		hiddenSelectionsTextures[] =
		{
			"",
			"\A3_Aegis\Characters_F_Aegis\Facewear\Data\G_Combat_Goggles_blk_F_CA.paa"
		};
		identityTypes[] = {NoGlasses,0};
		mass = 6;
	};
	class G_O_R_Diving: G_Diving
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgGlasses_G_O_R_Diving0;
		model = "\A3\Characters_F_EPB\Heads\Glasses\G_O_Diving.p3d";
		picture = "\A3_Aegis\Characters_F_Aegis\Facewear\Data\UI\icon_G_O_R_Diving_CA.paa";
		hiddenSelections[] = {camo};
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Facewear\Data\G_Diving_rus_CA.paa"};
		identityTypes[] =
		{
			G_RUS_diver,1000,
			NoGlasses,0
		};
	};
	class G_Shemag_tan: None
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_H_ShemagOpen_tan0;
		model = "\A3_Aegis\Characters_F_Aegis\Facewear\G_Shemag.p3d";
		picture = "\A3_Aegis\Characters_F_Aegis\Facewear\Data\UI\icon_G_Shemag_tan_CA.paa";
		hiddenSelections[] = {camo};
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Facewear\Data\Shemag_tan_CO.paa"};
		identityTypes[] =
		{
			G_EAF_default,25,
			NoGlasses,0,
			G_NATO_SF,25,
			G_T_NATO_SF,25,
			G_W_NATO_SF,25,
			G_CTRG_SF,25
		};
		mass = 8;
	};
	class G_Shemag_oli: G_Shemag_tan
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_H_Shemag_olive0;
		picture = "\A3_Aegis\Characters_F_Aegis\Facewear\Data\UI\icon_G_Shemag_oli_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Facewear\Data\Shemag_oli_CO.paa"};
		identityTypes[] =
		{
			G_EAF_default,25,
			NoGlasses,0,
			G_NATO_SF,25,
			G_T_NATO_SF,25,
			G_W_NATO_SF,25,
			G_CTRG_SF,25
		};
	};
	class G_Shemag_khk: G_Shemag_tan
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_H_ShemagOpen_khk0;
		picture = "\A3_Aegis\Characters_F_Aegis\Facewear\Data\UI\icon_G_Shemag_khk_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Facewear\Data\Shemag_khk_CO.paa"};
		identityTypes[] =
		{
			G_EAF_default,25,
			NoGlasses,0,
			G_NATO_SF,25,
			G_T_NATO_SF,25,
			G_W_NATO_SF,25,
			G_CTRG_SF,25
		};
	};
	class G_Shemag_red: G_Shemag_tan
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgGlasses_G_Shemag_red0;
		picture = "\A3_Aegis\Characters_F_Aegis\Facewear\Data\UI\icon_G_Shemag_red_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Facewear\Data\Shemag_red_CO.paa"};
		identityTypes[] = {};
	};
	class G_Shemag_white: G_Shemag_tan
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_H_ShemagOpen_khk0_boot;
		picture = "\A3_Aegis\Characters_F_Aegis\Facewear\Data\UI\icon_G_Shemag_white_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Facewear\Data\Shemag_white_CO.paa"};
		identityTypes[] = {};
	};
	class G_Shemag_shades: G_Shemag_tan
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgGlasses_G_Shemag_shades0;
		model = "\A3_Aegis\Characters_F_Aegis\Facewear\G_Shemag_shades.p3d";
		picture = "\A3_Aegis\Characters_F_Aegis\Facewear\Data\UI\icon_G_Shemag_shades_CA.paa";
		hiddenSelections[] =
		{
			camo1,
			camo2
		};
		hiddenSelectionsTextures[] =
		{
			"\A3\Characters_F\Heads\Glasses\Data\JoeyX_black_CA.paa",
			"\A3_Aegis\Characters_F_Aegis\Facewear\Data\Shemag_khk_CO.paa"
		};
		identityTypes[] =
		{
			G_EAF_default,25,
			NoGlasses,0,
			G_NATO_SF,25,
			G_T_NATO_SF,25,
			G_W_NATO_SF,25,
			G_CTRG_SF,25
		};
		mass = 10;
	};
	class G_Shemag_tactical: G_Shemag_tan
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgGlasses_G_Shemag_tactical0;
		model = "\A3_Aegis\Characters_F_Aegis\Facewear\G_Shemag_tactical.p3d";
		picture = "\A3_Aegis\Characters_F_Aegis\Facewear\Data\UI\icon_G_Shemag_tactical_CA.paa";
		hiddenSelections[] =
		{
			camo1,
			camo2
		};
		hiddenSelectionsTextures[] =
		{
			"\A3_Aegis\Characters_F_Aegis\Facewear\Data\tactical_CA.paa",
			"\A3_Aegis\Characters_F_Aegis\Facewear\Data\Shemag_khk_CO.paa"
		};
		identityTypes[] =
		{
			G_EAF_default,25,
			NoGlasses,0,
			G_NATO_SF,25,
			G_T_NATO_SF,25,
			G_W_NATO_SF,25,
			G_CTRG_SF,25
		};
		mass = 10;
	};
	class G_Cigarette: None
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgGlasses_G_Cigarette0;
		model = "\A3_Aegis\Characters_F_Aegis\Facewear\G_Cigarette.p3d";
		picture = "\A3_Aegis\Characters_F_Aegis\Facewear\Data\UI\icon_G_Cigarette_CA.paa";
		identityTypes[] = {NoGlasses,0};
		mass = 2;
	};
	class G_Balaclava_light_blk_F: None
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgGlasses_G_Balaclava_light_blk_F0;
		model = "\A3\Characters_F_Exp\BLUFOR\G_Balaclava_TI_F.p3d";
		picture = "\A3_Aegis\Characters_F_Aegis\Facewear\Data\UI\icon_G_Balaclava_light_blk_F_CA.paa";
		hiddenSelections[] = {camo};
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Facewear\Data\G_Balaclava_light_CO.paa"};
		hiddenSelectionsMaterials[] = {"\A3_Aegis\Characters_F_Aegis\Facewear\Data\G_Balaclava_light.rvmat"};
		identityTypes[] = {};
		mass = 6;
	};
	class G_Balaclava_light_mtp_F: G_Balaclava_light_blk_F
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgGlasses_G_Balaclava_light_mtp_F0;
		picture = "\A3_Aegis\Characters_F_Aegis\Facewear\Data\UI\icon_G_Balaclava_light_mtp_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Facewear\Data\G_Balaclava_light_mtp_CO.paa"};
		identityTypes[] =
		{
			NoGlasses,0,
			G_NATO_SF,25
		};
	};
	class G_Balaclava_light_tropic_F: G_Balaclava_light_blk_F
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgGlasses_G_Balaclava_light_tropic_F0;
		picture = "\A3_Aegis\Characters_F_Aegis\Facewear\Data\UI\icon_G_Balaclava_light_tropic_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Facewear\Data\G_Balaclava_light_tropic_CO.paa"};
		identityTypes[] =
		{
			NoGlasses,0,
			G_T_NATO_SF,25
		};
	};
	class G_Balaclava_light_eaf_F: G_Balaclava_light_blk_F
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgGlasses_G_Balaclava_light_eaf_F0;
		picture = "\A3_Aegis\Characters_F_Aegis\Facewear\Data\UI\icon_G_Balaclava_light_eaf_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Facewear\Data\G_Balaclava_light_eaf_CO.paa"};
		identityTypes[] =
		{
			G_EAF_default,25,
			NoGlasses,0
		};
	};
	class G_Balaclava_light_wdl_F: G_Balaclava_light_blk_F
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgGlasses_G_Balaclava_light_wdl_F0;
		picture = "\A3_Aegis\Characters_F_Aegis\Facewear\Data\UI\icon_G_Balaclava_light_wdl_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Facewear\Data\G_Balaclava_light_wdl_CO.paa"};
		identityTypes[] =
		{
			NoGlasses,0,
			G_W_NATO_SF,100
		};
	};
	class G_Balaclava_light_G_blk_F: G_Balaclava_light_blk_F
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgGlasses_G_Balaclava_light_G_blk_F0;
		model = "\A3\Characters_F_Exp\BLUFOR\G_Balaclava_TI_G_F.p3d";
		picture = "\A3_Aegis\Characters_F_Aegis\Facewear\Data\UI\icon_G_Balaclava_light_G_blk_F_CA.paa";
		hiddenSelections[] =
		{
			camo1,
			camo2
		};
		hiddenSelectionsTextures[] =
		{
			"\A3_Aegis\Characters_F_Aegis\Facewear\Data\G_Balaclava_light_CO.paa",
			"\A3_Aegis\Characters_F_Aegis\Facewear\Data\G_Combat_Goggles_blk_F_CA.paa"
		};
		hiddenSelectionsMaterials[] =
		{
			"\A3_Aegis\Characters_F_Aegis\Facewear\Data\G_Balaclava_light.rvmat",
			"\A3\Characters_F\Heads\Glasses\Data\G_Combat.rvmat"
		};
		identityTypes[] = {};
		mass = 10;
	};
	class G_Balaclava_light_G_mtp_F: G_Balaclava_light_mtp_F
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgGlasses_G_Balaclava_light_G_mtp_F0;
		model = "\A3\Characters_F_Exp\BLUFOR\G_Balaclava_TI_G_F.p3d";
		picture = "\A3_Aegis\Characters_F_Aegis\Facewear\Data\UI\icon_G_Balaclava_light_G_mtp_F_CA.paa";
		hiddenSelections[] =
		{
			camo1,
			camo2
		};
		hiddenSelectionsTextures[] =
		{
			"\A3_Aegis\Characters_F_Aegis\Facewear\Data\G_Balaclava_light_mtp_CO.paa",
			"\A3\Characters_F\Heads\Glasses\Data\G_Combat_CA.paa"
		};
		hiddenSelectionsMaterials[] =
		{
			"\A3_Aegis\Characters_F_Aegis\Facewear\Data\G_Balaclava_light.rvmat",
			"\A3\Characters_F\Heads\Glasses\Data\G_Combat.rvmat"
		};
		identityTypes[] =
		{
			NoGlasses,0,
			G_NATO_SF,25
		};
		mass = 10;
	};
	class G_Balaclava_light_G_tropic_F: G_Balaclava_light_tropic_F
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgGlasses_G_Balaclava_light_G_tropic_F0;
		model = "\A3\Characters_F_Exp\BLUFOR\G_Balaclava_TI_G_F.p3d";
		picture = "\A3_Aegis\Characters_F_Aegis\Facewear\Data\UI\icon_G_Balaclava_light_G_tropic_F_CA.paa";
		hiddenSelections[] =
		{
			camo1,
			camo2
		};
		hiddenSelectionsTextures[] =
		{
			"\A3_Aegis\Characters_F_Aegis\Facewear\Data\G_Balaclava_light_tropic_CO.paa",
			"\A3\Characters_F_Exp\BLUFOR\Data\G_Combat_Goggles_tna_F_CA.paa"
		};
		hiddenSelectionsMaterials[] =
		{
			"\A3_Aegis\Characters_F_Aegis\Facewear\Data\G_Balaclava_light.rvmat",
			"\A3\Characters_F\Heads\Glasses\Data\G_Combat.rvmat"
		};
		identityTypes[] =
		{
			NoGlasses,0,
			G_T_NATO_SF,25
		};
		mass = 10;
	};
	class G_Balaclava_light_G_eaf_F: G_Balaclava_light_eaf_F
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgGlasses_G_Balaclava_light_G_eaf_F0;
		model = "\A3\Characters_F_Exp\BLUFOR\G_Balaclava_TI_G_F.p3d";
		picture = "\A3_Aegis\Characters_F_Aegis\Facewear\Data\UI\icon_G_Balaclava_light_G_eaf_F_CA.paa";
		hiddenSelections[] =
		{
			camo1,
			camo2
		};
		hiddenSelectionsTextures[] =
		{
			"\A3_Aegis\Characters_F_Aegis\Facewear\Data\G_Balaclava_light_eaf_CO.paa",
			"\A3_Aegis\Characters_F_Aegis\Facewear\Data\G_Combat_Goggles_blk_F_CA.paa"
		};
		hiddenSelectionsMaterials[] =
		{
			"\A3_Aegis\Characters_F_Aegis\Facewear\Data\G_Balaclava_light.rvmat",
			"\A3\Characters_F\Heads\Glasses\Data\G_Combat.rvmat"
		};
		identityTypes[] =
		{
			G_EAF_default,25,
			NoGlasses,0
		};
		mass = 10;
	};
	class G_Balaclava_light_G_wdl_F: G_Balaclava_light_wdl_F
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgGlasses_G_Balaclava_light_G_wdl_F0;
		model = "\A3\Characters_F_Exp\BLUFOR\G_Balaclava_TI_G_F.p3d";
		picture = "\A3_Aegis\Characters_F_Aegis\Facewear\Data\UI\icon_G_Balaclava_light_G_wdl_F_CA.paa";
		hiddenSelections[] =
		{
			camo1,
			camo2
		};
		hiddenSelectionsTextures[] =
		{
			"\A3_Aegis\Characters_F_Aegis\Facewear\Data\G_Balaclava_light_wdl_CO.paa",
			"\A3_Aegis\Characters_F_Aegis\Facewear\Data\G_Combat_Goggles_blk_F_CA.paa"
		};
		hiddenSelectionsMaterials[] =
		{
			"\A3_Aegis\Characters_F_Aegis\Facewear\Data\G_Balaclava_light.rvmat",
			"\A3\Characters_F\Heads\Glasses\Data\G_Combat.rvmat"
		};
		identityTypes[] =
		{
			NoGlasses,0,
			G_W_NATO_SF,25
		};
		mass = 10;
	};

	/*Facewear versions of LoW Headsets*/
	class Aegis_G_Headset_black_F: None
	{
		author = $STR_A3_Bohemia_Interactive;
		displayName = $STR_A3_CfgWeapons_H_HeadSet_black_F0;
		model = "\A3\Characters_F_Orange\Headgear\H_HeadSet_F.p3d";
		picture = "\A3\Characters_F_Orange\Headgear\Data\UI\icon_H_HeadSet_black_F_CA.paa";
		hiddenSelections[] = {camo};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Orange\Headgear\Data\H_Construction_Black_CO.paa"};
		identityTypes[] = {};
		mass = 10;
	};
	class Aegis_G_Headset_red_F: Aegis_G_Headset_black_F
	{
		author = $STR_A3_Bohemia_Interactive;
		displayName = $STR_A3_CfgWeapons_H_HeadSet_red_F0;
		model = "\A3\Characters_F_Orange\Headgear\H_HeadSet_F.p3d";
		picture = "\A3\Characters_F_Orange\Headgear\Data\UI\icon_H_HeadSet_red_F_CA.paa";
		hiddenSelections[] = {camo};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Orange\Headgear\Data\H_Construction_red_CO.paa"};
		identityTypes[] = {};
		mass = 10;
	};
	class Aegis_G_Headset_orange_F: Aegis_G_Headset_black_F
	{
		author = $STR_A3_Bohemia_Interactive;
		displayName = $STR_A3_CfgWeapons_H_HeadSet_orange_F0;
		model = "\A3\Characters_F_Orange\Headgear\H_HeadSet_F.p3d";
		picture = "\A3\Characters_F_Orange\Headgear\Data\UI\icon_H_HeadSet_orange_F_CA.paa";
		hiddenSelections[] = {camo};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Orange\Headgear\Data\H_Construction_Orange_CO.paa"};
		identityTypes[] = {};
		mass = 10;
	};
	class Aegis_G_Headset_white_F: Aegis_G_Headset_black_F
	{
		author = $STR_A3_Bohemia_Interactive;
		displayName = $STR_A3_CfgWeapons_H_HeadSet_white_F0;
		model = "\A3\Characters_F_Orange\Headgear\H_HeadSet_F.p3d";
		picture = "\A3\Characters_F_Orange\Headgear\Data\UI\icon_H_HeadSet_white_F_CA.paa";
		hiddenSelections[] = {camo};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Orange\Headgear\Data\H_Construction_white_CO.paa"};
		identityTypes[] = {};
		mass = 10;
	};
	class Aegis_G_Headset_Yellow_F: Aegis_G_Headset_black_F
	{
		author = $STR_A3_Bohemia_Interactive;
		displayName = $STR_A3_CfgWeapons_H_HeadSet_Yellow_F0;
		model = "\A3\Characters_F_Orange\Headgear\H_HeadSet_F.p3d";
		picture = "\A3\Characters_F_Orange\Headgear\Data\UI\icon_H_HeadSet_Yellow_F_CA.paa";
		hiddenSelections[] = {camo};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Orange\Headgear\Data\H_Construction_Yellow_CO.paa"};
		identityTypes[] = {};
		mass = 10;
	};
	class Aegis_G_Headset_Olive_F: Aegis_G_Headset_black_F
	{
		author = $STR_A3_A_POLPOX;
		displayName = $STR_A3_A_CfgWeapons_H_HeadSet_olive_F0;
		model = "\A3\Characters_F_Orange\Headgear\H_HeadSet_F.p3d";
		picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_HeadSet_olive_F_CA.paa";
		hiddenSelections[] = {camo};
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_Construction_Olive_CO.paa"};
		identityTypes[] = {};
		mass = 10;
	};
	class Aegis_G_Headset_Sand_F: Aegis_G_Headset_black_F
	{
		author = $STR_A3_A_POLPOX;
		displayName = $STR_A3_A_CfgWeapons_H_HeadSet_Sand_F0;
		model = "\A3\Characters_F_Orange\Headgear\H_HeadSet_F.p3d";
		picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_HeadSet_Sand_F_CA.paa";
		hiddenSelections[] = {camo};
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_Construction_Sand_CO.paa"};
		identityTypes[] = {};
		mass = 10;
	};

	/* Condor EyePro*/
	class Aegis_G_Condor_EyePro_F: None
	{
		author = $STR_A3_A_JC980;
		scope = public;
		scopeArsenal = public;
		displayName = $STR_A3_A_CfgGlasses_G_Condor_EyePro_F0;
		model = "\A3_Aegis\Characters_F_Aegis\Facewear\G_Condor_EyePro.p3d";
		picture = "\A3_Aegis\Characters_F_Aegis\Facewear\Data\UI\icon_Aegis_G_Condor_EyePro_F_CA.paa";
		hiddenSelections[] =
		{
			camo
		};
		descriptionShort = $STR_A3_SP_noarmor;
		hiddenSelectionsTextures[] = 
		{
			"\A3_Aegis\Characters_F_Aegis\Facewear\Data\condor_eyepro_co.paa"
		};
		identityTypes[] = {NoGlasses,0};
		mass = 6;
	};

	/* Armbands */
	class Aegis_G_Armband_BLU_F: None
	{
		author = $STR_A3_A_Jamie;
		scope = public;
		scopeArsenal = public;
		displayName = $STR_A3_A_CfgGlasses_G_Armband_BLU_F0;
		model = "\A3_Aegis\Characters_F_Aegis\Facewear\G_Armband.p3d";
		picture = "\A3_Aegis\Characters_F_Aegis\Facewear\Data\UI\icon_Aegis_G_Armband_BLU_F_CA.paa";
		hiddenSelections[] =
		{
			camo
		};
		descriptionShort = $STR_A3_SP_noarmor;
		hiddenSelectionsTextures[] = 
		{
			"\A3_Aegis\Characters_F_Aegis\Facewear\Data\G_Armband_blu_CO.paa"
		};
		identityTypes[] = {NoGlasses,0};
		mass = 6;
	};
	class Aegis_G_Armband_IND_F: Aegis_G_Armband_BLU_F
	{
		author = $STR_A3_A_Jamie;
		scope = public;
		scopeArsenal = public;
		displayName = $STR_A3_A_CfgGlasses_G_Armband_IND_F0;
		picture = "\A3_Aegis\Characters_F_Aegis\Facewear\Data\UI\icon_Aegis_G_Armband_IND_F_CA.paa";
		hiddenSelectionsTextures[] = 
		{
			"\A3_Aegis\Characters_F_Aegis\Facewear\Data\G_Armband_indep_CO.paa"
		};
		identityTypes[] = {NoGlasses,0};
	};
	class Aegis_G_Armband_OPF_F: Aegis_G_Armband_BLU_F
	{
		author = $STR_A3_A_Jamie;
		scope = public;
		scopeArsenal = public;
		displayName = $STR_A3_A_CfgGlasses_G_Armband_OPF_F0;
		picture = "\A3_Aegis\Characters_F_Aegis\Facewear\Data\UI\icon_Aegis_G_Armband_OPF_F_CA.paa";
		hiddenSelectionsTextures[] = 
		{
			"\A3_Aegis\Characters_F_Aegis\Facewear\Data\G_Armband_opf_CO.paa"
		};
		identityTypes[] = {NoGlasses,0};
	};
	class Aegis_G_Armband_Medic_F: Aegis_G_Armband_BLU_F
	{
		author = $STR_A3_A_Jamie;
		scope = public;
		scopeArsenal = public;
		displayName = $STR_A3_A_CfgGlasses_G_Armband_Medic_F0;
		picture = "\A3_Aegis\Characters_F_Aegis\Facewear\Data\UI\icon_Aegis_G_Armband_Medic_F_CA.paa";
		hiddenSelectionsTextures[] = 
		{
			"\A3_Aegis\Characters_F_Aegis\Facewear\Data\G_Armband_Medic_CO.paa"
		};
		identityTypes[] = {NoGlasses,0};
	};
	class Aegis_G_Armband_CSAT_F: Aegis_G_Armband_BLU_F
	{
		author = $STR_A3_A_Jamie;
		scope = public;
		scopeArsenal = public;
		displayName = $STR_A3_A_CfgGlasses_G_Armband_CSAT_F0;
		picture = "\A3_Aegis\Characters_F_Aegis\Facewear\Data\UI\icon_Aegis_G_Armband_CSAT_F_CA.paa";
		hiddenSelectionsTextures[] = 
		{
			"\A3_Aegis\Characters_F_Aegis\Facewear\Data\G_Armband_csat_CO.paa"
		};
		identityTypes[] = {NoGlasses,0};
	};
	class Aegis_G_Armband_FIA_F: Aegis_G_Armband_BLU_F
	{
		author = $STR_A3_A_Jamie;
		scope = public;
		scopeArsenal = public;
		displayName = $STR_A3_A_CfgGlasses_G_Armband_FIA_F0;
		picture = "\A3_Aegis\Characters_F_Aegis\Facewear\Data\UI\icon_Aegis_G_Armband_FIA_F_CA.paa";
		hiddenSelectionsTextures[] = 
		{
			"\A3_Aegis\Characters_F_Aegis\Facewear\Data\G_Armband_FIA_CO.paa"
		};
		identityTypes[] = {NoGlasses,0};
	};
	class Aegis_G_Armband_IDAP_F: Aegis_G_Armband_BLU_F
	{
		author = $STR_A3_A_Jamie;
		scope = public;
		scopeArsenal = public;
		displayName = $STR_A3_A_CfgGlasses_G_Armband_IDAP_F0;
		picture = "\A3_Aegis\Characters_F_Aegis\Facewear\Data\UI\icon_Aegis_G_Armband_IDAP_F_CA.paa";
		hiddenSelectionsTextures[] = 
		{
			"\A3_Aegis\Characters_F_Aegis\Facewear\Data\G_Armband_IDAP_CO.paa"
		};
		identityTypes[] = {NoGlasses,0};
	};
	class Aegis_G_Armband_BLU_alt_F: Aegis_G_Armband_BLU_F
	{
		author = $STR_A3_A_Jamie;
		scope = public;
		scopeArsenal = public;
		displayName = $STR_A3_A_CfgGlasses_G_Armband_BLU_alt_F0;
		model = "\A3_Aegis\Characters_F_Aegis\Facewear\G_Armband_alt.p3d";
		picture = "\A3_Aegis\Characters_F_Aegis\Facewear\Data\UI\icon_Aegis_G_Armband_BLU_F_CA.paa";
		identityTypes[] = {NoGlasses,0};
	};
	class Aegis_G_Armband_IND_alt_F: Aegis_G_Armband_BLU_alt_F
	{
		author = $STR_A3_A_Jamie;
		scope = public;
		scopeArsenal = public;
		displayName = $STR_A3_A_CfgGlasses_G_Armband_IND_alt_F0;
		picture = "\A3_Aegis\Characters_F_Aegis\Facewear\Data\UI\icon_Aegis_G_Armband_IND_F_CA.paa";
		hiddenSelectionsTextures[] = 
		{
			"\A3_Aegis\Characters_F_Aegis\Facewear\Data\G_Armband_indep_CO.paa"
		};
		identityTypes[] = {NoGlasses,0};
	};
	class Aegis_G_Armband_OPF_alt_F: Aegis_G_Armband_BLU_alt_F
	{
		author = $STR_A3_A_Jamie;
		scope = public;
		scopeArsenal = public;
		displayName = $STR_A3_A_CfgGlasses_G_Armband_OPF_alt_F0;
		picture = "\A3_Aegis\Characters_F_Aegis\Facewear\Data\UI\icon_Aegis_G_Armband_OPF_F_CA.paa";
		hiddenSelectionsTextures[] = 
		{
			"\A3_Aegis\Characters_F_Aegis\Facewear\Data\G_Armband_opf_CO.paa"
		};
		identityTypes[] = {NoGlasses,0};
	};
	class Aegis_G_Armband_Medic_alt_F: Aegis_G_Armband_BLU_alt_F
	{
		author = $STR_A3_A_Jamie;
		scope = public;
		scopeArsenal = public;
		displayName = $STR_A3_A_CfgGlasses_G_Armband_Medic_alt_F0;
		picture = "\A3_Aegis\Characters_F_Aegis\Facewear\Data\UI\icon_Aegis_G_Armband_Medic_F_CA.paa";
		hiddenSelectionsTextures[] = 
		{
			"\A3_Aegis\Characters_F_Aegis\Facewear\Data\G_Armband_Medic_CO.paa"
		};
		identityTypes[] = {NoGlasses,0};
	};
	class Aegis_G_Armband_CSAT_alt_F: Aegis_G_Armband_BLU_alt_F
	{
		author = $STR_A3_A_Jamie;
		scope = public;
		scopeArsenal = public;
		displayName = $STR_A3_A_CfgGlasses_G_Armband_CSAT_alt_F0;
		picture = "\A3_Aegis\Characters_F_Aegis\Facewear\Data\UI\icon_Aegis_G_Armband_CSAT_F_CA.paa";
		hiddenSelectionsTextures[] = 
		{
			"\A3_Aegis\Characters_F_Aegis\Facewear\Data\G_Armband_csat_CO.paa"
		};
		identityTypes[] = {NoGlasses,0};
	};
	class Aegis_G_Armband_FIA_alt_F: Aegis_G_Armband_BLU_alt_F
	{
		author = $STR_A3_A_Jamie;
		scope = public;
		scopeArsenal = public;
		displayName = $STR_A3_A_CfgGlasses_G_Armband_FIA_alt_F0;
		picture = "\A3_Aegis\Characters_F_Aegis\Facewear\Data\UI\icon_Aegis_G_Armband_FIA_F_CA.paa";
		hiddenSelectionsTextures[] = 
		{
			"\A3_Aegis\Characters_F_Aegis\Facewear\Data\G_Armband_FIA_CO.paa"
		};
		identityTypes[] = {NoGlasses,0};
	};
	class Aegis_G_Armband_IDAP_alt_F: Aegis_G_Armband_BLU_alt_F
	{
		author = $STR_A3_A_Jamie;
		scope = public;
		scopeArsenal = public;
		displayName = $STR_A3_A_CfgGlasses_G_Armband_IDAP_alt_F0;
		picture = "\A3_Aegis\Characters_F_Aegis\Facewear\Data\UI\icon_Aegis_G_Armband_IDAP_F_CA.paa";
		hiddenSelectionsTextures[] = 
		{
			"\A3_Aegis\Characters_F_Aegis\Facewear\Data\G_Armband_IDAP_CO.paa"
		};
		identityTypes[] = {NoGlasses,0};
	};
	class Aegis_G_Armband_UNO_F: Aegis_G_Armband_BLU_F
	{
		author = $STR_A3_A_Jamie;
		scope = public;
		scopeArsenal = public;
		displayName = "Armband [UN]";
		picture = "\A3_Aegis\Characters_F_Aegis\Facewear\Data\UI\icon_Aegis_G_Armband_UNO_F_CA.paa";
		hiddenSelectionsTextures[] = 
		{
			"\A3_Aegis\Characters_F_Aegis\Facewear\Data\G_Armband_uno_CO.paa"
		};
		identityTypes[] = {NoGlasses,0};
	};
	class Aegis_G_Armband_UNO_alt_F: Aegis_G_Armband_BLU_alt_F
	{
		author = $STR_A3_A_Jamie;
		scope = public;
		scopeArsenal = public;
		displayName = "Armband [UN] (Alt)";
		picture = "\A3_Aegis\Characters_F_Aegis\Facewear\Data\UI\icon_Aegis_G_Armband_UNO_F_CA.paa";
		hiddenSelectionsTextures[] = 
		{
			"\A3_Aegis\Characters_F_Aegis\Facewear\Data\G_Armband_uno_CO.paa"
		};
		identityTypes[] = {NoGlasses,0};
	};
	class Aegis_G_Armband_UNL_F: Aegis_G_Armband_BLU_F
	{
		author = $STR_A3_A_Jamie;
		scope = public;
		scopeArsenal = public;
		displayName = "Armband [UN] (Logo)";
		picture = "\A3_Aegis\Characters_F_Aegis\Facewear\Data\UI\icon_Aegis_G_Armband_UNL_F_CA.paa";
		hiddenSelectionsTextures[] = 
		{
			"\A3_Aegis\Characters_F_Aegis\Facewear\Data\G_Armband_unl_CO.paa"
		};
		identityTypes[] = {NoGlasses,0};
	};
	class Aegis_G_Armband_UNL_alt_F: Aegis_G_Armband_BLU_alt_F
	{
		author = $STR_A3_A_Jamie;
		scope = public;
		scopeArsenal = public;
		displayName = "Armband [UN] (Alt, Logo)";
		picture = "\A3_Aegis\Characters_F_Aegis\Facewear\Data\UI\icon_Aegis_G_Armband_UNL_F_CA.paa";
		hiddenSelectionsTextures[] = 
		{
			"\A3_Aegis\Characters_F_Aegis\Facewear\Data\G_Armband_unl_CO.paa"
		};
		identityTypes[] = {NoGlasses,0};
	};

	/* Scrim Nets */
	class Aegis_G_scrimNet_olive_F: None
	{
		author = $STR_A3_A_POLPOX;
		scope = public;
		scopeArsenal = public;
		displayName = $STR_A3_A_CfgGlasses_G_ScrimNet_olive_F0;
		picture = "\A3_Aegis\Characters_F_Aegis\Facewear\Data\UI\icon_Aegis_G_scrimNet_olive_F_CA.paa";
		model = "A3_Aegis\characters_f_aegis\Facewear\G_scrimNet_overHelmet.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = 
		{
			"A3_Aegis\characters_f_aegis\Facewear\Data\scrimNet_olive_ca.paa"
		};
		identityTypes[] = {NoGlasses,0};
	};
	class Aegis_G_scrimNet_sand_F: Aegis_G_scrimNet_olive_F
	{
		author = $STR_A3_A_POLPOX;
		displayName = $STR_A3_A_CfgGlasses_G_ScrimNet_sand_F0;
		picture = "\A3_Aegis\Characters_F_Aegis\Facewear\Data\UI\icon_Aegis_G_scrimNet_sand_F_CA.paa";
		hiddenSelectionsTextures[] = 
		{
			"A3_Aegis\characters_f_aegis\Facewear\Data\scrimNet_sand_ca.paa"
		};
	};
	class Aegis_G_scrimNet_black_F: Aegis_G_scrimNet_olive_F
	{
		author = $STR_A3_A_POLPOX;
		displayName = $STR_A3_A_CfgGlasses_G_ScrimNet_black_F0;
		picture = "\A3_Aegis\Characters_F_Aegis\Facewear\Data\UI\icon_Aegis_G_scrimNet_black_F_CA.paa";
		hiddenSelectionsTextures[] = 
		{
			"A3_Aegis\characters_f_aegis\Facewear\Data\scrimNet_black_ca.paa"
		};
	};
	class Aegis_G_scrimNet_under_olive_F: Aegis_G_scrimNet_olive_F
	{
		author = $STR_A3_A_POLPOX;
		displayName = $STR_A3_A_CfgGlasses_G_ScrimNet_under_olive_F0;
		picture = "\A3_Aegis\Characters_F_Aegis\Facewear\Data\UI\icon_Aegis_G_scrimNet_under_olive_F_CA.paa";
		model = "A3_Aegis\characters_f_aegis\Facewear\G_scrimNet_underHelmet.p3d";
	};
	class Aegis_G_scrimNet_under_sand_F: Aegis_G_scrimNet_under_olive_F
	{
		author = $STR_A3_A_POLPOX;
		displayName = $STR_A3_A_CfgGlasses_G_ScrimNet_under_sand_F0;
		picture = "\A3_Aegis\Characters_F_Aegis\Facewear\Data\UI\icon_Aegis_G_scrimNet_under_sand_F_CA.paa";
		hiddenSelectionsTextures[] = 
		{
			"A3_Aegis\characters_f_aegis\Facewear\Data\scrimNet_sand_ca.paa"
		};
	};
	class Aegis_G_scrimNet_under_black_F: Aegis_G_scrimNet_under_olive_F
	{
		author = $STR_A3_A_POLPOX;
		displayName = $STR_A3_A_CfgGlasses_G_ScrimNet_under_black_F0;
		picture = "\A3_Aegis\Characters_F_Aegis\Facewear\Data\UI\icon_Aegis_G_scrimNet_under_black_F_CA.paa";
		hiddenSelectionsTextures[] = 
		{
			"A3_Aegis\characters_f_aegis\Facewear\Data\scrimNet_black_ca.paa"
		};
	};
	
	/* Facewear slot Bullet Bandolier */
	/*class Aegis_G_Ammo_Bandolier_F: None
	{
		author = $STR_A3_A_POLPOX;
		scope = public;
		scopeArsenal = public;
		displayName = $STR_A3_A_CfgWeapons_V_Ammo_Bandolier_F0;	
		picture = "\A3_Aegis\Characters_F_Aegis\Vests\Data\UI\icon_Aegis_V_Ammo_Bandolier_F_ca.paa";
		model = "\A3_Aegis\Characters_F_Aegis\Vests\Aegis_Ammobelt.p3d";
		identityTypes[] = {NoGlasses,0};
	};*/
};
