///////////////////////////////////////////////////////////
//                =ATM= Airdrop       	 				    //
//         		 =ATM=Pokertour        		       		    //
//				version : 6.0							        //
//				date : 12/02/2014						   //
//                   visit us : atmarma.fr                 //
/////////////////////////////////////////////////////////

private ["_position","_cut","_dialog","_s_alt","_s_alt_text","_sound","_sound2","_soundPath"];
	waitUntil { !isNull player };
[] call ATM_airdrop_fnc_functions;

		_position = GetPos player;
		_z = _position select 2;
		Altitude = 4000;

Keys = 0;

_t = Random [2800,2844,2888];
_r = Random [4616,4646,4676];

ATM_Jump_clickpos = [_r,_t,0];
	_pos = ATM_Jump_clickpos;
	call compile format ['
	mkr_halo = createmarker ["mkr_halo", ATM_Jump_Clickpos];
	"mkr_halo" setMarkerTypeLocal "hd_dot";
	"mkr_halo" setMarkerColorLocal "ColorGreen";
	"mkr_halo" setMarkerTextLocal "Jump";'];
	

	_target = player;
	//RedOn = _target addAction["<t color='#B40404'>Chemlight Red On</t>", "call ATM_airdrop_fnc_chem_on",["Chemlight_red"],6,false,false,"","_target == ( player)"];
    //BlueOn = _target addAction["<t color='#68ccf6'>Chemlight Blue On</t>", "call ATM_airdrop_fnc_chem_on",["Chemlight_blue"],6,false,false,"","_target == ( player)"];
   // YellowOn = _target addAction["<t color='#fcf018'>Chemlight Yellow On</t>", "call ATM_airdrop_fnc_chem_on",["Chemlight_yellow"],6,false,false,"","_target == ( player)"];
   // GreenOn = _target addAction["<t color='#30fd07'>Chemlight Green On</t>", "call ATM_airdrop_fnc_chem_on",["Chemlight_green"],6,false,false,"","_target == ( player)"];
   // IrOn = _target addAction["<t color='#FF00CC'>Strobe IR On</t>", "call ATM_airdrop_fnc_chem_on",["NVG_TargetC"],6,false,false,"","_target == ( player)"];

	_loadout=[_target] call Getloadout;

	_posJump = getMarkerPos "mkr_halo";
	_x = _posJump select 0;
	_y = _posJump select 1;
	_z = _posJump select 2;
	_target setPos [_x,_y,_z+Altitude];
	_target setdir 0;

	openMap false;
	deleteMarker "mkr_halo";

	0=[_target] call Frontpack;

	removeBackpack _target;
	sleep 0,5;
	_target addBackpack "B_Parachute";
if ((getPos _target select 2) >= 8000) then{
	removeHeadgear _target;
	_target addHeadgear "H_CrewHelmetHeli_B";
	sleep 0,5;
};

//hintsilent "";
//hint Localize "STR_ATM_hintjump";
//Cut_Rope = (FindDisplay 46) displayAddEventHandler ["keydown","_this call dokeyDown"];

	_height = getPos _target select 2;

while {(getPos _target select 2) > 2} do {
	if(isTouchingGround _target and player == vehicle player) then{
	}
	else{
	playSound "Vent";
	playSound "Vent2";
	sleep 5;

	};
	if (getPos _target select 2 < 150) then {
		_target action ["OpenParachute", _target];
	};
	if(!alive _target) then {
	_target setPos [getPos _target select 0, getPos _target select 1, 0];
	0=[_target,_loadout] call Setloadout;
	};
};

	//hint Localize "STR_ATM_hintload";
		//_target removeAction RedOn;
		//_target removeAction BlueOn;
		//_target removeAction YellowOn;
		//_target removeAction GreenOn;
		//_target removeaction Iron;
		deletevehicle (_target getvariable "frontpack"); _target setvariable ["frontpack",nil,true];
		//deletevehicle (_target getvariable "lgtarray"); _target setvariable ["lgtarray",nil,true];
		//(findDisplay 46) displayRemoveEventHandler ["KeyDown", Cut_Rope];
sleep 1;
hintsilent "";
sleep 1;

	0=[_target,_loadout] call Setloadout;

if (true) exitWith {};