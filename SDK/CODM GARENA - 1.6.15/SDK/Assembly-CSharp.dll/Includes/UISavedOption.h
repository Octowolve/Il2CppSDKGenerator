#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UISavedOption
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UISavedOption"));
	}

	template <typename T = Il2CppString*> T& keyName() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& mList() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& mCheck() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& mSlider() {
		return *(T*)((uintptr_t)this + 0x18);
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
	template <typename T = uintptr_t> static T& __Hotfix0_SaveSelection() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SaveState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SaveProgress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = Il2CppString*> T get_key() {
		return ((T (*)(UISavedOption*))(Il2CppBase() + 0x2F9B1F0))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(UISavedOption*))(Il2CppBase() + 0x2F9B318))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(UISavedOption*))(Il2CppBase() + 0x2F9B414))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(UISavedOption*))(Il2CppBase() + 0x2F9B9E8))(this);
	}
	template <typename T = void> T SaveSelection() {
		return ((T (*)(UISavedOption*))(Il2CppBase() + 0x2F9BD50))(this);
	}
	template <typename T = void> T SaveState() {
		return ((T (*)(UISavedOption*))(Il2CppBase() + 0x2F9BE84))(this);
	}
	template <typename T = void> T SaveProgress() {
		return ((T (*)(UISavedOption*))(Il2CppBase() + 0x2F9BFC0))(this);
	}

};

}
