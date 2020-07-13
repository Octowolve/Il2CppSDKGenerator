#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WeaponFireModeWest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeaponFireModeWest"));
	}

	template <typename T = float> T& mLastStopFireTime() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = bool> T& IsBeginStopFire() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsCanTriggerKnife() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = bool> T IsCanTriggerKnife() {
		return ((T (*)(WeaponFireModeWest*))(Il2CppBase() + 0x4C4BA94))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsCanTriggerKnife() {
		return ((T (*)(WeaponFireModeWest*))(Il2CppBase() + 0x4C4BBB8))(this);
	}

};

}
