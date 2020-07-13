#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.Settings {

class SettingSubView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.Settings", "SettingSubView"));
	}

	template <typename T = uintptr_t> T& EnterToggle() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = Il2CppString*> T& ToggleSound() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnToggleChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(SettingSubView*))(Il2CppBase() + 0x448CEF4))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(SettingSubView*))(Il2CppBase() + 0x448D08C))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(SettingSubView*))(Il2CppBase() + 0x448D204))(this);
	}
	template <typename T = void> T OnToggleChanged() {
		return ((T (*)(SettingSubView*))(Il2CppBase() + 0x448D398))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(SettingSubView*))(Il2CppBase() + 0x448D514))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(SettingSubView*))(Il2CppBase() + 0x448D51C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnDestroy() {
		return ((T (*)(SettingSubView*))(Il2CppBase() + 0x448D524))(this);
	}

};

}
