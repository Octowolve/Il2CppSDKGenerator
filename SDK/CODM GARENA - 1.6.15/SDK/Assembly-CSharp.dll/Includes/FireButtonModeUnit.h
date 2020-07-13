#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FireButtonModeUnit
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FireButtonModeUnit"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& FireBtnInputList() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFireButtonInput() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetInputButton() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFireInput() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetIsFiring() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFireAimButtonDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFireAimButtonUp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsADSType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAimFiring() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFireButtonDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFiring() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFireButtonUp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InFireArea() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetInputButtonSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetInputButtonPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetInputOriginPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetInputButtonEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetInputButtonAreaType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateButtonEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_UpdateButtonEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLastFireButtonState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetFireInput() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetFiring() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateFireDownAndUpState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateFireInputArea() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateFireBtnVisible() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}

	template <typename T = uintptr_t> T GetFireButtonInput(uintptr_t type) {
		return ((T (*)(FireButtonModeUnit*, uintptr_t))(Il2CppBase() + 0x3CC2D80))(this, type);
	}
	template <typename T = uintptr_t> T GetInputButton(uintptr_t type) {
		return ((T (*)(FireButtonModeUnit*, uintptr_t))(Il2CppBase() + 0x3CC2E58))(this, type);
	}
	template <typename T = uintptr_t> T GetFireInput(uintptr_t type) {
		return ((T (*)(FireButtonModeUnit*, uintptr_t))(Il2CppBase() + 0x3CC2F38))(this, type);
	}
	template <typename T = bool> T GetIsFiring(uintptr_t type) {
		return ((T (*)(FireButtonModeUnit*, uintptr_t))(Il2CppBase() + 0x3CC3018))(this, type);
	}
	template <typename T = bool> T GetFireAimButtonDown(uintptr_t type) {
		return ((T (*)(FireButtonModeUnit*, uintptr_t))(Il2CppBase() + 0x3CC3104))(this, type);
	}
	template <typename T = bool> T GetFireAimButtonUp(uintptr_t type) {
		return ((T (*)(FireButtonModeUnit*, uintptr_t))(Il2CppBase() + 0x3CC3268))(this, type);
	}
	template <typename T = bool> T IsADSType(uintptr_t type) {
		return ((T (*)(FireButtonModeUnit*, uintptr_t))(Il2CppBase() + 0x3CC33CC))(this, type);
	}
	template <typename T = bool> T GetAimFiring(uintptr_t type) {
		return ((T (*)(FireButtonModeUnit*, uintptr_t))(Il2CppBase() + 0x3CC34BC))(this, type);
	}
	template <typename T = bool> T GetFireButtonDown(uintptr_t type) {
		return ((T (*)(FireButtonModeUnit*, uintptr_t))(Il2CppBase() + 0x3CC3620))(this, type);
	}
	template <typename T = bool> T GetFiring(uintptr_t type) {
		return ((T (*)(FireButtonModeUnit*, uintptr_t))(Il2CppBase() + 0x3CC3770))(this, type);
	}
	template <typename T = bool> T GetFireButtonUp(uintptr_t type) {
		return ((T (*)(FireButtonModeUnit*, uintptr_t))(Il2CppBase() + 0x3CC38C0))(this, type);
	}
	template <typename T = bool> T InFireArea(uintptr_t type, Il2CppVector2 pos) {
		return ((T (*)(FireButtonModeUnit*, uintptr_t, Il2CppVector2))(Il2CppBase() + 0x3CC3A10))(this, type, pos);
	}
	template <typename T = void> T SetInputButtonSize(uintptr_t type, Il2CppVector2 size) {
		return ((T (*)(FireButtonModeUnit*, uintptr_t, Il2CppVector2))(Il2CppBase() + 0x3CC3B74))(this, type, size);
	}
	template <typename T = void> T SetInputButtonPos(uintptr_t type, Il2CppVector2 pos) {
		return ((T (*)(FireButtonModeUnit*, uintptr_t, Il2CppVector2))(Il2CppBase() + 0x3CC3C5C))(this, type, pos);
	}
	template <typename T = void> T SetInputOriginPosition(uintptr_t type, Il2CppVector2 pos) {
		return ((T (*)(FireButtonModeUnit*, uintptr_t, Il2CppVector2))(Il2CppBase() + 0x3CC3D94))(this, type, pos);
	}
	template <typename T = void> T SetInputButtonEnable(uintptr_t type, bool flag) {
		return ((T (*)(FireButtonModeUnit*, uintptr_t, bool))(Il2CppBase() + 0x3CC3E84))(this, type, flag);
	}
	template <typename T = void> T SetInputButtonAreaType(uintptr_t type, uintptr_t inputType) {
		return ((T (*)(FireButtonModeUnit*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3CC3FD8))(this, type, inputType);
	}
	template <typename T = void> T UpdateButtonEnable(bool isMustDisable, uintptr_t type) {
		return ((T (*)(FireButtonModeUnit*, bool, uintptr_t))(Il2CppBase() + 0x3CC40B4))(this, isMustDisable, type);
	}
	template <typename T = void> T UpdateButtonEnable_1() {
		return ((T (*)(FireButtonModeUnit*))(Il2CppBase() + 0x3CC4190))(this);
	}
	template <typename T = void> T SetLastFireButtonState() {
		return ((T (*)(FireButtonModeUnit*))(Il2CppBase() + 0x3CC4450))(this);
	}
	template <typename T = void> T SetFireInput(uintptr_t type, uintptr_t fireInput) {
		return ((T (*)(FireButtonModeUnit*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3CC4550))(this, type, fireInput);
	}
	template <typename T = void> T SetFiring(uintptr_t type, bool isFiring) {
		return ((T (*)(FireButtonModeUnit*, uintptr_t, bool))(Il2CppBase() + 0x3CC4684))(this, type, isFiring);
	}
	template <typename T = void> T UpdateFireDownAndUpState() {
		return ((T (*)(FireButtonModeUnit*))(Il2CppBase() + 0x3CC4760))(this);
	}
	template <typename T = void> T UpdateFireInputArea(uintptr_t fireInput) {
		return ((T (*)(FireButtonModeUnit*, uintptr_t))(Il2CppBase() + 0x3CC4850))(this, fireInput);
	}
	template <typename T = void> T UpdateFireBtnVisible() {
		return ((T (*)(FireButtonModeUnit*))(Il2CppBase() + 0x3CC4990))(this);
	}

};

}
