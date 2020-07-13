#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class JoySticksPanelView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "JoySticksPanelView"));
	}

	template <typename T = uintptr_t> T& FixedPanel() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& PopupPanel() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = bool> T get_IsControlByUiState() {
		return ((T (*)(JoySticksPanelView*))(Il2CppBase() + 0x2E1E274))(this);
	}
	template <typename T = uint64_t> T get_InactiveGameHudState() {
		return ((T (*)(JoySticksPanelView*))(Il2CppBase() + 0x2E1E27C))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(JoySticksPanelView*))(Il2CppBase() + 0x2E1E28C))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(JoySticksPanelView*))(Il2CppBase() + 0x2E1E588))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(JoySticksPanelView*))(Il2CppBase() + 0x2E1E630))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(JoySticksPanelView*))(Il2CppBase() + 0x2E1E6D8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnEnable() {
		return ((T (*)(JoySticksPanelView*))(Il2CppBase() + 0x2E1E6E0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnDisable() {
		return ((T (*)(JoySticksPanelView*))(Il2CppBase() + 0x2E1E6E8))(this);
	}

};

}
