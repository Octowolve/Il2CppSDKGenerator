#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WeaponSignalFlareEffect
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeaponSignalFlareEffect"));
	}

	template <typename T = float> T& ShowTime() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& mCurrentTime() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& Effect() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T OnEnable() {
		return ((T (*)(WeaponSignalFlareEffect*))(Il2CppBase() + 0x4C55C88))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(WeaponSignalFlareEffect*))(Il2CppBase() + 0x4C55D50))(this);
	}

};

}
