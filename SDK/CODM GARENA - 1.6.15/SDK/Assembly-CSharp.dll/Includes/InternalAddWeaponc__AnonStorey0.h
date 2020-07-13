#pragma once
#include <Il2Cpp/Il2Cpp.h>

class InternalAddWeaponcAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<InternalAddWeapon>c__AnonStorey0"));
	}

	template <typename T = int32_t> T& weaponActorID() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t s) {
		return ((T (*)(InternalAddWeaponcAnonStorey0*, uintptr_t))(Il2CppBase() + 0x24E1200))(this, s);
	}

};

}
