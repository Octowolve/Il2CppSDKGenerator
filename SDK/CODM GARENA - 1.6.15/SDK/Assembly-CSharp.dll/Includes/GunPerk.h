#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GunPerk
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GunPerk"));
	}

	template <typename T = uintptr_t> T& IconName() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = float> T& ShowTime() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = float> static T& AllShowTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyIconName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(GunPerk*))(Il2CppBase() + 0x474B57C))(this);
	}
	template <typename T = void> T OnNotifyIconName(uintptr_t message) {
		return ((T (*)(GunPerk*, uintptr_t))(Il2CppBase() + 0x474B708))(this, message);
	}
	template <typename T = void> T Update() {
		return ((T (*)(GunPerk*))(Il2CppBase() + 0x474B9E8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(GunPerk*))(Il2CppBase() + 0x474BC44))(this);
	}

};

}
