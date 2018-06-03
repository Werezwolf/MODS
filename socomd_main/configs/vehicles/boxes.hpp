
////////////////////////////////////////////////////////////////////////////////
// INTERACTIVE BOX

class Land_PaperBox_closed_F;
class SOCOMD_Interactive_QStore : Land_PaperBox_closed_F
{
	displayName = "SOCOMD Interactive QStore";
	author = AUTHOR_STR;

	ace_cargo_hasCargo = 0;
	ace_cargo_canLoad = 0;
	ace_dragging_canDrag = 0;
	ace_dragging_canCarry = 0;

	class TransportMagazines {};
	class TransportWeapons {};
	class TransportItems {};
	class TransportBackpacks {};

	class ACE_Actions 
	{
		class ACE_MainActions 
		{
			displayName = "Q-Store";
			selection = "";
			distance = 5;
			condition = 1;

			class SOCOMD_OpenGearSelector
			{
				displayName = "Personalise";
				condition = 1;
				statement = "call ASORGS_fnc_Open";
				showDisabled = 0;
				exceptions[] = {"isNotInside", "isNotSitting"};
			};

			class SOCOMD_Loadouts
			{
				displayName = "Loadouts";
				selection = "";
				distance = 5;
				condition = 1;

				class ACE_SwitchRoleActionsSASR
				{
					displayName = "Change Role (SASR)";
					selection = "";
					distance = 5;
					condition = 1;

					class SOCOMD_Loadout_Trooper
					{
						displayName = "Remove Gear";
						condition = 1;
						statement = "[_player, 'SASR_Trooper'] call SOCOMD_fnc_SwitchUnitLoadout";
						showDisabled = 0;
						exceptions[] = {"isNotInside", "isNotSitting"};
					};

					class SOCOMD_Loadout_TroopLeader
					{
						displayName = "Troop Leader";
						condition = 1;
						statement = "[_player, 'SASR_TroopLeader'] call SOCOMD_fnc_SwitchUnitLoadout";
						showDisabled = 0;
						exceptions[] = {"isNotInside", "isNotSitting"};
					};

					class SOCOMD_Loadout_PatrolLeader
					{
						displayName = "Patrol Leader";
						condition = 1;
						statement = "[_player, 'SASR_PatrolLeader'] call SOCOMD_fnc_SwitchUnitLoadout";
						showDisabled = 0;
						exceptions[] = {"isNotInside", "isNotSitting"};
					};
					
					class SOCOMD_Loadout_Rifleman
					{
						displayName = "Rifleman";
						condition = 1;
						statement = "[_player, 'SASR_Rifleman'] call SOCOMD_fnc_SwitchUnitLoadout";
						showDisabled = 0;
						exceptions[] = {"isNotInside", "isNotSitting"};
					};

					class SOCOMD_Loadout_Grenadier
					{
						displayName = "Grenadier";
						condition = 1;
						statement = "[_player, 'SASR_Grenadier'] call SOCOMD_fnc_SwitchUnitLoadout";
						showDisabled = 0;
						exceptions[] = {"isNotInside", "isNotSitting"};
					};

					class SOCOMD_Loadout_Sapper
					{
						displayName = "Sapper";
						condition = 1;
						statement = "[_player, 'SASR_Sapper'] call SOCOMD_fnc_SwitchUnitLoadout";
						showDisabled = 0;
						exceptions[] = {"isNotInside", "isNotSitting"};
					};

					class SOCOMD_Loadout_MachineGunner
					{
						displayName = "Machine Gunner";
						condition = 1;
						statement = "[_player, 'SASR_MachineGunner'] call SOCOMD_fnc_SwitchUnitLoadout";
						showDisabled = 0;
						exceptions[] = {"isNotInside", "isNotSitting"};
					};

					class SOCOMD_Loadout_Medic
					{
						displayName = "Medic";
						condition = 1;
						statement = "[_player, 'SASR_Medic'] call SOCOMD_fnc_SwitchUnitLoadout";
						showDisabled = 0;
						exceptions[] = {"isNotInside", "isNotSitting"};
					};

					class SOCOMD_Loadout_Marksman
					{
						displayName = "Marksman";
						condition = 1;
						statement = "[_player, 'SASR_Marksman'] call SOCOMD_fnc_SwitchUnitLoadout";
						showDisabled = 0;
						exceptions[] = {"isNotInside", "isNotSitting"};
					};

					class SOCOMD_Loadout_Sniper
					{
						displayName = "Sniper";
						condition = 1;
						statement = "[_player, 'SASR_Sniper'] call SOCOMD_fnc_SwitchUnitLoadout";
						showDisabled = 0;
						exceptions[] = {"isNotInside", "isNotSitting"};
					};

