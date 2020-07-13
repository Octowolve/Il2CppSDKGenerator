#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameSettings {

class SettingsScrollViewReset
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameSettings", "SettingsScrollViewReset"));
	}

	template <typename T = uintptr_t> T& scrollView() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(SettingsScrollViewReset*))(Il2CppBase() + 0x28B6778))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(SettingsScrollViewReset*))(Il2CppBase() + 0x28B68B0))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(SettingsScrollViewReset*))(Il2CppBase() + 0x28B69C0))(this);
	}

};

}
