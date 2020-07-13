#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameSettings {

class SettingsPhraseTitleItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameSettings", "SettingsPhraseTitleItem"));
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
		return ((T (*)(SettingsPhraseTitleItem*))(Il2CppBase() + 0x28B20F4))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(SettingsPhraseTitleItem*))(Il2CppBase() + 0x28B2208))(this);
	}
	template <typename T = void> T OnTitleClick(uintptr_t obj) {
		return ((T (*)(SettingsPhraseTitleItem*, uintptr_t))(Il2CppBase() + 0x28B22D8))(this, obj);
	}

};

}
