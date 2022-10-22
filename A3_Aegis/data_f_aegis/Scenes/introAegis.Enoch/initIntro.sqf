enableSaving [ false, false ];
[
	//Scene 1
	{
		0 setfog 0.05;
		setViewDistance 200;
		["InitDummy",["Enoch",[11382.4,10174.7,6.15157],336.855,0.75,[-46.5129,0],0,0,411,0.472649,1,1,0,1]] call bis_fnc_camera;
		if (isClass (configfile >> "CfgVehicles" >> "B_G_Boat_Transport_01_F")) then 
		{
			private _boat = createVehicle ["B_G_Boat_Transport_01_F", [11382.5,10178.5,0.33826], [], 0, "CAN_COLLIDE"];
			_boat setDir 232.318;
			_boat enableSimulation false;
		};
	},
	//Scene 2
	/*{
		["InitDummy",["Enoch",[4921.35,2182.8,13.9752],321.484,0.75,[-50.5158,0],0,0,226.526,0.858245,1,1,0,1]] call bis_fnc_camera;
	},*/
	//Scene 3
	{
		0 setfog 0.6;
		setViewDistance 200;
		["InitDummy",["Enoch",[10305.9,2134.51,4.66964],150.145,0.75,[-18.2844,0],0,0,1168,0.93232,1,1,0,1]] call bis_fnc_camera;
	},
	//Scene 4
	/*{
		["InitDummy",["Enoch",[5514.52,5797.5,8.36594],250.08,0.75,[-34.085,0],0,0,623,0,1,1,0,1]] call bis_fnc_camera;
	},*/
	//Scene 5
	/*{
		["InitDummy",["Enoch",[6467.3,9185.55,5.9588],141.73,0.75,[-50.2516,0],0,0,480,0.220775,1,1,0,1]] call bis_fnc_camera;
	},*/
	//Scene 6
	/*{
		["InitDummy",["Enoch",[9850.87,8414.2,8.69721],335.54,0.75,[-53.537,0],0,0,480,0.220775,1,1,0,1]] call bis_fnc_camera;
	},*/
	//Scene 7
	/*{
		["InitDummy",["Enoch",[11107,8963.44,10.8445],301.995,0.75,[-56.6828,0],0,0,1304.58,0.0444271,1,1,0,1]] call bis_fnc_camera;
	},*/
	//Scene 8
	/*{
		["InitDummy",["Enoch",[4879.07,5404.63,19.3186],191.537,0.75,[-61.7203,0],0,0,337.194,0.0614831,1,1,0,1]] call bis_fnc_camera;
	},*/
	//Scene 9
	{
		0 setFog 0.5;
		setViewDistance 200;
		["InitDummy",["Enoch",[4686.92,5609.44,7.92418],51.8526,0.75,[-40.0896,0],0,0,921.856,0.354914,1,1,0,1]] call bis_fnc_camera;
	},
	//Scene 10 
	{
		/*if (isClass (configfile >> "CfgVehicles" >> "C_Tractor_01_F")) then 
		{
			private _tractor = createVehicle ["C_Tractor_01_F", [3441.63,11470.3,0], [], 0, "CAN_COLLIDE"];
			_tractor setDir 69.301;
			_tractor enableSimulation false;
		};*/
		0 setFog 0;
		setWind [0, 3, true];
		setViewDistance 200;
		["InitDummy",["Enoch",[3441,11472.4,3.10632],106.953,0.75,[-37.1482,0],0,0,603,0.0444629,1,1,0,1]] call bis_fnc_camera;
	},
	//Scene 11
	{
		["InitDummy",["Enoch",[938.514,11414.6,11.4526],67.9618,0.75,[-40.3145,0],0,0,603,0.0444629,1,1,0,1]] call bis_fnc_camera;
	},
	//Scene 12
	/*{
		["InitDummy",["Enoch",[11574.3,7015.36,31.4682],123.165,0.75,[-62.7122,0],0,0,506.004,0.0238647,1,1,0,1]] call bis_fnc_camera;
	},*/
	//Scene 13
	{
		0 setfog 0.05;
		setViewDistance 200;
		["InitDummy",["Enoch",[586.37,7270.8,14.0382],321.406,0.7,[-67.4386,0],0,0,521.217,0.122475,1,1,0,1]] call bis_fnc_camera;
	}, 
	//Scene 14
	{
		setViewDistance 200;
		["InitDummy",["Enoch",[1622.29,9562.21,5.77823],313.025,0.7,[-57.1296,0],0,0,521.217,0.122475,1,1,0,1]] call bis_fnc_camera;
	}, 
	//Scene 15
	/*{
		["InitDummy",["Enoch",[7460.79,2548.09,2.21303],267.399,0.75,[-5.62715,0],0,0,603,0,1,1,0,1]] call bis_fnc_camera;
	},*/
	//Scene 16
	/*{
		["InitDummy",["Enoch",[4228.73,6389.85,9.58658],170.531,0.75,[-47.3641,0],0,0,603,0,1,1,0,1]] call bis_fnc_camera;
	},*/
	//Scene 17
	{
		0 setfog 0.2;
		setViewDistance 800;
		["InitDummy",["Enoch",[7588.8,7272.64,3.73012],92.8142,0.16,[4.79165,0],0,0,237.22,0.397174,1,1,0,1]] call bis_fnc_camera;
	}
] call Aegis_fnc_initWorldScene;