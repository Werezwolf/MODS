#include "macro.sqf"
    _map = "";
    _items = (ASORGS_CurrentInventory select GSVI_Items);
    for [{_i = 0}, {(_i < count _items) && (_map == "")}, {_i = _i + 1}] do
    {
        _item = _items select _i;
        if(getText (configFile >> "cfgWeapons" >> _item >> "simulation") == "ItemMap") then {
            _map = _item;
        };
    };
    _map
