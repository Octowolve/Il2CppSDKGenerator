#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ZMSignHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ZMSignHUD"));
	}

	template <typename T = uintptr_t> T& ZMSignPool() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoundEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetHUD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(ZMSignHUD*))(Il2CppBase() + 0x4DDC458))(this);
	}
	template <typename T = bool> T get_IsControlByUiState() {
		return ((T (*)(ZMSignHUD*))(Il2CppBase() + 0x4DDC5B0))(this);
	}
	template <typename T = uint64_t> T get_InactiveGameHudState() {
		return ((T (*)(ZMSignHUD*))(Il2CppBase() + 0x4DDC5B8))(this);
	}
	template <typename T = void> T AddItem(uintptr_t zombiePawn) {
		return ((T (*)(ZMSignHUD*, uintptr_t))(Il2CppBase() + 0x4DDC5C4))(this, zombiePawn);
	}
	template <typename T = void> T RemoveItem(uintptr_t zombiePawn) {
		return ((T (*)(ZMSignHUD*, uintptr_t))(Il2CppBase() + 0x4DDC798))(this, zombiePawn);
	}
	template <typename T = void> T OnRoundEnd(uintptr_t result) {
		return ((T (*)(ZMSignHUD*, uintptr_t))(Il2CppBase() + 0x4DDC9B0))(this, result);
	}
	template <typename T = void> T ResetHUD() {
		return ((T (*)(ZMSignHUD*))(Il2CppBase() + 0x4DDCA80))(this);
	}
	template <typename T = void> T RegisterDelegatesm__0(uintptr_t msg) {
		return ((T (*)(ZMSignHUD*, uintptr_t))(Il2CppBase() + 0x4DDCDC8))(this, msg);
	}
	template <typename T = void> T RegisterDelegatesm__1(uintptr_t msg) {
		return ((T (*)(ZMSignHUD*, uintptr_t))(Il2CppBase() + 0x4DDCEB0))(this, msg);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(ZMSignHUD*))(Il2CppBase() + 0x4DDCF98))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnRoundEnd(uintptr_t P0) {
		return ((T (*)(ZMSignHUD*, uintptr_t))(Il2CppBase() + 0x4DDCFA0))(this, P0);
	}

};

}
