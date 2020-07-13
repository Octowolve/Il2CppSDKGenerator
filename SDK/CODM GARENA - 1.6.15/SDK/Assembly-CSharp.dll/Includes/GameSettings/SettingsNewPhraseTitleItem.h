#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameSettings {

class SettingsNewPhraseTitleItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameSettings", "SettingsNewPhraseTitleItem"));
	}

	template <typename T = uintptr_t> T& msgType() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTitleClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T OnEnable() {
		return ((T (*)(SettingsNewPhraseTitleItem*))(Il2CppBase() + 0x28919A0))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(SettingsNewPhraseTitleItem*))(Il2CppBase() + 0x2891AB4))(this);
	}
	template <typename T = void> T OnTitleClick(uintptr_t obj) {
		return ((T (*)(SettingsNewPhraseTitleItem*, uintptr_t))(Il2CppBase() + 0x2891B84))(this, obj);
	}

};

}
