/*
WARLORDS-SPECIFIC FUNCTION

Author: Josef Zemnek

Description: Spawns a requested asset and drops it on a specific location.
*/

_pos = (_this # 0) getVariable "BIS_WL_dropPos";
(_this # 0) setVariable ["BIS_WL_dropPos", objNull];
_itemPool = [];
_orderedByAI = FALSE;
if (count _this > 2) then {_orderedByAI = _this # 2};
{
	_customGearArr = [];
	_itemConfig = BIS_WL_cfgVehs >> _x;
	if !(isClass _itemConfig) then {
		_customGearArr = +(((_this # 0) getVariable "BIS_WL_purchasable") # 6);
		_itemClass = _x;
		_i = 0;
		{
			if (_itemClass == _x # 0) then {_i = _forEachIndex};
		} forEach _customGearArr;
		_customGearArr = _customGearArr # _i;
	};
	
	_isMan = if (getNumber (_itemConfig >> "isMan") == 1) then {TRUE} else {FALSE};
	
	_finalPos = [];
	_rad = 100;
	_radCoef = 1;
	_radTries = 0;
	while {_finalPos isEqualTo []} do {
		while {_radTries < (_rad * _radCoef) && _finalPos isEqualTo []} do {
			
			_posStart = [_pos, (if (_isMan) then {0} else {50}) + random (_rad * _radCoef), random 360] call BIS_fnc_relPos;
			_finalPos = _posStart isFlatEmpty [3, -1, 0.2, 5, 0, FALSE, player];
			if !(_finalPos isEqualTo []) then {
				_finalPos = ASLToATL _finalPos;
				_finalPos set [2, 0 max (_finalPos # 2)];
				_nearObjs = _finalPos nearObjects ["All", 10];
				if (count _nearObjs > 0) then {
					_finalPos = [];
				};
			};
			_radTries = _radTries + 1;
		};
		_radCoef = _radCoef + 1;
		_radTries = 0;
	};
	
	_para = createVehicle [if (_isMan) then {"Steerable_Parachute_F"} else {"B_Parachute_02_F"}, _finalPos, [], 0, "FLY"];
	_para setPos [_finalPos # 0, _finalPos # 1, if (_isMan) then {50 + random 50} else {150 + random 100}];
	_para setVariable ["finalPos", _finalPos];

	_item = objNull;

	if (_isMan) then {
		_item = group (_this # 0) createUnit [_x, position (_this # 0), [], 0, "NONE"];
    		_item addAction [localize "STR_A3_WL_action_dismiss_teammate", {_unit = (_this select 0); if (vehicle _unit == _unit) then {deleteVehicle _unit} else {(vehicle _unit) deleteVehicleCrew _unit}}, [], -20, FALSE, TRUE, "", "_this == leader _target || _this == _target", -1, FALSE];
		_item addEventHandler ["Killed", {if (isPlayer leader (_this # 0)) then {BIS_manLost = TRUE}; _null = (_this # 0) spawn {sleep BIS_WL_spawnedRemovalTime; if !(isNull _this) then {["Deleting dead teammate %1", _this] call BIS_fnc_WLdebug; if (vehicle _this == _this) then {deleteVehicle _this} else {(vehicle _this) deleteVehicleCrew _this}}}}];
		_item addEventHandler ["HandleRating", {
			if ((_this # 1) > 100) then {
				if (effectiveCommander vehicle (_this # 0) != leader group (_this # 0)) then {
					(leader group (_this # 0)) setVariable ["BIS_WL_funds", (((leader group (_this # 0)) getVariable "BIS_WL_funds") + ((_this # 1) / 20)) min BIS_WL_maxCP, TRUE];
					["Kill reward: %1 (%2)", name leader group (_this # 0), (_this # 1) / 20] call BIS_fnc_WLdebug;
					if ((leader group (_this # 0)) == player) then {
						systemChat format [localize "STR_A3_WL_award_kill", (_this # 1) / 20];
					};
				};
			};
		}];
		_item assignAsDriver _para;
		_item moveInDriver _para;
		_item addEventHandler ["HandleDamage", {if ((_this # 3) in [objNull, _this # 0]) then {0}}];
		_para addEventHandler ["HandleDamage", {if ((_this # 3) == (_this # 0)) then {0}}];
		if (_orderedByAI) then {
			scriptName "WLAirdrop (man) - proximity check";
			_item spawn {
				_away = FALSE;
				sleep 60;
				while {alive _this} do {
					if (_away && _this distance leader _this > 400 && vehicle _this == _this) then {
						["%1 is away from leader, was killed in case it was stuck", _this] call BIS_fnc_WLdebug;
						_this setDamage 1;
					} else {
						if (_this distance leader _this > 400 && vehicle _this == _this) then {
							_away = TRUE;
						} else {
							_away = FALSE;
						};
					};
					sleep 180;
				};
			};
			_item spawn {
				while {alive _this} do {
					waitUntil {sleep 5; !isNull assignedVehicle _this};
					sleep 120;
					if (alive _this) then {
						if !(isNull assignedVehicle _this) then {
							if (vehicle _this == _this) then {
								unassignVehicle _this;
								["%1 is unable to board his assigned vehicle, trying to fix", _this] call BIS_fnc_WLdebug;
								sleep 120;
							};
						};
					};
				};
			};
		};
		_item spawn {
			scriptName "WLAirdrop (man)";
			waitUntil {vehicle _this == _this};
			if (toLower typeOf assignedVehicle _this == "steerable_parachute_f") then {
				unassignVehicle _this;
				[_this] orderGetIn FALSE;
			};
			sleep 5;
			_this removeAllEventHandlers "HandleDamage";
			_pos = position _this;
			sleep 60;
			if (alive _this && _this distance _pos < 5 && !isPlayer leader _this && vehicle _this == _this) then {
				["%1 is stuck, teleporting to leader", _this] call BIS_fnc_WLdebug;
				_this setPos position leader _this;
			};
		};
		_item addEventHandler ["Fired", BIS_WL_mineRestrictionCode];
	} else {
		if (count _customGearArr > 0) then {
			_itemTemplate = _customGearArr # 3;
			_clear = _customGearArr # 5;
			_wpns = _customGearArr # 6;
			_mags = _customGearArr # 7;
			_items = _customGearArr # 8;
			_bPacks = _customGearArr # 9;
			_item = createVehicle [_itemTemplate, _finalPos, [], 0, "CAN_COLLIDE"];
			if (_clear == 1) then {
				clearWeaponCargoGlobal _item;
				clearMagazineCargoGlobal _item;
				clearItemCargoGlobal _item;
				clearBackpackCargoGlobal _item;
			};
			{_item addWeaponCargoGlobal _x} forEach _wpns;
			{_item addItemCargoGlobal _x} forEach _items;
			{_item addMagazineCargoGlobal _x} forEach _mags;
			{_item addBackpackCargoGlobal _x} forEach _bPacks;
			_item setVariable ["BIS_WL_customName", _customGearArr # 4];
		} else {
			_item = createVehicle [_x, _finalPos, [], 0, "CAN_COLLIDE"];
			_item setDir random 360;
		};
		_isUAV = if (getNumber (_itemConfig >> "isUav") == 1) then {TRUE} else {FALSE};
		if (_isUAV) then {createVehicleCrew _item};
		_item setVariable ["BIS_WL_itemOwner", (_this # 0)];
		_item addAction [localize "STR_A3_WL_menu_remove_item", {_purchased = ((_this select 1) getVariable ["BIS_WL_pointer", objNull]) getVariable ["BIS_WL_purchased", []]; _purchased = _purchased - [_this select 0]; ((_this select 1) getVariable ["BIS_WL_pointer", objNull]) setVariable ["BIS_WL_purchased", _purchased, TRUE]; {_x setPos position _x} forEach crew (_this select 0); deleteVehicle (_this select 0)}, [], -20, FALSE, TRUE, "", "vehicle _this != _target && _target in ((_this getVariable ['BIS_WL_pointer', objNull]) getVariable ['BIS_WL_purchased', []])", -1, FALSE];
		if !(_orderedByAI) then {
			if (toLower getText (_itemConfig >> "vehicleClass") != "ammo") then {
				[_item, TRUE] call BIS_WL_vehicleLockCode;
			};
			_ffProt = _item addEventHandler ["HandleDamage", BIS_WL_friendlyFireVehicleProtectionCode];
			[_item, _ffProt] spawn {
				params ["_item", "_ffProt"];
				sleep 180;
				_item removeEventHandler ["HandleDamage", _ffProt];
			};
		};
		_refundEH = _item addEventHandler ["Killed", {
			_owner = (_this # 0) getVariable "BIS_WL_itemOwner";
			_killer = _this # 1;
			if ((isNull _killer || _killer == (_this # 0)) && isPlayer _owner) then {
				_itemType = typeOf (_this # 0);
				_itemIndex = -1;
				_itemsPool = (_owner getVariable "BIS_WL_purchasable") select 1;
				for [{_i = 0}, {_itemIndex < 0}, {_i = _i + 1}] do {
					if (((_itemsPool # _i) # 0) == _itemType) then {_itemIndex = _i};
				};
				_cost = (_itemsPool # _itemIndex) # 1;
				_owner setVariable ["BIS_WL_funds", ((_owner getVariable "BIS_WL_funds") + _cost) min BIS_WL_maxCP, TRUE];
				[toUpper localize "STR_A3_WL_refund"] spawn BIS_fnc_WLSmoothText;
			};
		}];
		_bBox = boundingBoxReal _item;
		_bBoxCenter = (_bbox # 0) vectorAdd (_bBox # 1);
		_item attachTo [_para, _bBoxCenter];
		[_item, BIS_WL_markerIndex, _orderedByAI] spawn BIS_fnc_WLvehicleHandle;
		BIS_WL_markerIndex = BIS_WL_markerIndex + 1;
		_null = [_para, _item, _refundEH, _itemConfig] spawn {
			scriptName "WLAirdrop (veh)";
			_para = _this # 0;
			_pos = position _para;
			_item = _this # 1;
			_refundEH = _this # 2;
			_itemConfig = _this # 3;
			_finalPos = _para getVariable "finalPos";
			while {(getPosATL _item) # 2 >= 2} do {
				_para setVelocity [0, 0, (velocity _para) # 2];
				_para setVectorUp [0,0,1];
				sleep 0.5;
			};
			detach _item;
			_item setPos _finalPos;
			_dropSoundClassArr = getArray (_itemConfig >> "soundBuildingCrash");
			_dropSoundArr = [];
			{
				if (_forEachIndex % 2 == 0) then {
					_dropSoundArr pushBack ((getArray (_itemConfig >> _x)) # 0);
				};
			} forEach _dropSoundClassArr;
			_dropSound = selectRandom _dropSoundArr;
			playSound3D [_dropSound + ".wss", _item];
			_para disableCollisionWith _item;
			BIS_WL_recentlyPurchasedAssets = BIS_WL_recentlyPurchasedAssets - [_item];
			sleep 10;
			_item removeEventHandler ["Killed", _refundEH];
		};
		if (_orderedByAI) then {
			_item setUnloadInCombat [FALSE, FALSE];
			[_item, _this # 0] spawn {
				_t = time + 180;
				scriptName "WLAirdrop (AI veh)";
				_veh = _this # 0;
				_owner = _this # 1;
				_grp = group _owner;
				waitUntil {!canMove _veh || time > _t};
				if (!canMove _veh || (time > _t && vehicle leader _grp != _veh)) then {
					_grp setVariable ["BIS_WL_groupVehs", (_grp getVariable "BIS_WL_groupVehs") - [_veh], TRUE];
					_grp leaveVehicle _veh;
					if (time > _t) then {
						_grp setCurrentWaypoint ((leader _grp) getVariable ["BIS_WL_curWP", [_grp, 0]]);
					};
				};
			};
			[_item, _itemConfig] spawn {
				sleep 60;
				scriptName "WLAirdrop (stuck check)";
				_itemConfig = _this # 1;
				_this = _this # 0;
				while {!isNull _this} do {
					_pos = position _this;
					sleep 180;
					if ((crew _this) findIf {alive _x} >= 0 && (crew _this) findIf {isPlayer _x} == -1 && (position _this) distance _pos < 0.5) then {
						["%1 is stuck with %2, abandoning vehicle", effectiveCommander _this, getText (_itemConfig >> "displayName")] call BIS_fnc_WLdebug;
						(group effectiveCommander _this) setVariable ["BIS_WL_groupVehs", ((group effectiveCommander _this) getVariable "BIS_WL_groupVehs") - [_this], TRUE];
						(group effectiveCommander _this) leaveVehicle _this;
					};
				};
			};
			_item addEventHandler ["GetIn", {
				_null = _this spawn {
					_veh = _this # 0;
					_unit = _this # 2;
					if ((_this # 1) == "driver" && !(isPlayer leader group _unit)) then {
						sleep 20;
						_unit move position _unit;
					};
				};
			}];
		};
	};
	_itemPool pushBack _item;
	_itemName = getText (BIS_WL_cfgVehs >> typeOf _item >> "displayName");
	_item setVariable ["BIS_WL_iconText", _itemName];
	if !(_orderedByAI || _isMan) then {
		BIS_WL_recentlyPurchasedAssets pushBack _item;
	};
} forEach (_this # 1);

if ((_this # 0) == player || isServer) then {
	playSound3D ["A3_Aegis\Sounds_F_Aegis\sfx\flyby.wss", objNull, FALSE, (position _pos) vectorAdd [0, 0, 100]];
};

if (isPlayer (_this # 0)) then {BIS_WL_matesInBasket = 0; BIS_WL_vehsInBasket = 0};

((_this # 0) getVariable "BIS_WL_pointer") setVariable ["BIS_WL_purchased", (((_this # 0) getVariable "BIS_WL_pointer") getVariable "BIS_WL_purchased") + _itemPool, TRUE];

_itemPool