					class SOCOMD_Loadout_LAT
					{
						displayName = "Light Anti-tank";
						condition = 1;
						statement = "[_player, 'SASR_LAT'] call SOCOMD_fnc_SwitchUnitLoadout";
						showDisabled = 0;
						exceptions[] = {"isNotInside", "isNotSitting"};
					};

					class SOCOMD_Loadout_MAT
					{
						displayName = "Medium Anti-tank";
						condition = 1;
						statement = "[_player, 'SASR_MAT'] call SOCOMD_fnc_SwitchUnitLoadout";
						showDisabled = 0;
						exceptions[] = {"isNotInside", "isNotSitting"};
					};

					class SOCOMD_Loadout_HAT
					{
						displayName = "Heavy Anti-tank";
						condition = 1;
						statement = "[_player, 'SASR_HAT'] call SOCOMD_fnc_SwitchUnitLoadout";
						showDisabled = 0;
						exceptions[] = {"isNotInside", "isNotSitting"};
					};
				};

				class ACE_SwitchRoleActionsJAC
				{
					displayName = "Change Role (JAC)";
					selection = "";
					distance = 5;
					condition = 1;

					class SOCOMD_Loadout_Aircrew
					{
						displayName = "Aircrew";
						condition = 1;
						statement = "[_player, 'JAC_Aircrew'] call SOCOMD_fnc_SwitchUnitLoadout";
						showDisabled = 0;
						exceptions[] = {"isNotInside", "isNotSitting"};
					};

					class SOCOMD_Loadout_GroundCrew
					{
						displayName = "Ground Crew";
						condition = 1;
						statement = "[_player, 'JAC_GroundCrew'] call SOCOMD_fnc_SwitchUnitLoadout";
						showDisabled = 0;
						exceptions[] = {"isNotInside", "isNotSitting"};
					};

					class SOCOMD_Loadout_PJ
					{
						displayName = "PJ";
						condition = 1;
						statement = "[_player, 'JAC_PJ'] call SOCOMD_fnc_SwitchUnitLoadout";
						showDisabled = 0;
						exceptions[] = {"isNotInside", "isNotSitting"};
					};

					class SOCOMD_Loadout_Pilot
					{
						displayName = "Pilot";
						condition = 1;
						statement = "[_player, 'JAC_Pilot'] call SOCOMD_fnc_SwitchUnitLoadout";
						showDisabled = 0;
						exceptions[] = {"isNotInside", "isNotSitting"};
					};

					class SOCOMD_Loadout_Officer
					{
						displayName = "Officer";
						condition = 1;
						statement = "[_player, 'JAC_Officer'] call SOCOMD_fnc_SwitchUnitLoadout";
						showDisabled = 0;
						exceptions[] = {"isNotInside", "isNotSitting"};
					};
				};

				class SOCOMD_HeadgearActions 
				{
					displayName = "Headgear";
					selection = "";
					distance = 5;
					condition = 1;

					class SOCOMD_Headgear_TakeCap
					{
						displayName = "Switch to a Cap";
						condition = 1;
						statement = "[_player , 'SOCOMD_Cap_HS'] call SOCOMD_fnc_Action_ReplaceHeadgear";
						showDisabled = 0;
						exceptions[] = {"isNotInside", "isNotSitting"};
					};

					class SOCOMD_Headgear_TakeBoonie
					{
						displayName = "Switch to a Boonie";
						condition = 1;
						statement = "[_player , 'SOCOMD_Boonie'] call SOCOMD_fnc_Action_ReplaceHeadgear";
						showDisabled = 0;
						exceptions[] = {"isNotInside", "isNotSitting"};
					};

					class SOCOMD_Headgear_TakeBandanna
					{
						displayName = "Switch to a Bandanna";
						condition = 1;
						statement = "[_player , 'SOCOMD_Bandanna'] call SOCOMD_fnc_Action_ReplaceHeadgear";
						showDisabled = 0;
						exceptions[] = {"isNotInside", "isNotSitting"};
					};

					class SOCOMD_Headgear_TakeBowman
					{
						displayName = "Switch to a Bowman";
						condition = 1;
						statement = "[_player , 'VSM_Bowman'] call SOCOMD_fnc_Action_ReplaceHeadgear";
						showDisabled = 0;
						exceptions[] = {"isNotInside", "isNotSitting"};
					};

