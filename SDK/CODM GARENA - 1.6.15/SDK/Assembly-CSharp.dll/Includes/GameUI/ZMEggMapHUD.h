#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class ZMEggMapHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "ZMEggMapHUD"));
	}

	template <typename T = uintptr_t> T& Button() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForceRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GamepadDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Show() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEggMapClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(ZMEggMapHUD*))(Il2CppBase() + 0x2A4F928))(this);
	}
	template <typename T = bool> T get_IsControlByUiState() {
		return ((T (*)(ZMEggMapHUD*))(Il2CppBase() + 0x2A4FA3C))(this);
	}
	template <typename T = uint64_t> T get_InactiveGameHudState() {
		return ((T (*)(ZMEggMapHUD*))(Il2CppBase() + 0x2A4FA44))(this);
	}
	template <typename T = void> T ForceRegisterDelegates() {
		return ((T (*)(ZMEggMapHUD*))(Il2CppBase() + 0x2A4FA54))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(ZMEggMapHUD*))(Il2CppBase() + 0x2A4FAEC))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(ZMEggMapHUD*))(Il2CppBase() + 0x2A4FC34))(this);
	}
	template <typename T = bool> T GamepadDown() {
		return ((T (*)(ZMEggMapHUD*))(Il2CppBase() + 0x2A4FD7C))(this);
	}
	template <typename T = void> T Show(bool bShow) {
		return ((T (*)(ZMEggMapHUD*, bool))(Il2CppBase() + 0x2A500D4))(this, bShow);
	}
	template <typename T = void> T OnEggMapClick(uintptr_t obj) {
		return ((T (*)(ZMEggMapHUD*, uintptr_t))(Il2CppBase() + 0x2A50024))(this, obj);
	}
	template <typename T = void> T OnClose(uintptr_t obj, bool bPress) {
		return ((T (*)(ZMEggMapHUD*, uintptr_t, bool))(Il2CppBase() + 0x2A4FF5C))(this, obj, bPress);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(ZMEggMapHUD*))(Il2CppBase() + 0x2A50298))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ForceRegisterDelegates() {
		return ((T (*)(ZMEggMapHUD*))(Il2CppBase() + 0x2A502A0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(ZMEggMapHUD*))(Il2CppBase() + 0x2A502A8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(ZMEggMapHUD*))(Il2CppBase() + 0x2A502B0))(this);
	}

};

}
