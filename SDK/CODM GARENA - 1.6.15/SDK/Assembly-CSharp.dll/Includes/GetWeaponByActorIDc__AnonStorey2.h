#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetWeaponByActorIDcAnonStorey2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<GetWeaponByActorID>c__AnonStorey2"));
	}

	template <typename T = int32_t> T& actorID() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t e) {
		return ((T (*)(GetWeaponByActorIDcAnonStorey2*, uintptr_t))(Il2CppBase() + 0x1948580))(this, e);
	}

};

}
