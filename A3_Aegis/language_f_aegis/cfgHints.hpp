class CfgHintCategories
{
	class AegisAssets
	{
		displayName = $STR_A3_A_AegisAssets0;
		logicalOrder = 41;
	};
};
class CfgHints
{
	/*class FactionList
	{
		displayName = $STR_A3_A_FactionList0;
		logicalOrder = 22;
		category = Assets;
		class NATO
		{
			displayName = $STR_A3_A_NATO1;
			description = $STR_A3_A_NATO0;
			tip = "";
			arguments[] = {};
			image = "\A3_Aegis\UI_F_Aegis\Data\CfgHints\NATO_CA.paa";
			logicalOrder = 9;
		};
		class AAF
		{
			displayName = $STR_A3_A_AAF1;
			description = $STR_A3_A_AAF0;
			tip = "";
			arguments[] = {};
			image = "\A3_Aegis\UI_F_Aegis\Data\CfgHints\AAF_CA.paa";
			logicalOrder = 1;
		};
		class CSAT
		{
			displayName = $STR_A3_A_CSAT1;
			description = $STR_A3_A_CSAT0;
			tip = "";
			arguments[] = {};
			image = "\A3_Aegis\UI_F_Aegis\Data\CfgHints\CSAT_CA.paa";
			logicalOrder = 3;
		};
		class FIA
		{
			displayName = $STR_A3_A_FIA1;
			description = $STR_A3_A_FIA0;
			tip = "";
			arguments[] = {};
			image = "\A3_Aegis\UI_F_Aegis\Data\CfgHints\FIA_CA.paa";
			logicalOrder = 4;
		};
		class Syndicate
		{
			displayName = $STR_A3_A_Syndicate1;
			description = $STR_A3_A_Syndicate0;
			tip = "";
			arguments[] = {};
			image = "\A3_Aegis\UI_F_Aegis\Data\CfgHints\Syndicate_CA.paa";
			logicalOrder = 11;
		};
		class Gendarmerie
		{
			displayName = $STR_A3_A_Gendarmerie1;
			description = $STR_A3_A_Gendarmerie0;
			tip = "";
			arguments[] = {};
			image = "\A3_Aegis\UI_F_Aegis\Data\CfgHints\Gendarmerie_CA.paa";
			logicalOrder = 11;
		};
		class IDAP
		{
			displayName = $STR_A3_A_IDAP1;
			description = $STR_A3_A_IDAP0;
			tip = "";
			arguments[] = {};
			image = "\A3_Aegis\UI_F_Aegis\Data\CfgHints\IDAP_CA.paa";
			logicalOrder = 6;
		};
		class Spetsnaz
		{
			displayName = $STR_A3_A_Spetsnaz1;
			description = $STR_A3_A_Spetsnaz0;
			tip = "";
			arguments[] = {};
			image = "\A3_Aegis\UI_F_Aegis\Data\CfgHints\Spetsnaz_CA.paa";
			logicalOrder = 10;
		};
		class ION
		{
			displayName = $STR_A3_A_ION1;
			description = $STR_A3_A_ION0;
			tip = "";
			arguments[] = {};
			image = "\A3_Aegis\UI_F_Aegis\Data\CfgHints\ION_CA.paa";
			logicalOrder = 7;
		};
	};*/
	class WeaponList
	{
		/* From "\A3\Language_F\config.cpp" */
		class gaAutomatic
		{
			arguments[] =
            {
                {STR_A3_A_CfgWeapons_LMG_Mk200_F0},
                {STR_A3_A_CfgWeapons_LMG_Mk200_F_Library0}
            };
		};

