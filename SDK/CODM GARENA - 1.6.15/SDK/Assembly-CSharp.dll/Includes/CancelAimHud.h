#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CancelAimHud
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CancelAimHud"));
	}

	template <typename T = uintptr_t> T& Container() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& CancelBtn() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = float> T& mCountTime() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitFromConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LockCheck() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCancelBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(CancelAimHud*))(Il2CppBase() + 0x531BDF4))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(CancelAimHud*))(Il2CppBase() + 0x531BDFC))(this);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(CancelAimHud*, float))(Il2CppBase() + 0x531BF14))(this, dt);
	}
	template <typename T = void> T InitFromConfig(uintptr_t btnConfig, uintptr_t type) {
		return ((T (*)(CancelAimHud*, uintptr_t, uintptr_t))(Il2CppBase() + 0x531C2C4))(this, btnConfig, type);
	}
	template <typename T = void> T LockCheck() {
		return ((T (*)(CancelAimHud*))(Il2CppBase() + 0x531C3F0))(this);
	}
	template <typename T = void> T OnCancelBtn() {
		return ((T (*)(CancelAimHud*))(Il2CppBase() + 0x531C5C8))(this);
	}
	template <typename T = void> T HideUI() {
		return ((T (*)(CancelAimHud*))(Il2CppBase() + 0x531BC54))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(CancelAimHud*))(Il2CppBase() + 0x531C978))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(CancelAimHud*, float))(Il2CppBase() + 0x531C980))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_InitFromConfig(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(CancelAimHud*, uintptr_t, uintptr_t))(Il2CppBase() + 0x531C988))(this, P0, P1);
	}

};

}