					class SOCOMD_Headgear_Beanie
					{
						displayName = "Switch to a Beanie";
						condition = 1;
						statement = "[_player , 'VSM_Beanie_tan'] call SOCOMD_fnc_Action_ReplaceHeadgear";
						showDisabled = 0;
						exceptions[] = {"isNotInside", "isNotSitting"};
					};

					class SOCOMD_Headgear_ReplaceHelmet_FASTMulticam
					{
						displayName = "Switch to a FAST Multicam Helmet";
						condition = "!(((headgear _player) == 'SOCOMD_FAST_Multi') OR ((headgear _player) == 'SOCOMD_FAST_Multi_Gog'))";
						statement = "[_player , 'SOCOMD_FAST_Multi'] call SOCOMD_fnc_Action_ReplaceHeadgear";
						showDisabled = 0;
						exceptions[] = {"isNotInside", "isNotSitting"};
					};

					class SOCOMD_Headgear_ReplaceHelmet_FASTTan
					{
						displayName = "Switch to a FAST Tan Helmet";
						condition = "!(((headgear _player) == 'SOCOMD_FAST_Tan') OR ((headgear _player) == 'SOCOMD_FAST_Tan_Gog'))";
						statement = "[_player , 'SOCOMD_FAST_Tan'] call SOCOMD_fnc_Action_ReplaceHeadgear";
						showDisabled = 0;
						exceptions[] = {"isNotInside", "isNotSitting"};
					};

					class SOCOMD_Headgear_ReplaceHelmet_MICHMulticam
					{
						displayName = "Switch to a MICH Multicam Helmet";
						condition = "!(((headgear _player) == 'SOCOMD_MICH_Multi') OR ((headgear _player) == 'SOCOMD_MICH_Multi_Gog'))";
						statement = "[_player , 'SOCOMD_MICH_Multi'] call SOCOMD_fnc_Action_ReplaceHeadgear";
						showDisabled = 0;
						exceptions[] = {"isNotInside", "isNotSitting"};
					};

					class SOCOMD_Headgear_ReplaceHelmet_MICHTan
					{
						displayName = "Switch to a MICH Tan Helmet";
						condition = "!(((headgear _player) == 'SOCOMD_MICH_Tan') OR ((headgear _player) == 'SOCOMD_MICH_Tan_Gog'))";
						statement = "[_player , 'SOCOMD_MICH_Tan'] call SOCOMD_fnc_Action_ReplaceHeadgear";
						showDisabled = 0;
						exceptions[] = {"isNotInside", "isNotSitting"};
					};
				};
			};

			class SOCOMD_Weapons
			{
				displayName = "Weapons";
				selection = "";
				distance = 5;
				condition = 1;
				
				class SOCOMD_LoadoutWeapon_SMA_M4afgSTOCK
                {
                    displayName = "M4A5";
                    condition = "[_player, 'SMA_M4afgSTOCK'] call SOCOMD_fnc_ActionCondition_CanUseLoadoutWeapon";
                    statement = "[_player , 'SMA_M4afgSTOCK'] call SOCOMD_fnc_SwitchUnitLoadoutWeapon";
                    showDisabled = 0;
                    exceptions[] = {"isNotInside", "isNotSitting"};
                };


				class SOCOMD_LoadoutWeapon_SMA_M4_GL_SM
				{
					displayName = "M4A5 UGL";
					condition = "[_player, 'SMA_M4_GL_SM'] call SOCOMD_fnc_ActionCondition_CanUseLoadoutWeapon";
					statement = "[_player , 'SMA_M4_GL_SM'] call SOCOMD_fnc_SwitchUnitLoadoutWeapon";
					showDisabled = 0;
					exceptions[] = {"isNotInside", "isNotSitting"};
				};

				class SOCOMD_LoadoutWeapon_SMA_MK18MOEBLK
				{
					displayName = "MK18 MOE";
					condition = "[_player, 'SMA_MK18MOEBLK'] call SOCOMD_fnc_ActionCondition_CanUseLoadoutWeapon";
					statement = "[_player , 'SMA_MK18MOEBLK'] call SOCOMD_fnc_SwitchUnitLoadoutWeapon";
					showDisabled = 0;
					exceptions[] = {"isNotInside", "isNotSitting"};
				};

				class SOCOMD_LoadoutWeapon_SMA_MK18BLK_GL_SM
				{
					displayName = "MK18 MOE UGL";
					condition = "[_player, 'SMA_MK18BLK_GL_SM'] call SOCOMD_fnc_ActionCondition_CanUseLoadoutWeapon";
					statement = "[_player , 'SMA_MK18BLK_GL_SM'] call SOCOMD_fnc_SwitchUnitLoadoutWeapon";
					showDisabled = 0;
					exceptions[] = {"isNotInside", "isNotSitting"};
				};

