class CfgHints
{
	class FactionList
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
	};
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

		/* From "\A3_Aegis\Language_F_Aegis\config.cpp" */
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
			logicalOrder = 20;
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
			logicalOrder = 40;
		};
        /*
		class WF50
		{
			displayName = %11;
			description = %12;
			tip = "";
			arguments[] =
			{
				{STR_A3_A_CfgWeapons_srifle_WF50_F0},
				{STR_A3_A_CfgWeapons_srifle_WF50_F_Library0}
			};
			image = "\A3\UI_F\Data\GUI\cfg\hints\Ranged_CA.paa";
			weapon = srifle_WF50_F;
			logicalOrder = 57;
		};
        */
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
			logicalOrder = 35;
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
			logicalOrder = 28;
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
			logicalOrder = 45;
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
			logicalOrder = 45;
		};
		class AA40
		{
			displayName = %11;
			description = %12;
			tip = "";
			arguments[] =
			{
				{STR_A3_A_CfgWeapons_sgun_AA40_F0},
				{STR_A3_A_CfgWeapons_sgun_AA40_F_Library0}
			};
			image = "\A3\UI_F\Data\GUI\cfg\hints\Shotguns_CA.paa";
			weapon = sgun_AA40_F;
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
			logicalOrder = 17;
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
			logicalOrder = 32;
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
			logicalOrder = 17;
		};
	};
	class VehicleList
	{
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
			logicalOrder = 42;
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
			logicalOrder = 42;
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
			logicalOrder = 42;
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
			logicalOrder = 8;
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
			logicalOrder = 42;
		};
	};
};