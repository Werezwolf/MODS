#include "macro.sqf"
private["_item", "_class", "_wpnItems", "_type"];
_item = _this select 0;
_class = _item call ASORGS_fnc_GetClass;
_wpnItems = call ASORGS_fnc_GetLauncherItems;
for[{_i = (count _wpnItems)-1}, {_i >= 0 }, {_i = _i - 1}] do {
    if ((_wpnItems select _i) == _class) then {
        _wpnItems deleteAt _i; 
    };    
};
ASORGS_WeightChanged = true;