				class SOCOMD_LoadoutWeapon_SMA_AUG_A3_F
				{
					displayName = "AUG A3";
					condition = "[_player, 'SMA_AUG_A3_F'] call SOCOMD_fnc_ActionCondition_CanUseLoadoutWeapon";
					statement = "[_player , 'SMA_AUG_A3_F'] call SOCOMD_fnc_SwitchUnitLoadoutWeapon";
					showDisabled = 0;
					exceptions[] = {"isNotInside", "isNotSitting"};
				};

				class SOCOMD_LoadoutWeapon_SMA_AUG_EGLM
				{
					displayName = "AUG A3 UGL";
					condition = "[_player, 'SMA_AUG_EGLM'] call SOCOMD_fnc_ActionCondition_CanUseLoadoutWeapon";
					statement = "[_player , 'SMA_AUG_EGLM'] call SOCOMD_fnc_SwitchUnitLoadoutWeapon";
					showDisabled = 0;
					exceptions[] = {"isNotInside", "isNotSitting"};
				};

				class SOCOMD_LoadoutWeapon_CUP_lmg_m249_pip2
				{
					displayName = "Minimi";
					condition = "[_player, 'CUP_lmg_m249_pip2'] call SOCOMD_fnc_ActionCondition_CanUseLoadoutWeapon";
					statement = "[_player , 'CUP_lmg_m249_pip2'] call SOCOMD_fnc_SwitchUnitLoadoutWeapon";
					showDisabled = 0;
					exceptions[] = {"isNotInside", "isNotSitting"};
				};

				class SOCOMD_LoadoutWeapon_sma_minimi_mk3_762tsb
				{
					displayName = "Maximi";
					condition = "[_player, 'sma_minimi_mk3_762tsb'] call SOCOMD_fnc_ActionCondition_CanUseLoadoutWeapon";
					statement = "[_player , 'sma_minimi_mk3_762tsb'] call SOCOMD_fnc_SwitchUnitLoadoutWeapon";
					showDisabled = 0;
					exceptions[] = {"isNotInside", "isNotSitting"};
				};
				class SOCOMD_LoadoutWeapon_SPARTAN_EBR_black_F
				{
					displayName = "Mk14 EBR";
					condition = "[_player, 'SPARTAN_EBR_black_F'] call SOCOMD_fnc_ActionCondition_CanUseLoadoutWeapon";
					statement = "[_player , 'SPARTAN_EBR_black_F'] call SOCOMD_fnc_SwitchUnitLoadoutWeapon";
					showDisabled = 0;
					exceptions[] = {"isNotInside", "isNotSitting"};
				};
				class SOCOMD_LoadoutWeapon_SMA_HK417_16in
				{
					displayName = "HK 417";
					condition = "[_player, 'SMA_HK417_16in'] call SOCOMD_fnc_ActionCondition_CanUseLoadoutWeapon";
					statement = "[_player , 'SMA_HK417_16in'] call SOCOMD_fnc_SwitchUnitLoadoutWeapon";
					showDisabled = 0;
					exceptions[] = {"isNotInside", "isNotSitting"};
				};
				class SOCOMD_LoadoutWeapon_hlc_rifle_awmagnum
				{
					displayName = "SR98 .300";
					condition = "[_player, 'hlc_rifle_awmagnum'] call SOCOMD_fnc_ActionCondition_CanUseLoadoutWeapon";
					statement = "[_player , 'hlc_rifle_awmagnum'] call SOCOMD_fnc_SwitchUnitLoadoutWeapon";
					showDisabled = 0;
					exceptions[] = {"isNotInside", "isNotSitting"};
				};
				class SOCOMD_LoadoutWeapon_hlc_rifle_awMagnum_OD_ghillie
				{
					displayName = "SR98 .300 Camo";
					condition = "[_player, 'hlc_rifle_awMagnum_OD_ghillie'] call SOCOMD_fnc_ActionCondition_CanUseLoadoutWeapon";
					statement = "[_player , 'hlc_rifle_awMagnum_OD_ghillie'] call SOCOMD_fnc_SwitchUnitLoadoutWeapon";
					showDisabled = 0;
					exceptions[] = {"isNotInside", "isNotSitting"};
				};
				class SOCOMD_LoadoutWeapon_hlc_rifle_awcovert
				{
					displayName = "SR98 .300 Suppressed";
					condition = "[_player, 'hlc_rifle_awcovert'] call SOCOMD_fnc_ActionCondition_CanUseLoadoutWeapon";
					statement = "[_player , 'hlc_rifle_awcovert'] call SOCOMD_fnc_SwitchUnitLoadoutWeapon";
					showDisabled = 0;
					exceptions[] = {"isNotInside", "isNotSitting"};
				};
			};

