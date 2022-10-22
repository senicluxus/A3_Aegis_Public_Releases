enableSaving [ false, false ];
[

	//--- Underwater plane
	{
		["InitDummy",["Stratis",[1445.92,4802.16,-4.05235],140.191,0.27,[-9.09091,-10.4773],2.74605,0,1049.08,0.00329716,1,1.10852,-0.157568,1.23792]] call bis_fnc_camera;
		setviewdistance 200;
	},
	//--- Aegis
	{
		["InitDummy",["Stratis",[2622.76,580.76,16.5994],25.2349,0.53,[-44.4346,0],0,0,526.374,0.00669019,1,1,0,1]] call bis_fnc_camera;
	}

] call Aegis_fnc_initWorldScene;