/* FIA */
class IG_supplyCrate_F: ReammoBox_F
{
	hiddenSelectionsTextures[] = {"\A3_Aegis\Supplies_F_Aegis\Ammoboxes\Data\Supplydrop_IG_CO.paa"};
    editorSubcategory = EdSubcat_Ammo_FIA;

    /* Inventory */
	class TransportMagazines
	{
		mag_xx(30Rnd_556x45_Stanag,24);
		mag_xx(200Rnd_65x39_cased_Box,3);
		delete _xx_20Rnd_762x51_Mag;
		mag_xx(20Rnd_Mk14_762x51_Mag,6);
		mag_xx(1Rnd_HE_Grenade_shell,6);
		mag_xx(1Rnd_Smoke_Grenade_shell,2);
		mag_xx(1Rnd_SmokeGreen_Grenade_shell,2);
		mag_xx(chemlight_blue,2);
		mag_xx(RPG32_F,3);
		mag_xx(RPG32_HE_F,3);
		mag_xx(HandGrenade,6);
		mag_xx(MiniGrenade,6);
		mag_xx(SmokeShell,2);
		mag_xx(SmokeShellGreen,2);
		mag_xx(UGL_FlareWhite_F,2);
		mag_xx(UGL_FlareGreen_F,2);
	};
	class TransportWeapons
	{
		weap_xx(arifle_TRG20_F,1);
		weap_xx(arifle_TRG21_F,2);
		weap_xx(arifle_TRG21_GL_F,1);
		weap_xx(srifle_DMR_06_camo_F,1);
		delete _xx_srifle_DMR_06_olive_F;
		weap_xx(LMG_Mk200_F,1);
		weap_xx(launch_RPG32_F,1);
	};
	class TransportItems
	{
		delete _xx_V_Chestrig_oli;
		delete _xx_V_TacVest_blk;
		item_xx(FirstAidKit,10);
		item_xx(Binocular,1);
		delete _xx_Rangefinder;
		item_xx(acc_flashlight,5);
		item_xx(Medikit,1);
		item_xx(ToolKit,1);
		item_xx(bipod_03_F_oli,2);
	};
	class TransportBackpacks
	{
		bag_xx(B_TacticalPack_blk,2);
	};
};
class FIA_Box_Base_F;
class Box_FIA_Wps_F: FIA_Box_Base_F
{
    editorSubcategory = EdSubcat_Ammo_FIA;

    /* Inventory */
	class TransportMagazines
	{
		mag_xx(200Rnd_65x39_cased_Box,6);
		mag_xx(30Rnd_556x45_Stanag,42);
		mag_xx(1Rnd_HE_Grenade_shell,10);
		delete _xx_20Rnd_762x51_Mag;
		mag_xx(20Rnd_Mk14_762x51_Mag,12);
		mag_xx(RPG32_F,4);
		mag_xx(RPG32_HE_F,2);
	};
	class TransportWeapons
	{
		weap_xx(arifle_TRG20_F,2);
		weap_xx(arifle_TRG21_F,10);
		weap_xx(arifle_TRG21_GL_F,2);
		weap_xx(LMG_Mk200_F,2);
		weap_xx(launch_RPG32_F,2);
		weap_xx(srifle_DMR_06_camo_F,2);
	};
	class TransportItems{};
};
class Box_FIA_Ammo_F: FIA_Box_Base_F
{
    editorSubcategory = EdSubcat_Ammo_FIA;

    /* Inventory */
	class TransportMagazines
	{
		mag_xx(200Rnd_65x39_cased_Box,6);
		mag_xx(30Rnd_556x45_Stanag,42);
		delete _xx_30Rnd_556x45_Stanag_Tracer_Yellow;
		delete _xx_20Rnd_762x51_Mag;
		mag_xx(20Rnd_Mk14_762x51_Mag,12);
		mag_xx(HandGrenade,10);
		mag_xx(MiniGrenade,10);
		mag_xx(1Rnd_HE_Grenade_shell,10);
		mag_xx(Chemlight_blue,15);
		mag_xx(RPG32_F,4);
		mag_xx(RPG32_HE_F,2);
		mag_xx(SmokeShell,6);
		mag_xx(SmokeShellGreen,6);
		mag_xx(APERSTripMine_Wire_Mag,4);
		mag_xx(ClaymoreDirectionalMine_Remote_Mag,2);
		mag_xx(DemoCharge_Remote_Mag,2);
	};
	class TransportWeapons{};
	class TransportItems{};
};
class Box_FIA_Support_F: FIA_Box_Base_F
{
    editorSubcategory = EdSubcat_Ammo_FIA;

    /* Inventory */
	class TransportMagazines{};
	class TransportWeapons{};
	class TransportItems
	{
		item_xx(Binocular,1);
		delete _xx_Rangefinder;
		item_xx(FirstAidKit,10);
		item_xx(Medikit,1);
		item_xx(ToolKit,1);
		item_xx(MineDetector,1);
		item_xx(acc_flashlight,5);
		item_xx(acc_flashlight_pistol,2);
		item_xx(optic_ACO_grn,5);
		item_xx(optic_ACO_grn_smg,5);
		item_xx(optic_MRCO,2);
		item_xx(bipod_03_F_blk,2);
		item_xx(bipod_03_F_oli,2);
		item_xx(V_TacVest_blk,2);
		item_xx(V_Chestrig_blk,2);
		item_xx(V_ChestrigF_blk,2);
		item_xx(H_Shemag_olive,1);
		item_xx(G_Balaclava_blk,1);
		item_xx(G_Bandanna_blk,1);
	};
	class TransportBackpacks
	{
		delete _xx_B_Bergen_blk;
		bag_xx(B_TacticalPack_blk,2);
	};
};
