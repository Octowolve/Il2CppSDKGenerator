#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DelayActiveBagWeaponcAnonStorey1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<DelayActiveBagWeapon>c__AnonStorey1"));
	}

	template <typename T = int32_t> T& weaponActorID() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t a) {
		return ((T (*)(DelayActiveBagWeaponcAnonStorey1*, uintptr_t))(Il2CppBase() + 0x24E10DC))(this, a);
	}

};

}
