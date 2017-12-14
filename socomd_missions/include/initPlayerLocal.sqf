[_this] spawn {
	_args = _this select 0;
	_player = _args select 0;

	waitUntil { missionNamespace getVariable["SOCOMD_InitComplete", 0] == 1 };

	["e", "English"] call acre_api_fnc_babelAddLanguageType;
	["f", "Foreign"] call acre_api_fnc_babelAddLanguageType;
	["z", "Zeus"] call acre_api_fnc_babelAddLanguageType;

	_languagesPlayerSpeaks = ["e"];

	_type = typeOf _player;
	switch(_type) do {
		case "SOCOMD_Homestead": {
			_languagesPlayerSpeaks = _languagesPlayerSpeaks + ["f", "z"];
		};
	};

	_languagesPlayerSpeaks call acre_api_fnc_babelSetSpokenLanguages;
};