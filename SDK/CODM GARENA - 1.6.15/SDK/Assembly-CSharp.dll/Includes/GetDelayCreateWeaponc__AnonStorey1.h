#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetDelayCreateWeaponcAnonStorey1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<GetDelayCreateWeapon>c__AnonStorey1"));
	}

	template <typename T = int32_t> T& actorID() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t e) {
		return ((T (*)(GetDelayCreateWeaponcAnonStorey1*, uintptr_t))(Il2CppBase() + 0x1948508))(this, e);
	}

};

}
