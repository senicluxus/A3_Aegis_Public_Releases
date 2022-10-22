class CfgVehicles
{
    /* Definitions */
    #include "\A3_Aegis\macros_itemHolders.hpp"

    /* Cartridges */
	class FxCartridge;
	class FxCartridge_pellets: FxCartridge
	{
		author = $STR_A3_A_AveryTheKitty;
		mapSize = 0.07;
		model = "\A3_Aegis\Weapons_F_Aegis\Ammo\cartridge_pellets.p3d";
	};
	class FxCartridge_25x40: FxCartridge
	{
		author = $STR_A3_A_AveryTheKitty;
		mapSize = 0.1;
		model = "\A3_Aegis\Weapons_F_Aegis\Ammo\cartridge_25x40.p3d";
	};

    /* Bases */
	class Weapon_Base_F;
	class Pistol_Base_F;
	class Launcher_Base_F;
	class Item_Base_F;

    /* Accessories */
	class Item_optic_MRD_black: Item_Base_F
	{
        editorSubcategory = EdSubcat_TopSlot_Collimators;
    };
	class Item_bipod_02_F_lush: Item_Base_F
	{
		displayName = $STR_A3_A_CfgWeapons_bipod_02_F_lush0;
	};
	class Item_bipod_02_F_arid: Item_Base_F
	{
		displayName = $STR_A3_A_CfgWeapons_bipod_02_F_arid0;
	};
	ACC_HOLDER(muzzle_snds_pistol_heavy_01,$STR_A3_A_CfgWeapons_muzzle_snds_pistol_heavy_010,EdCat_WeaponAttachments,EdSubcat_FrontSlot,WeaponAccessories);
	ACC_HOLDER(muzzle_snds_H_snd_F,$STR_A3_A_CfgWeapons_muzzle_snds_H_snd0,EdCat_WeaponAttachments,EdSubcat_FrontSlot,WeaponAccessories);
	ACC_HOLDER(muzzle_mzls_H,$STR_A3_A_CfgWeapons_muzzle_mzls_H0,EdCat_WeaponAttachments,EdSubcat_FrontSlot,WeaponAccessories);
	ACC_HOLDER(muzzle_mzls_L,$STR_A3_A_CfgWeapons_muzzle_mzls_L0,EdCat_WeaponAttachments,EdSubcat_FrontSlot,WeaponAccessories);
	ACC_HOLDER(muzzle_mzls_M,$STR_A3_A_CfgWeapons_muzzle_mzls_M0,EdCat_WeaponAttachments,EdSubcat_FrontSlot,WeaponAccessories);
	ACC_HOLDER(muzzle_mzls_B,$STR_A3_A_CfgWeapons_muzzle_mzls_B0,EdCat_WeaponAttachments,EdSubcat_FrontSlot,WeaponAccessories);
	ACC_HOLDER(muzzle_mzls_acp,$STR_A3_A_CfgWeapons_muzzle_mzls_acp0,EdCat_WeaponAttachments,EdSubcat_FrontSlot,WeaponAccessories);
	ACC_HOLDER(muzzle_mzls_smg_01,$STR_A3_A_CfgWeapons_muzzle_mzls_smg_010,EdCat_WeaponAttachments,EdSubcat_FrontSlot,WeaponAccessories);
	ACC_HOLDER(acc_o_FMS,"FMS",EdCat_WeaponAttachments,EdSubcat_TopSlot_Optics,WeaponAccessories);
	ACC_HOLDER(acc_flashlight_ir,"IR Flashlight",EdCat_WeaponAttachments,EdSubcat_SideSlot,WeaponAccessories);
	/*
    ACC_HOLDER(optic_srs,$STR_A3_A_CfgWeapons_optic_srs0,EdCat_WeaponAttachments,EdSubcat_TopSlot_Collimators,WeaponAccessories);
	*/
    ACC_HOLDER(optic_dcl,$STR_A3_A_CfgWeapons_optic_dcl0,EdCat_WeaponAttachments,EdSubcat_TopSlot_Collimators,WeaponAccessories);
	/*
	ACC_HOLDER(optic_ACOG,$STR_A3_A_CfgWeapons_optic_ACOG0,EdCat_WeaponAttachments,EdSubcat_TopSlot_Optics,WeaponAccessories);
	*/
	ACC_HOLDER(optic_tws_sniper,$STR_A3_CfgWeapons_optic_tws_sniper0,EdCat_WeaponAttachments,EdSubcat_TopSlot_Optics,WeaponAccessories);
	ACC_HOLDER(muzzle_snds_B_wdm_F,$STR_A3_A_CfgWeapons_muzzle_snds_B_wdm_F0,EdCat_WeaponAttachments,EdSubcat_FrontSlot,WeaponAccessories);
	ACC_HOLDER(muzzle_snds_408_black,$STR_A3_A_CfgWeapons_muzzle_snds_408_black0,EdCat_WeaponAttachments,EdSubcat_FrontSlot,WeaponAccessories);
	ACC_HOLDER(muzzle_snds_408_green,$STR_A3_A_CfgWeapons_muzzle_snds_408_green0,EdCat_WeaponAttachments,EdSubcat_FrontSlot,WeaponAccessories);
	ACC_HOLDER(muzzle_snds_408_sand,$STR_A3_A_CfgWeapons_muzzle_snds_408_sand0,EdCat_WeaponAttachments,EdSubcat_FrontSlot,WeaponAccessories);
	ACC_HOLDER(muzzle_snds_460,$STR_A3_A_CfgWeapons_muzzle_snds_4600,EdCat_WeaponAttachments,EdSubcat_FrontSlot,WeaponAccessories);
	ACC_HOLDER(muzzle_snds_545,$STR_A3_A_CfgWeapons_muzzle_snds_5450,EdCat_WeaponAttachments,EdSubcat_FrontSlot,WeaponAccessories);
	ACC_HOLDER(muzzle_snds_545_wdm_F,$STR_A3_A_CfgWeapons_muzzle_snds_545_wdm_F0,EdCat_WeaponAttachments,EdSubcat_FrontSlot,WeaponAccessories);
	ACC_HOLDER(muzzle_snds_545_lush_F,$STR_A3_A_CfgWeapons_muzzle_snds_545_lush_F0,EdCat_WeaponAttachments,EdSubcat_FrontSlot,WeaponAccessories);
	ACC_HOLDER(muzzle_snds_545_arid_F,$STR_A3_A_CfgWeapons_muzzle_snds_545_arid_F0,EdCat_WeaponAttachments,EdSubcat_FrontSlot,WeaponAccessories);
	ACC_HOLDER(muzzle_mzls_58_F,$STR_A3_A_CfgWeapons_muzzle_mzls_58_F0,EdCat_WeaponAttachments,EdSubcat_FrontSlot,WeaponAccessories);
	ACC_HOLDER(muzzle_mzls_545,$STR_A3_A_CfgWeapons_muzzle_mzls_5450,EdCat_WeaponAttachments,EdSubcat_FrontSlot,WeaponAccessories);
	ACC_HOLDER(optic_ACO_grn_AK_F,$STR_A3_A_CfgWeapons_optic_ACO_grn_AK_F0,EdCat_WeaponAttachments,EdSubcat_TopSlot_Collimators,WeaponAccessories);

    /* Binoculars */
	BINOC_HOLDER(Laserdesignator_02_blk_F,$STR_A3_A_CfgWeapons_Laserdesignator_02_blk_F0);
	BINOC_HOLDER(Laserdesignator_02_grn_F,$STR_A3_A_CfgWeapons_Laserdesignator_02_grn_F0);
	BINOC_HOLDER(Laserdesignator_04,$STR_A3_A_CfgWeapons_Laserdesignator_040);
	NVG_HOLDER(O_NVGoggles_blk_F,$STR_A3_A_CfgWeapons_O_NVGoggles_blk_F0);
	NVG_HOLDER(Goggles,$STR_A3_A_CfgWeapons_Goggles0);
	NVG_HOLDER(Goggles_tna_F,$STR_A3_A_CfgWeapons_Goggles_tna_F0);
	NVG_HOLDER(Goggles_grn_F,$STR_A3_A_CfgWeapons_Goggles_grn_F0);

    /* Launchers */
	LAUNCHER_HOLDER(launch_RPG32_camo_F,RPG32_F,$STR_A3_C_CfgWeapons_launch_RPG32_camo_F0);
	LAUNCHER_HOLDER(launch_RPG32_black_F,RPG32_F,$STR_A3_A_CfgWeapons_launch_RPG32_black_F0);
	LAUNCHER_HOLDER(launch_O_Titan_camo_F,Titan_AA,$STR_A3_A_CfgWeapons_launch_O_Titan_camo_F0);
	LAUNCHER_HOLDER(launch_Titan_blk_F,Titan_AA,$STR_A3_A_CfgWeapons_launch_Titan_blk_F0);
	LAUNCHER_HOLDER(launch_O_Titan_short_camo_F,Titan_AT,$STR_A3_A_CfgWeapons_launch_O_Titan_short_camo_F0);
	LAUNCHER_HOLDER(launch_Titan_short_blk_F,Titan_AT,$STR_A3_A_CfgWeapons_launch_Titan_short_blk_F0);
	LAUNCHER_HOLDER(launch_MRAWS_black_F,MRAWS_HEAT_F,$STR_A3_A_CfgWeapons_launch_MRAWS_black_F0);
	LAUNCHER_HOLDER(launch_MRAWS_black_rail_F,MRAWS_HEAT_F,$STR_A3_A_CfgWeapons_launch_MRAWS_black_rail_F0);

    /* Long Range Rifles */
	WEAPON_HOLDER(srifle_EBR_blk_F,20Rnd_762x51_Mag,$STR_A3_A_CfgWeapons_srifle_EBR_blk_F0,EdSubcat_SniperRifles);
	WEAPON_HOLDER(srifle_EBR_khk_F,20Rnd_762x51_Mag,$STR_A3_A_CfgWeapons_srifle_EBR_khk_F0,EdSubcat_SniperRifles);
	WEAPON_HOLDER(srifle_DMR_01_black_F,10Rnd_762x54_Mag,$STR_A3_A_CfgWeapons_srifle_DMR_01_black_F0,EdSubcat_SniperRifles);
	WEAPON_HOLDER(srifle_DMR_02_tna_F,10Rnd_338_Mag,$STR_A3_A_CfgWeapons_srifle_DMR_02_tna_F0,EdSubcat_SniperRifles);
	WEAPON_HOLDER(srifle_DMR_05_ghex_F,10Rnd_93x64_DMR_05_Mag,$STR_A3_A_CfgWeapons_srifle_DMR_05_ghex_F0,EdSubcat_SniperRifles);
	WEAPON_HOLDER(srifle_DMR_06_black_F,20Rnd_762x51_Mag,$STR_A3_A_CfgWeapons_srifle_DMR_06_black_F0,EdSubcat_SniperRifles);

    /* Machine Guns */
	class Weapon_LMG_Mk200_F: Weapon_Base_F
    {
        displayName = $STR_A3_A_CfgWeapons_LMG_Mk200_F0;
    };
	class Weapon_LMG_Mk200_black_F: Weapon_Base_F
    {
        displayName = $STR_A3_A_CfgWeapons_LMG_Mk200_black_F0;
    };
	WEAPON_HOLDER(LMG_Mk200_plain_F,200Rnd_65x39_cased_Box,$STR_A3_A_CfgWeapons_LMG_Mk200_plain_F0,EdSubcat_MachineGuns);
	WEAPON_HOLDER(LMG_Mk200_khk_F,200Rnd_65x39_cased_Box,$STR_A3_A_CfgWeapons_LMG_Mk200_khk_F0,EdSubcat_MachineGuns);
	WEAPON_HOLDER(LMG_Zafir_black_F,150Rnd_762x54_Box,$STR_A3_A_CfgWeapons_LMG_Zafir_black_F0,EdSubcat_MachineGuns);
	WEAPON_HOLDER(LMG_Zafir_ghex_F,150Rnd_762x54_Box,$STR_A3_A_CfgWeapons_LMG_Zafir_ghex_F0,EdSubcat_MachineGuns);
	WEAPON_HOLDER(MMG_01_black_F,150Rnd_93x64_Mag,$STR_A3_A_CfgWeapons_MMG_01_black_F0,EdSubcat_MachineGuns);
	WEAPON_HOLDER(MMG_01_ghex_F,150Rnd_93x64_Mag,$STR_A3_A_CfgWeapons_MMG_01_ghex_F0,EdSubcat_MachineGuns);
	WEAPON_HOLDER(MMG_02_khaki_F,130Rnd_338_Mag,$STR_A3_A_CfgWeapons_MMG_02_khaki_F0,EdSubcat_MachineGuns);

    /* Pistols */
	PISTOL_HOLDER(hgun_ACPC2_black_F,9Rnd_45ACP_Mag,$STR_A3_A_CfgWeapons_hgun_ACPC2_black_F0);
	PISTOL_HOLDER(hgun_Pistol_heavy_01_black_F,11Rnd_45ACP_Mag,$STR_A3_A_CfgWeapons_hgun_Pistol_heavy_01_black_F0);

    /* Rifles */
	WEAPON_HOLDER(arifle_Mk20_black_F,30Rnd_556x45_Stanag,$STR_A3_A_CfgWeapons_arifle_Mk20_black_F0,EdSubcat_AssaultRifles);
	WEAPON_HOLDER(arifle_Mk20_hex_F,30Rnd_556x45_Stanag,$STR_A3_A_CfgWeapons_arifle_Mk20_hex_F0,EdSubcat_AssaultRifles);
	WEAPON_HOLDER(arifle_Mk20C_black_F,30Rnd_556x45_Stanag,$STR_A3_A_CfgWeapons_arifle_Mk20C_black_F0,EdSubcat_AssaultRifles);
	WEAPON_HOLDER(arifle_Mk20C_hex_F,30Rnd_556x45_Stanag,$STR_A3_A_CfgWeapons_arifle_Mk20C_hex_F0,EdSubcat_AssaultRifles);
	WEAPON_HOLDER(arifle_Mk20_GL_black_F,30Rnd_556x45_Stanag,$STR_A3_A_CfgWeapons_arifle_Mk20_GL_black_F0,EdSubcat_AssaultRifles);
	WEAPON_HOLDER(arifle_Mk20_GL_hex_F,30Rnd_556x45_Stanag,$STR_A3_A_CfgWeapons_arifle_Mk20_GL_hex_F0,EdSubcat_AssaultRifles);
	WEAPON_HOLDER(arifle_TRG21_black_F,30Rnd_556x45_Stanag,$STR_A3_A_CfgWeapons_arifle_TRG21_black_F0,EdSubcat_AssaultRifles);
	WEAPON_HOLDER(arifle_TRG20_black_F,30Rnd_556x45_Stanag,$STR_A3_A_CfgWeapons_arifle_TRG20_black_F0,EdSubcat_AssaultRifles);
	WEAPON_HOLDER(arifle_TRG21_GL_black_F,30Rnd_556x45_Stanag,$STR_A3_A_CfgWeapons_arifle_TRG21_GL_black_F0,EdSubcat_AssaultRifles);

    /* Shotguns */
	class Weapon_sgun_HunterShotgun_01_F: Weapon_Base_F
    {
		editorSubcategory = EdSubcat_Shotguns;
    };
	class Weapon_sgun_HunterShotgun_01_sawedoff_F: Weapon_Base_F
    {
		editorSubcategory = EdSubcat_Shotguns;
    };

    /* SMGs */
    class Weapon_SMG_05_F;
	WEAPON_HOLDER(SMG_01_black_F,30Rnd_45ACP_Mag_SMG_01,$STR_A3_A_CfgWeapons_SMG_01_black_F0,EdSubcat_SubMachineGuns);
	WEAPON_HOLDER(SMG_01_khk_F,30Rnd_45ACP_Mag_SMG_01,$STR_A3_A_CfgWeapons_SMG_01_khk_F0,EdSubcat_SubMachineGuns);

    /* Misc */
	class OM_Electro;
	class Item_CSAToperatorAccesCard_01: OM_Electro
	{
		scope = public;
		scopeCurator = public;
	};
	class Item_CSAToperatorAccesCard_02: OM_Electro
	{
		scope = public;
		scopeCurator = public;
	};
	class Item_CSAToperatorAccesCard_03: OM_Electro
	{
		scope = public;
		scopeCurator = public;
	};
	class Item_CSAToperatorAccesCard_04: OM_Electro
	{
		scope = public;
		scopeCurator = public;
	};
	class Item_CSAToperatorAccesCard_05: OM_Electro
	{
		scope = public;
		scopeCurator = public;
	};

    /* Deprecated */
    DEPRECATED_CLASS(Weapon_hgun_C1911_F,Weapon_hgun_ACPC2_black_F);
    DEPRECATED_CLASS(Weapon_SMG_05_snd_F,Weapon_SMG_05_F);
};