			class SOCOMD_Uniforms
			{
				displayName = "Uniforms";
				selection = "";
				distance = 5;
				condition = 1;

				class SOCOMD_Uniforms_ToggleDiving
                {
                    displayName = "Toggle Diving Uniform";
                    condition = "[_player] call SOCOMD_fnc_ActionCondition_CanToggleDiving";
                    statement = "[_player] call SOCOMD_fnc_Action_ToggleDiving";
                    showDisabled = 0;
                    exceptions[] = {"isNotInside", "isNotSitting"};
                };
			};
		};
	};
};

class SOCOMD_Personal_box : Land_PaperBox_closed_F
{
	displayName = "SOCOMD Personal Box";
	author = AUTHOR_STR;

	ace_cargo_hasCargo = 0;
	ace_cargo_canLoad = 0;
	ace_dragging_canDrag = 0;
	ace_dragging_canCarry = 0;

	class TransportMagazines {};
	class TransportWeapons {};
	class TransportItems {};
	class TransportBackpacks {};

	class ACE_Actions 
	{
		class ACE_MainActions 
		{
			displayName = "Q-Store";
			selection = "";
			distance = 5;
			condition = 1;

			class SOCOMD_OpenGearSelector
			{
				displayName = "Personalise";
				condition = 1;
				statement = "call ASORGS_fnc_Open";
				showDisabled = 0;
				exceptions[] = {"isNotInside", "isNotSitting"};
			};

			class SOCOMD_Loadouts
			{
				displayName = "Loadouts";
				selection = "";
				distance = 5;
				condition = 1;

				class SOCOMD_HeadgearActions 
				{
					displayName = "Headgear";
					selection = "";
					distance = 5;
					condition = 1;

					class SOCOMD_Headgear_TakeCap
					{
						displayName = "Switch to a Cap";
						condition = 1;
						statement = "[_player , 'SOCOMD_Cap_HS'] call SOCOMD_fnc_Action_ReplaceHeadgear";
						showDisabled = 0;
						exceptions[] = {"isNotInside", "isNotSitting"};
					};

					class SOCOMD_Headgear_TakeBoonie
					{
						displayName = "Switch to a Boonie";
						condition = 1;
						statement = "[_player , 'SOCOMD_Boonie'] call SOCOMD_fnc_Action_ReplaceHeadgear";
						showDisabled = 0;
						exceptions[] = {"isNotInside", "isNotSitting"};
					};

					class SOCOMD_Headgear_TakeBandanna
					{
						displayName = "Switch to a Bandanna";
						condition = 1;
						statement = "[_player , 'SOCOMD_Bandanna'] call SOCOMD_fnc_Action_ReplaceHeadgear";
						showDisabled = 0;
						exceptions[] = {"isNotInside", "isNotSitting"};
					};

					class SOCOMD_Headgear_TakeBowman
					{
						displayName = "Switch to a Bowman";
						condition = 1;
						statement = "[_player , 'VSM_Bowman'] call SOCOMD_fnc_Action_ReplaceHeadgear";
						showDisabled = 0;
						exceptions[] = {"isNotInside", "isNotSitting"};
					};

					class SOCOMD_Headgear_Beanie
					{
						displayName = "Switch to a Beanie";
						condition = 1;
						statement = "[_player , 'VSM_Beanie_tan'] call SOCOMD_fnc_Action_ReplaceHeadgear";
						showDisabled = 0;
						exceptions[] = {"isNotInside", "isNotSitting"};
					};

					class SOCOMD_Headgear_ReplaceHelmet_FASTMulticam
					{
						displayName = "Switch to a FAST Multicam Helmet";
						condition = "!(((headgear _player) == 'SOCOMD_FAST_Multi') OR ((headgear _player) == 'SOCOMD_FAST_Multi_Gog'))";
						statement = "[_player , 'SOCOMD_FAST_Multi'] call SOCOMD_fnc_Action_ReplaceHeadgear";
						showDisabled = 0;
						exceptions[] = {"isNotInside", "isNotSitting"};
					};

					class SOCOMD_Headgear_ReplaceHelmet_FASTTan
					{
						displayName = "Switch to a FAST Tan Helmet";
						condition = "!(((headgear _player) == 'SOCOMD_FAST_Tan') OR ((headgear _player) == 'SOCOMD_FAST_Tan_Gog'))";
						statement = "[_player , 'SOCOMD_FAST_Tan'] call SOCOMD_fnc_Action_ReplaceHeadgear";
						showDisabled = 0;
						exceptions[] = {"isNotInside", "isNotSitting"};
					};

