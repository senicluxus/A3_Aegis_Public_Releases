enableSaving [ false, false ];
[

	//--- Visual mindfuck
	{
		["InitDummy",["VR",[8086.3,3816.05,59240],326.469,0.71,[44.7971,0.136373],0,0,635.853,0,1,1.00417,-0.00104398,0.997912]] call bis_fnc_camera;
	},
	//--- Slope
	{
		["InitDummy",["VR",[7498.14,7557.73,13.0703],51.5496,0.41,[-38.3929,0],0,0,636.799,1,1,1,0,1]] call bis_fnc_camera;
		"colorCorrections" ppEffectEnable false;
	},
	//--- Unterwasser
	{
		["InitDummy",["VR",[7520.22,7516.81,48.1085],120.406,0.24,[-89.9,0],10,0,508.129,0,1,1.00417,-0.00104398,0.997912]] call bis_fnc_camera;
	}
] call Aegis_fnc_initWorldSceneVR;