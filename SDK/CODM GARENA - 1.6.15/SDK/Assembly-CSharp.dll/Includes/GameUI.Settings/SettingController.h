#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.Settings {

class SettingController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.Settings", "SettingController"));
	}

	template <typename T = bool> T& m_InTutorial() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init_Tutorial() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_T_StartTutorial() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_T_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_T_OnEnterInputToggle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T Init_Tutorial() {
		return ((T (*)(SettingController*))(Il2CppBase() + 0x448CBF0))(this);
	}
	template <typename T = void> T T_StartTutorial() {
		return ((T (*)(SettingController*))(Il2CppBase() + 0x448CC88))(this);
	}
	template <typename T = void> T T_OnOpen() {
		return ((T (*)(SettingController*))(Il2CppBase() + 0x448CD20))(this);
	}
	template <typename T = void> T T_OnEnterInputToggle() {
		return ((T (*)(SettingController*))(Il2CppBase() + 0x448CDB8))(this);
	}

};

}
