#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class GameHandle
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "GameHandle"));
	}

	template <typename T = int32_t> static T& MIN_MOVEMENT_DELTA() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& MINUS_MIN_MOVEMENT_DELTA() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& MAX_MOVEMENT_DELTA() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& MAX_ROTATION_DELTA() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& IPHONE_DPI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& MAX_IPHONE_ROTATION_SCALE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& s_RotationExponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& s_FireButtonUnit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& s_DriveHandle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& s_VehicleDroneHandle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& s_SpectatingHandle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T& s_FireBtnOcculusionsList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = float> static T& s_ResolutionResetScale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = float> static T& s_ResolutionToRotationScale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = Il2CppVector2> static T& s_MovementVector() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = Il2CppVector2> static T& s_RotationVector() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = bool> static T& s_RotationFromGamepad() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& s_LastRotationInputPhase() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> T& mMoveHandle() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& mCurInputConfig() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> static T& IsAimAfterProneMove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = bool> static T& s_PinchIn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x39);
	}
	template <typename T = bool> static T& s_PinchOut() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3A);
	}
	template <typename T = bool> static T& s_PinchBegin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3B);
	}
	template <typename T = bool> static T& s_PinchUp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = bool> static T& s_PinchDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3D);
	}
	template <typename T = bool> T& IsADSADSButton() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& mLastRotationDelta() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& lastSwipTime() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppVector2> T& lastSwipVector() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = void*> T& m_LastSpeedAccelFactor() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = void*> T& m_preDeltaPos() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> static T& OpenDeltaRotationGMCommand() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3E);
	}
	template <typename T = float> T& X1() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& X2() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& X3() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = float> T& X4() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& m_TouchMoved() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = float> T& m_RotationInputHoldTime() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& m_LastRotationInputFingerID() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = float> T& m_LastUpdateFireButtonTime() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppVector2> T& m_NextFireButtonPos() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = Il2CppVector2> T& INVISIBLE_POSITION() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = bool> T& IsLockFireAfterMoveFireBtn() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = bool> T& IsSetFirePos() {
		return *(T*)((uintptr_t)this + 0x6D);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T& s_GameHanleButtonDefList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T& UpdateButtonStateList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsEnableRecyle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetResolutionToRotationScale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetContinuouslySprinting() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartContinuouslySprinting() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopContinuouslySprinting() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLastMovementAcceInitTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSprintAngle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitFromInputConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetMirrorRotationButton() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetMoveHandleImpl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMoveHandleType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitFireBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateMovementPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitMovementBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InMovementArea() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcMovementVector() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessPinch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EditorSetInput() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update3DTouchState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessPlayerInputs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateMoveButton() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateFireButton() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateDoubleClickButton() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateDoubleSprintButton() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateADSBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateADS() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateOther() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateJoysticks() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateMovementDelta() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateRelativeUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessSwip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InRotationArea() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessSprinting() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateMovementAcceleration() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xDC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitInputButton() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsCircleOverlap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessRotationInputDelta() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsOpenRotationLog() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xEC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessDeltaRotationFromGamepad() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessDeltaRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateFireButtonPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsCan3Dtouch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xFC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsIn3DTouchArea() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x100);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitGameHanleButtonDefDic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x104);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddGameHandleButton() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x108);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetGameHandleInputButton() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetInputButton() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x110);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InButtonArea() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x114);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_InButtonArea() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x118);
	}
	template <typename T = uintptr_t> static T& __Hotfix2_InButtonArea() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x11C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitButtonPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x120);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPlayerInput() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x124);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetButtonState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x128);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetButtonDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x12C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetButtonUp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x130);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetButtonEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x134);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPlayerInput() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x138);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetButtonState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x13C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLastButtonState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x140);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateButtonDownAndUpState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x144);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateButtonState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x148);
	}

	template <typename T = float> T get_TouchForce() {
		return ((T (*)(GameHandle*))(Il2CppBase() + 0x36C3738))(this);
	}
	template <typename T = uintptr_t> static T get_RotationButton() {
		return ((T (*)(void *))(Il2CppBase() + 0x36C3740))(0);
	}
	template <typename T = bool> static T IsEnableRecyle(uintptr_t input) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x36C3A18))(0, input);
	}
	template <typename T = void> static T SetResolutionToRotationScale(float originalHeigh, float originalWidth, float designHeigh) {
		return ((T (*)(void *, float, float, float))(Il2CppBase() + 0x36C3CB4))(0, originalHeigh, originalWidth, designHeigh);
	}
	template <typename T = uintptr_t> T get_MoveHandle() {
		return ((T (*)(GameHandle*))(Il2CppBase() + 0x36C3F0C))(this);
	}
	template <typename T = void> T set_MoveHandle(uintptr_t value) {
		return ((T (*)(GameHandle*, uintptr_t))(Il2CppBase() + 0x36C3FF8))(this, value);
	}
	template <typename T = bool> T get_IsSprinting() {
		return ((T (*)(GameHandle*))(Il2CppBase() + 0x36C4000))(this);
	}
	template <typename T = bool> T get_IsContinuouslySprinting() {
		return ((T (*)(GameHandle*))(Il2CppBase() + 0x36C402C))(this);
	}
	template <typename T = void> T SetContinuouslySprinting() {
		return ((T (*)(GameHandle*))(Il2CppBase() + 0x36C4058))(this);
	}
	template <typename T = void> T StartContinuouslySprinting() {
		return ((T (*)(GameHandle*))(Il2CppBase() + 0x36C41DC))(this);
	}
	template <typename T = void> T StopContinuouslySprinting() {
		return ((T (*)(GameHandle*))(Il2CppBase() + 0x36C4458))(this);
	}
	template <typename T = float> T GetLastMovementAcceInitTime() {
		return ((T (*)(GameHandle*))(Il2CppBase() + 0x36C454C))(this);
	}
	template <typename T = void> T SetSprintAngle(float value) {
		return ((T (*)(GameHandle*, float))(Il2CppBase() + 0x36C4654))(this, value);
	}
	template <typename T = Il2CppVector2> T get_MovementAccel() {
		return ((T (*)(GameHandle*))(Il2CppBase() + 0x36C4760))(this);
	}
	template <typename T = void> T Init(uintptr_t inputConfig) {
		return ((T (*)(GameHandle*, uintptr_t))(Il2CppBase() + 0x36C479C))(this, inputConfig);
	}
	template <typename T = void> T InitFromInputConfig(uintptr_t inputConfig) {
		return ((T (*)(GameHandle*, uintptr_t))(Il2CppBase() + 0x36C486C))(this, inputConfig);
	}
	template <typename T = void> static T SetMirrorRotationButton(bool isMirror) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x36C4FC8))(0, isMirror);
	}
	template <typename T = void> T SetMoveHandleImpl(uintptr_t moveHandleImpl) {
		return ((T (*)(GameHandle*, uintptr_t))(Il2CppBase() + 0x36C50F0))(this, moveHandleImpl);
	}
	template <typename T = uintptr_t> T GetMoveHandleType() {
		return ((T (*)(GameHandle*))(Il2CppBase() + 0x36C51C8))(this);
	}
	template <typename T = void> T InitFireBtn(Il2CppVector2 pos, Il2CppVector2 size, uintptr_t type, uintptr_t buttonType) {
		return ((T (*)(GameHandle*, Il2CppVector2, Il2CppVector2, uintptr_t, uintptr_t))(Il2CppBase() + 0x36C52C0))(this, pos, size, type, buttonType);
	}
	template <typename T = void> T UpdateMovementPos() {
		return ((T (*)(GameHandle*))(Il2CppBase() + 0x36C54E0))(this);
	}
	template <typename T = void> T InitMovementBtn(Il2CppVector2 pos, Il2CppVector2 size) {
		return ((T (*)(GameHandle*, Il2CppVector2, Il2CppVector2))(Il2CppBase() + 0x36C5BCC))(this, pos, size);
	}
	template <typename T = bool> T InMovementArea(uintptr_t playerInput) {
		return ((T (*)(GameHandle*, uintptr_t))(Il2CppBase() + 0x36C5E18))(this, playerInput);
	}
	template <typename T = void> T CalcMovementVector() {
		return ((T (*)(GameHandle*))(Il2CppBase() + 0x36C605C))(this);
	}
	template <typename T = bool> T get_IsFullScreenRotateCamera() {
		return ((T (*)(GameHandle*))(Il2CppBase() + 0x36C6220))(this);
	}
	template <typename T = bool> T get_IsPinch() {
		return ((T (*)(GameHandle*))(Il2CppBase() + 0x36C641C))(this);
	}
	template <typename T = bool> static T get_IsPinchUpOrDown() {
		return ((T (*)(void *))(Il2CppBase() + 0x36C651C))(0);
	}
	template <typename T = void> T ProcessPinch(Il2CppList<uintptr_t>* playerInputList) {
		return ((T (*)(GameHandle*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x36C661C))(this, playerInputList);
	}
	template <typename T = void> T EditorSetInput() {
		return ((T (*)(GameHandle*))(Il2CppBase() + 0x36C67B4))(this);
	}
	template <typename T = void> T Update3DTouchState() {
		return ((T (*)(GameHandle*))(Il2CppBase() + 0x36C6EB4))(this);
	}
	template <typename T = void> T ProcessPlayerInputs(uintptr_t playerInputList) {
		return ((T (*)(GameHandle*, uintptr_t))(Il2CppBase() + 0x36C7528))(this, playerInputList);
	}
	template <typename T = void> T UpdateMoveButton(uintptr_t input) {
		return ((T (*)(GameHandle*, uintptr_t))(Il2CppBase() + 0x36C7800))(this, input);
	}
	template <typename T = void> T UpdateRotation(uintptr_t input) {
		return ((T (*)(GameHandle*, uintptr_t))(Il2CppBase() + 0x36C7AC8))(this, input);
	}
	template <typename T = void> T UpdateFireButton(uintptr_t input) {
		return ((T (*)(GameHandle*, uintptr_t))(Il2CppBase() + 0x36C7EAC))(this, input);
	}
	template <typename T = void> T UpdateDoubleClickButton(uintptr_t input) {
		return ((T (*)(GameHandle*, uintptr_t))(Il2CppBase() + 0x36C8500))(this, input);
	}
	template <typename T = void> T UpdateDoubleSprintButton(uintptr_t input) {
		return ((T (*)(GameHandle*, uintptr_t))(Il2CppBase() + 0x36C87B0))(this, input);
	}
	template <typename T = void> T UpdateADSBtn(uintptr_t input) {
		return ((T (*)(GameHandle*, uintptr_t))(Il2CppBase() + 0x36C8A78))(this, input);
	}
	template <typename T = void> T UpdateADS(uintptr_t input) {
		return ((T (*)(GameHandle*, uintptr_t))(Il2CppBase() + 0x36C8DD8))(this, input);
	}
	template <typename T = void> T UpdateOther(uintptr_t input) {
		return ((T (*)(GameHandle*, uintptr_t))(Il2CppBase() + 0x36C8078))(this, input);
	}
	template <typename T = void> T PreInit() {
		return ((T (*)(GameHandle*))(Il2CppBase() + 0x36C9154))(this);
	}
	template <typename T = void> T UpdateJoysticks(Il2CppList<uintptr_t>* playerInputList) {
		return ((T (*)(GameHandle*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x36C9440))(this, playerInputList);
	}
	template <typename T = void> T UpdateMovementDelta() {
		return ((T (*)(GameHandle*))(Il2CppBase() + 0x36CA338))(this);
	}
	template <typename T = void> T UpdateRelativeUI() {
		return ((T (*)(GameHandle*))(Il2CppBase() + 0x36CA190))(this);
	}
	template <typename T = void> T ProcessSwip() {
		return ((T (*)(GameHandle*))(Il2CppBase() + 0x36C9CDC))(this);
	}
	template <typename T = bool> T InRotationArea(Il2CppVector2 initialPosition) {
		return ((T (*)(GameHandle*, Il2CppVector2))(Il2CppBase() + 0x36CA618))(this, initialPosition);
	}
	template <typename T = void> T ProcessSprinting() {
		return ((T (*)(GameHandle*))(Il2CppBase() + 0x36CA428))(this);
	}
	template <typename T = void> T UpdateMovementAcceleration() {
		return ((T (*)(GameHandle*))(Il2CppBase() + 0x36CA520))(this);
	}
	template <typename T = void> T InitInputButton(uintptr_t type, uintptr_t config) {
		return ((T (*)(GameHandle*, uintptr_t, uintptr_t))(Il2CppBase() + 0x36C4E08))(this, type, config);
	}
	template <typename T = bool> T IsCircleOverlap(Il2CppVector2 pos1, float radius1, Il2CppVector2 pos2, float radius2) {
		return ((T (*)(GameHandle*, Il2CppVector2, float, Il2CppVector2, float))(Il2CppBase() + 0x36CAACC))(this, pos1, radius1, pos2, radius2);
	}
	template <typename T = void> T ProcessRotationInputDelta() {
		return ((T (*)(GameHandle*))(Il2CppBase() + 0x36C9F68))(this);
	}
	template <typename T = bool> static T IsOpenRotationLog() {
		return ((T (*)(void *))(Il2CppBase() + 0x36CAC14))(0);
	}
	template <typename T = void> T ProcessDeltaRotationFromGamepad(Il2CppVector2 deltaPos) {
		return ((T (*)(GameHandle*, Il2CppVector2))(Il2CppBase() + 0x36CAD84))(this, deltaPos);
	}
	template <typename T = void> T ProcessDeltaRotation(Il2CppVector2 deltaPos) {
		return ((T (*)(GameHandle*, Il2CppVector2))(Il2CppBase() + 0x36CAFF0))(this, deltaPos);
	}
	template <typename T = bool> T get_IsOpenFireMoveFollow() {
		return ((T (*)(GameHandle*))(Il2CppBase() + 0x36CC48C))(this);
	}
	template <typename T = void> T UpdateFireButtonPos() {
		return ((T (*)(GameHandle*))(Il2CppBase() + 0x36CC53C))(this);
	}
	template <typename T = bool> T IsCan3Dtouch() {
		return ((T (*)(GameHandle*))(Il2CppBase() + 0x36C71F0))(this);
	}
	template <typename T = bool> T IsIn3DTouchArea(Il2CppVector2 pos) {
		return ((T (*)(GameHandle*, Il2CppVector2))(Il2CppBase() + 0x36CCA5C))(this, pos);
	}
	template <typename T = void> static T InitGameHanleButtonDefDic() {
		return ((T (*)(void *))(Il2CppBase() + 0x36C49BC))(0);
	}
	template <typename T = void> static T AddGameHandleButton(uintptr_t type, uintptr_t inputBtn) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x36CCEC8))(0, type, inputBtn);
	}
	template <typename T = uintptr_t> static T GetGameHandleInputButton(uintptr_t type) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x36C5844))(0, type);
	}
	template <typename T = uintptr_t> static T GetInputButton(uintptr_t type) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x36C3910))(0, type);
	}
	template <typename T = bool> static T InButtonArea(uintptr_t type, uintptr_t playerInput) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x36C83C0))(0, type, playerInput);
	}
	template <typename T = bool> static T InButtonArea_1(uintptr_t type, Il2CppVector2 pos) {
		return ((T (*)(void *, uintptr_t, Il2CppVector2))(Il2CppBase() + 0x36C8278))(0, type, pos);
	}
	template <typename T = bool> static T InButtonArea_2(uintptr_t type, Il2CppVector2 pos, bool bTriggerAnyway) {
		return ((T (*)(void *, uintptr_t, Il2CppVector2, bool))(Il2CppBase() + 0x36C8C80))(0, type, pos, bTriggerAnyway);
	}
	template <typename T = void> static T InitButtonPos(uintptr_t type, Il2CppVector2 pos, Il2CppVector2 size) {
		return ((T (*)(void *, uintptr_t, Il2CppVector2, Il2CppVector2))(Il2CppBase() + 0x36CD0C4))(0, type, pos, size);
	}
	template <typename T = uintptr_t> static T GetPlayerInput(uintptr_t type) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x36C3BAC))(0, type);
	}
	template <typename T = bool> static T GetButtonState(uintptr_t type) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x36CD280))(0, type);
	}
	template <typename T = bool> static T GetButtonDown(uintptr_t type) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x36CD394))(0, type);
	}
	template <typename T = bool> static T GetButtonUp(uintptr_t type) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x36CD4B0))(0, type);
	}
	template <typename T = void> static T SetButtonEnable(uintptr_t type, bool enable) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x36CD5CC))(0, type, enable);
	}
	template <typename T = void> static T SetPlayerInput(uintptr_t type, uintptr_t input) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x36C6C94))(0, type, input);
	}
	template <typename T = void> static T SetButtonState(uintptr_t type, bool state) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x36C6DA4))(0, type, state);
	}
	template <typename T = void> static T SetLastButtonState() {
		return ((T (*)(void *))(Il2CppBase() + 0x36C981C))(0);
	}
	template <typename T = void> static T UpdateButtonDownAndUpState() {
		return ((T (*)(void *))(Il2CppBase() + 0x36C9A7C))(0);
	}
	template <typename T = void> static T UpdateButtonState(Il2CppVector3 pos) {
		return ((T (*)(void *, Il2CppVector3))(Il2CppBase() + 0x36C8EC4))(0, pos);
	}

};

}
