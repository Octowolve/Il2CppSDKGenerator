#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class KnifeSwitchBtnView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "KnifeSwitchBtnView"));
	}

	template <typename T = uintptr_t> T& SwitchBtn() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& BtnEffect() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& PveGamepadBtn() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& NormalGamepadBtn() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& Container2() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = bool> T& mIsPendingFire() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = float> T& ClearPendingFireTime() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = float> static T& mBanControlTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetUIBanClickType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetGamepadAlphaWidget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGamepadUseKnife() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HandlePress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchToKnife() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}

	template <typename T = uintptr_t> T get_mPawnSwitchState() {
		return ((T (*)(KnifeSwitchBtnView*))(Il2CppBase() + 0x2E24D38))(this);
	}
	template <typename T = uintptr_t> T GetUIBanClickType() {
		return ((T (*)(KnifeSwitchBtnView*))(Il2CppBase() + 0x2E24D44))(this);
	}
	template <typename T = bool> T get_IsControlByUiState() {
		return ((T (*)(KnifeSwitchBtnView*))(Il2CppBase() + 0x2E24EDC))(this);
	}
	template <typename T = uint64_t> T get_InactiveGameHudState() {
		return ((T (*)(KnifeSwitchBtnView*))(Il2CppBase() + 0x2E24EE4))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(KnifeSwitchBtnView*))(Il2CppBase() + 0x2E24EF8))(this);
	}
	template <typename T = uintptr_t> T GetGamepadAlphaWidget() {
		return ((T (*)(KnifeSwitchBtnView*))(Il2CppBase() + 0x2E25268))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(KnifeSwitchBtnView*))(Il2CppBase() + 0x2E2536C))(this);
	}
	template <typename T = bool> T OnGamepadUseKnife() {
		return ((T (*)(KnifeSwitchBtnView*))(Il2CppBase() + 0x2E256C8))(this);
	}
	template <typename T = void> T HandlePress(uintptr_t go, bool state) {
		return ((T (*)(KnifeSwitchBtnView*, uintptr_t, bool))(Il2CppBase() + 0x2E26094))(this, go, state);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(KnifeSwitchBtnView*))(Il2CppBase() + 0x2E26194))(this);
	}
	template <typename T = void> T SwitchToKnife() {
		return ((T (*)(KnifeSwitchBtnView*))(Il2CppBase() + 0x2E2580C))(this);
	}
	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(KnifeSwitchBtnView*))(Il2CppBase() + 0x2E26408))(this);
	}
	template <typename T = float> static T get_MBanControlTime() {
		return ((T (*)(void *))(Il2CppBase() + 0x2E26410))(0);
	}
	template <typename T = void> static T set_MBanControlTime(float value) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x2E264C0))(0, value);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(KnifeSwitchBtnView*, float))(Il2CppBase() + 0x2E26580))(this, dt);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(KnifeSwitchBtnView*))(Il2CppBase() + 0x2E26710))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetUIBanClickType() {
		return ((T (*)(KnifeSwitchBtnView*))(Il2CppBase() + 0x2E26914))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(KnifeSwitchBtnView*))(Il2CppBase() + 0x2E2691C))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetGamepadAlphaWidget() {
		return ((T (*)(KnifeSwitchBtnView*))(Il2CppBase() + 0x2E26924))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(KnifeSwitchBtnView*))(Il2CppBase() + 0x2E26928))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(KnifeSwitchBtnView*))(Il2CppBase() + 0x2E2692C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(KnifeSwitchBtnView*, float))(Il2CppBase() + 0x2E26930))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnDisable() {
		return ((T (*)(KnifeSwitchBtnView*))(Il2CppBase() + 0x2E26938))(this);
	}

};

}