					class SOCOMD_Headgear_ReplaceHelmet_MICHMulticam
					{
						displayName = "Switch to a MICH Multicam Helmet";
						condition = "!(((headgear _player) == 'SOCOMD_MICH_Multi') OR ((headgear _player) == 'SOCOMD_MICH_Multi_Gog'))";
						statement = "[_player , 'SOCOMD_MICH_Multi'] call SOCOMD_fnc_Action_ReplaceHeadgear";
						showDisabled = 0;
						exceptions[] = {"isNotInside", "isNotSitting"};
					};

					class SOCOMD_Headgear_ReplaceHelmet_MICHTan
					{
						displayName = "Switch to a MICH Tan Helmet";
						condition = "!(((headgear _player) == 'SOCOMD_MICH_Tan') OR ((headgear _player) == 'SOCOMD_MICH_Tan_Gog'))";
						statement = "[_player , 'SOCOMD_MICH_Tan'] call SOCOMD_fnc_Action_ReplaceHeadgear";
						showDisabled = 0;
						exceptions[] = {"isNotInside", "isNotSitting"};
					};
				};
			};
		};
	};
};

class SOCOMD_Training_box : SOCOMD_Personal_box {

	displayName = "SOCOMD Training Box";
	author = AUTHOR_STR;

	ace_cargo_hasCargo = 0;
	ace_cargo_canLoad = 0;
	ace_dragging_canDrag = 0;
	ace_dragging_canCarry = 0;

	class TransportMagazines {};
	class TransportWeapons {};
	class TransportItems {};
	class TransportBackpacks {};

	class ACE_Actions 
	{
		class ACE_MainActions 
		{
			displayName = "Q-Store";
			selection = "";
			distance = 5;
			condition = 1;

			class SOCOMD_OpenGearSelector
			{
				displayName = "Personalise";
				condition = 1;
				statement = "call ASORGS_fnc_Open";
				showDisabled = 0;
				exceptions[] = {"isNotInside", "isNotSitting"};
			};

			class SOCOMD_Loadouts
			{
				displayName = "Loadouts";
				selection = "";
				distance = 5;
				condition = 1;

				class SOCOMD_Loadout_2CDOLeader
				{
					displayName = "Section Leader";
					condition = 1;
					statement = "[_player, 'CDO_Leader'] call SOCOMD_fnc_SwitchUnitLoadout";
					showDisabled = 0;
					exceptions[] = {"isNotInside", "isNotSitting"};
				};

				class SOCOMD_Loadout_2CDO2IC
				{
					displayName = "Section 2IC";
					condition = 1;
					statement = "[_player, 'CDO_2IC'] call SOCOMD_fnc_SwitchUnitLoadout";
					showDisabled = 0;
					exceptions[] = {"isNotInside", "isNotSitting"};
				};

				class SOCOMD_Loadout_2CDOSapper
				{
					displayName = "Section Sapper";
					condition = 1;
					statement = "[_player, 'CDO_Sapper'] call SOCOMD_fnc_SwitchUnitLoadout";
					showDisabled = 0;
					exceptions[] = {"isNotInside", "isNotSitting"};
				};

				class SOCOMD_Loadout_2CDOGunner
				{
					displayName = "Section Gunner";
					condition = 1;
					statement = "[_player, 'CDO_Gunner'] call SOCOMD_fnc_SwitchUnitLoadout";
					showDisabled = 0;
					exceptions[] = {"isNotInside", "isNotSitting"};
				};

				class SOCOMD_Loadout_2CDORifleman
				{
					displayName = "Section Rifleman";
					condition = 1;
					statement = "[_player, 'CDO_Rifleman'] call SOCOMD_fnc_SwitchUnitLoadout";
					showDisabled = 0;
					exceptions[] = {"isNotInside", "isNotSitting"};
				};

				class SOCOMD_Loadout_2CDOMarksman
				{
					displayName = "Section Marksman";
					condition = 1;
					statement = "[_player, 'CDO_Marksman'] call SOCOMD_fnc_SwitchUnitLoadout";
					showDisabled = 0;
					exceptions[] = {"isNotInside", "isNotSitting"};
				};

				class SOCOMD_Loadout_2CDOAT
				{
					displayName = "Section AT";
					condition = 1;
					statement = "[_player, 'CDO_AT'] call SOCOMD_fnc_SwitchUnitLoadout";
					showDisabled = 0;
					exceptions[] = {"isNotInside", "isNotSitting"};
				};

