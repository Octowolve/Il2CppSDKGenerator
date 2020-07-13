#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class InputManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "InputManager"));
	}

	template <typename T = uintptr_t> T& RotateSensitiveInput() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& AssistSetting() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& m_BluetoothGamePadConnectState() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& m_StartConnectTime() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T& m_MoveHandleImplDict() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> static T& s_MoveHandleImplTypeDict() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_PlayerInputPool() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& m_LastCheckJoysticksTime() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& m_IsJoySticksConnected() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& m_KeyCodeForGamePad() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& m_ActionForGamePad() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& m_LAxisX() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& m_LAxisY() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& m_RAxisX() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& m_RAxisY() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& m_LastTouchTime() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_playerInputList() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& mPendingRecyleList() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& AutoplayerInput() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> static T& MovementFingerID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& CameraRotationFingerID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& JumpFingerID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& FireFingerID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AimFingerID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& LeftFireFingerID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& TPSFreeRotationFingerID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& DriveMoveXFingerID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& DriveMoveYFingerID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& DriveAccFingerID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& m_JumpInput() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = float> T& m_RXAxisAccelStartTime() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = float> T& m_RYAxisAccelStartTime() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& PC() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = bool> static T& SimulateFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = bool> static T& SimulateADS() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5);
	}
	template <typename T = bool> T& ExpertFireForce() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& m_FireMode() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> T& mMeleeFireMode() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> static T& s_GamehandleInfoCfg() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> T& m_GameHandle() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = uintptr_t> T& m_CurGameHandType() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T& m_GameHandleCacheDict() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = bool> T& mInputSwimmingFloating() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = bool> T& mInputSwimmingDiving() {
		return *(T*)((uintptr_t)this + 0x79);
	}
	template <typename T = bool> T& Supported3DTouch() {
		return *(T*)((uintptr_t)this + 0x7A);
	}
	template <typename T = int32_t> T& mEditor3Dtouch() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = float> static T& MAX_MOVEMENT_DELTA_PC() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& MAX_MOVEMENT_DELTA_GAMEPAD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& MAX_ROTATION_DELTA() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& MAX_TPSFREE_ROTATION_DELTA_Y() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& MAX_TPSFREE_ROTATION_DELTA_X() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& CheckGamepadInterval() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& LastTimeCheckGamepadConnected() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = int32_t> T& RotationJoystickUsingMask() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = int32_t> T& ButtonL2UsingMask() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = bool> T& GamepadConnectingError() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = bool> T& m_GamepadEnabled() {
		return *(T*)((uintptr_t)this + 0x8D);
	}
	template <typename T = bool> T& m_KeepPreparingThrowWeapon() {
		return *(T*)((uintptr_t)this + 0x8E);
	}
	template <typename T = uintptr_t> T& m_CursorRootType() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& m_CursorTouchButton() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = bool> T& m_CursorEnabled() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = bool> T& m_IsGamepadRoom() {
		return *(T*)((uintptr_t)this + 0x99);
	}
	template <typename T = bool> T& m_ConfirmThrowWeapon() {
		return *(T*)((uintptr_t)this + 0x9A);
	}
	template <typename T = uintptr_t> T& StateChangedCallback() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = Il2CppString*> T& JoystickVendor() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& CurGamePadCfg() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& CurGamepadType() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = Il2CppDictionary<int32_t, uintptr_t>*> T& m_GamePadCallBackList() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = Il2CppDictionary<int32_t, uintptr_t>*> T& m_GamePadCompositeCallBackMap() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = Il2CppDictionary<uintptr_t, Il2CppString*>*> T& JoystickAxisToName() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = Il2CppVector2> T& CursorPosition() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& gamepadProfiles() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& gamepadButtonClickComps() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = int32_t> T& CursorSessionId() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = bool> T& m_DetectOtherVender() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = bool> T& CurFrameGamepadUsing() {
		return *(T*)((uintptr_t)this + 0xCD);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_GamePadBtnList() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = Il2CppDictionary<int32_t, uintptr_t>*> T& m_GamePadCompositeBtnMap() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_GamePadAxisList() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = float> T& DeadValue() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = int32_t> T& GamepadConnectedMapId() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = Il2CppVector2> static T& GamepadRotationStartVec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = Il2CppVector2> static T& TemporaryRotationDeltaVec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& DrivePlayerInputs() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = bool> T& LastFrameChangingClip() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = float> T& LastFrameGamepadMoveY() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = bool> T& GamepadFastRun() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = bool> T& GamepadMove() {
		return *(T*)((uintptr_t)this + 0xF1);
	}
	template <typename T = bool> T& GamepadTriggerAds() {
		return *(T*)((uintptr_t)this + 0xF2);
	}
	template <typename T = Il2CppString*> T& GamePadName_Click() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = uintptr_t> T& m_LeftFireInput() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> T& m_MainFireInput() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& InputTouchArr() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = bool> T& mSelfComputer() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = uintptr_t> T& SettingInfoBr() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = uintptr_t> T& SettingInfoMP() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = uintptr_t> T& SettingInfoPVE() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = uintptr_t> T& SettingInfoCommon() {
		return *(T*)((uintptr_t)this + 0x114);
	}
	template <typename T = uintptr_t> T& WestSettingInfoEmpty() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = uintptr_t> T& mCurSettingInfo() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	template <typename T = bool> T& isInit() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = float> static T& GyroscopeStandard() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = float> static T& MinDelta() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = void*> static T& f__am$cache1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = void*> static T& f__am$cache2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = void*> static T& f__am$cache3() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = void*> static T& f__am$cache4() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameEngine_DataStoreSubscriber_NotifyDataStoreUpdated() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitCurrentPlayerSettings() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMoveHandleType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Req3DSupportedInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterRelatedView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLastTouchTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsEnableRecyle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearOutdatedInputs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AllocPlayerInput() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecyclePlayerInput() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdatePlayerInputOnMobile() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateAutoAIInput() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdatePlayerInputOnPC() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsRaycastUICamera() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnApplicationPause() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateHandle_GM() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckGamePadButtons() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLAxisX_GM() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLAxisY_GM() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRAxisX_GM() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRAxisY_GM() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStreakClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SaveFireModeSpecifically() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReadFireModeSpecifically() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitFireModeSettings() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResolutionResetScale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitFireJoyStick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitJoyStick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateJoysticks() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRotationJoystick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HasTouchInput() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFireInput() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSecondaryFireButtonDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSecondaryFireButtonUp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsButtonPressed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMovementBtnPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFireBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HasRotationInput() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xDC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RotateFromGamepad() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSprinting() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetContinusSprinting() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartContinuseSprinting() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xEC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopContinuseSprinting() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSprintAngle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoLockInput() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLastMovementAcceInitTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xFC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessNativeMsg() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x100);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitGameHandle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x104);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetMoveHandle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x108);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitInputGameHandle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EncodeButtonAndResponseType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x110);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EncodeCompositeButtons() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x114);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DecodeCompositeButtons() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x118);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitGamepad() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x11C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EnableCursor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x120);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanCursorTouchDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x124);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MoveCursorDelta() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x128);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCursorPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x12C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DisableCursor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x130);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsCursorTouchDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x134);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AbsorbEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x138);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EnableGamePadBtnDownUpLongpress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x13C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EnableGamePadButtonClickComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x140);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DisableGamePadButtonClickComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x144);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearAllCallbacks() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x148);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterGamePadBtnCallBack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterGamePadBtnCallBack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x150);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterGamePadBtnCallBackInner() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x154);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterGamePadBtnCallBackInner() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x158);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterCompositeGamePadBtnCallBack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x15C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterCompositeGamePadBtnCallBack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x160);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterGamePadStateCallBack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x164);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterGamePadStateCallBack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x168);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DetectPartner() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x16C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsUnavailableGamePad() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x170);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConnectToGamePad() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x174);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_VibrateGamePad() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x178);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsGamePadUsing() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x17C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsGamePadAvailable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x180);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EscapeForbidden() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x184);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsGamePadConnected() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x188);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForceSetVehicleButtonType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessGamePadBtnEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x190);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetGamePadBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x194);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConvertGamepadButtonConsideringSettings() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x198);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetGamePadCompositeBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x19C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetGamePadAxis() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1A0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetGamePadAxisValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1A4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetGamePadAxisDeadZone() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1A8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsGamePadButtonDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1AC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsGamePadButtonClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1B0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsGamePadButtonBeginDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1B4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsGamePadButtonUp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1B8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRotationAxisUsingMask() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1BC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsRotationAxisUsing() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetButtonL2UsingMask() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateInputFromGamePad() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetGamepadSensitivity() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1CC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckGamePadResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1D0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GamePadMovement() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1D4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulateGamePadResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1D8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GenGamepadPlayerInput() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1DC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulateJoystickButton() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1E0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulateFireButton() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1E4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitSetting() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1E8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitInputGameSetting() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1EC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__GetSettingInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1F0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSettingInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1F4);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_GetSettingInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1F8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1FC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetBasic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x200);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetSensitivity() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x204);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetGyroscope() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x208);
	}

	template <typename T = uintptr_t> T get_CurInputConfig() {
		return ((T (*)(InputManager*))(Il2CppBase() + 0x2440AE4))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(InputManager*))(Il2CppBase() + 0x2440BC4))(this);
	}
	template <typename T = void> T GameEngine_DataStoreSubscriber_NotifyDataStoreUpdated(uintptr_t SourceDataStore, Il2CppString* PropertyTag, int32_t ArrayIndex) {
		return ((T (*)(InputManager*, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x2441C74))(this, SourceDataStore, PropertyTag, ArrayIndex);
	}
	template <typename T = void> T InitCurrentPlayerSettings() {
		return ((T (*)(InputManager*))(Il2CppBase() + 0x2440D88))(this);
	}
	template <typename T = uintptr_t> T GetMoveHandleType() {
		return ((T (*)(InputManager*))(Il2CppBase() + 0x2442148))(this);
	}
	template <typename T = void> T Req3DSupportedInfo() {
		return ((T (*)(InputManager*))(Il2CppBase() + 0x2440FB4))(this);
	}
	template <typename T = void> T RegisterRelatedView(uintptr_t objViewClickHandler, uintptr_t eView) {
		return ((T (*)(InputManager*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2442230))(this, objViewClickHandler, eView);
	}
	template <typename T = float> T GetLastTouchTime() {
		return ((T (*)(InputManager*))(Il2CppBase() + 0x24423C8))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(InputManager*, float))(Il2CppBase() + 0x2442498))(this, deltaTime);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(InputManager*))(Il2CppBase() + 0x2444C20))(this);
	}
	template <typename T = bool> T IsEnableRecyle(uintptr_t input) {
		return ((T (*)(InputManager*, uintptr_t))(Il2CppBase() + 0x2444DE0))(this, input);
	}
	template <typename T = void> T ClearOutdatedInputs() {
		return ((T (*)(InputManager*))(Il2CppBase() + 0x2444EFC))(this);
	}
	template <typename T = uintptr_t> T AllocPlayerInput(int32_t fingerID, Il2CppVector2 position, bool fromGamepad) {
		return ((T (*)(InputManager*, int32_t, Il2CppVector2, bool))(Il2CppBase() + 0x24455A0))(this, fingerID, position, fromGamepad);
	}
	template <typename T = void> T RecyclePlayerInput(uintptr_t playerInput) {
		return ((T (*)(InputManager*, uintptr_t))(Il2CppBase() + 0x2445490))(this, playerInput);
	}
	template <typename T = void> T UpdatePlayerInputOnMobile() {
		return ((T (*)(InputManager*))(Il2CppBase() + 0x2443594))(this);
	}
	template <typename T = bool> T UpdateAutoAIInput(Il2CppVector2 pos, Il2CppVector2 deltaPos, float time, float deltaTime) {
		return ((T (*)(InputManager*, Il2CppVector2, Il2CppVector2, float, float))(Il2CppBase() + 0x24483E0))(this, pos, deltaPos, time, deltaTime);
	}
	template <typename T = float> T get_RXAxisAccelStartTime() {
		return ((T (*)(InputManager*))(Il2CppBase() + 0x24487B0))(this);
	}
	template <typename T = void> T set_RXAxisAccelStartTime(float value) {
		return ((T (*)(InputManager*, float))(Il2CppBase() + 0x24487B8))(this, value);
	}
	template <typename T = float> T get_RYAxisAccelStartTime() {
		return ((T (*)(InputManager*))(Il2CppBase() + 0x24487C0))(this);
	}
	template <typename T = void> T set_RYAxisAccelStartTime(float value) {
		return ((T (*)(InputManager*, float))(Il2CppBase() + 0x24487C8))(this, value);
	}
	template <typename T = void> T UpdatePlayerInputOnPC() {
		return ((T (*)(InputManager*))(Il2CppBase() + 0x2443D98))(this);
	}
	template <typename T = bool> T IsRaycastUICamera(Il2CppVector2 pos) {
		return ((T (*)(InputManager*, Il2CppVector2))(Il2CppBase() + 0x2445838))(this, pos);
	}
	template <typename T = bool> T get_IsContinuouslySprinting() {
		return ((T (*)(InputManager*))(Il2CppBase() + 0x2448918))(this);
	}
	template <typename T = void> T OnApplicationPause(bool pause) {
		return ((T (*)(InputManager*, bool))(Il2CppBase() + 0x2448940))(this, pause);
	}
	template <typename T = void> T UpdateHandle_GM() {
		return ((T (*)(InputManager*))(Il2CppBase() + 0x24434A4))(this);
	}
	template <typename T = void> T CheckGamePadButtons() {
		return ((T (*)(InputManager*))(Il2CppBase() + 0x2448FF8))(this);
	}
	template <typename T = float> T GetLAxisX_GM() {
		return ((T (*)(InputManager*))(Il2CppBase() + 0x2449158))(this);
	}
	template <typename T = float> T GetLAxisY_GM() {
		return ((T (*)(InputManager*))(Il2CppBase() + 0x2449298))(this);
	}
	template <typename T = float> T GetRAxisX_GM() {
		return ((T (*)(InputManager*))(Il2CppBase() + 0x24493D8))(this);
	}
	template <typename T = float> T GetRAxisY_GM() {
		return ((T (*)(InputManager*))(Il2CppBase() + 0x2449504))(this);
	}
	template <typename T = void> T OnStreakClick(int32_t index) {
		return ((T (*)(InputManager*, int32_t))(Il2CppBase() + 0x2449630))(this, index);
	}
	template <typename T = void> T set_ExpertFireForce(bool value) {
		return ((T (*)(InputManager*, bool))(Il2CppBase() + 0x2449814))(this, value);
	}
	template <typename T = bool> T get_ExpertFireForce() {
		return ((T (*)(InputManager*))(Il2CppBase() + 0x244981C))(this);
	}
	template <typename T = uintptr_t> T get_CurrentGameMode() {
		return ((T (*)(InputManager*))(Il2CppBase() + 0x2449824))(this);
	}
	template <typename T = uintptr_t> T get_MeleeFireMode() {
		return ((T (*)(InputManager*))(Il2CppBase() + 0x24498DC))(this);
	}
	template <typename T = void> T set_MeleeFireMode(uintptr_t value) {
		return ((T (*)(InputManager*, uintptr_t))(Il2CppBase() + 0x24498E4))(this, value);
	}
	template <typename T = void> T SaveFireModeSpecifically(uintptr_t fireMode) {
		return ((T (*)(InputManager*, uintptr_t))(Il2CppBase() + 0x24498EC))(this, fireMode);
	}
	template <typename T = uintptr_t> T ReadFireModeSpecifically() {
		return ((T (*)(InputManager*))(Il2CppBase() + 0x2449B24))(this);
	}
	template <typename T = void> T InitFireModeSettings() {
		return ((T (*)(InputManager*))(Il2CppBase() + 0x2441D7C))(this);
	}
	template <typename T = void> static T ResolutionResetScale(float originalHeigh, float originalWidth, float designHeigh) {
		return ((T (*)(void *, float, float, float))(Il2CppBase() + 0x2449E78))(0, originalHeigh, originalWidth, designHeigh);
	}
	template <typename T = uintptr_t> T get_GameHandle() {
		return ((T (*)(InputManager*))(Il2CppBase() + 0x2449FE4))(this);
	}
	template <typename T = bool> T get_IsSwipUp() {
		return ((T (*)(InputManager*))(Il2CppBase() + 0x2449FEC))(this);
	}
	template <typename T = Il2CppVector2> T get_MovementAccel() {
		return ((T (*)(InputManager*))(Il2CppBase() + 0x244A0F0))(this);
	}
	template <typename T = bool> T get_IsPinchIn() {
		return ((T (*)(InputManager*))(Il2CppBase() + 0x244A1F0))(this);
	}
	template <typename T = bool> T get_IsPinchOut() {
		return ((T (*)(InputManager*))(Il2CppBase() + 0x244A2F0))(this);
	}
	template <typename T = bool> T get_InputSwimmingFloating() {
		return ((T (*)(InputManager*))(Il2CppBase() + 0x244A3F0))(this);
	}
	template <typename T = void> T set_InputSwimmingFloating(bool value) {
		return ((T (*)(InputManager*, bool))(Il2CppBase() + 0x244A3F8))(this, value);
	}
	template <typename T = bool> T get_InputSwimmingDiving() {
		return ((T (*)(InputManager*))(Il2CppBase() + 0x244A400))(this);
	}
	template <typename T = void> T set_InputSwimmingDiving(bool value) {
		return ((T (*)(InputManager*, bool))(Il2CppBase() + 0x244A408))(this, value);
	}
	template <typename T = void> T InitFireJoyStick(Il2CppVector2 pos, Il2CppVector2 size, uintptr_t type, uintptr_t buttonType) {
		return ((T (*)(InputManager*, Il2CppVector2, Il2CppVector2, uintptr_t, uintptr_t))(Il2CppBase() + 0x244A410))(this, pos, size, type, buttonType);
	}
	template <typename T = void> T InitJoyStick(uintptr_t type, Il2CppVector2 pos, Il2CppVector2 size) {
		return ((T (*)(InputManager*, uintptr_t, Il2CppVector2, Il2CppVector2))(Il2CppBase() + 0x244A548))(this, type, pos, size);
	}
	template <typename T = void> T UpdateJoysticks() {
		return ((T (*)(InputManager*))(Il2CppBase() + 0x24482F4))(this);
	}
	template <typename T = Il2CppVector2> T GetRotationJoystick() {
		return ((T (*)(InputManager*))(Il2CppBase() + 0x244A6EC))(this);
	}
	template <typename T = bool> T HasTouchInput() {
		return ((T (*)(InputManager*))(Il2CppBase() + 0x244A89C))(this);
	}
	template <typename T = uintptr_t> T GetFireInput(uintptr_t type) {
		return ((T (*)(InputManager*, uintptr_t))(Il2CppBase() + 0x244AA18))(this, type);
	}
	template <typename T = bool> T GetSecondaryFireButtonDown() {
		return ((T (*)(InputManager*))(Il2CppBase() + 0x244AB60))(this);
	}
	template <typename T = bool> T GetSecondaryFireButtonUp() {
		return ((T (*)(InputManager*))(Il2CppBase() + 0x244AC30))(this);
	}
	template <typename T = bool> T IsButtonPressed(uintptr_t type) {
		return ((T (*)(InputManager*, uintptr_t))(Il2CppBase() + 0x244AD00))(this, type);
	}
	template <typename T = Il2CppVector2> T GetMovementBtnPos() {
		return ((T (*)(InputManager*))(Il2CppBase() + 0x244AE1C))(this);
	}
	template <typename T = uintptr_t> T GetFireBtn(uintptr_t type) {
		return ((T (*)(InputManager*, uintptr_t))(Il2CppBase() + 0x24487D0))(this, type);
	}
	template <typename T = bool> T HasRotationInput() {
		return ((T (*)(InputManager*))(Il2CppBase() + 0x244B00C))(this);
	}
	template <typename T = bool> T RotateFromGamepad() {
		return ((T (*)(InputManager*))(Il2CppBase() + 0x244B158))(this);
	}
	template <typename T = bool> T IsSprinting() {
		return ((T (*)(InputManager*))(Il2CppBase() + 0x244B280))(this);
	}
	template <typename T = void> T SetContinusSprinting() {
		return ((T (*)(InputManager*))(Il2CppBase() + 0x244B3CC))(this);
	}
	template <typename T = void> T StartContinuseSprinting() {
		return ((T (*)(InputManager*))(Il2CppBase() + 0x244B4AC))(this);
	}
	template <typename T = void> T StopContinuseSprinting() {
		return ((T (*)(InputManager*))(Il2CppBase() + 0x2444D00))(this);
	}
	template <typename T = void> T SetSprintAngle(float value) {
		return ((T (*)(InputManager*, float))(Il2CppBase() + 0x244B5A4))(this, value);
	}
	template <typename T = void> T DoLockInput() {
		return ((T (*)(InputManager*))(Il2CppBase() + 0x244B690))(this);
	}
	template <typename T = float> T GetLastMovementAcceInitTime() {
		return ((T (*)(InputManager*))(Il2CppBase() + 0x244BA54))(this);
	}
	template <typename T = bool> T get_Can3DTouch() {
		return ((T (*)(InputManager*))(Il2CppBase() + 0x244BB40))(this);
	}
	template <typename T = int32_t> T get_Editor3Dtouch() {
		return ((T (*)(InputManager*))(Il2CppBase() + 0x244BBAC))(this);
	}
	template <typename T = void> T set_Editor3Dtouch(int32_t value) {
		return ((T (*)(InputManager*, int32_t))(Il2CppBase() + 0x244BBD8))(this, value);
	}
	template <typename T = bool> T get_IsAuto3Dtouch() {
		return ((T (*)(InputManager*))(Il2CppBase() + 0x244BBE0))(this);
	}
	template <typename T = void> T ProcessNativeMsg(Il2CppArray<uintptr_t>* paramArray) {
		return ((T (*)(InputManager*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x244BC58))(this, paramArray);
	}
	template <typename T = void> T InitGameHandle() {
		return ((T (*)(InputManager*))(Il2CppBase() + 0x244C980))(this);
	}
	template <typename T = void> T SetMoveHandle() {
		return ((T (*)(InputManager*))(Il2CppBase() + 0x244CCC0))(this);
	}
	template <typename T = void> T InitInputGameHandle(uintptr_t inGameHandle, bool force) {
		return ((T (*)(InputManager*, uintptr_t, bool))(Il2CppBase() + 0x2448A34))(this, inGameHandle, force);
	}
	template <typename T = bool> T get_GamepadEnabled() {
		return ((T (*)(InputManager*))(Il2CppBase() + 0x244D2A0))(this);
	}
	template <typename T = void> T set_GamepadEnabled(bool value) {
		return ((T (*)(InputManager*, bool))(Il2CppBase() + 0x244D2A8))(this, value);
	}
	template <typename T = bool> T get_CursorEnabled() {
		return ((T (*)(InputManager*))(Il2CppBase() + 0x244D60C))(this);
	}
	template <typename T = bool> T get_KeepPreparingThrowWeapon() {
		return ((T (*)(InputManager*))(Il2CppBase() + 0x244D614))(this);
	}
	template <typename T = void> T set_KeepPreparingThrowWeapon(bool value) {
		return ((T (*)(InputManager*, bool))(Il2CppBase() + 0x244D61C))(this, value);
	}
	template <typename T = bool> T get_IsGamepadRoom() {
		return ((T (*)(InputManager*))(Il2CppBase() + 0x244D624))(this);
	}
	template <typename T = void> T set_IsGamepadRoom(bool value) {
		return ((T (*)(InputManager*, bool))(Il2CppBase() + 0x244D62C))(this, value);
	}
	template <typename T = bool> T get_ConfirmThrowWeapon() {
		return ((T (*)(InputManager*))(Il2CppBase() + 0x244D6E8))(this);
	}
	template <typename T = void> T set_ConfirmThrowWeapon(bool value) {
		return ((T (*)(InputManager*, bool))(Il2CppBase() + 0x244D6F0))(this, value);
	}
	template <typename T = int32_t> T EncodeButtonAndResponseType(uintptr_t btn, uintptr_t type) {
		return ((T (*)(InputManager*, uintptr_t, uintptr_t))(Il2CppBase() + 0x244D6F8))(this, btn, type);
	}
	template <typename T = int32_t> T EncodeCompositeButtons(uintptr_t btn1, uintptr_t btn2, uintptr_t type) {
		return ((T (*)(InputManager*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x244D7EC))(this, btn1, btn2, type);
	}
	template <typename T = void> T DecodeCompositeButtons(int32_t code, uintptr_t btn1, uintptr_t btn2, uintptr_t type) {
		return ((T (*)(InputManager*, int32_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x244D8F4))(this, code, btn1, btn2, type);
	}
	template <typename T = void> T InitGamepad() {
		return ((T (*)(InputManager*))(Il2CppBase() + 0x24410B8))(this);
	}
	template <typename T = int32_t> T EnableCursor(uintptr_t rootType, uintptr_t button) {
		return ((T (*)(InputManager*, uintptr_t, uintptr_t))(Il2CppBase() + 0x244DA40))(this, rootType, button);
	}
	template <typename T = bool> T CanCursorTouchDown() {
		return ((T (*)(InputManager*))(Il2CppBase() + 0x244DC6C))(this);
	}
	template <typename T = void> T MoveCursorDelta(float deltaX, float deltaY) {
		return ((T (*)(InputManager*, float, float))(Il2CppBase() + 0x244DFB8))(this, deltaX, deltaY);
	}
	template <typename T = void> T SetCursorPosition(Il2CppVector2 pos) {
		return ((T (*)(InputManager*, Il2CppVector2))(Il2CppBase() + 0x244E0C4))(this, pos);
	}
	template <typename T = void> T DisableCursor(int32_t Session) {
		return ((T (*)(InputManager*, int32_t))(Il2CppBase() + 0x244E1B8))(this, Session);
	}
	template <typename T = bool> T IsCursorTouchDown() {
		return ((T (*)(InputManager*))(Il2CppBase() + 0x244E39C))(this);
	}
	template <typename T = bool> T AbsorbEvent() {
		return ((T (*)(InputManager*))(Il2CppBase() + 0x244E584))(this);
	}
	template <typename T = void> T EnableGamePadBtnDownUpLongpress(uintptr_t btn, int32_t priority, bool enabled) {
		return ((T (*)(InputManager*, uintptr_t, int32_t, bool))(Il2CppBase() + 0x244E654))(this, btn, priority, enabled);
	}
	template <typename T = void> T EnableGamePadButtonClickComponent(uintptr_t comp) {
		return ((T (*)(InputManager*, uintptr_t))(Il2CppBase() + 0x244ED80))(this, comp);
	}
	template <typename T = void> T DisableGamePadButtonClickComponent(uintptr_t comp) {
		return ((T (*)(InputManager*, uintptr_t))(Il2CppBase() + 0x244EEC0))(this, comp);
	}
	template <typename T = void> T ClearAllCallbacks() {
		return ((T (*)(InputManager*))(Il2CppBase() + 0x244EFD0))(this);
	}
	template <typename T = void> T RegisterGamePadBtnCallBack(uintptr_t btn, uintptr_t cb, uintptr_t type, int32_t priority) {
		return ((T (*)(InputManager*, uintptr_t, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x244F4A8))(this, btn, cb, type, priority);
	}
	template <typename T = void> T UnRegisterGamePadBtnCallBack(uintptr_t btn, uintptr_t cb, uintptr_t type, int32_t priority) {
		return ((T (*)(InputManager*, uintptr_t, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x244F5B8))(this, btn, cb, type, priority);
	}
	template <typename T = void> T RegisterGamePadBtnCallBackInner(uintptr_t btn, uintptr_t cb, uintptr_t type, int32_t priority) {
		return ((T (*)(InputManager*, uintptr_t, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x244EB38))(this, btn, cb, type, priority);
	}
	template <typename T = void> T UnRegisterGamePadBtnCallBackInner(uintptr_t btn, uintptr_t cb, uintptr_t type, int32_t priority) {
		return ((T (*)(InputManager*, uintptr_t, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x244E9A0))(this, btn, cb, type, priority);
	}
	template <typename T = void> T RegisterCompositeGamePadBtnCallBack(uintptr_t btn1, uintptr_t btn2, uintptr_t cb, uintptr_t type) {
		return ((T (*)(InputManager*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x244FF7C))(this, btn1, btn2, cb, type);
	}
	template <typename T = void> T UnRegisterCompositeGamePadBtnCallBack(uintptr_t btn1, uintptr_t btn2, uintptr_t cb, uintptr_t type) {
		return ((T (*)(InputManager*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x24502AC))(this, btn1, btn2, cb, type);
	}
	template <typename T = void> T RegisterGamePadStateCallBack(uintptr_t cb) {
		return ((T (*)(InputManager*, uintptr_t))(Il2CppBase() + 0x24505AC))(this, cb);
	}
	template <typename T = void> T UnRegisterGamePadStateCallBack(uintptr_t cb) {
		return ((T (*)(InputManager*, uintptr_t))(Il2CppBase() + 0x24507F0))(this, cb);
	}
	template <typename T = void> T set_DetectOtherVender(bool value) {
		return ((T (*)(InputManager*, bool))(Il2CppBase() + 0x24410B0))(this, value);
	}
	template <typename T = Il2CppString*> T DetectPartner(Il2CppArray<uintptr_t>* venderNames) {
		return ((T (*)(InputManager*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x24509F0))(this, venderNames);
	}
	template <typename T = bool> T IsUnavailableGamePad() {
		return ((T (*)(InputManager*))(Il2CppBase() + 0x2451068))(this);
	}
	template <typename T = void> T ConnectToGamePad() {
		return ((T (*)(InputManager*))(Il2CppBase() + 0x24511A4))(this);
	}
	template <typename T = void> T VibrateGamePad() {
		return ((T (*)(InputManager*))(Il2CppBase() + 0x244C7A0))(this);
	}
	template <typename T = bool> T IsGamePadUsing() {
		return ((T (*)(InputManager*))(Il2CppBase() + 0x24517B8))(this);
	}
	template <typename T = bool> T IsGamePadAvailable() {
		return ((T (*)(InputManager*))(Il2CppBase() + 0x2451890))(this);
	}
	template <typename T = bool> T EscapeForbidden() {
		return ((T (*)(InputManager*))(Il2CppBase() + 0x2451CD0))(this);
	}
	template <typename T = bool> T IsGamePadConnected() {
		return ((T (*)(InputManager*))(Il2CppBase() + 0x24519C8))(this);
	}
	template <typename T = void> T ForceSetVehicleButtonType() {
		return ((T (*)(InputManager*))(Il2CppBase() + 0x244D3CC))(this);
	}
	template <typename T = void> T ProcessGamePadBtnEvent(int32_t action, int32_t keyCode) {
		return ((T (*)(InputManager*, int32_t, int32_t))(Il2CppBase() + 0x244C89C))(this, action, keyCode);
	}
	template <typename T = uintptr_t> T GetGamePadBtn(uintptr_t sBtn, bool isUsing) {
		return ((T (*)(InputManager*, uintptr_t, bool))(Il2CppBase() + 0x2451EEC))(this, sBtn, isUsing);
	}
	template <typename T = uintptr_t> T ConvertGamepadButtonConsideringSettings(uintptr_t sBtn) {
		return ((T (*)(InputManager*, uintptr_t))(Il2CppBase() + 0x2452108))(this, sBtn);
	}
	template <typename T = uintptr_t> T GetGamePadCompositeBtn(uintptr_t sBtn1, uintptr_t sBtn2) {
		return ((T (*)(InputManager*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2452234))(this, sBtn1, sBtn2);
	}
	template <typename T = uintptr_t> T GetGamePadAxis(uintptr_t axis) {
		return ((T (*)(InputManager*, uintptr_t))(Il2CppBase() + 0x2452400))(this, axis);
	}
	template <typename T = float> T GetGamePadAxisValue(uintptr_t axis) {
		return ((T (*)(InputManager*, uintptr_t))(Il2CppBase() + 0x24525A4))(this, axis);
	}
	template <typename T = bool> T GetGamePadAxisDeadZone(uintptr_t axis) {
		return ((T (*)(InputManager*, uintptr_t))(Il2CppBase() + 0x24526A0))(this, axis);
	}
	template <typename T = bool> T IsGamePadButtonDown(uintptr_t btn) {
		return ((T (*)(InputManager*, uintptr_t))(Il2CppBase() + 0x244E484))(this, btn);
	}
	template <typename T = bool> T IsGamePadButtonClick(uintptr_t btn) {
		return ((T (*)(InputManager*, uintptr_t))(Il2CppBase() + 0x245279C))(this, btn);
	}
	template <typename T = bool> T IsGamePadButtonBeginDown(uintptr_t btn) {
		return ((T (*)(InputManager*, uintptr_t))(Il2CppBase() + 0x24528A4))(this, btn);
	}
	template <typename T = bool> T IsGamePadButtonUp(uintptr_t btn) {
		return ((T (*)(InputManager*, uintptr_t))(Il2CppBase() + 0x24529A4))(this, btn);
	}
	template <typename T = void> T SetRotationAxisUsingMask(uintptr_t m, bool state) {
		return ((T (*)(InputManager*, uintptr_t, bool))(Il2CppBase() + 0x2452AA4))(this, m, state);
	}
	template <typename T = bool> T IsRotationAxisUsing(uintptr_t m) {
		return ((T (*)(InputManager*, uintptr_t))(Il2CppBase() + 0x2452BA0))(this, m);
	}
	template <typename T = void> T SetButtonL2UsingMask(uintptr_t m, bool state) {
		return ((T (*)(InputManager*, uintptr_t, bool))(Il2CppBase() + 0x2452C80))(this, m, state);
	}
	template <typename T = void> T UpdateInputFromGamePad() {
		return ((T (*)(InputManager*))(Il2CppBase() + 0x2442690))(this);
	}
	template <typename T = float> T GetGamepadSensitivity(uintptr_t sType) {
		return ((T (*)(InputManager*, uintptr_t))(Il2CppBase() + 0x2452D7C))(this, sType);
	}
	template <typename T = void> T CheckGamePadResponse() {
		return ((T (*)(InputManager*))(Il2CppBase() + 0x2445984))(this);
	}
	template <typename T = void> T GamePadMovement() {
		return ((T (*)(InputManager*))(Il2CppBase() + 0x2453A08))(this);
	}
	template <typename T = void> T SimulateGamePadResponse() {
		return ((T (*)(InputManager*))(Il2CppBase() + 0x2454AB0))(this);
	}
	template <typename T = uintptr_t> T GenGamepadPlayerInput(int32_t fingerId, Il2CppVector2 initPos) {
		return ((T (*)(InputManager*, int32_t, Il2CppVector2))(Il2CppBase() + 0x2453428))(this, fingerId, initPos);
	}
	template <typename T = void> T SimulateJoystickButton(uintptr_t type, int32_t fingerId) {
		return ((T (*)(InputManager*, uintptr_t, int32_t))(Il2CppBase() + 0x2453730))(this, type, fingerId);
	}
	template <typename T = void> T SimulateFireButton(uintptr_t type, int32_t fingerId) {
		return ((T (*)(InputManager*, uintptr_t, int32_t))(Il2CppBase() + 0x245519C))(this, type, fingerId);
	}
	template <typename T = bool> T get_SelfComputer() {
		return ((T (*)(InputManager*))(Il2CppBase() + 0x2455440))(this);
	}
	template <typename T = void> T set_SelfComputer(bool value) {
		return ((T (*)(InputManager*, bool))(Il2CppBase() + 0x2455448))(this, value);
	}
	template <typename T = uintptr_t> T get_CurSettingInfo() {
		return ((T (*)(InputManager*))(Il2CppBase() + 0x244AFD4))(this);
	}
	template <typename T = uintptr_t> T get_config() {
		return ((T (*)(InputManager*))(Il2CppBase() + 0x2455540))(this);
	}
	template <typename T = void> T InitSetting() {
		return ((T (*)(InputManager*))(Il2CppBase() + 0x2441E98))(this);
	}
	template <typename T = void> T InitInputGameSetting() {
		return ((T (*)(InputManager*))(Il2CppBase() + 0x2455988))(this);
	}
	template <typename T = uintptr_t> T _GetSettingInfo(uintptr_t modeType) {
		return ((T (*)(InputManager*, uintptr_t))(Il2CppBase() + 0x2455A68))(this, modeType);
	}
	template <typename T = uintptr_t> T GetSettingInfo(uintptr_t settingGameModeType) {
		return ((T (*)(InputManager*, uintptr_t))(Il2CppBase() + 0x245584C))(this, settingGameModeType);
	}
	template <typename T = uintptr_t> T GetSettingInfo_1() {
		return ((T (*)(InputManager*))(Il2CppBase() + 0x244CA78))(this);
	}
	template <typename T = void> T ResetData(uintptr_t tapType, uintptr_t modeType) {
		return ((T (*)(InputManager*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2455B84))(this, tapType, modeType);
	}
	template <typename T = void> T ResetBasic(uintptr_t type) {
		return ((T (*)(InputManager*, uintptr_t))(Il2CppBase() + 0x2455D98))(this, type);
	}
	template <typename T = void> T ResetSensitivity(uintptr_t type) {
		return ((T (*)(InputManager*, uintptr_t))(Il2CppBase() + 0x2455FD0))(this, type);
	}
	template <typename T = Il2CppVector3> T GetGyroscope() {
		return ((T (*)(InputManager*))(Il2CppBase() + 0x245620C))(this);
	}
	template <typename T = bool> static T ClearOutdatedInputsm__0(uintptr_t t) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2456AB4))(0, t);
	}
	template <typename T = bool> static T ClearOutdatedInputsm__1(uintptr_t t) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2456AE4))(0, t);
	}
	template <typename T = bool> static T UpdateAutoAIInputm__2(uintptr_t t) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2456B14))(0, t);
	}
	template <typename T = bool> static T UpdatePlayerInputOnPCm__3(uintptr_t _input) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2456B50))(0, _input);
	}
	template <typename T = bool> static T UpdatePlayerInputOnPCm__4(uintptr_t _input) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2456B84))(0, _input);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(InputManager*))(Il2CppBase() + 0x2456BC0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(InputManager*, float))(Il2CppBase() + 0x2456BC8))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Reset() {
		return ((T (*)(InputManager*))(Il2CppBase() + 0x2456BD0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnApplicationPause(bool P0) {
		return ((T (*)(InputManager*, bool))(Il2CppBase() + 0x2456BD8))(this, P0);
	}

};

}
