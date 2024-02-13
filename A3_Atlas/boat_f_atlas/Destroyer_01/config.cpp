#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"

class CfgVehicles
{
	class Land_Destroyer_01_hull_01_F;
	class Land_Destroyer_01_hull_02_F;
	class Land_Destroyer_01_hull_03_F;
	class Land_Destroyer_01_hull_04_F;
	class Land_Destroyer_01_hull_05_F;

	class Atlas_Land_Destroyer_01_hull_HMS_01_F: Land_Destroyer_01_hull_01_F
	{
		hiddenSelectionsTextures[] = {
			"A3_Atlas\boat_f_atlas\Destroyer_01\data\Destroyer_01_N_HMS_D_ca.paa",
			"A3_Atlas\boat_f_atlas\Destroyer_01\data\Destroyer_01_N_HMS_4_ca.paa",
			"A3_Atlas\boat_f_atlas\Destroyer_01\data\Destroyer_01_N_HMS_7_ca.paa"
		};
		hiddenSelectionsMaterials[] = {
			"A3_Atlas\boat_f_atlas\Destroyer_01\data\Destroyer_01_HMS_N.rvmat",
			"A3_Atlas\boat_f_atlas\Destroyer_01\data\Destroyer_01_HMS_N.rvmat",
			"A3_Atlas\boat_f_atlas\Destroyer_01\data\Destroyer_01_HMS_N.rvmat"
		};

		#define DESTROYERCOMMON\
		class EventHandlers\
		{\
			class A3_Atlas\
			{\
				init = "_this#0 setDamage [0.5,false];";\
			};\
		};\
		class Damage\
		{\
			tex[] = {};\
			mat[] = {\
				"a3\boat_f_destroyer\Destroyer_01\Data\Destroyer_01_Ext_Multi_01.rvmat",\
				"A3_Atlas\boat_f_atlas\Destroyer_01\data\Destroyer_01_Ext_Multi_HMS_01.rvmat",\
				"A3_Atlas\boat_f_atlas\Destroyer_01\data\Destroyer_01_Ext_Multi_HMS_01.rvmat",\
				"a3\boat_f_destroyer\Destroyer_01\Data\Destroyer_01_Atlas_01.rvmat",\
				"A3_Atlas\boat_f_atlas\Destroyer_01\data\Destroyer_01_Atlas_HMS_01.rvmat",\
				"A3_Atlas\boat_f_atlas\Destroyer_01\data\Destroyer_01_Atlas_HMS_01.rvmat",\
				"a3\boat_f_destroyer\Destroyer_01\Data\Destroyer_01_Decals.rvmat",\
				"A3_Atlas\boat_f_atlas\Destroyer_01\data\Destroyer_01_HMS_Decals.rvmat",\
				"A3_Atlas\boat_f_atlas\Destroyer_01\data\Destroyer_01_HMS_Decals.rvmat",\
				"a3\boat_f_destroyer\Destroyer_01\Data\Destroyer_01_tarmac_01.rvmat",\
				"A3_Atlas\boat_f_atlas\Destroyer_01\data\Destroyer_01_tarmac_HMS_01.rvmat",\
				"A3_Atlas\boat_f_atlas\Destroyer_01\data\Destroyer_01_tarmac_HMS_01.rvmat",\
				"a3\boat_f_destroyer\Destroyer_01\Data\Destroyer_01_tarmac_02.rvmat",\
				"A3_Atlas\boat_f_atlas\Destroyer_01\data\Destroyer_01_tarmac_HMS_02.rvmat",\
				"A3_Atlas\boat_f_atlas\Destroyer_01\data\Destroyer_01_tarmac_HMS_02.rvmat",\
				"a3\boat_f_destroyer\Destroyer_01\Data\Destroyer_01_tarmac_03.rvmat",\
				"A3_Atlas\boat_f_atlas\Destroyer_01\data\Destroyer_01_tarmac_HMS_03.rvmat",\
				"A3_Atlas\boat_f_atlas\Destroyer_01\data\Destroyer_01_tarmac_HMS_03.rvmat"\
			};\
		};\
		selectionDamage = "";