				class SOCOMD_Loadout_2CDOMedic
				{
					displayName = "Section Medic";
					condition = 1;
					statement = "[_player, 'CDO_Medic'] call SOCOMD_fnc_SwitchUnitLoadout";
					showDisabled = 0;
					exceptions[] = {"isNotInside", "isNotSitting"};
				};
			};
		};
	};	
};

////////////////////////////////////////////////////////////////////////////////
// CARGO BOX

class Land_Cargo10_military_green_F;
class SOCOMD_CargoNet: Land_Cargo10_military_green_F
{
	displayName = "SOCOMD Cargo Net Box";
	author = AUTHOR_STR;
	
	ace_cargo_hasCargo = 1;
	ace_cargo_size = 8;
	ace_cargo_space = 6;
	ace_cargo_canLoad = 0;
	ace_dragging_canDrag = 1;
	ace_dragging_canCarry = 0;
	ace_dragging_dragDirection = 0;
	ace_dragging_dragPosition[] = {0,1.5,0};

	editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_CargoNet_01_ammo_F.jpg";
	model = "\A3\Supplies_F_Heli\CargoNets\CargoNet_01_ammo_F.p3d";
	
	class ACE_Actions 
	{
		class ACE_MainActions 
		{
			displayName = "Interactions";
			selection = "";
			distance = 5;
			condition = 1;
			class ACE_OpenBox {};
		};
	};
	
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportItems {};
	class TransportBackpacks {};
};

////////////////////////////////////////////////////////////////////////////////
// CUSTOM SUPPLY BOXES

class B_supplyCrate_F;
class SOCOMD_Supply_Crate: B_supplyCrate_F
{
	scope = public;
	accuracy = 1000;
	displayName = "SOCOMD Supply Crate";
	author = AUTHOR_STR;
	maximumLoad = 99999;
	transportMaxWeapons = 15000;
	transportMaxMagazines = 20000;
	transportMaxBackpacks = 100;
	ace_cargo_size = 8;
	ace_dragging_canDrag = 1;
	ace_dragging_canCarry = 0;
	ace_dragging_dragPosition[] = {0,1.5,0};
	weight = 20;

	class TransportMagazines 
	{
		TRANSPORT_MAGAZINE(SMA_30Rnd_556x45_M855A1, 24)
		TRANSPORT_MAGAZINE(SMA_30Rnd_556x45_M855A1_Tracer, 12)
		TRANSPORT_MAGAZINE(SMA_20Rnd_762x51mm_M80A1_EPR, 4)
		TRANSPORT_MAGAZINE(SMA_150Rnd_762_M80A1, 2)
		TRANSPORT_MAGAZINE(RH_12Rnd_45cal_usp, 16)
		TRANSPORT_MAGAZINE(SmokeShell, 16)
		TRANSPORT_MAGAZINE(SmokeShellGreen, 16)
		TRANSPORT_MAGAZINE(HandGrenade, 16)
		TRANSPORT_MAGAZINE(ACE_M84, 16)
		TRANSPORT_MAGAZINE(B_IR_Grenade, 16)
		TRANSPORT_MAGAZINE(1Rnd_HE_Grenade_shell, 4)
		TRANSPORT_MAGAZINE(1Rnd_SmokeRed_Grenade_shell, 2)
		TRANSPORT_MAGAZINE(ACE_HuntIR_M203, 2)
	};

	class TransportItems 
	{
		TRANSPORT_ITEM(ACE_Earplugs, 8)
		TRANSPORT_ITEM(ACE_NVG_Gen4, 8)
		TRANSPORT_ITEM(ACE_CableTie, 16)
		TRANSPORT_ITEM(ACE_fieldDressing, 32)
		TRANSPORT_ITEM(ACE_quikclot, 32)
		TRANSPORT_ITEM(ACE_elasticBandage, 32)
		TRANSPORT_ITEM(ACE_packingBandage, 32)
		TRANSPORT_ITEM(ACE_morphine, 16)
		TRANSPORT_ITEM(ACE_epinephrine, 16)
		TRANSPORT_ITEM(ACE_tourniquet, 8)
		TRANSPORT_ITEM(ACE_salineIV_500, 6)
		TRANSPORT_ITEM(ACE_bodyBag, 8)
		TRANSPORT_ITEM(ACE_DefusalKit, 1)
		TRANSPORT_ITEM(ACE_M26_Clacker, 1)
		TRANSPORT_ITEM(ACE_wirecutter, 1)
		TRANSPORT_ITEM(DemoCharge_Remote_Mag, 5)
		TRANSPORT_ITEM(SatchelCharge_Remote_Mag, 1)
	};

