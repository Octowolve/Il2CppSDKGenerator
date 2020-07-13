#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class DriveHandle
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "DriveHandle"));
	}

	template <typename T = uintptr_t> T& buttonType() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& rotationButton() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& fullScreenRotationButton() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& driveLeftButton() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& driveRightButton() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& driveForwardButton() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& driveBackwardButton() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& driveJoystickButton() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& driveUpButton() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& driveDownButton() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& driveHandSpikeBackward() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& driveHandSpike() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& driveAccBtn() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppVector3> T& driveVector() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = bool> T& Enable() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& isInitial() {
		return *(T*)((uintptr_t)this + 0x49);
	}
	template <typename T = bool> T& isRotationMirror() {
		return *(T*)((uintptr_t)this + 0x4A);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLeftPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRightPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetForwardPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBackPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDriveJoystickPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDriveAccPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDriveUpBtnPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDriveDownBtnPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetEnabled() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_setForceAcc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_getDriveControlVector() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessInput() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetMirrorRotationButton() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InMovementArea() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}

	template <typename T = uintptr_t> T get_buttonType() {
		return ((T (*)(DriveHandle*))(Il2CppBase() + 0x41BEF30))(this);
	}
	template <typename T = void> T set_buttonType(uintptr_t value) {
		return ((T (*)(DriveHandle*, uintptr_t))(Il2CppBase() + 0x41BEF38))(this, value);
	}
	template <typename T = uintptr_t> T get_RotationButton() {
		return ((T (*)(DriveHandle*))(Il2CppBase() + 0x41BEF40))(this);
	}
	template <typename T = Il2CppVector2> T GetLeftPosition() {
		return ((T (*)(DriveHandle*))(Il2CppBase() + 0x41BEF58))(this);
	}
	template <typename T = Il2CppVector2> T GetRightPosition() {
		return ((T (*)(DriveHandle*))(Il2CppBase() + 0x41BF038))(this);
	}
	template <typename T = Il2CppVector2> T GetForwardPosition() {
		return ((T (*)(DriveHandle*))(Il2CppBase() + 0x41BF118))(this);
	}
	template <typename T = Il2CppVector2> T GetBackPosition() {
		return ((T (*)(DriveHandle*))(Il2CppBase() + 0x41BF1F8))(this);
	}
	template <typename T = Il2CppVector2> T GetDriveJoystickPosition() {
		return ((T (*)(DriveHandle*))(Il2CppBase() + 0x41BF2D8))(this);
	}
	template <typename T = Il2CppVector2> T GetDriveAccPosition() {
		return ((T (*)(DriveHandle*))(Il2CppBase() + 0x41BF3B8))(this);
	}
	template <typename T = Il2CppVector2> T GetDriveUpBtnPosition() {
		return ((T (*)(DriveHandle*))(Il2CppBase() + 0x41BF498))(this);
	}
	template <typename T = Il2CppVector2> T GetDriveDownBtnPosition() {
		return ((T (*)(DriveHandle*))(Il2CppBase() + 0x41BF578))(this);
	}
	template <typename T = void> T Init(uintptr_t btnCfg) {
		return ((T (*)(DriveHandle*, uintptr_t))(Il2CppBase() + 0x41BF658))(this, btnCfg);
	}
	template <typename T = bool> T get_Enable() {
		return ((T (*)(DriveHandle*))(Il2CppBase() + 0x41BFDC0))(this);
	}
	template <typename T = void> T set_Enable(bool value) {
		return ((T (*)(DriveHandle*, bool))(Il2CppBase() + 0x41BFDC8))(this, value);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(DriveHandle*))(Il2CppBase() + 0x41BFDD0))(this);
	}
	template <typename T = void> T SetEnabled(bool isEnbaled) {
		return ((T (*)(DriveHandle*, bool))(Il2CppBase() + 0x41C00AC))(this, isEnbaled);
	}
	template <typename T = void> T setForceAcc(bool isForceAcc) {
		return ((T (*)(DriveHandle*, bool))(Il2CppBase() + 0x41BFEA4))(this, isForceAcc);
	}
	template <typename T = Il2CppVector3> T getDriveControlVector() {
		return ((T (*)(DriveHandle*))(Il2CppBase() + 0x41C0158))(this);
	}
	template <typename T = void> T ProcessInput(uintptr_t moveInput) {
		return ((T (*)(DriveHandle*, uintptr_t))(Il2CppBase() + 0x41C04B8))(this, moveInput);
	}
	template <typename T = void> T SetMirrorRotationButton(bool isMirror) {
		return ((T (*)(DriveHandle*, bool))(Il2CppBase() + 0x41BFCC0))(this, isMirror);
	}
	template <typename T = bool> T InMovementArea(uintptr_t playerInput) {
		return ((T (*)(DriveHandle*, uintptr_t))(Il2CppBase() + 0x41C0F88))(this, playerInput);
	}

};

}
