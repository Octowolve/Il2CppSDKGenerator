#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IsPlayerInPlayerListcAnonStorey1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<IsPlayerInPlayerList>c__AnonStorey1"));
	}

	template <typename T = uint64_t> T& playerId() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(IsPlayerInPlayerListcAnonStorey1*, uintptr_t))(Il2CppBase() + 0x2D23E3C))(this, it);
	}
	template <typename T = bool> T m__1(uintptr_t it) {
		return ((T (*)(IsPlayerInPlayerListcAnonStorey1*, uintptr_t))(Il2CppBase() + 0x2D23E88))(this, it);
	}
	template <typename T = bool> T m__2(uintptr_t it) {
		return ((T (*)(IsPlayerInPlayerListcAnonStorey1*, uintptr_t))(Il2CppBase() + 0x2D23ED4))(this, it);
	}

};

}