	class TransportWeapons {};
	class TransportBackpacks {};
};

class SOCOMD_Ammo_Box : NATO_Box_Base
{
	scope = public;
	model = "\A3\weapons_F\AmmoBoxes\AmmoBox_F";
	hiddenSelectionsTextures[] = {"A3\Weapons_F\Ammoboxes\data\AmmoBox_signs_CA.paa","A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"};
	accuracy = 1000;
	displayName = "SOCOMD Ammo Box";
	author = AUTHOR_STR;
	maximumLoad = 99999;
	transportMaxWeapons = 15000;
	transportMaxMagazines = 20000;
	transportMaxBackpacks = 100;
	ace_cargo_size = 2;
	ace_dragging_canDrag = 1;
	ace_dragging_canCarry = 1;
	weight = 20;

	class TransportMagazines 
	{
		TRANSPORT_MAGAZINE(SMA_30Rnd_556x45_M855A1, 24)
		TRANSPORT_MAGAZINE(SMA_30Rnd_556x45_M855A1_Tracer, 12)
		TRANSPORT_MAGAZINE(SMA_20Rnd_762x51mm_M80A1_EPR, 4)
		TRANSPORT_MAGAZINE(SMA_150Rnd_762_M80A1, 2)
		TRANSPORT_MAGAZINE(RH_12Rnd_45cal_usp, 16)
		TRANSPORT_MAGAZINE(SmokeShell, 16)
		TRANSPORT_MAGAZINE(SmokeShellGreen, 16)
		TRANSPORT_MAGAZINE(HandGrenade, 16)
		TRANSPORT_MAGAZINE(ACE_M84, 16)
		TRANSPORT_MAGAZINE(B_IR_Grenade, 16)
		TRANSPORT_MAGAZINE(1Rnd_HE_Grenade_shell, 4)
		TRANSPORT_MAGAZINE(1Rnd_SmokeRed_Grenade_shell, 2)
		TRANSPORT_MAGAZINE(ACE_HuntIR_M203, 2)
	};
};

class SOCOMD_Medical_Box : NATO_Box_Base
{
	scope = public;
	model = "\A3\weapons_F\AmmoBoxes\AmmoBox_F";
	hiddenSelectionsTextures[] = {"A3\Weapons_F\Ammoboxes\data\AmmoBox_signs_CA.paa","A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"};
	accuracy = 1000;
	displayName = "SOCOMD Medical Box";
	author = AUTHOR_STR;
	maximumLoad = 99999;
	transportMaxWeapons = 15000;
	transportMaxMagazines = 20000;
	transportMaxBackpacks = 100;
	weight = 20;
	ace_cargo_size = 2;
	ace_dragging_canDrag = 1;
	ace_dragging_canCarry = 1;

	class TransportItems 
	{
		TRANSPORT_ITEM(ACE_fieldDressing, 32)
		TRANSPORT_ITEM(ACE_quikclot, 32)
		TRANSPORT_ITEM(ACE_elasticBandage, 32)
		TRANSPORT_ITEM(ACE_packingBandage, 32)
		TRANSPORT_ITEM(ACE_morphine, 16)
		TRANSPORT_ITEM(ACE_epinephrine, 16)
		TRANSPORT_ITEM(ACE_tourniquet, 8)
		TRANSPORT_ITEM(ACE_salineIV_500, 6)
		TRANSPORT_ITEM(ACE_bodyBag, 8)
		TRANSPORT_ITEM(ACE_DefusalKit, 1)
	};
};

class SOCOMD_UAV_Crate: NATO_Box_Base
{
	scope = public;
	model = "\A3\weapons_F\AmmoBoxes\WpnsBox_F";
	accuracy = 1000;
	displayName = "SOCOMD UAV Crate";
	author = AUTHOR_STR;
	maximumLoad = 99999;
	transportMaxWeapons = 15000;
	transportMaxMagazines = 20000;
	transportMaxBackpacks = 100;
	weight = 20;
	ace_cargo_size = 2;
	ace_dragging_canDrag = 1;
	ace_dragging_canCarry = 1;

	class TransportItems
	{
		TRANSPORT_ITEM(B_UavTerminal, 4)
		TRANSPORT_ITEM(ACE_UAVBattery, 4)
	};

	class TransportBackpacks
	{
		TRANSPORT_BACKPACK(B_UAV_01_backpack_F, 1)
	};
};