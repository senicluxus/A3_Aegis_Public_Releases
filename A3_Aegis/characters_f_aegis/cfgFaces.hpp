class CfgFaces
{
	class Default;
	class Man_A3: Default
	{
		class Default{};
		class PersianHead_A3_01;
		class WhiteHead_01: Default{};
		class WhiteHead_10: WhiteHead_01
		{
			displayname = $STR_A3_NATOMen_lastnames17;
		};
		class GreekHead_A3_01: Default
		{
			material = "\A3_Aegis\Characters_F_Aegis\Heads\Data\M_Greek_01.rvmat";
			materialWounded1 = "A3_Aegis\Characters_F_Aegis\Heads\Data\M_Greek_01_injury.rvmat";
			materialWounded2 = "A3_Aegis\Characters_F_Aegis\Heads\Data\M_Greek_01_injury.rvmat";
		};
		class Nikos: GreekHead_A3_01
		{
			disabled = false;
		};
		class Miller: Default
		{
			disabled = false;
		};
		class Kerry;
		class Kerry_A_F: Kerry
		{
			displayName = "Kerry (Survive)";
			disabled = false;
		};
		class kerry_B1_F: Kerry
		{
			displayName = "Kerry (Adapt 1)";
			disabled = false;
		};
		class kerry_B2_F: Kerry
		{
			displayName = "Kerry (Adapt 2)";
			disabled = false;
		};
		class Kerry_C_F: Kerry
		{
			displayName = "Kerry (Win)";
			disabled = false;
		};
		class IG_Leader: Default
		{
			disabled = false;
		};
		class O_Colonel: Default
		{
      		disabled = false;
		};
		class Jay: Default
		{
			disabled = false;
		};
		class Ivan: Default
		{
			disabled = false;
		};
		class Pettka: Default
		{
			disabled = false;
		};
		class Dwarden: Default
		{
			disabled = false;
		};
		class Hladas: Default
		{
			disabled = false;
		};
		class TanoanHead_A3_01;
		class WhiteHead_23: WhiteHead_01
		{
			identityTypes[] +=
			{
				Orange_EOD,
				Head_NATO,
				Head_Euro
			};
		};
		class GreekHead_A3_11: GreekHead_A3_01
		{
			identityTypes[] +=
			{
				Orange_Officer,
				Head_Greek
			};
		};
		class GreekHead_A3_12: GreekHead_A3_01
		{
			identityTypes[] +=
			{
				Orange_Civilian,
				Head_Greek
			};
		};
		class GreekHead_A3_13: GreekHead_A3_01
		{
			identityTypes[] +=
			{
				Orange_FIA,
				Head_Greek
			};
		};
		class GreekHead_A3_14: GreekHead_A3_01
		{
			identityTypes[] +=
			{
				Orange_AAF,
				Head_Greek
			};
		};
		class WhiteHead_24: WhiteHead_01
		{
			identityTypes[] +=
			{
				Head_NATO,
				Head_Euro
			};
		};
		class WhiteHead_25: WhiteHead_01
		{
			identityTypes[] +=
			{
				Head_NATO,
				Head_Euro
			};
		};
		class WhiteHead_26: WhiteHead_01
		{
			identityTypes[] +=
			{
				Head_NATO,
				Head_Euro
			};
		};
		class WhiteHead_27: WhiteHead_01
		{
			identityTypes[] +=
			{
				Head_NATO,
				Head_Euro
			};
		};
		class WhiteHead_28: WhiteHead_01
		{
			identityTypes[] +=
			{
				Head_NATO,
				Head_Euro
			};
		};
		class WhiteHead_29: WhiteHead_01
		{
			identityTypes[] +=
			{
				Head_NATO,
				Head_Euro
			};
		};
		class WhiteHead_30: WhiteHead_01
		{
			identityTypes[] +=
			{
				Head_Enoch,
				Head_NATO
			};
		};
		class WhiteHead_31: WhiteHead_01
		{
			identityTypes[] +=
			{
				Head_NATO,
				Head_Euro
			};
		};
		class WhiteHead_32: WhiteHead_01
		{
			identityTypes[] +=
			{
				Head_NATO,
				Head_Euro
			};
		};
		class LivonianHead_1: WhiteHead_01
		{
			identityTypes[] +=
			{
				Head_Enoch,
				Head_NATO
			};
		};
		class LivonianHead_2: WhiteHead_01
		{
			identityTypes[] +=
			{
				Head_Enoch,
				Head_NATO
			};
		};
		class LivonianHead_3: WhiteHead_01
		{
			identityTypes[] +=
			{
				Head_Enoch,
				Head_NATO
			};
		};
		class LivonianHead_4: WhiteHead_01
		{
			identityTypes[] +=
			{
				Head_Enoch,
				Head_NATO
			};
		};
		class LivonianHead_5: WhiteHead_01
		{
			identityTypes[] +=
			{
				Head_Enoch,
				Head_NATO
			};
		};
		class LivonianHead_7: WhiteHead_01
		{
			identityTypes[] +=
			{
				Head_Enoch,
				Head_NATO
			};
		};
		class LivonianHead_8: WhiteHead_01
		{
			identityTypes[] +=
			{
				Head_Enoch,
				Head_NATO
			};
		};
		class LivonianHead_9: WhiteHead_01
		{
			identityTypes[] +=
			{
				Head_Enoch,
				Head_NATO
			};
		};
		class LivonianHead_10: WhiteHead_01
		{
			identityTypes[] +=
			{
				Head_Enoch,
				Head_NATO
			};
		};
		class PersianHead_A3_05: PersianHead_A3_01
		{
			author = $STR_A3_A_AveryTheKitty;
			displayname = $STR_A3_TakistaniMen_LastNames36;
			textureHL = "\A3\Characters_F\Heads\Data\hl_White_bald_1_co.paa";
			textureHL2 = "\A3\Characters_F\Heads\Data\hl_White_bald_co.paa";
			texture = "\A3_Aegis\Characters_F_Aegis\Heads\Data\M_Persian_05_CO.paa";
			material = "\A3_Aegis\Characters_F_Aegis\Heads\Data\M_Persian_05.rvmat";
			materialWounded1 = "A3_Aegis\Characters_F_Aegis\Heads\Data\M_Persian_05_injury.rvmat";
			materialWounded2 = "A3_Aegis\Characters_F_Aegis\Heads\Data\M_Persian_05_injury.rvmat";
		};
		/*class PersianHead_A3_06: PersianHead_A3_01
		{
			author = $STR_A3_A_AveryTheKitty;
			displayname = $STR_A3_TakistaniMen_LastNames23;
			texture = "\A3_Aegis\Characters_F_Aegis\Heads\Data\M_Persian_06_CO.paa";
			material = "\A3_Aegis\Characters_F_Aegis\Heads\Data\M_Persian_06.rvmat";
			materialWounded1 = "A3_Aegis\Characters_F_Aegis\Heads\Data\M_Persian_06_injury.rvmat";
			materialWounded2 = "A3_Aegis\Characters_F_Aegis\Heads\Data\M_Persian_06_injury.rvmat";
		};*/
		class PersianHead_A3_07: PersianHead_A3_01
		{
			author = $STR_A3_A_AveryTheKitty;
			displayname = $STR_A3_TakistaniMen_LastNames47;
			textureHL = "\A3\Characters_F\Heads\Data\hl_White_bald_1_co.paa";
			textureHL2 = "\A3\Characters_F\Heads\Data\hl_White_bald_co.paa";
			texture = "\A3_Aegis\Characters_F_Aegis\Heads\Data\M_Persian_07_CO.paa";
			material = "\A3_Aegis\Characters_F_Aegis\Heads\Data\M_Persian_07.rvmat";
			materialWounded1 = "A3_Aegis\Characters_F_Aegis\Heads\Data\M_Persian_07_injury.rvmat";
			materialWounded2 = "A3_Aegis\Characters_F_Aegis\Heads\Data\M_Persian_07_injury.rvmat";
		};
		class lxWS_African_Head_01;
		class lxWS_African_Head_04: lxWS_African_Head_01 
		{
			identityTypes[] +=
			{
				lxWS_Head_African,
				Head_TK
			};
		};
		class WhiteHead_33: WhiteHead_01
		{
			author = $STR_A3_A_AveryTheKitty;
			displayname = $STR_A3_NATOMen_lastnames44;
			texture = "\A3_Aegis\Characters_F_Aegis\Heads\Data\M_White_33_CO.paa";
			material = "\A3_Aegis\Characters_F_Aegis\Heads\Data\M_White_33.rvmat";
			textureHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_2_CO.paa";
			textureHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_2_CO.paa";
			materialWounded1 = "A3_Aegis\Characters_F_Aegis\Heads\Data\M_White_33_injury.rvmat";
			materialWounded2 = "A3_Aegis\Characters_F_Aegis\Heads\Data\M_White_33_injury.rvmat";
			identityTypes[] +=
			{
				Head_NATO,
				Head_Euro
			};
		};
		class LatinoHead_A3_01: Default
		{
			author = $STR_A3_A_AveryTheKitty;
			displayname = $STR_A3_NATOMen_lastnames103;
			texture = "\A3_Aegis\Characters_F_Aegis\Heads\Data\M_Latino_01_CO.paa";
			textureHL = "\A3\Characters_F\Heads\Data\hl_Black_bald_CO.paa";
			head = GreekHead_A3;
			identityTypes[] +=
			{
				Head_NATO,
				Head_Latino
			};
			material = "\A3_Aegis\Characters_F_Aegis\Heads\Data\M_Latino_01.rvmat";
			materialWounded1 = "A3_Aegis\Characters_F_Aegis\Heads\Data\M_Latino_01_injury.rvmat";
			materialWounded2 = "A3_Aegis\Characters_F_Aegis\Heads\Data\M_Latino_01_injury.rvmat";
		};
		/*
		class LatinoHead_A3_02: LatinoHead_A3_01
		{
			author = $STR_A3_A_AveryTheKitty;
			displayname = "Rodriguez";
			texture = "\A3_Aegis\Characters_F_Aegis\Heads\Data\M_Latino_02_CO.paa";
			material = "\A3_Aegis\Characters_F_Aegis\Heads\Data\M_Latino_02.rvmat";
			textureHL = "\A3\Characters_F\Heads\Data\hl_Black_bald_CO.paa";
			materialWounded1 = "A3_Aegis\Characters_F_Aegis\Heads\Data\M_Latino_02_injury.rvmat";
			materialWounded2 = "A3_Aegis\Characters_F_Aegis\Heads\Data\M_Latino_02_injury.rvmat";
		};
		class LatinoHead_A3_03: LatinoHead_A3_01
		{
			author = $STR_A3_A_AveryTheKitty;
			displayname = "Serrano";
			texture = "\A3_Aegis\Characters_F_Aegis\Heads\Data\M_Latino_03_CO.paa";
			material = "\A3_Aegis\Characters_F_Aegis\Heads\Data\M_Latino_03.rvmat";
			textureHL = "\A3\Characters_F\Heads\Data\hl_Black_bald_CO.paa";
			materialWounded1 = "A3_Aegis\Characters_F_Aegis\Heads\Data\M_Latino_03_injury.rvmat";
			materialWounded2 = "A3_Aegis\Characters_F_Aegis\Heads\Data\M_Latino_03_injury.rvmat";
		};
		*/
		class Aegis_HispanicHead_01: Default
		{
			displayName = "Rodriguez";
			author = $STR_A3_A_Grave;
			identityTypes[]=
			{
				Head_NATO,
				Head_Latino
			};
			head = "NATOHead_A3";
			texture = "A3_Aegis\Characters_F_Aegis\Heads\Data\Head_Hispanic_01_CO.paa";
			material = "A3_Aegis\Characters_F_Aegis\Heads\Data\Head_Hispanic_01.rvmat";
			materialWounded1 = "A3_Aegis\Characters_F_Aegis\Heads\Data\Head_Hispanic_01_Injury.rvmat";
			materialWounded2 = "A3_Aegis\Characters_F_Aegis\Heads\Data\Head_Hispanic_01_Injury.rvmat";
			textureHL = "A3_Aegis\Characters_F_Aegis\Heads\Data\Body_Hispanic_01_CO.paa";
			textureHL2 = "A3_Aegis\Characters_F_Aegis\Heads\Data\Body_Hispanic_01_CO.paa";
			materialHL = "A3_Aegis\Characters_F_Aegis\Heads\Data\Body_Hispanic_01.rvmat";
			materialHL2 = "A3_Aegis\Characters_F_Aegis\Heads\Data\Body_Hispanic_01.rvmat";
		};
		class Aegis_HispanicHead_02: Default
		{
			displayName = "Serrano";
			author = $STR_A3_A_Grave;
			identityTypes[]=
			{
				Head_NATO,
				Head_Latino
			};
			head=  "NATOHead_A3";
			texture = "A3_Aegis\Characters_F_Aegis\Heads\Data\Head_Hispanic_02_CO.paa";
			material = "A3_Aegis\Characters_F_Aegis\Heads\Data\Head_Hispanic_02.rvmat";
			materialWounded1 = "A3_Aegis\Characters_F_Aegis\Heads\Data\Head_Hispanic_02_Injury.rvmat";
			materialWounded2 = "A3_Aegis\Characters_F_Aegis\Heads\Data\Head_Hispanic_02_Injury.rvmat";
			textureHL = "A3_Aegis\Characters_F_Aegis\Heads\Data\Body_Hispanic_02_CO.paa";
			textureHL2 = "A3_Aegis\Characters_F_Aegis\Heads\Data\Body_Hispanic_02_CO.paa";
			materialHL = "A3_Aegis\Characters_F_Aegis\Heads\Data\Body_Hispanic_02.rvmat";
			materialHL2 = "A3_Aegis\Characters_F_Aegis\Heads\Data\Body_Hispanic_02.rvmat";
		};
		class Aegis_HispanicHead_03: Default
		{
			displayName = "Dominguez";
			author = $STR_A3_A_Grave;
			identityTypes[]=
			{
				Head_NATO,
				Head_Latino
			};
			head = "NATOHead_A3";
			texture = "A3_Aegis\Characters_F_Aegis\Heads\Data\Head_Hispanic_03_CO.paa";
			material = "A3_Aegis\Characters_F_Aegis\Heads\Data\Head_Hispanic_03.rvmat";
			materialWounded1 = "A3_Aegis\Characters_F_Aegis\Heads\Data\Head_Hispanic_03_Injury.rvmat";
			materialWounded2 = "A3_Aegis\Characters_F_Aegis\Heads\Data\Head_Hispanic_03_Injury.rvmat";
			textureHL = "A3_Aegis\Characters_F_Aegis\Heads\Data\Body_Hispanic_03_CO.paa";
			textureHL2 = "A3_Aegis\Characters_F_Aegis\Heads\Data\Body_Hispanic_03_CO.paa";
			materialHL = "A3_Aegis\Characters_F_Aegis\Heads\Data\Body_Hispanic_03.rvmat";
			materialHL2 = "A3_Aegis\Characters_F_Aegis\Heads\Data\Body_Hispanic_03.rvmat";
		};
		class Aegis_HispanicHead_04: Default
		{
			displayName = "Gutierrez";
			author = $STR_A3_A_Grave;
			identityTypes[]=
			{
				Head_NATO,
				Head_Latino
			};
			head = "NATOHead_A3";
			texture = "A3_Aegis\Characters_F_Aegis\Heads\Data\Head_Hispanic_04_CO.paa";
			material = "A3_Aegis\Characters_F_Aegis\Heads\Data\Head_Hispanic_04.rvmat";
			materialWounded1 = "A3_Aegis\Characters_F_Aegis\Heads\Data\Head_Hispanic_04_Injury.rvmat";
			materialWounded2 = "A3_Aegis\Characters_F_Aegis\Heads\Data\Head_Hispanic_04_Injury.rvmat";
			textureHL = "A3_Aegis\Characters_F_Aegis\Heads\Data\Body_Hispanic_04_CO.paa";
			textureHL2 = "A3_Aegis\Characters_F_Aegis\Heads\Data\Body_Hispanic_04_CO.paa";
			materialHL = "A3_Aegis\Characters_F_Aegis\Heads\Data\Body_Hispanic_04.rvmat";
			materialHL2 = "A3_Aegis\Characters_F_Aegis\Heads\Data\Body_Hispanic_04.rvmat";
		};
		class Aegis_HispanicHead_05: Default
		{
			displayName = "Cruz";
			author = $STR_A3_A_Grave;
			identityTypes[]=
			{
				Head_NATO,
				Head_Latino
			};
			head = "NATOHead_A3";
			texture = "A3_Aegis\Characters_F_Aegis\Heads\Data\Head_Hispanic_05_CO.paa";
			material = "A3_Aegis\Characters_F_Aegis\Heads\Data\Head_Hispanic_05.rvmat";
			materialWounded1 = "A3_Aegis\Characters_F_Aegis\Heads\Data\Head_Hispanic_05_Injury.rvmat";
			materialWounded2 = "A3_Aegis\Characters_F_Aegis\Heads\Data\Head_Hispanic_05_Injury.rvmat";
			textureHL = "A3_Aegis\Characters_F_Aegis\Heads\Data\Body_Hispanic_05_CO.paa";
			textureHL2="A3_Aegis\Characters_F_Aegis\Heads\Data\Body_Hispanic_05_CO.paa";
			materialHL="A3_Aegis\Characters_F_Aegis\Heads\Data\Body_Hispanic_05.rvmat";
			materialHL2="A3_Aegis\Characters_F_Aegis\Heads\Data\Body_Hispanic_05.rvmat";
		};
		class Aegis_HispanicHead_06: Default
		{
			displayName = "Acosta";
			author = $STR_A3_A_Grave;
			identityTypes[]=
			{
				Head_NATO,
				Head_Latino
			};
			head = "NATOHead_A3";
			texture = "A3_Aegis\Characters_F_Aegis\Heads\Data\Head_Hispanic_06_CO.paa";
			material = "A3_Aegis\Characters_F_Aegis\Heads\Data\Head_Hispanic_06.rvmat";
			materialWounded1="A3_Aegis\Characters_F_Aegis\Heads\Data\Head_Hispanic_06_Injury.rvmat";
			materialWounded2="A3_Aegis\Characters_F_Aegis\Heads\Data\Head_Hispanic_06_Injury.rvmat";
			textureHL = "A3_Aegis\Characters_F_Aegis\Heads\Data\Body_Hispanic_06_CO.paa";
			textureHL2 = "A3_Aegis\Characters_F_Aegis\Heads\Data\Body_Hispanic_06_CO.paa";
			materialHL = "A3_Aegis\Characters_F_Aegis\Heads\Data\Body_Hispanic_06.rvmat";
			materialHL2 = "A3_Aegis\Characters_F_Aegis\Heads\Data\Body_Hispanic_06.rvmat";
		};
		class Aegis_HispanicHead_07: Default
		{
			displayName = "Delgado";
			author = $STR_A3_A_Grave;
			identityTypes[]=
			{
				Head_NATO,
				Head_Latino
			};
			head = "NATOHead_A3";
			texture = "A3_Aegis\Characters_F_Aegis\Heads\Data\Head_Hispanic_07_CO.paa";
			material = "A3_Aegis\Characters_F_Aegis\Heads\Data\Head_Hispanic_07.rvmat";
			materialWounded1 = "A3_Aegis\Characters_F_Aegis\Heads\Data\Head_Hispanic_07_Injury.rvmat";
			materialWounded2 = "A3_Aegis\Characters_F_Aegis\Heads\Data\Head_Hispanic_07_Injury.rvmat";
			textureHL = "A3_Aegis\Characters_F_Aegis\Heads\Data\Body_Hispanic_07_CO.paa";
			textureHL2 = "A3_Aegis\Characters_F_Aegis\Heads\Data\Body_Hispanic_07_CO.paa";
			materialHL = "A3_Aegis\Characters_F_Aegis\Heads\Data\Body_Hispanic_07.rvmat";
			materialHL2 = "A3_Aegis\Characters_F_Aegis\Heads\Data\Body_Hispanic_07.rvmat";
		};
		class Aegis_HispanicHead_08: Default
		{
			displayName = "Alejandro";
			author = $STR_A3_A_Grave;
			identityTypes[]=
			{
				Head_NATO,
				Head_Latino
			};
			head = "NATOHead_A3";
			texture = "A3_Aegis\Characters_F_Aegis\Heads\Data\Head_Hispanic_08_CO.paa";
			material = "A3_Aegis\Characters_F_Aegis\Heads\Data\Head_Hispanic_08.rvmat";
			materialWounded1 = "A3_Aegis\Characters_F_Aegis\Heads\Data\Head_Hispanic_08_Injury.rvmat";
			materialWounded2 = "A3_Aegis\Characters_F_Aegis\Heads\Data\Head_Hispanic_08_Injury.rvmat";
			textureHL = "A3_Aegis\Characters_F_Aegis\Heads\Data\Body_Hispanic_08_CO.paa";
			textureHL2 = "A3_Aegis\Characters_F_Aegis\Heads\Data\Body_Hispanic_08_CO.paa";
			materialHL = "A3_Aegis\Characters_F_Aegis\Heads\Data\Body_Hispanic_08.rvmat";
			materialHL2 = "A3_Aegis\Characters_F_Aegis\Heads\Data\Body_Hispanic_08.rvmat";
		};
		class Aegis_HispanicHead_09: Default
		{
			displayName = "Rafael";
			author = $STR_A3_A_Grave;
			identityTypes[]=
			{
				Head_NATO,
				Head_Latino
			};
			head = "NATOHead_A3";
			texture = "A3_Aegis\Characters_F_Aegis\Heads\Data\Head_Hispanic_09_CO.paa";
			material = "A3_Aegis\Characters_F_Aegis\Heads\Data\Head_Hispanic_09.rvmat";
			materialWounded1 = "A3_Aegis\Characters_F_Aegis\Heads\Data\Head_Hispanic_09_Injury.rvmat";
			materialWounded2 = "A3_Aegis\Characters_F_Aegis\Heads\Data\Head_Hispanic_09_Injury.rvmat";
			textureHL = "A3_Aegis\Characters_F_Aegis\Heads\Data\Body_Hispanic_09_CO.paa";
			textureHL2 = "A3_Aegis\Characters_F_Aegis\Heads\Data\Body_Hispanic_09_CO.paa";
			materialHL = "A3_Aegis\Characters_F_Aegis\Heads\Data\Body_Hispanic_09.rvmat";
			materialHL2 = "A3_Aegis\Characters_F_Aegis\Heads\Data\Body_Hispanic_09.rvmat";
		};
  	};
};