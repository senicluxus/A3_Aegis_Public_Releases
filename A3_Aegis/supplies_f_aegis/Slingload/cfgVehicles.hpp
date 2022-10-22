class CfgVehicles
{
	class Slingload_01_Base_F;
	class B_Slingload_01_Cargo_F: Slingload_01_Base_F
	{
        /* Inventory */
		class TransportMagazines
		{
            mag_xx(30Rnd_65x39_caseless_mag,30);
            mag_xx(16Rnd_9x21_Mag,2);
            mag_xx(30Rnd_45ACP_Mag_SMG_01,6);
            delete _xx_20Rnd_762x51_Mag;
            mag_xx(100Rnd_65x39_caseless_mag,6);
            mag_xx(1Rnd_HE_Grenade_shell,3);
            mag_xx(3Rnd_HE_Grenade_shell,1);
            mag_xx(1Rnd_Smoke_Grenade_shell,2);
            mag_xx(1Rnd_SmokeGreen_Grenade_shell,2);
            mag_xx(chemlight_green,2);
            mag_xx(B_IR_Grenade,2);
            mag_xx(NLAW_F,3);
            mag_xx(Laserbatteries,1);
            mag_xx(HandGrenade,6);
            mag_xx(MiniGrenade,6);
            mag_xx(SmokeShell,2);
            mag_xx(SmokeShellGreen,2);
            mag_xx(UGL_FlareWhite_F,2);
            mag_xx(UGL_FlareGreen_F,2);
		};
		class TransportWeapons
		{
            weap_xx(launch_NLAW_F,1);
            weap_xx(arifle_MX_F,2);
            weap_xx(arifle_MX_SW_F,1);
            weap_xx(arifle_MX_GL_F,1);
            weap_xx(arifle_MXC_F,1);
            weap_xx(arifle_MXM_F,1);
        };
        class TransportItems
        {
            item_xx(FirstAidKit,10);
            item_xx(Laserdesignator,1);
            item_xx(acc_flashlight,5);
            delete _xx_bipod_01_F_blk;
            item_xx(Binocular,1);
            item_xx(optic_ACO,2);
            item_xx(optic_ACO_smg,1);
            item_xx(optic_Hamr,2);
            item_xx(optic_Holosight,2);
            item_xx(optic_Holosight_smg,1);
            item_xx(optic_SOS,1);
            item_xx(acc_pointer_IR,5);
            item_xx(Medikit,1);
            item_xx(ToolKit,1);
            item_xx(MineDetector,1);
            item_xx(bipod_01_F_snd,2);
            item_xx(NVGoggles,5);
        };
        class TransportBackpacks
        {
            delete _xx_B_Kitbag_mcamo;
            bag_xx(B_AssaultPack_mcamo,2);
		};
	};
};