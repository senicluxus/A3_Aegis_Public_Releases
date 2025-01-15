class CivilianPresence_Presets
{
	class None
	{
		name="Automatic";
		value="";
		default=1;
	};
	class Aegis_Civ_Altis
	{
		name = "Men (Altis)";
		picture = "\a3\Data_f\flags\flag_Altis_co.paa";
		value = "Aegis_Civ_Altis";
		defaultValue = "Aegis_Civ_Altis";
		class UnitTypes
		{
			Aegis_units[]=
			{
				C_Man_casual_1_F,
				C_Man_casual_2_F,
				C_Man_casual_3_F,
				C_Man_casual_4_F,
				C_Man_casual_5_F,
				C_Man_casual_6_F,
				C_Man_casual_7_F,
				C_Man_casual_8_F,
				C_Man_casual_9_F,
				C_Man_1_1_F,
				C_Man_1_2_F,
				C_Man_1_3_F,
				C_man_polo_1_F,
				C_man_polo_2_F,
				C_man_polo_3_F,
				C_man_polo_4_F,
				C_man_polo_5_F,
				C_man_polo_6_F
			};
		};
	};
	class Civ_SefrouRamal
	{
		name= "Men (Argana)";
	};
	class Civ_Tanoan
	{
		name= "Men (Horizon Islands)";
		class UnitTypes
		{
			Aegis_units[]=
			{
				Aegis_C_man_polo_1_F_tanoan,
				Aegis_C_man_polo_2_F_tanoan,
				Aegis_C_man_polo_3_F_tanoan,
				Aegis_C_man_polo_4_F_tanoan,
				Aegis_C_man_polo_5_F_tanoan,
				Aegis_C_man_polo_6_F_tanoan,
				C_Man_Sport_1_F_Tanoan,
				C_Man_Sport_2_F_Tanoan,
				C_Man_Sport_3_F_Tanoan
			};
		};
	};
	class Civ_Livionian
	{
		class UnitTypes
		{
			Aegis_units[]=
			{
				Aegis_C_Man_casual_1_F_Enoch,
				Aegis_C_Man_casual_2_F_Enoch,
				Aegis_C_Man_casual_3_F_Enoch,
				Aegis_C_Man_casual_4_v2_F_Enoch,
				Aegis_C_Man_casual_5_v2_F_Enoch,
				Aegis_C_Man_casual_6_v2_F_Enoch,
				Aegis_C_Man_casual_7_F_Enoch,
				Aegis_C_Man_casual_8_F_Enoch,
				Aegis_C_Man_casual_9_F_Enoch
			};
		};
	};
	class Aegis_Civ_Malden
	{
		name = "Men (Malden)";
		picture = "\A3_Aegis\Data_F_Aegis\FactionIcons\CfgFactionClasses_CIV_MA_CA.paa";
		value = "Aegis_Civ_Malden";
		defaultValue  ="Aegis_Civ_Malden";
		class UnitTypes
		{
			Aegis_units[]=
			{
				Aegis_C_man_polo_1_F_malden,
				Aegis_C_man_polo_2_F_malden,
				Aegis_C_man_polo_3_F_malden,
				Aegis_C_man_polo_4_F_malden,
				Aegis_C_man_polo_5_F_malden,
				Aegis_C_man_polo_6_F_malden,
				C_Man_Sport_1_F_malden,
				C_Man_Sport_2_F_malden,
				C_Man_Sport_3_F_malden,
				Aegis_C_Man_casual_1_F_malden,
				Aegis_C_Man_casual_2_F_malden,
				Aegis_C_Man_casual_3_F_malden,
				Aegis_C_Man_casual_4_F_malden,
				Aegis_C_Man_casual_5_F_malden,
				Aegis_C_Man_casual_6_F_malden,
				Aegis_C_Man_casual_4_v2_F_malden,
				Aegis_C_Man_casual_5_v2_F_malden,
				Aegis_C_Man_casual_6_v2_F_malden,
				Aegis_C_Man_casual_v2_F_malden,
				Aegis_C_Man_casual_7_F_malden,
				Aegis_C_Man_casual_8_F_malden,
				Aegis_C_Man_casual_9_F_malden
			};
		};
	};
	class Civ_African
	{
		picture = "\A3_Aegis\Data_F_Aegis\Flags\flag_Civilians_CO.paa";
	};
	class Civ_Asian
	{
		picture = "\A3_Aegis\Data_F_Aegis\Flags\flag_Civilians_CO.paa";
	};
	class Civ_European
	{
		picture = "\A3_Aegis\Data_F_Aegis\Flags\flag_Civilians_CO.paa";
	};
};