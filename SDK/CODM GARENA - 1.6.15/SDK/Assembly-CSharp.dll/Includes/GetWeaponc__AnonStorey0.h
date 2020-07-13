#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetWeaponcAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<GetWeapon>c__AnonStorey0"));
	}

	template <typename T = int32_t> T& actorID() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t e) {
		return ((T (*)(GetWeaponcAnonStorey0*, uintptr_t))(Il2CppBase() + 0x194853C))(this, e);
	}

};

}