		/* From "\A3\Language_F_Enoch\config.cpp" */
		class MSBS65
		{
			image = "\A3\UI_F\Data\GUI\cfg\hints\Rifle_CA.paa";
			weapon = arifle_MSBS65_F;
		};
		class HunterShotgun_01
		{
			image = "\A3\UI_F\Data\GUI\cfg\hints\Shotguns_CA.paa";
		};
	};
	class AegisWeaponList
	{
		displayName = $STR_A3_A_AegisWeapons0;
		logicalOrder = 10;
		category = AegisAssets;
		/* From "\A3_Aegis\Language_F_Aegis\config.cpp" */
		class AKM74
		{
			displayName = %11;
			description = %12;
			tip = "";
			arguments[] =
			{
				{STR_A3_A_CfgWeapons_arifle_AK74_F0},
				{STR_A3_A_CfgWeapons_arifle_AKM74_base_F_Library0}
			};
			image = "\A3\UI_F\Data\GUI\cfg\hints\Rifle_CA.paa";
			weapon = Aegis_arifle_AK74_F;
			logicalOrder = 2;
		};
		class KSG
		{
			displayName = %11;
			description = %12;
			tip = "";
			arguments[] =
			{
				{STR_A3_A_CfgWeapons_sgun_KSG_F0},
				{STR_A3_A_CfgWeapons_sgun_KSG_F_Library0}
			};
			image = "\A3\UI_F\Data\GUI\cfg\hints\Shotguns_CA.paa";
			weapon = sgun_KSG_F;
			logicalOrder = 8;
		};
		class G17
		{
			displayName = %11;
			description = %12;
			tip = "";
			arguments[] =
			{
				{STR_A3_A_CfgWeapons_hgun_G17_F0},
				{STR_A3_A_CfgWeapons_hgun_G17_F_Library0}
			};
			image = "\A3\UI_F\Data\GUI\cfg\hints\Handgun_CA.paa";
			weapon = hgun_G17_F;
			logicalOrder = 42;
		};
		class Aegis_GPMG
		{
			displayName = %11;
			description = %12;
			tip = "";
			arguments[] =
			{
				{STR_A3_A_CfgWeapons_Aegis_FNMAG_F0},
				{STR_A3_A_CfgWeapons_arifle_FNMAG_base_F_Library0}
			};
			image = "\a3\ui_f\data\gui\cfg\hints\Automatic_ca.paa";
			weapon = Aegis_MMG_FNMAG_F;
			logicalOrder = 46;
		};
		class SA80
		{
			displayName = %11;
			description = %12;
			tip = "";
			arguments[] =
			{
				{STR_A3_A_CfgWeapons_arifle_SA80_base_F0},
				{STR_A3_A_CfgWeapons_arifle_SA80_base_F_Library0}
			};
			image = "\A3\UI_F\Data\GUI\cfg\hints\Rifle_CA.paa";
			weapon = arifle_SA80_blk_F;
			logicalOrder = 67;
		};
		class M16A4
		{
			displayName = %11;
			description = %12;
			tip = "";
			arguments[] =
			{
				{STR_A3_A_CfgWeapons_arifle_M16A4_F0},
				{STR_A3_A_CfgWeapons_arifle_M16_base_F_Library0}
			};
			image = "\A3\UI_F\Data\GUI\cfg\hints\Rifle_CA.paa";
			weapon = Aegis_arifle_M16A4_GL_F;
			logicalOrder = 70;
		};
		class M32
		{
			displayName = %11;
			description = %12;
			tip = "";
			arguments[] =
			{
				{STR_A3_A_CfgWeapons_GL_M32_F0},
				{STR_A3_A_CfgWeapons_GL_M32_F_Library0}
			};
			image = "\A3_Aegis\UI_F_Aegis\Data\CfgHints\GL_CA.paa";
			weapon = GL_M32_F;
			logicalOrder = 71;
		};
		class M4
		{
			displayName = %11;
			description = %12;
			tip = "";
			arguments[] =
			{
				{STR_A3_A_CfgWeapons_sgun_M4_F0},
				{STR_A3_A_CfgWeapons_sgun_M4_F_Library0}
			};
			image = "\A3\UI_F\Data\GUI\cfg\hints\Shotguns_CA.paa";
			weapon = sgun_M4_F;
			logicalOrder = 75;
		};
		class M4A1
		{
			displayName = %11;
			description = %12;
			tip = "";
			arguments[] =
			{
				{STR_A3_A_CfgWeapons_arifle_M4A1_F0},
				{STR_A3_A_CfgWeapons_arifle_M4A1_base_F_Library0}
			};
			image = "\A3\UI_F\Data\GUI\cfg\hints\Rifle_CA.paa";
			weapon = Aegis_arifle_M4A1_Grip_F;
			logicalOrder = 76;
		};
		class SR25
		{
			displayName = %11;
			description = %12;
			tip = "";
			arguments[] =
			{
				{STR_A3_A_CfgWeapons_arifle_SR25_F0},
				{STR_A3_A_CfgWeapons_arifle_SR25_base_F_Library0}
			};
			image = "\A3\UI_F\Data\GUI\cfg\hints\Rifle_CA.paa";
			weapon = Aegis_arifle_SR25_blk_F;
			logicalOrder = 78;
		};
		class Mk26
		{
			displayName = %11;
			description = %12;
			tip = "";
			arguments[] =
			{
				{STR_A3_A_CfgWeapons_hgun_Mk26_F0},
				{STR_A3_A_CfgWeapons_hgun_Mk26_F_Library0}
			};
			image = "\A3\UI_F\Data\GUI\cfg\hints\Handgun_CA.paa";
			weapon = hgun_Mk26_F;
			logicalOrder = 81;
		};
		class Mp153
		{
			displayName = %11;
			description = %12;
			tip = "";
			arguments[] =
			{
				{STR_A3_A_CfgWeapons_sgun_Mp153_black_F0},
				{STR_A3_A_CfgWeapons_sgun_Mp153_black_F_Library0}
			};
			image = "\A3\UI_F\Data\GUI\cfg\hints\Shotguns_CA.paa";
			weapon = sgun_Mp153_classic_F;
			logicalOrder = 7;
		};
		class SMG_04
		{
			displayName = %11;
			description = %12;
			tip = "";
			arguments[] =
			{
				{STR_A3_A_CfgWeapons_SMG_04_base_F0},
				{STR_A3_A_CfgWeapons_SMG_04_base_F_Library0}
			};
			image = "\A3\UI_F\Data\GUI\cfg\hints\Rifles_CA.paa";
			weapon = SMG_04_blk_F;
			logicalOrder = 82;
		};
		class Aegis_RPK762
		{
			displayName = %11;
			description = %12;
			tip = "";
			arguments[] =
			{
				{STR_A3_A_CfgWeapons_arifle_RPK_base_F0},
				{STR_A3_A_CfgWeapons_arifle_RPK_base_F_Library0}
			};
			image = "\A3\UI_F\Data\GUI\cfg\hints\Rifle_CA.paa";
			weapon = arifle_RPK_F;
			logicalOrder = 102;
		};
		class XM25
		{
			displayName = %11;
			description = %12;
			tip = "";
			arguments[] =
			{
				{STR_A3_A_CfgWeapons_GL_XM25_F0},
				{STR_A3_A_CfgWeapons_GL_XM25_F_Library0}
			};
			image = "\A3_Aegis\UI_F_Aegis\Data\CfgHints\GL_CA.paa";
			weapon = GL_XM25_F;
			logicalOrder = 98;
		};
		class SCARL
		{
			displayName = %11;
			description = %12;
			tip = "";
			arguments[] =
			{
				{STR_A3_A_CfgWeapons_arifle_SCAR_L_F0},
				{STR_A3_A_CfgWeapons_arifle_SCAR_L_base_F_Library0}
			};
			image = "\A3\UI_F\Data\GUI\cfg\hints\Rifle_CA.paa";
			weapon = arifle_SCAR_L_F;
			logicalOrder = 79;
		};
		class SCAR
		{
			displayName = %11;
			description = %12;
			tip = "";
			arguments[] =
			{
				{STR_A3_A_CfgWeapons_arifle_SCAR_F0},
				{STR_A3_A_CfgWeapons_arifle_SCAR_base_F_Library0}
			};
			image = "\A3\UI_F\Data\GUI\cfg\hints\Rifle_CA.paa";
			weapon = arifle_SCAR_F;
			logicalOrder = 80;
		};
		class Aegis_P320
		{
			displayName = %11;
			description = %12;
			tip = "";
			arguments[] =
			{
				{STR_A3_A_CfgWeapons_hgun_P320_base_F0},
				{STR_A3_A_CfgWeapons_hgun_P320_F_Library0}
			};
			image = "\A3\UI_F\Data\GUI\cfg\hints\Handgun_CA.paa";
			weapon = Aegis_hgun_P320_black_F;
			logicalOrder = 89;
		};
		class Aegis_RP57
		{
			displayName = %11;
			description = %12;
			tip = "";
			arguments[] =
			{
				{STR_A3_A_CfgWeapons_hgun_Pistol_R57_base_F0},
				{STR_A3_A_CfgWeapons_hgun_Pistol_R57_F_Library0}
			};
			image = "\A3\UI_F\Data\GUI\cfg\hints\Handgun_CA.paa";
			weapon = Aegis_hgun_Pistol_R57_F;
			logicalOrder = 101;
		};
		class Aegis_SMG_Gepard
		{
			displayName = %11;
			description = %12;
			tip = "";
			arguments[] =
			{
				{STR_A3_A_CfgWeapons_SMG_Gepard_base_F0},
				{STR_A3_A_CfgWeapons_SMG_Gepard_base_F_Library0}
			};
			image = "\A3\UI_F\Data\GUI\cfg\hints\Rifles_CA.paa";
			weapon = Aegis_SMG_Gepard_blk_F;
			logicalOrder = 95;
		};
		class Aegis_SVD
		{
			displayName = %11;
			description = %12;
			tip = "";
			arguments[] =
			{
				{STR_A3_A_CfgWeapons_srifle_SVD_F0},
				{STR_A3_A_CfgWeapons_srifle_SVD_base_F_Library0}
			};
			image = "\A3\UI_F\Data\GUI\cfg\hints\Rifle_CA.paa";
			weapon = Aegis_srifle_SVD_f;
			logicalOrder = 124;
		};
		/*class VektorSR1
		{
			displayName = %11;
			description = %12;
			tip = "";
			arguments[] =
			{
				{STR_A3_A_CfgWeapons_hgun_VektorSR1_F0},
				{STR_A3_A_CfgWeapons_hgun_VektorSR1_F_Library0}
			};
			image = "\A3\UI_F\Data\GUI\cfg\hints\Handgun_CA.paa";
			weapon = Aegis_hgun_VektorSR1_F;
			logicalOrder = 120;
		};*/
	};
	class AegisVehicleList
	{
		displayName = $STR_A3_A_AegisVehicles0;
		logicalOrder = 12;
		category = AegisAssets;
		class Heli_Attack_03
		{
			displayName = %11;
			description = %12;
			tip = "";
			arguments[] =
			{
				{STR_A3_A_CfgVehicles_Heli_Attack_03_base_F0},
				{STR_A3_A_CfgVehicles_Heli_Attack_03_base_F_Library0}
			};
			image = "\A3\UI_F\Data\GUI\cfg\hints\Miss_icon_CA.paa";
			vehicle = I_Heli_Attack_03_F;
			modelScale = 0.6;
			logicalOrder = 5;
		};
		class Heli_Attack_04
		{
			displayName = %11;
			description = %12;
			tip = "";
			arguments[] =
			{
				{STR_A3_A_CfgVehicles_Heli_Attack_04_base_F0},
				{STR_A3_A_CfgVehicles_Heli_Attack_04_base_F_Library0}
			};
			image = "\A3\UI_F\Data\GUI\cfg\hints\Miss_icon_CA.paa";
			vehicle = Aegis_O_A_Heli_Attack_04_F;
			modelScale = 0.6;
			logicalOrder = 20;
		};
		class Plane_Fighter_05
		{
			displayName = %11;
			description = %12;
			tip = "";
			arguments[] =
			{
				{STR_A3_A_CfgVehicles_Plane_Fighter_05_base_F0},
				{STR_A3_A_CfgVehicles_Plane_Fighter_05_base_F_Library0}
			};
			image = "\A3\UI_F\Data\GUI\cfg\hints\Miss_icon_CA.paa";
			vehicle = B_Plane_Fighter_05_F;
			modelScale = 0.4;
			logicalOrder = 15;
		};
		class Plane_Transport_01
		{
			displayName = %11;
			description = %12;
			tip = "";
			arguments[] =
			{
				{STR_A3_A_CfgVehicles_Plane_Transport_01_base_F0},
				{STR_A3_A_CfgVehicles_Plane_Transport_01_base_F_Library0}
			};
			image = "\A3\UI_F\Data\GUI\cfg\hints\Miss_icon_CA.paa";
			vehicle = B_Plane_Transport_01_infantry_F;
			modelScale = 0.3;
			logicalOrder = 10;
		};
		class APC_Wheeled_04
		{
			displayName = %11;
			description = %12;
			tip = "";
			arguments[] =
			{
				{STR_A3_A_CfgVehicles_APC_Wheeled_04_base_F0},
				{STR_A3_A_CfgVehicles_APC_Wheeled_04_base_F_Library0}
			};
			image = "\A3\UI_F\Data\GUI\cfg\hints\Miss_icon_CA.paa";
			vehicle = O_R_APC_Wheeled_04_cannon_F;
			logicalOrder = 8;
		};
		class APC_Wheeled_04_Nosorog
		{
			displayName = %11;
			description = %12;
			tip = "";
			arguments[] =
			{
				{STR_A3_A_CfgVehicles_APC_Wheeled_04_base_v2_F0},
				{STR_A3_A_CfgVehicles_APC_Wheeled_04_base_v2_F_Library0}
			};
			image = "\A3\UI_F\Data\GUI\cfg\hints\Miss_icon_CA.paa";
			vehicle = O_R_APC_Wheeled_04_cannon_v2_F;
			logicalOrder = 4;
		};
		class Boat_Civil_02
		{
			displayName = %11;
			description = %12;
			tip = "";
			arguments[] =
			{
				{STR_A3_A_CfgVehicles_Boat_Civil_02_base_F0},
				{STR_A3_A_CfgVehicles_Boat_Civil_02_base_F_Library0}
			};
			image = "\A3\UI_F\Data\GUI\cfg\hints\Miss_icon_CA.paa";
			vehicle = C_Boat_Civil_02_F;
			modelScale = 1.2;
			logicalOrder = 40;
		};
		class UAV_07
		{
			displayName = %11;
			description = %12;
			tip = "";
			arguments[] =
			{
				{STR_A3_A_CfgVehicles_B_UAV_07_base_F0},
				{STR_A3_A_CfgVehicles_UAV_07_base_F_Library0}
			};
			image = "\A3\UI_F\Data\GUI\cfg\hints\Miss_icon_CA.paa";
			vehicle = Aegis_B_A_UAV_07_F;
			modelScale = 0.6;
			logicalOrder = 24;
		};
	};
};