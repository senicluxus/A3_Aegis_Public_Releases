enableSaving [ false, false ];
[

	//--- Jungle
	{
		["InitDummy",["Tanoa",[11532.3,4834.03,2.01008],151.021,0.44,[16.5179,0],3.14148,0,787.12,0,1,1,0,1]] call bis_fnc_camera;
		0 setfog 0.01;
	},
	//--- Sandy Shore
	{
		["InitDummy",["Tanoa",[11590.7,5362.53,6.20663],345.883,0.7,[-35.1515,0.727273],10,0,921.352,0.0293848,1,1,0,1]] call bis_fnc_camera;
		_object = createvehicle ["B_Quadbike_01_F",[11586.8,5367.26,0.108267],[],0,"can_collide"];
		_object setdir 45;
		setviewdistance 200;
	},
	//--- Grass Field
	{
		["InitDummy",["Tanoa",[8942.97,9876.72,2.32962],239.767,0.21,[2.72721,-2.97727],10,0,1019.02,0,1,1,0,1]] call bis_fnc_camera;
		if (isclass (configfile >> "CfgVehicles" >> "B_T_VTOL_01_infantry_F")) then {
			_object = createvehicle ["B_T_VTOL_01_infantry_F",[8905.14,9864.76,1.30093],[],0,"can_collide"];
			_object enablesimulation false;
			_object setposasl [8906.19,9866.31,51.6039];
			_object setvectordirandup [[0.933787,-0.353323,-0.0566066],[0.154988,0.256777,0.953963]];
		};
		setWind [0,3,true];
		setviewdistance 200;
	},
	//--- Crane
	{
		["InitDummy",["Tanoa",[13491.6,12407.1,43.6268],55.8786,0.35,[-38.7879,2.38636],2.8504,0,553.208,0.0293848,1,1,0,1]] call bis_fnc_camera;
		setviewdistance 200;
	},
	//--- Boat
	//{
	//	["InitDummy",["Tanoa",[12132.5,2441.26,1.75206],112.351,0.47,[-22.4242,3.18182],10,0,695.958,0,1,1,0,1.68662]] call bis_fnc_camera;
	//	_object = createvehicle ["C_Boat_Civil_01_rescue_F",[12149,2428,0],[],0,"can_collide"];
	//	_object setdir 160;
	//	setviewdistance 200;
	//},
	//--- Rock wall
	{
		["InitDummy",["Tanoa",[10653.7,8986.41,99.9494],146.992,0.38,[-5.23809,-0.285717],10,0,673.955,0.0375836,1,1.1443,-0.0401747,0.944247]] call bis_fnc_camera;
		setviewdistance 200;
		0 fadesound 0.17;
	},
	//--- Train
	{
		["InitDummy",["Tanoa",[8422.69,10158.3,5.00002],335.22,0.35,[-19.091,2.29546],10,0,545.695,0.551131,1,1,0,1]] call bis_fnc_camera;
		setviewdistance 200;
	}
] call Aegis_fnc_initWorldScene;