		DESTROYERCOMMON
	};
	class Atlas_Land_Destroyer_01_hull_HMS_02_F: Land_Destroyer_01_hull_02_F
	{
		DESTROYERCOMMON
	};
	class Atlas_Land_Destroyer_01_hull_HMS_03_F: Land_Destroyer_01_hull_03_F
	{
		DESTROYERCOMMON
	};
	class Atlas_Land_Destroyer_01_hull_HMS_04_F: Land_Destroyer_01_hull_04_F
	{
		DESTROYERCOMMON
	};
	class Atlas_Land_Destroyer_01_hull_HMS_05_F: Land_Destroyer_01_hull_05_F
	{
		hiddenSelectionsTextures[] = {
			"A3_Atlas\boat_f_atlas\Destroyer_01\data\destroyer_01_tag_D47_co.paa"
		};
		hiddenSelectionsMaterials[] = {
			"A3_Atlas\boat_f_atlas\Destroyer_01\data\Destroyer_01_HMS_N.rvmat"
		};

		DESTROYERCOMMON
	};

	class FlagCarrier;
	class ShipFlag_US_F: FlagCarrier
	{
		class EventHandlers;	
	};
	class Atlas_ShipFlag_RN_F: ShipFlag_US_F
	{
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture 'A3_Atlas\boat_f_atlas\Destroyer_01\data\flag_rn_co.paa'";
		};
	};

	class Strategic;
	class StaticShip: Strategic
	{
		class EventHandlers;
	};
	class Land_Destroyer_01_base_F: StaticShip
	{
		class EventHandlers: EventHandlers
		{
			class A3_Atlas
			{
				init = "\
					if (is3DEN and get3DENEntityID (_this#0) == -1 and get3DENActionState 'SelectGroupMode' == 1) then {\
						private _edenEntity = create3DENEntity ['Object',typeOf (_this#0),[0,0,0]];\
						_edenEntity spawn {\
							set3DENAttributes [\
								[[_edenEntity],'position',getPosATL (_this#0)],\
								[[_edenEntity],'rotation',call {\
									private _vD = vectorDir (_this#0) ;\
									private _vU = vectorUp (_this#0)  ;\
									private _vC = _vD vectorCrossProduct _vU ;\
									[((_vU#1) atan2 (_vU#2)+360)mod 360,(-(_vU#0) atan2 sqrt (1 - (_vU#0 ^ 2))+360)mod 360,(_vD#0) atan2 (_vC#0)]\
								}]\
							];\
						} ;\
					};\
				";
			};
		};
	};
	class Atlas_Land_Destroyer_01_base_HMS_F: Land_Destroyer_01_base_F
	{
		displayName = "HMS Vigilance";	// todo localize
		
		class Attributes
		{
		};

		multiStructureParts[] = {
			{"Atlas_Land_Destroyer_01_hull_HMS_01_F","pos_hull_1"},
			{"Atlas_Land_Destroyer_01_hull_HMS_02_F","pos_hull_2"},
			{"Atlas_Land_Destroyer_01_hull_HMS_03_F","pos_hull_3"},
			{"Atlas_Land_Destroyer_01_hull_HMS_04_F","pos_hull_4"},
			{"Atlas_Land_Destroyer_01_hull_HMS_05_F","pos_hull_5"},
			{"Land_Destroyer_01_interior_02_F","pos_hull_2"},
			{"Land_Destroyer_01_interior_03_F","pos_hull_3"},
			{"Land_Destroyer_01_interior_04_F","pos_hull_4"},
			{"Land_HelipadEmpty_F","pos_heliPad"},
			{"Atlas_ShipFlag_RN_F","pos_Flag"}
		};
	};
};