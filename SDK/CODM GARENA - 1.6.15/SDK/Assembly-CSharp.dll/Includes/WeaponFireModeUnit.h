#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WeaponFireModeUnit
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeaponFireModeUnit"));
	}

	template <typename T = uintptr_t> static T& mInstance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& mInputInstance() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& IsAutoFiring() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> static T& LockFireBtnTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = bool> T& mIsTriggerASDMode() {
		return *(T*)((uintptr_t)this + 0xD);
	}
	template <typename T = bool> T& IsKeyCodeButtonFire() {
		return *(T*)((uintptr_t)this + 0xE);
	}
	template <typename T = bool> T& IsKeyCodeLeftButtonFire() {
		return *(T*)((uintptr_t)this + 0xF);
	}
	template <typename T = bool> T& IsKeyCodeButtonDown() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& IsKeyCodeButtonUp() {
		return *(T*)((uintptr_t)this + 0x11);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsButtonAimFiring() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsFireButtonPressByType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsBRSkillViewFiring() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsMPSkillUsing() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsMPSkillUsingByType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsMPSkillByType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsFireButtonPress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateFireResult() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateFireButtonStatus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFireAimButtonDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFireAimButtonUp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFireButtonDownOrUp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFireButtonDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFireButtonUp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsAimModeReleaseButton() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetKeyCodeInput() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}

	template <typename T = uintptr_t> static T get_Instance() {
		return ((T (*)(void *))(Il2CppBase() + 0x4C42E38))(0);
	}
	template <typename T = void> static T set_Instance(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4C4A610))(0, value);
	}
	template <typename T = void> T ResetData() {
		return ((T (*)(WeaponFireModeUnit*))(Il2CppBase() + 0x4C4A7B8))(this);
	}
	template <typename T = bool> T IsButtonAimFiring(uintptr_t type) {
		return ((T (*)(WeaponFireModeUnit*, uintptr_t))(Il2CppBase() + 0x4C4A88C))(this, type);
	}
	template <typename T = bool> T IsFireButtonPressByType(uintptr_t type) {
		return ((T (*)(WeaponFireModeUnit*, uintptr_t))(Il2CppBase() + 0x4C452B4))(this, type);
	}
	template <typename T = bool> T IsBRSkillViewFiring() {
		return ((T (*)(WeaponFireModeUnit*))(Il2CppBase() + 0x4C4A9D4))(this);
	}
	template <typename T = bool> T IsMPSkillUsing() {
		return ((T (*)(WeaponFireModeUnit*))(Il2CppBase() + 0x4C4ACD4))(this);
	}
	template <typename T = bool> T IsMPSkillUsingByType(uintptr_t type) {
		return ((T (*)(WeaponFireModeUnit*, uintptr_t))(Il2CppBase() + 0x4C4AF20))(this, type);
	}
	template <typename T = bool> T IsMPSkillByType(uintptr_t type) {
		return ((T (*)(WeaponFireModeUnit*, uintptr_t))(Il2CppBase() + 0x4C4B014))(this, type);
	}
	template <typename T = bool> T IsFireButtonPress() {
		return ((T (*)(WeaponFireModeUnit*))(Il2CppBase() + 0x4C4B1D8))(this);
	}
	template <typename T = void> T UpdateFireResult(uintptr_t fireResult, uintptr_t type) {
		return ((T (*)(WeaponFireModeUnit*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4C4B2DC))(this, fireResult, type);
	}
	template <typename T = void> T UpdateFireButtonStatus(uintptr_t fireResult) {
		return ((T (*)(WeaponFireModeUnit*, uintptr_t))(Il2CppBase() + 0x4C44370))(this, fireResult);
	}
	template <typename T = bool> T GetFireAimButtonDown(uintptr_t type) {
		return ((T (*)(WeaponFireModeUnit*, uintptr_t))(Il2CppBase() + 0x4C4B7D8))(this, type);
	}
	template <typename T = bool> T GetFireAimButtonUp(uintptr_t type) {
		return ((T (*)(WeaponFireModeUnit*, uintptr_t))(Il2CppBase() + 0x4C4B50C))(this, type);
	}
	template <typename T = bool> T GetFireButtonDownOrUp(uintptr_t type) {
		return ((T (*)(WeaponFireModeUnit*, uintptr_t))(Il2CppBase() + 0x4C47024))(this, type);
	}
	template <typename T = bool> T GetFireButtonDown(uintptr_t type) {
		return ((T (*)(WeaponFireModeUnit*, uintptr_t))(Il2CppBase() + 0x4C45140))(this, type);
	}
	template <typename T = bool> T GetFireButtonUp(uintptr_t type) {
		return ((T (*)(WeaponFireModeUnit*, uintptr_t))(Il2CppBase() + 0x4C4B664))(this, type);
	}
	template <typename T = bool> T get_IsTriggerADSMode() {
		return ((T (*)(WeaponFireModeUnit*))(Il2CppBase() + 0x4C44E70))(this);
	}
	template <typename T = void> T set_IsTriggerADSMode(bool value) {
		return ((T (*)(WeaponFireModeUnit*, bool))(Il2CppBase() + 0x4C47D38))(this, value);
	}
	template <typename T = bool> T IsAimModeReleaseButton() {
		return ((T (*)(WeaponFireModeUnit*))(Il2CppBase() + 0x4C4B920))(this);
	}
	template <typename T = void> T ResetKeyCodeInput() {
		return ((T (*)(WeaponFireModeUnit*))(Il2CppBase() + 0x4C433E8))(this);
	}

};

}
