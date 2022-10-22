class CfgWeapons
{
	/* Inheritance Tree */
	class ItemCore;
	class VestItem;

    /* Bases */
	class Vest_Camo_Base: ItemCore
	{
		class ItemInfo;
	};
	class Vest_NoCamo_Base: ItemCore
	{
		class ItemInfo;
	};

    /* Items */
	class V_Rangemaster_belt: Vest_NoCamo_Base
	{
		displayName = $STR_A3_A_CfgWeapons_V_Rangemaster_belt0;
		picture = "\A3_Aegis\Characters_F_Aegis\Vests\Data\UI\icon_V_Rangemaster_belt_CA.paa";
		hiddenSelections[] = {camo};
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Vests\Data\vests_rgr_CO.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {camo};
		};
	};
	class V_BandollierB_khk: Vest_Camo_Base
	{
		picture = "\A3\Characters_F\Data\UI\icon_V_Bandollier_khk_CA.paa";
	};
	class V_BandollierB_cbr: V_BandollierB_khk
	{
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Vests\Data\vests_cbr_CO.paa"};
	};
	class V_BandollierB_rgr: V_BandollierB_khk
	{
		picture = "\A3\Characters_F\Data\UI\icon_V_BandollierB_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Vests\Data\vests_rgr_CO.paa"};
	};
	class V_PlateCarrier1_rgr: Vest_NoCamo_Base
	{
		picture = "\A3_Aegis\Characters_F_Aegis\Vests\Data\UI\icon_V_PlateCarrier1_rgr_CA.paa";
		hiddenSelections[] = {camo};
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Vests\Data\vests_rgr_CO.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {camo};
		};
	};
	class V_PlateCarrier2_rgr: V_PlateCarrier1_rgr
	{
		picture = "\A3_Aegis\Characters_F_Aegis\Vests\Data\UI\icon_V_PlateCarrier2_rgr_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Vests\Data\vests_rgr_CO.paa"};
	};
	class V_PlateCarrier2_blk;
	class V_PlateCarrierGL_rgr: Vest_NoCamo_Base
	{
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Vests\Data\Carrier_GL_Rig_grn_CO.paa"};
	};
	class V_PlateCarrierGL_blk: V_PlateCarrierGL_rgr
	{
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Vests\Data\Carrier_GL_Rig_blk_CO.paa"};
	};
	class V_PlateCarrierGL_mtp: V_PlateCarrierGL_rgr
	{
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Vests\Data\Carrier_GL_Rig_mtp_CO.paa"};
	};
	class V_PlateCarrier1_blk;
	class V_PlateCarrierSpec_rgr: Vest_NoCamo_Base
	{
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Vests\Data\Carrier_GL_Rig_grn_CO.paa"};
	};
	class V_PlateCarrierSpec_blk: V_PlateCarrierSpec_rgr
	{
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Vests\Data\Carrier_GL_Rig_blk_CO.paa"};
	};
	class V_PlateCarrierSpec_mtp: V_PlateCarrierSpec_rgr
	{
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Vests\Data\Carrier_GL_Rig_mtp_CO.paa"};
	};
	class V_Chestrig_khk;
	class V_TacVest_khk;
	class V_TacVest_brn: V_TacVest_khk
	{
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Vests\Data\tacticalvest_brown_CO.paa"};
	};
	class V_TacVest_blk: V_TacVest_khk
	{
		picture = "\A3_Aegis\Characters_F_Aegis\Vests\Data\UI\icon_V_TacVest_blk_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Vests\Data\tacticalvest_black_CO.paa"};
		hiddenSelectionsMaterials[] = {"\A3_Aegis\Characters_F_Aegis\Vests\Data\tacticalvest.rvmat"};
	};
	class V_TacVest_camo: Vest_Camo_Base
	{
		picture = "\A3\Characters_F_EPB\Data\UI\icon_V_I_G_resistanceLeader_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_EPB\Common\Data\tacticalvest_camo_dark_CO.paa"};
		hiddenSelectionsMaterials[] = {"\A3_Aegis\Characters_F_Aegis\Vests\Data\tacticalvest.rvmat"};
    };
	class V_TacVest_blk_POLICE: Vest_Camo_Base
	{
		picture = "\A3_Aegis\Characters_F_Aegis\Vests\Data\UI\icon_V_TacVest_blk_POLICE_CA.paa";
	};
	class V_TacVestIR_blk: Vest_NoCamo_Base
	{
		scope = protected;
	};
	class V_HarnessO_brn: Vest_NoCamo_Base
	{
		displayName = $STR_A3_A_CfgWeapons_V_HarnessO_brn0;
		class ItemInfo;
	};
	class V_HarnessOGL_brn: Vest_NoCamo_Base
	{
		displayName = $STR_A3_A_CfgWeapons_V_HarnessOGL_brn0;
		class ItemInfo;
	};
	class V_HarnessO_gry: V_HarnessO_brn
	{
		class ItemInfo;
	};
	class V_HarnessOGL_gry;
	class V_HarnessOSpec_brn: V_HarnessO_brn
	{
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_V_HarnessOSpec_brn0;
		picture = "\A3_Aegis\Characters_F_Aegis\Vests\Data\UI\icon_V_HarnessOSpec_brn_CA.paa";
		model = "\A3\Characters_F_Beta\INDEP\equip_IR_Vest01.p3d";
		hiddenSelections[] =
		{
			Camo1,
			Camo2
		};
		descriptionShort = $STR_A3_SP_AL_II;
		hiddenSelectionsTextures[] =
		{
			"\A3\Characters_F\OPFOR\Data\clothing_CO.paa",
			"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\tech_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Characters_F_Beta\INDEP\equip_IR_Vest01.p3d";
			containerClass = Supply160;
			mass = 50;
			hiddenSelections[] =
			{
				Camo1,
				Camo2
			};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName = HitChest;
					armor = 12;
					passThrough = 0.4;
				};
				class Diaphragm
				{
					hitpointName = HitDiaphragm;
					armor = 12;
					passThrough = 0.4;
				};
				class Abdomen
				{
					hitpointName = HitAbdomen;
					armor = 12;
					passThrough = 0.4;
				};
				class Body
				{
					hitpointName = HitBody;
					passThrough = 0.4;
				};
			};
		};
	};
	class V_HarnessOSpec_gry: V_HarnessO_gry
	{
		scope = public;
		picture = "\A3_Aegis\Characters_F_Aegis\Vests\Data\UI\icon_V_HarnessOSpec_gry_CA.paa";
		model = "\A3\Characters_F_Beta\INDEP\equip_IR_Vest01.p3d";
		hiddenSelections[] =
		{
			Camo1,
			Camo2
		};
		descriptionShort = $STR_A3_SP_AL_II;
		hiddenSelectionsTextures[] =
		{
			"\A3\Characters_F\OPFOR\Data\clothing_oucamo_CO.paa",
			"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\tech_oucamo_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Characters_F_Beta\INDEP\equip_IR_Vest01.p3d";
			containerClass = Supply140;
			mass = 50;
			hiddenSelections[] =
			{
				Camo1,
				Camo2
			};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName = HitChest;
					armor = 12;
					passThrough = 0.4;
				};
				class Diaphragm
				{
					hitpointName = HitDiaphragm;
					armor = 12;
					passThrough = 0.4;
				};
				class Abdomen
				{
					hitpointName = HitAbdomen;
					armor = 12;
					passThrough = 0.4;
				};
				class Body
				{
					hitpointName = HitBody;
					passThrough = 0.4;
				};
			};
		};
	};
	class V_PlateCarrierIA1_dgtl: Vest_Camo_Base
	{
		hiddenSelections[] = {camo};
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Vests\Data\equip_IA_Vest01_CO.paa"};
		class ItemInfo: VestItem
		{
			hiddenSelections[] = {camo};
		};
	};
	class V_PlateCarrierIA2_dgtl: V_PlateCarrierIA1_dgtl
	{
		hiddenSelections[] = {camo};
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Vests\Data\equip_IA_Vest01_CO.paa"};
		class ItemInfo: VestItem
		{
			hiddenSelections[] = {camo};
		};
	};
	class V_PlateCarrierIAGL_dgtl: V_PlateCarrierIA2_dgtl
	{
		hiddenSelectionsTextures[] =
		{
			"\A3_Aegis\Characters_F_Aegis\Vests\Data\equip_IA_Vest01_CO.paa",
			"\A3_Aegis\Characters_F_Aegis\Vests\Data\GA_Carrier_GL_Rig_digi_CO.paa"
		};
	};
	class V_PlateCarrierIAGL_oli: V_PlateCarrierIAGL_dgtl
	{
		picture = "\A3_Aegis\Characters_F_Aegis\Vests\Data\UI\icon_V_PlateCarrierIAGL_oli_CA.paa";
		hiddenSelectionsTextures[] =
		{
			"\A3_Aegis\Characters_F_Aegis\Vests\Data\equip_IA_Vest01_oli_CO.paa",
			"\A3_Aegis\Characters_F_Aegis\Vests\Data\GA_Carrier_GL_Rig_oli_CO.paa"
		};
	};
	class V_RebreatherB;
	// Arma 3 Apex
	class V_PlateCarrier1_tna_F: V_PlateCarrier1_blk
	{
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Vests\Data\V_PlateCarrier1_tna_F_CO.paa"};
	};
	class V_PlateCarrier2_tna_F: V_PlateCarrier2_blk
	{
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Vests\Data\V_PlateCarrier1_tna_F_CO.paa"};
	};
	class V_PlateCarrierSpec_tna_F: V_PlateCarrierSpec_rgr
	{
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Vests\Data\V_PlateCarrierGL_tna_F_CO.paa"};
	};
	class V_PlateCarrierGL_tna_F: V_PlateCarrierGL_rgr
	{
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Vests\Data\V_PlateCarrierGL_tna_F_CO.paa"};
	};
	class V_BandollierB_ghex_F: V_BandollierB_khk
	{
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Vests\Data\V_BandollierB_ghex_F_CO.paa"};
	};
	// Arma 3 Enoch
	class V_CarrierRigKBT_01_base_F: Vest_Camo_Base
	{
		class ItemInfo;
	};
	class V_CarrierRigKBT_01_light_base_F;
	class V_CarrierRigKBT_01_heavy_base_F: V_CarrierRigKBT_01_base_F
	{
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = HitNeck;
					armor = 8;
					passThrough = 0.5;
				};
				class Arms
				{
					hitpointName = HitArms;
					armor = 8;
					passThrough = 0.5;
				};
				class Chest
				{
					hitpointName = HitChest;
					armor = 78;
					passThrough = 0.6;
				};
				class Diaphragm
				{
					hitpointName = HitDiaphragm;
					armor = 78;
					passThrough = 0.6;
				};
				class Abdomen
				{
					hitpointName = HitAbdomen;
					armor = 16;
					passThrough = 0.3;
				};
				class Pelvis
				{
					hitpointName = HitPelvis;
					armor = 16;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = HitBody;
					passThrough = 0.6;
				};
			};
		};
	};
	class V_CarrierRigKBT_01_Olive_F;
	class V_CarrierRigKBT_01_light_Olive_F;
	class V_CarrierRigKBT_01_heavy_Olive_F;
	class V_SmershVest_01_base_F;
	class V_SmershVest_01_radio_base_F;
	class V_SmershVest_01_F: V_SmershVest_01_base_F
	{
		displayName = $STR_A3_A_CfgWeapons_V_SmershVest_01_F0;
	};
	class V_SmershVest_01_radio_F: V_SmershVest_01_radio_base_F
	{
		displayName = $STR_A3_A_CfgWeapons_V_SmershVest_01_radio_F0;
	};
	class V_PlateCarrier1_wdl: V_PlateCarrier1_blk
	{
		picture = "\A3_Aegis\Characters_F_Aegis\Vests\Data\UI\icon_V_PlateCarrier1_wdl_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Vests\Data\vests_wdl_CO.paa"};
	};
	class V_PlateCarrier2_wdl: V_PlateCarrier2_blk
	{
		picture = "\A3_Aegis\Characters_F_Aegis\Vests\Data\UI\icon_V_PlateCarrier2_wdl_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Vests\Data\vests_wdl_CO.paa"};
	};
	class V_PlateCarrierGL_wdl: V_PlateCarrierGL_rgr
	{
		picture = "\A3_Aegis\Characters_F_Aegis\Vests\Data\UI\icon_V_PlateCarrierGL_wdl_CA.paa";
	};
	class V_PlateCarrierSpec_wdl: V_PlateCarrierSpec_rgr
	{
		picture = "\A3_Aegis\Characters_F_Aegis\Vests\Data\UI\icon_V_PlateCarrierSpec_wdl_CA.paa";
	};
	// Arma 3 Aegis
	class V_Rangemaster_belt_khk: V_Rangemaster_belt
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_V_Rangemaster_belt_khk0;
		picture = "\A3_Aegis\Characters_F_Aegis\Vests\Data\UI\icon_V_Rangemaster_belt_khk_CA.paa";
		hiddenSelectionsTextures[] = {"\A3\Characters_F\BLUFOR\Data\vests_khk_CO.paa"};
	};
	class V_Rangemaster_belt_cbr: V_Rangemaster_belt
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_V_Rangemaster_belt_cbr0;
		picture = "\A3_Aegis\Characters_F_Aegis\Vests\Data\UI\icon_V_Rangemaster_belt_cbr_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Vests\Data\vests_cbr_CO.paa"};
	};
	class V_Rangemaster_belt_blk: V_Rangemaster_belt
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_V_Rangemaster_belt_blk0;
		picture = "\A3_Aegis\Characters_F_Aegis\Vests\Data\UI\icon_V_Rangemaster_belt_blk_CA.paa";
		hiddenSelectionsTextures[] = {"\A3\Characters_F\BLUFOR\Data\vests_blk_CO.paa"};
	};
	class V_Rangemaster_belt_oli: V_Rangemaster_belt
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_V_Rangemaster_belt_oli0;
		picture = "\A3_Aegis\Characters_F_Aegis\Vests\Data\UI\icon_V_Rangemaster_belt_oli_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Vests\Data\vests_oli_CO.paa"};
	};
	class V_PlateCarrier1_cbr: V_PlateCarrier1_rgr
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_V_PlateCarrier1_cbr0;
		picture = "\A3_Aegis\Characters_F_Aegis\Vests\Data\UI\icon_V_PlateCarrier1_cbr_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Vests\Data\vests_cbr_CO.paa"};
	};
	class V_PlateCarrier2_cbr: V_PlateCarrier2_rgr
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_V_PlateCarrier2_cbr0;
		picture = "\A3_Aegis\Characters_F_Aegis\Vests\Data\UI\icon_V_PlateCarrier2_cbr_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Vests\Data\vests_cbr_CO.paa"};
	};
	class V_PlateCarrier1_mtp: V_PlateCarrier1_rgr
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_V_PlateCarrier1_mtp0;
		picture = "\A3_Aegis\Characters_F_Aegis\Vests\Data\UI\icon_V_PlateCarrier1_mtp_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Vests\Data\vests_mtp_CO.paa"};
	};
	class V_PlateCarrier2_mtp: V_PlateCarrier2_rgr
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_V_PlateCarrier2_mtp0;
		picture = "\A3_Aegis\Characters_F_Aegis\Vests\Data\UI\icon_V_PlateCarrier2_mtp_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Vests\Data\vests_mtp_CO.paa"};
	};
	class V_PlateCarrier1_khk: V_PlateCarrier1_rgr
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_V_PlateCarrier1_khk0;
		picture = "\A3_Aegis\Characters_F_Aegis\Vests\Data\UI\icon_V_PlateCarrier1_khk_CA.paa";
		hiddenSelectionsTextures[] = {"\A3\Characters_F\BLUFOR\Data\vests_khk_CO.paa"};
	};
	class V_PlateCarrier2_khk: V_PlateCarrier2_rgr
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_V_PlateCarrier2_khk0;
		picture = "\A3_Aegis\Characters_F_Aegis\Vests\Data\UI\icon_V_PlateCarrier2_khk_CA.paa";
		hiddenSelectionsTextures[] = {"\A3\Characters_F\BLUFOR\Data\vests_khk_CO.paa"};
	};
	class V_PlateCarrier1_oli: V_PlateCarrier1_rgr
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_V_PlateCarrier1_oli0;
		picture = "\A3_Aegis\Characters_F_Aegis\Vests\Data\UI\icon_V_PlateCarrier1_oli_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Vests\Data\vests_oli_CO.paa"};
	};
	class V_PlateCarrier2_oli: V_PlateCarrier2_rgr
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_V_PlateCarrier2_oli0;
		picture = "\A3_Aegis\Characters_F_Aegis\Vests\Data\UI\icon_V_PlateCarrier2_oli_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Vests\Data\vests_oli_CO.paa"};
	};
	class V_PlateCarrierGL_cbr: V_PlateCarrierGL_rgr
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_V_PlateCarrierGL_cbr0;
		picture = "\A3_Aegis\Characters_F_Aegis\Vests\Data\UI\icon_V_PlateCarrierGL_cbr_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Vests\Data\Carrier_GL_Rig_cbr_CO.paa"};
	};
	class V_PlateCarrierSpec_cbr: V_PlateCarrierSpec_rgr
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_V_PlateCarrierSpec_cbr0;
		picture = "\A3_Aegis\Characters_F_Aegis\Vests\Data\UI\icon_V_PlateCarrierSpec_cbr_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Vests\Data\Carrier_GL_Rig_cbr_CO.paa"};
	};
	class V_ChestrigF_khk: Vest_Camo_Base
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_V_ChestrigB_khk0;
		picture = "\A3_Aegis\Characters_F_Aegis\Vests\Data\UI\icon_V_ChestrigF_khk_CA.paa";
		model = "\A3\Characters_F\Common\equip_chestrig_light.p3d";
		hiddenSelections[] = {camo1};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\equip_chestrig_khk_CO.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Characters_F\Common\equip_chestrig_light.p3d";
			containerClass = Supply140;
			mass = 10;
			hiddenSelections[] = {camo1};
		};
	};
	class V_ChestrigF_rgr: V_ChestrigF_khk
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_V_ChestrigB_rgr0;
		picture = "\A3_Aegis\Characters_F_Aegis\Vests\Data\UI\icon_V_ChestrigF_rgr_CA.paa";
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\equip_chestrig_rgr_CO.paa"};
	};
	class V_ChestrigF_blk: V_ChestrigF_khk
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_V_ChestrigB_blk0;
		picture = "\A3_Aegis\Characters_F_Aegis\Vests\Data\UI\icon_V_ChestrigF_blk_CA.paa";
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\equip_chestrig_blk_CO.paa"};
	};
	class V_ChestrigF_oli: V_ChestrigF_khk
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_V_ChestrigF_oli0;
		picture = "\A3_Aegis\Characters_F_Aegis\Vests\Data\UI\icon_V_ChestrigF_oli_CA.paa";
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\equip_chestrig_oli_CO.paa"};
	};
	class V_TacVest_gry: V_TacVest_khk
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_V_TacVest_gry0;
		picture = "\A3\Characters_F\Data\UI\icon_V_TacVest_blk_CA.paa";
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\tacticalvest_black_CO.paa"};
	};
	class V_HarnessO_blk: V_HarnessO_gry
	{
		author = $STR_A3_A_AveryTheKitty;
		picture = "\A3_Aegis\Characters_F_Aegis\Vests\Data\UI\icon_V_HarnessO_blk_CA.paa";
		displayName = $STR_A3_A_CfgWeapons_V_HarnessO_blk0;
		hiddenSelectionsTextures[] =
		{
			"\A3\Characters_F\OPFOR\Data\clothing_rus_CO.paa",
			"\A3\Characters_F\OPFOR\Data\tech_rus_CO.paa"
		};
	};
	class V_HarnessOGL_blk: V_HarnessOGL_brn
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_V_HarnessOGL_blk0;
		picture = "\A3_Aegis\Characters_F_Aegis\Vests\Data\UI\icon_V_HarnessOGL_blk_CA.paa";
		hiddenSelections[] =
		{
			camo1,
			camo2
		};
		hiddenSelectionsTextures[] =
		{
			"\A3\Characters_F\OPFOR\Data\clothing_rus_CO.paa",
			"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\tech_rus_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] =
			{
				camo1,
				camo2
			};
		};
	};
	class V_HarnessO_oicamo: V_HarnessO_gry
	{
		author = $STR_A3_A_AveryTheKitty;
		picture = "\A3_Aegis\Characters_F_Aegis\Vests\Data\UI\icon_V_HarnessO_oicamo_CA.paa";
		displayName = $STR_A3_A_CfgWeapons_V_HarnessO_oicamo0;
		hiddenSelectionsTextures[] =
		{
			"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\clothing_oicamo_CO.paa",
			"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\tech_oicamo_CO.paa"
		};
	};
	class V_HarnessOGL_oicamo: V_HarnessOGL_brn
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_V_HarnessOGL_oicamo0;
		picture = "\A3_Aegis\Characters_F_Aegis\Vests\Data\UI\icon_V_HarnessOGL_oicamo_CA.paa";
		hiddenSelections[] =
		{
			camo1,
			camo2
		};
		hiddenSelectionsTextures[] =
		{
			"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\clothing_oicamo_CO.paa",
			"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\tech_oicamo_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] =
			{
				camo1,
				camo2
			};
		};
	};
	class V_HarnessOSpec_blk: V_HarnessOSpec_brn
	{
		author = $STR_A3_A_AveryTheKitty;
		picture = "\A3_Aegis\Characters_F_Aegis\Vests\Data\UI\icon_V_HarnessOSpec_blk_CA.paa";
		displayName = $STR_A3_A_CfgWeapons_V_HarnessOSpec_blk0;
		hiddenSelectionsTextures[] =
		{
			"\A3\Characters_F\OPFOR\Data\clothing_rus_CO.paa",
			"\A3\Characters_F\OPFOR\Data\tech_rus_CO.paa"
		};
	};
	class V_HarnessOSpec_oicamo: V_HarnessOSpec_brn
	{
		author = $STR_A3_A_AveryTheKitty;
		picture = "\A3_Aegis\Characters_F_Aegis\Vests\Data\UI\icon_V_HarnessOSpec_oicamo_CA.paa";
		displayName = $STR_A3_A_CfgWeapons_V_HarnessOSpec_oicamo0;
		hiddenSelectionsTextures[] =
		{
			"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\clothing_oicamo_CO.paa",
			"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\tech_oicamo_CO.paa"
		};
	};
	class V_PlateCarrierIA1_oli: V_PlateCarrierIA1_dgtl
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_V_PlateCarrierIA1_oli0;
		picture = "\A3_Aegis\Characters_F_Aegis\Vests\Data\UI\icon_V_PlateCarrierIA1_oli_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Vests\Data\equip_IA_Vest01_oli_CO.paa"};
	};
	class V_PlateCarrierIA1_khk: V_PlateCarrierIA1_dgtl
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_V_PlateCarrierIA1_khk0;
		picture = "\A3_Aegis\Characters_F_Aegis\Vests\Data\UI\icon_V_PlateCarrierIA1_khk_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Vests\Data\equip_IA_Vest01_khk_CO.paa"};
	};
	class V_PlateCarrierIA2_oli: V_PlateCarrierIA2_dgtl
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_V_PlateCarrierIA2_oli0;
		picture = "\A3_Aegis\Characters_F_Aegis\Vests\Data\UI\icon_V_PlateCarrierIA2_oli_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Vests\Data\equip_IA_Vest01_oli_CO.paa"};
	};
	class V_PlateCarrierIA2_khk: V_PlateCarrierIA2_dgtl
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_V_PlateCarrierIA2_khk0;
		picture = "\A3_Aegis\Characters_F_Aegis\Vests\Data\UI\icon_V_PlateCarrierIA2_khk_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Vests\Data\equip_IA_Vest01_khk_CO.paa"};
	};
	class V_PlateCarrierIAGL_khk: V_PlateCarrierIAGL_dgtl
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_V_PlateCarrierIAGL_khk0;
		picture = "\A3_Aegis\Characters_F_Aegis\Vests\Data\UI\icon_V_PlateCarrierIAGL_khk_CA.paa";
		hiddenSelectionsTextures[] =
		{
			"\A3_Aegis\Characters_F_Aegis\Vests\Data\equip_IA_Vest01_khk_CO.paa",
			"\A3_Aegis\Characters_F_Aegis\Vests\Data\GA_Carrier_GL_Rig_khk_CO.paa"
		};
	};
	class V_Rangemaster_belt_tna_F: V_Rangemaster_belt
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_V_Rangemaster_belt_tna_F0;
		picture = "\A3_Aegis\Characters_F_Aegis\Vests\Data\UI\icon_V_Rangemaster_belt_tna_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Vests\Data\V_PlateCarrier1_tna_F_CO.paa"};
	};
	class V_Rangemaster_belt_ghex_F: V_Rangemaster_belt
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_V_Rangemaster_belt_ghex_F0;
		picture = "\A3_Aegis\Characters_F_Aegis\Vests\Data\UI\icon_V_Rangemaster_belt_ghex_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Vests\Data\V_BandollierB_ghex_F_CO.paa"};
	};
	class V_HarnessOSpec_ghex_F: V_HarnessOSpec_brn
	{
		author = $STR_A3_A_AveryTheKitty;
		picture = "\A3_Aegis\Characters_F_Aegis\Vests\Data\UI\icon_V_HarnessOSpec_ghex_F_CA.paa";
		displayName = $STR_A3_A_CfgWeapons_V_HarnessOSpec_ghex_F0;
		hiddenSelectionsTextures[] =
		{
			"\A3\Characters_F_Exp\OPFOR\Data\clothing_tna_CO.paa",
			"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\tech_tna_CO.paa"
		};
	};
	class V_BandollierB_tna_F: V_BandollierB_khk
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_V_BandollierB_tna_F0;
		picture = "\A3_Aegis\Characters_F_Aegis\Vests\Data\UI\icon_V_BandollierB_tna_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Vests\Data\V_PlateCarrier1_tna_F_CO.paa"};
	};
	class V_PlateCarrierL_CTRG_grn_F: V_PlateCarrier1_rgr
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_V_PlateCarrierL_CTRG_grn_F0;
		picture = "\A3_Aegis\Characters_F_Aegis\Vests\Data\UI\icon_V_PlateCarrierL_CTRG_grn_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Vests\Data\vests_snake_CO.paa"};
	};
	class V_PlateCarrierH_CTRG_grn_F: V_PlateCarrier2_rgr
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_V_PlateCarrierH_CTRG_grn_F0;
		picture = "\A3_Aegis\Characters_F_Aegis\Vests\Data\UI\icon_V_PlateCarrierH_CTRG_grn_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Vests\Data\vests_snake_CO.paa"};
	};
	class V_CarrierRigKBT_01_Black_F: V_CarrierRigKBT_01_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_V_CarrierRigKBT_01_Black_F0;
		picture = "\A3_Aegis\Characters_F_Aegis\Vests\Data\UI\icon_V_CarrierRigKBT_01_Black_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Vests\Data\CarrierRigKBT_01_Black_CO.paa"};
	};
	class V_CarrierRigKBT_01_light_Black_F: V_CarrierRigKBT_01_light_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_V_CarrierRigKBT_01_light_Black_F0;
		picture = "\A3_Aegis\Characters_F_Aegis\Vests\Data\UI\icon_V_CarrierRigKBT_01_light_Black_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Vests\Data\CarrierRigKBT_01_Black_CO.paa"};
	};
	class V_CarrierRigKBT_01_heavy_Black_F: V_CarrierRigKBT_01_heavy_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_V_CarrierRigKBT_01_heavy_Black_F0;
		picture = "\A3_Aegis\Characters_F_Aegis\Vests\Data\UI\icon_V_CarrierRigKBT_01_heavy_Black_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Vests\Data\CarrierRigKBT_01_Black_CO.paa"};
	};
	class V_CarrierRigKBT_01_Coyote_F: V_CarrierRigKBT_01_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_V_CarrierRigKBT_01_Coyote_F0;
		picture = "\A3_Aegis\Characters_F_Aegis\Vests\Data\UI\icon_V_CarrierRigKBT_01_Coyote_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Vests\Data\CarrierRigKBT_01_Coyote_CO.paa"};
	};
	class V_CarrierRigKBT_01_light_Coyote_F: V_CarrierRigKBT_01_light_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_V_CarrierRigKBT_01_light_Coyote_F0;
		picture = "\A3_Aegis\Characters_F_Aegis\Vests\Data\UI\icon_V_CarrierRigKBT_01_light_Coyote_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Vests\Data\CarrierRigKBT_01_Coyote_CO.paa"};
	};
	class V_CarrierRigKBT_01_heavy_Coyote_F: V_CarrierRigKBT_01_heavy_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_V_CarrierRigKBT_01_heavy_Coyote_F0;
		picture = "\A3_Aegis\Characters_F_Aegis\Vests\Data\UI\icon_V_CarrierRigKBT_01_heavy_Coyote_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Vests\Data\CarrierRigKBT_01_Coyote_CO.paa"};
	};
	class V_CarrierRigKBT_01_Khaki_F: V_CarrierRigKBT_01_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_V_CarrierRigKBT_01_Khaki_F0;
		picture = "\A3_Aegis\Characters_F_Aegis\Vests\Data\UI\icon_V_CarrierRigKBT_01_Khaki_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Vests\Data\CarrierRigKBT_01_Khaki_CO.paa"};
	};
	class V_CarrierRigKBT_01_light_Khaki_F: V_CarrierRigKBT_01_light_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_V_CarrierRigKBT_01_light_Khaki_F0;
		picture = "\A3_Aegis\Characters_F_Aegis\Vests\Data\UI\icon_V_CarrierRigKBT_01_light_Khaki_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Vests\Data\CarrierRigKBT_01_Khaki_CO.paa"};
	};
	class V_CarrierRigKBT_01_heavy_Khaki_F: V_CarrierRigKBT_01_heavy_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_V_CarrierRigKBT_01_heavy_Khaki_F0;
		picture = "\A3_Aegis\Characters_F_Aegis\Vests\Data\UI\icon_V_CarrierRigKBT_01_heavy_Khaki_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Vests\Data\CarrierRigKBT_01_Khaki_CO.paa"};
	};
	class V_CarrierRigKBT_01_MTP_F: V_CarrierRigKBT_01_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_V_CarrierRigKBT_01_MTP_F0;
		picture = "\A3_Aegis\Characters_F_Aegis\Vests\Data\UI\icon_V_CarrierRigKBT_01_MTP_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Vests\Data\CarrierRigKBT_01_MTP_CO.paa"};
	};
	class V_CarrierRigKBT_01_light_MTP_F: V_CarrierRigKBT_01_light_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_V_CarrierRigKBT_01_light_MTP_F0;
		picture = "\A3_Aegis\Characters_F_Aegis\Vests\Data\UI\icon_V_CarrierRigKBT_01_light_MTP_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Vests\Data\CarrierRigKBT_01_MTP_CO.paa"};
	};
	class V_CarrierRigKBT_01_heavy_MTP_F: V_CarrierRigKBT_01_heavy_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_V_CarrierRigKBT_01_heavy_MTP_F0;
		picture = "\A3_Aegis\Characters_F_Aegis\Vests\Data\UI\icon_V_CarrierRigKBT_01_heavy_MTP_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Vests\Data\CarrierRigKBT_01_MTP_CO.paa"};
	};
	class V_Rangemaster_belt_taiga_F: V_Rangemaster_belt
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_V_Rangemaster_belt_taiga_F0;
		picture = "\A3_Aegis\Characters_F_Aegis\Vests\Data\UI\icon_V_Rangemaster_belt_taiga_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Vests\Data\vests_RUtaiga_CO.paa"};
	};
	class V_BandollierB_taiga_F: V_BandollierB_khk
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_V_BandollierB_taiga_F0;
		picture = "\A3_Aegis\Characters_F_Aegis\Vests\Data\UI\icon_V_BandollierB_taiga_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Vests\Data\vests_RUtaiga_CO.paa"};
	};
	class V_TacVest_grn: V_TacVest_khk
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_V_TacVest_grn0;
		picture = "\A3_Aegis\Characters_F_Aegis\Vests\Data\UI\icon_V_TacVest_grn_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Vests\Data\tacticalvest_RUkhk_CO.paa"};
		hiddenSelectionsMaterials[] = {"\A3_Aegis\Characters_F_Aegis\Vests\Data\tacticalvest.rvmat"};
	};
	class V_RebreatherRU: V_RebreatherB
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_V_RebreatherRU0;
		picture = "\A3_Aegis\Characters_F_Aegis\Vests\Data\UI\icon_V_RebreatherRU_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\diver_equip_CO.paa"};
		hiddenUnderwaterSelectionsTextures[] =
		{
			"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\diver_equip_CO.paa",
			"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\diver_equip_CO.paa",
			"\A3\Characters_F\Data\visors_CA.paa"
		};
	};

    /* Deprecated */
    #include "deprecated.hpp"
};