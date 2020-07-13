#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class ZMEggMapContainerHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "ZMEggMapContainerHUD"));
	}

	template <typename T = uintptr_t> T& MapRoot() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& AllMark() {
		return *(T*)((uintptr_t)this + 0x80);
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
	template <typename T = uintptr_t> static T& __Hotfix0_GamepadClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsShowing() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Show() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEggMapClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(ZMEggMapContainerHUD*))(Il2CppBase() + 0x2A4EC44))(this);
	}
	template <typename T = bool> T get_IsControlByUiState() {
		return ((T (*)(ZMEggMapContainerHUD*))(Il2CppBase() + 0x2A4F054))(this);
	}
	template <typename T = uint64_t> T get_InactiveGameHudState() {
		return ((T (*)(ZMEggMapContainerHUD*))(Il2CppBase() + 0x2A4F05C))(this);
	}
	template <typename T = void> T ForceRegisterDelegates() {
		return ((T (*)(ZMEggMapContainerHUD*))(Il2CppBase() + 0x2A4F06C))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(ZMEggMapContainerHUD*))(Il2CppBase() + 0x2A4F104))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(ZMEggMapContainerHUD*))(Il2CppBase() + 0x2A4F24C))(this);
	}
	template <typename T = bool> T GamepadDown() {
		return ((T (*)(ZMEggMapContainerHUD*))(Il2CppBase() + 0x2A4F394))(this);
	}
	template <typename T = bool> T GamepadClose() {
		return ((T (*)(ZMEggMapContainerHUD*))(Il2CppBase() + 0x2A4F5F4))(this);
	}
	template <typename T = bool> T IsShowing() {
		return ((T (*)(ZMEggMapContainerHUD*))(Il2CppBase() + 0x2A4F6D8))(this);
	}
	template <typename T = void> T Show(bool bShow) {
		return ((T (*)(ZMEggMapContainerHUD*, bool))(Il2CppBase() + 0x2A4EDFC))(this, bShow);
	}
	template <typename T = void> T OnEggMapClick(uintptr_t obj) {
		return ((T (*)(ZMEggMapContainerHUD*, uintptr_t))(Il2CppBase() + 0x2A4F544))(this, obj);
	}
	template <typename T = void> T OnClose(uintptr_t obj, bool bPress) {
		return ((T (*)(ZMEggMapContainerHUD*, uintptr_t, bool))(Il2CppBase() + 0x2A4F47C))(this, obj, bPress);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(ZMEggMapContainerHUD*))(Il2CppBase() + 0x2A4F7C0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ForceRegisterDelegates() {
		return ((T (*)(ZMEggMapContainerHUD*))(Il2CppBase() + 0x2A4F7C8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(ZMEggMapContainerHUD*))(Il2CppBase() + 0x2A4F7D0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(ZMEggMapContainerHUD*))(Il2CppBase() + 0x2A4F7D8))(this);
	}

};

}
