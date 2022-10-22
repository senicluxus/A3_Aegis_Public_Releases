/*
	Author: Borivoj Hlava, edited by AveryTheKitty

	Description:
	Animal behaviour control. Called by Animals_F\Data\Scripts\main.fsm.

	Parameter(s):
	_this select 0:	OBJECT - Controlled animal.
*/

_null = _this spawn {
	scriptName "fn_animalBehaviour_mainLoop";
	///------------------------------------------------------------------------
	///--------------- Init part - definition of variables --------------------
	///------------------------------------------------------------------------

	//--- Variables
	_agent = _this select 0;

	if (_agent getVariable ["BIS_fnc_animalBehaviour_disable", false]) exitWith {};	//--- override

	_stateDanger = 0;
	_state = "wait";
	_agent setVariable ["state",_state];
	_movePos = getPos _agent;
	_animalsForm = [];
	_members = [];
	_agent setVariable ["members",_members];
	_leader = nil;
	_movePosList = [];
	_radius = 10;
	_site = _agent getVariable ["inSite",objNull];
	_ranBool = true;
	_dbgTime = time;

	//--- Config values
	_object = typeof _agent;
	_root = configFile >> "CfgVehicles" >> _object;
	_configScalar = _root >> "VariablesScalar";
	_configString = _root >> "VariablesString";

	_threatMaxRadius = getNumber (_configScalar >> "_threatMaxRadius");		//--- Radius where animal looks for threat
	_runDistanceMax = getNumber (_configScalar >> "_runDistanceMax");		//--- Radius where is searched right place to move
	_movePrefer = getNumber (_configScalar >> "_movePrefer");		//--- Probability of moving (instead of standing)
	_formationPrefer = getNumber (_configScalar >> "_formationPrefer");		//--- Probability of joining to other agent of the same type
	_scareLimit = (getNumber (_configScalar >> "_scareLimit")) - 0.001;		//--- How many nearby agents have to be scared to switch to danger level
	_dangerLimit = (getNumber (_configScalar >> "_dangerLimit")) - 0.001;		//--- How many enemy entities must be around to switch to danger level
	_slowSpeed = getNumber (_configScalar >> "_walkSpeed");		//--- Speed of walking (slow movement), negative value in case there is no slow motion for animal

	_expSafe = getText (_configString >> "_expSafe");
	_expDanger = getText (_configString >> "_expDanger");

	_slowSpeed = _slowSpeed * 1.25;		//safe check, must be different from 0 (animal won't move otherwise, see description of forceSpeed script command)
	if (_slowSpeed == 0) then {_slowSpeed = -1; debugLog format ["BIS_fnc_animalBehaviour: Warning! Missing/wrong parameter '_walkSpeed' in config class '%1'!",typeOf _agent]};

	//--- Time/delay
	_timeNow = time;
	_delay = random 1;
	_delaySound = time + random 1;


	///------------------------------------------------------------------------
	///---------------------- Reaction - definitions --------------------------
	///------------------------------------------------------------------------

	_fn_formation = {
		_state = "formation";
		_agent setVariable ["state",_state];

		if (isNil {_agent getVariable "leader"}) then {		//--- for the first time in formation
			_leader = objNull;
			_count = count _animalsForm;
			_id = 0;
			while {(isNull _leader) && (_id < _count)} do {		//looking for leader in animals around
				_item = _animalsForm select _id;
				_leader = _item getVariable ["leader",objNull];
				_id = _id + 1;
			};
			if (isNull _leader) then {		//I am new leader of my own formation (there is no animal with defined leader around)
				_leader = _agent;
				_agent setVariable ["leader",_leader];
				_agent setVariable ["members",[]];
/*dbg*/			if !(isNil {BIS_fnc_animalBehaviour_debug}) then {debugLog format ["ANIMAL (%1): formation - agent set as a leader",_agent]};
			} else {		//there is animal with defined leader around, I am joining to its leader
				_agent setVariable ["leader",_leader];
				_members = _leader getVariable ["members",[]];
				_leader setVariable ["members",_members + [_agent]];
/*dbg*/			if !(isNil {BIS_fnc_animalBehaviour_debug}) then {debugLog format ["ANIMAL (%1): formation - leader found",_agent]};
			};

			_timeNow = time;
			_delay = 1 + random 1;
			sleep 0.5;		//in case there is a lot of animals which want to join some formation
		} else {											//--- was already in formation before (leader is defined), path finding
			_leader = _agent getVariable "leader";
			if (_leader == _agent) then {	//I am leader of formation
/*dbg*/			if !(isNil {BIS_fnc_animalBehaviour_debug}) then {debugLog format ["ANIMAL (%1): formation - I'm leader, path finding",_agent]};
				_agent forceSpeed _slowSpeed;
				_ran = random 1;
				if (isNull _site) then {		//looking for places according to site definition
					_movePosList = selectBestPlaces [getPos _agent,_runDistanceMax,_expSafe,10,3];
				} else {
					_movePosList = selectBestPlaces [getPos _site,_radius,_expSafe,10,3];
					if ((_agent distance _site) > 40) then {_ran = 0};
				};

				if (_ran > _movePrefer) then {
					if ((count _movePosList) != 0) then {
						if (({!(surfaceIsWater (_x select 0)) && !(isOnRoad (_x select 0))} count _movePosList) > 0) then {
							_movePos = (_movePosList select (floor random (count _movePosList))) select 0;
							_water = surfaceIsWater _movePos;
							_road = isOnRoad _movePos;
							while {_water || _road} do {		//--- looking for target place until it is not water or road
								_movePos = (_movePosList select (floor random (count _movePosList))) select 0;
								_water = surfaceIsWater _movePos;
								_road = isOnRoad _movePos;
							};
							_agent moveTo _movePos;
						};
					} else {
						_pos1 = getPos _agent;
						_movePos = [_pos1 select 0, (_pos1 select 2) + 50, 0];	//movePos set distant enough from agent, but no moveTo command - wait situation without wait status, I need to stay in formation state (preventing too often checks if there is no place to go)
					};
				} else {
					_pos1 = getPos _agent;
					_movePos = [_pos1 select 0, (_pos1 select 2) + 50, 0];	//movePos set distant enough from agent, but no moveTo command - wait situation without wait status, I need to stay in formation state (preventing too often checks if there is no place to go)
				};
			} else {	//someone else is leader of formation
/*dbg*/			if !(isNil {BIS_fnc_animalBehaviour_debug}) then {debugLog format ["ANIMAL (%1): formation - I'm not leader, path finding",_agent]};
				_expect = (expectedDestination _leader) select 0;
				if !(isNil {_expect}) then {	//undefined _expect variable means deleted leader
					if ((_leader distance _agent) > 40) then {
						_agent forceSpeed -1;
					} else {
						_agent forceSpeed _slowSpeed;
						_ran = random 1;
						if (_ran > _movePrefer) then {_ranBool = false};	//check if animal wants to move or stay on current position
					};	//set higher speed if leader is too far

					if (_ranBool) then {
						_movePos = [(_expect select 0) - 10 + (random 20),(_expect select 1) - 10 + (random 20),0];
						_water = surfaceIsWater _movePos;
						_road = isOnRoad _movePos;
						_i = 0;
						while {(_water || _road) && (_i < 5)} do {		//--- looking for place until it is not water/road/more than 5 attempts
							_movePos = [(_expect select 0) - 10 + (random 20),(_expect select 1) - 10 + (random 20),0];
							_water = surfaceIsWater _movePos;
							_road = isOnRoad _movePos;
							_i = _i + 1;
						};
						if (_i >= 5) then {_movePos = _expect};
						_agent moveTo _movePos;
					} else {
						_pos1 = getPos _agent;
						_movePos = [_pos1 select 0, (_pos1 select 2) + 50, 0];	//movePos set distant enough from agent, but no moveTo command - wait situation without wait status, I need to stay in formation state (preventing too often checks if there is no place to go)
					};
					_ranBool = true;	//default value
				};
			};

			//--- delay
			_timeNow = time;
			_delay = 10 + random 10;
			sleep 0.5;
		};
	};

	_fn_safe = {
		//--- Move or wait
/*dbg*/	if !(isNil {BIS_fnc_animalBehaviour_debug}) then {debugLog format ["ANIMAL (%1): safe reaction start",_agent]};
		if (_state == "formation") then {call _fn_formationQuit};		//remove agent from members list and set leader to nil
		_state = "wait";
		_agent setVariable ["state",_state];
		_agent setVariable ["leader",nil];
		_ran = random 1;
		if (!(isNull _site) && {(_agent distance _site) > _radius}) then {_ran = 0};	//if animal is part of site and is out of radius, it wants to go (back) every time
		if (_ran <= _movePrefer) then {
			_agent forceSpeed _slowSpeed;
			_state = "move";
			_agent setVariable ["state",_state];
			if (isNull _site) then {		//looking for places according to site definition
				_movePosList = selectBestPlaces [getPos _agent,_runDistanceMax,_expSafe,10,3];
			} else {
				_movePosList = selectBestPlaces [getPos _site,_radius,_expSafe,10,3];
			};
			if ((count _movePosList) != 0) then {
				if ((_agent isKindOf "Fish_Base_F") || {_agent isKindOf "Turtle_F"}) then {		//--- fish and turtle
					_dest = getPosASL _agent;
					if ((_dest select 2) > -1) then {		//no fish/turtle swimming in the air
						_agent setPos [_dest select 0, _dest select 1, -3]
					};
					if (({(getTerrainHeightASL (_x select 0)) < -2} count _movePosList) > 0) then {		//number of places with waterDepth > 2 m
						_depth = 0;
						_movePos = (_movePosList select (floor random (count _movePosList))) select 0;
						_depth = getTerrainHeightASL _movePos;
						while {_depth > -2} do {	//looking for target place with waterDepth > 2 m
							_movePos = (_movePosList select (floor random (count _movePosList))) select 0;
							_depth = getTerrainHeightASL _movePos;
						};
						_agentDepth = (position _agent) select 2;
						_movePos = [_movePos select 0, _movePos select 1, (_agentDepth-1.5)+(random 3)];
						_agent moveTo _movePos;
					};
				} else {		//--- other animals
					if (({!(surfaceIsWater (_x select 0)) && !(isOnRoad (_x select 0))} count _movePosList) > 0) then {
						_movePos = (_movePosList select (floor random (count _movePosList))) select 0;
						_water = surfaceIsWater _movePos;
						_road = isOnRoad _movePos;
						while {_water || _road} do {		//--- looking for target place until it is not water or road
							_movePos = (_movePosList select (floor random (count _movePosList))) select 0;
							_water = surfaceIsWater _movePos;
							_road = isOnRoad _movePos;
						};
						_agent moveTo _movePos;
					};
				};
			};
		} else {		//wait state - animal is sent to its own position, it stops it in case there is still waypoint from previous state
			_movePos = getPos _agent;
			_agent moveTo _movePos;
		};

		if (isNil "_movepos") then {
			_state = "wait";
			_agent setVariable ["state",_state];
		};

		//--- delay
		_timeNow = time;
		_delay = 10 + random 10;
		sleep 2;
	};

	_fn_danger = {
/*dbg*/	if !(isNil {BIS_fnc_animalBehaviour_debug}) then {debugLog format ["ANIMAL (%1): danger - start",_agent]};
		if (_state == "formation") then {call _fn_formationQuit};		//remove agent from members list and set leader to nil
		_state = "danger";
		_agent setVariable ["state",_state];
		_agent setVariable ["leader",nil];
		_agent forceSpeed -1;
		_movePosList = selectBestPlaces [getPos _agent,_runDistanceMax,_expDanger,10,3];

		_closeEnemy = _agent;
		if ((count _stateDangerList) != 0) then {
			_closeEnemy = _stateDangerList select 0;
			{if ((_agent distance _x) < (_agent distance _closeEnemy)) then {_closeEnemy = _x}} forEach _stateDangerList;		//looking for closest enemy
		};

		_pos1 = getpos _agent;
		_pos2 = getpos _closeEnemy;
		_ret = ((_pos2 select 0) - (_pos1 select 0)) atan2 ((_pos2 select 1) - (_pos1 select 1));
		_ret = abs (_ret % 360);
		if (_ret > 180) then {_ret = 360 - _ret};

		if ((count _movePosList) != 0) then {		//looking for best place to run
			_movePos = [0,0];
			if ((_agent isKindOf "Fish_Base_F") || {_agent isKindOf "Turtle_F"}) then {		//fish or turtle
				_dest = getPosASL _agent;
				if ((_dest select 2) > -1) then {
					_agent setPos [_dest select 0, _dest select 1, -3]		//no fish/turtle swimming in the air
				};
				if (({(getTerrainHeightASL (_x select 0)) < -2} count _movePosList) > 0) then {		//number of places with waterDepth > 2
					_depth = 0;

					if ((count _movePosList) > 2) then {		//find place with the best angle toward the enemy (away from enemy)
						_i = 0;
						{
							_pos1 = getpos _agent;
							_pos2 = _x select 0;
							_retNew = ((_pos2 select 0) - (_pos1 select 0)) atan2 ((_pos2 select 1) - (_pos1 select 1));
							_retNew = abs (_retNew % 360);
							_angle = _ret + _retNew;
							if (_angle > 180) then {_angle = 360 - _angle};
							if (_angle > _i) then {_i = _angle;_movePos = _x select 0};
						} forEach _movePosList;
					} else {
						_movePos = (_movePosList select (floor random (count _movePosList))) select 0;
					};

					_depth = getTerrainHeightASL _movePos;
					while {_depth > -2} do {		//if there is no water on selected position, go to the position with water (no matter where the enemy is)
						_movePos = (_movePosList select (floor random (count _movePosList))) select 0;
						_depth = getTerrainHeightASL _movePos;
					};
					_agentDepth = (position _agent) select 2;
					_movePos = [_movePos select 0, _movePos select 1, (_agentDepth-1.5)+(random 3)];
					_agent moveTo _movePos;
				};
			} else {
				if ((count _movePosList) > 2) then {		//find place with the best angle toward the enemy (away from enemy)
					_i = 0;
					{
						_pos1 = getpos _agent;
						_pos2 = _x select 0;
						_retNew = ((_pos2 select 0) - (_pos1 select 0)) atan2 ((_pos2 select 1) - (_pos1 select 1));
						_retNew = abs (_retNew % 360);
						_angle = _ret + _retNew;
						if (_angle > 180) then {_angle = 360 - _angle};
						if (_angle > _i) then {_i = _angle;_movePos = _x select 0};
					} forEach _movePosList;
				} else {
					_movePos = (_movePosList select (floor random (count _movePosList))) select 0;
				};

				if (({!(surfaceIsWater (_x select 0)) && !(isOnRoad (_x select 0))} count _movePosList) > 0) then {
					_water = surfaceIsWater _movePos;
					_road = isOnRoad _movePos;
					while {_water || _road} do {		//if there is water on selected position, go to the position with no water (no matter where the enemy is)
						_movePos = (_movePosList select (floor random (count _movePosList))) select 0;
						_water = surfaceIsWater _movePos;
						_road = isOnRoad _movePos;
					};
				} else {_movePos = getPos _agent};

				_agent moveTo _movePos;
			};
		};

		if (isNil "_movepos") then {
			_state = "wait";
			_agent setVariable ["state",_state];
		};

		//--- delay
		if (_state == "danger") then {
			_timeNow = time;
			_delay = 8 + random 8;
		} else {
			_timeNow = time;
			_delay = 1 + random 1;
		};
		sleep 2;
	};

	_fn_reset = {
/*dbg*/	if !(isNil {BIS_fnc_animalBehaviour_debug}) then {debugLog format ["ANIMAL (%1): reset",_agent]};

		_site = _agent getVariable ["inSite",objNull];		//--- site check
		if !(isNull _site) then {
			_animalsInRadius = _site getVariable ["animalsInRadius",1];
			if (typename _animalsInRadius == typename "") then {_animalsInRadius = parsenumber _animalsInRadius;};
			if (_animalsInRadius == 0) then {
				_site = objNull;
			} else {
				_radius = _site getvariable ["radius",10];
			};
		};

		sleep (2 + random 0.5);
	};

	_fn_formationQuit = {		//--- agent removed from members list and leader set to nil
		if (_leader != _agent) then {
			_membersNew = [];
			_members = _leader getVariable ["members",[]];
			{
				if (_x != _agent) then {_membersNew = _membersNew + [_x]};
			} forEach _members;
			_leader setVariable ["members",_membersNew];
		};
		_leader = nil;
		_state = "wait";
		_agent setVariable ["state",_state];
	};

	///------------------------------------------------------------------------
	///----------------------------- Main part --------------------------------
	///------------------------------------------------------------------------

	while {alive _agent} do {
		/// ======= SITUATION CHECK =======
		//--- Removing of animal on wrong place (fish on the ground, rabbits in the water)
/*dbg*/	if !(isNil {BIS_fnc_animalBehaviour_debug}) then {debugLog format ["ANIMAL (%1): situation check - state:%2",_agent,_state]};
		_ctrlDepth = getTerrainHeightASL (getPos _agent);
		if ((_agent isKindOf "Fish_Base_F") || {_agent isKindOf "Turtle_F"}) then {
			if (_ctrlDepth > -0.5) then {deleteVehicle _agent}
		} else {
			if (_ctrlDepth < -0.5) then {deleteVehicle _agent}
		};

		//--- Check of near objects
		_stateDanger = 0;
		_stateDangerList = [];
		if (isNull _agent) exitWith {};
		_targets = (_agent nearObjects _threatMaxRadius) - [_agent];		//all entities around

		//--- Danger objects around
		{
			if (_x iskindof "CAManBase") then {								//people added into the danger list
				_stateDangerList = _stateDangerList + [_x]
			} else {
				if ((_x iskindof "Ship" || _x iskindof "LandVehicle" || _x iskindof "Air") && isEngineOn _x) then {
					_a = 0;
					while {_a < 15} do {_stateDangerList = _stateDangerList + [_x];	_a = _a + 1}	//vehicles with engine on added into the danger list with multiplier 15
				}
			}
		} forEach _targets;
		_stateDanger = count _stateDangerList;

		//--- Scared and formation animals around
		_animalsForm = [];
		_stateFormation = 0;

		{
			_object = _x;
			if (_object isKindOf "animal" && !isnil {_object getvariable "state"}) then {		//animal which is controlled by this script
				//formation check
				if (_object isKindOf typeOf _agent) then {
					if ((_object getVariable "state") in ["formation","wait","move"]) then {
						_animalsForm = _animalsForm + [_object]
					};
				};
			};
		} foreach _targets;


		_stateFormation = count _animalsForm;
		if ((_agent isKindOf "Fish_Base_F") || {_agent isKindOf "Turtle_F"}) then {_stateFormation = 0};	//fish and turtles don't use formation state
/*dbg*/	if !(isNil {BIS_fnc_animalBehaviour_debug}) then {debugLog format ["ANIMAL (%1): _stateDanger %2 -- _stateFormation %3 -- time from last check: %4",_agent,_stateDanger,_stateFormation,(time - _dbgTime)];_dbgTime = time};

		/// ======= REACTION =======
		switch true do {
			case ((_state != "danger") && {_stateDanger > _dangerLimit}) : 					_fn_danger;	//switch to danger (from any state)
			case ((_state == "danger") && {_stateDanger < _dangerLimit} && {((_movePos distance _agent) < 3) || {(time - _timeNow) > _delay}}) : _fn_safe;	//switch from danger to safe
			case ((_state != "formation") && {_state != "danger"} && {_stateFormation > 0} && {(random 1) < _formationPrefer}) :	_fn_formation;	//switch from safe to formation
			case ((_state == "formation") && {((_agent distance _leader) > (_runDistanceMax * (0.3+_formationPrefer*0.8))) || /*switch from formation to safe*/
				 {(_agent == _leader) && {_stateFormation == 0} && {count (_agent getVariable ["members",[]]) == 0}}}) : _fn_safe;	/*agent is too far from leader or agent is leader and there are no other members of group*/
			case ((_state != "wait") && {(_movePos distance _agent) < 3}) : {													//task done
				switch (_state) do {
					case "danger" : 	_fn_danger;
					case "formation" : 	_fn_formation;
					case "move" : 		_fn_safe;
				}
			};
			case ((time - _timeNow) > _delay) : {						//too long delay, try to plan again
				switch (_state) do {
					case "danger" : 	_fn_danger;
					case "formation" : 	_fn_formation;
					case "move" : 		_fn_safe;
					case "wait" : 		_fn_safe;
				}
			};
			case (time > _delaySound && _state != "danger") :
			{
				switch true do
				{
					case (_agent isKindOf "Goat_Base_F"):
					{
						playSound3D ["a3\Sounds_F\environment\animals\Goats\Goat_" + selectRandom ["01","02","03","04","05","06","07","08","09","10","11","12","13","14","15","16","17","18"] + ".wss",_agent,false,getPosASL _agent,1,1,45];
					};
					case (_agent isKindOf "Fowl_Base_F"):
					{
						playSound3D ["a3\Sounds_F\environment\animals\Chickens\Chicken_" + selectRandom ["01","02","03","04","05","06","07","08","09","10","11","12","13","14","15","16","17","18","19","20"] + ".wss",_agent,false,getPosASL _agent,1,1,35];
					};
					case (_agent isKindOf "Cow_random_F"):
					{
						playSound3D ["A3_Aegis\Animals_F_Aegis\Cow\Data\Sound\cow_moo" + selectRandom ["01","02"] + ".wss",_agent,false,getPosASL _agent,2,1,100];
					};
					default {};
				};
				_delaySound = time + random[2,9,25];
			};
			default   _fn_reset;			//nothing is happening, new situation check
		};
	};
};